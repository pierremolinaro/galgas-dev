#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-28.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters_3F_ (const GGS_lstring constinArgument_inString,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_stringlist enumerator_15629 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GGS_string ("%%") COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 422))) ;
  while (enumerator_15629.hasCurrentObject ()) {
    GGS_stringlist var_explodedArray_15654 = enumerator_15629.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GGS_string ("%") COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 423)) ;
    {
    GGS_string joker_15752 ; // Joker input parameter
    var_explodedArray_15654.setter_popFirst (joker_15752, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 424)) ;
    }
    UpEnumerator_stringlist enumerator_15765 (var_explodedArray_15654) ;
    while (enumerator_15765.hasCurrentObject ()) {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_15765.current_mValue (HERE).getter_count (SOURCE_FILE ("declaration-type-dict.galgas4", 426)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_char var_c_15842 = enumerator_15765.current_mValue (HERE).getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 427)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = GGS_bool (ComparisonKind::notEqual, var_c_15842.objectCompare (GGS_char (utf32 (75)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GGS_string ("only '%K' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 429)) ;
            }
          }
        }
      }
      enumerator_15765.gotoNextObject () ;
    }
    enumerator_15629.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_L_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (const GGS_lstring constinArgument_inString,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_stringlist enumerator_16319 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GGS_string ("%%") COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 439))) ;
  while (enumerator_16319.hasCurrentObject ()) {
    GGS_stringlist var_explodedArray_16344 = enumerator_16319.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GGS_string ("%") COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 440)) ;
    {
    GGS_string joker_16442 ; // Joker input parameter
    var_explodedArray_16344.setter_popFirst (joker_16442, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 441)) ;
    }
    UpEnumerator_stringlist enumerator_16455 (var_explodedArray_16344) ;
    while (enumerator_16455.hasCurrentObject ()) {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_16455.current_mValue (HERE).getter_count (SOURCE_FILE ("declaration-type-dict.galgas4", 443)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_char var_c_16532 = enumerator_16455.current_mValue (HERE).getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 444)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = GGS_bool (ComparisonKind::notEqual, var_c_16532.objectCompare (GGS_char (utf32 (75)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_c_16532.objectCompare (GGS_char (utf32 (76)))) COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 445)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GGS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 446)) ;
            }
          }
        }
      }
      enumerator_16455.gotoNextObject () ;
    }
    enumerator_16319.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForMapAndDict'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_forbiddenKeysForMapAndDict (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_result ; // Returned variable
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 456)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("key")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 456)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("description")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 456)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("object")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 456)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict = false ;
static GGS_stringset gOnceFunctionResult_forbiddenKeysForMapAndDict ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_forbiddenKeysForMapAndDict (class Compiler * inCompiler
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

static const GALGAS_TypeDescriptor * functionArgs_forbiddenKeysForMapAndDict [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_forbiddenKeysForMapAndDict (Compiler * inCompiler,
                                                                        const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                        const GGS_location & /* inErrorLocation */
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
//Overriding extension proc '@dictDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                       const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                       GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictDeclarationAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_keyType_17570 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mKeyTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 471)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_keyType_17570, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 472)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-dict.galgas4", 472)) COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 472)).operator_not (SOURCE_FILE ("declaration-type-dict.galgas4", 472)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_dictDeclarationAST temp_2 = this ;
      const GGS_dictDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mKeyTypeName ().readProperty_location (), GGS_string ("the @").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 473)).add_operation (GGS_string (" type is not comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 473)), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 473)) ;
    }
  }
  const GGS_dictDeclarationAST temp_5 = this ;
  GGS_lstring var_nameForUsefulness_17823 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 476)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17823, var_nameForUsefulness_17823, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 477)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_dictDeclarationAST temp_7 = this ;
    test_6 = temp_7.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_nameForUsefulness_17823, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 479)) ;
    }
  }
  const GGS_dictDeclarationAST temp_8 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_18062 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_8.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 482)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 481)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17823, var_elementTypeNameForUsefulness_18062 COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 484)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_dictDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_elementTypeNameForUsefulness_18062, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 486)) ;
    }
  }
  const GGS_dictDeclarationAST temp_11 = this ;
  GGS_lstring var_initializerNameForUsefulness_18450 = function_initializerNameForUsefulEntitiesGraph (temp_11.readProperty_mDictTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 491)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 489)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_18450, var_initializerNameForUsefulness_18450, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 493)) ;
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_dictDeclarationAST temp_13 = this ;
    test_12 = temp_13.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_initializerNameForUsefulness_18450, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 495)) ;
    }
  }
  GGS_typedPropertyList var_typedAttributeList_18850 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_18899 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_dictDeclarationAST temp_14 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_18941 (temp_14.readProperty_mPropertyList ()) ;
  while (enumerator_18941.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_18966 = function_typeNameForUsefulEntitiesGraph (enumerator_18941.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 501)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17823, var_propertyTypeNameForUsefulness_18966 COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 502)) ;
    }
    GGS_unifiedTypeMapEntry var_t_19177 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_18941.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 503)) ;
    GGS_bool var_hasSetter_19239 = GGS_bool (true) ;
    var_typedAttributeList_18850.plusPlusAssignOperation (GGS_typedPropertyList_2E_element::init_21__21__21__21_hasSetter_21_hasSelector (var_t_19177, enumerator_18941.current (HERE).readProperty_name (), enumerator_18941.current (HERE).readProperty_initialization (), var_hasSetter_19239, enumerator_18941.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 505)) ;
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 512)).getter_hasKey (enumerator_18941.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 512)).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_string var_m_19513 = GGS_string ("a property cannot be named:") ;
        UpEnumerator_stringset enumerator_19590 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 514))) ;
        while (enumerator_19590.hasCurrentObject ()) {
          var_m_19513.plusAssignOperation(GGS_string (" ").add_operation (enumerator_19590.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 515)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 515)) ;
          enumerator_19590.gotoNextObject () ;
        }
        var_m_19513.plusAssignOperation(GGS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 517)) ;
        GenericArray <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_18941.current (HERE).readProperty_name ().readProperty_location (), var_m_19513, fixItArray16  COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 518)) ;
      }
    }
    {
    var_attributeMap_18899.setter_insertKey (enumerator_18941.current (HERE).readProperty_name (), var_t_19177, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 520)) ;
    }
    enumerator_18941.gotoNextObject () ;
  }
  const GGS_dictDeclarationAST temp_17 = this ;
  GGS_lstring var_elementTypeName_19799 = function_makeEmbeddedElementTypeLName (temp_17.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 523)) ;
  GGS_lstring var_optionalElementTypeName_19873 = function_makeOptionalTypeLName (var_elementTypeName_19799, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 524)) ;
  GGS_unifiedTypeMapEntry var_optionalElementTypeEntry_19960 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_optionalElementTypeName_19873, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 525)) ;
  const GGS_dictDeclarationAST temp_18 = this ;
  const GGS_dictDeclarationAST temp_19 = this ;
  const GGS_dictDeclarationAST temp_20 = this ;
  const GGS_dictDeclarationAST temp_21 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_dictTypeForGeneration::init_21_infoMessage_21__21__21__21__21__21_ (GGS_string ("dict ").add_operation (temp_18.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 528)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_19.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 529)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_elementTypeName_19799, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 530)), temp_20.readProperty_mDictTypeName (), var_typedAttributeList_18850, temp_21.readProperty_mKeyTypeName (), var_optionalElementTypeEntry_19960, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 527)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                               GGS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 553)) ;
  const GGS_dictTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_1.readProperty_mOptionalElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 554)) ;
  const GGS_dictTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_21309 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 555)) ;
  const GGS_dictTypeForGeneration temp_3 = this ;
  const GGS_dictTypeForGeneration temp_4 = this ;
  const GGS_dictTypeForGeneration temp_5 = this ;
  const GGS_dictTypeForGeneration temp_6 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_dictGenerationTemplate_dictTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21309.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 558)), temp_4.readProperty_mTypedAttributeList (), var_selfTypeDefinition_21309.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_21309.readProperty_typeForEnumeratedElement (), temp_5.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-dict.galgas4", 562)), extensionGetter_identifierRepresentation (temp_6.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 563)) COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 556))) ;
  const GGS_dictTypeForGeneration temp_7 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_21309.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_7.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 567)), var_selfTypeDefinition_21309.readProperty_isConcrete (), var_selfTypeDefinition_21309.readProperty_initializerMap (), var_selfTypeDefinition_21309.readProperty_classFunctionMap (), var_selfTypeDefinition_21309.readProperty_getterMap (), var_selfTypeDefinition_21309.readProperty_setterMap (), var_selfTypeDefinition_21309.readProperty_instanceMethodMap (), var_selfTypeDefinition_21309.readProperty_classMethodMap (), var_selfTypeDefinition_21309.readProperty_readSubscriptMap (), var_selfTypeDefinition_21309.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_21309.readProperty_features (), var_selfTypeDefinition_21309.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_21309.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_21309.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 565))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 565)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 590)) ;
  const GGS_dictTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_22955 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 591)) ;
  const GGS_dictTypeForGeneration temp_2 = this ;
  const GGS_dictTypeForGeneration temp_3 = this ;
  const GGS_dictTypeForGeneration temp_4 = this ;
  const GGS_dictTypeForGeneration temp_5 = this ;
  const GGS_dictTypeForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_dictGenerationTemplate_dictTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 593)), temp_3.readProperty_mTypedAttributeList (), var_selfTypeDefinition_22955.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_22955.readProperty_typeForEnumeratedElement (), temp_4.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-dict.galgas4", 597)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_22955.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 598)), extensionGetter_identifierRepresentation (temp_5.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 599)), extensionGetter_identifierRepresentation (temp_6.readProperty_mOptionalElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 600)) COMMA_SOURCE_FILE ("declaration-type-dict.galgas4", 592))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'dictGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'helpers' directory

