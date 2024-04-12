#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters_3F_ (const GALGAS_lstring constinArgument_inString,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_14518 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 381)), EnumerationOrder::up) ;
  while (enumerator_14518.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_14543 = enumerator_14518.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 382)) ;
    {
    GALGAS_string joker_14642 ; // Joker input parameter
    var_explodedArray_14543.setter_popFirst (joker_14642, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 383)) ;
    }
    cEnumerator_stringlist enumerator_14655 (var_explodedArray_14543, EnumerationOrder::up) ;
    while (enumerator_14655.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_14655.current_mValue (HERE).getter_count (SOURCE_FILE ("type-dict.galgas", 385)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_14734 = enumerator_14655.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 386)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (ComparisonKind::notEqual, var_c_14734.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 388)) ;
            }
          }
        }
      }
      enumerator_14655.gotoNextObject () ;
    }
    enumerator_14518.gotoNextObject () ;
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
  cEnumerator_stringlist enumerator_15206 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 398)), EnumerationOrder::up) ;
  while (enumerator_15206.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_15231 = enumerator_15206.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 399)) ;
    {
    GALGAS_string joker_15330 ; // Joker input parameter
    var_explodedArray_15231.setter_popFirst (joker_15330, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 400)) ;
    }
    cEnumerator_stringlist enumerator_15343 (var_explodedArray_15231, EnumerationOrder::up) ;
    while (enumerator_15343.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_15343.current_mValue (HERE).getter_count (SOURCE_FILE ("type-dict.galgas", 402)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_15422 = enumerator_15343.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 403)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (ComparisonKind::notEqual, var_c_15422.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_c_15422.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-dict.galgas", 404)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 405)) ;
            }
          }
        }
      }
      enumerator_15343.gotoNextObject () ;
    }
    enumerator_15206.gotoNextObject () ;
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
  GALGAS_stringset temp_0 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 415)) ;
  result_result = temp_0 ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 416)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-dict.galgas", 417)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-dict.galgas", 418)) ;
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
  GALGAS_lstring var_nameForUsefulness_16446 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 433)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16446, var_nameForUsefulness_16446, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 434)) ;
  }
  const GALGAS_dictDeclarationAST temp_1 = this ;
  const GALGAS_dictDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_16599 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (temp_1.readProperty_mDictTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 435)), temp_2.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 435)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16446, var_elementTypeNameForUsefulness_16599 COMMA_SOURCE_FILE ("type-dict.galgas", 436)) ;
  }
  GALGAS_typedPropertyList temp_3 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 438)) ;
  GALGAS_typedPropertyList var_typedAttributeList_16866 = temp_3 ;
  GALGAS_propertyIndexMap temp_4 = GALGAS_propertyIndexMap::init (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 439)) ;
  GALGAS_propertyIndexMap var_attributeMap_16915 = temp_4 ;
  const GALGAS_dictDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_16980 (temp_5.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_16980.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_17029 = function_typeNameForUsefulEntitiesGraph (enumerator_16980.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 441)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16446, var_propertyTypeNameForUsefulness_17029 COMMA_SOURCE_FILE ("type-dict.galgas", 442)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_17221 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_16980.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 443)) ;
    GALGAS_bool var_hasSetter_17275 = GALGAS_bool (true) ;
    var_typedAttributeList_16866.addAssign_operation (var_t_17221, enumerator_16980.current_propertyName (HERE), enumerator_16980.current_initialization (HERE), var_hasSetter_17275, enumerator_16980.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 445)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 451)).getter_hasKey (enumerator_16980.current_propertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-dict.galgas", 451)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string var_m_17521 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_17598 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 453)), EnumerationOrder::up) ;
        while (enumerator_17598.hasCurrentObject ()) {
          var_m_17521.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_17598.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 454)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 454)) ;
          enumerator_17598.gotoNextObject () ;
        }
        var_m_17521.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 456)) ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_16980.current_propertyName (HERE).readProperty_location (), var_m_17521, fixItArray7  COMMA_SOURCE_FILE ("type-dict.galgas", 457)) ;
      }
    }
    {
    var_attributeMap_16915.setter_insertKey (enumerator_16980.current_propertyName (HERE), var_t_17221, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 459)) ;
    }
    enumerator_16980.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_8 = this ;
  const GALGAS_dictDeclarationAST temp_9 = this ;
  const GALGAS_dictDeclarationAST temp_10 = this ;
  const GALGAS_dictDeclarationAST temp_11 = this ;
  const GALGAS_dictDeclarationAST temp_12 = this ;
  const GALGAS_dictDeclarationAST temp_13 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("dict ").add_operation (temp_8.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 463)), GALGAS_dictTypeForGeneration::init_21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 465)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_10.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 466)), temp_11.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 466)), temp_12.readProperty_mDictTypeName (), var_typedAttributeList_16866, temp_13.readProperty_mKeyTypeName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 462)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_18881 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 490)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (inCompiler, var_selfTypeDefinition_18881.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 493)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-dict.galgas", 491))) ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_18881.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 498)), var_selfTypeDefinition_18881.readProperty_isConcrete (), var_selfTypeDefinition_18881.readProperty_initializerMap (), var_selfTypeDefinition_18881.readProperty_classFunctionMap (), var_selfTypeDefinition_18881.readProperty_getterMap (), var_selfTypeDefinition_18881.readProperty_setterMap (), var_selfTypeDefinition_18881.readProperty_instanceMethodMap (), var_selfTypeDefinition_18881.readProperty_classMethodMap (), var_selfTypeDefinition_18881.readProperty_optionalMethodMap (), var_selfTypeDefinition_18881.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_18881.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_18881.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_18881.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-dict.galgas", 496))), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 496)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 520)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 521)) ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  const GALGAS_dictTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 523)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-dict.galgas", 525)) COMMA_SOURCE_FILE ("type-dict.galgas", 522))) ;
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
  result_result = GALGAS_string ("map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 62)) ;
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
  GALGAS_propertyInCollectionListAST temp_0 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 265)) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_9742 = temp_0 ;
  var_structAttributeList_9742.addAssign_operation (GALGAS_bool (false), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("type-map.galgas", 268)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 269)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-map.galgas", 270)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("type-map.galgas", 272))  COMMA_SOURCE_FILE ("type-map.galgas", 266)) ;
  const GALGAS_mapDeclarationAST temp_1 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10016 (temp_1.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_10016.hasCurrentObject ()) {
    var_structAttributeList_9742.addAssign_operation (GALGAS_bool (false), enumerator_10016.current_propertyTypeName (HERE), enumerator_10016.current_propertyName (HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-map.galgas", 278)), enumerator_10016.current_hasSelector (HERE), enumerator_10016.current_initialization (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 274)) ;
    enumerator_10016.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_2 = this ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  const GALGAS_mapDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_ (temp_2.readProperty_isPredefined (), GALGAS_lstring::init_21__21_ (temp_3.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 284)), temp_4.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_structAttributeList_9742, GALGAS_string::makeEmptyString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 282)) ;
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
  GALGAS_lstring var_key_11258 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 301)), temp_1.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_mapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11258, temp_2, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 302)) ;
  }
  const GALGAS_mapDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11410 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_11410.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_11410.current_propertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 304)), enumerator_11410.current_propertyTypeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("type-map.galgas", 304)) ;
    }
    enumerator_11410.gotoNextObject () ;
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
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_12342 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeIndex_12342, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 321)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringTypeIndex_12434 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_12434, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 323)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 325)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_12434, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 325)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_12514 = temp_0 ;
  GALGAS_classFunctionMap temp_1 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 327)) ;
  GALGAS_classFunctionMap var_classFunctionMap_12596 = temp_1 ;
  GALGAS_getterMap var_getterMap_12677 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_12677, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 328)) ;
  }
  GALGAS_setterMap temp_2 = GALGAS_setterMap::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 329)) ;
  GALGAS_setterMap var_setterMap_12705 = temp_2 ;
  GALGAS_instanceMethodMap temp_3 = GALGAS_instanceMethodMap::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 330)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_12746 = temp_3 ;
  {
  const GALGAS_mapDeclarationAST temp_4 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_12596, ioArgument_ioTypeMap, GALGAS_string ("emptyMap"), temp_4.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 332)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_5 = this ;
  const GALGAS_mapDeclarationAST temp_6 = this ;
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_12596, ioArgument_ioTypeMap, GALGAS_string ("mapWithMapToOverride"), temp_5.readProperty_mMapTypeName ().readProperty_string (), GALGAS_string ("inMap"), temp_6.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 339)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12677, ioArgument_ioTypeMap, GALGAS_string ("levels"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 349)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12677, ioArgument_ioTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 357)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12677, ioArgument_ioTypeMap, GALGAS_string ("keySet"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 368)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12677, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 376)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12677, ioArgument_ioTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 384)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12677, ioArgument_ioTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 393)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_7 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12677, ioArgument_ioTypeMap, GALGAS_string ("overriddenMap"), GALGAS_string::makeEmptyString (), temp_7.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 402)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_12677, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 410)) ;
  }
  GALGAS_formalParameterSignature temp_8 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 419)) ;
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_14847 = temp_8 ;
  GALGAS_typedPropertyList temp_9 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 420)) ;
  GALGAS_typedPropertyList var_typedPropertyList_14916 = temp_9 ;
  GALGAS_optionalMethodSignature temp_10 = GALGAS_optionalMethodSignature::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 421)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_14990 = temp_10 ;
  var_optionalMethodSignature_14990.addAssign_operation (GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 424)), var_stringTypeIndex_12342, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 422)) ;
  GALGAS_functionSignature temp_11 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 427)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_15135 = temp_11 ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_15135.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 429)), var_lstringTypeIndex_12434, GALGAS_string ("lkey"), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-map.galgas", 428)) ;
  var_insertMethodFormalArgumentList_14847.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 434)), var_lstringTypeIndex_12434, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 436)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 433)) ;
  GALGAS_formalParameterSignature temp_12 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 438)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_15488 = temp_12 ;
  var_removeMethodFormalArgumentList_15488.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 440)), var_lstringTypeIndex_12434, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 442)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 439)) ;
  GALGAS_unifiedTypeMapEntryList temp_13 = GALGAS_unifiedTypeMapEntryList::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 444)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_15700 = temp_13 ;
  const GALGAS_mapDeclarationAST temp_14 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_15794 (temp_14.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_15794.hasCurrentObject ()) {
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = enumerator_15794.current_initialization (HERE).getter_isSome (SOURCE_FILE ("type-map.galgas", 446)).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_15794.current_propertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a map"), fixItArray16  COMMA_SOURCE_FILE ("type-map.galgas", 447)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_16008 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_15794.current_propertyTypeName (HERE), var_attributeTypeIndex_16008, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 449)) ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_15135.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 450)), var_attributeTypeIndex_16008, enumerator_15794.current_propertyName (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-map.galgas", 450)) ;
    var_typedPropertyList_14916.addAssign_operation (var_attributeTypeIndex_16008, enumerator_15794.current_propertyName (HERE), enumerator_15794.current_initialization (HERE), GALGAS_bool (true), enumerator_15794.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 451)) ;
    var_typesToIncludeInHeaderCompilation_15700.addAssign_operation (var_attributeTypeIndex_16008  COMMA_SOURCE_FILE ("type-map.galgas", 452)) ;
    var_enumerationDescriptor_12514.addAssign_operation (var_attributeTypeIndex_16008, enumerator_15794.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 453)) ;
    GALGAS_lstring temp_17 ;
    const enumGalgasBool test_18 = enumerator_15794.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_18) {
      temp_17 = enumerator_15794.current_propertyName (HERE) ;
    }else if (kBoolFalse == test_18) {
      temp_17 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 455)) ;
    }
    var_insertMethodFormalArgumentList_14847.addAssign_operation (temp_17, var_attributeTypeIndex_16008, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 457)), enumerator_15794.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 454)) ;
    GALGAS_lstring temp_19 ;
    const enumGalgasBool test_20 = enumerator_15794.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_20) {
      temp_19 = enumerator_15794.current_propertyName (HERE) ;
    }else if (kBoolFalse == test_20) {
      temp_19 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 460)) ;
    }
    var_removeMethodFormalArgumentList_15488.addAssign_operation (temp_19, var_attributeTypeIndex_16008, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-map.galgas", 462)), enumerator_15794.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 459)) ;
    GALGAS_lstring temp_21 ;
    const enumGalgasBool test_22 = enumerator_15794.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_22) {
      temp_21 = enumerator_15794.current_propertyName (HERE) ;
    }else if (kBoolFalse == test_22) {
      temp_21 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 466)) ;
    }
    var_optionalMethodSignature_14990.addAssign_operation (GALGAS_bool (false), temp_21, var_attributeTypeIndex_16008, enumerator_15794.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 464)) ;
    enumerator_15794.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_23 = this ;
  cEnumerator_insertMethodListAST enumerator_16978 (temp_23.readProperty_mInsertMethodList (), EnumerationOrder::up) ;
  while (enumerator_16978.hasCurrentObject ()) {
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      test_24 = var_setterMap_12705.getter_hasKey (enumerator_16978.current_mInsertMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 472)).boolEnum () ;
      if (kBoolTrue == test_24) {
        TC_Array <FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (enumerator_16978.current_mInsertMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_16978.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 473)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 473)), fixItArray25  COMMA_SOURCE_FILE ("type-map.galgas", 473)) ;
      }
    }
    if (kBoolFalse == test_24) {
      {
      var_setterMap_12705.setter_insertOrReplace (enumerator_16978.current_mInsertMethodName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 477)), var_insertMethodFormalArgumentList_14847, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 480)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 475)) ;
      }
    }
    enumerator_16978.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_26 = this ;
  cEnumerator_mapRemoveMethodListAST enumerator_17441 (temp_26.readProperty_mRemoveMethodList (), EnumerationOrder::up) ;
  while (enumerator_17441.hasCurrentObject ()) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      test_27 = var_setterMap_12705.getter_hasKey (enumerator_17441.current_mMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 487)).boolEnum () ;
      if (kBoolTrue == test_27) {
        TC_Array <FixItDescription> fixItArray28 ;
        inCompiler->emitSemanticError (enumerator_17441.current_mMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17441.current_mMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 488)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 488)), fixItArray28  COMMA_SOURCE_FILE ("type-map.galgas", 488)) ;
      }
    }
    if (kBoolFalse == test_27) {
      {
      var_setterMap_12705.setter_insertOrReplace (enumerator_17441.current_mMethodName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 492)), var_removeMethodFormalArgumentList_15488, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 495)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 490)) ;
      }
    }
    enumerator_17441.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_29 = this ;
  cEnumerator_mapSearchMethodListAST enumerator_17932 (temp_29.readProperty_mSearchMethodList (), EnumerationOrder::up) ;
  while (enumerator_17932.hasCurrentObject ()) {
    {
    var_instanceMethodMap_12746.setter_insertKey (enumerator_17932.current_mSearchMethodName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 504)), var_removeMethodFormalArgumentList_15488, enumerator_17932.current_mSearchMethodName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 508)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 502)) ;
    }
    enumerator_17932.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_30 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_18267 (temp_30.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_18267.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_18303 = GALGAS_lstring::init_21__21_ (enumerator_18267.current_propertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 514)), enumerator_18267.current_propertyName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_18436 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18267.current_propertyTypeName (HERE), var_attributeTypeIndex_18436, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 515)) ;
    }
    {
    GALGAS_functionSignature temp_31 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 519)) ;
    temp_31.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 519)), var_stringTypeIndex_12342, GALGAS_string ("inKey"), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-map.galgas", 519)) ;
    var_getterMap_12677.setter_insertOrReplace (var_accessorName_18303, GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 518)), temp_31, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 520)), GALGAS_bool (true), var_attributeTypeIndex_18436, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 523)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 516)) ;
    }
    enumerator_18267.gotoNextObject () ;
  }
  enumGalgasBool test_32 = kBoolTrue ;
  if (kBoolTrue == test_32) {
    const GALGAS_mapDeclarationAST temp_33 = this ;
    test_32 = GALGAS_bool (ComparisonKind::greaterOrEqual, temp_33.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("type-map.galgas", 528)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_32) {
      GALGAS_location var_insertOrReplaceLocation_18913 ;
      const GALGAS_mapDeclarationAST temp_34 = this ;
      temp_34.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceLocation_18913, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 529)) ;
      {
      var_setterMap_12705.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation_18913, inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 532)), var_insertMethodFormalArgumentList_14847, GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 535)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 530)) ;
      }
    }
  }
  const GALGAS_mapDeclarationAST temp_35 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_19280 (temp_35.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_19280.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_19316 = GALGAS_lstring::init_21__21_ (GALGAS_string ("set").add_operation (enumerator_19280.current_propertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-map.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 542)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 542)), enumerator_19280.current_propertyName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_19545 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_19280.current_propertyTypeName (HERE), var_attributeTypeIndex_19545, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 545)) ;
    }
    GALGAS_formalParameterSignature temp_36 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 549)) ;
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_19604 = temp_36 ;
    var_accessorFormalArgumentList_19604.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 550)), var_attributeTypeIndex_19545, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 550)), enumerator_19280.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 550)) ;
    var_accessorFormalArgumentList_19604.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 551)), var_stringTypeIndex_12342, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 551)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-map.galgas", 551)) ;
    {
    var_setterMap_12705.setter_insertOrReplace (var_accessorName_19316, GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-map.galgas", 554)), var_accessorFormalArgumentList_19604, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-map.galgas", 557)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 552)) ;
    }
    enumerator_19280.gotoNextObject () ;
  }
  GALGAS_optionalMethodMap temp_37 = GALGAS_optionalMethodMap::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 562)) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_20079 = temp_37 ;
  {
  var_optionalMethodMap_20079.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 563)), var_optionalMethodSignature_14990, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 563)) ;
  }
  GALGAS_initializerMap temp_38 = GALGAS_initializerMap::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 565)) ;
  GALGAS_initializerMap var_initializerMap_20264 = temp_38 ;
  GALGAS_functionSignature temp_39 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 566)) ;
  GALGAS_functionSignature var_emptyArgumentList_20310 = temp_39 ;
  {
  const GALGAS_mapDeclarationAST temp_40 = this ;
  var_initializerMap_20264.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_20310, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 568)), temp_40.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_20310, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 567)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_41 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_41.readProperty_mMapTypeName (), GALGAS_bool (false), var_initializerMap_20264, var_getterMap_12677, var_setterMap_12705, var_instanceMethodMap_12746, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 572)) ;
  }
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_21049 ;
  {
  const GALGAS_mapDeclarationAST temp_42 = this ;
  const GALGAS_mapDeclarationAST temp_43 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_42.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 589)), temp_43.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_elementTypeEntry_21049, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 588)) ;
  }
  const GALGAS_mapDeclarationAST temp_44 = this ;
  const GALGAS_mapDeclarationAST temp_45 = this ;
  GALGAS_typedPropertyList temp_46 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 600)) ;
  GALGAS_propertyMap temp_47 = GALGAS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 601)) ;
  GALGAS_classMethodMap temp_48 = GALGAS_classMethodMap::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 608)) ;
  const GALGAS_mapDeclarationAST temp_49 = this ;
  GALGAS_mapSearchMethodListAST temp_50 = GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 614)) ;
  const GALGAS_mapDeclarationAST temp_51 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_21099 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21__21__21__21__21_generateHeaderInSeparateFile_21__21_defaultConstructorName_21__21_headerKind (temp_44.readProperty_mMapTypeName (), temp_45.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-map.galgas", 597)), GALGAS_typeKindEnum::class_func_mapType (SOURCE_FILE ("type-map.galgas", 598)), GALGAS_bool (true), temp_46, temp_47, var_typedPropertyList_14916, var_initializerMap_20264, var_classFunctionMap_12596, var_getterMap_12677, var_setterMap_12705, var_instanceMethodMap_12746, temp_48, var_optionalMethodMap_20079, var_enumerationDescriptor_12514, GALGAS_operators::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("type-map.galgas", 611)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-map.galgas", 611)) COMMA_SOURCE_FILE ("type-map.galgas", 611)).operator_or (GALGAS_operators::class_func_supportWithAccessor (SOURCE_FILE ("type-map.galgas", 611)) COMMA_SOURCE_FILE ("type-map.galgas", 611)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("type-map.galgas", 611)) COMMA_SOURCE_FILE ("type-map.galgas", 611)).operator_or (GALGAS_operators::class_func_infixAddOperator (SOURCE_FILE ("type-map.galgas", 611)) COMMA_SOURCE_FILE ("type-map.galgas", 611)), var_argumentTypeListForAddAssignWithFieldExpressionList_15135, temp_49.readProperty_mSearchMethodList (), temp_50, GALGAS_bool (false), var_elementTypeEntry_21049, GALGAS_string::makeEmptyString (), GALGAS_string ("map-").add_operation (temp_51.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-map.galgas", 618)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 618)), GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("type-map.galgas", 619)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_21099.readProperty_typeName (), var_typeDefinition_21099, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 621)) ;
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
  GALGAS_lstring var_nameForUsefulness_23430 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 650)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_23430, var_nameForUsefulness_23430, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 651)) ;
  }
  const GALGAS_mapDeclarationAST temp_1 = this ;
  const GALGAS_mapDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_23582 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (temp_1.readProperty_mMapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 652)), temp_2.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 652)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_23430, var_elementTypeNameForUsefulness_23582 COMMA_SOURCE_FILE ("type-map.galgas", 653)) ;
  }
  GALGAS_typedPropertyList temp_3 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 655)) ;
  GALGAS_typedPropertyList var_typedAttributeList_23845 = temp_3 ;
  GALGAS_propertyIndexMap temp_4 = GALGAS_propertyIndexMap::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 656)) ;
  GALGAS_propertyIndexMap var_attributeMap_23894 = temp_4 ;
  const GALGAS_mapDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_23956 (temp_5.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_23956.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_24005 = function_typeNameForUsefulEntitiesGraph (enumerator_23956.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 658)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_23430, var_propertyTypeNameForUsefulness_24005 COMMA_SOURCE_FILE ("type-map.galgas", 659)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_24205 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_23956.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 660)) ;
    GALGAS_bool var_hasSelector_24267 = GALGAS_bool (false) ;
    var_typedAttributeList_23845.addAssign_operation (var_t_24205, enumerator_23956.current_propertyName (HERE), enumerator_23956.current_initialization (HERE), GALGAS_bool (true), var_hasSelector_24267  COMMA_SOURCE_FILE ("type-map.galgas", 662)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 668)).getter_hasKey (enumerator_23956.current_propertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 668)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string var_m_24511 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_24588 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 670)), EnumerationOrder::up) ;
        while (enumerator_24588.hasCurrentObject ()) {
          var_m_24511.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_24588.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 671)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 671)) ;
          enumerator_24588.gotoNextObject () ;
        }
        var_m_24511.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 673)) ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_23956.current_propertyName (HERE).readProperty_location (), var_m_24511, fixItArray7  COMMA_SOURCE_FILE ("type-map.galgas", 674)) ;
      }
    }
    {
    var_attributeMap_23894.setter_insertKey (enumerator_23956.current_propertyName (HERE), var_t_24205, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 676)) ;
    }
    enumerator_23956.gotoNextObject () ;
  }
  GALGAS_insertMethodMap temp_8 = GALGAS_insertMethodMap::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 679)) ;
  GALGAS_insertMethodMap var_insertMethodMap_24805 = temp_8 ;
  const GALGAS_mapDeclarationAST temp_9 = this ;
  cEnumerator_insertMethodListAST enumerator_24866 (temp_9.readProperty_mInsertMethodList (), EnumerationOrder::up) ;
  while (enumerator_24866.hasCurrentObject ()) {
    {
    var_insertMethodMap_24805.setter_insertKey (enumerator_24866.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 681)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_24866.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 682)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_24866.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 683)) ;
    }
    enumerator_24866.gotoNextObject () ;
  }
  GALGAS_searchMethodMap temp_10 = GALGAS_searchMethodMap::init (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 686)) ;
  GALGAS_searchMethodMap var_searchMethodMap_25128 = temp_10 ;
  const GALGAS_mapDeclarationAST temp_11 = this ;
  cEnumerator_mapSearchMethodListAST enumerator_25175 (temp_11.readProperty_mSearchMethodList (), EnumerationOrder::up) ;
  while (enumerator_25175.hasCurrentObject ()) {
    {
    var_searchMethodMap_25128.setter_insertKey (enumerator_25175.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 688)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_25175.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 689)) ;
    }
    enumerator_25175.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_12 = this ;
  cEnumerator_mapRemoveMethodListAST enumerator_25370 (temp_12.readProperty_mRemoveMethodList (), EnumerationOrder::up) ;
  while (enumerator_25370.hasCurrentObject ()) {
    {
    var_insertMethodMap_24805.setter_insertKey (enumerator_25370.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 693)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_25370.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 694)) ;
    }
    enumerator_25370.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_13 = this ;
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_25587 (temp_13.readProperty_mInsertOrReplaceDeclarationListAST (), EnumerationOrder::up) ;
  GALGAS_uint index_25582 (uint32_t (0)) ;
  while (enumerator_25587.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (ComparisonKind::greaterThan, index_25582.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticWarning (enumerator_25587.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared"), fixItArray15  COMMA_SOURCE_FILE ("type-map.galgas", 699)) ;
      }
    }
    enumerator_25587.gotoNextObject () ;
    index_25582.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 697)) ;
  }
  const GALGAS_mapDeclarationAST temp_16 = this ;
  GALGAS_bool var_hasInsertOrReplaceModifier_25823 = GALGAS_bool (ComparisonKind::greaterThan, temp_16.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("type-map.galgas", 702)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = var_hasInsertOrReplaceModifier_25823.operator_and (var_insertMethodMap_24805.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("type-map.galgas", 703)) COMMA_SOURCE_FILE ("type-map.galgas", 703)).boolEnum () ;
    if (kBoolTrue == test_17) {
      GALGAS_location var_insertOrReplaceDeclarationLocation_26043 ;
      const GALGAS_mapDeclarationAST temp_18 = this ;
      temp_18.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceDeclarationLocation_26043, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 704)) ;
      TC_Array <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_26043, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray19  COMMA_SOURCE_FILE ("type-map.galgas", 705)) ;
    }
  }
  const GALGAS_mapDeclarationAST temp_20 = this ;
  const GALGAS_mapDeclarationAST temp_21 = this ;
  const GALGAS_mapDeclarationAST temp_22 = this ;
  const GALGAS_mapDeclarationAST temp_23 = this ;
  const GALGAS_mapDeclarationAST temp_24 = this ;
  const GALGAS_mapDeclarationAST temp_25 = this ;
  const GALGAS_mapDeclarationAST temp_26 = this ;
  const GALGAS_mapDeclarationAST temp_27 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (temp_20.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 710)), GALGAS_mapTypeForGeneration::init_21__21__21__21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_21.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 712)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_22.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 713)), temp_23.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 713)), temp_24.readProperty_mMapTypeName (), var_typedAttributeList_23845, temp_25.readProperty_mInsertMethodList (), temp_26.readProperty_mSearchMethodList (), temp_27.readProperty_mRemoveMethodList (), var_hasInsertOrReplaceModifier_25823, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 709)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_27627 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 743)) ;
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, var_selfTypeDefinition_27627.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 746)), temp_2.readProperty_mTypedAttributeList (), temp_3.readProperty_mSearchMethodList () COMMA_SOURCE_FILE ("type-map.galgas", 744))) ;
  const GALGAS_mapTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_27627.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 752)), var_selfTypeDefinition_27627.readProperty_isConcrete (), var_selfTypeDefinition_27627.readProperty_initializerMap (), var_selfTypeDefinition_27627.readProperty_classFunctionMap (), var_selfTypeDefinition_27627.readProperty_getterMap (), var_selfTypeDefinition_27627.readProperty_setterMap (), var_selfTypeDefinition_27627.readProperty_instanceMethodMap (), var_selfTypeDefinition_27627.readProperty_classMethodMap (), var_selfTypeDefinition_27627.readProperty_optionalMethodMap (), var_selfTypeDefinition_27627.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_27627.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_27627.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_27627.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-map.galgas", 750))), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 750)) ;
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
  cEnumerator_typedPropertyList enumerator_28838 (temp_0.readProperty_mTypedAttributeList (), EnumerationOrder::up) ;
  while (enumerator_28838.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_28838.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 775)) ;
    enumerator_28838.gotoNextObject () ;
  }
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_28928 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 777)) ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, var_selfTypeDefinition_28928.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 780)), temp_3.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-map.galgas", 778))) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 791)) ;
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 792)) ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_29573 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 793)) ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  const GALGAS_mapTypeForGeneration temp_4 = this ;
  const GALGAS_mapTypeForGeneration temp_5 = this ;
  const GALGAS_mapTypeForGeneration temp_6 = this ;
  const GALGAS_mapTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_29573.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-map.galgas", 795)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mInsertMethodList (), temp_5.readProperty_mSearchMethodList (), temp_6.readProperty_mRemoveMethodList (), temp_7.readProperty_mHasInsertOrReplaceModifier () COMMA_SOURCE_FILE ("type-map.galgas", 794))) ;
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
  GALGAS_lstring var_key_5662 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 149)), temp_1.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5662, temp_2, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 150)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5828 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_5828.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_5828.current_propertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 152)), enumerator_5828.current_propertyTypeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 152)) ;
    }
    enumerator_5828.gotoNextObject () ;
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
  GALGAS_propertyInCollectionListAST temp_0 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 162)) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_6353 = temp_0 ;
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_6442 (temp_1.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_6442.hasCurrentObject ()) {
    var_structAttributeList_6353.addAssign_operation (enumerator_6442.current_isConstant (HERE), enumerator_6442.current_propertyTypeName (HERE), enumerator_6442.current_propertyName (HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("type-sorted-list.galgas", 168)), enumerator_6442.current_hasSelector (HERE), enumerator_6442.current_initialization (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 164)) ;
    enumerator_6442.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  const GALGAS_sortedListDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_ (temp_2.readProperty_isPredefined (), GALGAS_lstring::init_21__21_ (temp_3.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 174)), temp_4.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_structAttributeList_6353, GALGAS_string::makeEmptyString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 172)) ;
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
  GALGAS_optionalMethodMap temp_0 = GALGAS_optionalMethodMap::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 190)) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_7544 = temp_0 ;
  GALGAS_unifiedTypeMapEntry var_listTypeIndex_7660 ;
  {
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mSortedListTypeName (), var_listTypeIndex_7660, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 192)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_7865 ;
  {
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_2.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 195)), temp_3.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_listElementTypeIndex_7865, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 194)) ;
  }
  GALGAS_enumerationDescriptorList temp_4 = GALGAS_enumerationDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 199)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_7952 = temp_4 ;
  GALGAS_functionSignature temp_5 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 200)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_8005 = temp_5 ;
  GALGAS_formalParameterSignature temp_6 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 201)) ;
  GALGAS_formalParameterSignature var_setterFormalOutputArgumentList_8072 = temp_6 ;
  GALGAS_formalParameterSignature temp_7 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 202)) ;
  GALGAS_formalParameterSignature var_setterFormalInputArgumentList_8141 = temp_7 ;
  GALGAS_typedPropertyList temp_8 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 203)) ;
  GALGAS_typedPropertyList var_typedAttributeList_8202 = temp_8 ;
  const GALGAS_sortedListDeclarationAST temp_9 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_8270 (temp_9.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_8270.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_8361 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8270.current_propertyTypeName (HERE), var_attributeTypeIndex_8361, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 205)) ;
    }
    GALGAS_bool var_hasSelector_8389 = GALGAS_bool (false) ;
    var_typedAttributeList_8202.addAssign_operation (var_attributeTypeIndex_8361, enumerator_8270.current_propertyName (HERE), enumerator_8270.current_initialization (HERE), GALGAS_bool (true), var_hasSelector_8389  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 207)) ;
    var_enumerationDescriptor_7952.addAssign_operation (var_attributeTypeIndex_8361, enumerator_8270.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 208)) ;
    var_constructorAttributeTypeList_8005.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 209)), var_attributeTypeIndex_8361, enumerator_8270.current_propertyName (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 209)) ;
    var_setterFormalOutputArgumentList_8072.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 210)), var_attributeTypeIndex_8361, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("type-sorted-list.galgas", 210)), enumerator_8270.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 210)) ;
    var_setterFormalInputArgumentList_8141.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 211)), var_attributeTypeIndex_8361, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("type-sorted-list.galgas", 211)), enumerator_8270.current_propertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 211)) ;
    enumerator_8270.gotoNextObject () ;
  }
  GALGAS_classFunctionMap temp_10 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 214)) ;
  GALGAS_classFunctionMap var_classFunctionMap_8963 = temp_10 ;
  {
  const GALGAS_sortedListDeclarationAST temp_11 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_8963, ioArgument_ioTypeMap, GALGAS_string ("emptySortedList"), temp_11.readProperty_mSortedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 215)) ;
  }
  {
  var_classFunctionMap_8963.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("sortedListWithValue"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 223)), inCompiler COMMA_HERE), var_constructorAttributeTypeList_8005, GALGAS_bool (false), var_listTypeIndex_7660, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 222)) ;
  }
  GALGAS_getterMap var_getterMap_9398 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_9398, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 229)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_9398, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 230)) ;
  }
  GALGAS_setterMap temp_12 = GALGAS_setterMap::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 239)) ;
  GALGAS_setterMap var_setterMap_9628 = temp_12 ;
  {
  var_setterMap_9628.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("popGreatest"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 241)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 242)), var_setterFormalOutputArgumentList_8072, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 245)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 240)) ;
  }
  {
  var_setterMap_9628.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("popSmallest"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 249)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 250)), var_setterFormalOutputArgumentList_8072, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 253)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 248)) ;
  }
  {
  var_setterMap_9628.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("insert"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 257)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 258)), var_setterFormalInputArgumentList_8141, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 261)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 256)) ;
  }
  GALGAS_instanceMethodMap temp_13 = GALGAS_instanceMethodMap::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 265)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_10339 = temp_13 ;
  {
  var_instanceMethodMap_10339.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("greatest"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 267)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 268)), var_setterFormalOutputArgumentList_8072, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 270)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 272)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 266)) ;
  }
  {
  var_instanceMethodMap_10339.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("smallest"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 276)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 277)), var_setterFormalOutputArgumentList_8072, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 279)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 281)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 275)) ;
  }
  GALGAS_initializerMap temp_14 = GALGAS_initializerMap::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 285)) ;
  GALGAS_initializerMap var_initializerMap_10897 = temp_14 ;
  GALGAS_functionSignature temp_15 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 286)) ;
  GALGAS_functionSignature var_emptyArgumentList_10943 = temp_15 ;
  {
  const GALGAS_sortedListDeclarationAST temp_16 = this ;
  var_initializerMap_10897.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_10943, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 288)), temp_16.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_10943, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 287)) ;
  }
  {
  const GALGAS_sortedListDeclarationAST temp_17 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_17.readProperty_mSortedListTypeName (), GALGAS_bool (false), var_initializerMap_10897, var_getterMap_9398, var_setterMap_9628, var_instanceMethodMap_10339, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 292)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_18 = this ;
  const GALGAS_sortedListDeclarationAST temp_19 = this ;
  GALGAS_propertyMap temp_20 = GALGAS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 316)) ;
  GALGAS_typedPropertyList temp_21 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 317)) ;
  GALGAS_classMethodMap temp_22 = GALGAS_classMethodMap::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 323)) ;
  GALGAS_mapSearchMethodListAST temp_23 = GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 328)) ;
  GALGAS_mapSearchMethodListAST temp_24 = GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 329)) ;
  const GALGAS_sortedListDeclarationAST temp_25 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_11549 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21__21__21__21__21_generateHeaderInSeparateFile_21__21_defaultConstructorName_21__21_headerKind (temp_18.readProperty_mSortedListTypeName (), temp_19.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-sorted-list.galgas", 312)), GALGAS_typeKindEnum::class_func_sortedListType (SOURCE_FILE ("type-sorted-list.galgas", 313)), GALGAS_bool (true), var_typedAttributeList_8202, temp_20, temp_21, var_initializerMap_10897, var_classFunctionMap_8963, var_getterMap_9398, var_setterMap_9628, var_instanceMethodMap_10339, temp_22, var_optionalMethodMap_7544, var_enumerationDescriptor_7952, GALGAS_operators::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("type-sorted-list.galgas", 326)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("type-sorted-list.galgas", 326)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 326)), var_constructorAttributeTypeList_8005, temp_23, temp_24, GALGAS_bool (false), var_listElementTypeIndex_7865, GALGAS_string::makeEmptyString (), GALGAS_string ("-sortedlist-").add_operation (temp_25.readProperty_mSortedListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-sorted-list.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 333)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-sorted-list.galgas", 334)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_11549.readProperty_typeName (), var_typeDefinition_11549, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 336)) ;
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
  GALGAS_lstring var_sortedListNameForUsefulness_13417 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 353)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_sortedListNameForUsefulness_13417, var_sortedListNameForUsefulness_13417, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 354)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_13606 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (temp_1.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 355)), temp_2.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 355)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_13417, var_elementTypeNameForUsefulness_13606 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 356)) ;
  }
  GALGAS_typedPropertyList temp_3 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 358)) ;
  GALGAS_typedPropertyList var_typedAttributeList_13866 = temp_3 ;
  GALGAS_propertyIndexMap temp_4 = GALGAS_propertyIndexMap::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 359)) ;
  GALGAS_propertyIndexMap var_attributeMap_13934 = temp_4 ;
  const GALGAS_sortedListDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_13996 (temp_5.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_13996.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_14045 = function_typeNameForUsefulEntitiesGraph (enumerator_13996.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 361)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_13417, var_propertyTypeNameForUsefulness_14045 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 362)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_14234 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_13996.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 363)) ;
    GALGAS_bool var_hasSelector_14296 = GALGAS_bool (true) ;
    var_typedAttributeList_13866.addAssign_operation (var_t_14234, enumerator_13996.current_propertyName (HERE), enumerator_13996.current_initialization (HERE), GALGAS_bool (true), var_hasSelector_14296  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 365)) ;
    {
    var_attributeMap_13934.setter_insertKey (enumerator_13996.current_propertyName (HERE), var_t_14234, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 371)) ;
    }
    enumerator_13996.gotoNextObject () ;
  }
  GALGAS_stringset temp_6 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 374)) ;
  GALGAS_stringset var_attributesUsedForSorting_14541 = temp_6 ;
  GALGAS_sortDescriptorListForGeneration temp_7 = GALGAS_sortDescriptorListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 375)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList_14611 = temp_7 ;
  const GALGAS_sortedListDeclarationAST temp_8 = this ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_14664 (temp_8.readProperty_mSortDescriptorList (), EnumerationOrder::up) ;
  while (enumerator_14664.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_type_14783 ;
    var_attributeMap_13934.method_searchKey (enumerator_14664.current_mSortedAttributeName (HERE), var_type_14783, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 377)) ;
    var_sortDescriptorList_14611.addAssign_operation (var_type_14783, enumerator_14664.current_mSortedAttributeName (HERE).readProperty_string (), enumerator_14664.current_mAscending (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 378)) ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = var_attributesUsedForSorting_14541.getter_hasKey (enumerator_14664.current_mSortedAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 379)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_14664.current_mSortedAttributeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_14664.current_mSortedAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 380)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 380)), fixItArray10  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 380)) ;
      }
    }
    var_attributesUsedForSorting_14541.addAssign_operation (enumerator_14664.current_mSortedAttributeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 382)) ;
    enumerator_14664.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_11 = this ;
  const GALGAS_sortedListDeclarationAST temp_12 = this ;
  const GALGAS_sortedListDeclarationAST temp_13 = this ;
  const GALGAS_sortedListDeclarationAST temp_14 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (temp_11.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 386)), GALGAS_sortedListTypeForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 388)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_13.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 389)), temp_14.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 389)), var_typedAttributeList_13866, var_sortDescriptorList_14611, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 385)) ;
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
                                                                                                     const GALGAS_sortDescriptorListForGeneration & in_SORT_5F_ATTRIBUTE_5F_LIST
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cSortedListElement {\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_2D_element mObject ;\n\n//--- Constructor\n  public: cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_568_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_568 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_568.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_568.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_568.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue ()) ;
      if (enumerator_568.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_568_.increment () ;
      enumerator_568.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cSortedListElement * copy (void) ;\n\n//--- Virtual method for comparing elements\n  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;\n\n//--- Description\n public: virtual void description (String & ioString, const int32_t inIndentation) const ;\n\n//--- Virtual method that comparing element for sorting\n  public: virtual ComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\ncSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1642_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1642 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1642.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1642.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 39)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_1642.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 39)).stringValue ()) ;
      if (enumerator_1642.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1642_.increment () ;
      enumerator_1642.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\ncSortedListElement (THERE),\nmObject (") ;
  GALGAS_uint index_1937_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1937 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1937.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1937.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 47)).stringValue ()) ;
      if (enumerator_1937.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_1937_.increment () ;
      enumerator_1937.gotoNextObject () ;
    }
  }
  result.appendString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mObject.isValid () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncSortedListElement * cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copy (void) {\n  cSortedListElement * result = nullptr ;\n  macroMyNew (result, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_2590_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2590 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2590.hasCurrentObject ()) {
      result.appendString ("mObject.mProperty_") ;
      result.appendString (enumerator_2590.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 65)).stringValue ()) ;
      if (enumerator_2590.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_2590_.increment () ;
      enumerator_2590.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_HERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString, const int32_t inIndentation) const {\n") ;
  GALGAS_uint index_3024_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3024 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3024.hasCurrentObject ()) {
      result.appendString ("  ioString.appendNewLine () ;\n  ioString.appendStringMultiple (\"| \", inIndentation) ;\n  ioString.appendCString (") ;
      result.appendString (enumerator_3024.current_name (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 79)).stringValue ()) ;
      result.appendString (" \":\") ;\n  mObject.mProperty_") ;
      result.appendString (enumerator_3024.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 80)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation) ;\n") ;
      index_3024_.increment () ;
      enumerator_3024.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::compare (const cCollectionElement * inOperand) const {\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * operand = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inOperand ;\n  macroValidSharedObject (operand, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  return mObject.objectCompare (operand->mObject) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_sortedlist () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::compareForSorting (const cSortedListElement * inOperand) const {\n  ComparisonResult result = ComparisonResult::operandEqual ;\n  const cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * operand = (const cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inOperand ;\n  macroValidSharedObject (operand, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_4553_ (0) ;
  if (in_SORT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_sortDescriptorListForGeneration enumerator_4553 (in_SORT_5F_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4553.hasCurrentObject ()) {
      result.appendString ("  if (result == ComparisonResult::operandEqual) {\n    result = ") ;
      const enumGalgasBool test_0 = enumerator_4553.current_mAscendingOrder (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("mObject.mProperty_") ;
        result.appendString (enumerator_4553.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue ()) ;
        result.appendString (".objectCompare (operand->mObject.mProperty_") ;
        result.appendString (enumerator_4553.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue ()) ;
        result.appendString (")") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("operand->mObject.mProperty_") ;
        result.appendString (enumerator_4553.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue ()) ;
        result.appendString (".objectCompare (mObject.mProperty_") ;
        result.appendString (enumerator_4553.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue ()) ;
        result.appendString (")") ;
        } break ;
      default :
        break ;
      }
      result.appendString (" ;\n  }\n") ;
      index_4553_.increment () ;
      enumerator_4553.gotoNextObject () ;
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
  GALGAS_uint index_5929_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5929 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5929.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_5929.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_5929_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 138)).stringValue ()) ;
      if (enumerator_5929.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5929_IDX.increment () ;
      enumerator_5929.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = class_func_emptySortedList (THERE) ;\n  cSortedListElement * p = nullptr ;\n  macroMyNew (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_6339_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6339 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6339.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_6339_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 146)).stringValue ()) ;
      if (enumerator_6339.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_6339_IDX.increment () ;
      enumerator_6339.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n  capSortedListElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  result.appendObject (attributes) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6793_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6793 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6793.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6793.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 161)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_6793_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 161)).stringValue ()) ;
      if (enumerator_6793.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6793_IDX.increment () ;
      enumerator_6793.gotoNextObject () ;
    }
  }
  result.appendString ("\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cSortedListElement * p = nullptr ;\n    macroMyNew (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_7102_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7102 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7102.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_7102_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 170)).stringValue ()) ;
      if (enumerator_7102.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_7102_IDX.increment () ;
      enumerator_7102.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n    capSortedListElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7543_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7543 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7543.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7543.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 185)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_7543_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 185)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_7543_IDX.increment () ;
      enumerator_7543.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * /* inCompiler */\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cSortedListElement * p = nullptr ;\n    macroMyNew (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_7866_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7866 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7866.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_7866_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 193)).stringValue ()) ;
      if (enumerator_7866.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_7866_IDX.increment () ;
      enumerator_7866.gotoNextObject () ;
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
  GALGAS_uint index_8718_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8718 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8718.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_8718.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 218)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_8718_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 218)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8718_IDX.increment () ;
      enumerator_8718.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  capSortedListElement attributes ;\n  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_9211_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9211 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9211.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_9211_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 228)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_9211_IDX.increment () ;
      enumerator_9211.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_9443_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9443 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9443.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_9443_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 234)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_9443.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 234)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_9443_IDX.increment () ;
      enumerator_9443.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popGreatest (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9819_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9819 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9819.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_9819.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 243)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_9819_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 243)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9819_IDX.increment () ;
      enumerator_9819.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  capSortedListElement attributes ;\n  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_10312_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10312 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10312.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_10312_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 253)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_10312_IDX.increment () ;
      enumerator_10312.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_10544_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10544 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10544.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_10544_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 259)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_10544.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 259)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_10544_IDX.increment () ;
      enumerator_10544.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_smallest (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10917_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10917 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10917.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_10917.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 268)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_10917_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 268)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10917_IDX.increment () ;
      enumerator_10917.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capSortedListElement attributes ;\n  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_11413_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11413 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11413.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_11413_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 278)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_11413_IDX.increment () ;
      enumerator_11413.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_11645_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11645 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11645.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_11645_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 284)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_11645.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 284)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_11645_IDX.increment () ;
      enumerator_11645.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_greatest (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11995_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11995 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11995.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_11995.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 293)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_11995_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 293)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11995_IDX.increment () ;
      enumerator_11995.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capSortedListElement attributes ;\n  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_12491_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12491 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12491.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12491_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 303)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_12491_IDX.increment () ;
      enumerator_12491.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cSortedListElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_12723_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12723 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12723.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12723_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 309)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_12723.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 309)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_12723_IDX.increment () ;
      enumerator_12723.gotoNextObject () ;
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
  GALGAS_uint index_13754_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13754 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13754.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_13754.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 332)).stringValue ()) ;
      result.appendString (" cEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_13754.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 332)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  const cSortedListElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cSortedListElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cSortedListElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  return p->mObject.mProperty_") ;
      result.appendString (enumerator_13754.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 335)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_13754_IDX.increment () ;
      enumerator_13754.gotoNextObject () ;
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
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_17134 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 434)) ;
  const GALGAS_sortedListTypeForGeneration temp_1 = this ;
  const GALGAS_sortedListTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, var_selfTypeDefinition_17134.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 437)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 435))) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_17134.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 442)), var_selfTypeDefinition_17134.readProperty_isConcrete (), var_selfTypeDefinition_17134.readProperty_initializerMap (), var_selfTypeDefinition_17134.readProperty_classFunctionMap (), var_selfTypeDefinition_17134.readProperty_getterMap (), var_selfTypeDefinition_17134.readProperty_setterMap (), var_selfTypeDefinition_17134.readProperty_instanceMethodMap (), var_selfTypeDefinition_17134.readProperty_classMethodMap (), var_selfTypeDefinition_17134.readProperty_optionalMethodMap (), var_selfTypeDefinition_17134.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_17134.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_17134.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_17134.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 440))), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 440)) ;
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
  cEnumerator_typedPropertyList enumerator_18379 (temp_0.readProperty_mTypedAttributeList (), EnumerationOrder::up) ;
  while (enumerator_18379.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18379.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 465)) ;
    enumerator_18379.gotoNextObject () ;
  }
  const GALGAS_sortedListTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 467)) ;
  const GALGAS_sortedListTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 468)) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = this ;
  const GALGAS_sortedListTypeForGeneration temp_4 = this ;
  const GALGAS_sortedListTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 470)), temp_4.readProperty_mTypedAttributeList (), temp_5.readProperty_mSortDescriptorList () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 469))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForStruct'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForStruct (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  GALGAS_stringset temp_0 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 81)) ;
  result_result = temp_0 ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-struct.galgas", 82)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-struct.galgas", 83)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-struct.galgas", 84)) ;
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
  GALGAS_lstring var_key_4136 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 104)), temp_1.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_structDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4136, temp_2, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 105)) ;
  }
  const GALGAS_structDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_4292 (temp_3.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_4292.hasCurrentObject ()) {
    GALGAS_lstring var_propertyKey_4331 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_4292.current (HERE).readProperty_propertyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 107)), enumerator_4292.current (HERE).readProperty_propertyTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4136, var_propertyKey_4331 COMMA_SOURCE_FILE ("type-struct.galgas", 108)) ;
    }
    enumerator_4292.gotoNextObject () ;
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
  result_result = GALGAS_string ("struct @").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 115)) ;
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
  GALGAS_optionalMethodMap temp_0 = GALGAS_optionalMethodMap::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 127)) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_5296 = temp_0 ;
  GALGAS_unifiedTypeMapEntry var_structTypeIndex_5417 ;
  {
  const GALGAS_structDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_structTypeName (), var_structTypeIndex_5417, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 129)) ;
  }
  GALGAS_propertyMap temp_2 = GALGAS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 131)) ;
  GALGAS_propertyMap var_propertyMap_5495 = temp_2 ;
  GALGAS_classFunctionMap temp_3 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 132)) ;
  GALGAS_classFunctionMap var_classFunctionMap_5539 = temp_3 ;
  GALGAS_functionSignature temp_4 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 133)) ;
  GALGAS_functionSignature var_constructorPropertyTypeList_5589 = temp_4 ;
  GALGAS_typedPropertyList temp_5 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 134)) ;
  GALGAS_typedPropertyList var_typedPropertyList_5650 = temp_5 ;
  GALGAS_unifiedTypeMapEntryList temp_6 = GALGAS_unifiedTypeMapEntryList::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 135)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_5707 = temp_6 ;
  const GALGAS_structDeclarationAST temp_7 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5772 (temp_7.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_5772.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_propertyTypeEntry_5862 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_5772.current (HERE).readProperty_propertyTypeName (), var_propertyTypeEntry_5862, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 137)) ;
    }
    GALGAS_string temp_8 ;
    const enumGalgasBool test_9 = enumerator_5772.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (kBoolTrue == test_9) {
      temp_8 = enumerator_5772.current (HERE).readProperty_propertyName ().readProperty_string () ;
    }else if (kBoolFalse == test_9) {
      temp_8 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_lstring var_selector_5891 = temp_8.getter_nowhere (SOURCE_FILE ("type-struct.galgas", 138)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = enumerator_5772.current (HERE).readProperty_initialization ().getter_isNone (SOURCE_FILE ("type-struct.galgas", 139)).boolEnum () ;
      if (kBoolTrue == test_10) {
        var_constructorPropertyTypeList_5589.addAssign_operation (var_selector_5891, var_propertyTypeEntry_5862, enumerator_5772.current (HERE).readProperty_propertyName ().readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-struct.galgas", 140)) ;
      }
    }
    var_typesToIncludeInHeaderCompilation_5707.addAssign_operation (var_propertyTypeEntry_5862  COMMA_SOURCE_FILE ("type-struct.galgas", 142)) ;
    var_typedPropertyList_5650.addAssign_operation (var_propertyTypeEntry_5862, enumerator_5772.current (HERE).readProperty_propertyName (), enumerator_5772.current (HERE).readProperty_initialization (), enumerator_5772.current (HERE).readProperty_isConstant ().operator_not (SOURCE_FILE ("type-struct.galgas", 147)), enumerator_5772.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("type-struct.galgas", 143)) ;
    {
    var_propertyMap_5495.setter_insertKey (enumerator_5772.current (HERE).readProperty_propertyName (), extensionGetter_accessControl (enumerator_5772.current (HERE).readProperty_accessControl (), var_structTypeIndex_5417, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 151)), enumerator_5772.current (HERE).readProperty_isConstant (), var_propertyTypeEntry_5862, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 149)) ;
    }
    enumerator_5772.gotoNextObject () ;
  }
  {
  var_classFunctionMap_5539.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("new"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 157)), inCompiler COMMA_HERE), var_constructorPropertyTypeList_5589, GALGAS_bool (true), var_structTypeIndex_5417, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 156)) ;
  }
  GALGAS_getterMap var_getterMap_6844 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6844, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 163)) ;
  }
  GALGAS_setterMap temp_11 = GALGAS_setterMap::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 165)) ;
  GALGAS_setterMap var_setterMap_6896 = temp_11 ;
  GALGAS_initializerMap temp_12 = GALGAS_initializerMap::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 166)) ;
  GALGAS_initializerMap var_initializerMap_6936 = temp_12 ;
  GALGAS_instanceMethodMap temp_13 = GALGAS_instanceMethodMap::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 167)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6984 = temp_13 ;
  {
  const GALGAS_structDeclarationAST temp_14 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_structTypeName (), GALGAS_bool (false), var_initializerMap_6936, var_getterMap_6844, var_setterMap_6896, var_instanceMethodMap_6984, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 168)) ;
  }
  GALGAS_operators var_features_7500 = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-struct.galgas", 184)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("type-struct.galgas", 184)) COMMA_SOURCE_FILE ("type-struct.galgas", 184)) ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (ComparisonKind::equal, var_initializerMap_6936.getter_count (SOURCE_FILE ("type-struct.galgas", 185)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_15) {
      var_features_7500 = var_features_7500.operator_or (GALGAS_operators::class_func_generateSynthetizedInitializer (SOURCE_FILE ("type-struct.galgas", 186)) COMMA_SOURCE_FILE ("type-struct.galgas", 186)) ;
      {
      const GALGAS_structDeclarationAST temp_16 = this ;
      var_initializerMap_6936.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_5589, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 188)), temp_16.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_5589, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 187)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_enumeratedType_7923 ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_structDeclarationAST temp_18 = this ;
    test_17 = GALGAS_bool (ComparisonKind::equal, temp_18.readProperty_mEnumeratedElementTypeName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_17) {
      var_enumeratedType_7923 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-struct.galgas", 195)) ;
    }
  }
  if (kBoolFalse == test_17) {
    {
    const GALGAS_structDeclarationAST temp_19 = this ;
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_19.readProperty_mEnumeratedElementTypeName (), var_enumeratedType_7923, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 197)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_8221 = GALGAS_string ("default") ;
  cEnumerator_typedPropertyList enumerator_8276 (var_typedPropertyList_5650, EnumerationOrder::up) ;
  bool bool_20 = GALGAS_bool (ComparisonKind::notEqual, var_defaultConstructorName_8221.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_8276.hasCurrentObject () && bool_20) {
    while (enumerator_8276.hasCurrentObject () && bool_20) {
      enumGalgasBool test_21 = kBoolTrue ;
      if (kBoolTrue == test_21) {
        test_21 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (enumerator_8276.current (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 205)).readProperty_defaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())).operator_or (extensionGetter_definition (enumerator_8276.current (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 205)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("type-struct.galgas", 205)) COMMA_SOURCE_FILE ("type-struct.galgas", 205)).boolEnum () ;
        if (kBoolTrue == test_21) {
          var_defaultConstructorName_8221 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_8276.gotoNextObject () ;
      if (enumerator_8276.hasCurrentObject ()) {
        bool_20 = GALGAS_bool (ComparisonKind::notEqual, var_defaultConstructorName_8221.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_structDeclarationAST temp_22 = this ;
  const GALGAS_structDeclarationAST temp_23 = this ;
  GALGAS_classMethodMap temp_24 = GALGAS_classMethodMap::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 225)) ;
  GALGAS_enumerationDescriptorList temp_25 = GALGAS_enumerationDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 227)) ;
  GALGAS_functionSignature temp_26 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 229)) ;
  GALGAS_mapSearchMethodListAST temp_27 = GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 230)) ;
  GALGAS_mapSearchMethodListAST temp_28 = GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 231)) ;
  const GALGAS_structDeclarationAST temp_29 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_8545 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21__21__21__21__21_generateHeaderInSeparateFile_21__21_defaultConstructorName_21__21_headerKind (temp_22.readProperty_structTypeName (), temp_23.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("type-struct.galgas", 214)), GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("type-struct.galgas", 215)), GALGAS_bool (false), var_typedPropertyList_5650, var_propertyMap_5495, var_typedPropertyList_5650, var_initializerMap_6936, var_classFunctionMap_5539, var_getterMap_6844, var_setterMap_6896, var_instanceMethodMap_6984, temp_24, var_optionalMethodMap_5296, temp_25, var_features_7500, temp_26, temp_27, temp_28, GALGAS_bool (false), var_enumeratedType_7923, GALGAS_string::makeEmptyString (), GALGAS_string ("struct-").add_operation (temp_29.readProperty_structTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-struct.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 235)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-struct.galgas", 236)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8545.readProperty_typeName (), var_typeDefinition_8545, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 238)) ;
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
  GALGAS_lstring var_structNameForUsefulness_10250 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 252)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_10250, var_structNameForUsefulness_10250, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 253)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_structDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mStructurePropertyListAST ().getter_count (SOURCE_FILE ("type-struct.galgas", 255)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structDeclarationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_structTypeName ().readProperty_location (), GALGAS_string ("a structure cannot be empty: it must have at least one property"), fixItArray4  COMMA_SOURCE_FILE ("type-struct.galgas", 256)) ;
    }
  }
  GALGAS_typedPropertyList temp_5 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 258)) ;
  GALGAS_typedPropertyList var_typedPropertyList_10615 = temp_5 ;
  GALGAS_typedPropertyList temp_6 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 259)) ;
  GALGAS_typedPropertyList var_constructorArgumentList_10666 = temp_6 ;
  GALGAS_propertyIndexMap temp_7 = GALGAS_propertyIndexMap::init (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 260)) ;
  GALGAS_propertyIndexMap var_propertyMap_10722 = temp_7 ;
  const GALGAS_structDeclarationAST temp_8 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10765 (temp_8.readProperty_mStructurePropertyListAST (), EnumerationOrder::up) ;
  while (enumerator_10765.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_10804 = function_typeNameForUsefulEntitiesGraph (enumerator_10765.current (HERE).readProperty_propertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 262)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_10250, var_propertyTypeNameForUsefulness_10804 COMMA_SOURCE_FILE ("type-struct.galgas", 263)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_11002 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_10765.current (HERE).readProperty_propertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 264)) ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 265)).getter_hasKey (enumerator_10765.current (HERE).readProperty_propertyName ().readProperty_string () COMMA_SOURCE_FILE ("type-struct.galgas", 265)).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_string var_m_11164 = GALGAS_string ("an property cannot be named:") ;
        cEnumerator_stringset enumerator_11240 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 267)), EnumerationOrder::up) ;
        while (enumerator_11240.hasCurrentObject ()) {
          var_m_11164.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_11240.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 268)) ;
          enumerator_11240.gotoNextObject () ;
        }
        var_m_11164.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 270)) ;
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_10765.current (HERE).readProperty_propertyName ().readProperty_location (), var_m_11164, fixItArray10  COMMA_SOURCE_FILE ("type-struct.galgas", 271)) ;
      }
    }
    {
    var_propertyMap_10722.setter_insertKey (enumerator_10765.current (HERE).readProperty_propertyName (), var_t_11002, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 273)) ;
    }
    switch (enumerator_10765.current (HERE).readProperty_initialization ().enumValue ()) {
    case GALGAS_propertyInCollectionInitializationAST::kNotBuilt:
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_none:
      {
        var_constructorArgumentList_10666.addAssign_operation (var_t_11002, enumerator_10765.current (HERE).readProperty_propertyName (), enumerator_10765.current (HERE).readProperty_initialization (), enumerator_10765.current (HERE).readProperty_isConstant ().operator_not (SOURCE_FILE ("type-struct.galgas", 280)), enumerator_10765.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("type-struct.galgas", 276)) ;
      }
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_some:
      {
      }
      break ;
    }
    var_typedPropertyList_10615.addAssign_operation (var_t_11002, enumerator_10765.current (HERE).readProperty_propertyName (), enumerator_10765.current (HERE).readProperty_initialization (), enumerator_10765.current (HERE).readProperty_isConstant ().operator_not (SOURCE_FILE ("type-struct.galgas", 288)), enumerator_10765.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("type-struct.galgas", 284)) ;
    enumerator_10765.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedVariableCppNameSet_12172 ;
  GALGAS_string var_initializationCode_12208 ;
  const GALGAS_structDeclarationAST temp_11 = this ;
  extensionMethod_buildPropertyInitializationCode (temp_11.readProperty_mStructurePropertyListAST (), var_structNameForUsefulness_10250, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, ioArgument_ioUsefulEntitiesGraph, ioArgument_ioTypeMap, var_unusedVariableCppNameSet_12172, var_initializationCode_12208, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 292)) ;
  GALGAS_bool var_constructorNeedsCompilerVar_12248 = var_unusedVariableCppNameSet_12172.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 302)) COMMA_SOURCE_FILE ("type-struct.galgas", 302)).operator_not (SOURCE_FILE ("type-struct.galgas", 302)) ;
  const GALGAS_structDeclarationAST temp_12 = this ;
  GALGAS_unifiedTypeMapEntry var_structType_12344 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 303)) ;
  const GALGAS_structDeclarationAST temp_13 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (temp_13.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 305)), GALGAS_structTypeForGeneration::init_21__21__21__21__21__21_ (var_structType_12344, var_typedPropertyList_10615, var_constructorArgumentList_10666, var_initializationCode_12208, var_constructorNeedsCompilerVar_12248, extensionGetter_definition (var_structType_12344, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 312)).readProperty_mHandledOperatorFlags ().getter_generateSynthetizedInitializer (SOURCE_FILE ("type-struct.galgas", 312)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-struct.galgas", 304)) ;
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
  cEnumerator_typedPropertyList enumerator_13640 (temp_0.readProperty_mTypedPropertyList (), EnumerationOrder::up) ;
  while (enumerator_13640.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_13640.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 338)) ;
    enumerator_13640.gotoNextObject () ;
  }
  const GALGAS_structTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_13735 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 340)) ;
  const GALGAS_structTypeForGeneration temp_2 = this ;
  const GALGAS_structTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structureGenerationTemplate_structTypeHeader_31_ (inCompiler, var_selfTypeDefinition_13735.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 343)), temp_3.readProperty_mTypedPropertyList () COMMA_SOURCE_FILE ("type-struct.galgas", 341))) ;
  const GALGAS_structTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_13735.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 348)), var_selfTypeDefinition_13735.readProperty_isConcrete (), var_selfTypeDefinition_13735.readProperty_initializerMap (), var_selfTypeDefinition_13735.readProperty_classFunctionMap (), var_selfTypeDefinition_13735.readProperty_getterMap (), var_selfTypeDefinition_13735.readProperty_setterMap (), var_selfTypeDefinition_13735.readProperty_instanceMethodMap (), var_selfTypeDefinition_13735.readProperty_classMethodMap (), var_selfTypeDefinition_13735.readProperty_optionalMethodMap (), var_selfTypeDefinition_13735.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_13735.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_13735.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_13735.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-struct.galgas", 346))), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 346)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 371)) ;
  const GALGAS_structTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_15035 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 372)) ;
  const GALGAS_structTypeForGeneration temp_2 = this ;
  const GALGAS_structTypeForGeneration temp_3 = this ;
  const GALGAS_structTypeForGeneration temp_4 = this ;
  const GALGAS_structTypeForGeneration temp_5 = this ;
  const GALGAS_structTypeForGeneration temp_6 = this ;
  const GALGAS_structTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structureGenerationTemplate_structTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_15035.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 375)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), temp_5.readProperty_mConstructorInitializationCode (), temp_6.readProperty_mConstructorNeedsCompilerVar (), temp_7.readProperty_synthetizeAnInitializer () COMMA_SOURCE_FILE ("type-struct.galgas", 373))) ;
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
                                                                                                const GALGAS_bool & in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER
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
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n   ComparisonResult result = ComparisonResult::operandEqual ;\n") ;
  GALGAS_uint index_3372_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3372 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3372.hasCurrentObject ()) {
      result.appendString ("  if (result == ComparisonResult::operandEqual) {\n    result = mProperty_") ;
      result.appendString (enumerator_3372.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 90)).stringValue ()) ;
      result.appendString (".objectCompare (inOperand.mProperty_") ;
      result.appendString (enumerator_3372.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 90)).stringValue ()) ;
      result.appendString (") ;\n  }\n") ;
      index_3372_.increment () ;
      enumerator_3372.gotoNextObject () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return ") ;
  GALGAS_uint index_3882_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3882 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3882.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_3882.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 101)).stringValue ()) ;
      result.appendString (".isValid ()") ;
      if (enumerator_3882.hasNextObject ()) {
        result.appendString (" && ") ;
      }
      index_3882_.increment () ;
      enumerator_3882.gotoNextObject () ;
    }
  }
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n") ;
  GALGAS_uint index_4225_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4225 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4225.hasCurrentObject ()) {
      result.appendString ("  mProperty_") ;
      result.appendString (enumerator_4225.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 111)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_4225_.increment () ;
      enumerator_4225.gotoNextObject () ;
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
  GALGAS_uint index_4768_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4768 (in_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4768.hasCurrentObject ()) {
      result.appendString ("    mProperty_") ;
      result.appendString (enumerator_4768.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 125)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation+1) ;\n") ;
      if (enumerator_4768.hasNextObject ()) {
        result.appendString ("    ioString.appendCString (\", \") ;\n") ;
      }
      index_4768_IDX.increment () ;
      enumerator_4768.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n  ioString.appendCString (\">\") ;\n}\n\n") ;
  return GALGAS_string (result) ;
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
  result_result = GALGAS_string ("typealias @").add_operation (temp_0.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 212)) ;
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
                                                                   GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                   GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                   GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                   GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                   GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_typealiasDeclarationAST temp_0 = this ;
  const GALGAS_typealiasDeclarationAST temp_1 = this ;
  GALGAS_lstring var_aliasKey_8401 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 229)), temp_1.readProperty_mAliasTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_typealiasDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_aliasKey_8401, temp_2, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 230)) ;
  }
  const GALGAS_typealiasDeclarationAST temp_3 = this ;
  const GALGAS_typealiasDeclarationAST temp_4 = this ;
  GALGAS_lstring var_referenceKey_8550 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_3.readProperty_mDefinedTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 231)), temp_4.readProperty_mDefinedTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_aliasKey_8401, var_referenceKey_8550 COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 232)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typealiasDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typealiasDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                             const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                             const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                             const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_definedTypeEntry_9390 ;
  {
  const GALGAS_typealiasDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_0.readProperty_mDefinedTypeName ().readProperty_string (), var_definedTypeEntry_9390, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 244)) ;
  }
  switch (var_definedTypeEntry_9390.enumValue ()) {
  case GALGAS_unifiedTypeMapEntry::kNotBuilt:
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_null:
    {
      const GALGAS_typealiasDeclarationAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mDefinedTypeName ().readProperty_location (), GALGAS_string ("Undefined type"), fixItArray2  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 247)) ;
    }
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_element:
    {
      const cEnumAssociatedValues_unifiedTypeMapEntry_element * extractPtr_11378 = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) (var_definedTypeEntry_9390.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapElementClass_2D_weak extractedValue_9556_weakElement = extractPtr_11378->mAssociatedValue0 ;
      switch (extractedValue_9556_weakElement.bang_unifiedTypeMapElementClass_2D_weak (inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 249)).readProperty_mDefinition ().enumValue ()) {
      case GALGAS_typeDefinition::kNotBuilt:
        break ;
      case GALGAS_typeDefinition::kEnum_unsolved:
        {
          const GALGAS_typealiasDeclarationAST temp_3 = this ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mDefinedTypeName ().readProperty_location (), GALGAS_string ("Undefined type"), fixItArray4  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 251)) ;
        }
        break ;
      case GALGAS_typeDefinition::kEnum_solved:
        {
          const cEnumAssociatedValues_typeDefinition_solved * extractPtr_11370 = (const cEnumAssociatedValues_typeDefinition_solved *) (extractedValue_9556_weakElement.bang_unifiedTypeMapElementClass_2D_weak (inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 249)).readProperty_mDefinition ().unsafePointer ()) ;
          const GALGAS_unifiedTypeDefinition extractedValue_9732_def = extractPtr_11370->mAssociatedValue0 ;
          const GALGAS_typealiasDeclarationAST temp_5 = this ;
          GALGAS_unifiedTypeDefinition var_definition_9751 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21__21__21__21__21_generateHeaderInSeparateFile_21__21_defaultConstructorName_21__21_headerKind (extractedValue_9732_def.readProperty_typeName (), GALGAS_bool (false), extractedValue_9732_def.readProperty_isConcrete (), extractedValue_9732_def.readProperty_superType (), extractedValue_9732_def.readProperty_typeKind (), extractedValue_9732_def.readProperty_supportCollectionValue (), extractedValue_9732_def.readProperty_allTypedPropertyList (), extractedValue_9732_def.readProperty_propertyMap (), extractedValue_9732_def.readProperty_currentTypedPropertyList (), extractedValue_9732_def.readProperty_initializerMap (), extractedValue_9732_def.readProperty_classFunctionMap (), extractedValue_9732_def.readProperty_getterMap (), extractedValue_9732_def.readProperty_setterMap (), extractedValue_9732_def.readProperty_instanceMethodMap (), extractedValue_9732_def.readProperty_classMethodMap (), extractedValue_9732_def.readProperty_optionalMethodMap (), extractedValue_9732_def.readProperty_enumerationDescriptorList (), extractedValue_9732_def.readProperty_mHandledOperatorFlags (), extractedValue_9732_def.readProperty_mAddAssignOperatorArguments (), extractedValue_9732_def.readProperty_mMapSearchMethodList (), extractedValue_9732_def.readProperty_mMapEntrySearchConstructorList (), extractedValue_9732_def.readProperty_generateHeaderInSeparateFile (), extractedValue_9732_def.readProperty_mTypeForEnumeratedElement (), extractedValue_9732_def.readProperty_defaultConstructorName (), GALGAS_string ("typealias-").add_operation (temp_5.readProperty_mAliasTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-alias-and-type-declaration.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 278)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("type-alias-and-type-declaration.galgas", 279)), inCompiler COMMA_HERE) ;
          {
          const GALGAS_typealiasDeclarationAST temp_6 = this ;
          extensionSetter_insertType (ioArgument_ioTypeMap, temp_6.readProperty_mAliasTypeName (), var_definition_9751, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 281)) ;
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
  GALGAS_lstring var_nameForUsefulness_12118 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mAliasTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 296)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12118, var_nameForUsefulness_12118, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 297)) ;
  }
  const GALGAS_typealiasDeclarationAST temp_1 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_12276 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mDefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 298)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_12118, var_elementTypeNameForUsefulness_12276 COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 299)) ;
  }
  const GALGAS_typealiasDeclarationAST temp_2 = this ;
  GALGAS_unifiedTypeMapEntry var_t_12515 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mDefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 301)) ;
  const GALGAS_typealiasDeclarationAST temp_3 = this ;
  const GALGAS_typealiasDeclarationAST temp_4 = this ;
  const GALGAS_typealiasDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("typealias ").add_operation (temp_3.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 303)), GALGAS_aliasTypeForGeneration::init_21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_mAliasTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 304)), temp_5.readProperty_mAliasTypeName ().readProperty_string (), var_t_12515, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 302)) ;
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
  extensionMethod_addHeaderFileName_31_ (temp_0.readProperty_mReferencedType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 323)) ;
  const GALGAS_aliasTypeForGeneration temp_1 = this ;
  const GALGAS_aliasTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_typeAliasTypeHeader_31_ (inCompiler, temp_1.readProperty_mAliasTypeName ().getter_identifierRepresentation (SOURCE_FILE ("type-alias-and-type-declaration.galgas", 325)), extensionGetter_identifierRepresentation (temp_2.readProperty_mReferencedType (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 326)) COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 324))) ;
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
  result_result = GALGAS_string ("abstract extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 148)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 148)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 148)) ;
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
  GALGAS_lstring var_key_6943 = GALGAS_lstring::init_21__21_ (GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 163)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 163)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 163)), temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_abstractExtensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6943, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 166)) ;
  }
  {
  const GALGAS_abstractExtensionGetterAST temp_4 = this ;
  const GALGAS_abstractExtensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6943, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 167)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 167)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 169)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 169)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionGetterAST temp_8 = this ;
      GALGAS_extensionGetterMapForType temp_9 = GALGAS_extensionGetterMapForType::init (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 172)) ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), temp_9, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 170)) ;
      }
    }
  }
  const GALGAS_abstractExtensionGetterAST temp_10 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_7453 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_10.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 175)) ;
  if (nullptr != objectArray_7453) {
    macroValidSharedObject (objectArray_7453, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionGetterAST temp_11 = this ;
    const GALGAS_abstractExtensionGetterAST temp_12 = this ;
    const GALGAS_abstractExtensionGetterAST temp_13 = this ;
    objectArray_7453->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_11.readProperty_mAbstractExtensionGetterName (), temp_12.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_13.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("extension-abstract-getter.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 176)) ;
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
  GALGAS_unifiedTypeMapEntry var_selfType_9251 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 213)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_9251, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 215)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-getter.galgas", 215)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 215)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionGetterAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9251, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 217)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 217)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 217)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 216)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_9251, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 218)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionGetterAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9251, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 220)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 220)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 220)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 219)) ;
      }
    }
  }
  GALGAS_formalInputParameterListForGeneration temp_7 = GALGAS_formalInputParameterListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 223)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_9865 = temp_7 ;
  const GALGAS_abstractExtensionGetterAST temp_8 = this ;
  cEnumerator_formalInputParameterListAST enumerator_9973 (temp_8.readProperty_mAbstractExtensionGetterFormalInputParameterList (), EnumerationOrder::up) ;
  while (enumerator_9973.hasCurrentObject ()) {
    var_formalParameterListForGeneration_9865.addAssign_operation (enumerator_9973.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_9973.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 227)), enumerator_9973.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_9973.current_mFormalArgumentName (HERE), enumerator_9973.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 225)) ;
    enumerator_9973.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterAST temp_9 = this ;
  const GALGAS_abstractExtensionGetterAST temp_10 = this ;
  const GALGAS_abstractExtensionGetterAST temp_11 = this ;
  const GALGAS_abstractExtensionGetterAST temp_12 = this ;
  const GALGAS_abstractExtensionGetterAST temp_13 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (temp_9.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 234)), GALGAS_abstractExtensionGetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (temp_10.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 237)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 237)).add_operation (temp_11.readProperty_mAbstractExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 237)), var_selfType_9251, temp_12.readProperty_mAbstractExtensionGetterName ().readProperty_string (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_13.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 240)), var_formalParameterListForGeneration_9865, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 233)) ;
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
  ioArgument_ioAbstractExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 263)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-getter.galgas", 280)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 290)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), temp_2.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_3.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 289))) ;
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
  cEnumerator_formalInputParameterListForGeneration enumerator_14103 (temp_4.readProperty_mAbstractExtensionGetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_14103.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_14103.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 310)) ;
    enumerator_14103.gotoNextObject () ;
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
  GALGAS_lstring var_key_5424 = GALGAS_lstring::init_21__21_ (GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 122)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 122)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 122)), temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_abstractExtensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5424, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 125)) ;
  }
  {
  const GALGAS_abstractExtensionMethodAST temp_4 = this ;
  const GALGAS_abstractExtensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5424, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 126)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 126)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 128)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 128)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionMethodAST temp_8 = this ;
      GALGAS_extensionMethodMapForType temp_9 = GALGAS_extensionMethodMapForType::init (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 131)) ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), temp_9, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 129)) ;
      }
    }
  }
  const GALGAS_abstractExtensionMethodAST temp_10 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_5934 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_10.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 134)) ;
  if (nullptr != objectArray_5934) {
    macroValidSharedObject (objectArray_5934, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionMethodAST temp_11 = this ;
    const GALGAS_abstractExtensionMethodAST temp_12 = this ;
    objectArray_5934->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_11.readProperty_mAbstractExtensionMethodName (), temp_12.readProperty_mAbstractExtensionMethodFormalParameterList (), GALGAS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("extension-abstract-method.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 135)) ;
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
  result_result = GALGAS_string ("abstract extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)) ;
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
  GALGAS_unifiedTypeMapEntry var_selfType_8289 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 181)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_8289, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 183)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-method.galgas", 183)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 183)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionMethodAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_8289, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 184)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 184)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 184)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 184)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_8289, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 185)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionMethodAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (extensionGetter_definition (var_selfType_8289, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration temp_7 = GALGAS_formalParameterListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 189)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_8848 = temp_7 ;
  const GALGAS_abstractExtensionMethodAST temp_8 = this ;
  cEnumerator_formalParameterListAST enumerator_9015 (temp_8.readProperty_mAbstractExtensionMethodFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_9015.hasCurrentObject ()) {
    var_formalParameterListForGeneration_8848.addAssign_operation (enumerator_9015.current_mFormalSelector (HERE), enumerator_9015.current_mFormalArgumentPassingMode (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_9015.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 194)), enumerator_9015.current_mFormalArgumentName (HERE), enumerator_9015.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 191)) ;
    enumerator_9015.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodAST temp_9 = this ;
  const GALGAS_abstractExtensionMethodAST temp_10 = this ;
  const GALGAS_abstractExtensionMethodAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (temp_9.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 200)), GALGAS_abstractExtensionMethodForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21_ (GALGAS_bool (true), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_8289, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 203)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 203)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 203)).add_operation (temp_10.readProperty_mAbstractExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 203)), var_selfType_8289, temp_11.readProperty_mAbstractExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_8848, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 199)) ;
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
  ioArgument_ioAbstractExtensionMethodListMapAST.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 227)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 248)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), temp_2.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 247))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-method.galgas", 257)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 266)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 266)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 266)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 266))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 266)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 267)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_3 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_13175 (temp_3.readProperty_mAbstractExtensionMethodFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_13175.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13175.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 269)) ;
    enumerator_13175.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodForGeneration temp_4 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (inCompiler, temp_4.readProperty_mReceiverType (), temp_5.readProperty_mAbstractExtensionMethodName (), temp_6.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 271))) ;
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
      GALGAS_extensionSetterMapForType temp_9 = GALGAS_extensionSetterMapForType::init (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 125)) ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), temp_9, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 123)) ;
      }
    }
  }
  const GALGAS_abstractExtensionSetterAST temp_10 = this ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_5741 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_10.readProperty_mTypeName (), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 128)) ;
  if (nullptr != objectArray_5741) {
    macroValidSharedObject (objectArray_5741, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionSetterAST temp_11 = this ;
    const GALGAS_abstractExtensionSetterAST temp_12 = this ;
    objectArray_5741->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_11.readProperty_mAbstractExtensionSetterName (), temp_12.readProperty_mAbstractExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 129)) ;
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
  GALGAS_unifiedTypeMapEntry var_selfType_7687 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 169)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_7687, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 171)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-setter.galgas", 171)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 171)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionSetterAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7687, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 172)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 172)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 172)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 172)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_7687, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 173)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionSetterAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7687, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 174)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 174)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 174)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 174)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration temp_7 = GALGAS_formalParameterListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 177)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_8263 = temp_7 ;
  const GALGAS_abstractExtensionSetterAST temp_8 = this ;
  cEnumerator_formalParameterListAST enumerator_8432 (temp_8.readProperty_mAbstractExtensionSetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_8432.hasCurrentObject ()) {
    var_formalParameterListForGeneration_8263.addAssign_operation (enumerator_8432.current_mFormalSelector (HERE), enumerator_8432.current_mFormalArgumentPassingMode (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_8432.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 182)), enumerator_8432.current_mFormalArgumentName (HERE), enumerator_8432.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 179)) ;
    enumerator_8432.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterAST temp_9 = this ;
  const GALGAS_abstractExtensionSetterAST temp_10 = this ;
  const GALGAS_abstractExtensionSetterAST temp_11 = this ;
  const GALGAS_abstractExtensionSetterAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (temp_9.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 188)), GALGAS_abstractExtensionSetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21_ (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (temp_10.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 191)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 191)).add_operation (temp_11.readProperty_mAbstractExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 191)), var_selfType_7687, temp_12.readProperty_mAbstractExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_8263, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 187)) ;
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
  ioArgument_ioAbstractExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 214)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-setter.galgas", 235)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 243)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName (), temp_2.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 242))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 256)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 256)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 256)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 256))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 256)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 257)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_3 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_12259 (temp_3.readProperty_mAbstractExtensionSetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_12259.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12259.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 259)) ;
    enumerator_12259.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterForGeneration temp_4 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (inCompiler, extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 262)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_mAbstractExtensionSetterName (), temp_6.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 261))) ;
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
  result_result = GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 176)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 176)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 176)) ;
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
  GALGAS_lstring var_key_7944 = GALGAS_lstring::init_21__21_ (GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 188)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 188)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 188)), temp_2.readProperty_mExtensionGetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_extensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7944, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 189)) ;
  }
  {
  const GALGAS_extensionGetterAST temp_4 = this ;
  const GALGAS_extensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7944, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 190)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-getter.galgas", 190)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-getter.galgas", 192)).operator_not (SOURCE_FILE ("extension-getter.galgas", 192)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionGetterAST temp_8 = this ;
      GALGAS_extensionGetterMapForType temp_9 = GALGAS_extensionGetterMapForType::init (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 195)) ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), temp_9, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 193)) ;
      }
    }
  }
  const GALGAS_extensionGetterAST temp_10 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_8443 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_10.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-getter.galgas", 198)) ;
  if (nullptr != objectArray_8443) {
    macroValidSharedObject (objectArray_8443, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_extensionGetterAST temp_11 = this ;
    const GALGAS_extensionGetterAST temp_12 = this ;
    const GALGAS_extensionGetterAST temp_13 = this ;
    objectArray_8443->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_11.readProperty_mExtensionGetterName (), temp_12.readProperty_mExtensionGetterReturnedTypeName (), temp_13.readProperty_mExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("extension-getter.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 199)) ;
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
  GALGAS_lstring var_nameForUsefulness_10156 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 237)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10156, var_nameForUsefulness_10156, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 238)) ;
  }
  const GALGAS_extensionGetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_10334 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 239)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_10334, var_nameForUsefulness_10156 COMMA_SOURCE_FILE ("extension-getter.galgas", 240)) ;
  }
  const GALGAS_extensionGetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_10527 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 242)) ;
  GALGAS_string var_selfObjectNameNew_10638 ;
  GALGAS_string var_selfObjectAccessorNew_10670 ;
  GALGAS_bool var_implementedAsFunctionNew_10704 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_10527, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 247)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 247)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectNameNew_10638 = GALGAS_string ("this") ;
      var_selfObjectAccessorNew_10670 = GALGAS_string ("this->") ;
      var_implementedAsFunctionNew_10704 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameNew_10638 = GALGAS_string ("inObject") ;
    var_selfObjectAccessorNew_10670 = GALGAS_string ("inObject.") ;
    var_implementedAsFunctionNew_10704 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionGetterAST temp_5 = this ;
  GALGAS_analysisContext var_analysisContextNew_11049 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameNew_10638, GALGAS_selfAvailability::class_func_available (var_selfType_10527, GALGAS_selfMutability::class_func_none (SOURCE_FILE ("extension-getter.galgas", 261))  COMMA_SOURCE_FILE ("extension-getter.galgas", 261)), var_selfObjectAccessorNew_10670, temp_5.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_12026 ;
  GALGAS_unifiedTypeMapEntry var_returnType_12068 ;
  GALGAS_string var_returnVariableCppName_12088 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_12119 ;
  {
  const GALGAS_extensionGetterAST temp_6 = this ;
  GALGAS_typedPropertyList temp_7 ;
  const enumGalgasBool test_8 = extensionGetter_definition (var_selfType_10527, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 271)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 271)).operator_or (GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_10527, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 271)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-getter.galgas", 271)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 271)).operator_or (GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_10527, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 271)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_sharedMapEntryType (SOURCE_FILE ("extension-getter.galgas", 271)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 271)).boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = extensionGetter_definition (var_selfType_10527, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 272)).readProperty_allTypedPropertyList () ;
  }else if (kBoolFalse == test_8) {
    GALGAS_typedPropertyList temp_9 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 273)) ;
    temp_7 = temp_9 ;
  }
  const GALGAS_extensionGetterAST temp_10 = this ;
  const GALGAS_extensionGetterAST temp_11 = this ;
  const GALGAS_extensionGetterAST temp_12 = this ;
  const GALGAS_extensionGetterAST temp_13 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_10156, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_11049, ioArgument_ioTypeMap, temp_6.readProperty_mExtensionGetterFormalInputParameterList (), temp_7, var_selfObjectAccessorNew_10670, temp_10.readProperty_mExtensionGetterInstructionList (), temp_11.readProperty_mExtensionGetterReturnedVariableName (), temp_12.readProperty_mExtensionGetterReturnedTypeName (), temp_13.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_12026, var_returnType_12068, var_returnVariableCppName_12088, var_semanticInstructionListForGeneration_12119, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 265)) ;
  }
  const GALGAS_extensionGetterAST temp_14 = this ;
  const GALGAS_extensionGetterAST temp_15 = this ;
  const GALGAS_extensionGetterAST temp_16 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (temp_14.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 287)), GALGAS_extensionGetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_selfType_10527, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 290)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 290)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 290)).add_operation (temp_15.readProperty_mExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 290)), var_selfType_10527, temp_16.readProperty_mExtensionGetterName ().readProperty_string (), var_implementedAsFunctionNew_10704, var_returnType_12068, var_returnVariableCppName_12088, var_formalParameterListForGeneration_12026, extensionGetter_definition (var_selfType_10527, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 297)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_12119, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas", 286)) ;
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
  ioArgument_ioExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 319)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-getter.galgas", 341)) ;
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
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 350)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionGetterName (), temp_4.readProperty_mExtensionGetterFormalParameterList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 353)) COMMA_SOURCE_FILE ("extension-getter.galgas", 349))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionGetterForGeneration temp_6 = this ;
    const GALGAS_extensionGetterForGeneration temp_7 = this ;
    const GALGAS_extensionGetterForGeneration temp_8 = this ;
    const GALGAS_extensionGetterForGeneration temp_9 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 357)).readProperty_typeName ().readProperty_string (), temp_7.readProperty_mExtensionGetterName (), temp_8.readProperty_mExtensionGetterFormalParameterList (), temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 356))) ;
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
  cEnumerator_formalInputParameterListForGeneration enumerator_16271 (temp_0.readProperty_mExtensionGetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_16271.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16271.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 371)) ;
    enumerator_16271.gotoNextObject () ;
  }
  const GALGAS_extensionGetterForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 373)) ;
  const GALGAS_extensionGetterForGeneration temp_2 = this ;
  GALGAS_formalInputParameterListForGeneration var_extensionReaderFormalParameterList_16458 = temp_2.readProperty_mExtensionGetterFormalParameterList () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_extensionGetterForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_extensionGetterForGeneration temp_5 = this ;
      var_extensionReaderFormalParameterList_16458.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas", 377)), temp_5.readProperty_mReceiverType (), GALGAS_string ("inObject"), GALGAS_lstring::init_21__21_ (GALGAS_string ("self"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 380)), inCompiler COMMA_HERE), GALGAS_bool (true), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 376)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_6 = this ;
      const GALGAS_extensionGetterForGeneration temp_7 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 385)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 384)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 385)).add_operation (temp_7.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 386))  COMMA_SOURCE_FILE ("extension-getter.galgas", 384)) ;
      GALGAS_string var_code_17355 ;
      {
      const GALGAS_extensionGetterForGeneration temp_8 = this ;
      const GALGAS_extensionGetterForGeneration temp_9 = this ;
      const GALGAS_extensionGetterForGeneration temp_10 = this ;
      const GALGAS_extensionGetterForGeneration temp_11 = this ;
      routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GALGAS_string ("extensionGetter_").add_operation (temp_8.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 388)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_16458, temp_9.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("Compiler"), temp_10.readProperty_mResultType (), temp_11.readProperty_mResultVarCppName (), GALGAS_bool (false), GALGAS_bool (false), var_code_17355, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 387)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_12 = this ;
      const GALGAS_extensionGetterForGeneration temp_13 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 400)).readProperty_typeName ().readProperty_string (), temp_13.readProperty_mExtensionGetterName (), var_code_17355 COMMA_SOURCE_FILE ("extension-getter.galgas", 399))) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_extensionGetterForGeneration temp_14 = this ;
    extensionMethod_addHeaderFileName (temp_14.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 405)) ;
    const GALGAS_extensionGetterForGeneration temp_15 = this ;
    GALGAS_unifiedTypeMapEntry var_baseType_17699 = temp_15.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_17745 = GALGAS_bool (true) ;
    if (GALGAS_uint::class_func_max (SOURCE_FILE ("extension-getter.galgas", 408)).isValid ()) {
      uint32_t variant_17768 = GALGAS_uint::class_func_max (SOURCE_FILE ("extension-getter.galgas", 408)).uintValue () ;
      bool loop_17768 = true ;
      while (loop_17768) {
        loop_17768 = var_searching_17745.isValid () ;
        if (loop_17768) {
          loop_17768 = var_searching_17745.boolValue () ;
        }
        if (loop_17768 && (0 == variant_17768)) {
          loop_17768 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas", 408)) ;
        }
        if (loop_17768) {
          variant_17768 -- ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = extensionGetter_definition (var_baseType_17699, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 409)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-getter.galgas", 409)).operator_not (SOURCE_FILE ("extension-getter.galgas", 409)).boolEnum () ;
            if (kBoolTrue == test_16) {
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                const GALGAS_extensionGetterForGeneration temp_18 = this ;
                test_17 = extensionGetter_definition (extensionGetter_definition (var_baseType_17699, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 410)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 410)).readProperty_getterMap ().getter_hasKey (temp_18.readProperty_mExtensionGetterName () COMMA_SOURCE_FILE ("extension-getter.galgas", 410)).boolEnum () ;
                if (kBoolTrue == test_17) {
                  var_baseType_17699 = extensionGetter_definition (var_baseType_17699, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 411)).readProperty_superType () ;
                }
              }
              if (kBoolFalse == test_17) {
                var_searching_17745 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_16) {
            var_searching_17745 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionGetterForGeneration temp_19 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_baseType_17699, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 420)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 419)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 420)).add_operation (temp_19.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 421))  COMMA_SOURCE_FILE ("extension-getter.galgas", 419)) ;
    GALGAS_string var_extensionGetterCode_18741 ;
    {
    const GALGAS_extensionGetterForGeneration temp_20 = this ;
    const GALGAS_extensionGetterForGeneration temp_21 = this ;
    const GALGAS_extensionGetterForGeneration temp_22 = this ;
    const GALGAS_extensionGetterForGeneration temp_23 = this ;
    const GALGAS_extensionGetterForGeneration temp_24 = this ;
    routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (GALGAS_string ("cPtr_").add_operation (extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 423)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 423)).add_operation (GALGAS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 423)).add_operation (temp_21.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 423)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_16458, temp_22.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("Compiler"), temp_23.readProperty_mResultType (), temp_24.readProperty_mResultVarCppName (), var_extensionGetterCode_18741, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 422)) ;
    }
    const GALGAS_extensionGetterForGeneration temp_25 = this ;
    const GALGAS_extensionGetterForGeneration temp_26 = this ;
    const GALGAS_extensionGetterForGeneration temp_27 = this ;
    const GALGAS_extensionGetterForGeneration temp_28 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, extensionGetter_definition (temp_25.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 433)).readProperty_typeName ().readProperty_string (), temp_26.readProperty_mExtensionGetterName (), temp_27.readProperty_mExtensionGetterFormalParameterList (), var_extensionGetterCode_18741, temp_28.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 432))) ;
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
  result_result = GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 136)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 136)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 136)) ;
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
  GALGAS_lstring var_key_6576 = GALGAS_lstring::init_21__21_ (GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 149)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 149)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 149)), temp_2.readProperty_mExtensionMethodName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_extensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6576, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 152)) ;
  }
  {
  const GALGAS_extensionMethodAST temp_4 = this ;
  const GALGAS_extensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6576, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 153)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-method.galgas", 153)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-method.galgas", 155)).operator_not (SOURCE_FILE ("extension-method.galgas", 155)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionMethodAST temp_8 = this ;
      GALGAS_extensionMethodMapForType temp_9 = GALGAS_extensionMethodMapForType::init (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 158)) ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), temp_9, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 156)) ;
      }
    }
  }
  const GALGAS_extensionMethodAST temp_10 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_7094 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_10.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-method.galgas", 161)) ;
  if (nullptr != objectArray_7094) {
    macroValidSharedObject (objectArray_7094, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_extensionMethodAST temp_11 = this ;
    const GALGAS_extensionMethodAST temp_12 = this ;
    objectArray_7094->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_11.readProperty_mExtensionMethodName (), temp_12.readProperty_mExtensionMethodFormalParameterList (), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("extension-method.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 162)) ;
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
  GALGAS_lstring var_nameForUsefulness_8668 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 192)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8668, var_nameForUsefulness_8668, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 193)) ;
  }
  const GALGAS_extensionMethodAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_8850 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 194)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_8850, var_nameForUsefulness_8668 COMMA_SOURCE_FILE ("extension-method.galgas", 195)) ;
  }
  const GALGAS_extensionMethodAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_9050 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 197)) ;
  GALGAS_string var_selfObjectNameString_9126 ;
  GALGAS_string var_selfObjectPropertyAccessorString_9163 ;
  GALGAS_bool var_implementedAsFunction_9210 ;
  GALGAS_bool var_isReferenceClass_9274 = GALGAS_bool (false) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_isReference_9370 ;
    const bool optionalResult9342 = extensionGetter_definition (var_selfType_9050, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 203)).readProperty_typeKind ().optional_classType (var_isReference_9370) ;
    if (!optionalResult9342) {
      test_4 = kBoolFalse ;
    }
    if (kBoolTrue == test_4) {
      var_isReferenceClass_9274 = var_isReference_9370 ;
      var_selfObjectNameString_9126 = GALGAS_string ("this") ;
      var_selfObjectPropertyAccessorString_9163 = GALGAS_string ("this->") ;
      var_implementedAsFunction_9210 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameString_9126 = GALGAS_string ("inObject") ;
    var_selfObjectPropertyAccessorString_9163 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_9210 = GALGAS_bool (true) ;
  }
  GALGAS_selfMutability temp_5 ;
  const enumGalgasBool test_6 = var_isReferenceClass_9274.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-method.galgas", 218)) ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_selfMutability::class_func_none (SOURCE_FILE ("extension-method.galgas", 218)) ;
  }
  const GALGAS_extensionMethodAST temp_7 = this ;
  GALGAS_analysisContext var_analysisContextNew_9732 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameString_9126, GALGAS_selfAvailability::class_func_available (var_selfType_9050, temp_5  COMMA_SOURCE_FILE ("extension-method.galgas", 218)), var_selfObjectPropertyAccessorString_9163, temp_7.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GALGAS_bool var_isRefClass_10185 = GALGAS_bool (false) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    GALGAS_bool var_reference_10275 ;
    const bool optionalResult10247 = extensionGetter_definition (var_selfType_9050, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 223)).readProperty_typeKind ().optional_classType (var_reference_10275) ;
    if (!optionalResult10247) {
      test_8 = kBoolFalse ;
    }
    if (kBoolTrue == test_8) {
      var_isRefClass_10185 = var_reference_10275 ;
    }
  }
  GALGAS_typedPropertyList temp_9 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 226)) ;
  GALGAS_typedPropertyList var_mutableProperties_10336 = temp_9 ;
  GALGAS_typedPropertyList temp_10 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 227)) ;
  GALGAS_typedPropertyList var_nonMutableProperties_10387 = temp_10 ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_9050, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 228)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-method.galgas", 228)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      var_nonMutableProperties_10387 = extensionGetter_definition (var_selfType_9050, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 229)).readProperty_allTypedPropertyList () ;
    }
  }
  if (kBoolFalse == test_11) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      GALGAS_bool var_isReference_10637 ;
      const bool optionalResult10609 = extensionGetter_definition (var_selfType_9050, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 230)).readProperty_typeKind ().optional_classType (var_isReference_10637) ;
      if (!optionalResult10609) {
        test_12 = kBoolFalse ;
      }
      if (kBoolTrue == test_12) {
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          test_13 = var_isReference_10637.boolEnum () ;
          if (kBoolTrue == test_13) {
            var_mutableProperties_10336 = extensionGetter_definition (var_selfType_9050, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 232)).readProperty_allTypedPropertyList () ;
          }
        }
        if (kBoolFalse == test_13) {
          var_nonMutableProperties_10387 = extensionGetter_definition (var_selfType_9050, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 234)).readProperty_allTypedPropertyList () ;
        }
      }
    }
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_11213 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_11261 ;
  {
  const GALGAS_extensionMethodAST temp_14 = this ;
  const GALGAS_extensionMethodAST temp_15 = this ;
  const GALGAS_extensionMethodAST temp_16 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_8668, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_9732, ioArgument_ioTypeMap, temp_14.readProperty_mExtensionMethodFormalParameterList (), var_nonMutableProperties_10387, var_mutableProperties_10336, temp_15.readProperty_mExtensionMethodInstructionList (), temp_16.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_11213, var_formalParameterListForGeneration_11261, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 237)) ;
  }
  const GALGAS_extensionMethodAST temp_17 = this ;
  const GALGAS_extensionMethodAST temp_18 = this ;
  const GALGAS_extensionMethodAST temp_19 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (temp_17.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 252)), GALGAS_extensionMethodForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GALGAS_bool (true), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_9050, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 255)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 255)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 255)).add_operation (temp_18.readProperty_mExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 255)), var_selfType_9050, temp_19.readProperty_mExtensionMethodName ().readProperty_string (), var_implementedAsFunction_9210, var_formalParameterListForGeneration_11261, extensionGetter_definition (var_selfType_9050, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 260)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_11213, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas", 251)) ;
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
  ioArgument_ioExtensionMethodListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-method.galgas", 287)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-method.galgas", 306)) ;
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
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 316)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionMethodName (), temp_4.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 315))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionMethodForGeneration temp_5 = this ;
    const GALGAS_extensionMethodForGeneration temp_6 = this ;
    const GALGAS_extensionMethodForGeneration temp_7 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 322)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mExtensionMethodName (), temp_7.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 321))) ;
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
      GALGAS_formalParameterListForGeneration var_extensionMethodFormalParameterList_15366 = temp_2.readProperty_mExtensionMethodFormalParameterList () ;
      {
      const GALGAS_extensionMethodForGeneration temp_3 = this ;
      var_extensionMethodFormalParameterList_15366.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas", 339)), GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.galgas", 340)), temp_3.readProperty_mReceiverType (), GALGAS_lstring::init_21__21_ (GALGAS_string ("self"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 342)), inCompiler COMMA_HERE), GALGAS_string ("inObject"), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 338)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_4 = this ;
      const GALGAS_extensionMethodForGeneration temp_5 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 346)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 346)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 346)).add_operation (temp_5.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 346))  COMMA_SOURCE_FILE ("extension-method.galgas", 346)) ;
      GALGAS_string var_code_16315 ;
      {
      const GALGAS_extensionMethodForGeneration temp_6 = this ;
      const GALGAS_extensionMethodForGeneration temp_7 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GALGAS_bool (false), GALGAS_string ("extensionMethod_").add_operation (temp_6.readProperty_mExtensionMethodName ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 349)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_15366, temp_7.readProperty_mSemanticInstructionListForGeneration (), GALGAS_bool (false), GALGAS_string ("Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_16315, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 347)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_8 = this ;
      const GALGAS_extensionMethodForGeneration temp_9 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 361)).readProperty_typeName ().readProperty_string (), temp_9.readProperty_mExtensionMethodName (), var_code_16315 COMMA_SOURCE_FILE ("extension-method.galgas", 360))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionMethodForGeneration temp_10 = this ;
    extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 366)) ;
    const GALGAS_extensionMethodForGeneration temp_11 = this ;
    cEnumerator_formalParameterListForGeneration enumerator_16647 (temp_11.readProperty_mExtensionMethodFormalParameterList (), EnumerationOrder::up) ;
    while (enumerator_16647.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_16647.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 368)) ;
      enumerator_16647.gotoNextObject () ;
    }
    const GALGAS_extensionMethodForGeneration temp_12 = this ;
    GALGAS_unifiedTypeMapEntry var_baseType_16797 = temp_12.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_16841 = GALGAS_bool (true) ;
    if (GALGAS_uint::class_func_max (SOURCE_FILE ("extension-method.galgas", 372)).isValid ()) {
      uint32_t variant_16862 = GALGAS_uint::class_func_max (SOURCE_FILE ("extension-method.galgas", 372)).uintValue () ;
      bool loop_16862 = true ;
      while (loop_16862) {
        loop_16862 = var_searching_16841.isValid () ;
        if (loop_16862) {
          loop_16862 = var_searching_16841.boolValue () ;
        }
        if (loop_16862 && (0 == variant_16862)) {
          loop_16862 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas", 372)) ;
        }
        if (loop_16862) {
          variant_16862 -- ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = extensionGetter_definition (var_baseType_16797, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 373)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-method.galgas", 373)).operator_not (SOURCE_FILE ("extension-method.galgas", 373)).boolEnum () ;
            if (kBoolTrue == test_13) {
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                const GALGAS_extensionMethodForGeneration temp_15 = this ;
                test_14 = extensionGetter_definition (extensionGetter_definition (var_baseType_16797, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 374)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 374)).readProperty_instanceMethodMap ().getter_hasKey (temp_15.readProperty_mExtensionMethodName () COMMA_SOURCE_FILE ("extension-method.galgas", 374)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  var_baseType_16797 = extensionGetter_definition (var_baseType_16797, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 375)).readProperty_superType () ;
                }
              }
              if (kBoolFalse == test_14) {
                var_searching_16841 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_13) {
            var_searching_16841 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionMethodForGeneration temp_16 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (var_baseType_16797, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 384)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 384)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 384)).add_operation (temp_16.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 385))  COMMA_SOURCE_FILE ("extension-method.galgas", 383)) ;
    GALGAS_string var_methodImplementation_17634 ;
    {
    const GALGAS_extensionMethodForGeneration temp_17 = this ;
    const GALGAS_extensionMethodForGeneration temp_18 = this ;
    const GALGAS_extensionMethodForGeneration temp_19 = this ;
    const GALGAS_extensionMethodForGeneration temp_20 = this ;
    routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_17.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionMethodName (), temp_19.readProperty_mExtensionMethodFormalParameterList (), temp_20.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_17634, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 386)) ;
    }
    const GALGAS_extensionMethodForGeneration temp_21 = this ;
    const GALGAS_extensionMethodForGeneration temp_22 = this ;
    const GALGAS_extensionMethodForGeneration temp_23 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, extensionGetter_definition (temp_21.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 395)).readProperty_typeName ().readProperty_string (), temp_22.readProperty_mExtensionMethodName (), temp_23.readProperty_mExtensionMethodFormalParameterList (), var_methodImplementation_17634 COMMA_SOURCE_FILE ("extension-method.galgas", 394))) ;
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
  result_result = GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 144)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 144)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 144)) ;
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
  GALGAS_lstring var_key_7111 = GALGAS_lstring::init_21__21_ (GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 159)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 159)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 159)), temp_2.readProperty_mExtensionSetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_extensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7111, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 162)) ;
  }
  {
  const GALGAS_extensionSetterAST temp_4 = this ;
  const GALGAS_extensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7111, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 163)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-setter.galgas", 163)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-setter.galgas", 165)).operator_not (SOURCE_FILE ("extension-setter.galgas", 165)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionSetterAST temp_8 = this ;
      GALGAS_extensionSetterMapForType temp_9 = GALGAS_extensionSetterMapForType::init (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 168)) ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), temp_9, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 166)) ;
      }
    }
  }
  const GALGAS_extensionSetterAST temp_10 = this ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_7605 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_10.readProperty_mTypeName (), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-setter.galgas", 171)) ;
  if (nullptr != objectArray_7605) {
    macroValidSharedObject (objectArray_7605, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GALGAS_extensionSetterAST temp_11 = this ;
    const GALGAS_extensionSetterAST temp_12 = this ;
    objectArray_7605->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_11.readProperty_mExtensionSetterName (), temp_12.readProperty_mExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 172)) ;
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
  GALGAS_lstring var_nameForUsefulness_9257 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 206)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9257, var_nameForUsefulness_9257, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 207)) ;
  }
  const GALGAS_extensionSetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_9435 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 208)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_9435, var_nameForUsefulness_9257 COMMA_SOURCE_FILE ("extension-setter.galgas", 209)) ;
  }
  const GALGAS_extensionSetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_9628 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 211)) ;
  GALGAS_string var_selfObjectName_9701 ;
  GALGAS_string var_selfObjectAccessor_9730 ;
  GALGAS_bool var_implementedAsFunction_9761 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_9628, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 216)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-setter.galgas", 216)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectName_9701 = GALGAS_string ("object") ;
      var_selfObjectAccessor_9730 = GALGAS_string ("object->") ;
      var_implementedAsFunction_9761 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectName_9701 = GALGAS_string ("ioObject") ;
    var_selfObjectAccessor_9730 = GALGAS_string ("ioObject.") ;
    var_implementedAsFunction_9761 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionSetterAST temp_5 = this ;
  GALGAS_analysisContext var_analysisContext_10121 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_9701, GALGAS_selfAvailability::class_func_available (var_selfType_9628, GALGAS_selfMutability::class_func_selfAndPropertiesAreMutable (SOURCE_FILE ("extension-setter.galgas", 230))  COMMA_SOURCE_FILE ("extension-setter.galgas", 230)), var_selfObjectAccessor_9730, temp_5.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_10839 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_10885 ;
  {
  const GALGAS_extensionSetterAST temp_6 = this ;
  GALGAS_typedPropertyList temp_7 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 240)) ;
  const GALGAS_extensionSetterAST temp_8 = this ;
  const GALGAS_extensionSetterAST temp_9 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_9257, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_10121, ioArgument_ioTypeMap, temp_6.readProperty_mExtensionSetterFormalParameterList (), temp_7, extensionGetter_definition (var_selfType_9628, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 241)).readProperty_allTypedPropertyList (), temp_8.readProperty_mExtensionSetterInstructionList (), temp_9.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_10839, var_formalParameterListForGeneration_10885, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 234)) ;
  }
  const GALGAS_extensionSetterAST temp_10 = this ;
  const GALGAS_extensionSetterAST temp_11 = this ;
  const GALGAS_extensionSetterAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension setter ").add_operation (temp_10.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 249)), GALGAS_extensionSetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (extensionGetter_definition (var_selfType_9628, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 252)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 252)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 252)).add_operation (temp_11.readProperty_mExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 252)), var_selfType_9628, temp_12.readProperty_mExtensionSetterName ().readProperty_string (), var_implementedAsFunction_9761, var_formalParameterListForGeneration_10885, extensionGetter_definition (var_selfType_9628, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 257)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_10839, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas", 248)) ;
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
  ioArgument_ioExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-setter.galgas", 279)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-setter.galgas", 300)) ;
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
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 310)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionSetterName (), temp_4.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas", 309))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionSetterForGeneration temp_5 = this ;
    const GALGAS_extensionSetterForGeneration temp_6 = this ;
    const GALGAS_extensionSetterForGeneration temp_7 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 316)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mExtensionSetterName (), temp_7.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas", 315))) ;
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
  cEnumerator_formalParameterListForGeneration enumerator_14814 (temp_0.readProperty_mExtensionSetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_14814.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_14814.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 331)) ;
    enumerator_14814.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_extensionSetterForGeneration temp_2 = this ;
    test_1 = temp_2.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_extensionSetterForGeneration temp_3 = this ;
      GALGAS_formalParameterListForGeneration var_extensionSetterFormalParameterList_14977 = temp_3.readProperty_mExtensionSetterFormalParameterList () ;
      {
      const GALGAS_extensionSetterForGeneration temp_4 = this ;
      var_extensionSetterFormalParameterList_14977.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-setter.galgas", 336)), GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.galgas", 337)), temp_4.readProperty_mReceiverType (), GALGAS_lstring::init_21__21_ (GALGAS_string ("self"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 339)), inCompiler COMMA_HERE), GALGAS_string ("ioObject"), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 335)) ;
      }
      const GALGAS_extensionSetterForGeneration temp_5 = this ;
      const GALGAS_extensionSetterForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 343)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 343)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 343)).add_operation (temp_6.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 343))  COMMA_SOURCE_FILE ("extension-setter.galgas", 343)) ;
      GALGAS_string var_code_15922 ;
      {
      const GALGAS_extensionSetterForGeneration temp_7 = this ;
      const GALGAS_extensionSetterForGeneration temp_8 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GALGAS_bool (false), GALGAS_string ("extensionSetter_").add_operation (temp_7.readProperty_mExtensionSetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 346)), ioArgument_ioInclusionSet, var_extensionSetterFormalParameterList_14977, temp_8.readProperty_mSemanticInstructionListForGeneration (), GALGAS_bool (false), GALGAS_string ("Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_15922, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 344)) ;
      }
      const GALGAS_extensionSetterForGeneration temp_9 = this ;
      const GALGAS_extensionSetterForGeneration temp_10 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_9.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 358)).readProperty_typeName ().readProperty_string (), temp_10.readProperty_mExtensionSetterName (), var_code_15922 COMMA_SOURCE_FILE ("extension-setter.galgas", 357))) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_extensionSetterForGeneration temp_11 = this ;
    GALGAS_unifiedTypeMapEntry var_baseType_16188 = temp_11.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_16232 = GALGAS_bool (true) ;
    if (GALGAS_uint::class_func_max (SOURCE_FILE ("extension-setter.galgas", 365)).isValid ()) {
      uint32_t variant_16253 = GALGAS_uint::class_func_max (SOURCE_FILE ("extension-setter.galgas", 365)).uintValue () ;
      bool loop_16253 = true ;
      while (loop_16253) {
        loop_16253 = var_searching_16232.isValid () ;
        if (loop_16253) {
          loop_16253 = var_searching_16232.boolValue () ;
        }
        if (loop_16253 && (0 == variant_16253)) {
          loop_16253 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-setter.galgas", 365)) ;
        }
        if (loop_16253) {
          variant_16253 -- ;
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            test_12 = extensionGetter_definition (var_baseType_16188, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 366)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-setter.galgas", 366)).operator_not (SOURCE_FILE ("extension-setter.galgas", 366)).boolEnum () ;
            if (kBoolTrue == test_12) {
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                const GALGAS_extensionSetterForGeneration temp_14 = this ;
                test_13 = extensionGetter_definition (extensionGetter_definition (var_baseType_16188, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 367)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 367)).readProperty_setterMap ().getter_hasKey (temp_14.readProperty_mExtensionSetterName () COMMA_SOURCE_FILE ("extension-setter.galgas", 367)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  var_baseType_16188 = extensionGetter_definition (var_baseType_16188, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 368)).readProperty_superType () ;
                }
              }
              if (kBoolFalse == test_13) {
                var_searching_16232 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_12) {
            var_searching_16232 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionSetterForGeneration temp_15 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (var_baseType_16188, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 376)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 376)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 376)).add_operation (temp_15.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 376))  COMMA_SOURCE_FILE ("extension-setter.galgas", 376)) ;
    extensionMethod_addHeaderFileName (var_baseType_16188, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 377)) ;
    GALGAS_string var_setterImplementation_17092 ;
    {
    const GALGAS_extensionSetterForGeneration temp_16 = this ;
    const GALGAS_extensionSetterForGeneration temp_17 = this ;
    const GALGAS_extensionSetterForGeneration temp_18 = this ;
    const GALGAS_extensionSetterForGeneration temp_19 = this ;
    routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (extensionGetter_definition (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 379)).readProperty_typeName ().readProperty_string (), GALGAS_string::makeEmptyString (), temp_17.readProperty_mExtensionSetterName (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionSetterFormalParameterList (), temp_19.readProperty_mSemanticInstructionListForGeneration (), var_setterImplementation_17092, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 378)) ;
    }
    const GALGAS_extensionSetterForGeneration temp_20 = this ;
    const GALGAS_extensionSetterForGeneration temp_21 = this ;
    const GALGAS_extensionSetterForGeneration temp_22 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (inCompiler, extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 388)).readProperty_typeName ().readProperty_string (), temp_21.readProperty_mExtensionSetterName (), temp_22.readProperty_mExtensionSetterFormalParameterList (), var_setterImplementation_17092 COMMA_SOURCE_FILE ("extension-setter.galgas", 387))) ;
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
  result_result = GALGAS_string ("initializer @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 127)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 127)).add_operation (extensionGetter_initializerSignature (temp_1.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 127)) ;
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
  GALGAS_lstring var_key_5750 = GALGAS_lstring::init_21__21_ (callExtensionGetter_keyRepresentation ((const cPtr_initializerAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 139)), temp_1.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_initializerAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5750, temp_2, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 140)) ;
  }
  {
  const GALGAS_initializerAST temp_3 = this ;
  const GALGAS_initializerAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5750, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_3.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 141)), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-initializer.galgas", 141)) ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_initializerAST temp_6 = this ;
    test_5 = ioArgument_ioExtensionInitializerForBuildingContext.getter_hasKey (temp_6.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-initializer.galgas", 143)).operator_not (SOURCE_FILE ("extension-initializer.galgas", 143)).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      const GALGAS_initializerAST temp_7 = this ;
      GALGAS_extensionInitializerMapForType temp_8 = GALGAS_extensionInitializerMapForType::init (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 146)) ;
      ioArgument_ioExtensionInitializerForBuildingContext.setter_insertKey (temp_7.readProperty_mTypeName (), temp_8, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 144)) ;
      }
    }
  }
  const GALGAS_initializerAST temp_9 = this ;
  cMapElement_extensionInitializerForBuildingContext * objectArray_6195 = (cMapElement_extensionInitializerForBuildingContext *) ioArgument_ioExtensionInitializerForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionInitializerForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-initializer.galgas", 149)) ;
  if (nullptr != objectArray_6195) {
    macroValidSharedObject (objectArray_6195, cMapElement_extensionInitializerForBuildingContext) ;
    {
    const GALGAS_initializerAST temp_10 = this ;
    const GALGAS_initializerAST temp_11 = this ;
    const GALGAS_initializerAST temp_12 = this ;
    objectArray_6195->mProperty_mExtensionInitializerMapForType.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (temp_10.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 151)), temp_11.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE), temp_12.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 150)) ;
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
  GALGAS_lstring var_nameForUsefulness_7720 = function_initializerNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), temp_1.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 179)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7720, var_nameForUsefulness_7720, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 180)) ;
  }
  const GALGAS_initializerAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_7907 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 181)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7907, var_nameForUsefulness_7720 COMMA_SOURCE_FILE ("extension-initializer.galgas", 182)) ;
  }
  const GALGAS_initializerAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_8107 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 184)) ;
  GALGAS_string var_selfObjectNameString_8182 ;
  GALGAS_string var_selfObjectAccessorString_8219 ;
  GALGAS_bool var_isReferenceClass_8286 = GALGAS_bool (false) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_isReference_8382 ;
    const bool optionalResult8354 = extensionGetter_definition (var_selfType_8107, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 189)).readProperty_typeKind ().optional_classType (var_isReference_8382) ;
    if (!optionalResult8354) {
      test_4 = kBoolFalse ;
    }
    if (kBoolTrue == test_4) {
      var_isReferenceClass_8286 = var_isReference_8382 ;
      var_selfObjectNameString_8182 = GALGAS_string ("<< this >>") ;
      var_selfObjectAccessorString_8219 = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameString_8182 = GALGAS_string ("result") ;
    var_selfObjectAccessorString_8219 = GALGAS_string ("result.") ;
  }
  GALGAS_analysisContext var_analysisContextNew_8653 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameString_8182, GALGAS_selfAvailability::class_func_available (var_selfType_8107, GALGAS_selfMutability::class_func_initializer (SOURCE_FILE ("extension-initializer.galgas", 202))  COMMA_SOURCE_FILE ("extension-initializer.galgas", 202)), var_selfObjectAccessorString_8219, GALGAS_bool (true), inCompiler COMMA_HERE) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9238 ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_9286 ;
  {
  const GALGAS_initializerAST temp_5 = this ;
  const GALGAS_initializerAST temp_6 = this ;
  const GALGAS_initializerAST temp_7 = this ;
  routine_analyzeInitializerBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_7720, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_8653, ioArgument_ioTypeMap, temp_5.readProperty_mFormalParameterList (), temp_6.readProperty_mInstructionList (), temp_7.readProperty_mEndOfInitializerLocation (), var_semanticInstructionListForGeneration_9238, var_formalParameterListForGeneration_9286, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 206)) ;
  }
  const GALGAS_initializerAST temp_8 = this ;
  GALGAS_string var_initializerName_9340 = extensionGetter_initializerSignature (temp_8.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 218)) ;
  const GALGAS_initializerAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("initializer @").add_operation (temp_9.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 220)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 220)).add_operation (var_initializerName_9340, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 220)), GALGAS_extensionInitializerForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GALGAS_bool (false), GALGAS_string ("initializer-").add_operation (extensionGetter_definition (var_selfType_8107, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 223)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-initializer.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 223)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 223)).add_operation (var_initializerName_9340.getter_fileNameRepresentation (SOURCE_FILE ("extension-initializer.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 223)), var_selfType_8107, var_initializerName_9340, var_formalParameterListForGeneration_9286, extensionGetter_definition (var_selfType_8107, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 227)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_9238, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas", 219)) ;
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
  GALGAS_localVarManager var_variableMap_10879 = GALGAS_localVarManager::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_type_11039 ;
    GALGAS_selfMutability var_selfMutability_11065 ;
    const bool optionalResult11018 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_type_11039, var_selfMutability_11065) ;
    if (!optionalResult11018) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      cEnumerator_typedPropertyList enumerator_11124 (extensionGetter_definition (var_type_11039, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 250)).readProperty_allTypedPropertyList (), EnumerationOrder::up) ;
      while (enumerator_11124.hasCurrentObject ()) {
        GALGAS_bool temp_1 ;
        const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, var_selfMutability_11065.objectCompare (GALGAS_selfMutability::class_func_initializer (SOURCE_FILE ("extension-initializer.galgas", 251)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = GALGAS_bool (ComparisonKind::notEqual, enumerator_11124.current (HERE).readProperty_initialization ().objectCompare (GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("extension-initializer.galgas", 252)))) ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GALGAS_bool (true) ;
        }
        GALGAS_bool var_initialized_11158 = temp_1 ;
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_10879, enumerator_11124.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfMethodLocation, enumerator_11124.current (HERE).readProperty_typeEntry (), GALGAS_string ("<< unused >>"), GALGAS_string ("self.").add_operation (enumerator_11124.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 260)), var_initialized_11158, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 255)) ;
        }
        enumerator_11124.gotoNextObject () ;
      }
    }
  }
  GALGAS_formalInputParameterListForGeneration temp_3 = GALGAS_formalInputParameterListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 266)) ;
  outArgument_outSignatureForGeneration = temp_3 ;
  cEnumerator_formalInputParameterListAST enumerator_11654 (constinArgument_inFormalArgumentListAST, EnumerationOrder::up) ;
  while (enumerator_11654.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterType_11689 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11654.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 268)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = enumerator_11654.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_cppName_11824 = GALGAS_string ("constinArgument_").add_operation (enumerator_11654.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 270)) ;
        outArgument_outSignatureForGeneration.addAssign_operation (enumerator_11654.current (HERE).readProperty_mFormalSelector (), var_parameterType_11689, var_cppName_11824, enumerator_11654.current (HERE).readProperty_mFormalArgumentName (), enumerator_11654.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("extension-initializer.galgas", 271)) ;
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = enumerator_11654.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_10879, enumerator_11654.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_11689, var_cppName_11824, var_cppName_11824, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 278)) ;
            }
          }
        }
        if (kBoolFalse == test_5) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_10879, enumerator_11654.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_11689, var_cppName_11824, var_cppName_11824, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 280)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_4) {
      GALGAS_string var_cppName_12441 = GALGAS_string ("inArgument_").add_operation (enumerator_11654.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 283)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_11654.current (HERE).readProperty_mFormalSelector (), var_parameterType_11689, var_cppName_12441, enumerator_11654.current (HERE).readProperty_mFormalArgumentName (), enumerator_11654.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("extension-initializer.galgas", 284)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = enumerator_11654.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (kBoolTrue == test_6) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_10879, enumerator_11654.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_11689, var_cppName_12441, var_cppName_12441, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 291)) ;
          }
        }
      }
      if (kBoolFalse == test_6) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_10879, enumerator_11654.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_11689, var_cppName_12441, var_cppName_12441, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 293)) ;
        }
      }
    }
    enumerator_11654.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration temp_7 = GALGAS_semanticInstructionListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 298)) ;
  outArgument_outSemanticInstructionListForGeneration = temp_7 ;
  cEnumerator_semanticInstructionListAST enumerator_13148 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_13148.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_13148.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_10879, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 300)) ;
    enumerator_13148.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_10879, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 310)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionInitializerForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionInitializerForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-initializer.galgas", 348)) ;
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
  cEnumerator_formalInputParameterListForGeneration enumerator_15927 (temp_0.readProperty_formalParameterList (), EnumerationOrder::up) ;
  while (enumerator_15927.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_15927.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 357)) ;
    enumerator_15927.gotoNextObject () ;
  }
  GALGAS_string var_methodImplementation_16234 ;
  {
  const GALGAS_extensionInitializerForGeneration temp_1 = this ;
  const GALGAS_extensionInitializerForGeneration temp_2 = this ;
  const GALGAS_extensionInitializerForGeneration temp_3 = this ;
  const GALGAS_extensionInitializerForGeneration temp_4 = this ;
  routine_generateInitializer_3F__3F__26__3F__3F__21_ (temp_1.readProperty_mReceiverType (), temp_2.readProperty_initializerName (), ioArgument_ioInclusionSet, temp_3.readProperty_formalParameterList (), temp_4.readProperty_semanticInstructionListForGeneration (), var_methodImplementation_16234, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 359)) ;
  }
  const GALGAS_extensionInitializerForGeneration temp_5 = this ;
  const GALGAS_extensionInitializerForGeneration temp_6 = this ;
  const GALGAS_extensionInitializerForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_initializerImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 368)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_initializerName (), temp_7.readProperty_formalParameterList (), var_methodImplementation_16234 COMMA_SOURCE_FILE ("extension-initializer.galgas", 367))) ;
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
  GALGAS_string var_className_17263 = extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 389)).readProperty_typeName ().readProperty_string () ;
  GALGAS_stringset temp_0 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 391)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_17367 = temp_0 ;
  var_unusedVariableCppNameSet_17367.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 392))  COMMA_SOURCE_FILE ("extension-initializer.galgas", 392)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_17467 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_17467.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_17367.addAssign_operation (enumerator_17467.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("extension-initializer.galgas", 394)) ;
    enumerator_17467.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_17594 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_17635 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_17635.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 399)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_17695 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_17695.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_17695.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_17594, var_unusedVariableCppNameSet_17367, GALGAS_bool (false), var_routineBody_17635, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 401)) ;
    enumerator_17695.gotoNextObject () ;
  }
  {
  var_routineBody_17635.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 409)) ;
  }
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 411)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_18081 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
  while (enumerator_18081.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18081.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 413)) ;
    enumerator_18081.gotoNextObject () ;
  }
  GALGAS_bool var_isStruct_18209 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 416)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-initializer.galgas", 416)))) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_isStruct_18209.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outGeneratedCode = GALGAS_string ("GALGAS_").add_operation (var_className_17263.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 419)).add_operation (GALGAS_string (" GALGAS_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 419)).add_operation (var_className_17263.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 420)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 420)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 421)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 421)) ;
      GALGAS_uint var_colRef_18532 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("extension-initializer.galgas", 422)) ;
      cEnumerator_formalInputParameterListForGeneration enumerator_18602 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
      while (enumerator_18602.hasCurrentObject ()) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = enumerator_18602.current (HERE).readProperty_mIsConstant ().boolEnum () ;
          if (kBoolTrue == test_2) {
            outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_18602.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 426)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 426)) ;
          }
        }
        if (kBoolFalse == test_2) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_18602.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 428)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 428)) ;
        }
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_unusedVariableCppNameSet_17367.getter_hasKey (enumerator_18602.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("extension-initializer.galgas", 430)).boolEnum () ;
          if (kBoolTrue == test_3) {
            outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_18602.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 431)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 431)) ;
          }
        }
        if (kBoolFalse == test_3) {
          outArgument_outGeneratedCode.plusAssign_operation(enumerator_18602.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 433)) ;
        }
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 435)) ;
        {
        outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_18532, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 436)) ;
        }
        enumerator_18602.gotoNextObject () ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("Compiler * ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 439)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 439)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 439)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_18532, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 440)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 441)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 442)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (var_className_17263.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 443)).add_operation (GALGAS_string (" result ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 443)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  result.setInitializedProperties (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 444)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 444)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 444)) ;
      outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_17635, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 445)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return result ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 446)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 447)) ;
    }
  }
  if (kBoolFalse == test_1) {
    outArgument_outGeneratedCode = GALGAS_string ("GALGAS_").add_operation (var_className_17263.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 449)).add_operation (GALGAS_string (" GALGAS_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 449)).add_operation (var_className_17263.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 450)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 450)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 451)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 451)) ;
    GALGAS_uint var_colRef_19996 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("extension-initializer.galgas", 452)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_20066 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
    while (enumerator_20066.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = enumerator_20066.current (HERE).readProperty_mIsConstant ().boolEnum () ;
        if (kBoolTrue == test_4) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_20066.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 456)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 456)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 456)) ;
        }
      }
      if (kBoolFalse == test_4) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_20066.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 458)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 458)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 458)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_20066.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 460)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 461)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19996, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 462)) ;
      }
      enumerator_20066.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("Compiler * ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 465)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 465)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 465)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19996, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 466)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_LOCATION_ARGS) {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 467)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  cPtr_").add_operation (var_className_17263.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 468)).add_operation (GALGAS_string (" * object = nullptr ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 468)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 468)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  macroMyNew (object, cPtr_").add_operation (var_className_17263.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 469)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 469)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 470)).add_operation (GALGAS_string (" COMMA_THERE)) ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 470)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 470)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  object->").add_operation (var_className_17263.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 471)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 471)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 472)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 471)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_21153 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
    while (enumerator_21153.hasCurrentObject ()) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_21153.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 474)) ;
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 475)) ;
      enumerator_21153.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 477)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 477)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (var_className_17263.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 478)).add_operation (GALGAS_string (" result (object) ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 478)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 478)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  macroDetachSharedObject (object) ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 479)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return result ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 480)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 481)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("void cPtr_").add_operation (var_className_17263.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 482)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 482)).add_operation (var_className_17263.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 483)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 483)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 484)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 482)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_21796 (constinArgument_inFormalArgumentList, EnumerationOrder::up) ;
    while (enumerator_21796.hasCurrentObject ()) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = enumerator_21796.current (HERE).readProperty_mIsConstant ().boolEnum () ;
        if (kBoolTrue == test_5) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 487)) ;
        }
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_21796.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 489)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 489)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_unusedVariableCppNameSet_17367.getter_hasKey (enumerator_21796.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("extension-initializer.galgas", 490)).boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_21796.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 491)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 491)) ;
        }
      }
      if (kBoolFalse == test_6) {
        outArgument_outGeneratedCode.plusAssign_operation(enumerator_21796.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 493)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 495)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19996, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 496)) ;
      }
      enumerator_21796.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 499)) ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_unusedVariableCppNameSet_17367.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 500)) COMMA_SOURCE_FILE ("extension-initializer.galgas", 500)).boolEnum () ;
      if (kBoolTrue == test_7) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 501)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 501)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 501)) ;
      }
    }
    if (kBoolFalse == test_7) {
      outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 503)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 503)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 505)) ;
    outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_17635, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 506)) ;
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 507)) ;
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
  result_result = GALGAS_string ("overriding extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 152)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 152)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 152)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 166)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_overridingAbstractExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 168)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 168)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_overridingAbstractExtensionGetterAST temp_3 = this ;
      GALGAS_extensionGetterMapForType temp_4 = GALGAS_extensionGetterMapForType::init (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 171)) ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), temp_4, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 169)) ;
      }
    }
  }
  const GALGAS_overridingAbstractExtensionGetterAST temp_5 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_7286 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_5.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 174)) ;
  if (nullptr != objectArray_7286) {
    macroValidSharedObject (objectArray_7286, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_overridingAbstractExtensionGetterAST temp_6 = this ;
    const GALGAS_overridingAbstractExtensionGetterAST temp_7 = this ;
    const GALGAS_overridingAbstractExtensionGetterAST temp_8 = this ;
    objectArray_7286->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_6.readProperty_mAbstractExtensionGetterName (), temp_7.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_8.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 175)) ;
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
  GALGAS_unifiedTypeMapEntry var_selfType_9344 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 215)) ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_returnType_9426 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 217)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_selfType_9344, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 219)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 219)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 219)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_overridingAbstractExtensionGetterAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9344, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 220)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 220)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 220)), fixItArray4  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 220)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = extensionGetter_definition (var_selfType_9344, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 221)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_overridingAbstractExtensionGetterAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9344, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 222)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 222)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 222)), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 222)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_10017 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_10062 = extensionGetter_definition (var_selfType_9344, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 226)).readProperty_superType () ;
  GALGAS_functionSignature temp_8 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 227)) ;
  GALGAS_functionSignature var_inheritedSignature_10131 = temp_8 ;
  GALGAS_unifiedTypeMapEntry var_inheritedReturnType_10183 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 228)) ;
  GALGAS_location var_inheritedDeclarationLocation_10227 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 229)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 230)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 230)).isValid ()) {
    uint32_t variant_10275 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 230)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 230)).uintValue () ;
    bool loop_10275 = true ;
    while (loop_10275) {
      loop_10275 = var_superType_10062.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 231)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 231)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_10017.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 231)).isValid () ;
      if (loop_10275) {
        loop_10275 = var_superType_10062.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 231)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 231)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_10017.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 231)).boolValue () ;
      }
      if (loop_10275 && (0 == variant_10275)) {
        loop_10275 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 230)) ;
      }
      if (loop_10275) {
        variant_10275 -- ;
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          const GALGAS_overridingAbstractExtensionGetterAST temp_10 = this ;
          test_9 = extensionGetter_definition (var_superType_10062, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 232)).readProperty_getterMap ().getter_hasKey (temp_10.readProperty_mAbstractExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 232)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_methodQualifier var_qualifier_10682 ;
            const GALGAS_overridingAbstractExtensionGetterAST temp_11 = this ;
            GALGAS_methodKind joker_10560 ; // Joker input parameter
            GALGAS_bool joker_10637 ; // Joker input parameter
            GALGAS_string joker_10700 ; // Joker input parameter
            extensionGetter_definition (var_superType_10062, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 233)).readProperty_getterMap ().method_searchKey (temp_11.readProperty_mAbstractExtensionGetterName (), joker_10560, var_inheritedSignature_10131, var_inheritedDeclarationLocation_10227, joker_10637, var_inheritedReturnType_10183, var_qualifier_10682, joker_10700, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 233)) ;
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              test_12 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_10682.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 243)))).boolEnum () ;
              if (kBoolTrue == test_12) {
                var_baseTypeName_10017 = extensionGetter_definition (var_superType_10062, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 244)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_10062 = extensionGetter_definition (var_superType_10062, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 247)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_10017.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_overridingAbstractExtensionGetterAST temp_14 = this ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray15  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 250)) ;
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_10017.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_formalInputParameterListForGeneration temp_17 = GALGAS_formalInputParameterListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 254)) ;
      GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_11088 = temp_17 ;
      const GALGAS_overridingAbstractExtensionGetterAST temp_18 = this ;
      cEnumerator_formalInputParameterListAST enumerator_11237 (temp_18.readProperty_mAbstractExtensionGetterFormalInputParameterList (), EnumerationOrder::up) ;
      while (enumerator_11237.hasCurrentObject ()) {
        var_formalParameterListForGeneration_11088.addAssign_operation (enumerator_11237.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11237.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 258)), enumerator_11237.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_11237.current_mFormalArgumentName (HERE), enumerator_11237.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 256)) ;
        enumerator_11237.gotoNextObject () ;
      }
      {
      const GALGAS_overridingAbstractExtensionGetterAST temp_19 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_11088, var_returnType_9426, temp_19.readProperty_mAbstractExtensionGetterName ().readProperty_location (), var_inheritedSignature_10131, var_inheritedReturnType_10183, var_inheritedDeclarationLocation_10227, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 263)) ;
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
  ioArgument_ioOverridingAbstractExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 291)) ;
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
  result_result = GALGAS_string ("overriding extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 119)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 119)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 119)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 134)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_overridingAbstractExtensionMethodAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 136)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 136)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_overridingAbstractExtensionMethodAST temp_3 = this ;
      GALGAS_extensionMethodMapForType temp_4 = GALGAS_extensionMethodMapForType::init (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 139)) ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), temp_4, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 137)) ;
      }
    }
  }
  const GALGAS_overridingAbstractExtensionMethodAST temp_5 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_6242 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_5.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 142)) ;
  if (nullptr != objectArray_6242) {
    macroValidSharedObject (objectArray_6242, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_overridingAbstractExtensionMethodAST temp_6 = this ;
    const GALGAS_overridingAbstractExtensionMethodAST temp_7 = this ;
    objectArray_6242->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_6.readProperty_mOverridingExtensionMethodName (), temp_7.readProperty_mOverridingExtensionMethodFormalParameterList (), GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 143)) ;
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
  GALGAS_unifiedTypeMapEntry var_selfType_8383 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 183)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_8383, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 185)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 185)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 185)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_overridingAbstractExtensionMethodAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_8383, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 186)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 186)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 186)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 186)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_8383, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 187)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_overridingAbstractExtensionMethodAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (extensionGetter_definition (var_selfType_8383, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 188)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 188)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 188)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 188)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_8945 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_8990 = extensionGetter_definition (var_selfType_8383, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 192)).readProperty_superType () ;
  GALGAS_formalParameterSignature temp_7 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 193)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_9040 = temp_7 ;
  GALGAS_location var_inheritedDeclarationLocation_9107 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 194)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 195)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 195)).isValid ()) {
    uint32_t variant_9155 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 195)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 195)).uintValue () ;
    bool loop_9155 = true ;
    while (loop_9155) {
      loop_9155 = var_superType_8990.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 196)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 196)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_8945.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 196)).isValid () ;
      if (loop_9155) {
        loop_9155 = var_superType_8990.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 196)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 196)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_8945.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 196)).boolValue () ;
      }
      if (loop_9155 && (0 == variant_9155)) {
        loop_9155 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 195)) ;
      }
      if (loop_9155) {
        variant_9155 -- ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          const GALGAS_overridingAbstractExtensionMethodAST temp_9 = this ;
          test_8 = extensionGetter_definition (var_superType_8990, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 197)).readProperty_instanceMethodMap ().getter_hasKey (temp_9.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 197)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_methodQualifier var_qualifier_9553 ;
            const GALGAS_overridingAbstractExtensionMethodAST temp_10 = this ;
            GALGAS_methodKind joker_9460 ; // Joker input parameter
            GALGAS_bool joker_9537 ; // Joker input parameter
            GALGAS_string joker_9571 ; // Joker input parameter
            extensionGetter_definition (var_superType_8990, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 198)).readProperty_instanceMethodMap ().method_searchKey (temp_10.readProperty_mOverridingExtensionMethodName (), joker_9460, var_inheritedSignature_9040, var_inheritedDeclarationLocation_9107, joker_9537, var_qualifier_9553, joker_9571, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 198)) ;
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_9553.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 207)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_baseTypeName_8945 = extensionGetter_definition (var_superType_8990, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 208)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_8990 = extensionGetter_definition (var_superType_8990, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 211)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_8945.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_overridingAbstractExtensionMethodAST temp_13 = this ;
      TC_Array <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray14  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 214)) ;
    }
  }
  GALGAS_localVarManager var_variableMap_9943 = GALGAS_localVarManager::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_10137 ;
  {
  const GALGAS_overridingAbstractExtensionMethodAST temp_15 = this ;
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inSemanticContext, ioArgument_ioTypeMap, temp_15.readProperty_mOverridingExtensionMethodFormalParameterList (), var_variableMap_9943, var_formalParameterListForGeneration_10137, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 218)) ;
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_8945.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      {
      const GALGAS_overridingAbstractExtensionMethodAST temp_17 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_10137, temp_17.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_9040, var_inheritedDeclarationLocation_9107, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 227)) ;
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
  ioArgument_ioOverridingAbstractExtensionMethodListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 254)) ;
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
  result_result = GALGAS_string ("overriding extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 116)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 116)).add_operation (temp_1.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 116)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 129)) ;
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
  GALGAS_unifiedTypeMapEntry var_selfType_7227 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 159)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_7227, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 161)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 161)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 161)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_overridingAbstractExtensionSetterAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7227, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 162)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 162)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 162)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 162)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_7227, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 163)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_overridingAbstractExtensionSetterAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7227, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 164)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 164)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 164)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 164)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_7805 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_7852 = extensionGetter_definition (var_selfType_7227, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 168)).readProperty_superType () ;
  GALGAS_formalParameterSignature temp_7 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 169)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_7904 = temp_7 ;
  GALGAS_location var_inheritedDeclarationLocation_7963 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 170)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 171)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 171)).isValid ()) {
    uint32_t variant_8013 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 171)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 171)).uintValue () ;
    bool loop_8013 = true ;
    while (loop_8013) {
      loop_8013 = var_superType_7852.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 172)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 172)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_7805.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 172)).isValid () ;
      if (loop_8013) {
        loop_8013 = var_superType_7852.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 172)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 172)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_7805.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 172)).boolValue () ;
      }
      if (loop_8013 && (0 == variant_8013)) {
        loop_8013 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 171)) ;
      }
      if (loop_8013) {
        variant_8013 -- ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          const GALGAS_overridingAbstractExtensionSetterAST temp_9 = this ;
          test_8 = extensionGetter_definition (var_superType_7852, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 173)).readProperty_setterMap ().getter_hasKey (temp_9.readProperty_mOverridingExtensionSetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 173)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_methodQualifier var_qualifier_8323 ;
            const GALGAS_overridingAbstractExtensionSetterAST temp_10 = this ;
            GALGAS_methodKind joker_8292 ; // Joker input parameter
            GALGAS_bool joker_8315 ; // Joker input parameter
            GALGAS_string joker_8333 ; // Joker input parameter
            extensionGetter_definition (var_superType_7852, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 174)).readProperty_setterMap ().method_searchKey (temp_10.readProperty_mOverridingExtensionSetterName (), joker_8292, var_inheritedSignature_7904, joker_8315, var_qualifier_8323, joker_8333, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 174)) ;
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_8323.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 175)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_baseTypeName_7805 = extensionGetter_definition (var_superType_7852, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 176)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_7852 = extensionGetter_definition (var_superType_7852, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 179)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_7805.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_overridingAbstractExtensionSetterAST temp_13 = this ;
      TC_Array <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("this setter is not declared by a super class"), fixItArray14  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 182)) ;
    }
  }
  GALGAS_localVarManager var_variableMap_8719 = GALGAS_localVarManager::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_8925 ;
  {
  const GALGAS_overridingAbstractExtensionSetterAST temp_15 = this ;
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inSemanticContext, ioArgument_ioTypeMap, temp_15.readProperty_mOverridingExtensionSetterFormalParameterList (), var_variableMap_8719, var_formalParameterListForGeneration_8925, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 186)) ;
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_7805.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      {
      const GALGAS_overridingAbstractExtensionSetterAST temp_17 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_8925, temp_17.readProperty_mOverridingExtensionSetterName ().readProperty_location (), var_inheritedSignature_7904, var_inheritedDeclarationLocation_7963, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 195)) ;
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
  ioArgument_ioOverridingAbstractExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 219)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 195)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_overridingExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 197)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 197)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_overridingExtensionGetterAST temp_3 = this ;
      GALGAS_extensionGetterMapForType temp_4 = GALGAS_extensionGetterMapForType::init (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 200)) ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), temp_4, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 198)) ;
      }
    }
  }
  const GALGAS_overridingExtensionGetterAST temp_5 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_8319 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_5.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 203)) ;
  if (nullptr != objectArray_8319) {
    macroValidSharedObject (objectArray_8319, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_overridingExtensionGetterAST temp_6 = this ;
    const GALGAS_overridingExtensionGetterAST temp_7 = this ;
    const GALGAS_overridingExtensionGetterAST temp_8 = this ;
    objectArray_8319->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_6.readProperty_mOverridingExtensionGetterName (), temp_7.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_8.readProperty_mOverridingExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-getter.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 204)) ;
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
  result_result = GALGAS_string ("overriding extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 218)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 218)).add_operation (temp_1.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 218)) ;
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
  GALGAS_lstring var_nameForUsefulness_10536 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 248)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10536, var_nameForUsefulness_10536, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 249)) ;
  }
  const GALGAS_overridingExtensionGetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_10724 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 250)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_10724, var_nameForUsefulness_10536 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 251)) ;
  }
  const GALGAS_overridingExtensionGetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_10917 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 253)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_10917, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 255)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas", 255)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 255)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionGetterAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension getter: '@").add_operation (extensionGetter_definition (var_selfType_10917, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 256)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 256)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 256)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 256)) ;
    }
  }
  GALGAS_string var_baseTypeName_11260 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_11305 = extensionGetter_definition (var_selfType_10917, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 260)).readProperty_superType () ;
  GALGAS_functionSignature temp_7 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 261)) ;
  GALGAS_functionSignature var_inheritedSignature_11374 = temp_7 ;
  GALGAS_unifiedTypeMapEntry var_inheritedReturnType_11405 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-getter.galgas", 262)) ;
  GALGAS_location var_inheritedDeclarationLocation_11469 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 263)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 264)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 264)).isValid ()) {
    uint32_t variant_11517 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 264)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 264)).uintValue () ;
    bool loop_11517 = true ;
    while (loop_11517) {
      loop_11517 = var_superType_11305.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 265)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 265)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_11260.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 265)).isValid () ;
      if (loop_11517) {
        loop_11517 = var_superType_11305.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 265)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 265)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_11260.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 265)).boolValue () ;
      }
      if (loop_11517 && (0 == variant_11517)) {
        loop_11517 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-getter.galgas", 264)) ;
      }
      if (loop_11517) {
        variant_11517 -- ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          const GALGAS_overridingExtensionGetterAST temp_9 = this ;
          test_8 = extensionGetter_definition (var_superType_11305, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 266)).readProperty_getterMap ().getter_hasKey (temp_9.readProperty_mOverridingExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 266)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_methodQualifier var_qualifier_11945 ;
            const GALGAS_overridingExtensionGetterAST temp_10 = this ;
            GALGAS_methodKind joker_11806 ; // Joker input parameter
            GALGAS_bool joker_11883 ; // Joker input parameter
            GALGAS_string joker_11963 ; // Joker input parameter
            extensionGetter_definition (var_superType_11305, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 267)).readProperty_getterMap ().method_searchKey (temp_10.readProperty_mOverridingExtensionGetterName (), joker_11806, var_inheritedSignature_11374, var_inheritedDeclarationLocation_11469, joker_11883, var_inheritedReturnType_11405, var_qualifier_11945, joker_11963, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 267)) ;
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_11945.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-getter.galgas", 277)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_baseTypeName_11260 = extensionGetter_definition (var_superType_11305, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 278)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_11305 = extensionGetter_definition (var_superType_11305, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 281)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_11260.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_overridingExtensionGetterAST temp_13 = this ;
      TC_Array <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray14  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 284)) ;
    }
  }
  const GALGAS_overridingExtensionGetterAST temp_15 = this ;
  GALGAS_analysisContext var_analysisContext_12331 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("this"), GALGAS_selfAvailability::class_func_available (var_selfType_10917, GALGAS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-getter.galgas", 291))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 291)), GALGAS_string ("object."), temp_15.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_13293 ;
  GALGAS_unifiedTypeMapEntry var_returnType_13356 ;
  GALGAS_string var_returnVariableCppName_13384 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_13453 ;
  {
  const GALGAS_overridingExtensionGetterAST temp_16 = this ;
  GALGAS_typedPropertyList temp_17 ;
  const enumGalgasBool test_18 = extensionGetter_definition (var_selfType_10917, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 301)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas", 301)).operator_or (GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_10917, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 301)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-overriding-getter.galgas", 301)))) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 301)).boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = extensionGetter_definition (var_selfType_10917, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 302)).readProperty_allTypedPropertyList () ;
  }else if (kBoolFalse == test_18) {
    GALGAS_typedPropertyList temp_19 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 303)) ;
    temp_17 = temp_19 ;
  }
  const GALGAS_overridingExtensionGetterAST temp_20 = this ;
  const GALGAS_overridingExtensionGetterAST temp_21 = this ;
  const GALGAS_overridingExtensionGetterAST temp_22 = this ;
  const GALGAS_overridingExtensionGetterAST temp_23 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_10536, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_12331, ioArgument_ioTypeMap, temp_16.readProperty_mOverridingExtensionGetterFormalInputParameterList (), temp_17, GALGAS_string ("this->"), temp_20.readProperty_mOverridingExtensionGetterInstructionList (), temp_21.readProperty_mOverridingExtensionGetterReturnedVariableName (), temp_22.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_23.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_13293, var_returnType_13356, var_returnVariableCppName_13384, var_semanticInstructionListForGeneration_13453, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 295)) ;
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_11260.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_24) {
      {
      const GALGAS_overridingExtensionGetterAST temp_25 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_13293, var_returnType_13356, temp_25.readProperty_mOverridingExtensionGetterName ().readProperty_location (), var_inheritedSignature_11374, var_inheritedReturnType_11405, var_inheritedDeclarationLocation_11469, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 317)) ;
      }
    }
  }
  const GALGAS_overridingExtensionGetterAST temp_26 = this ;
  const GALGAS_overridingExtensionGetterAST temp_27 = this ;
  const GALGAS_overridingExtensionGetterAST temp_28 = this ;
  const GALGAS_overridingExtensionGetterAST temp_29 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension getter ").add_operation (temp_26.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 328)), GALGAS_overrideExtensionGetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_string ("getter-").add_operation (temp_27.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 331)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 331)).add_operation (temp_28.readProperty_mOverridingExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 331)), var_selfType_10917, var_baseTypeName_11260, temp_29.readProperty_mOverridingExtensionGetterName ().readProperty_string (), var_returnType_13356, var_returnVariableCppName_13384, var_formalParameterListForGeneration_13293, extensionGetter_definition (var_selfType_10917, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 338)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_13453, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 327)) ;
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
  ioArgument_ioOverridingExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 360)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overrideExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_overrideExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-getter.galgas", 383)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 392)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 392))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 392)) ;
  GALGAS_string var_extensionGetterCode_17786 ;
  {
  const GALGAS_overrideExtensionGetterForGeneration temp_1 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_2 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_3 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_4 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_5 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_6 = this ;
  routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (GALGAS_string ("cPtr_").add_operation (extensionGetter_definition (temp_1.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 394)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 394)).add_operation (GALGAS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 394)).add_operation (temp_2.readProperty_mOverridingExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 394)), ioArgument_ioInclusionSet, temp_3.readProperty_mOverridingExtensionGetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("Compiler"), temp_5.readProperty_mResultType (), temp_6.readProperty_mResultVarCppName (), var_extensionGetterCode_17786, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 393)) ;
  }
  const GALGAS_overrideExtensionGetterForGeneration temp_7 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_8 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_9 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 404)).readProperty_typeName ().readProperty_string (), temp_8.readProperty_mOverridingExtensionGetterName (), var_extensionGetterCode_17786, temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 403))) ;
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
  result_result = GALGAS_string ("overriding extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 146)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 146)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 146)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 161)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_overridingExtensionMethodAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 163)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 163)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      const GALGAS_overridingExtensionMethodAST temp_3 = this ;
      GALGAS_extensionMethodMapForType temp_4 = GALGAS_extensionMethodMapForType::init (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 166)) ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), temp_4, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 164)) ;
      }
    }
  }
  const GALGAS_overridingExtensionMethodAST temp_5 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_7536 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_5.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 169)) ;
  if (nullptr != objectArray_7536) {
    macroValidSharedObject (objectArray_7536, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_overridingExtensionMethodAST temp_6 = this ;
    const GALGAS_overridingExtensionMethodAST temp_7 = this ;
    objectArray_7536->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_6.readProperty_mOverridingExtensionMethodName (), temp_7.readProperty_mOverridingExtensionMethodFormalParameterList (), GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-method.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 170)) ;
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
  GALGAS_lstring var_nameForUsefulness_9257 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 204)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9257, var_nameForUsefulness_9257, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 205)) ;
  }
  const GALGAS_overridingExtensionMethodAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_9445 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 206)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_9445, var_nameForUsefulness_9257 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 207)) ;
  }
  const GALGAS_overridingExtensionMethodAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_9638 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 209)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_9638, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 211)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-method.galgas", 211)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 211)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionMethodAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_9638, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 212)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 212)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 212)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 212)) ;
    }
  }
  GALGAS_string var_baseTypeName_9981 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_10026 = extensionGetter_definition (var_selfType_9638, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 216)).readProperty_superType () ;
  GALGAS_formalParameterSignature temp_7 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 217)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_10076 = temp_7 ;
  GALGAS_location var_inheritedDeclarationLocation_10143 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 218)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 219)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 219)).isValid ()) {
    uint32_t variant_10191 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 219)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 219)).uintValue () ;
    bool loop_10191 = true ;
    while (loop_10191) {
      loop_10191 = var_superType_10026.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 220)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 220)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_9981.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 220)).isValid () ;
      if (loop_10191) {
        loop_10191 = var_superType_10026.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 220)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 220)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_9981.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 220)).boolValue () ;
      }
      if (loop_10191 && (0 == variant_10191)) {
        loop_10191 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-method.galgas", 219)) ;
      }
      if (loop_10191) {
        variant_10191 -- ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          const GALGAS_overridingExtensionMethodAST temp_9 = this ;
          test_8 = extensionGetter_definition (var_superType_10026, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 221)).readProperty_instanceMethodMap ().getter_hasKey (temp_9.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 221)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_methodQualifier var_qualifier_10589 ;
            const GALGAS_overridingExtensionMethodAST temp_10 = this ;
            GALGAS_methodKind joker_10496 ; // Joker input parameter
            GALGAS_bool joker_10573 ; // Joker input parameter
            GALGAS_string joker_10607 ; // Joker input parameter
            extensionGetter_definition (var_superType_10026, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 222)).readProperty_instanceMethodMap ().method_searchKey (temp_10.readProperty_mOverridingExtensionMethodName (), joker_10496, var_inheritedSignature_10076, var_inheritedDeclarationLocation_10143, joker_10573, var_qualifier_10589, joker_10607, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 222)) ;
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_10589.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-method.galgas", 231)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_baseTypeName_9981 = extensionGetter_definition (var_superType_10026, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 232)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_10026 = extensionGetter_definition (var_superType_10026, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 235)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_9981.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_overridingExtensionMethodAST temp_13 = this ;
      TC_Array <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("this method is not declared by a super class"), fixItArray14  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 238)) ;
    }
  }
  const GALGAS_overridingExtensionMethodAST temp_15 = this ;
  GALGAS_analysisContext var_analysisContext_10975 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("this"), GALGAS_selfAvailability::class_func_available (var_selfType_9638, GALGAS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-method.galgas", 245))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 245)), GALGAS_string ("this->"), temp_15.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GALGAS_bool var_isRefClass_11331 = GALGAS_bool (false) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    GALGAS_bool var_reference_11419 ;
    const bool optionalResult11391 = extensionGetter_definition (var_selfType_9638, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 250)).readProperty_typeKind ().optional_classType (var_reference_11419) ;
    if (!optionalResult11391) {
      test_16 = kBoolFalse ;
    }
    if (kBoolTrue == test_16) {
      var_isRefClass_11331 = var_reference_11419 ;
    }
  }
  GALGAS_typedPropertyList temp_17 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 253)) ;
  GALGAS_typedPropertyList var_mutableProperties_11474 = temp_17 ;
  GALGAS_typedPropertyList temp_18 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 254)) ;
  GALGAS_typedPropertyList var_nonMutableProperties_11523 = temp_18 ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_9638, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 255)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-overriding-method.galgas", 255)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      var_nonMutableProperties_11523 = extensionGetter_definition (var_selfType_9638, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 256)).readProperty_allTypedPropertyList () ;
    }
  }
  if (kBoolFalse == test_19) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      GALGAS_bool var_isReference_11767 ;
      const bool optionalResult11739 = extensionGetter_definition (var_selfType_9638, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 257)).readProperty_typeKind ().optional_classType (var_isReference_11767) ;
      if (!optionalResult11739) {
        test_20 = kBoolFalse ;
      }
      if (kBoolTrue == test_20) {
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          test_21 = var_isReference_11767.boolEnum () ;
          if (kBoolTrue == test_21) {
            var_mutableProperties_11474 = extensionGetter_definition (var_selfType_9638, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 259)).readProperty_allTypedPropertyList () ;
          }
        }
        if (kBoolFalse == test_21) {
          var_nonMutableProperties_11523 = extensionGetter_definition (var_selfType_9638, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 261)).readProperty_allTypedPropertyList () ;
        }
      }
    }
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_12326 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_12372 ;
  {
  const GALGAS_overridingExtensionMethodAST temp_22 = this ;
  const GALGAS_overridingExtensionMethodAST temp_23 = this ;
  const GALGAS_overridingExtensionMethodAST temp_24 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_9257, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_10975, ioArgument_ioTypeMap, temp_22.readProperty_mOverridingExtensionMethodFormalParameterList (), var_nonMutableProperties_11523, var_mutableProperties_11474, temp_23.readProperty_mOverridingExtensionMethodInstructionList (), temp_24.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_12326, var_formalParameterListForGeneration_12372, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 264)) ;
  }
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_9981.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_25) {
      {
      const GALGAS_overridingExtensionMethodAST temp_26 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_12372, temp_26.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_10076, var_inheritedDeclarationLocation_10143, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 279)) ;
      }
    }
  }
  const GALGAS_overridingExtensionMethodAST temp_27 = this ;
  const GALGAS_overridingExtensionMethodAST temp_28 = this ;
  const GALGAS_overridingExtensionMethodAST temp_29 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension method ").add_operation (temp_27.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 288)), GALGAS_overridingExtensionMethodForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_9638, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 291)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 291)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 291)).add_operation (temp_28.readProperty_mOverridingExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 291)), var_selfType_9638, var_baseTypeName_9981, temp_29.readProperty_mOverridingExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_12372, extensionGetter_definition (var_selfType_9638, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 296)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_12326, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 287)) ;
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
  ioArgument_ioOverridingExtensionMethodListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 318)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_overridingExtensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-method.galgas", 339)) ;
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
  GALGAS_string var_methodImplementation_16230 ;
  {
  const GALGAS_overridingExtensionMethodForGeneration temp_0 = this ;
  const GALGAS_overridingExtensionMethodForGeneration temp_1 = this ;
  const GALGAS_overridingExtensionMethodForGeneration temp_2 = this ;
  const GALGAS_overridingExtensionMethodForGeneration temp_3 = this ;
  routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_0.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_1.readProperty_mExtensionMethodName (), temp_2.readProperty_mExtensionMethodFormalParameterList (), temp_3.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_16230, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 348)) ;
  }
  const GALGAS_overridingExtensionMethodForGeneration temp_4 = this ;
  const GALGAS_overridingExtensionMethodForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (inCompiler, extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 357)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_mExtensionMethodName (), var_methodImplementation_16230 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 356))) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 99)) ;
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
  result_result = GALGAS_string ("overriding extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 107)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 107)).add_operation (temp_1.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 107)) ;
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
  GALGAS_lstring var_nameForUsefulness_6740 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 137)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6740, var_nameForUsefulness_6740, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 138)) ;
  }
  const GALGAS_overridingExtensionSetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_6928 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 139)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_6928, var_nameForUsefulness_6740 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 140)) ;
  }
  const GALGAS_overridingExtensionSetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_7121 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 142)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_7121, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 144)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-setter.galgas", 144)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 144)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionSetterAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7121, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 145)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 145)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 145)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 145)) ;
    }
  }
  GALGAS_string var_baseTypeName_7464 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_7509 = extensionGetter_definition (var_selfType_7121, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 149)).readProperty_superType () ;
  GALGAS_formalParameterSignature temp_7 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 150)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_7559 = temp_7 ;
  GALGAS_location var_inheritedDeclarationLocation_7626 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 151)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 152)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 152)).isValid ()) {
    uint32_t variant_7674 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 152)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 152)).uintValue () ;
    bool loop_7674 = true ;
    while (loop_7674) {
      loop_7674 = var_superType_7509.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 153)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 153)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_7464.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 153)).isValid () ;
      if (loop_7674) {
        loop_7674 = var_superType_7509.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 153)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 153)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_7464.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 153)).boolValue () ;
      }
      if (loop_7674 && (0 == variant_7674)) {
        loop_7674 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 152)) ;
      }
      if (loop_7674) {
        variant_7674 -- ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          const GALGAS_overridingExtensionSetterAST temp_9 = this ;
          test_8 = extensionGetter_definition (var_superType_7509, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 154)).readProperty_setterMap ().getter_hasKey (temp_9.readProperty_mOverridingExtensionSetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 154)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_methodQualifier var_qualifier_7978 ;
            const GALGAS_overridingExtensionSetterAST temp_10 = this ;
            GALGAS_methodKind joker_7947 ; // Joker input parameter
            GALGAS_bool joker_7970 ; // Joker input parameter
            GALGAS_string joker_7988 ; // Joker input parameter
            extensionGetter_definition (var_superType_7509, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 155)).readProperty_setterMap ().method_searchKey (temp_10.readProperty_mOverridingExtensionSetterName (), joker_7947, var_inheritedSignature_7559, joker_7970, var_qualifier_7978, joker_7988, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 155)) ;
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_7978.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-setter.galgas", 156)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_baseTypeName_7464 = extensionGetter_definition (var_superType_7509, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 157)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_7509 = extensionGetter_definition (var_superType_7509, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 160)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_7464.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_overridingExtensionSetterAST temp_13 = this ;
      TC_Array <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("this setter is not declared by a super class"), fixItArray14  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 163)) ;
    }
  }
  const GALGAS_overridingExtensionSetterAST temp_15 = this ;
  GALGAS_analysisContext var_analysisContext_8348 = GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("object"), GALGAS_selfAvailability::class_func_available (var_selfType_7121, GALGAS_selfMutability::class_func_selfAndPropertiesAreMutable (SOURCE_FILE ("extension-overriding-setter.galgas", 170))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 170)), GALGAS_string ("object->"), temp_15.readProperty_requiresSelfForAccessingProperty (), inCompiler COMMA_HERE) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9091 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_9137 ;
  {
  const GALGAS_overridingExtensionSetterAST temp_16 = this ;
  GALGAS_typedPropertyList temp_17 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 180)) ;
  const GALGAS_overridingExtensionSetterAST temp_18 = this ;
  const GALGAS_overridingExtensionSetterAST temp_19 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_6740, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8348, ioArgument_ioTypeMap, temp_16.readProperty_mOverridingExtensionSetterFormalParameterList (), temp_17, extensionGetter_definition (var_selfType_7121, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 181)).readProperty_allTypedPropertyList (), temp_18.readProperty_mOverridingExtensionSetterInstructionList (), temp_19.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_9091, var_formalParameterListForGeneration_9137, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 174)) ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_7464.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_20) {
      {
      const GALGAS_overridingExtensionSetterAST temp_21 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_9137, temp_21.readProperty_mOverridingExtensionSetterName ().readProperty_location (), var_inheritedSignature_7559, var_inheritedDeclarationLocation_7626, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 189)) ;
      }
    }
  }
  const GALGAS_overridingExtensionSetterAST temp_22 = this ;
  const GALGAS_overridingExtensionSetterAST temp_23 = this ;
  const GALGAS_overridingExtensionSetterAST temp_24 = this ;
  const GALGAS_overridingExtensionSetterAST temp_25 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" overriding extension setter ").add_operation (temp_22.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 198)), GALGAS_overridingExtensionSetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GALGAS_bool (false), GALGAS_string ("setter-").add_operation (temp_23.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 201)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 201)).add_operation (temp_24.readProperty_mOverridingExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 201)), var_selfType_7121, var_baseTypeName_7464, temp_25.readProperty_mOverridingExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_9137, extensionGetter_definition (var_selfType_7121, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 206)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_9091, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 197)) ;
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
  ioArgument_ioOverridingExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 229)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_overridingExtensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-setter.galgas", 250)) ;
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
  GALGAS_string var_methodImplementation_12851 ;
  {
  const GALGAS_overridingExtensionSetterForGeneration temp_0 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_1 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_2 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_3 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_4 = this ;
  routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 260)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mBaseTypeName (), temp_2.readProperty_mExtensionSetterName (), ioArgument_ioInclusionSet, temp_3.readProperty_mExtensionSetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_12851, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 259)) ;
  }
  const GALGAS_overridingExtensionSetterForGeneration temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_baseType_12903 = temp_5.readProperty_mReceiverType () ;
  GALGAS_bool var_searching_12945 = GALGAS_bool (true) ;
  if (GALGAS_uint::class_func_max (SOURCE_FILE ("extension-overriding-setter.galgas", 270)).isValid ()) {
    uint32_t variant_12964 = GALGAS_uint::class_func_max (SOURCE_FILE ("extension-overriding-setter.galgas", 270)).uintValue () ;
    bool loop_12964 = true ;
    while (loop_12964) {
      loop_12964 = var_searching_12945.isValid () ;
      if (loop_12964) {
        loop_12964 = var_searching_12945.boolValue () ;
      }
      if (loop_12964 && (0 == variant_12964)) {
        loop_12964 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 270)) ;
      }
      if (loop_12964) {
        variant_12964 -- ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = extensionGetter_definition (var_baseType_12903, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 271)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 271)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 271)).boolEnum () ;
          if (kBoolTrue == test_6) {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              const GALGAS_overridingExtensionSetterForGeneration temp_8 = this ;
              test_7 = extensionGetter_definition (extensionGetter_definition (var_baseType_12903, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 272)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 272)).readProperty_setterMap ().getter_hasKey (temp_8.readProperty_mExtensionSetterName () COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 272)).boolEnum () ;
              if (kBoolTrue == test_7) {
                var_baseType_12903 = extensionGetter_definition (var_baseType_12903, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 273)).readProperty_superType () ;
              }
            }
            if (kBoolFalse == test_7) {
              var_searching_12945 = GALGAS_bool (false) ;
            }
          }
        }
        if (kBoolFalse == test_6) {
          var_searching_12945 = GALGAS_bool (false) ;
        }
      }
    }
  }
  const GALGAS_overridingExtensionSetterForGeneration temp_9 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (var_baseType_12903, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 281)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 281)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 281)).add_operation (temp_9.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 281))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 281)) ;
  const GALGAS_overridingExtensionSetterForGeneration temp_10 = this ;
  extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 282)) ;
  const GALGAS_overridingExtensionSetterForGeneration temp_11 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_12 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (inCompiler, extensionGetter_definition (temp_11.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 284)).readProperty_typeName ().readProperty_string (), temp_12.readProperty_mExtensionSetterName (), var_methodImplementation_12851 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 283))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                             GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                             GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                             GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_predefinedTypeAST temp_0 = this ;
  GALGAS_lstring var_key_3179 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 67)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 67)), inCompiler COMMA_HERE) ;
  {
  const GALGAS_predefinedTypeAST temp_1 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3179, temp_1, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 68)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodMap var_optionalMethodMap_3951 ;
  const GALGAS_predefinedTypeAST temp_0 = this ;
  callExtensionMethod_getOptionalMethodMap ((cPtr_predefinedTypeAST *) temp_0.ptr (), ioArgument_ioTypeMap, var_optionalMethodMap_3951, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 80)) ;
  GALGAS_classFunctionMap var_constructorMap_4035 ;
  const GALGAS_predefinedTypeAST temp_1 = this ;
  callExtensionMethod_getClassFunctionMap ((cPtr_predefinedTypeAST *) temp_1.ptr (), ioArgument_ioTypeMap, var_constructorMap_4035, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 81)) ;
  GALGAS_getterMap var_getterMap_4102 ;
  const GALGAS_predefinedTypeAST temp_2 = this ;
  callExtensionMethod_getGetterMap ((cPtr_predefinedTypeAST *) temp_2.ptr (), ioArgument_ioTypeMap, var_getterMap_4102, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 82)) ;
  GALGAS_setterMap var_setterMap_4164 ;
  const GALGAS_predefinedTypeAST temp_3 = this ;
  callExtensionMethod_getSetterMap ((cPtr_predefinedTypeAST *) temp_3.ptr (), ioArgument_ioTypeMap, var_setterMap_4164, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 83)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4242 ;
  const GALGAS_predefinedTypeAST temp_4 = this ;
  callExtensionMethod_getInstanceMethodMap ((cPtr_predefinedTypeAST *) temp_4.ptr (), ioArgument_ioTypeMap, var_instanceMethodMap_4242, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 84)) ;
  GALGAS_classMethodMap var_classMethodMap_4322 ;
  const GALGAS_predefinedTypeAST temp_5 = this ;
  callExtensionMethod_getClassMethodMap ((cPtr_predefinedTypeAST *) temp_5.ptr (), ioArgument_ioTypeMap, var_classMethodMap_4322, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 85)) ;
  GALGAS_functionSignature var_addAssignArgumentList_4409 ;
  const GALGAS_predefinedTypeAST temp_6 = this ;
  callExtensionMethod_getAddAssignArgumentList ((cPtr_predefinedTypeAST *) temp_6.ptr (), ioArgument_ioTypeMap, var_addAssignArgumentList_4409, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 86)) ;
  GALGAS_enumerationDescriptorList var_enumerationList_4517 ;
  GALGAS_string var_enumeratedTypeName_4552 ;
  const GALGAS_predefinedTypeAST temp_7 = this ;
  callExtensionMethod_getEnumerationList ((cPtr_predefinedTypeAST *) temp_7.ptr (), ioArgument_ioTypeMap, var_enumerationList_4517, var_enumeratedTypeName_4552, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 87)) ;
  {
  const GALGAS_predefinedTypeAST temp_8 = this ;
  GALGAS_unifiedTypeMapEntry joker_4640 ; // Joker input parameter
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_8.readProperty_mPredefinedTypeName (), joker_4640, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 92)) ;
  }
  GALGAS_unifiedTypeMapEntry var_enumeratedTypeEntry_4692 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (ComparisonKind::equal, var_enumeratedTypeName_4552.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_enumeratedTypeEntry_4692 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("predefinedTypeAST.galgas", 96)) ;
    }
  }
  if (kBoolFalse == test_9) {
    {
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, var_enumeratedTypeName_4552, var_enumeratedTypeEntry_4692, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 98)) ;
    }
  }
  GALGAS_initializerMap temp_10 = GALGAS_initializerMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 101)) ;
  GALGAS_initializerMap var_initializerMap_4947 = temp_10 ;
  const GALGAS_predefinedTypeAST temp_11 = this ;
  cEnumerator_initializerSignatureList enumerator_4977 (callExtensionGetter_initializers ((const cPtr_predefinedTypeAST *) temp_11.ptr (), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 102)), EnumerationOrder::up) ;
  while (enumerator_4977.hasCurrentObject ()) {
    GALGAS_functionSignature temp_12 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 103)) ;
    GALGAS_functionSignature var_formalParameterList_5045 = temp_12 ;
    cEnumerator_formalInputParameterListAST enumerator_5144 (enumerator_4977.current_initializer (HERE), EnumerationOrder::up) ;
    while (enumerator_5144.hasCurrentObject ()) {
      var_formalParameterList_5045.addAssign_operation (enumerator_5144.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_5144.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 107)), enumerator_5144.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_5144.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 105)) ;
      enumerator_5144.gotoNextObject () ;
    }
    {
    var_initializerMap_4947.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (enumerator_4977.current_initializer (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 111)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("predefinedTypeAST.galgas", 111)), inCompiler COMMA_HERE), var_formalParameterList_5045, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 111)) ;
    }
    enumerator_4977.gotoNextObject () ;
  }
  {
  const GALGAS_predefinedTypeAST temp_13 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_13.readProperty_mPredefinedTypeName (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 120)), inCompiler COMMA_HERE), GALGAS_bool (false), var_initializerMap_4947, var_getterMap_4102, var_setterMap_4164, var_instanceMethodMap_4242, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 113)) ;
  }
  const GALGAS_predefinedTypeAST temp_14 = this ;
  const GALGAS_predefinedTypeAST temp_15 = this ;
  const GALGAS_predefinedTypeAST temp_16 = this ;
  const GALGAS_predefinedTypeAST temp_17 = this ;
  GALGAS_typedPropertyList temp_18 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 136)) ;
  GALGAS_propertyMap temp_19 = GALGAS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 137)) ;
  GALGAS_typedPropertyList temp_20 = GALGAS_typedPropertyList::init (inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 138)) ;
  const GALGAS_predefinedTypeAST temp_21 = this ;
  GALGAS_mapSearchMethodListAST temp_22 = GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 149)) ;
  GALGAS_mapSearchMethodListAST temp_23 = GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 150)) ;
  const GALGAS_predefinedTypeAST temp_24 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_5964 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_optionalMethodMap_21_enumerationDescriptorList_21__21__21__21__21_generateHeaderInSeparateFile_21__21_defaultConstructorName_21__21_headerKind (GALGAS_lstring::init_21__21_ (temp_14.readProperty_mPredefinedTypeName (), GALGAS_location::class_func_nowhere (SOURCE_FILE ("predefinedTypeAST.galgas", 130)), inCompiler COMMA_HERE), temp_15.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("predefinedTypeAST.galgas", 133)), callExtensionGetter_typeKind ((const cPtr_predefinedTypeAST *) temp_16.ptr (), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 134)), callExtensionGetter_supportsCollectionValue ((const cPtr_predefinedTypeAST *) temp_17.ptr (), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 135)), temp_18, temp_19, temp_20, var_initializerMap_4947, var_constructorMap_4035, var_getterMap_4102, var_setterMap_4164, var_instanceMethodMap_4242, var_classMethodMap_4322, var_optionalMethodMap_3951, var_enumerationList_4517, callExtensionGetter_getSupportedOperatorFlags ((const cPtr_predefinedTypeAST *) temp_21.ptr (), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 147)), var_addAssignArgumentList_4409, temp_22, temp_23, GALGAS_bool (false), var_enumeratedTypeEntry_4692, callExtensionGetter_defaultConstructorName ((const cPtr_predefinedTypeAST *) temp_24.ptr (), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 153)), GALGAS_string ("predefined-types"), GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("predefinedTypeAST.galgas", 155)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_5964.readProperty_typeName (), var_typeDefinition_5964, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 157)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                      const GALGAS_string /* constinArgument_inProductDirectory */,
                                                      const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                      GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_predefinedTypeAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_7844 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (temp_0.readProperty_mPredefinedTypeName (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 170)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 170)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7844, var_nameForUsefulness_7844, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 171)) ;
  }
  const GALGAS_predefinedTypeAST temp_1 = this ;
  const GALGAS_predefinedTypeAST temp_2 = this ;
  const GALGAS_predefinedTypeAST temp_3 = this ;
  const GALGAS_predefinedTypeAST temp_4 = this ;
  const GALGAS_predefinedTypeAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("Predefined type ").add_operation (temp_1.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 174)), GALGAS_primitiveTypeForGeneration::init_21__21__21__21_isPackage (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_2.readProperty_mPredefinedTypeName (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 176)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 176)), temp_3.readProperty_mPredefinedTypeName (), callExtensionGetter_cppDeclarationString ((const cPtr_predefinedTypeAST *) temp_4.ptr (), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 178)), GALGAS_bool (ComparisonKind::equal, callExtensionGetter_typeKind ((const cPtr_predefinedTypeAST *) temp_5.ptr (), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 179)).objectCompare (GALGAS_typeKindEnum::class_func_packageType (SOURCE_FILE ("predefinedTypeAST.galgas", 179)))), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 173)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedListTypeAST&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedListTypeAST_26__3F__26_ (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                      const GALGAS_string constinArgument_inElementTypeName,
                                                      GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST temp_0 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 262)) ;
  GALGAS_propertyInCollectionListAST var_attributeList_11575 = temp_0 ;
  var_attributeList_11575.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::init_21__21_ (constinArgument_inElementTypeName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 265)), inCompiler COMMA_HERE), GALGAS_lstring::init_21__21_ (GALGAS_string ("mValue"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 266)), inCompiler COMMA_HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("predefinedTypeAST.galgas", 267)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("predefinedTypeAST.galgas", 269))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 263)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::init_21_isPredefined_21__21__21_usefullList (GALGAS_bool (true), GALGAS_lstring::init_21__21_ (constinArgument_inElementTypeName.add_operation (GALGAS_string ("list"), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 272)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 272)), inCompiler COMMA_HERE), var_attributeList_11575, GALGAS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 270)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, constinArgument_inElementTypeName.add_operation (GALGAS_string ("list"), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 276)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefined2StringListTypeAST&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefined_32_StringListTypeAST_26__26_ (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                            GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST temp_0 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 283)) ;
  GALGAS_propertyInCollectionListAST var_attributeList_12381 = temp_0 ;
  var_attributeList_12381.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::init_21__21_ (GALGAS_string ("string"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 286)), inCompiler COMMA_HERE), GALGAS_lstring::init_21__21_ (GALGAS_string ("mValue0"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 287)), inCompiler COMMA_HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("predefinedTypeAST.galgas", 288)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("predefinedTypeAST.galgas", 290))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 284)) ;
  var_attributeList_12381.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::init_21__21_ (GALGAS_string ("string"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 293)), inCompiler COMMA_HERE), GALGAS_lstring::init_21__21_ (GALGAS_string ("mValue1"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 294)), inCompiler COMMA_HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("predefinedTypeAST.galgas", 295)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("predefinedTypeAST.galgas", 297))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 291)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::init_21_isPredefined_21__21__21_usefullList (GALGAS_bool (true), GALGAS_lstring::init_21__21_ (GALGAS_string ("2stringlist"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 301)), inCompiler COMMA_HERE), var_attributeList_12381, GALGAS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 299)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("2stringlist"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 305)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForTypeWithLocation&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForTypeWithLocation_26__3F__26_ (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                             const GALGAS_string constinArgument_inElementTypeName,
                                                             GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST temp_0 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 313)) ;
  GALGAS_propertyInCollectionListAST var_attributeList_13459 = temp_0 ;
  var_attributeList_13459.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::init_21__21_ (constinArgument_inElementTypeName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 316)), inCompiler COMMA_HERE), GALGAS_lstring::init_21__21_ (constinArgument_inElementTypeName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 317)), inCompiler COMMA_HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("predefinedTypeAST.galgas", 318)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("predefinedTypeAST.galgas", 320))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 314)) ;
  var_attributeList_13459.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::init_21__21_ (GALGAS_string ("location"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 323)), inCompiler COMMA_HERE), GALGAS_lstring::init_21__21_ (GALGAS_string ("location"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 324)), inCompiler COMMA_HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("predefinedTypeAST.galgas", 325)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("predefinedTypeAST.galgas", 327))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 321)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (true), GALGAS_lstring::init_21__21_ (GALGAS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 330)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 330)), inCompiler COMMA_HERE), var_attributeList_13459, GALGAS_string::makeEmptyString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 328)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 334)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForRangeType&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForRangeType_26__26_ (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                  GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST temp_0 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 341)) ;
  GALGAS_propertyInCollectionListAST var_attributeList_14497 = temp_0 ;
  var_attributeList_14497.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::init_21__21_ (GALGAS_string ("uint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 344)), inCompiler COMMA_HERE), GALGAS_lstring::init_21__21_ (GALGAS_string ("start"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 345)), inCompiler COMMA_HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("predefinedTypeAST.galgas", 346)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("predefinedTypeAST.galgas", 348))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 342)) ;
  var_attributeList_14497.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::init_21__21_ (GALGAS_string ("uint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 351)), inCompiler COMMA_HERE), GALGAS_lstring::init_21__21_ (GALGAS_string ("length"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 352)), inCompiler COMMA_HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("predefinedTypeAST.galgas", 353)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("predefinedTypeAST.galgas", 355))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 349)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_ (GALGAS_bool (true), GALGAS_lstring::init_21__21_ (GALGAS_string ("range"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 358)), inCompiler COMMA_HERE), var_attributeList_14497, GALGAS_string ("uint"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 356)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("range"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 362)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'insertInUsefulnessEntities&?'
//
//--------------------------------------------------------------------------------------------------

void routine_insertInUsefulnessEntities_26__3F_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                 const GALGAS_string constinArgument_inTypeName,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_typeUsefulnessName_15353 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (constinArgument_inTypeName, GALGAS_location::class_func_nowhere (SOURCE_FILE ("predefinedTypeAST.galgas", 368)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 368)) ;
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_typeUsefulnessName_15353  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 369)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedTypesASTs&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedTypesASTs_26__26_ (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_applicationPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("application"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 376)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("application"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 377)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_bigintPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("bigint"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 378)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("bigint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 379)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_binarysetPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("binaryset"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 380)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("binaryset"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 381)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_boolPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("bool"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 382)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("bool"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 383)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_charPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("char"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 384)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("char"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 385)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_dataPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("data"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 386)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("data"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 387)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_doublePredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("double"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 388)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("double"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 389)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_filewrapperPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("filewrapper"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 390)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("filewrapper"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 391)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_functionPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("function"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 392)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("function"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 393)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_locationPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("location"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 394)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("location"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 395)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_objectPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("object"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 396)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("object"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 397)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_sintPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("sint"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 398)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("sint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 399)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_sint_36__34_PredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("sint64"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 400)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("sint64"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 401)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_stringPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("string"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 402)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("string"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 403)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_stringsetPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("stringset"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 404)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("stringset"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 405)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_timerPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("timer"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 406)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("timer"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 407)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_typePredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("type"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 408)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("type"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 409)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_uintPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("uint"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 410)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("uint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 411)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_uint_36__34_PredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("uint64"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 412)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("uint64"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 413)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("function"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 415)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("luint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 416)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("lstring"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 417)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("object"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 418)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 419)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("type"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 420)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 421)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 422)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 423)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("lbigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 424)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("bool"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 426)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 427)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("char"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 428)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("double"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 429)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("sint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 430)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("sint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 431)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 432)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 433)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 434)) ;
  }
  {
  routine_appendPredefined_32_StringListTypeAST_26__26_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 436)) ;
  }
  {
  routine_appendStructASTForRangeType_26__26_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 438)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedTypeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_predefinedTypeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_predefinedTypeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_predefinedTypeGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypesImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n#include \"cCollectionElement.h\"\n#include \"cSortedListElement.h\"\n#include \"capSortedListElement.h\"\n#include \"Compiler.h\"\n\n//--------------------------------------------------------------------------------------------------\n\ncMapElement::cMapElement (const GALGAS_lstring & inLKey\n                          COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmProperty_lkey (inLKey) {\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate primitiveTypesHeaderPrologue'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"AC_GALGAS_root.h\"\n#include \"C_galgas_type_descriptor.h\"\n#include \"ComparisonResult.h\"\n#include \"ComparisonKind.h\"\n#include \"EnumerationOrder.h\"\n#include \"cGenericAbstractEnumerator.h\"\n#include \"cEnumerator_range.h\"\n#include \"String-class.h\"\n#include \"Timer.h\"\n#include \"AC_GALGAS_list.h\"\n#include \"AC_GALGAS_sortedlist.h\"\n#include \"AC_GALGAS_map.h\"\n#include \"AC_GALGAS_reference_class.h\"\n#include \"AC_GALGAS_value_class.h\"\n#include \"AC_GALGAS_enumAssociatedValues.h\"\n#include \"AC_GALGAS_graph.h\"\n#include \"acStrongPtr_class.h\"\n#include \"cPtr_weakReference_proxy.h\"\n#include \"AC_GALGAS_weak_reference.h\"\n#include \"BoolCommandLineOption.h\"\n#include \"UIntCommandLineOption.h\"\n#include \"StringCommandLineOption.h\"\n#include \"StringListCommandLineOption.h\"\n#include \"PrologueEpilogue.h\"\n#include \"BigSigned.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass Compiler ;\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypeSeparation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n#include \"cCollectionElement.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass cMapElement : public cCollectionElement {\n//--- Attribut\n  public: GALGAS_lstring mProperty_lkey ;\n\n//--- Default constructor\n  public: cMapElement (const GALGAS_lstring & inLKey\n                        COMMA_LOCATION_ARGS) ;\n\n//--- No copy\n  private: cMapElement (const cMapElement &) ;\n  private: cMapElement & operator = (const cMapElement &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"cSortedListElement.h\"\n#include \"capSortedListElement.h\"\n#include \"C_galgas_function_descriptor.h\"\n#include \"cObjectArray.h\"\n\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @sint type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_sint : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int32_t mSIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int32_t intValue (void) const { return mSIntValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_sint (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_sint (const int32_t inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint64_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @sint64 type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_sint_36__34_ : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int64_t mSInt64Value ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int64_t int64Value (void) const { return mSInt64Value ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_sint_36__34_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_sint_36__34_ (const int64_t inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate object_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @object type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_object ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_object : public AC_GALGAS_root {\n//--------------------------------- Private data member\n  private: cPtr_object * mSharedObject ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedObject != nullptr ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_object (void) ;\n\n//--------------------------------- Constructor from pointer\n  public: GALGAS_object (AC_GALGAS_root * inObjectPointer\n                          COMMA_LOCATION_ARGS) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_object (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_object (const GALGAS_object & inSource) ;\n  public: GALGAS_object & operator = (const GALGAS_object & inSource) ;\n\n//--------------------------------- Embedded Object\n  public: const AC_GALGAS_root * embeddedObject (void) const ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @uint type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_uint : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint32_t mUIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint32_t uintValue (void) const { return mUIntValue ; }\n  public: inline void increment (void) { mUIntValue ++ ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_uint (void) ;\n\n//--------------------------------- Native constructors\n  public: GALGAS_uint (const uint32_t inValue) ;\n  public: GALGAS_uint (const bool inValid, const uint32_t inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint64_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//  @uint64 type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_uint_36__34_ : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint64_t mUInt64Value ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint64_t uint64Value (void) const { return mUInt64Value ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_uint_36__34_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_uint_36__34_ (const uint64_t inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bool_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("@bool type").stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef enum {kBoolNotValid, kBoolFalse, kBoolTrue} enumGalgasBool ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_bool : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: bool mBoolValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: inline bool isValidAndTrue (void) const { return mIsValid && mBoolValue ; }\n  public: inline bool boolValue (void) const { return mBoolValue ; }\n  public: enumGalgasBool boolEnum (void) const ;\n\n//--------------------------------- Drop\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_bool (void) ;\n\n//--------------------------------- Native constructors\n  public: GALGAS_bool (const bool inValue) ; // Is built\n  public: GALGAS_bool (const bool inBuilt, const bool inValue) ;\n\n//--------------------------------- Constructor for comparison result\n  public: GALGAS_bool (const ComparisonKind inComparisonKind,\n                       const ComparisonResult inComparisonResult) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate binaryset_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n// @binaryset type\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"BinaryDecisionDiagram.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_binaryset : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: BinaryDecisionDiagram mBDD ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline BinaryDecisionDiagram bddValue (void) const { return mBDD ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_binaryset (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_binaryset (const BinaryDecisionDiagram & inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate function_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @function type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass C_galgas_function_descriptor ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_function : public AC_GALGAS_root {\n//--------------------------------- Private data member\n  private: const C_galgas_function_descriptor * mFunctionDescriptor ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return nullptr != mFunctionDescriptor ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mFunctionDescriptor = nullptr ; }\n  public: VIRTUAL_IN_DEBUG inline const C_galgas_function_descriptor * functionValue (void) const { return mFunctionDescriptor ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_function (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_function (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_function (const GALGAS_function & inSource) ;\n  public: GALGAS_function & operator = (const GALGAS_function & inSource) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_function (const C_galgas_function_descriptor * inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate type_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @type type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_type : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: const C_galgas_type_descriptor * mTypeDescriptor ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return nullptr != mTypeDescriptor ; }\n  public: inline void drop (void) override { mTypeDescriptor = nullptr ; }\n  public: inline const C_galgas_type_descriptor * typeValue (void) const { return mTypeDescriptor ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_type (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_type (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_type (const GALGAS_type & inSource) ;\n  public: GALGAS_type & operator = (const GALGAS_type & inSource) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_type (const C_galgas_type_descriptor * inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate location_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @location type\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"LocationInSource.h\"\n#include \"SourceTextInString.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_location : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: class InternalLocation * mInternalLocation ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG bool isValidAndNotNowhere (void) const ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: LocationInSource startLocation (void) const ;\n  public: LocationInSource endLocation (void) const ;\n  public: SourceTextInString sourceText (void) const ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_location (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_location (const GALGAS_location & inSource) ;\n  public: GALGAS_location & operator = (const GALGAS_location & inSource) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GALGAS_location (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_location (const LocationInSource & inStartLocationInSource,\n                           const LocationInSource & inEndLocationInSource,\n                           const SourceTextInString & inSourceText) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate data_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @data type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_data : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: U8Data mData ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline U8Data dataValue (void) const { return mData ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_data (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_data (const U8Data & inData) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate char_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @char type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_char : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: utf32 mCharValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline utf32 charValue (void) const { return mCharValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_char (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_char (const utf32 inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate double_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//  @double type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_double : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: double mDoubleValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline double doubleValue (void) const { return mDoubleValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_double (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_double (const double inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate string_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @string type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_string : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: String mString ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: inline String stringValue (void) const { return mString ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_string (void) ;\n\n//--------------------------------- Constructor for making an empty string\n  public: static GALGAS_string makeEmptyString (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_string (const String & inValue) ;\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: virtual void printNonNullClassInstanceProperties (const char * inPropertyName) const override ;\n  #endif\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate stringset_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @stringset type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_stringset : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: class cSharedStringsetRoot * mSharedRoot ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedRoot != nullptr ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_stringset (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_stringset (void) ;\n\n//--------------------------------- In debug mode : check method\n  protected: void checkStringset (LOCATION_ARGS) const ;\n\n//--------------------------------- Insulate\n  protected: void insulate (LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate filewrapper_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @filewrapper type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cRegularFileWrapper {\n  public: const char * mName ;\n  public: const char * mExtension ;\n  public: const bool mIsTextFile ; // True: text file, false: binary file\n  public: const uint32_t mFileLength ;\n  public: const char * mContents ;\n\n//--- Constructor\n  public: cRegularFileWrapper (const char * inName,\n                                const char * inExtension,\n                                const bool inIsTextFile,\n                                const uint32_t inFileLength,\n                                const char * inContents) ;\n\n//--- No copy\n  private: cRegularFileWrapper (const cRegularFileWrapper &) ;\n  private: cRegularFileWrapper & operator = (const cRegularFileWrapper &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass cDirectoryWrapper {\n  public: const char * mDirectoryName ;\n  public: const uint32_t mFileCount ;\n  public: const cRegularFileWrapper * * const mFiles ;\n  public: const uint32_t mDirectoryCount ;\n  public: const cDirectoryWrapper * * mDirectories ;\n\n//--- Constructor\n  public: cDirectoryWrapper (const char * inDirectoryName,\n                              const uint32_t inFileCount,\n                              const cRegularFileWrapper * * const inFiles,\n                              const uint32_t inDirectoryCount,\n                              const cDirectoryWrapper * * inDirectories) ;\n\n//--- No copy\n  private: cDirectoryWrapper (const cDirectoryWrapper &) ;\n  private: cDirectoryWrapper & operator = (const cDirectoryWrapper &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_filewrapper : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: const cDirectoryWrapper * mRootDirectoryPtr ;\n  private: String mCurrentDirectory ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return nullptr != mRootDirectoryPtr ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mRootDirectoryPtr = nullptr ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_filewrapper (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_filewrapper (const cDirectoryWrapper & inRootDirectory) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_filewrapper (const GALGAS_filewrapper & inSource) ;\n  public: GALGAS_filewrapper & operator = (const GALGAS_filewrapper & inSource) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate application_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("@application package").stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_application final {\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bigint_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @bigint type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_bigint : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: BigSigned mValue ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: inline BigSigned bigintValue (void) const { return mValue ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_bigint (void) ;\n\n//--------------------------------- Constructor\n  public: GALGAS_bigint (const BigSigned & inValue) ;\n  public: GALGAS_bigint (const char * inDecimalString, Compiler * inCompiler COMMA_LOCATION_ARGS) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GALGAS_bigint (void) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate timer_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @timer type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_timer : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: Timer mTimer ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_timer (void) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@applicationPredefinedTypeAST typeKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum cPtr_applicationPredefinedTypeAST::getter_typeKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKindEnum result_result ; // Returned variable
  result_result = GALGAS_typeKindEnum::class_func_packageType (SOURCE_FILE ("predefinedType-application.galgas", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@applicationPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_applicationPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-application.galgas", 36))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@applicationPredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_applicationPredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@applicationPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_applicationPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-application.galgas", 48)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@applicationPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_applicationPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_classFunctionMap & outArgument_outMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classFunctionMap temp_0 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-application.galgas", 55)) ;
  outArgument_outMap = temp_0 ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("system"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 56)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("verboseOutput"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 63)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("projectVersionString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 70)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("galgasVersionString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 77)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandLineArgumentCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 84)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandLineArgumentAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 91)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 101)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 108)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 119)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 130)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionValue"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 141)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 153)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 160)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 171)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 182)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionValue"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 193)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 205)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 212)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 223)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 234)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionValue"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 245)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("keywordIdentifierSet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 257)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("keywordListForIdentifier"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 264)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@applicationPredefinedTypeAST getClassMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_applicationPredefinedTypeAST::method_getClassMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classMethodMap temp_0 = GALGAS_classMethodMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-application.galgas", 279)) ;
  outArgument_outClassMethodMap = temp_0 ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("exit"), GALGAS_string ("uint"), GALGAS_string ("inErrorCode"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 280)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setBoolOptionValue"), GALGAS_string ("string"), GALGAS_string ("inDomain"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("bool"), GALGAS_string ("inValue"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 288)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setUIntOptionValue"), GALGAS_string ("string"), GALGAS_string ("inDomain"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 300)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setStringOptionValue"), GALGAS_string ("string"), GALGAS_string ("inDomain"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("string"), GALGAS_string ("inValue"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-application.galgas", 312)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@bigintPredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_bigintPredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("zero") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@bigintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_bigintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 36))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bigintPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GALGAS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classFunctionMap temp_0 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 44)) ;
  outArgument_outMap = temp_0 ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("zero"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 45)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bigintPredefinedTypeAST getInstanceMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getInstanceMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instanceMethodMap temp_0 = GALGAS_instanceMethodMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 59)) ;
  outArgument_outInstanceMethodMap = temp_0 ;
  GALGAS_unifiedTypeMapEntry var_bigIntType_2564 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), var_bigIntType_2564, inCompiler COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 61)) ;
  }
  GALGAS_formalParameterSignature temp_1 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 62)) ;
  GALGAS_formalParameterSignature var_argList_2610 = temp_1 ;
  var_argList_2610.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-bigint.galgas", 63)), var_bigIntType_2564, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-bigint.galgas", 63)), GALGAS_string ("inDivisor")  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 63)) ;
  var_argList_2610.addAssign_operation (GALGAS_string ("quotient").getter_nowhere (SOURCE_FILE ("predefinedType-bigint.galgas", 64)), var_bigIntType_2564, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("predefinedType-bigint.galgas", 64)), GALGAS_string ("outQuotient")  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 64)) ;
  var_argList_2610.addAssign_operation (GALGAS_string ("remainder").getter_nowhere (SOURCE_FILE ("predefinedType-bigint.galgas", 65)), var_bigIntType_2564, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("predefinedType-bigint.galgas", 65)), GALGAS_string ("outRemainder")  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 65)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("divideBy"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 67)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("predefinedType-bigint.galgas", 68)), var_argList_2610, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 70)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("predefinedType-bigint.galgas", 72)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 66)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bigintPredefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getSetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GALGAS_setterMap & outArgument_outSetterMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_setterMap temp_0 = GALGAS_setterMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 101)) ;
  outArgument_outSetterMap = temp_0 ;
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), GALGAS_string ("inBit"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("setBitAtIndex"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 102)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("complementBitAtIndex"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 112)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bigintPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GALGAS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 127)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInUInt"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 128)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInSInt"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 136)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInUInt64"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 144)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInSInt64"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 152)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 160)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("spacedString"), GALGAS_string ("uint"), GALGAS_string ("inSeparation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 168)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 176)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 184)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 195)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitCountForSignedRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 203)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitCountForUnsignedRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 211)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 219)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 227)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 235)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 243)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("abs"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 251)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 259)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isZero"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 267)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sign"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 275)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract8ForUnsignedRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 283)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract8ForSignedRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 291)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract32ForUnsignedRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 299)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract32ForSignedRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 307)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract64ForUnsignedRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 315)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract64ForSignedRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 323)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@bigintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_bigintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-bigint.galgas", 336)).operator_or (GALGAS_operators::class_func_prefixPlusOperator (SOURCE_FILE ("predefinedType-bigint.galgas", 336)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 336)).operator_or (GALGAS_operators::class_func_prefixMinusOperator (SOURCE_FILE ("predefinedType-bigint.galgas", 336)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 336)).operator_or (GALGAS_operators::class_func_infixAddOperator (SOURCE_FILE ("predefinedType-bigint.galgas", 337)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 336)).operator_or (GALGAS_operators::class_func_infixSubOperator (SOURCE_FILE ("predefinedType-bigint.galgas", 337)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 337)).operator_or (GALGAS_operators::class_func_infixMulOperator (SOURCE_FILE ("predefinedType-bigint.galgas", 337)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 337)).operator_or (GALGAS_operators::class_func_infixDivOperator (SOURCE_FILE ("predefinedType-bigint.galgas", 337)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 337)).operator_or (GALGAS_operators::class_func_infixShiftOperator (SOURCE_FILE ("predefinedType-bigint.galgas", 338)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 337)).operator_or (GALGAS_operators::class_func_infixModOperator (SOURCE_FILE ("predefinedType-bigint.galgas", 338)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 338)).operator_or (GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("predefinedType-bigint.galgas", 339)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 338)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("predefinedType-bigint.galgas", 339)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 339)).operator_or (GALGAS_operators::class_func_infixXorOperator (SOURCE_FILE ("predefinedType-bigint.galgas", 339)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 339)).operator_or (GALGAS_operators::class_func_prefixTildeOperator (SOURCE_FILE ("predefinedType-bigint.galgas", 339)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 339)).operator_or (GALGAS_operators::class_func_incDecOperator (SOURCE_FILE ("predefinedType-bigint.galgas", 340)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 339)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-bigint.galgas", 340)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 340)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-bigint.galgas", 341)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 340)).operator_or (GALGAS_operators::class_func_minusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-bigint.galgas", 341)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 341)).operator_or (GALGAS_operators::class_func_mulEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-bigint.galgas", 342)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 341)).operator_or (GALGAS_operators::class_func_divEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-bigint.galgas", 342)) COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 342)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@binarysetPredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_binarysetPredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("emptyBinarySet") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@binarysetPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList cPtr_binarysetPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initializerSignatureList result_result ; // Returned variable
  GALGAS_initializerSignatureList temp_0 = GALGAS_initializerSignatureList::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 36)) ;
  GALGAS_formalInputParameterListAST temp_1 = GALGAS_formalInputParameterListAST::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 36)) ;
  temp_0.addAssign_operation (temp_1  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 36)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@binarysetPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_binarysetPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("predefinedType-binaryset.galgas", 42)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("predefinedType-binaryset.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 42)).operator_or (GALGAS_operators::class_func_infixXorOperator (SOURCE_FILE ("predefinedType-binaryset.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 42)).operator_or (GALGAS_operators::class_func_prefixTildeOperator (SOURCE_FILE ("predefinedType-binaryset.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 42)).operator_or (GALGAS_operators::class_func_infixShiftOperator (SOURCE_FILE ("predefinedType-binaryset.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 43)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-binaryset.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 43)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-binaryset.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 44)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@binarysetPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_binarysetPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 50))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binarysetPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classFunctionMap temp_0 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 57)) ;
  outArgument_outMap = temp_0 ;
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithBit"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 58)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 67)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fullBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 74)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithPredicateString"), GALGAS_string ("string"), GALGAS_string ("inPredicateString"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 81)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 90)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 103)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 116)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 129)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 142)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 155)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 168)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 181)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 194)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 207)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 220)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 233)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binarysetPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GALGAS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 252)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFull"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 253)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nodeCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 261)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isEmpty"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 269)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantVariableCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 277)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ITE"), GALGAS_string ("binaryset"), GALGAS_string ("inTHENoperand"), GALGAS_string ("binaryset"), GALGAS_string ("inELSEoperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 285)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("print"), GALGAS_string ("stringlist"), GALGAS_string ("inVariableList"), GALGAS_string ("uintlist"), GALGAS_string ("inBDDCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 294)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphvizDump"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 303)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("stringlist"), GALGAS_string ("inBitNameList"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 311)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transformedBy"), GALGAS_string ("uintlist"), GALGAS_string ("inTransformationArray"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 319)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 327)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 335)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 342)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 349)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 356)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigValueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bigint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 365)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedValueCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 374)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64ValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 382)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 389)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueListWithNameList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_string ("inNameList"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 396)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("predicateStringValue"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 403)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedStringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 411)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap10"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 418)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap021"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 425)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap102"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 432)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap120"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 439)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap201"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 446)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap210"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 453)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transposedBy"), GALGAS_string ("uintlist"), GALGAS_string ("inTransposeVector"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 460)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transitiveClosure"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 467)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("accessibleStates"), GALGAS_string ("binaryset"), GALGAS_string ("inInitialStateSet"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 474)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("implies"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 481)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("equalTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 488)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("notEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 495)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowerOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 502)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("greaterOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 509)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictGreaterThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 516)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictLowerThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 523)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetByTranslatingFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inFirstIndexToTranslate"), GALGAS_string ("uint"), GALGAS_string ("inTranslation"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 530)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsValue"), GALGAS_string ("uint64"), GALGAS_string ("inValue"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 537)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existsOnBitRange"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 544)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binarysetPredefinedTypeAST getClassMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getClassMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classMethodMap temp_0 = GALGAS_classMethodMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 557)) ;
  outArgument_outClassMethodMap = temp_0 ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setNodeTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 558)) ;
  }
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setAndTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 566)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolPredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_boolPredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("default") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList cPtr_boolPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initializerSignatureList result_result ; // Returned variable
  GALGAS_formalInputParameterListAST var_initializer_1758 = GALGAS_formalInputParameterListAST::init (inCompiler COMMA_HERE) ;
  var_initializer_1758.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-bool.galgas", 37)), GALGAS_string ("bool").getter_nowhere (SOURCE_FILE ("predefinedType-bool.galgas", 37)), GALGAS_string ("inValue").getter_nowhere (SOURCE_FILE ("predefinedType-bool.galgas", 37)), GALGAS_bool (false), GALGAS_bool (true)  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 37)) ;
  GALGAS_initializerSignatureList temp_0 = GALGAS_initializerSignatureList::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 38)) ;
  temp_0.addAssign_operation (var_initializer_1758  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 38)) ;
  result_result = temp_0 ;
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
  result_result = GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("predefinedType-bool.galgas", 44)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("predefinedType-bool.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 44)).operator_or (GALGAS_operators::class_func_infixXorOperator (SOURCE_FILE ("predefinedType-bool.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 44)).operator_or (GALGAS_operators::class_func_prefixNotOperator (SOURCE_FILE ("predefinedType-bool.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 44)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-bool.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 44)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-bool.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 45)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_boolPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 51))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classFunctionMap temp_0 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 58)) ;
  outArgument_outMap = temp_0 ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("default"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 59)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GALGAS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 72)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 73)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ocString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 81)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 89)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 97)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 105)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 113)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 121)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@charPredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_charPredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("default") ;
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
  result_result = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-char.galgas", 36)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-char.galgas", 36)) COMMA_SOURCE_FILE ("predefinedType-char.galgas", 36)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@charPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_charPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GALGAS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 43)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 44)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Length"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 52)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf32CharConstantRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 68)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isalnum"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 76)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isalpha"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 84)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("iscntrl"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 92)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isdigit"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 100)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("islower"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 108)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isupper"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 116)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isxdigit"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 124)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeLetter"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 132)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeMark"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 140)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 148)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeSeparator"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 156)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeCommand"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 164)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodePunctuation"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 172)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeSymbol"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 180)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeName"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 188)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeToLower"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 196)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeToUpper"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 204)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@charPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_charPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classFunctionMap temp_0 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-char.galgas", 218)) ;
  outArgument_outMap = temp_0 ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("replacementCharacter"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 219)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeCharacterWithUnsigned"), GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 226)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeCharacterFromRawKeyboard"), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-char.galgas", 235)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@charPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_charPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-char.galgas", 247))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dataPredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_dataPredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("emptyData") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dataPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList cPtr_dataPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initializerSignatureList result_result ; // Returned variable
  GALGAS_initializerSignatureList temp_0 = GALGAS_initializerSignatureList::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-data.galgas", 36)) ;
  GALGAS_formalInputParameterListAST temp_1 = GALGAS_formalInputParameterListAST::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-data.galgas", 36)) ;
  temp_0.addAssign_operation (temp_1  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 36)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classFunctionMap temp_0 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-data.galgas", 43)) ;
  outArgument_outMap = temp_0 ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyData"), GALGAS_string ("data"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 44)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("dataWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 51)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dataPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_dataPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-data.galgas", 65)).operator_or (GALGAS_operators::class_func_generateEnumerationHelperMethods (SOURCE_FILE ("predefinedType-data.galgas", 65)) COMMA_SOURCE_FILE ("predefinedType-data.galgas", 65)) ;