static const cRegularFileWrapper * gWrapperAllFiles_dictGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'helpers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_dictGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'helpers'

const cDirectoryWrapper gWrapperDirectory_2_dictGenerationTemplate (
  "helpers",
  0,
  gWrapperAllFiles_dictGenerationTemplate_2,
  0,
  gWrapperAllDirectories_dictGenerationTemplate_2
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_dictGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_dictGenerationTemplate_1 [2] = {
  & gWrapperDirectory_2_dictGenerationTemplate,
  nullptr
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_1_dictGenerationTemplate (
  "build",
  0,
  gWrapperAllFiles_dictGenerationTemplate_1,
  1,
  gWrapperAllDirectories_dictGenerationTemplate_1
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_dictGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_dictGenerationTemplate_0 [2] = {
  & gWrapperDirectory_1_dictGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_dictGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_dictGenerationTemplate_0,
  1,
  gWrapperAllDirectories_dictGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'dictGenerationTemplate dictTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_dictGenerationTemplate_dictTypeHeader_31_ (Compiler * inCompiler,
                                                                          const GGS_string & in_TYPE_5F_NAME,
                                                                          const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                          const GGS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                          const GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                          const GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                          const GGS_string & in_KEY_5F_TYPE_5F_IDENTIFIER,
                                                                          const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 2)).add_operation (GGS_string (" dictionary enumerator"), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n#include \"GALGAS_GenericDictionary.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) ;\n\n  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }\n\n  public: inline void gotoNextObject (void) { mIndex -= 1 ; }\n\n") ;
  GGS_uint index_767_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_767 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_767.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_767.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 18)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_767.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 18)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const ;\n\n") ;
      enumerator_767.gotoNextObject () ;
      index_767_.increment () ;
    }
  }
  result.appendString ("\n//--- Current element access\n  public: class GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 24)).stringValue ()) ;
  result.appendString (" current (UNUSED_LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> mInfoArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand)  ;\n\n  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }\n\n  public: inline void gotoNextObject (void) { mIndex += 1 ; }\n\n") ;
  GGS_uint index_1944_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_1944 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_1944.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1944.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 46)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_1944.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 46)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const ;\n") ;
      enumerator_1944.gotoNextObject () ;
      index_1944_.increment () ;
    }
  }
  result.appendString ("//--- Current element access\n  public: class GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 50)).stringValue ()) ;
  result.appendString (" current (UNUSED_LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> mInfoArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 62)).add_operation (GGS_string (" dict"), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 62)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public GenericDictionary <GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (", GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> {\n\n//--------------------------------- Virtual destructor\n  public: virtual ~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) = default ;\n\n//--------------------------------- Build\n  protected: static GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" builtDictionary (LOCATION_ARGS) ;\n\n//--------------------------------- Implementation of reader 'description'\n  public: VIRTUAL_IN_DEBUG void description (String & ioString,\n                                             const int32_t inIndentation) const override ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'dictGenerationTemplate dictTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_dictGenerationTemplate_dictTypeSpecificImplementation (Compiler * inCompiler,
                                                                                      const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                      const GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                      const GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                                      const GGS_string & in_KEY_5F_TYPE_5F_IDENTIFIER,
                                                                                      const GGS_bool & /* in_GENERATE_5F_COMPARISON */,
                                                                                      const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                      const GGS_string & in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::builtDictionary (LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.build (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_LOCATION_ARGS) {\n  return GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::builtDictionary (THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString,\n                                          const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"<dict @\") ;\n  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;\n  ioString.appendCString (\": \") ;\n  if (isValid ()) {\n    ioString.appendSigned (count ()) ;\n    ioString.appendCString (\" node(s)\") ;\n  }else{\n    ioString.appendCString (\"not built\") ;\n  }\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_uint GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GGS_uint result ;\n  if (isValid ()) {\n    result = GGS_uint (uint32_t (count ())) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::\nreadSubscript__3F_ (const class GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey,\n                    Compiler * /* inCompiler */\n                    COMMA_UNUSED_LOCATION_ARGS) const {\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> object = infoForKey (inKey) ;\n    if (object.isNotNil ()) {\n      return GGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (object.value ()) ;\n    }else{\n      return GGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init_nil () ;\n    }\n  }else{\n    return GGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusPlusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inValue.mProperty_key.isValid ()) {\n    insertOrReplace (inValue.mProperty_key, inValue COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey") ;
  GGS_uint index_2760_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_2760 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_2760.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_2760.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 72)).stringValue ()) ;
      result.appendString (" & inArgument") ;
      result.appendString (index_2760_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 72)).stringValue ()) ;
      enumerator_2760.gotoNextObject () ;
      index_2760_IDX.increment () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (inKey") ;
  GGS_uint index_3027_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3027 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_3027.hasCurrentObject ()) {
      result.appendString (", inArgument") ;
      result.appendString (index_3027_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 78)).stringValue ()) ;
      enumerator_3027.gotoNextObject () ;
      index_3027_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  if (isValid () && inKey.isValid ()) {\n    insertOrReplace (inKey, newElement COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey") ;
  GGS_uint index_3418_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3418 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_3418.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_3418.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 90)).stringValue ()) ;
      result.appendString (" inArgument") ;
      result.appendString (index_3418_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 90)).stringValue ()) ;
      enumerator_3418.gotoNextObject () ;
      index_3418_IDX.increment () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (inKey") ;
  GGS_uint index_3683_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3683 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_3683.hasCurrentObject ()) {
      result.appendString (", inArgument") ;
      result.appendString (index_3683_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 96)).stringValue ()) ;
      enumerator_3683.gotoNextObject () ;
      index_3683_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  if (isValid () && inKey.isValid ()) {\n    insertOrReplace (inKey, newElement COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_hasKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_bool result ;\n  if (isValid () && inKey.isValid ()) {\n    result = GGS_bool (hasKey (inKey)) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_searchKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey") ;
  GGS_uint index_4437_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4437 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_4437.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4437.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 119)).stringValue ()) ;
      result.appendString (" & outArgument") ;
      result.appendString (index_4437_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 119)).stringValue ()) ;
      enumerator_4437.gotoNextObject () ;
      index_4437_IDX.increment () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> object = infoForKey (inKey) ;\n    if (object.isNil ()) {\n    //--- Build error message\n      const String message = \"cannot search in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    //--- Drop out arguments\n") ;
  GGS_uint index_5049_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_5049 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_5049.hasCurrentObject ()) {
      result.appendString ("      outArgument") ;
      result.appendString (index_5049_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 133)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_5049.gotoNextObject () ;
      index_5049_IDX.increment () ;
    }
  }
  result.appendString ("    }else{\n") ;
  GGS_uint index_5174_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_5174 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_5174.hasCurrentObject ()) {
      result.appendString ("      outArgument") ;
      result.appendString (index_5174_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (" = object->mProperty_") ;
      result.appendString (enumerator_5174.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_5174.gotoNextObject () ;
      index_5174_IDX.increment () ;
    }
  }
  result.appendString ("    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey") ;
  GGS_uint index_5551_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_5551 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_5551.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_5551.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 147)).stringValue ()) ;
      result.appendString (" & outArgument") ;
      result.appendString (index_5551_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 147)).stringValue ()) ;
      enumerator_5551.gotoNextObject () ;
      index_5551_IDX.increment () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> removedObject\n                    = removeAndReturnRemovedInfo (inKey COMMA_THERE) ;\n    if (removedObject.isNil ()) { // Not found\n    //--- Build error message\n      const String message = \"cannot remove in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    //--- Drop output arguments\n") ;
  GGS_uint index_6235_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6235 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_6235.hasCurrentObject ()) {
      result.appendString ("      outArgument") ;
      result.appendString (index_6235_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 162)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_6235.gotoNextObject () ;
      index_6235_IDX.increment () ;
    }
  }
  result.appendString ("    }else{\n    //--- Assign output arguments\n") ;
  GGS_uint index_6394_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6394 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_6394.hasCurrentObject ()) {
      result.appendString ("      outArgument") ;
      result.appendString (index_6394_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 168)).stringValue ()) ;
      result.appendString (" = removedObject->mProperty_") ;
      result.appendString (enumerator_6394.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 168)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_6394.gotoNextObject () ;
      index_6394_IDX.increment () ;
    }
  }
  result.appendString ("    }\n  }\n}\n\n") ;
  GGS_uint index_6594_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6594 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_6594.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6594.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 176)).stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_6594.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 176)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("const GGS_") ;
      result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" & inKey,\n                                                 ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n                                                 ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6594.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 179)).stringValue ()) ;
      result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("> object = infoForKey (inKey) ;\n    if (object.isNil ()) { // Not found\n    //--- Build error message\n      const String message = \"cannot get ") ;
      result.appendString (enumerator_6594.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 184)).stringValue ()) ;
      result.appendString (" ForKey in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      result = object->mProperty_") ;
      result.appendString (enumerator_6594.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 188)).stringValue ()) ;
      result.appendString (" ;\n    }\n  }\n  return result ;\n}\n") ;
      enumerator_6594.gotoNextObject () ;
      index_6594_.increment () ;
    }
  }
  GGS_uint index_7737_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7737 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_7737.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_set") ;
      result.appendString (enumerator_7737.current_name (HERE).readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 197)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 197)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7737.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 197)).stringValue ()) ;
      result.appendString (" inPropertyValue,\n                             ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GGS_") ;
      result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" inKey,\n                             ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n                             ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    OptionalSharedRef <GenericDictionaryNode <GGS_") ;
      result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (", GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (">> modifiedNode = nodeForKey (inKey) ;\n    if (modifiedNode.isNil ()) { // Not found\n    //--- Build error message\n     const String message = \"cannot set") ;
      result.appendString (enumerator_7737.current_name (HERE).readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 205)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 205)).stringValue ()) ;
      result.appendString ("ForKey in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      modifiedNode->mSharedInfo->mProperty_") ;
      result.appendString (enumerator_7737.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 209)).stringValue ()) ;
      result.appendString (" = inPropertyValue ;\n    }\n  }\n}\n\n") ;
      enumerator_7737.gotoNextObject () ;
      index_7737_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n// Up Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nUpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) :\nmInfoArray (inOperand.sortedInfoArray ()),\nmIndex (0) {\n}\n\n") ;
  GGS_uint index_9352_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_9352 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_9352.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_9352.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 228)).stringValue ()) ;
      result.appendString (" UpEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_9352.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 228)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_HERE)->mProperty_") ;
      result.appendString (enumerator_9352.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 229)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_9352.gotoNextObject () ;
      index_9352_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 236)).stringValue ()) ;
  result.appendString (" UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (UNUSED_LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_HERE).value () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n// Down Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nDownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) :\nmInfoArray (inOperand.sortedInfoArray ()),\nmIndex () {\n  mIndex = mInfoArray.count () - 1 ;\n}\n\n") ;
  GGS_uint index_10552_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_10552 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_10552.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_10552.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 253)).stringValue ()) ;
      result.appendString (" DownEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_10552.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 253)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_HERE)->mProperty_") ;
      result.appendString (enumerator_10552.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 254)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_10552.gotoNextObject () ;
      index_10552_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 262)).stringValue ()) ;
  result.appendString (" DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (UNUSED_LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_HERE).value () ;\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedListDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                    GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                    GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                    GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                    GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                    GGS_semanticDeclarationListAST & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedListDeclarationAST temp_0 = this ;
  const GGS_sortedListDeclarationAST temp_1 = this ;
  GGS_lstring var_key_6081 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 164)), temp_1.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_sortedListDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6081, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 165)) ;
  }
  const GGS_sortedListDeclarationAST temp_3 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_6245 (temp_3.readProperty_mPropertyList ()) ;
  while (enumerator_6245.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_6245.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 167)), enumerator_6245.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 167)) ;
    }
    enumerator_6245.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedListDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_structAttributeList_6611 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  const GGS_sortedListDeclarationAST temp_0 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_6662 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_6662.hasCurrentObject ()) {
    var_structAttributeList_6611.plusPlusAssignOperation (GGS_propertyInCollectionListAST_2E_element::init_21_mutability_21__21__21__21_hasSelector_21_initialization (enumerator_6662.current (HERE).readProperty_mutability (), enumerator_6662.current (HERE).readProperty_typeName (), enumerator_6662.current (HERE).readProperty_name (), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 181)), enumerator_6662.current (HERE).readProperty_hasSelector (), enumerator_6662.current (HERE).readProperty_initialization (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 177)) ;
    enumerator_6662.gotoNextObject () ;
  }
  const GGS_sortedListDeclarationAST temp_1 = this ;
  const GGS_sortedListDeclarationAST temp_2 = this ;
  const GGS_sortedListDeclarationAST temp_3 = this ;
  GGS_structComparison temp_4 ;
  const GalgasBool test_5 = temp_3.readProperty_equatable ().boolEnum () ;
  if (GalgasBool::boolTrue == test_5) {
    temp_4 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 191)) ;
  }else if (GalgasBool::boolFalse == test_5) {
    temp_4 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 191)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_semanticDeclarationListAST_2E_element::init_21_ (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (temp_1.readProperty_isPredefined (), function_makeEmbeddedElementTypeLName (temp_2.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 188)), var_structAttributeList_6611, GGS_string::makeEmptyString (), temp_4, GGS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 186)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedListDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                              const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                              const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                              const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                              const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_listTypeIndex_7996 ;
  {
  const GGS_sortedListDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mSortedListTypeName (), var_listTypeIndex_7996, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 208)) ;
  }
  GGS_unifiedTypeMapEntry var_listElementTypeIndex_8160 ;
  {
  const GGS_sortedListDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_1.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 211)), var_listElementTypeIndex_8160, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 210)) ;
  }
  GGS_enumerationDescriptorList var_enumerationDescriptor_8254 = GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_constructorAttributeTypeList_8309 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_setterFormalOutputArgumentList_8378 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_setterFormalInputArgumentList_8449 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_typedAttributeList_8512 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  const GGS_sortedListDeclarationAST temp_2 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_8562 (temp_2.readProperty_mPropertyList ()) ;
  while (enumerator_8562.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_8632 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8562.current (HERE).readProperty_typeName (), var_attributeTypeIndex_8632, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 221)) ;
    }
    GGS_bool var_hasSelector_8662 = GGS_bool (false) ;
    var_typedAttributeList_8512.plusPlusAssignOperation (GGS_typedPropertyList_2E_element::init_21__21__21__21_hasSetter_21_hasSelector (var_attributeTypeIndex_8632, enumerator_8562.current (HERE).readProperty_name (), enumerator_8562.current (HERE).readProperty_initialization (), GGS_bool (true), var_hasSelector_8662, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 223)) ;
    var_enumerationDescriptor_8254.plusPlusAssignOperation (GGS_enumerationDescriptorList_2E_element::init_21__21_ (var_attributeTypeIndex_8632, enumerator_8562.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 224)) ;
    var_constructorAttributeTypeList_8309.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 225)), var_attributeTypeIndex_8632, enumerator_8562.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 225)) ;
    var_setterFormalOutputArgumentList_8378.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 226)), var_attributeTypeIndex_8632, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 226)), enumerator_8562.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 226)) ;
    var_setterFormalInputArgumentList_8449.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 227)), var_attributeTypeIndex_8632, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 227)), enumerator_8562.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 227)) ;
    enumerator_8562.gotoNextObject () ;
  }
  GGS_classFunctionMap var_classFunctionMap_9276 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  var_classFunctionMap_9276.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("sortedListWithValue"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 232)), inCompiler COMMA_HERE), var_constructorAttributeTypeList_8309, GGS_bool (false), var_listTypeIndex_7996, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 231)) ;
  }
  GGS_getterMap var_getterMap_9541 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_9541, inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 238)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_9541, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 239)) ;
  }
  GGS_setterMap var_setterMap_9786 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  var_setterMap_9786.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("popGreatest"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 250)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 251)), var_setterFormalOutputArgumentList_8378, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 254)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 249)) ;
  }
  {
  var_setterMap_9786.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("popSmallest"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 258)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 259)), var_setterFormalOutputArgumentList_8378, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 262)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 257)) ;
  }
  {
  var_setterMap_9786.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("insert"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 266)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 267)), var_setterFormalInputArgumentList_8449, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 270)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 265)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_10547 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_instanceMethodMap_10547.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("greatest"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 276)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 277)), var_setterFormalOutputArgumentList_8378, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 279)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 281)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 275)) ;
  }
  {
  var_instanceMethodMap_10547.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("smallest"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 285)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 286)), var_setterFormalOutputArgumentList_8378, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 288)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 290)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 284)) ;
  }
  GGS_initializerMap var_initializerMap_11144 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_11192 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_sortedListDeclarationAST temp_3 = this ;
  var_initializerMap_11144.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_11192, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 297)), temp_3.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_11192, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 296)) ;
  }
  {
  const GGS_sortedListDeclarationAST temp_4 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_4.readProperty_mSortedListTypeName (), GGS_bool (false), var_initializerMap_11144, var_getterMap_9541, var_setterMap_9786, var_instanceMethodMap_10547, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 301)) ;
  }
  GGS_typeFeatures var_features_11833 = GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 317)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_sortedListDeclarationAST temp_6 = this ;
    test_5 = temp_6.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      var_features_11833.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 319)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 319)) ;
    }
  }
  {
  const GGS_sortedListDeclarationAST temp_7 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_7.readProperty_mSortedListTypeName (), var_features_11833, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 321)) ;
  }
  const GGS_sortedListDeclarationAST temp_8 = this ;
  const GGS_sortedListDeclarationAST temp_9 = this ;
  const GGS_sortedListDeclarationAST temp_10 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_12180 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_8.readProperty_mSortedListTypeName (), temp_9.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 334)), GGS_typeKindEnum::class_func_sortedListType (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 335)), GGS_bool (true), var_typedAttributeList_8512, GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_11144, var_classFunctionMap_9276, var_getterMap_9541, var_setterMap_9786, var_instanceMethodMap_10547, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 346)), GGS_subscriptMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_8254, var_features_11833, var_constructorAttributeTypeList_8309, GGS_bool (false), var_listElementTypeIndex_8160, GGS_string ("-sortedlist-").add_operation (temp_10.readProperty_mSortedListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 353)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 353)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 354)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_12180.readProperty_typeName (), var_typeDefinition_12180, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 356)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedListDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                             const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                             GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedListDeclarationAST temp_0 = this ;
  GGS_lstring var_sortedListNameForUsefulness_13832 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 371)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_sortedListNameForUsefulness_13832, var_sortedListNameForUsefulness_13832, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 372)) ;
  }
  const GGS_sortedListDeclarationAST temp_1 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_14023 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_1.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 374)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 373)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_13832, var_elementTypeNameForUsefulness_14023 COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 376)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_sortedListDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_sortedListNameForUsefulness_13832, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 378)) ;
    }
  }
  const GGS_sortedListDeclarationAST temp_4 = this ;
  GGS_lstring var_initializerNameForUsefulness_14442 = function_initializerNameForUsefulEntitiesGraph (temp_4.readProperty_mSortedListTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 383)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 381)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_14442, var_initializerNameForUsefulness_14442, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 385)) ;
  }
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_14442, var_sortedListNameForUsefulness_13832 COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 386)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_sortedListDeclarationAST temp_6 = this ;
    test_5 = temp_6.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_initializerNameForUsefulness_14442, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 388)) ;
    }
  }
  GGS_typedPropertyList var_typedAttributeList_14946 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_15015 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_sortedListDeclarationAST temp_7 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_15059 (temp_7.readProperty_mPropertyList ()) ;
  while (enumerator_15059.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_15086 = function_typeNameForUsefulEntitiesGraph (enumerator_15059.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 394)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_13832, var_propertyTypeNameForUsefulness_15086 COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 395)) ;
    }
    GGS_unifiedTypeMapEntry var_t_15290 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_15059.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 396)) ;
    GGS_bool var_hasSelector_15354 = GGS_bool (true) ;
    var_typedAttributeList_14946.plusPlusAssignOperation (GGS_typedPropertyList_2E_element::init_21__21__21__21_hasSetter_21_hasSelector (var_t_15290, enumerator_15059.current (HERE).readProperty_name (), enumerator_15059.current (HERE).readProperty_initialization (), GGS_bool (true), var_hasSelector_15354, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 398)) ;
    {
    var_attributeMap_15015.setter_insertKey (enumerator_15059.current (HERE).readProperty_name (), var_t_15290, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 405)) ;
    }
    enumerator_15059.gotoNextObject () ;
  }
  GGS_stringset var_attributesUsedForSorting_15641 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_sortDescriptorListForGeneration var_sortDescriptorList_15713 = GGS_sortDescriptorListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_sortedListDeclarationAST temp_8 = this ;
  UpEnumerator_sortedListSortDescriptorListAST enumerator_15769 (temp_8.readProperty_mSortDescriptorList ()) ;
  while (enumerator_15769.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_type_15885 ;
    var_attributeMap_15015.method_searchKey (enumerator_15769.current (HERE).readProperty_mSortedAttributeName (), var_type_15885, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 411)) ;
    var_sortDescriptorList_15713.plusPlusAssignOperation (GGS_sortDescriptorListForGeneration_2E_element::init_21__21__21_ (var_type_15885, enumerator_15769.current (HERE).readProperty_mSortedAttributeName ().readProperty_string (), enumerator_15769.current (HERE).readProperty_mAscending (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 412)) ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = var_attributesUsedForSorting_15641.getter_hasKey (enumerator_15769.current (HERE).readProperty_mSortedAttributeName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 413)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_15769.current (HERE).readProperty_mSortedAttributeName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_15769.current (HERE).readProperty_mSortedAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 414)).add_operation (GGS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 414)), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 414)) ;
      }
    }
    var_attributesUsedForSorting_15641.plusPlusAssignOperation (enumerator_15769.current (HERE).readProperty_mSortedAttributeName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 416)) ;
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = extensionGetter_definition (var_type_15885, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 417)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 417)) COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 417)).operator_not (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 417)).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_15769.current (HERE).readProperty_mSortedAttributeName ().readProperty_location (), GGS_string ("the @").add_operation (extensionGetter_definition (var_type_15885, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 418)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 418)).add_operation (GGS_string (" type is not comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 418)), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 418)) ;
      }
    }
    enumerator_15769.gotoNextObject () ;
  }
  const GGS_sortedListDeclarationAST temp_13 = this ;
  const GGS_sortedListDeclarationAST temp_14 = this ;
  const GGS_sortedListDeclarationAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_sortedListTypeForGeneration::init_21_infoMessage_21__21__21__21_ (GGS_string ("sorted list ").add_operation (temp_13.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 423)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_14.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 424)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_15.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 425)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 425)), var_typedAttributeList_14946, var_sortDescriptorList_15713, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 422)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedListTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                     GGS_string & outArgument_outHeader,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedListTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_17972 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 458)) ;
  const GGS_sortedListTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_elementTypeDefinition_18030 = extensionGetter_definition (temp_1.readProperty_mListElementTypeIndex (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 459)) ;
  const GGS_sortedListTypeForGeneration temp_2 = this ;
  const GGS_sortedListTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, var_selfTypeDefinition_17972.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 462)), temp_3.readProperty_mTypedAttributeList (), var_selfTypeDefinition_17972.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_17972.readProperty_typeForEnumeratedElement (), var_elementTypeDefinition_18030.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 466)) COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 460))) ;
  const GGS_sortedListTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_17972.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 470)), var_selfTypeDefinition_17972.readProperty_isConcrete (), var_selfTypeDefinition_17972.readProperty_initializerMap (), var_selfTypeDefinition_17972.readProperty_classFunctionMap (), var_selfTypeDefinition_17972.readProperty_getterMap (), var_selfTypeDefinition_17972.readProperty_setterMap (), var_selfTypeDefinition_17972.readProperty_instanceMethodMap (), var_selfTypeDefinition_17972.readProperty_classMethodMap (), var_selfTypeDefinition_17972.readProperty_readSubscriptMap (), var_selfTypeDefinition_17972.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_17972.readProperty_features (), var_selfTypeDefinition_17972.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_17972.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_17972.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 468))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 468)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedListTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                            GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_string & outArgument_outImplementation,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedListTypeForGeneration temp_0 = this ;
  UpEnumerator_typedPropertyList enumerator_19464 (temp_0.readProperty_mTypedAttributeList ()) ;
  while (enumerator_19464.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_19464.current (HERE).readProperty_typeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 494)) ;
    enumerator_19464.gotoNextObject () ;
  }
  const GGS_sortedListTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 496)) ;
  const GGS_sortedListTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 497)) ;
  const GGS_sortedListTypeForGeneration temp_3 = this ;
  GGS_unifiedTypeDefinition var_elementTypeDefinition_19684 = extensionGetter_definition (temp_3.readProperty_mListElementTypeIndex (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 498)) ;
  const GGS_sortedListTypeForGeneration temp_4 = this ;
  const GGS_sortedListTypeForGeneration temp_5 = this ;
  const GGS_sortedListTypeForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 500)), temp_5.readProperty_mTypedAttributeList (), temp_6.readProperty_mSortDescriptorList (), var_elementTypeDefinition_19684.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-sorted-list.galgas4", 503)), extensionGetter_generateCppObjectComparison (var_elementTypeDefinition_19684.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 504)) COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas4", 499))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'sortedListGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'helpers' directory

static const cRegularFileWrapper * gWrapperAllFiles_sortedListGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'helpers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_sortedListGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'helpers'

const cDirectoryWrapper gWrapperDirectory_2_sortedListGenerationTemplate (
  "helpers",
  0,
  gWrapperAllFiles_sortedListGenerationTemplate_2,
  0,
  gWrapperAllDirectories_sortedListGenerationTemplate_2
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_sortedListGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_sortedListGenerationTemplate_1 [2] = {
  & gWrapperDirectory_2_sortedListGenerationTemplate,
  nullptr
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_1_sortedListGenerationTemplate (
  "build",
  0,
  gWrapperAllFiles_sortedListGenerationTemplate_1,
  1,
  gWrapperAllDirectories_sortedListGenerationTemplate_1
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_sortedListGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_sortedListGenerationTemplate_0 [2] = {
  & gWrapperDirectory_1_sortedListGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_sortedListGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_sortedListGenerationTemplate_0,
  1,
  gWrapperAllDirectories_sortedListGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'sortedListGenerationTemplate sortedlistTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (Compiler * inCompiler,
                                                                                      const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                      const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const GGS_typedPropertyList & /* in_ATTRIBUTE_5F_LIST */,
                                                                                      const GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                      const GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                                      const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 2)).add_operation (GGS_string (" sorted list enumerator"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n//--- Constructor\n  public: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject) ;\n\n//--- Accessors\n  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }\n\n  public: inline void gotoNextObject (void) { mIndex -= 1 ; }\n") ;
  GGS_uint index_669_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_669 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_669.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_669.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 15)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_669.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 15)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n") ;
      enumerator_669.gotoNextObject () ;
      index_669_.increment () ;
    }
  }
  result.appendString ("\n//--- Current element access\n  public: class GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 19)).stringValue ()) ;
  result.appendString (" current (LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mElementArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n//--- Constructor\n  public: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject) ;\n\n//--- Accessors\n  public: inline bool hasCurrentObject (void) const { return mIndex < mElementArray.count () ; }\n\n  public: inline void gotoNextObject (void) { mIndex += 1 ; }\n\n  public: inline void rewind (void) { mIndex = 0 ; }\n") ;
  GGS_uint index_1896_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_1896 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_1896.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1896.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_1896.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n") ;
      enumerator_1896.gotoNextObject () ;
      index_1896_.increment () ;
    }
  }
  result.appendString ("\n//--- Current element access\n  public: class GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 48)).stringValue ()) ;
  result.appendString (" current (LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mElementArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 60)).add_operation (GGS_string (" sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 60)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public AC_GALGAS_root {\n//--- Private property\n  private: GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mSharedArray ;\n\n//--- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- Destructor\n  public: virtual ~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) = default ;\n\n//--- Handle copy\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = default ;\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = default ;\n\n//--- Is valid\n  public: inline bool isValid (void) const override { return mSharedArray.isAllocated () ; }\n\n//--- Drop\n  public: inline virtual void drop (void) override { mSharedArray.removeAll () ; }\n\n//--- Description\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n//--- Count\n  public: inline int32_t count (void) const { return mSharedArray.count () ; }\n \n//--- sortedElementArray\n  public : inline GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> sortedElementArray (void) const {\n    return mSharedArray ;\n  }\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'sortedListGenerationTemplate sortedlistTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (Compiler * inCompiler,
                                                                                                  const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                  const GGS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                  const GGS_sortDescriptorListForGeneration & in_SORT_5F_ATTRIBUTE_5F_LIST,
                                                                                                  const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                                  const GGS_bool & in_GENERATE_5F_COMPARISON
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 2)).add_operation (GGS_string ("' sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nstatic int32_t compareForSorting_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inLeft,\n                            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inRight) {\n  ComparisonResult result = ComparisonResult::operandEqual ;\n") ;
  GGS_uint index_577_ (0) ;
  if (in_SORT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_sortDescriptorListForGeneration enumerator_577 (in_SORT_5F_ATTRIBUTE_5F_LIST) ;
    while (enumerator_577.hasCurrentObject ()) {
      result.appendString ("  if (result == ComparisonResult::operandEqual) {\n    result = ") ;
      const GalgasBool test_0 = enumerator_577.current_mAscendingOrder (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("inLeft.mProperty_") ;
        result.appendString (enumerator_577.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (".objectCompare (inRight.mProperty_") ;
        result.appendString (enumerator_577.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (")") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("inRight.mProperty_") ;
        result.appendString (enumerator_577.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 14)).stringValue ()) ;
        result.appendString (".objectCompare (inLeft.mProperty_") ;
        result.appendString (enumerator_577.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 14)).stringValue ()) ;
        result.appendString (")") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (" ;\n  }\n") ;
      enumerator_577.gotoNextObject () ;
      index_577_.increment () ;
    }
  }
  result.appendString ("  return int32_t (result) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nmSharedArray () {\n}\n\n") ;
  const GalgasBool test_1 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n    ComparisonResult result = ComparisonResult::invalid ;\n    if (isValid () && inOperand.isValid ()) {\n      if (count () < inOperand.count ()) {\n        result = ComparisonResult::firstOperandLowerThanSecond ;\n      }else if (count () > inOperand.count ()) {\n        result = ComparisonResult::firstOperandGreaterThanSecond ;\n      }else{\n        result = ComparisonResult::operandEqual ;\n        for (int32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {\n          const GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" left = mSharedArray (i COMMA_HERE) ;\n          const GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" right = inOperand.mSharedArray (i COMMA_HERE) ;\n          result = left.objectCompare (right) ;\n        }\n      }\n    }\n    return result ;\n  }\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_uint GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GGS_uint result ;\n  if (isValid ()) {\n    result = GGS_uint (uint32_t (count ())) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusPlusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inElement.isValid ()) {\n    mSharedArray.appendObject (inElement) ;\n    mSharedArray.quickSortUsingFunction (compareForSorting_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.mSharedArray.setCapacity (16) ; // Build\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_sortedListWithValue (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_3542_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3542 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_3542.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_3542.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 82)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_3542_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 82)).stringValue ()) ;
      enumerator_3542.gotoNextObject () ;
      if (enumerator_3542.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_3542_IDX.increment () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = init (nullptr COMMA_THERE) ;\n  const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (") ;
  GGS_uint index_3896_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3896 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_3896.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_3896_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 89)).stringValue ()) ;
      enumerator_3896.gotoNextObject () ;
      if (enumerator_3896.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_3896_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  result.plusPlusAssignOperation (newElement COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_4258_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4258 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_4258.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4258.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 101)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_4258_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 101)).stringValue ()) ;
      enumerator_4258.gotoNextObject () ;
      if (enumerator_4258.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_4258_IDX.increment () ;
    }
  }
  result.appendString ("\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (") ;
  GGS_uint index_4550_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4550 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_4550.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_4550_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue ()) ;
      enumerator_4550.gotoNextObject () ;
      if (enumerator_4550.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_4550_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  plusPlusAssignOperation (newElement COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_4882_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4882 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_4882.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4882.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 119)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_4882_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 119)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_4882.gotoNextObject () ;
      index_4882_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * /* inCompiler */\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (") ;
  GGS_uint index_5188_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_5188 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_5188.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_5188_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 125)).stringValue ()) ;
      enumerator_5188.gotoNextObject () ;
      if (enumerator_5188.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_5188_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  plusPlusAssignOperation (newElement COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inSortedList,\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inSortedList.isValid ()) {\n    mSharedArray.setCapacity (mSharedArray.capacity () + inSortedList.mSharedArray.capacity ()) ;\n    for (int32_t i=0 ; i<inSortedList.count () ; i++) {\n      mSharedArray.appendObject (inSortedList.mSharedArray (i COMMA_HERE)) ;\n    }\n    mSharedArray.quickSortUsingFunction (compareForSorting_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popSmallest (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_6237_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6237 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_6237.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6237.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 150)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_6237_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 150)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_6237.gotoNextObject () ;
      index_6237_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  bool found = false ;\n  if (isValid ()) {\n    if (count () == 0) {\n      inCompiler->onTheFlyRunTimeError (\"'popSmallest' proc invoked on an empty list\" COMMA_THERE) ;\n    }else{\n") ;
  GGS_uint index_6677_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6677 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_6677.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_6677_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 160)).stringValue ()) ;
      result.appendString (" = mSharedArray (0 COMMA_HERE).mProperty_") ;
      result.appendString (enumerator_6677.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 160)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_6677.gotoNextObject () ;
      index_6677_IDX.increment () ;
    }
  }
  result.appendString ("      mSharedArray.removeObjectAtIndex (0 COMMA_HERE) ;\n      found = true ;\n    }\n  }\n  if (!found) {\n") ;
  GGS_uint index_6951_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6951 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_6951.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_6951_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 168)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_6951.gotoNextObject () ;
      index_6951_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popGreatest (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_7265_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7265 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_7265.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7265.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 177)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_7265_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 177)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_7265.gotoNextObject () ;
      index_7265_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  bool found = false ;\n  if (isValid ()) {\n    if (count () == 0) {\n      inCompiler->onTheFlyRunTimeError (\"'popGreatest' proc invoked on an empty list\" COMMA_THERE) ;\n    }else{\n") ;
  GGS_uint index_7705_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7705 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_7705.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_7705_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 187)).stringValue ()) ;
      result.appendString (" = mSharedArray.lastObject (HERE).mProperty_") ;
      result.appendString (enumerator_7705.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 187)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_7705.gotoNextObject () ;
      index_7705_IDX.increment () ;
    }
  }
  result.appendString ("      mSharedArray.removeLastObject (HERE) ;\n      found = true ;\n    }\n  }\n  if (!found) {\n") ;
  GGS_uint index_7971_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7971 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_7971.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_7971_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 195)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_7971.gotoNextObject () ;
      index_7971_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_smallest (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_8282_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8282 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_8282.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_8282.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 204)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_8282_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 204)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_8282.gotoNextObject () ;
      index_8282_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  bool found = false ;\n  if (isValid ()) {\n    if (count () == 0) {\n      inCompiler->onTheFlyRunTimeError (\"'smallest' proc invoked on an empty list\" COMMA_THERE) ;\n    }else{\n") ;
  GGS_uint index_8715_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8715 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_8715.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_8715_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 214)).stringValue ()) ;
      result.appendString (" = mSharedArray (0 COMMA_HERE).mProperty_") ;
      result.appendString (enumerator_8715.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 214)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_8715.gotoNextObject () ;
      index_8715_IDX.increment () ;
    }
  }
  result.appendString ("      found = true ;\n    }\n  }\n  if (!found) {\n") ;
  GGS_uint index_8933_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8933 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_8933.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_8933_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 221)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_8933.gotoNextObject () ;
      index_8933_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_greatest (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_9221_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_9221 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_9221.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_9221.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 230)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_9221_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 230)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_9221.gotoNextObject () ;
      index_9221_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  bool found = false ;\n  if (isValid ()) {\n    if (count () == 0) {\n      inCompiler->onTheFlyRunTimeError (\"'greatest' proc invoked on an empty list\" COMMA_THERE) ;\n    }else{\n") ;
  GGS_uint index_9654_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_9654 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_9654.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_9654_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 240)).stringValue ()) ;
      result.appendString (" = mSharedArray.lastObject (HERE).mProperty_") ;
      result.appendString (enumerator_9654.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 240)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_9654.gotoNextObject () ;
      index_9654_IDX.increment () ;
    }
  }
  result.appendString ("      found = true ;\n    }\n  }\n  if (!found) {\n") ;
  GGS_uint index_9875_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_9875 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_9875.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_9875_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 247)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_9875.gotoNextObject () ;
      index_9875_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString,\n                                          const int32_t /* inIndentation */) const {\n  ioString.appendCString (\" (\") ;\n  ioString.appendSigned (count ()) ;\n  ioString.appendCString (\" object\") ;\n  ioString.appendString ((count () > 1) \? \"s\" : \"\") ;\n  ioString.appendCString (\")>\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n// Down Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nDownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject) :\nmElementArray (inEnumeratedObject.sortedElementArray ()),\nmIndex (0) {\n  mIndex = mElementArray.count () - 1 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mElementArray (mIndex COMMA_THERE) ;\n}\n\n") ;
  GGS_uint index_11193_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_11193 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_11193.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_11193.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 281)).stringValue ()) ;
      result.appendString (" DownEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_11193.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 281)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  return mElementArray (mIndex COMMA_THERE).mProperty_") ;
      result.appendString (enumerator_11193.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 282)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_11193.gotoNextObject () ;
      index_11193_IDX.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n// Up Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nUpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject) :\nmElementArray (inEnumeratedObject.sortedElementArray ()),\nmIndex (0) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mElementArray (mIndex COMMA_THERE) ;\n}\n\n") ;
  GGS_uint index_12351_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_12351 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_12351.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_12351.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 302)).stringValue ()) ;
      result.appendString (" UpEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_12351.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 302)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  return mElementArray (mIndex COMMA_THERE).mProperty_") ;
      result.appendString (enumerator_12351.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 303)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_12351.gotoNextObject () ;
      index_12351_IDX.increment () ;
    }
  }
  result.appendString ("\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externTypeDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                    GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                    GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                    GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                    GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                    GGS_semanticDeclarationListAST & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externTypeDeclarationAST temp_0 = this ;
  const GGS_externTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_key_15081 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 379)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_externTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_15081, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 380)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@externTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_externTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_externTypeDeclarationAST temp_0 = this ;
  result_result = GGS_string ("extern @").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 386)) ;