//---
  return result_result ;
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
  GALGAS_unifiedTypeMapEntry var_uintTypeIndex_3100 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), var_uintTypeIndex_3100, inCompiler COMMA_SOURCE_FILE ("predefinedType-data.galgas", 73)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-data.galgas", 74)) ;
  outArgument_outEnumerationList = temp_0 ;
  outArgument_outEnumerationList.addAssign_operation (var_uintTypeIndex_3100, GALGAS_string ("data")  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 75)) ;
  outArgument_outEnumeratedType = GALGAS_string ("uint") ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getInstanceMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getInstanceMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instanceMethodMap temp_0 = GALGAS_instanceMethodMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-data.galgas", 83)) ;
  outArgument_outInstanceMethodMap = temp_0 ;
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 84)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 92)) ;
  }
  GALGAS_formalParameterSignature temp_1 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-data.galgas", 100)) ;
  GALGAS_formalParameterSignature var_argList_3992 = temp_1 ;
  GALGAS_unifiedTypeMapEntry var_t_4082 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t_4082, inCompiler COMMA_SOURCE_FILE ("predefinedType-data.galgas", 101)) ;
  }
  var_argList_3992.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-data.galgas", 102)), var_t_4082, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-data.galgas", 102)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 102)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t_4082, inCompiler COMMA_SOURCE_FILE ("predefinedType-data.galgas", 103)) ;
  }
  var_argList_3992.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-data.galgas", 104)), var_t_4082, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("predefinedType-data.galgas", 104)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 104)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 106)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("predefinedType-data.galgas", 107)), var_argList_3992, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 109)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("predefinedType-data.galgas", 111)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("predefinedType-data.galgas", 105)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GALGAS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 120)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 121)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cStringRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 129)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getSetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GALGAS_setterMap & outArgument_outSetterMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_setterMap temp_0 = GALGAS_setterMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-data.galgas", 143)) ;
  outArgument_outSetterMap = temp_0 ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendByte"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 144)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendShortBE"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 152)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendShortLE"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 160)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendUIntBE"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 168)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendUIntLE"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 176)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inValue"), GALGAS_string ("appendUTF8String"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 184)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("data"), GALGAS_string ("inValue"), GALGAS_string ("appendData"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 192)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dataPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_dataPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-data.galgas", 205))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@doublePredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_doublePredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("default") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@doublePredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_doublePredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_infixAddOperator (SOURCE_FILE ("predefinedType-double.galgas", 36)).operator_or (GALGAS_operators::class_func_infixSubOperator (SOURCE_FILE ("predefinedType-double.galgas", 36)) COMMA_SOURCE_FILE ("predefinedType-double.galgas", 36)).operator_or (GALGAS_operators::class_func_infixMulOperator (SOURCE_FILE ("predefinedType-double.galgas", 36)) COMMA_SOURCE_FILE ("predefinedType-double.galgas", 36)).operator_or (GALGAS_operators::class_func_infixDivOperator (SOURCE_FILE ("predefinedType-double.galgas", 36)) COMMA_SOURCE_FILE ("predefinedType-double.galgas", 36)).operator_or (GALGAS_operators::class_func_prefixPlusOperator (SOURCE_FILE ("predefinedType-double.galgas", 37)) COMMA_SOURCE_FILE ("predefinedType-double.galgas", 36)).operator_or (GALGAS_operators::class_func_prefixMinusOperator (SOURCE_FILE ("predefinedType-double.galgas", 37)) COMMA_SOURCE_FILE ("predefinedType-double.galgas", 37)).operator_or (GALGAS_operators::class_func_infixModOperator (SOURCE_FILE ("predefinedType-double.galgas", 37)) COMMA_SOURCE_FILE ("predefinedType-double.galgas", 37)).operator_or (GALGAS_operators::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("predefinedType-double.galgas", 37)) COMMA_SOURCE_FILE ("predefinedType-double.galgas", 37)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-double.galgas", 38)) COMMA_SOURCE_FILE ("predefinedType-double.galgas", 37)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-double.galgas", 38)) COMMA_SOURCE_FILE ("predefinedType-double.galgas", 38)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-double.galgas", 39)) COMMA_SOURCE_FILE ("predefinedType-double.galgas", 38)).operator_or (GALGAS_operators::class_func_minusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-double.galgas", 39)) COMMA_SOURCE_FILE ("predefinedType-double.galgas", 39)).operator_or (GALGAS_operators::class_func_mulEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-double.galgas", 40)) COMMA_SOURCE_FILE ("predefinedType-double.galgas", 39)).operator_or (GALGAS_operators::class_func_divEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-double.galgas", 40)) COMMA_SOURCE_FILE ("predefinedType-double.galgas", 40)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@doublePredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_doublePredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GALGAS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 47)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 48)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 56)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 64)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 72)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 80)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cos"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 88)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sin"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 96)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("tan"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 104)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("log10"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("log2"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 120)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("logn"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 128)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("exp"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 136)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cosDegree"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 144)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sinDegree"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 152)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("tanDegree"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 160)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sqrt"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 168)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("power"), GALGAS_string ("double"), GALGAS_string ("inExponant"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 176)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryImage"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 183)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@doublePredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_doublePredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GALGAS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classFunctionMap temp_0 = GALGAS_classFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("predefinedType-double.galgas", 197)) ;
  outArgument_outMap = temp_0 ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("pi"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 198)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doubleWithBinaryImage"), GALGAS_string ("uint64"), GALGAS_string ("inBinaryImage"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-double.galgas", 205)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@doublePredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_doublePredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-double.galgas", 219))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperPredefinedTypeAST defaultConstructorName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_filewrapperPredefinedTypeAST::getter_defaultConstructorName (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_filewrapperPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-filewrapper.galgas", 36)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_filewrapperPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 42))) ;
//---
  return result_result ;
}