//---
  return result_result ;
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
  GGS_getterMap var_getterMap_16130 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_16130, inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 400)) ;
  }
  GGS_setterMap var_setterMap_16212 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_16255 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_16324 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  const GGS_externTypeDeclarationAST temp_0 = this ;
  UpEnumerator_externTypeConstructorList enumerator_16373 (temp_0.readProperty_externTypeInitializerList ()) ;
  while (enumerator_16373.hasCurrentObject ()) {
    GGS_functionSignature var_arguments_16524 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_typeNameFormalParameterNameList enumerator_16575 (enumerator_16373.current (HERE).readProperty_mParameterList ()) ;
    while (enumerator_16575.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentTypeEntry_16665 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16575.current (HERE).readProperty_mFormalParameterTypeName (), var_argumentTypeEntry_16665, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 411)) ;
      }
      var_arguments_16524.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (enumerator_16575.current (HERE).readProperty_mFormalSelector (), var_argumentTypeEntry_16665, enumerator_16575.current (HERE).readProperty_mFormalParameterName ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 412)) ;
      enumerator_16575.gotoNextObject () ;
    }
    const GGS_externTypeDeclarationAST temp_1 = this ;
    GGS_lstring var_initializerName_16829 = GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (enumerator_16373.current (HERE).readProperty_mParameterList (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 415)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    var_initializerMap_16324.setter_insertKey (var_initializerName_16829, var_arguments_16524, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 416)) ;
    }
    enumerator_16373.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_2 = this ;
  UpEnumerator_externTypeGetterList enumerator_17038 (temp_2.readProperty_mExternTypeGetterList ()) ;
  while (enumerator_17038.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_returnedTypeEntry_17122 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17038.current (HERE).readProperty_mResultTypeName (), var_returnedTypeEntry_17122, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 420)) ;
    }
    GGS_functionSignature var_arguments_17180 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_typeNameFormalParameterNameList enumerator_17227 (enumerator_17038.current (HERE).readProperty_mParameterList ()) ;
    while (enumerator_17227.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentTypeEntry_17317 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17227.current (HERE).readProperty_mFormalParameterTypeName (), var_argumentTypeEntry_17317, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 424)) ;
      }
      var_arguments_17180.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (enumerator_17227.current (HERE).readProperty_mFormalSelector (), var_argumentTypeEntry_17317, enumerator_17227.current (HERE).readProperty_mFormalParameterName ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 425)) ;
      enumerator_17227.gotoNextObject () ;
    }
    {
    var_getterMap_16130.setter_insertKey (enumerator_17038.current (HERE).readProperty_mGetterName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas4", 430)), var_arguments_17180, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 432)), GGS_bool (true), var_returnedTypeEntry_17122, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas4", 435)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 428)) ;
    }
    enumerator_17038.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_3 = this ;
  UpEnumerator_externTypeSetterList enumerator_17844 (temp_3.readProperty_mExternTypeSetterList ()) ;
  while (enumerator_17844.hasCurrentObject ()) {
    GGS_formalParameterSignature var_routineSignature_17905 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalParameterListAST enumerator_17959 (enumerator_17844.current (HERE).readProperty_mFormalParameterList ()) ;
    while (enumerator_17959.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_parameterTypeIndex_18096 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17959.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_18096, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 443)) ;
      }
      var_routineSignature_17905.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_17959.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_18096, enumerator_17959.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_17959.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 447)) ;
      enumerator_17959.gotoNextObject () ;
    }
    {
    var_setterMap_16212.setter_insertKey (enumerator_17844.current (HERE).readProperty_mSetterName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas4", 452)), var_routineSignature_17905, GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas4", 455)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 450)) ;
    }
    enumerator_17844.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_4 = this ;
  UpEnumerator_externTypeMethodList enumerator_18596 (temp_4.readProperty_mExternTypeMethodList ()) ;
  while (enumerator_18596.hasCurrentObject ()) {
    GGS_formalParameterSignature var_routineSignature_18631 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalParameterListAST enumerator_18710 (enumerator_18596.current (HERE).readProperty_mFormalParameterList ()) ;
    while (enumerator_18710.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_parameterTypeIndex_18826 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18710.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_18826, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 463)) ;
      }
      var_routineSignature_18631.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (enumerator_18710.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_18826, enumerator_18710.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_18710.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 467)) ;
      enumerator_18710.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_16255.setter_insertKey (enumerator_18596.current (HERE).readProperty_mMethodName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas4", 472)), var_routineSignature_18631, enumerator_18596.current (HERE).readProperty_mDeclarationLocation (), GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas4", 476)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 470)) ;
    }
    enumerator_18596.gotoNextObject () ;
  }
  GGS_typeFeatures var_features_19340 = GGS_typeFeatures::init (inCompiler COMMA_HERE) ;
  {
  const GGS_externTypeDeclarationAST temp_5 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_5.readProperty_mExternTypeName (), var_features_19340, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 481)) ;
  }
  const GGS_externTypeDeclarationAST temp_6 = this ;
  const GGS_externTypeDeclarationAST temp_7 = this ;
  const GGS_externTypeDeclarationAST temp_8 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_19595 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_6.readProperty_mExternTypeName (), temp_7.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas4", 494)), GGS_typeKindEnum::class_func_externType (SOURCE_FILE ("declaration-type-extern.galgas4", 495)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_16324, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_16130, var_setterMap_16212, var_instanceMethodMap_16255, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas4", 506)), GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_19340, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas4", 512)), GGS_string ("externtype-").add_operation (temp_8.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-extern.galgas4", 513)), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 513)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-extern.galgas4", 514)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_19595.readProperty_typeName (), var_typeDefinition_19595, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 516)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externTypeDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                             const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                             GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externTypeDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_21383 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 537)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_21383, var_nameForUsefulness_21383, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 538)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_externTypeDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_nameForUsefulness_21383, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 540)) ;
    }
  }
  const GGS_externTypeDeclarationAST temp_3 = this ;
  UpEnumerator_externTypeConstructorList enumerator_21664 (temp_3.readProperty_externTypeInitializerList ()) ;
  while (enumerator_21664.hasCurrentObject ()) {
    const GGS_externTypeDeclarationAST temp_4 = this ;
    GGS_lstring var_initializerNameForUsefulness_21701 = function_initializerNameForUsefulEntitiesGraph (temp_4.readProperty_mExternTypeName (), extensionGetter_initializerSignature (enumerator_21664.current (HERE).readProperty_mParameterList (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 546)), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 544)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_21701, var_initializerNameForUsefulness_21701, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 548)) ;
    }
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_21701, var_nameForUsefulness_21383 COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 549)) ;
    }
    enumerator_21664.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_5 = this ;
  const GGS_externTypeDeclarationAST temp_6 = this ;
  const GGS_externTypeDeclarationAST temp_7 = this ;
  const GGS_externTypeDeclarationAST temp_8 = this ;
  const GGS_externTypeDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_externTypeDeclarationForGeneration::init_21_infoMessage_21__21__21__21_ (GGS_string ("extern type ").add_operation (temp_5.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 553)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_6.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 554)), temp_7.readProperty_mExternTypeName ().readProperty_string (), temp_8.readProperty_mCppPreDeclarationCode (), temp_9.readProperty_mCppClassCode (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 552)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externTypeDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                            GGS_string & outArgument_outHeader,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externTypeDeclarationForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_23021 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 576)) ;
  const GGS_externTypeDeclarationForGeneration temp_1 = this ;
  const GGS_externTypeDeclarationForGeneration temp_2 = this ;
  const GGS_externTypeDeclarationForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, var_selfTypeDefinition_23021.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 579)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode () COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 577))) ;
  const GGS_externTypeDeclarationForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_23021.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 585)), var_selfTypeDefinition_23021.readProperty_isConcrete (), var_selfTypeDefinition_23021.readProperty_initializerMap (), var_selfTypeDefinition_23021.readProperty_classFunctionMap (), var_selfTypeDefinition_23021.readProperty_getterMap (), var_selfTypeDefinition_23021.readProperty_setterMap (), var_selfTypeDefinition_23021.readProperty_instanceMethodMap (), var_selfTypeDefinition_23021.readProperty_classMethodMap (), var_selfTypeDefinition_23021.readProperty_readSubscriptMap (), var_selfTypeDefinition_23021.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_23021.readProperty_features (), var_selfTypeDefinition_23021.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_23021.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_23021.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 583))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 583)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringsetPredefinedTypeAST supportsCollectionValue'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_stringsetPredefinedTypeAST::getter_supportsCollectionValue (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringsetPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_ cPtr_stringsetPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterListAST_5D_ result_result ; // Returned variable
  GGS__5B_formalInputParameterListAST_5D_ temp_0 = GGS__5B_formalInputParameterListAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 36)) ;
  temp_0.plusPlusAssignOperation (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 36)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringsetPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_stringsetPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 42))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringsetPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_stringsetPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 48)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 49)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 48)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 49)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 49)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 50)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 49)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 50)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 50)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 51)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 50)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 51)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 51)).operator_or (GGS_typeFeatures::class_func_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 52)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 51)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringsetPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("emptySet"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 60)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setWithString"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 67)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setWithStringList"), GGS_string ("stringlist"), GGS_string ("inStringList"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 76)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setWithLStringList"), GGS_string ("lstringlist"), GGS_string ("inLStringList"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 85)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringsetPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_setterMap & outArgument_outSetterMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringType_3971 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringType_3971, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 100)) ;
  }
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  outArgument_outSetterMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeKey"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 103)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 104)), GGS_formalParameterSignature::class_func_listWithValue (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 105)), var_stringType_3971, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 105)), GGS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 105)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 107)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 102)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inValue"), GGS_string ("insert"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 110)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringsetPredefinedTypeAST getEnumerationList'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getEnumerationList (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GGS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                 GGS_string & outArgument_outEnumeratedType,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringTypeIndex_4893 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringTypeIndex_4893, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 125)) ;
  }
  outArgument_outEnumerationList = GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  outArgument_outEnumerationList.plusPlusAssignOperation (GGS_enumerationDescriptorList_2E_element::init_21__21_ (var_stringTypeIndex_4893, GGS_string ("key"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 127)) ;
  outArgument_outEnumeratedType = GGS_string ("string") ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringsetPredefinedTypeAST getAddAssignArgumentList'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getAddAssignArgumentList (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GGS_functionSignature & outArgument_outAddAssignArgumentList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringTypeIndex_5385 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("stringset"), var_stringTypeIndex_5385, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 135)) ;
  }
  GGS_functionSignature temp_0 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 136)) ;
  temp_0.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 136)), var_stringTypeIndex_5385, GGS_string ("inString"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 136)) ;
  outArgument_outAddAssignArgumentList = temp_0 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringsetPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 143)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hasKey"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 144)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 151)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("anyString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 159)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringList"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 167)) ;
  }
}

#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "builtin-command-line-options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "LexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//                      print_tool_help_message                                                  
//--------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  gCout.appendCString ("Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n") ;
}

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "galgas4",
  "galgasTemplate",
  "galgas4project",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a GALGAS 4 source file",
  "a GALGAS Template source file",
  "a GALGAS project source file",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "4.0.0" ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//--------------------------------------------------------------------------------------------------

static void routine_before (Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GGS_string var_creationProjectName_1418 = GGS_string (gOption_galgas_5F_cli_5F_options_create_5F_project.readProperty_value ()) ;
    {
    routine_projectCreation_3F_ (var_creationProjectName_1418, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 27)) ;
    }
  }
  {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions.readProperty_value ()).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_printPredefinedLexicalActions (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 34)) ;
        }
      }
    }
  }
  {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, GGS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        routine_updateLIBPMatPath_3F_ (GGS_string (gOption_galgas_5F_cli_5F_options_extractLIBPMOption.readProperty_value ()), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 42)) ;
        }
      }
    }
  }
  {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (gOption_galgas_5F_cli_5F_options_check_5F_big_5F_int.readProperty_value ()).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        {
        routine_checkBigInteger (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 52)) ;
        }
      }
    }
  }
  {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions.readProperty_value ()).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        {
        routine_displayUnicodeLexicalTestFunctions (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 62)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//--------------------------------------------------------------------------------------------------

static void routine_after (Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_parentDirectory_3040 = constinArgument_inSourceFile.readProperty_string ().getter_deletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas4", 76)).getter_deletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas4", 76)) ;
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 77)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("galgas4project"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 77)) ;
  GGS_stringlist var_candidateProjectFiles_3136 = var_parentDirectory_3040.getter_regularFilesWithExtensions (GGS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas4", 77)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_candidateProjectFiles_3136.getter_count (SOURCE_FILE ("galgasProgram.galgas4", 78)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GGS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 79)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, var_candidateProjectFiles_3136.getter_count (SOURCE_FILE ("galgasProgram.galgas4", 80)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string var_s_3422 = GGS_string ("several project files in source file parent directory:") ;
        UpEnumerator_stringlist enumerator_3492 (var_candidateProjectFiles_3136) ;
        while (enumerator_3492.hasCurrentObject ()) {
          var_s_3422.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_3492.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 83)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 83)) ;
          enumerator_3492.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_3422, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 85)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_string var_projectFilePath_3609 = var_parentDirectory_3040.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 87)).add_operation (var_candidateProjectFiles_3136.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 87)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 87)) ;
      {
      routine_parseAndAnalyzeProject_3F__3F_ (GGS_lstring::init_21__21_ (var_projectFilePath_3609, constinArgument_inSourceFile.readProperty_location (), inCompiler COMMA_HERE), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 88)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_1'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__31_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionListAST joker_4183 ; // Joker input parameter
  cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, joker_4183  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 102)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_2'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__32_ (const GGS_lstring constinArgument_inProjectSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_parseAndAnalyzeProject_3F__3F_ (constinArgument_inProjectSourceFile, GGS_string::makeEmptyString (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 115)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//--------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  GenericUniqueArray <String> sourceFilesArray ;
  analyzeCommandLineOptions (inArgc, inArgv,
                             sourceFilesArray,
                             kSourceFileExtensions,
                             kSourceFileHelpMessages,
                             print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    gCout.appendString (executionModeOptionErrorMessage) ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    Compiler * commonCompiler = nullptr ;
    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      LexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GGS_location location = commonCompiler->here () ;
        const GGS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "galgas4") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_galgas_34_Grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_galgas_34_Grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_galgas_34_Grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_galgas_34_Grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "galgasTemplate") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__31_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_templateGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_templateGrammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_templateGrammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_templateGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "galgas4project") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__32_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_galgas_34_ProjectGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_galgas_34_ProjectGrammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_galgas_34_ProjectGrammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_galgas_34_ProjectGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString ()) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != "") {
        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        String message ;
        if (totalWarningCount () == 0) {
          message.appendCString ("No warning") ;
        }else if (totalWarningCount () == 1) {
          message.appendCString ("1 warning") ;
        }else{
          message.appendSigned (totalWarningCount ()) ;
          message.appendCString (" warnings") ;
        }
        message.appendCString (", ") ;
        if (totalErrorCount () == 0) {
          message.appendCString ("no error") ;
        }else if (totalErrorCount () == 1) {
          message.appendCString ("1 error") ;
        }else{
          message.appendSigned (totalErrorCount ()) ;
          message.appendCString (" errors") ;
        }
        message.appendCString (".\n") ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std::exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}

