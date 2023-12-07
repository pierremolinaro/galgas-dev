#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                        const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                        const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_arrayDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_9049 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 244)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9049, var_nameForUsefulness_9049, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 245)) ;
  }
  const GALGAS_arrayDeclarationAST temp_1 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_9203 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mElementTypeName (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 246)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9049, var_elementTypeNameForUsefulness_9203 COMMA_SOURCE_FILE ("type-array.galgas", 247)) ;
  }
  const GALGAS_arrayDeclarationAST temp_2 = this ;
  const GALGAS_arrayDeclarationAST temp_3 = this ;
  const GALGAS_arrayDeclarationAST temp_4 = this ;
  const GALGAS_arrayDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array ").add_operation (temp_2.readProperty_mArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 250)), GALGAS_arrayTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_3.readProperty_mArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 252)), extensionGetter_searchKey (ioArgument_ioTypeMap, temp_4.readProperty_mElementTypeName (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 253)), temp_5.readProperty_mDimension ().readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 254))  COMMA_SOURCE_FILE ("type-array.galgas", 251))  COMMA_SOURCE_FILE ("type-array.galgas", 249)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                GALGAS_string & outArgument_outHeader,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_arrayTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_10322 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 272)) ;
  const GALGAS_arrayTypeForGeneration temp_1 = this ;
  const GALGAS_arrayTypeForGeneration temp_2 = this ;
  const GALGAS_arrayTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, var_selfTypeDefinition_10322.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 275)), extensionGetter_identifierRepresentation (temp_2.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 276)), temp_3.readProperty_mDimension () COMMA_SOURCE_FILE ("type-array.galgas", 273))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_10322.readProperty_mTypeName ().readProperty_string (), var_selfTypeDefinition_10322.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-array.galgas", 281)), var_selfTypeDefinition_10322.readProperty_mIsConcrete (), var_selfTypeDefinition_10322.readProperty_mConstructorMap (), var_selfTypeDefinition_10322.readProperty_mGetterMap (), var_selfTypeDefinition_10322.readProperty_mSetterMap (), var_selfTypeDefinition_10322.readProperty_mInstanceMethodMap (), var_selfTypeDefinition_10322.readProperty_mClassMethodMap (), var_selfTypeDefinition_10322.readProperty_mOptionalMethodMap (), var_selfTypeDefinition_10322.readProperty_mEnumerationDescriptor (), var_selfTypeDefinition_10322.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_10322.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_10322.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-array.galgas", 279))), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 279)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_string & outArgument_outImplementation,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_arrayTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_11573 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 302)) ;
  const GALGAS_arrayTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 303)) ;
  const GALGAS_arrayTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 304)) ;
  GALGAS_stringlist var_suffixList_11755 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 306)) ;
  GALGAS_uint var_idx_11795 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_arrayTypeForGeneration temp_3 = this ;
  if (temp_3.readProperty_mDimension ().isValid ()) {
    uint32_t variant_11805 = temp_3.readProperty_mDimension ().uintValue () ;
    bool loop_11805 = true ;
    while (loop_11805) {
      const GALGAS_arrayTypeForGeneration temp_4 = this ;
      loop_11805 = GALGAS_bool (kIsStrictInf, var_idx_11795.objectCompare (temp_4.readProperty_mDimension ())).isValid () ;
      if (loop_11805) {
        loop_11805 = GALGAS_bool (kIsStrictInf, var_idx_11795.objectCompare (temp_4.readProperty_mDimension ())).boolValue () ;
      }
      if (loop_11805 && (0 == variant_11805)) {
        loop_11805 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 308)) ;
      }
      if (loop_11805) {
        variant_11805 -- ;
        var_suffixList_11755.addAssign_operation (var_idx_11795.getter_string (SOURCE_FILE ("type-array.galgas", 309))  COMMA_SOURCE_FILE ("type-array.galgas", 309)) ;
        var_idx_11795.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 310)) ;
      }
    }
  }
  const GALGAS_arrayTypeForGeneration temp_5 = this ;
  const GALGAS_arrayTypeForGeneration temp_6 = this ;
  const GALGAS_arrayTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_11573.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 314)), extensionGetter_identifierRepresentation (temp_6.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 315)), temp_7.readProperty_mDimension (), var_suffixList_11755 COMMA_SOURCE_FILE ("type-array.galgas", 312))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                 GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                 GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                 GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  const GALGAS_boolsetDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3153 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 82)), temp_1.readProperty_mBoolsetTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 82)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3153, temp_2, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 83)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolsetDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_boolsetDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("boolset @").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 91)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForBoolset'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForBoolset (C_Compiler *
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-boolset.galgas", 99)) ;
  result_result.addAssign_operation (GALGAS_string ("all")  COMMA_SOURCE_FILE ("type-boolset.galgas", 100)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-boolset.galgas", 101)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-boolset.galgas", 102)) ;
  result_result.addAssign_operation (GALGAS_string ("none")  COMMA_SOURCE_FILE ("type-boolset.galgas", 103)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-boolset.galgas", 104)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForBoolset = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForBoolset ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset function_forbiddenKeysForBoolset (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForBoolset) {
    gOnceFunctionResult_forbiddenKeysForBoolset = onceFunction_forbiddenKeysForBoolset (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForBoolset = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForBoolset ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_forbiddenKeysForBoolset (void) {
  gOnceFunctionResult_forbiddenKeysForBoolset.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForBoolset (nullptr,
                                                                     releaseOnceFunctionResult_forbiddenKeysForBoolset) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForBoolset [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_forbiddenKeysForBoolset (C_Compiler * inCompiler,
                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForBoolset (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForBoolset ("forbiddenKeysForBoolset",
                                                                         functionWithGenericHeader_forbiddenKeysForBoolset,
                                                                         & kTypeDescriptor_GALGAS_stringset,
                                                                         0,
                                                                         functionArgs_forbiddenKeysForBoolset) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_slotNameSet_4778 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-boolset.galgas", 117)) ;
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_4802 (temp_0.readProperty_mFlagList (), kENUMERATION_UP) ;
  while (enumerator_4802.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 119)).getter_hasKey (enumerator_4802.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 119)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_m_4916 = GALGAS_string ("a slot cannot be named:") ;
        cEnumerator_stringset enumerator_4986 (function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 121)), kENUMERATION_UP) ;
        while (enumerator_4986.hasCurrentObject ()) {
          var_m_4916.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_4986.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 122)) ;
          enumerator_4986.gotoNextObject () ;
        }
        var_m_4916.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 124)) ;
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4802.current_mValue (HERE).readProperty_location (), var_m_4916, fixItArray2  COMMA_SOURCE_FILE ("type-boolset.galgas", 125)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_slotNameSet_4778.getter_hasKey (enumerator_4802.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 126)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_4802.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated slot name"), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 127)) ;
        }
      }
    }
    var_slotNameSet_4778.addAssign_operation (enumerator_4802.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 129)) ;
    enumerator_4802.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_boolsetTypeIndex_5301 ;
  {
  const GALGAS_boolsetDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_5.readProperty_mBoolsetTypeName (), var_boolsetTypeIndex_5301, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 132)) ;
  }
  GALGAS_getterMap var_getterMap_5409 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_5409, inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 134)) ;
  }
  GALGAS_constructorMap var_constructorMap_5442 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 135)) ;
  {
  var_constructorMap_5442.setter_insertKey (GALGAS_string ("none").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 136)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 136)), GALGAS_bool (false), var_boolsetTypeIndex_5301, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 136)) ;
  }
  {
  var_constructorMap_5442.setter_insertKey (GALGAS_string ("all").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 137)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 137)), GALGAS_bool (false), var_boolsetTypeIndex_5301, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 137)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5409, ioArgument_ioTypeMap, GALGAS_string ("none"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 138)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5409, ioArgument_ioTypeMap, GALGAS_string ("all"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 146)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = this ;
  cEnumerator_lstringlist enumerator_5989 (temp_6.readProperty_mFlagList (), kENUMERATION_UP) ;
  while (enumerator_5989.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_constructorMap_5442.getter_hasKey (enumerator_5989.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 155)).operator_not (SOURCE_FILE ("type-boolset.galgas", 155)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        var_constructorMap_5442.setter_insertKey (enumerator_5989.current_mValue (HERE), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 156)), GALGAS_bool (false), var_boolsetTypeIndex_5301, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 156)) ;
        }
        {
        routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5409, ioArgument_ioTypeMap, enumerator_5989.current_mValue (HERE).readProperty_string (), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 157)) ;
        }
      }
    }
    enumerator_5989.gotoNextObject () ;
  }
  GALGAS_setterMap var_setterMap_6412 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 168)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6474 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 170)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_8 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mBoolsetTypeName (), GALGAS_bool (false), var_getterMap_5409, var_setterMap_6412, var_instanceMethodMap_6474, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 172)) ;
  }
  GALGAS_operators var_operators_6860 = GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("type-boolset.galgas", 186)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("type-boolset.galgas", 186)) COMMA_SOURCE_FILE ("type-boolset.galgas", 186)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("type-boolset.galgas", 186)) COMMA_SOURCE_FILE ("type-boolset.galgas", 186)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("type-boolset.galgas", 186)) COMMA_SOURCE_FILE ("type-boolset.galgas", 186)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-boolset.galgas", 187)) COMMA_SOURCE_FILE ("type-boolset.galgas", 186)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("type-boolset.galgas", 187)) COMMA_SOURCE_FILE ("type-boolset.galgas", 187)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-boolset.galgas", 187)) COMMA_SOURCE_FILE ("type-boolset.galgas", 187)) ;
  const GALGAS_boolsetDeclarationAST temp_9 = this ;
  const GALGAS_boolsetDeclarationAST temp_10 = this ;
  const GALGAS_boolsetDeclarationAST temp_11 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_7073 = GALGAS_unifiedTypeDefinition::constructor_new (temp_9.readProperty_mBoolsetTypeName (), temp_10.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-boolset.galgas", 193)), GALGAS_typeKindEnum::constructor_boolsetType (SOURCE_FILE ("type-boolset.galgas", 194)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 196)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 197)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 198)), var_constructorMap_5442, var_getterMap_5409, var_setterMap_6412, var_instanceMethodMap_6474, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 203)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 204)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 205)), var_operators_6860, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 207)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 208)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 209)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 210)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 211)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-boolset.galgas", 213)), GALGAS_string ("none"), GALGAS_string ("boolset-").add_operation (temp_11.readProperty_mBoolsetTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-boolset.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 215)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-boolset.galgas", 216))  COMMA_SOURCE_FILE ("type-boolset.galgas", 189)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_7073.readProperty_mTypeName (), var_typeDefinition_7073, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 218)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                          const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                          GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_boolsetDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mFlagList ().getter_count (SOURCE_FILE ("type-boolset.galgas", 236)).objectCompare (GALGAS_uint (uint32_t (64U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_boolsetDeclarationAST temp_2 = this ;
      GALGAS_location var_s_8585 = temp_2.readProperty_mFlagList ().getter_mValueAtIndex (GALGAS_uint (uint32_t (64U)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 237)).readProperty_location () ;
      const GALGAS_boolsetDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_8585, GALGAS_string ("max flags count is 64 (here: ").add_operation (temp_3.readProperty_mFlagList ().getter_count (SOURCE_FILE ("type-boolset.galgas", 238)).getter_string (SOURCE_FILE ("type-boolset.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 238)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 238)), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 238)) ;
    }
  }
  const GALGAS_boolsetDeclarationAST temp_5 = this ;
  GALGAS_lstring var_boolsetNameForUsefulness_8740 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 241)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_boolsetNameForUsefulness_8740, var_boolsetNameForUsefulness_8740, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 242)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = this ;
  const GALGAS_boolsetDeclarationAST temp_7 = this ;
  const GALGAS_boolsetDeclarationAST temp_8 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("boolset ").add_operation (temp_6.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 244)), GALGAS_boolsetTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_7.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 246)), temp_8.readProperty_mFlagList ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 245))  COMMA_SOURCE_FILE ("type-boolset.galgas", 243)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'structGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_structGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_structGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_structGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_structGenerationTemplate_0,
  0,
  gWrapperAllDirectories_structGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                  const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const GALGAS_lstringlist & /* in_SLOT_5F_LIST */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" boolset"), inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n//--------------------------------- Properties\n  private: uint64_t mFlags ;\n  private: bool mIsValid ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n\n//--------------------------------- Private constructor\n  private: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const uint64_t inFlags) ;\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (C_Compiler * /* inCompiler */,
                                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                              const GALGAS_lstringlist & in_SLOT_5F_LIST,
                                                                                              const GALGAS_bigint & in_FULL_5F_SET
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\nAC_GALGAS_root (),\nmFlags (0),\nmIsValid (false) {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const uint64_t inFlags) :\nAC_GALGAS_root (),\nmFlags (inFlags),\nmIsValid (true) {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_none (UNUSED_LOCATION_ARGS) {\n  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (0) ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_all (UNUSED_LOCATION_ARGS) {\n  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ((uint64_t) " ;
  result << in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 26)).stringValue () ;
  result << ") ;\n}\n\n" ;
  GALGAS_uint index_1082_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_1082 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1082.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_1082.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 32)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) {\n  return GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " (((uint64_t) 1) << " ;
      result << index_1082_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 33)).stringValue () ;
      result << ") ;\n}\n\n" ;
      index_1082_idx.increment () ;
      enumerator_1082.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n\ntypeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n   typeComparisonResult result = kOperandNotValid ;\n   if (mIsValid && inOperand.mIsValid) {\n     result = kOperandEqual ;\n     if (mFlags < inOperand.mFlags) {\n       result = kFirstOperandLowerThanSecond ;\n     }else if (mFlags > inOperand.mFlags) {\n       result = kFirstOperandGreaterThanSecond ;\n     }\n   }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nbool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n  return mIsValid ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_or (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand\n                                      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags | inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_and (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand\n                                      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags & inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_xor (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand\n                                      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags ^ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::substract_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand,\n                 " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n                 " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags & ~ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_tilde (UNUSED_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  if (mIsValid) {\n    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (((uint64_t) " ;
  result << in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 108)).stringValue () ;
  result << ") ^ mFlags) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (" ;
  columnMarker = result.currentColumn () ;
  result << "C_String & ioString,\n                              " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t /* inIndentation */) const {\n  ioString << \"<boolset @" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << ":\" ;\n  if (! isValid ()) {\n    ioString << \" not built\" ;\n  }else{\n" ;
  GALGAS_uint index_4969_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_4969 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4969.hasCurrentObject ()) {
      result << "    if ((mFlags & ((uint64_t) 1) << " ;
      result << index_4969_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 123)).stringValue () ;
      result << ") != 0) {\n      ioString << \" " ;
      result << enumerator_4969.current_mValue (HERE).readProperty_string ().stringValue () ;
      result << "\" ;\n    }\n" ;
      index_4969_idx.increment () ;
      enumerator_4969.gotoNextObject () ;
    }
  }
  result << "  }\n  ioString << \">\" ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_none (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool (mFlags == 0) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_all (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool (mFlags == (uint64_t) " ;
  result << in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 146)).stringValue () ;
  result << ") ;\n  }\n  return result ;\n}\n\n" ;
  GALGAS_uint index_5819_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_5819 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5819.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_5819.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 153)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << " ;
      result << index_5819_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 156)).stringValue () ;
      result << ") != 0) ;\n  }\n  return result ;\n}\n\n" ;
      index_5819_idx.increment () ;
      enumerator_5819.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                  GALGAS_string & outArgument_outHeader,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_10300 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 282)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (inCompiler, var_typedefinition_10300.readProperty_mTypeName ().readProperty_string (), var_typedefinition_10300.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-boolset.galgas", 285)), temp_1.readProperty_mFlagList () COMMA_SOURCE_FILE ("type-boolset.galgas", 283))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typedefinition_10300.readProperty_mTypeName ().readProperty_string (), var_typedefinition_10300.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-boolset.galgas", 290)), var_typedefinition_10300.readProperty_mIsConcrete (), var_typedefinition_10300.readProperty_mConstructorMap (), var_typedefinition_10300.readProperty_mGetterMap (), var_typedefinition_10300.readProperty_mSetterMap (), var_typedefinition_10300.readProperty_mInstanceMethodMap (), var_typedefinition_10300.readProperty_mClassMethodMap (), var_typedefinition_10300.readProperty_mOptionalMethodMap (), var_typedefinition_10300.readProperty_mEnumerationDescriptor (), var_typedefinition_10300.readProperty_mHandledOperatorFlags (), var_typedefinition_10300.readProperty_mAddAssignOperatorArguments (), var_typedefinition_10300.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-boolset.galgas", 288))), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 288)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outImplementation,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 312)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  const GALGAS_boolsetTypeForGeneration temp_2 = this ;
  const GALGAS_boolsetTypeForGeneration temp_3 = this ;
  const GALGAS_boolsetTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (inCompiler, extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 314)).readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 315)), temp_3.readProperty_mFlagList (), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 317)).left_shift_operation (temp_4.readProperty_mFlagList ().getter_count (SOURCE_FILE ("type-boolset.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 317)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 317)) COMMA_SOURCE_FILE ("type-boolset.galgas", 313))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Function 'weakSuffix'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_weakSuffix (C_Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("-weak") ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_weakSuffix [1] = {
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_weakSuffix (C_Compiler * inCompiler,
                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                           const GALGAS_location & /* inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  return function_weakSuffix (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_weakSuffix ("weakSuffix",
                                                            functionWithGenericHeader_weakSuffix,
                                                            & kTypeDescriptor_GALGAS_string,
                                                            0,
                                                            functionArgs_weakSuffix) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@classDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_classDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_classDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("valueclass @").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 171)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classDeclarationAST temp_0 = this ;
  const GALGAS_classDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_6472 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 182)), temp_1.readProperty_mClassTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 182)) ;
  {
  const GALGAS_classDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6472, temp_2, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 183)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_classDeclarationAST temp_4 = this ;
    test_3 = GALGAS_bool (kIsNotEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_classDeclarationAST temp_5 = this ;
      const GALGAS_classDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6472, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 188)), temp_6.readProperty_mSuperClassName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 188)) COMMA_SOURCE_FILE ("type-class.galgas", 186)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_7 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_6902 (temp_7.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_6902.hasCurrentObject ()) {
    {
    const GALGAS_classDeclarationAST temp_8 = this ;
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6472, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_6902.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 195)), temp_8.readProperty_mSuperClassName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 195)) COMMA_SOURCE_FILE ("type-class.galgas", 193)) ;
    }
    enumerator_6902.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_getterMap var_getterMap_7790 ;
  GALGAS_setterMap var_setterMap_7819 ;
  GALGAS_instanceMethodMap var_instanceMethodMap_7856 ;
  GALGAS_typedPropertyList var_inheritedTypedPropertyList_7901 ;
  GALGAS_propertyMap var_attributeMap_7949 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 212)) ;
  GALGAS_unifiedTypeMapEntry var_superClassIndex_8022 ;
  GALGAS_bool var_generateHeaderInSeparateFile_8052 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_8022 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 217)) ;
      {
      routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_7790, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 218)) ;
      }
      var_setterMap_7819 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 219)) ;
      var_instanceMethodMap_7856 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 220)) ;
      var_inheritedTypedPropertyList_7901 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 221)) ;
      var_attributeMap_7949 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 222)) ;
      const GALGAS_classDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_8052 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_classDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperClassName (), var_superClassIndex_8022, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 230)) ;
    }
    GALGAS_unifiedTypeDefinition var_superTypeDefinition_8727 ;
    const GALGAS_classDeclarationAST temp_4 = this ;
    extensionMethod_searchType (ioArgument_ioTypeMap, temp_4.readProperty_mSuperClassName (), var_superTypeDefinition_8727, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 231)) ;
    var_inheritedTypedPropertyList_7901 = var_superTypeDefinition_8727.readProperty_mAllTypedPropertyList () ;
    var_attributeMap_7949 = var_superTypeDefinition_8727.readProperty_mPropertyMap () ;
    var_generateHeaderInSeparateFile_8052 = var_superTypeDefinition_8727.readProperty_mGenerateHeaderInSeparateFile () ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_superTypeDefinition_8727.readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("type-class.galgas", 236)).operator_not (SOURCE_FILE ("type-class.galgas", 236)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_classDeclarationAST temp_6 = this ;
        const GALGAS_classDeclarationAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mSuperClassName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_7.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 237)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 237)), fixItArray8  COMMA_SOURCE_FILE ("type-class.galgas", 237)) ;
      }
    }
    var_setterMap_7819 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 240)) ;
    cEnumerator_setterMap enumerator_9267 (var_superTypeDefinition_8727.readProperty_mSetterMap (), kENUMERATION_UP) ;
    while (enumerator_9267.hasCurrentObject ()) {
      {
      var_setterMap_7819.setter_insertKey (enumerator_9267.current_lkey (HERE), enumerator_9267.current_mKind (HERE), enumerator_9267.current_mParameterList (HERE), enumerator_9267.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 247)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 242)) ;
      }
      enumerator_9267.gotoNextObject () ;
    }
    var_getterMap_7790 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 252)) ;
    cEnumerator_getterMap enumerator_9665 (var_superTypeDefinition_8727.readProperty_mGetterMap (), kENUMERATION_UP) ;
    while (enumerator_9665.hasCurrentObject ()) {
      {
      var_getterMap_7790.setter_insertKey (enumerator_9665.current_lkey (HERE), enumerator_9665.current_mKind (HERE), enumerator_9665.current_mArgumentTypeList (HERE), enumerator_9665.current_mDeclarationLocation (HERE), enumerator_9665.current_mHasCompilerArgument (HERE), enumerator_9665.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 262)), enumerator_9665.current_mGetterNameThatObsoletesInvokationName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 255)) ;
      }
      enumerator_9665.gotoNextObject () ;
    }
    var_instanceMethodMap_7856 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 267)) ;
    cEnumerator_instanceMethodMap enumerator_10138 (var_superTypeDefinition_8727.readProperty_mInstanceMethodMap (), kENUMERATION_UP) ;
    while (enumerator_10138.hasCurrentObject ()) {
      {
      var_instanceMethodMap_7856.setter_insertKey (enumerator_10138.current_lkey (HERE), enumerator_10138.current_mKind (HERE), enumerator_10138.current_mParameterList (HERE), enumerator_10138.current_mDeclarationLocation (HERE), enumerator_10138.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 276)), enumerator_10138.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 270)) ;
      }
      enumerator_10138.gotoNextObject () ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_classIndex_10547 ;
  {
  const GALGAS_classDeclarationAST temp_9 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_9.readProperty_mClassTypeName (), var_classIndex_10547, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 282)) ;
  }
  GALGAS_functionSignature var_constructorPropertyTypeList_10643 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 284)) ;
  cEnumerator_typedPropertyList enumerator_10720 (var_inheritedTypedPropertyList_7901, kENUMERATION_UP) ;
  while (enumerator_10720.hasCurrentObject ()) {
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = enumerator_10720.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_10720.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 287)) ;
    }
    var_constructorPropertyTypeList_10643.addAssign_operation (temp_10, enumerator_10720.current_mPropertyTypeEntry (HERE), enumerator_10720.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 286)) ;
    enumerator_10720.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_12 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11016 (temp_12.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_11016.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = enumerator_11016.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-class.galgas", 292)).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (enumerator_11016.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a class"), fixItArray14  COMMA_SOURCE_FILE ("type-class.galgas", 293)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_11240 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11016.current_mPropertyTypeName (HERE), var_attributeTypeIndex_11240, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 295)) ;
    }
    GALGAS_lstring temp_15 ;
    const enumGalgasBool test_16 = enumerator_11016.current_selector (HERE).boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = enumerator_11016.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_16) {
      temp_15 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 297)) ;
    }
    var_constructorPropertyTypeList_10643.addAssign_operation (temp_15, var_attributeTypeIndex_11240, enumerator_11016.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 296)) ;
    {
    var_attributeMap_7949.setter_insertKey (enumerator_11016.current_mPropertyName (HERE), extensionGetter_accessControl (enumerator_11016.current_mAccessControl (HERE), var_classIndex_10547, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 302)), enumerator_11016.current_isConstant (HERE), var_attributeTypeIndex_11240, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 300)) ;
    }
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = var_getterMap_7790.getter_hasKey (enumerator_11016.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-class.galgas", 306)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_11016.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_11016.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 307)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 307)), fixItArray18  COMMA_SOURCE_FILE ("type-class.galgas", 307)) ;
      }
    }
    enumerator_11016.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_11829 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 311)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    const GALGAS_classDeclarationAST temp_20 = this ;
    test_19 = temp_20.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 312)).boolEnum () ;
    if (kBoolTrue == test_19) {
      {
      var_constructorMap_11829.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 314))  COMMA_SOURCE_FILE ("type-class.galgas", 314)), var_constructorPropertyTypeList_10643, GALGAS_bool (false), var_classIndex_10547, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 313)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedPropertyList_12106 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 321)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList_12168 = var_inheritedTypedPropertyList_7901 ;
  const GALGAS_classDeclarationAST temp_21 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_12303 (temp_21.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12303.hasCurrentObject ()) {
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = enumerator_12303.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-class.galgas", 324)).boolEnum () ;
      if (kBoolTrue == test_22) {
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (enumerator_12303.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a class"), fixItArray23  COMMA_SOURCE_FILE ("type-class.galgas", 325)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_12527 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12303.current_mPropertyTypeName (HERE), var_attributeTypeIndex_12527, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 327)) ;
    }
    var_currentClassTypedPropertyList_12106.addAssign_operation (var_attributeTypeIndex_12527, enumerator_12303.current_mPropertyName (HERE), enumerator_12303.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 328)), enumerator_12303.current_selector (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 328)) ;
    var_allTypedAttributeList_12168.addAssign_operation (var_attributeTypeIndex_12527, enumerator_12303.current_mPropertyName (HERE), enumerator_12303.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 329)), enumerator_12303.current_selector (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 329)) ;
    enumerator_12303.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_12884 (var_currentClassTypedPropertyList_12106, kENUMERATION_UP) ;
  while (enumerator_12884.hasCurrentObject ()) {
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      test_24 = enumerator_12884.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_24) {
        {
        GALGAS_formalParameterSignature temp_25 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 337)) ;
        temp_25.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 337)), enumerator_12884.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-class.galgas", 337)), enumerator_12884.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 337)) ;
        var_setterMap_7819.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_12884.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-class.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 335)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 335))  COMMA_SOURCE_FILE ("type-class.galgas", 335)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 336)), temp_25, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-class.galgas", 339)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 334)) ;
        }
      }
    }
    enumerator_12884.gotoNextObject () ;
  }
  {
  const GALGAS_classDeclarationAST temp_26 = this ;
  const GALGAS_classDeclarationAST temp_27 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_26.readProperty_mClassTypeName (), GALGAS_bool (true), var_getterMap_7790, var_setterMap_7819, var_instanceMethodMap_7856, temp_27.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 345)) ;
  }
  const GALGAS_classDeclarationAST temp_28 = this ;
  GALGAS_string temp_29 ;
  const enumGalgasBool test_30 = temp_28.readProperty_mIsAbstract ().boolEnum () ;
  if (kBoolTrue == test_30) {
    temp_29 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_30) {
    temp_29 = GALGAS_string ("default") ;
  }
  GALGAS_string var_defaultConstructorName_13818 = temp_29 ;
  cEnumerator_typedPropertyList enumerator_13918 (var_allTypedAttributeList_12168, kENUMERATION_UP) ;
  bool bool_31 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_13818.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_13918.hasCurrentObject () && bool_31) {
    while (enumerator_13918.hasCurrentObject () && bool_31) {
      enumGalgasBool test_32 = kBoolTrue ;
      if (kBoolTrue == test_32) {
        test_32 = GALGAS_bool (kIsEqual, extensionGetter_definition (enumerator_13918.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 361)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_32) {
          var_defaultConstructorName_13818 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_13918.gotoNextObject () ;
      if (enumerator_13918.hasCurrentObject ()) {
        bool_31 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_13818.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_33 = this ;
  const GALGAS_classDeclarationAST temp_34 = this ;
  const GALGAS_classDeclarationAST temp_35 = this ;
  const GALGAS_classDeclarationAST temp_36 = this ;
  const GALGAS_classDeclarationAST temp_37 = this ;
  GALGAS_operators temp_38 ;
  const enumGalgasBool test_39 = temp_37.readProperty_mIsReference ().boolEnum () ;
  if (kBoolTrue == test_39) {
    temp_38 = GALGAS_operators::constructor_isReferenceEquatable (SOURCE_FILE ("type-class.galgas", 383)) ;
  }else if (kBoolFalse == test_39) {
    temp_38 = GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-class.galgas", 383)) ;
  }
  const GALGAS_classDeclarationAST temp_40 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_14147 = GALGAS_unifiedTypeDefinition::constructor_new (temp_33.readProperty_mClassTypeName (), temp_34.readProperty_mIsPredefined (), temp_35.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 369)), var_superClassIndex_8022, GALGAS_typeKindEnum::constructor_classType (temp_36.readProperty_mIsReference ()  COMMA_SOURCE_FILE ("type-class.galgas", 371)), GALGAS_bool (false), var_allTypedAttributeList_12168, var_attributeMap_7949, var_currentClassTypedPropertyList_12106, var_constructorMap_11829, var_getterMap_7790, var_setterMap_7819, var_instanceMethodMap_7856, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 380)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 381)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 382)), temp_38, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 384)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 385)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 386)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 387)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 388)), var_generateHeaderInSeparateFile_8052, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 390)), var_defaultConstructorName_13818, GALGAS_string ("class-").add_operation (temp_40.readProperty_mClassTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-class.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 392)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-class.galgas", 393))  COMMA_SOURCE_FILE ("type-class.galgas", 366)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14147.readProperty_mTypeName (), var_typeDefinition_14147, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 395)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                        const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                        const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classDeclarationAST temp_0 = this ;
  GALGAS_lstring var_classTypeNameForUsefulness_15869 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 408)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_15869, var_classTypeNameForUsefulness_15869, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 409)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_classDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_classDeclarationAST temp_3 = this ;
      GALGAS_lstring var_superClassNameForUsefulness_16102 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 411)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_15869, var_superClassNameForUsefulness_16102 COMMA_SOURCE_FILE ("type-class.galgas", 412)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classDeclarationAST temp_5 = this ;
    test_4 = temp_5.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_classDeclarationAST temp_6 = this ;
      const GALGAS_classDeclarationAST temp_7 = this ;
      GALGAS_lstring var_weakRefTypeNameForUsefulness_16332 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_6.readProperty_mClassTypeName ().readProperty_string ().add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 415)), temp_7.readProperty_mClassTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 415)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_15869, var_weakRefTypeNameForUsefulness_16332 COMMA_SOURCE_FILE ("type-class.galgas", 416)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_16624 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_8.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 419)) ;
  const GALGAS_classDeclarationAST temp_9 = this ;
  GALGAS_unifiedTypeMapEntry temp_10 ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, temp_9.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 422)) ;
  }else if (kBoolFalse == test_11) {
    const GALGAS_classDeclarationAST temp_12 = this ;
    temp_10 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_12.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 423)) ;
  }
  GALGAS_unifiedTypeMapEntry var_superClassEntry_16731 = temp_10 ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (kIsNotEqual, var_superClassEntry_16731.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 428)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_bool var_superClassIsReference_17160 ;
      extensionGetter_definition (var_superClassEntry_16731, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 429)).readProperty_mTypeKindEnum ().method_classType (var_superClassIsReference_17160, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 429)) ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_classDeclarationAST temp_15 = this ;
        test_14 = var_superClassIsReference_17160.operator_and (temp_15.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 430)) COMMA_SOURCE_FILE ("type-class.galgas", 430)).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_classDeclarationAST temp_16 = this ;
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'refClass', as its super class"), fixItArray17  COMMA_SOURCE_FILE ("type-class.galgas", 431)) ;
        }
      }
      if (kBoolFalse == test_14) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          const GALGAS_classDeclarationAST temp_19 = this ;
          test_18 = var_superClassIsReference_17160.operator_not (SOURCE_FILE ("type-class.galgas", 432)).operator_and (temp_19.readProperty_mIsReference () COMMA_SOURCE_FILE ("type-class.galgas", 432)).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GALGAS_classDeclarationAST temp_20 = this ;
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'valueclass', as its super class"), fixItArray21  COMMA_SOURCE_FILE ("type-class.galgas", 433)) ;
          }
        }
      }
    }
  }
  GALGAS_typedPropertyList var_allAttributeList_17731 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsEqual, var_superClassEntry_16731.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 440)))).boolEnum () ;
    if (kBoolTrue == test_22) {
      var_allAttributeList_17731 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 441)) ;
    }
  }
  if (kBoolFalse == test_22) {
    var_allAttributeList_17731 = extensionGetter_definition (var_superClassEntry_16731, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 456)).readProperty_mAllTypedPropertyList () ;
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      const GALGAS_classDeclarationAST temp_24 = this ;
      test_23 = temp_24.readProperty_mGenerateInSeparateFile ().boolEnum () ;
      if (kBoolTrue == test_23) {
        const GALGAS_classDeclarationAST temp_25 = this ;
        TC_Array <C_FixItDescription> fixItArray26 ;
        inCompiler->emitSemanticError (temp_25.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray26  COMMA_SOURCE_FILE ("type-class.galgas", 459)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_18759 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 464)) ;
  GALGAS_propertyIndexMap var_attributeMap_18809 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 465)) ;
  const GALGAS_classDeclarationAST temp_27 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_18911 (temp_27.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_18911.hasCurrentObject ()) {
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      test_28 = enumerator_18911.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-class.galgas", 467)).boolEnum () ;
      if (kBoolTrue == test_28) {
        TC_Array <C_FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (enumerator_18911.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a class"), fixItArray29  COMMA_SOURCE_FILE ("type-class.galgas", 468)) ;
      }
    }
    GALGAS_lstring var_propertyTypeNameForUsefulness_19093 = function_typeNameForUsefulEntitiesGraph (enumerator_18911.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 470)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_15869, var_propertyTypeNameForUsefulness_19093 COMMA_SOURCE_FILE ("type-class.galgas", 471)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_19285 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_18911.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 472)) ;
    var_typedAttributeList_18759.addAssign_operation (var_t_19285, enumerator_18911.current_mPropertyName (HERE), enumerator_18911.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 476)), enumerator_18911.current_selector (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 473)) ;
    var_allAttributeList_17731.addAssign_operation (var_t_19285, enumerator_18911.current_mPropertyName (HERE), enumerator_18911.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 481)), enumerator_18911.current_selector (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 478)) ;
    {
    var_attributeMap_18809.setter_insertKey (enumerator_18911.current_mPropertyName (HERE), var_t_19285, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 483)) ;
    }
    enumerator_18911.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_30 = this ;
  const GALGAS_classDeclarationAST temp_31 = this ;
  const GALGAS_classDeclarationAST temp_32 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (temp_30.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 487)), GALGAS_classTypeForGeneration::constructor_new (var_selfType_16624, temp_31.readProperty_mIsAbstract (), temp_32.readProperty_mIsReference (), var_superClassEntry_16731, var_allAttributeList_17731, var_typedAttributeList_18759, extensionGetter_definition (var_selfType_16624, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 495)).readProperty_mGenerateHeaderInSeparateFile ()  COMMA_SOURCE_FILE ("type-class.galgas", 488))  COMMA_SOURCE_FILE ("type-class.galgas", 486)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_string & outArgument_outHeader,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 520)).operator_not (SOURCE_FILE ("type-class.galgas", 520)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_classTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 521)) ;
    }
  }
  const GALGAS_classTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_21259 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 523)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classTypeForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_classTypeForGeneration temp_6 = this ;
      const GALGAS_classTypeForGeneration temp_7 = this ;
      GALGAS_string temp_8 ;
      const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 528)).boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_9) {
        const GALGAS_classTypeForGeneration temp_10 = this ;
        temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 528)) ;
      }
      const GALGAS_classTypeForGeneration temp_11 = this ;
      const GALGAS_classTypeForGeneration temp_12 = this ;
      const GALGAS_classTypeForGeneration temp_13 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21259.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 527)), temp_8, temp_11.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_12.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 530)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())), temp_13.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 525))) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_classTypeForGeneration temp_14 = this ;
    const GALGAS_classTypeForGeneration temp_15 = this ;
    GALGAS_string temp_16 ;
    const enumGalgasBool test_17 = temp_15.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 537)).boolEnum () ;
    if (kBoolTrue == test_17) {
      temp_16 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_17) {
      const GALGAS_classTypeForGeneration temp_18 = this ;
      temp_16 = extensionGetter_identifierRepresentation (temp_18.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 537)) ;
    }
    const GALGAS_classTypeForGeneration temp_19 = this ;
    const GALGAS_classTypeForGeneration temp_20 = this ;
    const GALGAS_classTypeForGeneration temp_21 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21259.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_14.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 536)), temp_16, temp_19.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_20.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 539)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())), temp_21.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 534))) ;
  }
  const GALGAS_classTypeForGeneration temp_22 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_21259.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_22.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 545)), var_selfTypeDefinition_21259.readProperty_mIsConcrete (), var_selfTypeDefinition_21259.readProperty_mConstructorMap (), var_selfTypeDefinition_21259.readProperty_mGetterMap (), var_selfTypeDefinition_21259.readProperty_mSetterMap (), var_selfTypeDefinition_21259.readProperty_mInstanceMethodMap (), var_selfTypeDefinition_21259.readProperty_mClassMethodMap (), var_selfTypeDefinition_21259.readProperty_mOptionalMethodMap (), var_selfTypeDefinition_21259.readProperty_mEnumerationDescriptor (), var_selfTypeDefinition_21259.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_21259.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_21259.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-class.galgas", 543))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 543)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_32_ (const GALGAS_string constinArgument_inOutputDirectory,
                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_string & outArgument_outHeader,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_23205 (temp_0.readProperty_mCurrentTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_23205.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_23205.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 566)) ;
    enumerator_23205.gotoNextObject () ;
  }
  const GALGAS_classTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_23301 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 568)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_classTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_classTypeForGeneration temp_5 = this ;
        test_4 = temp_5.readProperty_mGenerateHeaderInSeparateFile ().boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_classTypeForGeneration temp_6 = this ;
          const GALGAS_classTypeForGeneration temp_7 = this ;
          GALGAS_string temp_8 ;
          const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 574)).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_9) {
            const GALGAS_classTypeForGeneration temp_10 = this ;
            temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 574)) ;
          }
          const GALGAS_classTypeForGeneration temp_11 = this ;
          const GALGAS_classTypeForGeneration temp_12 = this ;
          const GALGAS_classTypeForGeneration temp_13 = this ;
          const GALGAS_classTypeForGeneration temp_14 = this ;
          const GALGAS_classTypeForGeneration temp_15 = this ;
          GALGAS_string var_part_31__23444 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23301.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 573)), temp_8, temp_11.readProperty_mCurrentTypedAttributeList (), temp_12.readProperty_mAllTypedAttributeList (), temp_13.readProperty_mIsAbstract (), extensionGetter_definition (temp_14.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 578)).readProperty_mGetterMap (), extensionGetter_definition (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 579)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 571))) ;
          const GALGAS_classTypeForGeneration temp_16 = this ;
          const GALGAS_classTypeForGeneration temp_17 = this ;
          GALGAS_string temp_18 ;
          const enumGalgasBool test_19 = temp_17.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 584)).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_19) {
            const GALGAS_classTypeForGeneration temp_20 = this ;
            temp_18 = extensionGetter_identifierRepresentation (temp_20.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 584)) ;
          }
          const GALGAS_classTypeForGeneration temp_21 = this ;
          const GALGAS_classTypeForGeneration temp_22 = this ;
          const GALGAS_classTypeForGeneration temp_23 = this ;
          GALGAS_string var_part_32__23959 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23301.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_16.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 583)), temp_18, temp_21.readProperty_mCurrentTypedAttributeList (), temp_22.readProperty_mAllTypedAttributeList (), temp_23.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 581))) ;
          const GALGAS_classTypeForGeneration temp_24 = this ;
          GALGAS_string var_headerFileName_24360 = GALGAS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_24.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 589)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 589)) ;
          {
          GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 591)), var_headerFileName_24360, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_part_31__23444, GALGAS_string ("\n\n"), var_part_32__23959, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 590)) ;
          }
          outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_24360, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 601)).add_operation (GALGAS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 601)) ;
        }
      }
      if (kBoolFalse == test_4) {
        const GALGAS_classTypeForGeneration temp_25 = this ;
        const GALGAS_classTypeForGeneration temp_26 = this ;
        GALGAS_string temp_27 ;
        const enumGalgasBool test_28 = temp_26.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 606)).boolEnum () ;
        if (kBoolTrue == test_28) {
          temp_27 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_28) {
          const GALGAS_classTypeForGeneration temp_29 = this ;
          temp_27 = extensionGetter_identifierRepresentation (temp_29.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 606)) ;
        }
        const GALGAS_classTypeForGeneration temp_30 = this ;
        const GALGAS_classTypeForGeneration temp_31 = this ;
        const GALGAS_classTypeForGeneration temp_32 = this ;
        const GALGAS_classTypeForGeneration temp_33 = this ;
        const GALGAS_classTypeForGeneration temp_34 = this ;
        outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23301.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_25.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 605)), temp_27, temp_30.readProperty_mCurrentTypedAttributeList (), temp_31.readProperty_mAllTypedAttributeList (), temp_32.readProperty_mIsAbstract (), extensionGetter_definition (temp_33.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 610)).readProperty_mGetterMap (), extensionGetter_definition (temp_34.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 611)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 603))) ;
        const GALGAS_classTypeForGeneration temp_35 = this ;
        const GALGAS_classTypeForGeneration temp_36 = this ;
        GALGAS_string temp_37 ;
        const enumGalgasBool test_38 = temp_36.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 616)).boolEnum () ;
        if (kBoolTrue == test_38) {
          temp_37 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_38) {
          const GALGAS_classTypeForGeneration temp_39 = this ;
          temp_37 = extensionGetter_identifierRepresentation (temp_39.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 616)) ;
        }
        const GALGAS_classTypeForGeneration temp_40 = this ;
        const GALGAS_classTypeForGeneration temp_41 = this ;
        const GALGAS_classTypeForGeneration temp_42 = this ;
        outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23301.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_35.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 615)), temp_37, temp_40.readProperty_mCurrentTypedAttributeList (), temp_41.readProperty_mAllTypedAttributeList (), temp_42.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 613))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 613)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_43 = kBoolTrue ;
    if (kBoolTrue == test_43) {
      const GALGAS_classTypeForGeneration temp_44 = this ;
      test_43 = temp_44.readProperty_mGenerateHeaderInSeparateFile ().boolEnum () ;
      if (kBoolTrue == test_43) {
        const GALGAS_classTypeForGeneration temp_45 = this ;
        const GALGAS_classTypeForGeneration temp_46 = this ;
        GALGAS_string temp_47 ;
        const enumGalgasBool test_48 = temp_46.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 627)).boolEnum () ;
        if (kBoolTrue == test_48) {
          temp_47 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_48) {
          const GALGAS_classTypeForGeneration temp_49 = this ;
          temp_47 = extensionGetter_identifierRepresentation (temp_49.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 627)) ;
        }
        const GALGAS_classTypeForGeneration temp_50 = this ;
        const GALGAS_classTypeForGeneration temp_51 = this ;
        const GALGAS_classTypeForGeneration temp_52 = this ;
        const GALGAS_classTypeForGeneration temp_53 = this ;
        const GALGAS_classTypeForGeneration temp_54 = this ;
        GALGAS_string var_part_31__25892 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23301.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_45.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 626)), temp_47, temp_50.readProperty_mCurrentTypedAttributeList (), temp_51.readProperty_mAllTypedAttributeList (), temp_52.readProperty_mIsAbstract (), extensionGetter_definition (temp_53.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 631)).readProperty_mGetterMap (), extensionGetter_definition (temp_54.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 632)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 624))) ;
        const GALGAS_classTypeForGeneration temp_55 = this ;
        const GALGAS_classTypeForGeneration temp_56 = this ;
        GALGAS_string temp_57 ;
        const enumGalgasBool test_58 = temp_56.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 637)).boolEnum () ;
        if (kBoolTrue == test_58) {
          temp_57 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_58) {
          const GALGAS_classTypeForGeneration temp_59 = this ;
          temp_57 = extensionGetter_identifierRepresentation (temp_59.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 637)) ;
        }
        const GALGAS_classTypeForGeneration temp_60 = this ;
        const GALGAS_classTypeForGeneration temp_61 = this ;
        const GALGAS_classTypeForGeneration temp_62 = this ;
        GALGAS_string var_part_32__26403 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23301.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_55.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 636)), temp_57, temp_60.readProperty_mCurrentTypedAttributeList (), temp_61.readProperty_mAllTypedAttributeList (), temp_62.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 634))) ;
        const GALGAS_classTypeForGeneration temp_63 = this ;
        GALGAS_string var_headerFileName_26800 = GALGAS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_63.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 642)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 642)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 642)) ;
        {
        GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 644)), var_headerFileName_26800, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_part_31__25892, GALGAS_string ("\n\n"), var_part_32__26403, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 643)) ;
        }
        outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_26800, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 654)).add_operation (GALGAS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 654)) ;
      }
    }
    if (kBoolFalse == test_43) {
      const GALGAS_classTypeForGeneration temp_64 = this ;
      const GALGAS_classTypeForGeneration temp_65 = this ;
      GALGAS_string temp_66 ;
      const enumGalgasBool test_67 = temp_65.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 659)).boolEnum () ;
      if (kBoolTrue == test_67) {
        temp_66 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_67) {
        const GALGAS_classTypeForGeneration temp_68 = this ;
        temp_66 = extensionGetter_identifierRepresentation (temp_68.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 659)) ;
      }
      const GALGAS_classTypeForGeneration temp_69 = this ;
      const GALGAS_classTypeForGeneration temp_70 = this ;
      const GALGAS_classTypeForGeneration temp_71 = this ;
      const GALGAS_classTypeForGeneration temp_72 = this ;
      const GALGAS_classTypeForGeneration temp_73 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23301.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_64.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 658)), temp_66, temp_69.readProperty_mCurrentTypedAttributeList (), temp_70.readProperty_mAllTypedAttributeList (), temp_71.readProperty_mIsAbstract (), extensionGetter_definition (temp_72.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 663)).readProperty_mGetterMap (), extensionGetter_definition (temp_73.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 664)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 656))) ;
      const GALGAS_classTypeForGeneration temp_74 = this ;
      const GALGAS_classTypeForGeneration temp_75 = this ;
      GALGAS_string temp_76 ;
      const enumGalgasBool test_77 = temp_75.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 669)).boolEnum () ;
      if (kBoolTrue == test_77) {
        temp_76 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_77) {
        const GALGAS_classTypeForGeneration temp_78 = this ;
        temp_76 = extensionGetter_identifierRepresentation (temp_78.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 669)) ;
      }
      const GALGAS_classTypeForGeneration temp_79 = this ;
      const GALGAS_classTypeForGeneration temp_80 = this ;
      const GALGAS_classTypeForGeneration temp_81 = this ;
      outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23301.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_74.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 668)), temp_76, temp_79.readProperty_mCurrentTypedAttributeList (), temp_80.readProperty_mAllTypedAttributeList (), temp_81.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 666))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 666)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_string & outArgument_outImplementation,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 683)) ;
  const GALGAS_classTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_28751 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 684)) ;
  const GALGAS_classTypeForGeneration temp_2 = this ;
  const GALGAS_classTypeForGeneration temp_3 = this ;
  const GALGAS_classTypeForGeneration temp_4 = this ;
  GALGAS_typedPropertyList var_at_28807 = temp_2.readProperty_mAllTypedAttributeList ().getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint (uint32_t (0U)), temp_3.readProperty_mAllTypedAttributeList ().getter_count (SOURCE_FILE ("type-class.galgas", 686)).substract_operation (temp_4.readProperty_mCurrentTypedAttributeList ().getter_count (SOURCE_FILE ("type-class.galgas", 686)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 686))  COMMA_SOURCE_FILE ("type-class.galgas", 686)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 685)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_classTypeForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_classTypeForGeneration temp_7 = this ;
      const GALGAS_classTypeForGeneration temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = temp_8.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 692)).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_10) {
        const GALGAS_classTypeForGeneration temp_11 = this ;
        temp_9 = extensionGetter_identifierRepresentation (temp_11.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 692)) ;
      }
      const GALGAS_classTypeForGeneration temp_12 = this ;
      const GALGAS_classTypeForGeneration temp_13 = this ;
      const GALGAS_classTypeForGeneration temp_14 = this ;
      const GALGAS_classTypeForGeneration temp_15 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeSpecificImplementation (inCompiler, var_typedefinition_28751.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_7.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 691)), temp_9, temp_12.readProperty_mCurrentTypedAttributeList (), temp_13.readProperty_mAllTypedAttributeList (), var_at_28807, temp_14.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 697)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 689))) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_classTypeForGeneration temp_16 = this ;
    const GALGAS_classTypeForGeneration temp_17 = this ;
    GALGAS_string temp_18 ;
    const enumGalgasBool test_19 = temp_17.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 703)).boolEnum () ;
    if (kBoolTrue == test_19) {
      temp_18 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_19) {
      const GALGAS_classTypeForGeneration temp_20 = this ;
      temp_18 = extensionGetter_identifierRepresentation (temp_20.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 703)) ;
    }
    const GALGAS_classTypeForGeneration temp_21 = this ;
    const GALGAS_classTypeForGeneration temp_22 = this ;
    const GALGAS_classTypeForGeneration temp_23 = this ;
    const GALGAS_classTypeForGeneration temp_24 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeSpecificImplementation (inCompiler, var_typedefinition_28751.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_16.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 702)), temp_18, temp_21.readProperty_mCurrentTypedAttributeList (), temp_22.readProperty_mAllTypedAttributeList (), var_at_28807, temp_23.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_24.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 708)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 700))) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Function 'generateClassGetterDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_generateClassGetterDeclaration (const GALGAS_lstring & constinArgument_inGetterName,
                                                       const GALGAS_functionSignature & constinArgument_inArgumentTypeList,
                                                       const GALGAS_bool & constinArgument_inHasCompilerArgument,
                                                       const GALGAS_unifiedTypeMapEntry & constinArgument_inReturnedType,
                                                       const GALGAS_methodQualifier & constinArgument_inQualifier,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  GALGAS_bool var_generateMethodDeclaration_30506 = GALGAS_bool (true) ;
  GALGAS_string var_suffix_30545 = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GALGAS_methodQualifier::kNotBuilt:
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualAbstract:
    {
      var_suffix_30545 = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtual:
    {
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isBasic:
  case GALGAS_methodQualifier::kEnum_isBasicFinal:
    {
      var_generateMethodDeclaration_30506 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isInherited:
    {
      var_generateMethodDeclaration_30506 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverriding:
    {
      var_suffix_30545 = GALGAS_string (" override") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverridingAbstract:
    {
      var_suffix_30545 = GALGAS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_30506.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("//--- Extension getter ").add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 739)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 739)) ;
      result_result.plusAssign_operation(GALGAS_string ("  public: virtual class GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inReturnedType, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 740)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 740)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 740)) ;
      result_result.plusAssign_operation(GALGAS_string (" getter_").add_operation (constinArgument_inGetterName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-class.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 741)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 741)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 741)) ;
      GALGAS_bool var_first_31193 = GALGAS_bool (true) ;
      cEnumerator_functionSignature enumerator_31232 (constinArgument_inArgumentTypeList, kENUMERATION_UP) ;
      while (enumerator_31232.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_first_31193.boolEnum () ;
          if (kBoolTrue == test_1) {
            var_first_31193 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 748)) ;
        }
        result_result.plusAssign_operation(GALGAS_string ("const class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_31232.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 750)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 750)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 750)) ;
        result_result.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_31232.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 751)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 751)) ;
        enumerator_31232.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_first_31193.operator_not (SOURCE_FILE ("type-class.galgas", 754)).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 755)) ;
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("C_Compiler *"), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 757)) ;
          var_first_31193 = GALGAS_bool (false) ;
        }
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = var_first_31193.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("LOCATION_ARGS") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssign_operation(temp_4.add_operation (GALGAS_string (") const"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 760)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 760)) ;
      result_result.plusAssign_operation(var_suffix_30545.add_operation (GALGAS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 761)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 761)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateClassGetterDeclaration [6] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_functionSignature,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_unifiedTypeMapEntry,
  & kTypeDescriptor_GALGAS_methodQualifier,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateClassGetterDeclaration (C_Compiler * inCompiler,
                                                                               const cObjectArray & inEffectiveParameterArray,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_functionSignature operand1 = GALGAS_functionSignature::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                     inCompiler
                                                                                     COMMA_THERE) ;
  const GALGAS_bool operand2 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_unifiedTypeMapEntry operand3 = GALGAS_unifiedTypeMapEntry::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                         inCompiler
                                                                                         COMMA_THERE) ;
  const GALGAS_methodQualifier operand4 = GALGAS_methodQualifier::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  return function_generateClassGetterDeclaration (operand0,
                                                  operand1,
                                                  operand2,
                                                  operand3,
                                                  operand4,
                                                  inCompiler
                                                  COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateClassGetterDeclaration ("generateClassGetterDeclaration",
                                                                                functionWithGenericHeader_generateClassGetterDeclaration,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                5,
                                                                                functionArgs_generateClassGetterDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'generateClassInstanceMethodDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_generateClassInstanceMethodDeclaration (const GALGAS_lstring & constinArgument_inMethodName,
                                                               const GALGAS_formalParameterSignature & constinArgument_inArgumentTypeList,
                                                               const GALGAS_bool & constinArgument_inHasCompilerArgument,
                                                               const GALGAS_methodQualifier & constinArgument_inQualifier,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  GALGAS_bool var_generateMethodDeclaration_32277 = GALGAS_bool (true) ;
  GALGAS_string var_suffix_32316 = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GALGAS_methodQualifier::kNotBuilt:
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualAbstract:
    {
      var_suffix_32316 = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtual:
    {
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isBasic:
  case GALGAS_methodQualifier::kEnum_isBasicFinal:
    {
      var_generateMethodDeclaration_32277 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isInherited:
    {
      var_generateMethodDeclaration_32277 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverriding:
    {
      var_suffix_32316 = GALGAS_string (" override") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverridingAbstract:
    {
      var_suffix_32316 = GALGAS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_32277.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("//--- Extension method ").add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 790)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 790)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 790)) ;
      result_result.plusAssign_operation(GALGAS_string ("  public: virtual void method_").add_operation (constinArgument_inMethodName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-class.galgas", 791)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 791)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 791)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 791)) ;
      GALGAS_bool var_first_32895 = GALGAS_bool (true) ;
      cEnumerator_formalParameterSignature enumerator_32934 (constinArgument_inArgumentTypeList, kENUMERATION_UP) ;
      while (enumerator_32934.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_first_32895.boolEnum () ;
          if (kBoolTrue == test_1) {
            var_first_32895 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 798)) ;
        }
        switch (enumerator_32934.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            result_result.plusAssign_operation(GALGAS_string ("const class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_32934.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 802)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 802)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 802)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_32934.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 804)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 804)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 804)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 804)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_32934.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 806)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 806)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 806)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 806)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_32934.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 808)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 808)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 808)) ;
          }
          break ;
        }
        result_result.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_32934.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 810)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 810)) ;
        enumerator_32934.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_first_32895.operator_not (SOURCE_FILE ("type-class.galgas", 813)).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 814)) ;
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("C_Compiler *"), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 816)) ;
          var_first_32895 = GALGAS_bool (false) ;
        }
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = var_first_32895.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("LOCATION_ARGS") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssign_operation(temp_4.add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 819)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 819)) ;
      result_result.plusAssign_operation(var_suffix_32316.add_operation (GALGAS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 820)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 820)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateClassInstanceMethodDeclaration [5] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_formalParameterSignature,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_methodQualifier,
  nullptr
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateClassInstanceMethodDeclaration (C_Compiler * inCompiler,
                                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                                       const GALGAS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_formalParameterSignature operand1 = GALGAS_formalParameterSignature::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                   inCompiler
                                                                                                   COMMA_THERE) ;
  const GALGAS_bool operand2 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_methodQualifier operand3 = GALGAS_methodQualifier::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  return function_generateClassInstanceMethodDeclaration (operand0,
                                                          operand1,
                                                          operand2,
                                                          operand3,
                                                          inCompiler
                                                          COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateClassInstanceMethodDeclaration ("generateClassInstanceMethodDeclaration",
                                                                                        functionWithGenericHeader_generateClassInstanceMethodDeclaration,
                                                                                        & kTypeDescriptor_GALGAS_string,
                                                                                        4,
                                                                                        functionArgs_generateClassInstanceMethodDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@weakReferenceDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_weakReferenceDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("weak reference @").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 18)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_1645 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 30)), temp_1.readProperty_mWeakReferenceTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 30)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_1645, temp_2, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 31)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
    test_3 = GALGAS_bool (kIsNotEqual, temp_4.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
      const GALGAS_weakReferenceDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_1645, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 35)), temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 35)) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 33)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_superClassIndex_2934 ;
  GALGAS_bool var_generateHeaderInSeparateFile_2962 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_2934 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 59)) ;
      const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_2962 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_weakReferenceDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperWeakReferenceTypeName (), var_superClassIndex_2934, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 67)) ;
    }
    GALGAS_unifiedTypeDefinition var_superTypeDefinition_3480 ;
    const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
    extensionMethod_searchType (ioArgument_ioTypeMap, temp_4.readProperty_mSuperWeakReferenceTypeName (), var_superTypeDefinition_3480, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 68)) ;
    var_generateHeaderInSeparateFile_2962 = var_superTypeDefinition_3480.readProperty_mGenerateHeaderInSeparateFile () ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_superTypeDefinition_3480.readProperty_mTypeKindEnum ().getter_isWeakReferenceType (SOURCE_FILE ("type-weak-reference.galgas", 79)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 79)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_weakReferenceDeclarationAST temp_6 = this ;
        const GALGAS_weakReferenceDeclarationAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_7.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 80)).add_operation (GALGAS_string (" should be a weak reference type"), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 80)), fixItArray8  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 80)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_weakReferenceIndex_4091 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_9 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_9.readProperty_mWeakReferenceTypeName (), var_weakReferenceIndex_4091, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 84)) ;
  }
  GALGAS_constructorMap var_constructorMap_4154 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 89)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_10 = this ;
  var_constructorMap_4154.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nil"), temp_10.readProperty_mWeakReferenceTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 91)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 92)), GALGAS_bool (false), var_weakReferenceIndex_4091, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 90)) ;
  }
  GALGAS_getterMap var_getterMap_4353 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 97)) ;
  GALGAS_setterMap var_setterMap_4385 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 98)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4425 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 99)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_11 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_11.readProperty_mWeakReferenceTypeName (), GALGAS_bool (false), var_getterMap_4353, var_setterMap_4385, var_instanceMethodMap_4425, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 100)) ;
  }
  cEnumerator_getterMap enumerator_4789 (var_getterMap_4353, kENUMERATION_UP) ;
  while (enumerator_4789.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (enumerator_4789.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray12  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 114)) ;
    enumerator_4789.gotoNextObject () ;
  }
  cEnumerator_setterMap enumerator_4890 (var_setterMap_4385, kENUMERATION_UP) ;
  while (enumerator_4890.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray13 ;
    inCompiler->emitSemanticError (enumerator_4890.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray13  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 117)) ;
    enumerator_4890.gotoNextObject () ;
  }
  cEnumerator_instanceMethodMap enumerator_4991 (var_instanceMethodMap_4425, kENUMERATION_UP) ;
  while (enumerator_4991.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (enumerator_4991.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray14  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 120)) ;
    enumerator_4991.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_classIndex_5162 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_15 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_15.readProperty_mClassTypeName (), var_classIndex_5162, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 123)) ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_16 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_17 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_18 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_5180 = GALGAS_unifiedTypeDefinition::constructor_new (temp_16.readProperty_mWeakReferenceTypeName (), temp_17.readProperty_mIsPredefined (), GALGAS_bool (true), var_superClassIndex_2934, GALGAS_typeKindEnum::constructor_weakReferenceType (var_classIndex_5162  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 129)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 131)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 132)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 133)), var_constructorMap_4154, GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 135)), GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 136)), GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 137)), GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 138)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 139)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 140)), GALGAS_operators::constructor_isReferenceEquatable (SOURCE_FILE ("type-weak-reference.galgas", 141)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 142)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 143)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 144)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 145)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 146)), var_generateHeaderInSeparateFile_2962, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 148)), GALGAS_string ("nil"), GALGAS_string ("weak-reference-").add_operation (temp_18.readProperty_mWeakReferenceTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 150)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-weak-reference.galgas", 151))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 124)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_5180.readProperty_mTypeName (), var_typeDefinition_5180, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 153)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  GALGAS_lstring var_weakRefTypeNameForUsefulness_6828 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 170)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_weakRefTypeNameForUsefulness_6828, var_weakRefTypeNameForUsefulness_6828, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 171)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_weakReferenceDeclarationAST temp_3 = this ;
      GALGAS_lstring var_superWeakRefNameForUsefulness_7081 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 173)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_weakRefTypeNameForUsefulness_6828, var_superWeakRefNameForUsefulness_7081 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 174)) ;
      }
    }
  }
  const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_7330 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_4.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 177)) ;
  const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
  GALGAS_unifiedTypeMapEntry temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 180)) ;
  }else if (kBoolFalse == test_7) {
    const GALGAS_weakReferenceDeclarationAST temp_8 = this ;
    temp_6 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_8.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 181)) ;
  }
  GALGAS_unifiedTypeMapEntry var_superClassEntry_7441 = temp_6 ;
  GALGAS_typedPropertyList var_allAttributeList_7807 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, var_superClassEntry_7441.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 187)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_allAttributeList_7807 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 188)) ;
    }
  }
  if (kBoolFalse == test_9) {
    var_allAttributeList_7807 = extensionGetter_definition (var_superClassEntry_7441, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 203)).readProperty_mAllTypedPropertyList () ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GALGAS_weakReferenceDeclarationAST temp_11 = this ;
      test_10 = temp_11.readProperty_mGenerateInSeparateFile ().boolEnum () ;
      if (kBoolTrue == test_10) {
        const GALGAS_weakReferenceDeclarationAST temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray13  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 205)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_8721 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 209)) ;
  GALGAS_propertyIndexMap var_attributeMap_8769 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 210)) ;
  const GALGAS_weakReferenceDeclarationAST temp_14 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_8869 (temp_14.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_8869.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_t_8905 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_8869.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 212)) ;
    var_typedAttributeList_8721.addAssign_operation (var_t_8905, enumerator_8869.current_mPropertyName (HERE), enumerator_8869.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 216)), enumerator_8869.current_selector (HERE)  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 213)) ;
    var_allAttributeList_7807.addAssign_operation (var_t_8905, enumerator_8869.current_mPropertyName (HERE), enumerator_8869.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 221)), enumerator_8869.current_selector (HERE)  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 218)) ;
    {
    var_attributeMap_8769.setter_insertKey (enumerator_8869.current_mPropertyName (HERE), var_t_8905, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 223)) ;
    }
    enumerator_8869.gotoNextObject () ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_15 = this ;
  GALGAS_unifiedTypeMapEntry var_referenceClassType_9279 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_15.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 226)) ;
  const GALGAS_weakReferenceDeclarationAST temp_16 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("weak reference ").add_operation (temp_16.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 230)), GALGAS_weakReferenceTypeForGeneration::constructor_new (var_selfType_7330, var_referenceClassType_9279, var_superClassEntry_7441, var_allAttributeList_7807, var_typedAttributeList_8721, extensionGetter_definition (var_selfType_7330, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 237)).readProperty_mGenerateHeaderInSeparateFile ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 231))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 229)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 257)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 257)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_weakReferenceTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 258)) ;
    }
  }
  const GALGAS_weakReferenceTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReferenceClassType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 260)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_4 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_10874 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 261)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_5 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_6 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_7 = this ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 265)).boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_9) {
    const GALGAS_weakReferenceTypeForGeneration temp_10 = this ;
    temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 265)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeHeader_31_ (inCompiler, extensionGetter_identifierRepresentation (temp_5.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 263)), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 264)), temp_8, GALGAS_bool (kIsNotEqual, var_typedefinition_10874.readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 262))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typedefinition_10874.readProperty_mTypeName ().readProperty_string (), var_typedefinition_10874.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 270)), var_typedefinition_10874.readProperty_mIsConcrete (), var_typedefinition_10874.readProperty_mConstructorMap (), var_typedefinition_10874.readProperty_mGetterMap (), var_typedefinition_10874.readProperty_mSetterMap (), var_typedefinition_10874.readProperty_mInstanceMethodMap (), var_typedefinition_10874.readProperty_mClassMethodMap (), var_typedefinition_10874.readProperty_mOptionalMethodMap (), var_typedefinition_10874.readProperty_mEnumerationDescriptor (), var_typedefinition_10874.readProperty_mHandledOperatorFlags (), var_typedefinition_10874.readProperty_mAddAssignOperatorArguments (), var_typedefinition_10874.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-weak-reference.galgas", 268))), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 268)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_weakReferenceTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 292)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_12234 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 293)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_2 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_3 = this ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = temp_3.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 297)).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_5) {
    const GALGAS_weakReferenceTypeForGeneration temp_6 = this ;
    temp_4 = extensionGetter_identifierRepresentation (temp_6.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 297)) ;
  }
  const GALGAS_weakReferenceTypeForGeneration temp_7 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_8 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_9 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_10 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_11 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 295)), var_typedefinition_12234.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 296)), temp_4, temp_7.readProperty_mTypedAttributeList (), temp_8.readProperty_mAllTypedPropertyList (), temp_9.readProperty_mAllTypedPropertyList ().getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint (uint32_t (0U)), temp_10.readProperty_mAllTypedPropertyList ().getter_count (SOURCE_FILE ("type-weak-reference.galgas", 300)).substract_operation (temp_11.readProperty_mTypedAttributeList ().getter_count (SOURCE_FILE ("type-weak-reference.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 300))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 300)), GALGAS_bool (kIsNotEqual, var_typedefinition_12234.readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 294))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4731 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 137)), temp_1.readProperty_mEnumTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 137)) ;
  {
  const GALGAS_enumDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4731, temp_2, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 138)) ;
  }
  GALGAS_bool var_circularReference_4959 = GALGAS_bool (true) ;
  const GALGAS_enumDeclarationAST temp_3 = this ;
  cEnumerator_enumConstantList enumerator_4993 (temp_3.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_4 = var_circularReference_4959.isValidAndTrue () ;
  if (enumerator_4993.hasCurrentObject () && bool_4) {
    while (enumerator_4993.hasCurrentObject () && bool_4) {
      GALGAS_bool var_namesCurrentType_5082 = GALGAS_bool (false) ;
      cEnumerator__32_lstringlist enumerator_5124 (enumerator_4993.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
      bool bool_5 = var_namesCurrentType_5082.operator_not (SOURCE_FILE ("type-enum.galgas", 143)).isValidAndTrue () ;
      if (enumerator_5124.hasCurrentObject () && bool_5) {
        while (enumerator_5124.hasCurrentObject () && bool_5) {
          GALGAS_lstring var_propertyKey_5201 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5124.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 144)), enumerator_5124.current_mValue_30_ (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 144)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, var_propertyKey_5201.readProperty_string ().objectCompare (var_key_4731.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_namesCurrentType_5082 = GALGAS_bool (true) ;
            }
          }
          enumerator_5124.gotoNextObject () ;
          if (enumerator_5124.hasCurrentObject ()) {
            bool_5 = var_namesCurrentType_5082.operator_not (SOURCE_FILE ("type-enum.galgas", 143)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_namesCurrentType_5082.operator_not (SOURCE_FILE ("type-enum.galgas", 149)).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_circularReference_4959 = GALGAS_bool (false) ;
        }
      }
      enumerator_4993.gotoNextObject () ;
      if (enumerator_4993.hasCurrentObject ()) {
        bool_4 = var_circularReference_4959.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_circularReference_4959.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumDeclarationAST temp_9 = this ;
      cEnumerator_enumConstantList enumerator_5544 (temp_9.readProperty_mConstantList (), kENUMERATION_UP) ;
      while (enumerator_5544.hasCurrentObject ()) {
        cEnumerator__32_lstringlist enumerator_5620 (enumerator_5544.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_5620.hasCurrentObject ()) {
          GALGAS_lstring var_propertyKey_5672 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5620.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 157)), enumerator_5620.current_mValue_30_ (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 157)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, var_propertyKey_5672.readProperty_string ().objectCompare (var_key_4731.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4731, var_propertyKey_5672 COMMA_SOURCE_FILE ("type-enum.galgas", 159)) ;
              }
            }
          }
          enumerator_5620.gotoNextObject () ;
        }
        enumerator_5544.gotoNextObject () ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorMap var_constructorMap_6630 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 177)) ;
  GALGAS_setterMap var_setterMap_6667 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 178)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6707 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 179)) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_6798 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 181)) ;
  GALGAS_unifiedTypeMapEntry var_enumTypeEntry_6900 ;
  {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mEnumTypeName (), var_enumTypeEntry_6900, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 183)) ;
  }
  GALGAS_constantIndexMap var_constantMap_6957 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 185)) ;
  GALGAS_bool var_hasAssociatedValues_6986 = GALGAS_bool (false) ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  cEnumerator_enumConstantList enumerator_7035 (temp_1.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_7035.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_7125 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 188)) ;
    GALGAS_functionSignature var_argumentTypeList_7176 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 189)) ;
    cEnumerator__32_lstringlist enumerator_7216 (enumerator_7035.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_7216.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_7312 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_7216.current_mValue_30_ (HERE), var_associatedTypeEntry_7312, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 191)) ;
      }
      var_argumentTypeList_7176.addAssign_operation (enumerator_7216.current_mValue_31_ (HERE), var_associatedTypeEntry_7312, enumerator_7216.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 192)) ;
      var_associatedTypeList_7125.addAssign_operation (var_associatedTypeEntry_7312  COMMA_SOURCE_FILE ("type-enum.galgas", 193)) ;
      var_hasAssociatedValues_6986 = GALGAS_bool (true) ;
      enumerator_7216.gotoNextObject () ;
    }
    {
    var_constantMap_6957.setter_insertKey (enumerator_7035.current_mConstantName (HERE), var_constantMap_6957.getter_count (SOURCE_FILE ("type-enum.galgas", 196)), var_associatedTypeList_7125, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 196)) ;
    }
    {
    var_constructorMap_6630.setter_insertOrReplace (enumerator_7035.current_mConstantName (HERE), var_argumentTypeList_7176, GALGAS_bool (false), var_enumTypeEntry_6900 COMMA_SOURCE_FILE ("type-enum.galgas", 197)) ;
    }
    enumerator_7035.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_2 = this ;
  cEnumerator_enumConstantList enumerator_7750 (temp_2.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_7750.hasCurrentObject ()) {
    GALGAS_optionalMethodSignature var_argumentTypeList_7840 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 206)) ;
    cEnumerator__32_lstringlist enumerator_7880 (enumerator_7750.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_7880.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_7976 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_7880.current_mValue_30_ (HERE), var_associatedTypeEntry_7976, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 208)) ;
      }
      var_argumentTypeList_7840.addAssign_operation (GALGAS_bool (false), enumerator_7880.current_mValue_31_ (HERE), var_associatedTypeEntry_7976, enumerator_7880.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 209)) ;
      enumerator_7880.gotoNextObject () ;
    }
    {
    var_optionalMethodMap_6798.setter_insertKey (enumerator_7750.current_mConstantName (HERE), var_argumentTypeList_7840, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 211)) ;
    }
    enumerator_7750.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_3 = this ;
  cEnumerator_enumConstantList enumerator_8225 (temp_3.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_8225.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_8225.current_mAssociatedValueDefinitionList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 218)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_unifiedTypeMapEntryList var_associatedTypeList_8372 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 219)) ;
        GALGAS_formalParameterSignature var_argumentTypeList_8432 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 220)) ;
        cEnumerator__32_lstringlist enumerator_8474 (enumerator_8225.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_8474.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_8572 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8474.current_mValue_30_ (HERE), var_associatedTypeEntry_8572, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 222)) ;
          }
          var_argumentTypeList_8432.addAssign_operation (enumerator_8474.current_mValue_31_ (HERE), var_associatedTypeEntry_8572, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-enum.galgas", 223)), enumerator_8474.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 223)) ;
          var_associatedTypeList_8372.addAssign_operation (var_associatedTypeEntry_8572  COMMA_SOURCE_FILE ("type-enum.galgas", 224)) ;
          var_hasAssociatedValues_6986 = GALGAS_bool (true) ;
          enumerator_8474.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_6707.setter_insertKey (enumerator_8225.current_mConstantName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-enum.galgas", 229)), var_argumentTypeList_8432, enumerator_8225.current_mConstantName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-enum.galgas", 233)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 227)) ;
        }
      }
    }
    enumerator_8225.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap_9069 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_9069, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 239)) ;
  }
  const GALGAS_enumDeclarationAST temp_5 = this ;
  cEnumerator_enumConstantList enumerator_9101 (temp_5.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_9101.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument (var_getterMap_9069, ioArgument_ioTypeMap, GALGAS_string ("is").add_operation (enumerator_9101.current_mConstantName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-enum.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 244)), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 241)) ;
    }
    enumerator_9101.gotoNextObject () ;
  }
  {
  const GALGAS_enumDeclarationAST temp_6 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_6.readProperty_mEnumTypeName (), GALGAS_bool (false), var_getterMap_9069, var_setterMap_6667, var_instanceMethodMap_6707, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 251)) ;
  }
  GALGAS_string var_defaultConstructorName_9745 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_enumDeclarationAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mDefaultConstantName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_unifiedTypeMapEntryList var_associatedTypeList_9908 ;
      const GALGAS_enumDeclarationAST temp_9 = this ;
      GALGAS_uint joker_9900 ; // Joker input parameter
      var_constantMap_6957.method_searchKey (temp_9.readProperty_mDefaultConstantName (), joker_9900, var_associatedTypeList_9908, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 267)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsEqual, var_associatedTypeList_9908.getter_count (SOURCE_FILE ("type-enum.galgas", 268)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_enumDeclarationAST temp_11 = this ;
          var_defaultConstructorName_9745 = temp_11.readProperty_mDefaultConstantName ().readProperty_string () ;
        }
      }
      if (kBoolFalse == test_10) {
        const GALGAS_enumDeclarationAST temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mDefaultConstantName ().readProperty_location (), GALGAS_string ("the default constant should have no associated values"), fixItArray13  COMMA_SOURCE_FILE ("type-enum.galgas", 271)) ;
      }
    }
  }
  const GALGAS_enumDeclarationAST temp_14 = this ;
  const GALGAS_enumDeclarationAST temp_15 = this ;
  const GALGAS_enumDeclarationAST temp_16 = this ;
  const GALGAS_enumDeclarationAST temp_17 = this ;
  GALGAS_headerKind temp_18 ;
  const enumGalgasBool test_19 = var_hasAssociatedValues_6986.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-enum.galgas", 302)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-enum.galgas", 302)) ;
  }
  GALGAS_unifiedTypeDefinition var_typeDefinition_10189 = GALGAS_unifiedTypeDefinition::constructor_new (temp_14.readProperty_mEnumTypeName (), temp_15.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-enum.galgas", 279)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("type-enum.galgas", 280)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 282)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 283)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 284)), var_constructorMap_6630, var_getterMap_9069, var_setterMap_6667, var_instanceMethodMap_6707, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 289)), var_optionalMethodMap_6798, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 291)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-enum.galgas", 292)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-enum.galgas", 292)) COMMA_SOURCE_FILE ("type-enum.galgas", 292)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 293)), var_constantMap_6957, temp_16.readProperty_mConstantList (), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 296)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 297)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-enum.galgas", 299)), var_defaultConstructorName_9745, GALGAS_string ("enum-").add_operation (temp_17.readProperty_mEnumTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-enum.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 301)), temp_18  COMMA_SOURCE_FILE ("type-enum.galgas", 275)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_10189.readProperty_mTypeName (), var_typeDefinition_10189, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 304)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_11816 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mEnumTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 321)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11816, var_nameForUsefulness_11816, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 322)) ;
  }
  GALGAS_stringlist var_constantList_11988 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 324)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration_12055 = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 325)) ;
  GALGAS_constantIndexMap var_constantMap_12096 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 326)) ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  cEnumerator_enumConstantList enumerator_12152 (temp_1.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_12152.hasCurrentObject ()) {
    var_constantList_11988.addAssign_operation (enumerator_12152.current_mConstantName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 328)) ;
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_12284 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 329)) ;
    GALGAS_stringset var_associatedValueNameSet_12327 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-enum.galgas", 330)) ;
    cEnumerator__32_lstringlist enumerator_12372 (enumerator_12152.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_12372.hasCurrentObject ()) {
      GALGAS_lstring var_propertyTypeNameForUsefulness_12428 = function_typeNameForUsefulEntitiesGraph (enumerator_12372.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 332)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_11816, var_propertyTypeNameForUsefulness_12428 COMMA_SOURCE_FILE ("type-enum.galgas", 333)) ;
      }
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_12602 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_12372.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 334)) ;
      var_associatedTypeList_12284.addAssign_operation (var_associatedTypeEntry_12602  COMMA_SOURCE_FILE ("type-enum.galgas", 335)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_associatedValueNameSet_12327.getter_hasKey (enumerator_12372.current_mValue_31_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-enum.galgas", 336)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_12372.current_mValue_31_ (HERE).readProperty_location (), GALGAS_string ("duplicated name"), fixItArray3  COMMA_SOURCE_FILE ("type-enum.galgas", 337)) ;
        }
      }
      var_associatedValueNameSet_12327.addAssign_operation (enumerator_12372.current_mValue_31_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 339)) ;
      enumerator_12372.gotoNextObject () ;
    }
    {
    var_constantMap_12096.setter_insertKey (enumerator_12152.current_mConstantName (HERE), var_constantMap_12096.getter_count (SOURCE_FILE ("type-enum.galgas", 341)), var_associatedTypeList_12284, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 341)) ;
    }
    var_enumConstantListForGeneration_12055.addAssign_operation (enumerator_12152.current_mConstantName (HERE).readProperty_string (), var_associatedTypeList_12284  COMMA_SOURCE_FILE ("type-enum.galgas", 342)) ;
    enumerator_12152.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_13056 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_4.readProperty_mEnumTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 345)) ;
  const GALGAS_enumDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (temp_5.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 347)), GALGAS_enumTypeForGeneration::constructor_new (var_selfType_13056, var_enumConstantListForGeneration_12055  COMMA_SOURCE_FILE ("type-enum.galgas", 348))  COMMA_SOURCE_FILE ("type-enum.galgas", 346)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_enumGenerationTemplate_0,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" enum"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n\n//--------------------------------- Enumeration\n  public: typedef enum {\n    kNotBuilt" ;
  GALGAS_uint index_651_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_651 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_651.hasCurrentObject ()) {
      result << ",\n    kEnum_" ;
      result << enumerator_651.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 15)).stringValue () ;
      index_651_.increment () ;
      enumerator_651.gotoNextObject () ;
    }
  }
  result << "\n  } enumeration ;\n  \n//--------------------------------- Private data member\n" ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;\n  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {\n    return mAssociatedValues.unsafePointer () ;\n  }\n\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "  private: enumeration mEnum ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }\n  public: inline enumeration enumValue (void) const { return mEnum ; }\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
    result << GALGAS_string (" Phase 2: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).add_operation (GALGAS_string (" enum, associated values"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).stringValue () ;
    result << "\n//\n" ;
    GALGAS_uint index_289_ (0) ;
    if (in_CONSTANT_5F_LIST.isValid ()) {
      cEnumerator_enumConstantListForGeneration enumerator_289 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_289.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_289.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 8)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "//----------------------------------------------------------------------------------------------------------------------\n\nclass cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_289.current_mConstantName (HERE).stringValue () ;
          result << " : public cEnumAssociatedValues {\n" ;
          GALGAS_uint index_623_idx (0) ;
          if (enumerator_289.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_623 (enumerator_289.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_623.hasCurrentObject ()) {
              result << "  public: const GALGAS_" ;
              result << extensionGetter_identifierRepresentation (enumerator_623.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " mAssociatedValue" ;
              result << index_623_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " ;\n" ;
              index_623_idx.increment () ;
              enumerator_623.gotoNextObject () ;
            }
          }
          result << "\n//--- Constructor\n  public: cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_289.current_mConstantName (HERE).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_904_idx (0) ;
          if (enumerator_289.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_904 (enumerator_289.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_904.hasCurrentObject ()) {
              result << "const GALGAS_" ;
              result << extensionGetter_identifierRepresentation (enumerator_904.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              result << " inAssociatedValue" ;
              result << index_904_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              if (enumerator_904.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_904_idx.increment () ;
              enumerator_904.gotoNextObject () ;
            }
          }
          result << "\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS) ;\n\n  public: virtual void description (" ;
          columnMarker = result.currentColumn () ;
          result << "C_String & ioString,\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "const int32_t inIndentation) const ;\n  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;\n\n  public: virtual ~ cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_289.current_mConstantName (HERE).stringValue () ;
          result << " (void) {}\n} ;\n\n" ;
        }else if (kBoolFalse == test_1) {
        }
        index_289_.increment () ;
        enumerator_289.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                                         const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  GALGAS_uint index_64_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_64 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_64.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_64.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 3)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n\ncEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_64.current_mConstantName (HERE).stringValue () ;
        result << "::cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_64.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_424_idx (0) ;
        if (enumerator_64.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_424 (enumerator_64.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_424.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_424.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            result << " inAssociatedValue" ;
            result << index_424_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            if (enumerator_424.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_424_idx.increment () ;
            enumerator_424.gotoNextObject () ;
          }
        }
        result << "\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) :\ncEnumAssociatedValues (THERE)" ;
        GALGAS_uint index_660_idx (0) ;
        if (enumerator_64.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_660 (enumerator_64.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_660.hasCurrentObject ()) {
            result << ",\nmAssociatedValue" ;
            result << index_660_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << " (inAssociatedValue" ;
            result << index_660_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << ")" ;
            index_660_idx.increment () ;
            enumerator_660.gotoNextObject () ;
          }
        }
        result << " {\n} ;\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_64.current_mConstantName (HERE).stringValue () ;
        result << "::description (" ;
        columnMarker = result.currentColumn () ;
        result << "C_String & ioString,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "const int32_t inIndentation) const {\n  ioString << \"(\\n\" ;\n" ;
        GALGAS_uint index_1163_idx (0) ;
        if (enumerator_64.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1163 (enumerator_64.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1163.hasCurrentObject ()) {
            result << "  mAssociatedValue" ;
            result << index_1163_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue () ;
            result << ".description (ioString, inIndentation) ;\n" ;
            index_1163_idx.increment () ;
            enumerator_1163.gotoNextObject () ;
          }
        }
        result << "  ioString << \")\" ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ntypeComparisonResult cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_64.current_mConstantName (HERE).stringValue () ;
        result << "::compare (const cEnumAssociatedValues * inOperand) const {\n  const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_64.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = dynamic_cast<const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_64.current_mConstantName (HERE).stringValue () ;
        result << " *> (inOperand) ;\n  macroValidPointer (ptr) ;\n  typeComparisonResult result = kOperandEqual ;\n" ;
        GALGAS_uint index_1893_idx (0) ;
        if (enumerator_64.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1893 (enumerator_64.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1893.hasCurrentObject ()) {
            result << "  if (result == kOperandEqual) {\n    result = mAssociatedValue" ;
            result << index_1893_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ".objectCompare (ptr->mAssociatedValue" ;
            result << index_1893_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ") ;\n  }\n" ;
            index_1893_idx.increment () ;
            enumerator_1893.gotoNextObject () ;
          }
        }
        result << "  return result ;\n}\n\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_64_.increment () ;
      enumerator_64.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  const enumGalgasBool test_1 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "mAssociatedValues (),\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "mEnum (kNotBuilt) {\n}\n\n" ;
  GALGAS_uint index_2459_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_2459 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2459.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_2459.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 54)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2459.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 55)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "UNUSED_LOCATION_ARGS" ;
      }else if (kBoolFalse == test_2) {
        GALGAS_uint index_2842_idx (0) ;
        if (enumerator_2459.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_2842 (enumerator_2459.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_2842.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_2842.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            result << " & inAssociatedValue" ;
            result << index_2842_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            if (enumerator_2842.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_2842_idx.increment () ;
            enumerator_2842.gotoNextObject () ;
          }
        }
        result << "\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS" ;
      }
      result << ") {\n  GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " result ;\n" ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2459.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  result.mEnum = kEnum_" ;
        result << enumerator_2459.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 67)).stringValue () ;
        result << " ;\n" ;
      }else if (kBoolFalse == test_3) {
        result << "  if (" ;
        GALGAS_uint index_3247_idx (0) ;
        if (enumerator_2459.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3247 (enumerator_2459.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3247.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3247_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 71)).stringValue () ;
            result << ".isValid ()" ;
            if (enumerator_3247.hasNextObject ()) {
              result << " && " ;
            }
            index_3247_idx.increment () ;
            enumerator_3247.gotoNextObject () ;
          }
        }
        result << ") {\n    result.mEnum = kEnum_" ;
        result << enumerator_2459.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 75)).stringValue () ;
        result << " ;\n    cEnumAssociatedValues * ptr = nullptr ;\n    macroMyNew (ptr, cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_2459.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        GALGAS_uint index_3607_idx (0) ;
        if (enumerator_2459.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3607 (enumerator_2459.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3607.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3607_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).stringValue () ;
            if (enumerator_3607.hasNextObject ()) {
              result << ", " ;
            }
            index_3607_idx.increment () ;
            enumerator_3607.gotoNextObject () ;
          }
        }
        result << " COMMA_THERE)) ;\n    result.mAssociatedValues.setPointer (ptr) ;\n    macroDetachSharedObject (ptr) ;\n  }\n" ;
      }
      result << "  return result ;\n}\n\n" ;
      index_2459_.increment () ;
      enumerator_2459.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3914_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_3914 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3914.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, enumerator_3914.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 92)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::method_" ;
        result << enumerator_3914.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 94)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_4236_idx (0) ;
        if (enumerator_3914.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4236 (enumerator_3914.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4236.hasCurrentObject ()) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_4236.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << " & outAssociatedValue" ;
            result << index_4236_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            index_4236_idx.increment () ;
            enumerator_4236.gotoNextObject () ;
          }
        }
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) const {\n  if (mEnum != kEnum_" ;
        result << enumerator_3914.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 100)).stringValue () ;
        result << ") {\n" ;
        GALGAS_uint index_4538_idx (0) ;
        if (enumerator_3914.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4538 (enumerator_3914.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4538.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_4538_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 102)).stringValue () ;
            result << ".drop () ;\n" ;
            index_4538_idx.increment () ;
            enumerator_4538.gotoNextObject () ;
          }
        }
        result << "    C_String s ;\n    s << \"method @" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " " ;
        result << enumerator_3914.current_mConstantName (HERE).stringValue () ;
        result << " invoked with an invalid enum value\" ;\n    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n  }else{\n    const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3914.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3914.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n" ;
        GALGAS_uint index_5037_idx (0) ;
        if (enumerator_3914.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_5037 (enumerator_3914.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_5037.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_5037_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " = ptr->mAssociatedValue" ;
            result << index_5037_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " ;\n" ;
            index_5037_idx.increment () ;
            enumerator_5037.gotoNextObject () ;
          }
        }
        result << "  }\n}\n\n" ;
      }else if (kBoolFalse == test_4) {
      }
      index_3914_.increment () ;
      enumerator_3914.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5237_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5237 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5237.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nbool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::optional_" ;
      result << enumerator_5237.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 120)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_5518_idx (0) ;
      if (enumerator_5237.current_mAssociatedValueTypeList (HERE).isValid ()) {
        cEnumerator_unifiedTypeMapEntryList enumerator_5518 (enumerator_5237.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
        while (enumerator_5518.hasCurrentObject ()) {
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_5518.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue () ;
          result << " & outAssociatedValue" ;
          result << index_5518_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue () ;
          if (enumerator_5518.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_5518_idx.increment () ;
          enumerator_5518.gotoNextObject () ;
        }
      }
      result << ") const {\n  const bool ok = mEnum == kEnum_" ;
      result << enumerator_5237.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 128)).stringValue () ;
      result << " ;\n" ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, enumerator_5237.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 129)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "  if (ok) {\n    const auto * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5237.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n" ;
        GALGAS_uint index_5992_idx (0) ;
        if (enumerator_5237.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_5992 (enumerator_5237.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_5992.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_5992_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 133)).stringValue () ;
            result << " = ptr->mAssociatedValue" ;
            result << index_5992_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 133)).stringValue () ;
            result << " ;\n" ;
            index_5992_idx.increment () ;
            enumerator_5992.gotoNextObject () ;
          }
        }
        result << "  }\n" ;
      }else if (kBoolFalse == test_5) {
      }
      result << "  return ok ;\n}\n\n" ;
      index_5237_.increment () ;
      enumerator_5237.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n\nstatic const char * gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [" ;
  result << in_CONSTANT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 143)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 143)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 143)).stringValue () ;
  result << "] = {\n  \"(not built)\"" ;
  GALGAS_uint index_6471_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6471 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6471.hasCurrentObject ()) {
      result << ",\n  " ;
      result << enumerator_6471.current_mConstantName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 146)).stringValue () ;
      index_6471_.increment () ;
      enumerator_6471.gotoNextObject () ;
    }
  }
  result << "\n} ;\n\n" ;
  GALGAS_uint index_6611_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6611 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6611.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_is" ;
      result << enumerator_6611.current_mConstantName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n  return GALGAS_bool (kNotBuilt != mEnum, kEnum_" ;
      result << enumerator_6611.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).stringValue () ;
      result << " == mEnum) ;\n}\n\n" ;
      index_6611_.increment () ;
      enumerator_6611.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (" ;
  columnMarker = result.currentColumn () ;
  result << "C_String & ioString,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t " ;
  const enumGalgasBool test_6 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "inIndentation" ;
  }else if (kBoolFalse == test_6) {
    result << "/* inIndentation */" ;
  }
  result << ") const {\n  ioString << \"<enum @" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << ": \" << gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [mEnum] ;\n" ;
  const enumGalgasBool test_7 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "  mAssociatedValues.description (ioString, inIndentation) ;\n" ;
  }else if (kBoolFalse == test_7) {
  }
  result << "  ioString << \">\" ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ntypeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n  typeComparisonResult result = kOperandNotValid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (mEnum < inOperand.mEnum) {\n      result = kFirstOperandLowerThanSecond ;\n    }else if (mEnum > inOperand.mEnum) {\n      result = kFirstOperandGreaterThanSecond ;\n    }else{\n" ;
  const enumGalgasBool test_8 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;\n" ;
  }else if (kBoolFalse == test_8) {
    result << "      result = kOperandEqual ;\n" ;
  }
  result << "    }\n  }\n  return result ;\n}\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GALGAS_string & outArgument_outHeader,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_hasAssociatedValues_15021 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_15058 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_15021.operator_not (SOURCE_FILE ("type-enum.galgas", 401)).isValidAndTrue () ;
  if (enumerator_15058.hasCurrentObject () && bool_1) {
    while (enumerator_15058.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_15021 = GALGAS_bool (kIsStrictSup, enumerator_15058.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 402)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_15058.gotoNextObject () ;
      if (enumerator_15058.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_15021.operator_not (SOURCE_FILE ("type-enum.galgas", 401)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_15214 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 404)) ;
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, var_selfTypedefinition_15214.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_15214.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 407)), temp_3.readProperty_mConstantList (), var_hasAssociatedValues_15021 COMMA_SOURCE_FILE ("type-enum.galgas", 405))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_15214.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_15214.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 413)), var_selfTypedefinition_15214.readProperty_mIsConcrete (), var_selfTypedefinition_15214.readProperty_mConstructorMap (), var_selfTypedefinition_15214.readProperty_mGetterMap (), var_selfTypedefinition_15214.readProperty_mSetterMap (), var_selfTypedefinition_15214.readProperty_mInstanceMethodMap (), var_selfTypedefinition_15214.readProperty_mClassMethodMap (), var_selfTypedefinition_15214.readProperty_mOptionalMethodMap (), var_selfTypedefinition_15214.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_15214.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_15214.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_15214.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-enum.galgas", 411))), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 411)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendDeclaration_32_ (const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                               GALGAS_string & outArgument_outHeader,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_hasAssociatedValues_16440 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_16477 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_16440.operator_not (SOURCE_FILE ("type-enum.galgas", 436)).isValidAndTrue () ;
  if (enumerator_16477.hasCurrentObject () && bool_1) {
    while (enumerator_16477.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_16440 = GALGAS_bool (kIsStrictSup, enumerator_16477.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 437)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_16477.gotoNextObject () ;
      if (enumerator_16477.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_16440.operator_not (SOURCE_FILE ("type-enum.galgas", 436)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_16636 (temp_2.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_16636.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapEntryList enumerator_16696 (enumerator_16636.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_16696.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName_31_ (enumerator_16696.current_mEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 441)) ;
      enumerator_16696.gotoNextObject () ;
    }
    enumerator_16636.gotoNextObject () ;
  }
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_16804 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 444)) ;
  const GALGAS_enumTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, var_selfTypedefinition_16804.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_16804.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 447)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_16440 COMMA_SOURCE_FILE ("type-enum.galgas", 445))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_string & outArgument_outImplementation,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_hasAssociatedValues_17393 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_17430 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_17393.operator_not (SOURCE_FILE ("type-enum.galgas", 461)).isValidAndTrue () ;
  if (enumerator_17430.hasCurrentObject () && bool_1) {
    while (enumerator_17430.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_17393 = GALGAS_bool (kIsStrictSup, enumerator_17430.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 462)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_17430.gotoNextObject () ;
      if (enumerator_17430.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_17393.operator_not (SOURCE_FILE ("type-enum.galgas", 461)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 464)) ;
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_17645 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 465)) ;
  const GALGAS_enumTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, var_selfTypedefinition_17645.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_17645.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 468)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_17393 COMMA_SOURCE_FILE ("type-enum.galgas", 466))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                    GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                    GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                    GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_12997 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 322)), temp_1.readProperty_mExternTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-extern.galgas", 322)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_12997, temp_2, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 323)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                              const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                              const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_getterMap var_getterMap_13913 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_13913, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 337)) ;
  }
  GALGAS_constructorMap var_constructorMap_13947 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 338)) ;
  GALGAS_setterMap var_setterMap_13984 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 339)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_14024 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 340)) ;
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  cEnumerator_externTypeConstructorList enumerator_14105 (temp_0.readProperty_mExternTypeConstructorList (), kENUMERATION_UP) ;
  while (enumerator_14105.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_returnedTypeEntry_14208 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_14105.current_mResultTypeName (HERE), var_returnedTypeEntry_14208, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 343)) ;
    }
    GALGAS_functionSignature var_arguments_14261 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 345)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_14326 (enumerator_14105.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_14326.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_14429 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_14326.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_14429, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 347)) ;
      }
      var_arguments_14261.addAssign_operation (enumerator_14326.current_mFormalSelector (HERE), var_argumentTypeEntry_14429, enumerator_14326.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 348)) ;
      enumerator_14326.gotoNextObject () ;
    }
    {
    var_constructorMap_13947.setter_insertKey (enumerator_14105.current_mConstructorName (HERE), var_arguments_14261, GALGAS_bool (true), var_returnedTypeEntry_14208, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 351)) ;
    }
    enumerator_14105.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  cEnumerator_externTypeGetterList enumerator_14751 (temp_1.readProperty_mExternTypeGetterList (), kENUMERATION_UP) ;
  while (enumerator_14751.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_returnedTypeEntry_14849 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_14751.current_mResultTypeName (HERE), var_returnedTypeEntry_14849, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 360)) ;
    }
    GALGAS_functionSignature var_arguments_14902 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 362)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_14967 (enumerator_14751.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_14967.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_15070 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_14967.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_15070, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 364)) ;
      }
      var_arguments_14902.addAssign_operation (enumerator_14967.current_mFormalSelector (HERE), var_argumentTypeEntry_15070, enumerator_14967.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 365)) ;
      enumerator_14967.gotoNextObject () ;
    }
    {
    var_getterMap_13913.setter_insertKey (enumerator_14751.current_mGetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 370)), var_arguments_14902, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 372)), GALGAS_bool (true), var_returnedTypeEntry_14849, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 375)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 368)) ;
    }
    enumerator_14751.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  cEnumerator_externTypeSetterList enumerator_15525 (temp_2.readProperty_mExternTypeSetterList (), kENUMERATION_UP) ;
  while (enumerator_15525.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_15614 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 381)) ;
    cEnumerator_formalParameterListAST enumerator_15732 (enumerator_15525.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_15732.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_15858 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_15732.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_15858, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 383)) ;
      }
      var_routineSignature_15614.addAssign_operation (enumerator_15732.current_mFormalSelector (HERE), var_parameterTypeIndex_15858, enumerator_15732.current_mFormalArgumentPassingMode (HERE), enumerator_15732.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 387)) ;
      enumerator_15732.gotoNextObject () ;
    }
    {
    var_setterMap_13984.setter_insertKey (enumerator_15525.current_mSetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 392)), var_routineSignature_15614, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 395)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 390)) ;
    }
    enumerator_15525.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  cEnumerator_externTypeMethodList enumerator_16301 (temp_3.readProperty_mExternTypeMethodList (), kENUMERATION_UP) ;
  while (enumerator_16301.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_16364 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 401)) ;
    cEnumerator_formalParameterListAST enumerator_16508 (enumerator_16301.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_16508.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_16613 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16508.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_16613, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 403)) ;
      }
      var_routineSignature_16364.addAssign_operation (enumerator_16508.current_mFormalSelector (HERE), var_parameterTypeIndex_16613, enumerator_16508.current_mFormalArgumentPassingMode (HERE), enumerator_16508.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 407)) ;
      enumerator_16508.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_14024.setter_insertKey (enumerator_16301.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 412)), var_routineSignature_16364, enumerator_16301.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 416)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 410)) ;
    }
    enumerator_16301.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  const GALGAS_externTypeDeclarationAST temp_6 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_17073 = GALGAS_unifiedTypeDefinition::constructor_new (temp_4.readProperty_mExternTypeName (), temp_5.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-extern.galgas", 425)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("type-extern.galgas", 426)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 428)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 429)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 430)), var_constructorMap_13947, var_getterMap_13913, var_setterMap_13984, var_instanceMethodMap_14024, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 435)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 436)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 437)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-extern.galgas", 438)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 439)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 440)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 441)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 442)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 443)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-extern.galgas", 445)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (temp_6.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-extern.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 447)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-extern.galgas", 448))  COMMA_SOURCE_FILE ("type-extern.galgas", 421)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_17073.readProperty_mTypeName (), var_typeDefinition_17073, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 450)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_string /* constinArgument_inProductDirectory */,
                                                             const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                             GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_18613 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 467)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_18613, var_nameForUsefulness_18613, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 468)) ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (temp_1.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 471)), GALGAS_externTypeDeclarationForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_2.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 473)), temp_3.readProperty_mExternTypeName ().readProperty_string (), temp_4.readProperty_mCppPreDeclarationCode (), temp_5.readProperty_mCppClassCode ()  COMMA_SOURCE_FILE ("type-extern.galgas", 472))  COMMA_SOURCE_FILE ("type-extern.galgas", 470)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externTypeDeclarationForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_19802 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 495)) ;
  const GALGAS_externTypeDeclarationForGeneration temp_1 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_2 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, var_selfTypedefinition_19802.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 498)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode () COMMA_SOURCE_FILE ("type-extern.galgas", 496))) ;
  const GALGAS_externTypeDeclarationForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_19802.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 504)), var_selfTypedefinition_19802.readProperty_mIsConcrete (), var_selfTypedefinition_19802.readProperty_mConstructorMap (), var_selfTypedefinition_19802.readProperty_mGetterMap (), var_selfTypedefinition_19802.readProperty_mSetterMap (), var_selfTypedefinition_19802.readProperty_mInstanceMethodMap (), var_selfTypedefinition_19802.readProperty_mClassMethodMap (), var_selfTypedefinition_19802.readProperty_mOptionalMethodMap (), var_selfTypedefinition_19802.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_19802.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_19802.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_19802.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-extern.galgas", 502))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 502)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  const GALGAS_graphDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3950 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 102)), temp_1.readProperty_mGraphTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 102)) ;
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3950, temp_2, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 103)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3950, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 104)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 104)) COMMA_SOURCE_FILE ("type-graph.galgas", 104)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeEntry_5002 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeEntry_5002, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 118)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringTypeEntry_5126 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstring"), var_lstringTypeEntry_5126, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 123)) ;
  }
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_5249 ;
  {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mGraphTypeName (), var_graphTypeEntry_5249, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 128)) ;
  }
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_5389 ;
  {
  const GALGAS_graphDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mAssociatedListTypeName (), var_associatedListTypeEntry_5389, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 133)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringListTypeEntry_5530 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeEntry_5530, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 138)) ;
  }
  GALGAS_getterMap var_getterMap_5618 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_5618, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 143)) ;
  }
  GALGAS_constructorMap var_constructorMap_5652 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 144)) ;
  GALGAS_setterMap var_setterMap_5689 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 145)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5729 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 146)) ;
  GALGAS_formalParameterSignature var_formalParameterList_5818 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 148)) ;
  var_formalParameterList_5818.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 150)), var_associatedListTypeEntry_5389, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 152)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 149)) ;
  var_formalParameterList_5818.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 155)), var_lstringListTypeEntry_5530, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 157)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 154)) ;
  var_formalParameterList_5818.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 160)), var_associatedListTypeEntry_5389, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 162)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 159)) ;
  var_formalParameterList_5818.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 165)), var_lstringListTypeEntry_5530, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 167)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 164)) ;
  {
  var_instanceMethodMap_5729.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 170))  COMMA_SOURCE_FILE ("type-graph.galgas", 170)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 171)), var_formalParameterList_5818, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 173)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 175)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 169)) ;
  }
  {
  var_instanceMethodMap_5729.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 179))  COMMA_SOURCE_FILE ("type-graph.galgas", 179)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 180)), var_formalParameterList_5818, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 182)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 184)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 178)) ;
  }
  var_formalParameterList_5818 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 189)) ;
  var_formalParameterList_5818.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 191)), var_associatedListTypeEntry_5389, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 193)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 190)) ;
  var_formalParameterList_5818.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 196)), var_lstringListTypeEntry_5530, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 198)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 195)) ;
  {
  var_instanceMethodMap_5729.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("circularities"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 201))  COMMA_SOURCE_FILE ("type-graph.galgas", 201)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 202)), var_formalParameterList_5818, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 204)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 206)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 200)) ;
  }
  {
  var_instanceMethodMap_5729.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 210))  COMMA_SOURCE_FILE ("type-graph.galgas", 210)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 211)), var_formalParameterList_5818, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 213)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 215)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 209)) ;
  }
  {
  var_instanceMethodMap_5729.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 219))  COMMA_SOURCE_FILE ("type-graph.galgas", 219)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 220)), var_formalParameterList_5818, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 222)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 224)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 218)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5618, ioArgument_ioTypeMap, GALGAS_string ("nodeList"), GALGAS_string::makeEmptyString (), temp_2.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 229)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5618, ioArgument_ioTypeMap, GALGAS_string ("reversedGraph"), GALGAS_string::makeEmptyString (), temp_3.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 238)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5618, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 247)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5618, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 256)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5618, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 265)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5618, ioArgument_ioTypeMap, GALGAS_string ("graphviz"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 274)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_5618, ioArgument_ioTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 283)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_5618, ioArgument_ioTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 293)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5618, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 303)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5618, ioArgument_ioTypeMap, GALGAS_string ("lkeyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 312)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5618, ioArgument_ioTypeMap, GALGAS_string ("edges"), GALGAS_string::makeEmptyString (), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 321)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_5618, ioArgument_ioTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), temp_4.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 330)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_5618, ioArgument_ioTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 344)) ;
  }
  {
  var_constructorMap_5652.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 355))  COMMA_SOURCE_FILE ("type-graph.galgas", 355)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 356)), GALGAS_bool (false), var_graphTypeEntry_5249, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 354)) ;
  }
  var_formalParameterList_5818 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 361)) ;
  var_formalParameterList_5818.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 363)), var_lstringTypeEntry_5126, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 365)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 362)) ;
  cEnumerator_functionSignature enumerator_12204 (extensionGetter_definition (var_associatedListTypeEntry_5389, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 367)).readProperty_mAddAssignOperatorArguments (), kENUMERATION_UP) ;
  while (enumerator_12204.hasCurrentObject ()) {
    var_formalParameterList_5818.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 369)), enumerator_12204.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 371)), enumerator_12204.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 368)) ;
    enumerator_12204.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_5 = this ;
  cEnumerator_graphInsertModifierList enumerator_12478 (temp_5.readProperty_mInsertModifierList (), kENUMERATION_UP) ;
  while (enumerator_12478.hasCurrentObject ()) {
    {
    var_setterMap_5689.setter_insertOrReplace (enumerator_12478.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 377)), var_formalParameterList_5818, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 380)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 375)) ;
    }
    enumerator_12478.gotoNextObject () ;
  }
  {
  var_setterMap_5689.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 387))  COMMA_SOURCE_FILE ("type-graph.galgas", 387)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 388)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 389)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 391)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 386)) ;
  }
  var_formalParameterList_5818 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 395)) ;
  var_formalParameterList_5818.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 396)), var_stringTypeEntry_5002, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 396)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 396)) ;
  {
  var_setterMap_5689.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 398))  COMMA_SOURCE_FILE ("type-graph.galgas", 398)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 399)), var_formalParameterList_5818, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 402)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 397)) ;
  }
  var_formalParameterList_5818 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 407)) ;
  var_formalParameterList_5818.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 408)), var_lstringTypeEntry_5126, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 408)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 408)) ;
  var_formalParameterList_5818.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 409)), var_lstringTypeEntry_5126, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 409)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 409)) ;
  {
  var_setterMap_5689.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 411))  COMMA_SOURCE_FILE ("type-graph.galgas", 411)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 412)), var_formalParameterList_5818, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 415)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 410)) ;
  }
  var_formalParameterList_5818 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 420)) ;
  var_formalParameterList_5818.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 421)), var_lstringTypeEntry_5126, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 421)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 421)) ;
  {
  var_setterMap_5689.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 423))  COMMA_SOURCE_FILE ("type-graph.galgas", 423)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 424)), var_formalParameterList_5818, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 427)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 422)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_6 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_6.readProperty_mGraphTypeName (), GALGAS_bool (false), var_getterMap_5618, var_setterMap_5689, var_instanceMethodMap_5729, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 432)) ;
  }
  const GALGAS_graphDeclarationAST temp_7 = this ;
  const GALGAS_graphDeclarationAST temp_8 = this ;
  const GALGAS_graphDeclarationAST temp_9 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_14891 = GALGAS_unifiedTypeDefinition::constructor_new (temp_7.readProperty_mGraphTypeName (), temp_8.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-graph.galgas", 450)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("type-graph.galgas", 451)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 453)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 454)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 455)), var_constructorMap_5652, var_getterMap_5618, var_setterMap_5689, var_instanceMethodMap_5729, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 460)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 461)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 462)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-graph.galgas", 463)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 464)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 465)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 466)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 467)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 468)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-graph.galgas", 470)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (temp_9.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-graph.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 472)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-graph.galgas", 473))  COMMA_SOURCE_FILE ("type-graph.galgas", 446)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14891.readProperty_mTypeName (), var_typeDefinition_14891, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 475)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                        const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                        const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_16557 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 492)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16557, var_nameForUsefulness_16557, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 493)) ;
  }
  const GALGAS_graphDeclarationAST temp_1 = this ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_16711 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 494)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16557, var_associatedTypeNameForUsefulness_16711 COMMA_SOURCE_FILE ("type-graph.galgas", 495)) ;
  }
  const GALGAS_graphDeclarationAST temp_2 = this ;
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_16907 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_2.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 497)) ;
  const GALGAS_graphDeclarationAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_16973 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_3.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 498)) ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  const GALGAS_graphDeclarationAST temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListElementTypeEntry_17057 = extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_4.readProperty_mAssociatedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 500)), temp_5.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 499)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_associatedListTypeEntry_16973, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 502)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-graph.galgas", 502)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_graphDeclarationAST temp_7 = this ;
      const GALGAS_graphDeclarationAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_8.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 503)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 503)), fixItArray9  COMMA_SOURCE_FILE ("type-graph.galgas", 503)) ;
    }
  }
  GALGAS_stringset temp_10 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-graph.galgas", 506)) ;
  temp_10.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("type-graph.galgas", 506)) ;
  temp_10.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("type-graph.galgas", 506)) ;
  GALGAS_stringset var_reservedModifierNames_17484 = temp_10 ;
  const GALGAS_graphDeclarationAST temp_11 = this ;
  cEnumerator_graphInsertModifierList enumerator_17560 (temp_11.readProperty_mInsertModifierList (), kENUMERATION_UP) ;
  while (enumerator_17560.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_reservedModifierNames_17484.getter_hasKey (enumerator_17560.current_mInsertModifierName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-graph.galgas", 508)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_17560.current_mInsertModifierName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17560.current_mInsertModifierName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 509)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 509)), fixItArray13  COMMA_SOURCE_FILE ("type-graph.galgas", 509)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_17560.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 511)) ;
    }
    enumerator_17560.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_14 = this ;
  const GALGAS_graphDeclarationAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (temp_14.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 515)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeEntry_16907, var_associatedListTypeEntry_16973, var_associatedListElementTypeEntry_17057, temp_15.readProperty_mInsertModifierList ()  COMMA_SOURCE_FILE ("type-graph.galgas", 516))  COMMA_SOURCE_FILE ("type-graph.galgas", 514)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                       GALGAS_string & outArgument_outHeader,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_18921 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 539)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, var_selfTypedefinition_18921.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 542)) COMMA_SOURCE_FILE ("type-graph.galgas", 540))) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_18921.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 546)), var_selfTypedefinition_18921.readProperty_mIsConcrete (), var_selfTypedefinition_18921.readProperty_mConstructorMap (), var_selfTypedefinition_18921.readProperty_mGetterMap (), var_selfTypedefinition_18921.readProperty_mSetterMap (), var_selfTypedefinition_18921.readProperty_mInstanceMethodMap (), var_selfTypedefinition_18921.readProperty_mClassMethodMap (), var_selfTypedefinition_18921.readProperty_mOptionalMethodMap (), var_selfTypedefinition_18921.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_18921.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_18921.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_18921.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-graph.galgas", 544))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 544)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outImplementation,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 567)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 568)) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedListElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 569)) ;
  const GALGAS_graphDeclarationForGeneration temp_3 = this ;
  const GALGAS_graphDeclarationForGeneration temp_4 = this ;
  const GALGAS_graphDeclarationForGeneration temp_5 = this ;
  const GALGAS_graphDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 572)), temp_5.readProperty_mAssociatedListTypeEntry (), temp_6.readProperty_mInsertModifierList () COMMA_SOURCE_FILE ("type-graph.galgas", 570))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listDeclarationAST temp_0 = this ;
  const GALGAS_listDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3863 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 104)), temp_1.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 104)) ;
  {
  const GALGAS_listDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3863, temp_2, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 105)) ;
  }
  const GALGAS_listDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_4021 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_4021.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_4021.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 107)), enumerator_4021.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 107)) COMMA_SOURCE_FILE ("type-list.galgas", 107)) ;
    }
    enumerator_4021.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typedPropertyList var_typedAttributeList_4901 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 123)) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_4998 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_4998.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_4998.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-list.galgas", 125)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4998.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a list"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 126)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_5213 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_4998.current_mPropertyTypeName (HERE), var_attributeTypeIndex_5213, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 128)) ;
    }
    var_typedAttributeList_4901.addAssign_operation (var_attributeTypeIndex_5213, enumerator_4998.current_mPropertyName (HERE), GALGAS_bool (true), enumerator_4998.current_selector (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 129)) ;
    enumerator_4998.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_uintType_5412 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("uint"), var_uintType_5412, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 132)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listTypeIndex_5494 ;
  {
  const GALGAS_listDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mListTypeName (), var_listTypeIndex_5494, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 134)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_5691 ;
  {
  const GALGAS_listDeclarationAST temp_4 = this ;
  const GALGAS_listDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_4.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 137)), temp_5.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 137)), var_listElementTypeIndex_5691, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 136)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5775 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 141)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_5827 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 142)) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_5893 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 143)) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_5961 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 144)) ;
  cEnumerator_typedPropertyList enumerator_6047 (var_typedAttributeList_4901, kENUMERATION_UP) ;
  while (enumerator_6047.hasCurrentObject ()) {
    GALGAS_string temp_6 ;
    const enumGalgasBool test_7 = enumerator_6047.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_7) {
      temp_6 = enumerator_6047.current_mPropertyName (HERE).readProperty_string () ;
    }else if (kBoolFalse == test_7) {
      temp_6 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_selector_6094 = temp_6 ;
    var_enumerationDescriptor_5775.addAssign_operation (enumerator_6047.current_mPropertyTypeEntry (HERE), enumerator_6047.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 147)) ;
    var_constructorAttributeTypeList_5827.addAssign_operation (var_selector_6094.getter_nowhere (SOURCE_FILE ("type-list.galgas", 149)), enumerator_6047.current_mPropertyTypeEntry (HERE), enumerator_6047.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 148)) ;
    var_setterOutputFormalArgumentList_5893.addAssign_operation (var_selector_6094.getter_nowhere (SOURCE_FILE ("type-list.galgas", 153)), enumerator_6047.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-list.galgas", 155)), enumerator_6047.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 152)) ;
    var_setterInputFormalArgumentList_5961.addAssign_operation (var_selector_6094.getter_nowhere (SOURCE_FILE ("type-list.galgas", 158)), enumerator_6047.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 160)), enumerator_6047.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 157)) ;
    enumerator_6047.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_6674 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 164)) ;
  {
  const GALGAS_listDeclarationAST temp_8 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_6674, ioArgument_ioTypeMap, GALGAS_string ("emptyList"), temp_8.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 165)) ;
  }
  {
  var_constructorMap_6674.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 173))  COMMA_SOURCE_FILE ("type-list.galgas", 173)), var_constructorAttributeTypeList_5827, GALGAS_bool (false), var_listTypeIndex_5494, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 172)) ;
  }
  GALGAS_getterMap var_getterMap_7087 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_7087, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 179)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_7087, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 180)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_7087, ioArgument_ioTypeMap, GALGAS_string ("range"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 188)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_9 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_7087, ioArgument_ioTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_9.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 196)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_10 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_7087, ioArgument_ioTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_10.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 204)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_11 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_7087, ioArgument_ioTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_string ("inRange"), temp_11.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 212)) ;
  }
  cEnumerator_typedPropertyList enumerator_8176 (var_typedAttributeList_4901, kENUMERATION_UP) ;
  while (enumerator_8176.hasCurrentObject ()) {
    {
    GALGAS_functionSignature temp_12 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 224)) ;
    temp_12.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 224)), var_uintType_5412, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 224)) ;
    var_getterMap_7087.setter_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_8176.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 222)), enumerator_8176.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 222)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 223)), temp_12, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 225)), GALGAS_bool (true), enumerator_8176.current_mPropertyTypeEntry (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 228)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 221)) ;
    }
    enumerator_8176.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_8651 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 233)) ;
  {
  var_instanceMethodMap_8651.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 235))  COMMA_SOURCE_FILE ("type-list.galgas", 235)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 236)), var_setterOutputFormalArgumentList_5893, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 238)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 240)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 234)) ;
  }
  {
  var_instanceMethodMap_8651.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 244))  COMMA_SOURCE_FILE ("type-list.galgas", 244)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 245)), var_setterOutputFormalArgumentList_5893, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 247)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 249)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 243)) ;
  }
  GALGAS_setterMap var_setterMap_9181 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 253)) ;
  {
  var_setterMap_9181.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("append"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 255))  COMMA_SOURCE_FILE ("type-list.galgas", 255)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 256)), var_setterInputFormalArgumentList_5961, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 259)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 254)) ;
  }
  {
  var_setterMap_9181.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 263))  COMMA_SOURCE_FILE ("type-list.galgas", 263)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 264)), var_setterOutputFormalArgumentList_5893, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 267)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 262)) ;
  }
  {
  var_setterMap_9181.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 271))  COMMA_SOURCE_FILE ("type-list.galgas", 271)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 272)), var_setterOutputFormalArgumentList_5893, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 275)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 270)) ;
  }
  var_setterOutputFormalArgumentList_5893.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 278)), var_uintType_5412, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 278)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 278)) ;
  {
  var_setterMap_9181.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 280))  COMMA_SOURCE_FILE ("type-list.galgas", 280)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 281)), var_setterOutputFormalArgumentList_5893, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 284)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 279)) ;
  }
  cEnumerator_typedPropertyList enumerator_10264 (var_typedAttributeList_4901, kENUMERATION_UP) ;
  while (enumerator_10264.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = enumerator_10264.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_formalParameterSignature var_setterFormalArgumentList_10325 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 289)) ;
        var_setterFormalArgumentList_10325.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 290)), enumerator_10264.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 290)), enumerator_10264.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 290)) ;
        var_setterFormalArgumentList_10325.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 291)), var_uintType_5412, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 291)), enumerator_10264.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 291)) ;
        {
        var_setterMap_9181.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_10264.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 293)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 293)), enumerator_10264.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 293)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 294)), var_setterFormalArgumentList_10325, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 297)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 292)) ;
        }
      }
    }
    enumerator_10264.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_5961.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 303)), var_uintType_5412, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 303)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 303)) ;
  {
  var_setterMap_9181.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 305))  COMMA_SOURCE_FILE ("type-list.galgas", 305)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 306)), var_setterInputFormalArgumentList_5961, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 309)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 304)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_14 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mListTypeName (), GALGAS_bool (false), var_getterMap_7087, var_setterMap_9181, var_instanceMethodMap_8651, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 313)) ;
  }
  const GALGAS_listDeclarationAST temp_15 = this ;
  const GALGAS_listDeclarationAST temp_16 = this ;
  const GALGAS_listDeclarationAST temp_17 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_11733 = GALGAS_unifiedTypeDefinition::constructor_new (temp_15.readProperty_mListTypeName (), temp_16.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-list.galgas", 331)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-list.galgas", 332)), GALGAS_bool (true), var_typedAttributeList_4901, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 335)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 336)), var_constructorMap_6674, var_getterMap_7087, var_setterMap_9181, var_instanceMethodMap_8651, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 341)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 342)), var_enumerationDescriptor_5775, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-list.galgas", 344)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-list.galgas", 344)) COMMA_SOURCE_FILE ("type-list.galgas", 344)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("type-list.galgas", 344)) COMMA_SOURCE_FILE ("type-list.galgas", 344)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-list.galgas", 344)) COMMA_SOURCE_FILE ("type-list.galgas", 344)), var_constructorAttributeTypeList_5827, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 346)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 347)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 348)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 349)), GALGAS_bool (false), var_listElementTypeIndex_5691, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (temp_17.readProperty_mListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-list.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 353)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-list.galgas", 354))  COMMA_SOURCE_FILE ("type-list.galgas", 327)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_11733.readProperty_mTypeName (), var_typeDefinition_11733, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 356)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_12950 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 364)) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_13038 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_13038.hasCurrentObject ()) {
    var_structAttributeList_12950.addAssign_operation (enumerator_13038.current_isConstant (HERE), enumerator_13038.current_mPropertyTypeName (HERE), enumerator_13038.current_mPropertyName (HERE), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-list.galgas", 370)), enumerator_13038.current_selector (HERE), enumerator_13038.current_mInitialization (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 366)) ;
    enumerator_13038.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  const GALGAS_listDeclarationAST temp_2 = this ;
  const GALGAS_listDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 376)), temp_3.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 376)), var_structAttributeList_12950, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 374))  COMMA_SOURCE_FILE ("type-list.galgas", 374)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_14225 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 397)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14225, var_nameForUsefulness_14225, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 398)) ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  const GALGAS_listDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_14378 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 399)), temp_2.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 399)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14225, var_elementTypeNameForUsefulness_14378 COMMA_SOURCE_FILE ("type-list.galgas", 400)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_listDeclarationAST temp_4 = this ;
    test_3 = temp_4.readProperty_usefullList ().boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_14225  COMMA_SOURCE_FILE ("type-list.galgas", 402)) ;
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_14708 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 405)) ;
  GALGAS_propertyIndexMap var_attributeMap_14756 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 406)) ;
  const GALGAS_listDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_14846 (temp_5.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_14846.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = enumerator_14846.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-list.galgas", 408)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_14846.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a list"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 409)) ;
      }
    }
    GALGAS_lstring var_propertyTypeNameForUsefulness_15018 = function_typeNameForUsefulEntitiesGraph (enumerator_14846.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 411)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14225, var_propertyTypeNameForUsefulness_15018 COMMA_SOURCE_FILE ("type-list.galgas", 412)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_15197 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_14846.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 413)) ;
    var_typedAttributeList_14708.addAssign_operation (var_t_15197, enumerator_14846.current_mPropertyName (HERE), GALGAS_bool (true), enumerator_14846.current_selector (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 414)) ;
    {
    var_attributeMap_14756.setter_insertKey (enumerator_14846.current_mPropertyName (HERE), var_t_15197, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 419)) ;
    }
    enumerator_14846.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_15433 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_8.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 422)) ;
  const GALGAS_listDeclarationAST temp_9 = this ;
  const GALGAS_listDeclarationAST temp_10 = this ;
  const GALGAS_listDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (temp_9.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 424)), GALGAS_listTypeForGeneration::constructor_new (var_selfType_15433, extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_10.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 427)), temp_11.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 427)), var_typedAttributeList_14708  COMMA_SOURCE_FILE ("type-list.galgas", 425))  COMMA_SOURCE_FILE ("type-list.galgas", 423)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'listGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_listGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_listGenerationTemplate_0 [1] = {
  nullptr
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_list {\n//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n\n//--------------------------------- List constructor used by listmap\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const capCollectionElementArray & inSharedArray) ;\n\n//--------------------------------- Element constructor\n  public: static void makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_821_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_821 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_821.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const class GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_821.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_821.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      index_821_.increment () ;
      enumerator_821.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
  result << GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cCollectionElement {\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element mObject ;\n\n//--- Constructors\n  public: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_578_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_578 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_578.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_578.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      result << " & in_" ;
      result << enumerator_578.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      if (enumerator_578.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_578_.increment () ;
      enumerator_578.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n  public: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inElement COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method for comparing elements\n  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cCollectionElement * copy (void) ;\n\n//--- Description\n  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n} ;\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1620_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1620 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1620.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_1620.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1620.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      if (enumerator_1620.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1620_.increment () ;
      enumerator_1620.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (" ;
  GALGAS_uint index_1873_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1873 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1873.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_1873.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 45)).stringValue () ;
      if (enumerator_1873.hasNextObject ()) {
        result << ", " ;
      }
      index_1873_.increment () ;
      enumerator_1873.gotoNextObject () ;
    }
  }
  result << ") {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inElement COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (" ;
  GALGAS_uint index_2308_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2308 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2308.hasCurrentObject ()) {
      result << "inElement.mProperty_" ;
      result << enumerator_2308.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 57)).stringValue () ;
      if (enumerator_2308.hasNextObject ()) {
        result << ", " ;
      }
      index_2308_.increment () ;
      enumerator_2308.gotoNextObject () ;
    }
  }
  result << ") {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nbool cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n  return true ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncCollectionElement * cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n  cCollectionElement * result = nullptr ;\n  macroMyNew (result, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2979_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2979 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2979.hasCurrentObject ()) {
      result << "mObject.mProperty_" ;
      result << enumerator_2979.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 75)).stringValue () ;
      if (enumerator_2979.hasNextObject ()) {
        result << ", " ;
      }
      index_2979_.increment () ;
      enumerator_2979.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
  GALGAS_uint index_3410_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3410 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3410.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n  ioString.writeStringMultiple (\"| \", inIndentation) ;\n  ioString << " ;
      result << enumerator_3410.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 89)).stringValue () ;
      result << " \":\" ;\n  mObject.mProperty_" ;
      result << enumerator_3410.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 90)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_3410_.increment () ;
      enumerator_3410.gotoNextObject () ;
    }
  }
  result << "}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ntypeComparisonResult cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compare (const cCollectionElement * inOperand) const {\n  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n  macroValidSharedObject (operand, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n  return mObject.objectCompare (operand->mObject) ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\nAC_GALGAS_list () {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const capCollectionElementArray & inSharedArray) :\nAC_GALGAS_list (inSharedArray) {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (UNUSED_LOCATION_ARGS) {\n  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (capCollectionElementArray ()) ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_listWithValue (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5222_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5222 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5222.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_5222.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      result << " & inOperand" ;
      result << index_5222_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      if (enumerator_5222.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5222_IDX.increment () ;
      enumerator_5222.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  if (" ;
  GALGAS_uint index_5483_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5483 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5483.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_5483_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 131)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_5483.hasNextObject ()) {
        result << " && " ;
      }
      index_5483_IDX.increment () ;
      enumerator_5483.gotoNextObject () ;
    }
  }
  result << ") {\n    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (capCollectionElementArray ()) ;\n    capCollectionElement attributes ;\n    GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (attributes" ;
  GALGAS_uint index_5807_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5807 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5807.hasCurrentObject ()) {
      result << ", inOperand" ;
      result << index_5807_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 139)).stringValue () ;
      index_5807_IDX.increment () ;
      enumerator_5807.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n    result.appendObject (attributes) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_6220_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6220 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6220.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_6220.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      result << " & in_" ;
      result << enumerator_6220.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      index_6220_.increment () ;
      enumerator_6220.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = nullptr ;\n  macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6557_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6557 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6557.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_6557.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 158)).stringValue () ;
      if (enumerator_6557.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6557_.increment () ;
      enumerator_6557.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n  outAttributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6966_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6966 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6966.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_6966.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      result << " & inOperand" ;
      result << index_6966_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      if (enumerator_6966.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6966_IDX.increment () ;
      enumerator_6966.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cCollectionElement * p = nullptr ;\n    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_7305_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7305 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7305.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7305_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 178)).stringValue () ;
      if (enumerator_7305.hasNextObject ()) {
        result << ", " ;
      }
      index_7305_IDX.increment () ;
      enumerator_7305.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n    capCollectionElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_append (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7765_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7765 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7765.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_7765.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 193)).stringValue () ;
      result << " inOperand" ;
      result << index_7765_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 193)).stringValue () ;
      result << "," ;
      if (enumerator_7765.hasNextObject ()) {
        result << "\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7765_IDX.increment () ;
      enumerator_7765.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cCollectionElement * p = nullptr ;\n    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_8144_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8144 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8144.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_8144_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 202)).stringValue () ;
      if (enumerator_8144.hasNextObject ()) {
        result << ", " ;
      }
      index_8144_IDX.increment () ;
      enumerator_8144.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n    capCollectionElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_insertAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8609_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8609 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8609.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_8609.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 217)).stringValue () ;
      result << " inOperand" ;
      result << index_8609_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 217)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8609_IDX.increment () ;
      enumerator_8609.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inInsertionIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    if (inInsertionIndex.isValid ()" ;
  GALGAS_uint index_8946_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8946 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8946.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_8946_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 225)).stringValue () ;
      result << ".isValid ()" ;
      index_8946_IDX.increment () ;
      enumerator_8946.gotoNextObject () ;
    }
  }
  result << ") {\n      cCollectionElement * p = nullptr ;\n      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_9184_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9184 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9184.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_9184_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 231)).stringValue () ;
      if (enumerator_9184.hasNextObject ()) {
        result << ", " ;
      }
      index_9184_IDX.increment () ;
      enumerator_9184.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n      capCollectionElement attributes ;\n      attributes.setPointer (p) ;\n      macroDetachSharedObject (p) ;\n      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;\n    }else{\n      drop () ;\n    }\n  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_removeAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9758_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9758 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9758.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_9758.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 249)).stringValue () ;
      result << " & outOperand" ;
      result << index_9758_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 249)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9758_IDX.increment () ;
      enumerator_9758.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inRemoveIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    if (inRemoveIndex.isValid ()) {\n      capCollectionElement attributes ;\n      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;\n      cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n      if (nullptr == p) {\n" ;
  GALGAS_uint index_10358_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10358 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10358.hasCurrentObject ()) {
      result << "        outOperand" ;
      result << index_10358_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 262)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10358_IDX.increment () ;
      enumerator_10358.gotoNextObject () ;
    }
  }
  result << "        drop () ;\n      }else{\n        macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_10596_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10596 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10596.hasCurrentObject ()) {
      result << "        outOperand" ;
      result << index_10596_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 269)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_10596.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 269)).stringValue () ;
      result << " ;\n" ;
      index_10596_IDX.increment () ;
      enumerator_10596.gotoNextObject () ;
    }
  }
  result << "      }\n    }else{\n" ;
  GALGAS_uint index_10804_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10804 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10804.hasCurrentObject ()) {
      result << "      outOperand" ;
      result << index_10804_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 275)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10804_IDX.increment () ;
      enumerator_10804.gotoNextObject () ;
    }
  }
  result << "      drop () ;    \n    }\n  }else{\n" ;
  GALGAS_uint index_10968_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10968 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10968.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10968_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 282)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10968_IDX.increment () ;
      enumerator_10968.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popFirst (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11278_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11278 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11278.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_11278.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 291)).stringValue () ;
      result << " & outOperand" ;
      result << index_11278_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 291)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11278_IDX.increment () ;
      enumerator_11278.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  removeFirstObject (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (nullptr == p) {\n" ;
  GALGAS_uint index_11727_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11727 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11727.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11727_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 301)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11727_IDX.increment () ;
      enumerator_11727.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_11935_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11935 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11935.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11935_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 307)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_11935.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 307)).stringValue () ;
      result << " ;\n" ;
      index_11935_IDX.increment () ;
      enumerator_11935.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popLast (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12302_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12302 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12302.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_12302.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 316)).stringValue () ;
      result << " & outOperand" ;
      result << index_12302_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 316)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_12302_IDX.increment () ;
      enumerator_12302.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  removeLastObject (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (nullptr == p) {\n" ;
  GALGAS_uint index_12750_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12750 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12750.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12750_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 326)).stringValue () ;
      result << ".drop () ;\n" ;
      index_12750_IDX.increment () ;
      enumerator_12750.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_12958_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12958 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12958.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12958_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 332)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_12958.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 332)).stringValue () ;
      result << " ;\n" ;
      index_12958_IDX.increment () ;
      enumerator_12958.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_first (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_13323_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13323 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13323.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_13323.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 341)).stringValue () ;
      result << " & outOperand" ;
      result << index_13323_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 341)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_13323_IDX.increment () ;
      enumerator_13323.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes ;\n  readFirst (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (nullptr == p) {\n" ;
  GALGAS_uint index_13770_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13770 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13770.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13770_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 351)).stringValue () ;
      result << ".drop () ;\n" ;
      index_13770_IDX.increment () ;
      enumerator_13770.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_13978_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13978 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13978.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13978_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 357)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_13978.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 357)).stringValue () ;
      result << " ;\n" ;
      index_13978_IDX.increment () ;
      enumerator_13978.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_last (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_14342_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14342 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14342.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_14342.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 366)).stringValue () ;
      result << " & outOperand" ;
      result << index_14342_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 366)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_14342_IDX.increment () ;
      enumerator_14342.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes ;\n  readLast (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (nullptr == p) {\n" ;
  GALGAS_uint index_14788_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14788 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14788.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_14788_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 376)).stringValue () ;
      result << ".drop () ;\n" ;
      index_14788_IDX.increment () ;
      enumerator_14788.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_14996_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14996 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14996.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_14996_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 382)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_14996.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 382)).stringValue () ;
      result << " ;\n" ;
      index_14996_IDX.increment () ;
      enumerator_14996.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::add_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand,\n                                            " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n                                            " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = *this ;\n    result.appendList (inOperand) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListWithRange (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_range & inRange,\n                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListFromIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inIndex,\n                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListToIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inIndex,\n                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::plusAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inOperand,\n                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) {\n  appendList (inOperand) ;\n}\n\n" ;
  GALGAS_uint index_17833_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17833 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17833.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_17833.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_17833.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 442)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 442)).stringValue () ;
        result << "AtIndex (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_17833.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 442)).stringValue () ;
        result << " inOperand,\n                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "GALGAS_uint inIndex,\n                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) {\n  cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n    macroUniqueSharedObject (p) ;\n    p->mObject.mProperty_" ;
        result << enumerator_17833.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 450)).stringValue () ;
        result << " = inOperand ;\n  }\n}\n\n" ;
      }else if (kBoolFalse == test_0) {
      }
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_17833.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 456)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_17833.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 456)).stringValue () ;
      result << "AtIndex (" ;
      columnMarker = result.currentColumn () ;
      result << "const GALGAS_uint & inIndex,\n                                              " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n                                              " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;\n  cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes.ptr () ;\n  GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_17833.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 461)).stringValue () ;
      result << " result ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n    result = p->mObject.mProperty_" ;
      result << enumerator_17833.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 464)).stringValue () ;
      result << " ;\n  }\n  return result ;\n}\n\n" ;
      index_17833_IDX.increment () ;
      enumerator_17833.gotoNextObject () ;
    }
  }
  result << "\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inEnumeratedObject,\n                   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const typeEnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current (LOCATION_ARGS) const {\n  const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n  return p->mObject ;\n}\n\n\n" ;
  GALGAS_uint index_20775_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20775 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20775.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_20775.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 490)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_20775.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 490)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n  const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n  return p->mObject.mProperty_" ;
      result << enumerator_20775.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 493)).stringValue () ;
      result << " ;\n}\n\n" ;
      index_20775_IDX.increment () ;
      enumerator_20775.gotoNextObject () ;
    }
  }
  result << "\n\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GALGAS_string & outArgument_outHeader,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_17049 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 464)) ;
  const GALGAS_listTypeForGeneration temp_1 = this ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, var_selfTypedefinition_17049.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 467)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-list.galgas", 465))) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_17049.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 472)), var_selfTypedefinition_17049.readProperty_mIsConcrete (), var_selfTypedefinition_17049.readProperty_mConstructorMap (), var_selfTypedefinition_17049.readProperty_mGetterMap (), var_selfTypedefinition_17049.readProperty_mSetterMap (), var_selfTypedefinition_17049.readProperty_mInstanceMethodMap (), var_selfTypedefinition_17049.readProperty_mClassMethodMap (), var_selfTypedefinition_17049.readProperty_mOptionalMethodMap (), var_selfTypedefinition_17049.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_17049.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_17049.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_17049.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-list.galgas", 470))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 470)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_string & outArgument_outImplementation,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_18353 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_18353.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18353.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 494)) ;
    enumerator_18353.gotoNextObject () ;
  }
  const GALGAS_listTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 496)) ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 497)) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_18567 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 498)) ;
  const GALGAS_listTypeForGeneration temp_4 = this ;
  const GALGAS_listTypeForGeneration temp_5 = this ;
  const GALGAS_listTypeForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, var_selfTypedefinition_18567.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 501)), temp_5.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (extensionGetter_definition (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 503)).readProperty_mTypeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 503)) COMMA_SOURCE_FILE ("type-list.galgas", 499))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_2674 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 63)) ;
  var_structAttributeList_2674.addAssign_operation (GALGAS_bool (false), GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 66)), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 67)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-listmap.galgas", 68)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-listmap.galgas", 70))  COMMA_SOURCE_FILE ("type-listmap.galgas", 64)) ;
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  var_structAttributeList_2674.addAssign_operation (GALGAS_bool (false), temp_0.readProperty_mAssociatedListTypeName (), GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 74)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-listmap.galgas", 75)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-listmap.galgas", 77))  COMMA_SOURCE_FILE ("type-listmap.galgas", 71)) ;
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 81)), temp_3.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 81)), var_structAttributeList_2674, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 79))  COMMA_SOURCE_FILE ("type-listmap.galgas", 79)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                 GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                 GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                 GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4025 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 97)), temp_1.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 97)) ;
  {
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4025, temp_2, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 98)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  const GALGAS_listmapDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4025, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 99)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 99)) COMMA_SOURCE_FILE ("type-listmap.galgas", 99)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeDefinition var_associatedTypeDefinition_5091 ;
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioTypeMap, temp_0.readProperty_mAssociatedListTypeName (), var_associatedTypeDefinition_5091, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 113)) ;
  GALGAS_typedPropertyList var_listTypedAttributeList_5142 = var_associatedTypeDefinition_5091.readProperty_mAllTypedPropertyList () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_associatedTypeDefinition_5091.readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 115)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_listmapDeclarationAST temp_2 = this ;
      const GALGAS_listmapDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 116)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 116)), fixItArray4  COMMA_SOURCE_FILE ("type-listmap.galgas", 116)) ;
      var_listTypedAttributeList_5142 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 117)) ;
    }
  }
  GALGAS_constructorMap var_constructorMap_5487 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 120)) ;
  GALGAS_getterMap var_getterMap_5564 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_5564, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 121)) ;
  }
  GALGAS_setterMap var_setterMap_5593 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 122)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5633 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 123)) ;
  GALGAS_unifiedTypeMapEntry var_associatedListTypeIndex_5748 ;
  {
  const GALGAS_listmapDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_5.readProperty_mAssociatedListTypeName (), var_associatedListTypeIndex_5748, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 125)) ;
  }
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_5851 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeIndex_5851, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 127)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5564, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 129)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5564, ioArgument_ioTypeMap, GALGAS_string ("allKeys"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 137)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5564, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 145)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_6 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_5564, ioArgument_ioTypeMap, GALGAS_string ("listForKey"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inKey"), temp_6.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 153)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_7 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_5487, ioArgument_ioTypeMap, GALGAS_string ("emptyMap"), temp_7.readProperty_mListmapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 162)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor_6894 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 170)) ;
  var_enumeratorDescriptor_6894.addAssign_operation (var_stringTypeIndex_5851, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 171)) ;
  var_enumeratorDescriptor_6894.addAssign_operation (var_associatedListTypeIndex_5748, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 172)) ;
  GALGAS_formalParameterSignature var_insertSetterFormalArgumentList_7141 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 174)) ;
  var_insertSetterFormalArgumentList_7141.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 176)), var_stringTypeIndex_5851, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-listmap.galgas", 178)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 175)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription_7296 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 180)) ;
  var_addAssignOperatorDescription_7296.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 181)), var_stringTypeIndex_5851, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 181)) ;
  cEnumerator_typedPropertyList enumerator_7464 (var_listTypedAttributeList_5142, kENUMERATION_UP) ;
  while (enumerator_7464.hasCurrentObject ()) {
    var_addAssignOperatorDescription_7296.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 183)), enumerator_7464.current_mPropertyTypeEntry (HERE), enumerator_7464.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 183)) ;
    var_insertSetterFormalArgumentList_7141.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 185)), enumerator_7464.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-listmap.galgas", 187)), enumerator_7464.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 184)) ;
    enumerator_7464.gotoNextObject () ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_8 = this ;
  var_setterMap_5593.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insert"), temp_8.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 191)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-listmap.galgas", 192)), var_insertSetterFormalArgumentList_7141, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-listmap.galgas", 195)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-listmap.galgas", 190)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_9 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_9.readProperty_mListmapTypeName (), GALGAS_bool (false), var_getterMap_5564, var_setterMap_5593, var_instanceMethodMap_5633, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 199)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_8468 ;
  {
  const GALGAS_listmapDeclarationAST temp_10 = this ;
  const GALGAS_listmapDeclarationAST temp_11 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_10.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 214)), temp_11.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 214)), var_listElementTypeIndex_8468, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 213)) ;
  }
  const GALGAS_listmapDeclarationAST temp_12 = this ;
  const GALGAS_listmapDeclarationAST temp_13 = this ;
  const GALGAS_listmapDeclarationAST temp_14 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_8527 = GALGAS_unifiedTypeDefinition::constructor_new (temp_12.readProperty_mListmapTypeName (), temp_13.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-listmap.galgas", 222)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("type-listmap.galgas", 223)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 225)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 226)), var_listTypedAttributeList_5142, var_constructorMap_5487, var_getterMap_5564, var_setterMap_5593, var_instanceMethodMap_5633, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 232)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 233)), var_enumeratorDescriptor_6894, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-listmap.galgas", 235)), var_addAssignOperatorDescription_7296, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 237)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 238)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 239)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 240)), GALGAS_bool (false), var_listElementTypeIndex_8468, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (temp_14.readProperty_mListmapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-listmap.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 244)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-listmap.galgas", 245))  COMMA_SOURCE_FILE ("type-listmap.galgas", 218)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8527.readProperty_mTypeName (), var_typeDefinition_8527, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 247)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                          const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                          GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_10187 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 264)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10187, var_nameForUsefulness_10187, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 265)) ;
  }
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_10343 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 266)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10187, var_associatedTypeNameForUsefulness_10343 COMMA_SOURCE_FILE ("type-listmap.galgas", 267)) ;
  }
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_10534 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 268)), temp_3.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 268)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10187, var_elementTypeNameForUsefulness_10534 COMMA_SOURCE_FILE ("type-listmap.galgas", 269)) ;
  }
  GALGAS_unifiedTypeDefinition var_associatedTypeDefinition_10861 ;
  const GALGAS_listmapDeclarationAST temp_4 = this ;
  extensionMethod_searchType (ioArgument_ioTypeMap, temp_4.readProperty_mAssociatedListTypeName (), var_associatedTypeDefinition_10861, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 271)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_associatedTypeDefinition_10861.readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 281)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_listmapDeclarationAST temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("associated type should be a list type"), fixItArray7  COMMA_SOURCE_FILE ("type-listmap.galgas", 282)) ;
    }
  }
  const GALGAS_listmapDeclarationAST temp_8 = this ;
  const GALGAS_listmapDeclarationAST temp_9 = this ;
  const GALGAS_listmapDeclarationAST temp_10 = this ;
  const GALGAS_listmapDeclarationAST temp_11 = this ;
  const GALGAS_listmapDeclarationAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (temp_8.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 286)), GALGAS_listmapTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_9.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 288)), extensionGetter_searchKey (ioArgument_ioTypeMap, temp_10.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 289)), var_associatedTypeDefinition_10861.readProperty_mAllTypedPropertyList (), extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_11.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 291)), temp_12.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 291))  COMMA_SOURCE_FILE ("type-listmap.galgas", 287))  COMMA_SOURCE_FILE ("type-listmap.galgas", 285)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                  GALGAS_string & outArgument_outHeader,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_12455 (temp_0.readProperty_mAssociatedListTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_12455.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_12455.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 311)) ;
    enumerator_12455.gotoNextObject () ;
  }
  const GALGAS_listmapTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_12559 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 313)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, var_selfTypedefinition_12559.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 316)) COMMA_SOURCE_FILE ("type-listmap.galgas", 314))) ;
  const GALGAS_listmapTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_12559.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 320)), var_selfTypedefinition_12559.readProperty_mIsConcrete (), var_selfTypedefinition_12559.readProperty_mConstructorMap (), var_selfTypedefinition_12559.readProperty_mGetterMap (), var_selfTypedefinition_12559.readProperty_mSetterMap (), var_selfTypedefinition_12559.readProperty_mInstanceMethodMap (), var_selfTypedefinition_12559.readProperty_mClassMethodMap (), var_selfTypedefinition_12559.readProperty_mOptionalMethodMap (), var_selfTypedefinition_12559.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_12559.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_12559.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_12559.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-listmap.galgas", 318))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 318)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outImplementation,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listmapTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 341)) ;
  const GALGAS_listmapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListMapElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 342)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = this ;
  const GALGAS_listmapTypeForGeneration temp_3 = this ;
  const GALGAS_listmapTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 344)), extensionGetter_identifierRepresentation (temp_3.readProperty_mAssociatedListTypeIndex (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 345)), temp_4.readProperty_mAssociatedListTypedAttributeList () COMMA_SOURCE_FILE ("type-listmap.galgas", 343))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dictDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_dictDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_dictDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("dict @").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 14)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_3606 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 95)) ;
  const GALGAS_dictDeclarationAST temp_0 = this ;
  var_structAttributeList_3606.addAssign_operation (GALGAS_bool (true), temp_0.readProperty_mKeyTypeName (), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 96)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-dict.galgas", 96)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-dict.galgas", 96))  COMMA_SOURCE_FILE ("type-dict.galgas", 96)) ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_3803 (temp_1.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_3803.hasCurrentObject ()) {
    var_structAttributeList_3606.addAssign_operation (GALGAS_bool (true), enumerator_3803.current_mPropertyTypeName (HERE), enumerator_3803.current_mPropertyName (HERE), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-dict.galgas", 98)), enumerator_3803.current_selector (HERE), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-dict.galgas", 98))  COMMA_SOURCE_FILE ("type-dict.galgas", 98)) ;
    enumerator_3803.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_2 = this ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_2.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_3.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 102)), temp_4.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 102)), var_structAttributeList_3606, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-dict.galgas", 100))  COMMA_SOURCE_FILE ("type-dict.galgas", 100)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  GALGAS_lstring var_dictionary_4936 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 119)), temp_1.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 119)) ;
  {
  const GALGAS_dictDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_dictionary_4936, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 120)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_3 = this ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 121)), temp_4.readProperty_mKeyTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 121)) COMMA_SOURCE_FILE ("type-dict.galgas", 121)) ;
  }
  const GALGAS_dictDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5205 (temp_5.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_5205.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5205.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 123)), enumerator_5205.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 123)) COMMA_SOURCE_FILE ("type-dict.galgas", 123)) ;
    }
    enumerator_5205.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_keyTypeIndex_6091 ;
  {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_0.readProperty_mKeyTypeName ().readProperty_string (), var_keyTypeIndex_6091, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 138)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_6140 = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_keyTypeIndex_6091, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 140)) ;
  GALGAS_constructorMap var_constructorMap_6255 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 142)) ;
  GALGAS_getterMap var_getterMap_6333 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_6333, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 143)) ;
  }
  GALGAS_setterMap var_setterMap_6362 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 144)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6402 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 145)) ;
  {
  const GALGAS_dictDeclarationAST temp_1 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_6255, ioArgument_ioTypeMap, GALGAS_string ("emptyDict"), temp_1.readProperty_mDictTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 147)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_2 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_6333, ioArgument_ioTypeMap, GALGAS_string ("hasKey"), GALGAS_string::makeEmptyString (), temp_2.readProperty_mKeyTypeName ().readProperty_string (), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 155)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (var_getterMap_6333, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 163)) ;
  }
  GALGAS_formalParameterSignature var_insertSetterFormalArgumentList_7068 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 172)) ;
  GALGAS_typedPropertyList var_typedPropertyList_7129 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 173)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_7177 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 174)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_7177.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 175)), var_keyTypeIndex_6091, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 175)) ;
  var_insertSetterFormalArgumentList_7068.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 177)), var_keyTypeIndex_6091, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 179)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 176)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_7468 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 181)) ;
  var_removeMethodFormalArgumentList_7468.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 183)), var_keyTypeIndex_6091, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 185)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 182)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_7645 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 187)) ;
  var_optionalMethodSignature_7645.addAssign_operation (GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 190)), var_keyTypeIndex_6091, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 188)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_7768 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 193)) ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_7865 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_7865.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_7935 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_7865.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7935, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 195)) ;
    }
    GALGAS_bool var_hasSetter_7963 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_7988 = GALGAS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_7177.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 198)), var_attributeTypeIndex_7935, enumerator_7865.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 198)) ;
    var_typedPropertyList_7129.addAssign_operation (var_attributeTypeIndex_7935, enumerator_7865.current_mPropertyName (HERE), var_hasSetter_7963, var_hasSelector_7988  COMMA_SOURCE_FILE ("type-dict.galgas", 199)) ;
    var_typesToIncludeInHeaderCompilation_7768.addAssign_operation (var_attributeTypeIndex_7935  COMMA_SOURCE_FILE ("type-dict.galgas", 200)) ;
    var_enumerationDescriptor_6140.addAssign_operation (var_attributeTypeIndex_7935, enumerator_7865.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 201)) ;
    var_insertSetterFormalArgumentList_7068.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 203)), var_attributeTypeIndex_7935, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 205)), enumerator_7865.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 202)) ;
    var_removeMethodFormalArgumentList_7468.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 208)), var_attributeTypeIndex_7935, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-dict.galgas", 210)), enumerator_7865.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 207)) ;
    var_optionalMethodSignature_7645.addAssign_operation (GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 214)), var_attributeTypeIndex_7935, enumerator_7865.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 212)) ;
    enumerator_7865.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_4 = this ;
  var_setterMap_6362.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insert"), temp_4.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 220)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 221)), var_insertSetterFormalArgumentList_7068, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 224)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 219)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_5 = this ;
  var_setterMap_6362.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), temp_5.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 229)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 230)), var_removeMethodFormalArgumentList_7468, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 233)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 228)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_6 = this ;
  const GALGAS_dictDeclarationAST temp_7 = this ;
  var_instanceMethodMap_6402.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("searchKey"), temp_6.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 238)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 239)), var_removeMethodFormalArgumentList_7468, temp_7.readProperty_mDictTypeName ().readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 243)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 237)) ;
  }
  const GALGAS_dictDeclarationAST temp_8 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_9666 (temp_8.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_9666.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_9702 = GALGAS_lstring::constructor_new (enumerator_9666.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 248)), enumerator_9666.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 248)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_9832 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_9666.current_mPropertyTypeName (HERE), var_attributeTypeIndex_9832, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 249)) ;
    }
    {
    GALGAS_functionSignature temp_9 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 253)) ;
    temp_9.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 253)), var_keyTypeIndex_6091, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 253)) ;
    var_getterMap_6333.setter_insertOrReplace (var_accessorName_9702, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 252)), temp_9, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 254)), GALGAS_bool (true), var_attributeTypeIndex_9832, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 257)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 250)) ;
    }
    enumerator_9666.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_10 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10279 (temp_10.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10279.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_10315 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_10279.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-dict.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 264)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 264)), enumerator_10279.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 263)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_10540 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_10279.current_mPropertyTypeName (HERE), var_attributeTypeIndex_10540, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 267)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_10573 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 271)) ;
    var_accessorFormalArgumentList_10573.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 272)), var_attributeTypeIndex_10540, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 272)), enumerator_10279.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 272)) ;
    var_accessorFormalArgumentList_10573.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 273)), var_keyTypeIndex_6091, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 273)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 273)) ;
    {
    var_setterMap_6362.setter_insertOrReplace (var_accessorName_10315, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 276)), var_accessorFormalArgumentList_10573, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 279)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 274)) ;
    }
    enumerator_10279.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_11 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_11.readProperty_mDictTypeName (), GALGAS_bool (false), var_getterMap_6333, var_setterMap_6362, var_instanceMethodMap_6402, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 284)) ;
  }
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_11560 ;
  {
  const GALGAS_dictDeclarationAST temp_12 = this ;
  const GALGAS_dictDeclarationAST temp_13 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_12.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 299)), temp_13.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 299)), var_elementTypeEntry_11560, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 298)) ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_11612 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 303)) ;
  {
  var_optionalMethodMap_11612.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 304)), var_optionalMethodSignature_7645, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 304)) ;
  }
  const GALGAS_dictDeclarationAST temp_14 = this ;
  const GALGAS_dictDeclarationAST temp_15 = this ;
  const GALGAS_dictDeclarationAST temp_16 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_11765 = GALGAS_unifiedTypeDefinition::constructor_new (temp_14.readProperty_mDictTypeName (), temp_15.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-dict.galgas", 310)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-dict.galgas", 311)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 313)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 314)), var_typedPropertyList_7129, var_constructorMap_6255, var_getterMap_6333, var_setterMap_6362, var_instanceMethodMap_6402, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 320)), var_optionalMethodMap_11612, var_enumerationDescriptor_6140, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-dict.galgas", 323)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-dict.galgas", 323)) COMMA_SOURCE_FILE ("type-dict.galgas", 323)), var_argumentTypeListForAddAssignWithFieldExpressionList_7177, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 325)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 326)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 327)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 328)), GALGAS_bool (false), var_elementTypeEntry_11560, GALGAS_string ("emptyDict"), GALGAS_string ("dict-").add_operation (temp_16.readProperty_mDictTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-dict.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 332)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-dict.galgas", 333))  COMMA_SOURCE_FILE ("type-dict.galgas", 306)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_11765.readProperty_mTypeName (), var_typeDefinition_11765, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 335)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters (const GALGAS_lstring constinArgument_inString,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_13107 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 343)), kENUMERATION_UP) ;
  while (enumerator_13107.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_13132 = enumerator_13107.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 344)) ;
    {
    GALGAS_string joker_13231 ; // Joker input parameter
    var_explodedArray_13132.setter_popFirst (joker_13231, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 345)) ;
    }
    cEnumerator_stringlist enumerator_13244 (var_explodedArray_13132, kENUMERATION_UP) ;
    while (enumerator_13244.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_13244.current_mValue (HERE).getter_count (SOURCE_FILE ("type-dict.galgas", 347)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_13323 = enumerator_13244.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 348)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_13323.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 350)) ;
            }
          }
        }
      }
      enumerator_13244.gotoNextObject () ;
    }
    enumerator_13107.gotoNextObject () ;
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
  cEnumerator_stringlist enumerator_13816 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 360)), kENUMERATION_UP) ;
  while (enumerator_13816.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_13841 = enumerator_13816.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 361)) ;
    {
    GALGAS_string joker_13940 ; // Joker input parameter
    var_explodedArray_13841.setter_popFirst (joker_13940, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 362)) ;
    }
    cEnumerator_stringlist enumerator_13953 (var_explodedArray_13841, kENUMERATION_UP) ;
    while (enumerator_13953.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_13953.current_mValue (HERE).getter_count (SOURCE_FILE ("type-dict.galgas", 364)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_14032 = enumerator_13953.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 365)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_14032.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_14032.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-dict.galgas", 366)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 367)) ;
            }
          }
        }
      }
      enumerator_13953.gotoNextObject () ;
    }
    enumerator_13816.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForMapAndDict'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForMapAndDict (C_Compiler *
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dict.galgas", 377)) ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 378)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-dict.galgas", 379)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-dict.galgas", 380)) ;
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

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForMapAndDict (nullptr,
                                                                        releaseOnceFunctionResult_forbiddenKeysForMapAndDict) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForMapAndDict [1] = {
  nullptr
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

void cPtr_dictDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_15096 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 395)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15096, var_nameForUsefulness_15096, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 396)) ;
  }
  const GALGAS_dictDeclarationAST temp_1 = this ;
  const GALGAS_dictDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_15249 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mDictTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 397)), temp_2.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 397)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15096, var_elementTypeNameForUsefulness_15249 COMMA_SOURCE_FILE ("type-dict.galgas", 398)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_15515 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 400)) ;
  GALGAS_propertyIndexMap var_attributeMap_15563 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 401)) ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_15627 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_15627.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_15663 = function_typeNameForUsefulEntitiesGraph (enumerator_15627.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 403)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15096, var_propertyTypeNameForUsefulness_15663 COMMA_SOURCE_FILE ("type-dict.galgas", 404)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_15855 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_15627.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 405)) ;
    GALGAS_bool var_hasSetter_15899 = GALGAS_bool (true) ;
    var_typedAttributeList_15515.addAssign_operation (var_t_15855, enumerator_15627.current_mPropertyName (HERE), var_hasSetter_15899, enumerator_15627.current_selector (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 407)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 412)).getter_hasKey (enumerator_15627.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-dict.galgas", 412)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_m_16123 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_16200 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 414)), kENUMERATION_UP) ;
        while (enumerator_16200.hasCurrentObject ()) {
          var_m_16123.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_16200.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 415)) ;
          enumerator_16200.gotoNextObject () ;
        }
        var_m_16123.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 417)) ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_15627.current_mPropertyName (HERE).readProperty_location (), var_m_16123, fixItArray5  COMMA_SOURCE_FILE ("type-dict.galgas", 418)) ;
      }
    }
    {
    var_attributeMap_15563.setter_insertKey (enumerator_15627.current_mPropertyName (HERE), var_t_15855, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 420)) ;
    }
    enumerator_15627.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_6 = this ;
  const GALGAS_dictDeclarationAST temp_7 = this ;
  const GALGAS_dictDeclarationAST temp_8 = this ;
  const GALGAS_dictDeclarationAST temp_9 = this ;
  const GALGAS_dictDeclarationAST temp_10 = this ;
  const GALGAS_dictDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("dict ").add_operation (temp_6.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 424)), GALGAS_dictTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_7.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 426)), extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_8.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 427)), temp_9.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 427)), temp_10.readProperty_mDictTypeName (), var_typedAttributeList_15515, temp_11.readProperty_mKeyTypeName ()  COMMA_SOURCE_FILE ("type-dict.galgas", 425))  COMMA_SOURCE_FILE ("type-dict.galgas", 423)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GALGAS_string & outArgument_outHeader,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_17551 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 451)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (inCompiler, var_selfTypedefinition_17551.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 454)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-dict.galgas", 452))) ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_17551.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 459)), var_selfTypedefinition_17551.readProperty_mIsConcrete (), var_selfTypedefinition_17551.readProperty_mConstructorMap (), var_selfTypedefinition_17551.readProperty_mGetterMap (), var_selfTypedefinition_17551.readProperty_mSetterMap (), var_selfTypedefinition_17551.readProperty_mInstanceMethodMap (), var_selfTypedefinition_17551.readProperty_mClassMethodMap (), var_selfTypedefinition_17551.readProperty_mOptionalMethodMap (), var_selfTypedefinition_17551.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_17551.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_17551.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_17551.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-dict.galgas", 457))), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 457)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_string & outArgument_outImplementation,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 480)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 481)) ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  const GALGAS_dictTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 483)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-dict.galgas", 485)) COMMA_SOURCE_FILE ("type-dict.galgas", 482))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@mapDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_mapDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_mapDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 45)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_9308 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 245)) ;
  var_structAttributeList_9308.addAssign_operation (GALGAS_bool (false), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("type-map.galgas", 248)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 249)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-map.galgas", 250)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-map.galgas", 252))  COMMA_SOURCE_FILE ("type-map.galgas", 246)) ;
  const GALGAS_mapDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_9562 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_9562.hasCurrentObject ()) {
    var_structAttributeList_9308.addAssign_operation (GALGAS_bool (false), enumerator_9562.current_mPropertyTypeName (HERE), enumerator_9562.current_mPropertyName (HERE), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-map.galgas", 258)), enumerator_9562.current_selector (HERE), enumerator_9562.current_mInitialization (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 254)) ;
    enumerator_9562.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_1 = this ;
  const GALGAS_mapDeclarationAST temp_2 = this ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 264)), temp_3.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 264)), var_structAttributeList_9308, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map.galgas", 262))  COMMA_SOURCE_FILE ("type-map.galgas", 262)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                             GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                             GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mapDeclarationAST temp_0 = this ;
  const GALGAS_mapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_10758 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 280)), temp_1.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 280)) ;
  {
  const GALGAS_mapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_10758, temp_2, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 281)) ;
  }
  const GALGAS_mapDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10914 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10914.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_10914.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 283)), enumerator_10914.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 283)) COMMA_SOURCE_FILE ("type-map.galgas", 283)) ;
    }
    enumerator_10914.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_11818 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeIndex_11818, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 299)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringTypeIndex_11910 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_11910, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 301)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 303)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_11910, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 303)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_11990 = temp_0 ;
  GALGAS_constructorMap var_constructorMap_12069 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 305)) ;
  GALGAS_getterMap var_getterMap_12147 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_12147, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 306)) ;
  }
  GALGAS_setterMap var_setterMap_12175 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 307)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_12215 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 308)) ;
  {
  const GALGAS_mapDeclarationAST temp_1 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_12069, ioArgument_ioTypeMap, GALGAS_string ("emptyMap"), temp_1.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 310)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_2 = this ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  routine_enterConstructorWithArgument (var_constructorMap_12069, ioArgument_ioTypeMap, GALGAS_string ("mapWithMapToOverride"), temp_2.readProperty_mMapTypeName ().readProperty_string (), GALGAS_string ("inMap"), temp_3.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 317)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_12147, ioArgument_ioTypeMap, GALGAS_string ("levels"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 327)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments (var_getterMap_12147, ioArgument_ioTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 335)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_12147, ioArgument_ioTypeMap, GALGAS_string ("keySet"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 346)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_12147, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 354)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_12147, ioArgument_ioTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 362)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_12147, ioArgument_ioTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 371)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWithoutArgument (var_getterMap_12147, ioArgument_ioTypeMap, GALGAS_string ("overriddenMap"), GALGAS_string::makeEmptyString (), temp_4.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 380)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_12147, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 388)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_14306 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 397)) ;
  GALGAS_typedPropertyList var_typedPropertyList_14374 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 398)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_14447 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 399)) ;
  var_optionalMethodSignature_14447.addAssign_operation (GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 402)), var_stringTypeIndex_11818, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 400)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_14591 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 405)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_14591.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 406)), var_lstringTypeIndex_11910, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 406)) ;
  var_insertMethodFormalArgumentList_14306.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 408)), var_lstringTypeIndex_11910, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 410)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 407)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_14921 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 412)) ;
  var_removeMethodFormalArgumentList_14921.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 414)), var_lstringTypeIndex_11910, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 416)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 413)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_15132 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 418)) ;
  const GALGAS_mapDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_15225 (temp_5.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_15225.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = enumerator_15225.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-map.galgas", 420)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_15225.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a map"), fixItArray7  COMMA_SOURCE_FILE ("type-map.galgas", 421)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_15439 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_15225.current_mPropertyTypeName (HERE), var_attributeTypeIndex_15439, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 423)) ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_14591.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 433)), var_attributeTypeIndex_15439, enumerator_15225.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 433)) ;
    var_typedPropertyList_14374.addAssign_operation (var_attributeTypeIndex_15439, enumerator_15225.current_mPropertyName (HERE), GALGAS_bool (true), enumerator_15225.current_selector (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 434)) ;
    var_typesToIncludeInHeaderCompilation_15132.addAssign_operation (var_attributeTypeIndex_15439  COMMA_SOURCE_FILE ("type-map.galgas", 435)) ;
    var_enumerationDescriptor_11990.addAssign_operation (var_attributeTypeIndex_15439, enumerator_15225.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 436)) ;
    GALGAS_lstring temp_8 ;
    const enumGalgasBool test_9 = enumerator_15225.current_selector (HERE).boolEnum () ;
    if (kBoolTrue == test_9) {
      temp_8 = enumerator_15225.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_9) {
      temp_8 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 438)) ;
    }
    var_insertMethodFormalArgumentList_14306.addAssign_operation (temp_8, var_attributeTypeIndex_15439, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 440)), enumerator_15225.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 437)) ;
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = enumerator_15225.current_selector (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_15225.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 443)) ;
    }
    var_removeMethodFormalArgumentList_14921.addAssign_operation (temp_10, var_attributeTypeIndex_15439, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 445)), enumerator_15225.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 442)) ;
    GALGAS_lstring temp_12 ;
    const enumGalgasBool test_13 = enumerator_15225.current_selector (HERE).boolEnum () ;
    if (kBoolTrue == test_13) {
      temp_12 = enumerator_15225.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_13) {
      temp_12 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 449)) ;
    }
    var_optionalMethodSignature_14447.addAssign_operation (GALGAS_bool (false), temp_12, var_attributeTypeIndex_15439, enumerator_15225.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 447)) ;
    enumerator_15225.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_14 = this ;
  cEnumerator_insertMethodListAST enumerator_16713 (temp_14.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_16713.hasCurrentObject ()) {
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = var_setterMap_12175.getter_hasKey (enumerator_16713.current_mInsertMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 455)).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_16713.current_mInsertMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_16713.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 456)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 456)), fixItArray16  COMMA_SOURCE_FILE ("type-map.galgas", 456)) ;
      }
    }
    if (kBoolFalse == test_15) {
      {
      var_setterMap_12175.setter_insertOrReplace (enumerator_16713.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 460)), var_insertMethodFormalArgumentList_14306, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 463)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 458)) ;
      }
    }
    enumerator_16713.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_17 = this ;
  cEnumerator_mapRemoveMethodListAST enumerator_17176 (temp_17.readProperty_mRemoveMethodList (), kENUMERATION_UP) ;
  while (enumerator_17176.hasCurrentObject ()) {
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_setterMap_12175.getter_hasKey (enumerator_17176.current_mMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 470)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_17176.current_mMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17176.current_mMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 471)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 471)), fixItArray19  COMMA_SOURCE_FILE ("type-map.galgas", 471)) ;
      }
    }
    if (kBoolFalse == test_18) {
      {
      var_setterMap_12175.setter_insertOrReplace (enumerator_17176.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 475)), var_removeMethodFormalArgumentList_14921, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 478)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 473)) ;
      }
    }
    enumerator_17176.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_20 = this ;
  cEnumerator_mapSearchMethodListAST enumerator_17667 (temp_20.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_17667.hasCurrentObject ()) {
    {
    var_instanceMethodMap_12215.setter_insertKey (enumerator_17667.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 487)), var_removeMethodFormalArgumentList_14921, enumerator_17667.current_mSearchMethodName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 491)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 485)) ;
    }
    enumerator_17667.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_21 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_18002 (temp_21.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_18002.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_18038 = GALGAS_lstring::constructor_new (enumerator_18002.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 497)), enumerator_18002.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 497)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_18175 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18002.current_mPropertyTypeName (HERE), var_attributeTypeIndex_18175, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 498)) ;
    }
    {
    GALGAS_functionSignature temp_22 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 502)) ;
    temp_22.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 502)), var_stringTypeIndex_11818, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 502)) ;
    var_getterMap_12147.setter_insertOrReplace (var_accessorName_18038, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 501)), temp_22, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 503)), GALGAS_bool (true), var_attributeTypeIndex_18175, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 506)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 499)) ;
    }
    enumerator_18002.gotoNextObject () ;
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    const GALGAS_mapDeclarationAST temp_24 = this ;
    test_23 = GALGAS_bool (kIsSupOrEqual, temp_24.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("type-map.galgas", 511)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_location var_insertOrReplaceLocation_18645 ;
      const GALGAS_mapDeclarationAST temp_25 = this ;
      temp_25.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceLocation_18645, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 512)) ;
      {
      var_setterMap_12175.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation_18645  COMMA_SOURCE_FILE ("type-map.galgas", 514)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 515)), var_insertMethodFormalArgumentList_14306, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 518)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 513)) ;
      }
    }
  }
  const GALGAS_mapDeclarationAST temp_26 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_19016 (temp_26.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_19016.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_19052 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_19016.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-map.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 525)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 525)), enumerator_19016.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 524)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_19285 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_19016.current_mPropertyTypeName (HERE), var_attributeTypeIndex_19285, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 528)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_19344 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 532)) ;
    var_accessorFormalArgumentList_19344.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 533)), var_attributeTypeIndex_19285, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 533)), enumerator_19016.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 533)) ;
    var_accessorFormalArgumentList_19344.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 534)), var_stringTypeIndex_11818, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 534)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-map.galgas", 534)) ;
    {
    var_setterMap_12175.setter_insertOrReplace (var_accessorName_19052, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 537)), var_accessorFormalArgumentList_19344, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 540)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 535)) ;
    }
    enumerator_19016.gotoNextObject () ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_19818 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 545)) ;
  {
  var_optionalMethodMap_19818.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 546)), var_optionalMethodSignature_14447, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 546)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_27 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_27.readProperty_mMapTypeName (), GALGAS_bool (false), var_getterMap_12147, var_setterMap_12175, var_instanceMethodMap_12215, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 548)) ;
  }
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_20460 ;
  {
  const GALGAS_mapDeclarationAST temp_28 = this ;
  const GALGAS_mapDeclarationAST temp_29 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_28.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 563)), temp_29.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 563)), var_elementTypeEntry_20460, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 562)) ;
  }
  const GALGAS_mapDeclarationAST temp_30 = this ;
  const GALGAS_mapDeclarationAST temp_31 = this ;
  const GALGAS_mapDeclarationAST temp_32 = this ;
  const GALGAS_mapDeclarationAST temp_33 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_20510 = GALGAS_unifiedTypeDefinition::constructor_new (temp_30.readProperty_mMapTypeName (), temp_31.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-map.galgas", 571)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-map.galgas", 572)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 574)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 575)), var_typedPropertyList_14374, var_constructorMap_12069, var_getterMap_12147, var_setterMap_12175, var_instanceMethodMap_12215, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 581)), var_optionalMethodMap_19818, var_enumerationDescriptor_11990, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map.galgas", 584)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-map.galgas", 584)) COMMA_SOURCE_FILE ("type-map.galgas", 584)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-map.galgas", 584)) COMMA_SOURCE_FILE ("type-map.galgas", 584)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-map.galgas", 584)) COMMA_SOURCE_FILE ("type-map.galgas", 584)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("type-map.galgas", 584)) COMMA_SOURCE_FILE ("type-map.galgas", 584)), var_argumentTypeListForAddAssignWithFieldExpressionList_14591, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 586)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 587)), temp_32.readProperty_mSearchMethodList (), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 589)), GALGAS_bool (false), var_elementTypeEntry_20460, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (temp_33.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-map.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 593)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-map.galgas", 594))  COMMA_SOURCE_FILE ("type-map.galgas", 567)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_20510.readProperty_mTypeName (), var_typeDefinition_20510, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 596)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                      const GALGAS_string /* constinArgument_inProductDirectory */,
                                                      const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                      GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mapDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_22637 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 625)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_22637, var_nameForUsefulness_22637, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 626)) ;
  }
  const GALGAS_mapDeclarationAST temp_1 = this ;
  const GALGAS_mapDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_22789 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mMapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 627)), temp_2.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 627)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 627)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_22637, var_elementTypeNameForUsefulness_22789 COMMA_SOURCE_FILE ("type-map.galgas", 628)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_23051 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 630)) ;
  GALGAS_propertyIndexMap var_attributeMap_23099 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 631)) ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_23158 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_23158.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_23194 = function_typeNameForUsefulEntitiesGraph (enumerator_23158.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 633)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_22637, var_propertyTypeNameForUsefulness_23194 COMMA_SOURCE_FILE ("type-map.galgas", 634)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_23394 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_23158.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 635)) ;
    GALGAS_bool var_hasSelector_23446 = GALGAS_bool (false) ;
    var_typedAttributeList_23051.addAssign_operation (var_t_23394, enumerator_23158.current_mPropertyName (HERE), GALGAS_bool (true), var_hasSelector_23446  COMMA_SOURCE_FILE ("type-map.galgas", 637)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 642)).getter_hasKey (enumerator_23158.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 642)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_m_23668 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_23745 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 644)), kENUMERATION_UP) ;
        while (enumerator_23745.hasCurrentObject ()) {
          var_m_23668.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_23745.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 645)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 645)) ;
          enumerator_23745.gotoNextObject () ;
        }
        var_m_23668.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 647)) ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_23158.current_mPropertyName (HERE).readProperty_location (), var_m_23668, fixItArray5  COMMA_SOURCE_FILE ("type-map.galgas", 648)) ;
      }
    }
    {
    var_attributeMap_23099.setter_insertKey (enumerator_23158.current_mPropertyName (HERE), var_t_23394, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 650)) ;
    }
    enumerator_23158.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_23962 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 653)) ;
  const GALGAS_mapDeclarationAST temp_6 = this ;
  cEnumerator_insertMethodListAST enumerator_24022 (temp_6.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_24022.hasCurrentObject ()) {
    {
    var_insertMethodMap_23962.setter_insertKey (enumerator_24022.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 655)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_24022.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 656)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_24022.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 657)) ;
    }
    enumerator_24022.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_24284 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 660)) ;
  const GALGAS_mapDeclarationAST temp_7 = this ;
  cEnumerator_mapSearchMethodListAST enumerator_24330 (temp_7.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_24330.hasCurrentObject ()) {
    {
    var_searchMethodMap_24284.setter_insertKey (enumerator_24330.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 662)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_24330.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 663)) ;
    }
    enumerator_24330.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_8 = this ;
  cEnumerator_mapRemoveMethodListAST enumerator_24525 (temp_8.readProperty_mRemoveMethodList (), kENUMERATION_UP) ;
  while (enumerator_24525.hasCurrentObject ()) {
    {
    var_insertMethodMap_23962.setter_insertKey (enumerator_24525.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 667)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_24525.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 668)) ;
    }
    enumerator_24525.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_9 = this ;
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_24742 (temp_9.readProperty_mInsertOrReplaceDeclarationListAST (), kENUMERATION_UP) ;
  GALGAS_uint index_24737 ((uint32_t) 0) ;
  while (enumerator_24742.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (kIsStrictSup, index_24737.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_24742.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared"), fixItArray11  COMMA_SOURCE_FILE ("type-map.galgas", 673)) ;
      }
    }
    enumerator_24742.gotoNextObject () ;
    index_24737.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 671)) ;
  }
  const GALGAS_mapDeclarationAST temp_12 = this ;
  GALGAS_bool var_hasInsertOrReplaceModifier_24978 = GALGAS_bool (kIsStrictSup, temp_12.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("type-map.galgas", 676)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_hasInsertOrReplaceModifier_24978.operator_and (var_insertMethodMap_23962.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("type-map.galgas", 677)) COMMA_SOURCE_FILE ("type-map.galgas", 677)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_location var_insertOrReplaceDeclarationLocation_25198 ;
      const GALGAS_mapDeclarationAST temp_14 = this ;
      temp_14.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceDeclarationLocation_25198, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 678)) ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_25198, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray15  COMMA_SOURCE_FILE ("type-map.galgas", 679)) ;
    }
  }
  const GALGAS_mapDeclarationAST temp_16 = this ;
  const GALGAS_mapDeclarationAST temp_17 = this ;
  const GALGAS_mapDeclarationAST temp_18 = this ;
  const GALGAS_mapDeclarationAST temp_19 = this ;
  const GALGAS_mapDeclarationAST temp_20 = this ;
  const GALGAS_mapDeclarationAST temp_21 = this ;
  const GALGAS_mapDeclarationAST temp_22 = this ;
  const GALGAS_mapDeclarationAST temp_23 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (temp_16.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 684)), GALGAS_mapTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_17.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 686)), extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_18.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 687)), temp_19.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 687)), temp_20.readProperty_mMapTypeName (), var_typedAttributeList_23051, temp_21.readProperty_mInsertMethodList (), temp_22.readProperty_mSearchMethodList (), temp_23.readProperty_mRemoveMethodList (), var_hasInsertOrReplaceModifier_24978  COMMA_SOURCE_FILE ("type-map.galgas", 685))  COMMA_SOURCE_FILE ("type-map.galgas", 683)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                              GALGAS_string & outArgument_outHeader,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mapTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_26846 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 717)) ;
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, var_selfTypedefinition_26846.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 720)), temp_2.readProperty_mTypedAttributeList (), temp_3.readProperty_mSearchMethodList () COMMA_SOURCE_FILE ("type-map.galgas", 718))) ;
  const GALGAS_mapTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_26846.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 726)), var_selfTypedefinition_26846.readProperty_mIsConcrete (), var_selfTypedefinition_26846.readProperty_mConstructorMap (), var_selfTypedefinition_26846.readProperty_mGetterMap (), var_selfTypedefinition_26846.readProperty_mSetterMap (), var_selfTypedefinition_26846.readProperty_mInstanceMethodMap (), var_selfTypedefinition_26846.readProperty_mClassMethodMap (), var_selfTypedefinition_26846.readProperty_mOptionalMethodMap (), var_selfTypedefinition_26846.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_26846.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_26846.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_26846.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-map.galgas", 724))), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 724)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::method_appendDeclaration_32_ (const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                              GALGAS_string & outArgument_outHeader,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mapTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_28044 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_28044.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_28044.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 748)) ;
    enumerator_28044.gotoNextObject () ;
  }
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_28134 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 750)) ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, var_selfTypedefinition_28134.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 753)), temp_3.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-map.galgas", 751))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                     GALGAS_string & outArgument_outImplementation,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mapTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 764)) ;
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 765)) ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_28802 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 766)) ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  const GALGAS_mapTypeForGeneration temp_4 = this ;
  const GALGAS_mapTypeForGeneration temp_5 = this ;
  const GALGAS_mapTypeForGeneration temp_6 = this ;
  const GALGAS_mapTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, var_selfTypedefinition_28802.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-map.galgas", 768)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mInsertMethodList (), temp_5.readProperty_mSearchMethodList (), temp_6.readProperty_mRemoveMethodList (), temp_7.readProperty_mHasInsertOrReplaceModifier () COMMA_SOURCE_FILE ("type-map.galgas", 767))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                    GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                    GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                    GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4969 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 134)), temp_1.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 134)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4969, temp_2, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 135)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5139 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_5139.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5139.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 137)), enumerator_5139.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 137)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 137)) ;
    }
    enumerator_5139.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_5736 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 147)) ;
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5824 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_5824.hasCurrentObject ()) {
    var_structAttributeList_5736.addAssign_operation (enumerator_5824.current_isConstant (HERE), enumerator_5824.current_mPropertyTypeName (HERE), enumerator_5824.current_mPropertyName (HERE), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-sorted-list.galgas", 153)), enumerator_5824.current_selector (HERE), enumerator_5824.current_mInitialization (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 149)) ;
    enumerator_5824.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 159)), temp_3.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 159)), var_structAttributeList_5736, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 157))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 157)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                              const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                              const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodMap var_optionalMethodMap_6812 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 174)) ;
  GALGAS_unifiedTypeMapEntry var_listTypeIndex_6927 ;
  {
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mSortedListTypeName (), var_listTypeIndex_6927, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 176)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_7136 ;
  {
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_1.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 179)), temp_2.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 179)), var_listElementTypeIndex_7136, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 178)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_7223 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 183)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_7275 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 184)) ;
  GALGAS_formalParameterSignature var_setterFormalOutputArgumentList_7341 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 185)) ;
  GALGAS_formalParameterSignature var_setterFormalInputArgumentList_7409 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 186)) ;
  GALGAS_typedPropertyList var_typedAttributeList_7469 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 187)) ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_7534 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_7534.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_7612 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_7534.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7612, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 189)) ;
    }
    GALGAS_bool var_hasSelector_7640 = GALGAS_bool (false) ;
    var_typedAttributeList_7469.addAssign_operation (var_attributeTypeIndex_7612, enumerator_7534.current_mPropertyName (HERE), GALGAS_bool (true), var_hasSelector_7640  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 191)) ;
    var_enumerationDescriptor_7223.addAssign_operation (var_attributeTypeIndex_7612, enumerator_7534.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 192)) ;
    var_constructorAttributeTypeList_7275.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 193)), var_attributeTypeIndex_7612, enumerator_7534.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 193)) ;
    var_setterFormalOutputArgumentList_7341.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 194)), var_attributeTypeIndex_7612, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-sorted-list.galgas", 194)), enumerator_7534.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 194)) ;
    var_setterFormalInputArgumentList_7409.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 195)), var_attributeTypeIndex_7612, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-sorted-list.galgas", 195)), enumerator_7534.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 195)) ;
    enumerator_7534.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_8187 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 198)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_4 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_8187, ioArgument_ioTypeMap, GALGAS_string ("emptySortedList"), temp_4.readProperty_mSortedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 199)) ;
  }
  {
  var_constructorMap_8187.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sortedListWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 207))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 207)), var_constructorAttributeTypeList_7275, GALGAS_bool (false), var_listTypeIndex_6927, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 206)) ;
  }
  GALGAS_getterMap var_getterMap_8617 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_8617, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 213)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_8617, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 214)) ;
  }
  GALGAS_setterMap var_setterMap_8847 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 223)) ;
  {
  var_setterMap_8847.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popGreatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 225))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 225)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 226)), var_setterFormalOutputArgumentList_7341, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 229)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 224)) ;
  }
  {
  var_setterMap_8847.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popSmallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 233))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 233)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 234)), var_setterFormalOutputArgumentList_7341, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 237)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 232)) ;
  }
  {
  var_setterMap_8847.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insert"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 241))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 241)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 242)), var_setterFormalInputArgumentList_7409, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 245)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 240)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_9569 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 249)) ;
  {
  var_instanceMethodMap_9569.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("greatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 251))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 251)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 252)), var_setterFormalOutputArgumentList_7341, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 254)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 256)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 250)) ;
  }
  {
  var_instanceMethodMap_9569.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("smallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 260))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 260)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 261)), var_setterFormalOutputArgumentList_7341, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 263)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 265)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 259)) ;
  }
  {
  const GALGAS_sortedListDeclarationAST temp_5 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_mSortedListTypeName (), GALGAS_bool (false), var_getterMap_8617, var_setterMap_8847, var_instanceMethodMap_9569, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 269)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_6 = this ;
  const GALGAS_sortedListDeclarationAST temp_7 = this ;
  const GALGAS_sortedListDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_10448 = GALGAS_unifiedTypeDefinition::constructor_new (temp_6.readProperty_mSortedListTypeName (), temp_7.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-sorted-list.galgas", 287)), GALGAS_typeKindEnum::constructor_sortedListType (SOURCE_FILE ("type-sorted-list.galgas", 288)), GALGAS_bool (true), var_typedAttributeList_7469, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 291)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 292)), var_constructorMap_8187, var_getterMap_8617, var_setterMap_8847, var_instanceMethodMap_9569, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 297)), var_optionalMethodMap_6812, var_enumerationDescriptor_7223, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-sorted-list.galgas", 300)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-sorted-list.galgas", 300)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 300)), var_constructorAttributeTypeList_7275, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 302)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 303)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 304)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 305)), GALGAS_bool (false), var_listElementTypeIndex_7136, GALGAS_string ("emptySortedList"), GALGAS_string ("-sortedlist-").add_operation (temp_8.readProperty_mSortedListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-sorted-list.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 309)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-sorted-list.galgas", 310))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 283)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_10448.readProperty_mTypeName (), var_typeDefinition_10448, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 312)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_string /* constinArgument_inProductDirectory */,
                                                             const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                             GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  GALGAS_lstring var_sortedListNameForUsefulness_12094 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 329)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_sortedListNameForUsefulness_12094, var_sortedListNameForUsefulness_12094, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 330)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_12283 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 331)), temp_2.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 331)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_12094, var_elementTypeNameForUsefulness_12283 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 332)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_12542 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 334)) ;
  GALGAS_propertyIndexMap var_attributeMap_12609 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 335)) ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_12668 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12668.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_12704 = function_typeNameForUsefulEntitiesGraph (enumerator_12668.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 337)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_12094, var_propertyTypeNameForUsefulness_12704 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 338)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_12893 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_12668.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 339)) ;
    GALGAS_bool var_hasSelector_12945 = GALGAS_bool (true) ;
    var_typedAttributeList_12542.addAssign_operation (var_t_12893, enumerator_12668.current_mPropertyName (HERE), GALGAS_bool (true), var_hasSelector_12945  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 341)) ;
    {
    var_attributeMap_12609.setter_insertKey (enumerator_12668.current_mPropertyName (HERE), var_t_12893, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 346)) ;
    }
    enumerator_12668.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting_13168 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-sorted-list.galgas", 349)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList_13237 = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 350)) ;
  const GALGAS_sortedListDeclarationAST temp_4 = this ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_13289 (temp_4.readProperty_mSortDescriptorList (), kENUMERATION_UP) ;
  while (enumerator_13289.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_type_13408 ;
    var_attributeMap_12609.method_searchKey (enumerator_13289.current_mSortedAttributeName (HERE), var_type_13408, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 352)) ;
    var_sortDescriptorList_13237.addAssign_operation (var_type_13408, enumerator_13289.current_mSortedAttributeName (HERE).readProperty_string (), enumerator_13289.current_mAscending (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 353)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_attributesUsedForSorting_13168.getter_hasKey (enumerator_13289.current_mSortedAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 354)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_13289.current_mSortedAttributeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_13289.current_mSortedAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 355)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 355)), fixItArray6  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 355)) ;
      }
    }
    var_attributesUsedForSorting_13168.addAssign_operation (enumerator_13289.current_mSortedAttributeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 357)) ;
    enumerator_13289.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_7 = this ;
  const GALGAS_sortedListDeclarationAST temp_8 = this ;
  const GALGAS_sortedListDeclarationAST temp_9 = this ;
  const GALGAS_sortedListDeclarationAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (temp_7.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 361)), GALGAS_sortedListTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_8.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 363)), extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_9.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 364)), temp_10.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 364)), var_typedAttributeList_12542, var_sortDescriptorList_13237  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 362))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 360)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'sortedListGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

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
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_sortedlist {\n//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n\n" ;
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
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
  result << GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cSortedListElement {\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element mObject ;\n\n//--- Constructor\n  public: cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_606_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_606 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_606.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_606.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue () ;
      result << " & in_" ;
      result << enumerator_606.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue () ;
      if (enumerator_606.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_606_.increment () ;
      enumerator_606.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cSortedListElement * copy (void) ;\n\n//--- Virtual method for comparing elements\n  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n\n//--- Description\n public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n\n//--- Virtual method that comparing element for sorting\n  public: virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;\n} ;\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1708_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1708 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1708.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_1708.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 39)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1708.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 39)).stringValue () ;
      if (enumerator_1708.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1708_.increment () ;
      enumerator_1708.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\ncSortedListElement (THERE),\nmObject (" ;
  GALGAS_uint index_2001_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2001 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2001.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_2001.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 47)).stringValue () ;
      if (enumerator_2001.hasNextObject ()) {
        result << ", " ;
      }
      index_2001_.increment () ;
      enumerator_2001.gotoNextObject () ;
    }
  }
  result << ") {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nbool cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n  return mObject.isValid () ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncSortedListElement * cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n  cSortedListElement * result = nullptr ;\n  macroMyNew (result, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2692_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2692 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2692.hasCurrentObject ()) {
      result << "mObject.mProperty_" ;
      result << enumerator_2692.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 65)).stringValue () ;
      if (enumerator_2692.hasNextObject ()) {
        result << ", " ;
      }
      index_2692_.increment () ;
      enumerator_2692.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
  GALGAS_uint index_3146_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3146 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3146.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n  ioString.writeStringMultiple (\"| \", inIndentation) ;\n  ioString << " ;
      result << enumerator_3146.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 79)).stringValue () ;
      result << " \":\" ;\n  mObject.mProperty_" ;
      result << enumerator_3146.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 80)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_3146_.increment () ;
      enumerator_3146.gotoNextObject () ;
    }
  }
  result << "}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ntypeComparisonResult cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compare (const cCollectionElement * inOperand) const {\n  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n  macroValidSharedObject (operand, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n  return mObject.objectCompare (operand->mObject) ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\nAC_GALGAS_sortedlist () {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ntypeComparisonResult cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compareForSorting (const cSortedListElement * inOperand) const {\n  typeComparisonResult result = kOperandEqual ;\n  const cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (const cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n  macroValidSharedObject (operand, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_4708_ (0) ;
  if (in_SORT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_sortDescriptorListForGeneration enumerator_4708 (in_SORT_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4708.hasCurrentObject ()) {
      result << "  if (result == kOperandEqual) {\n    result = " ;
      const enumGalgasBool test_0 = enumerator_4708.current_mAscendingOrder (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "mObject.mProperty_" ;
        result << enumerator_4708.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue () ;
        result << ".objectCompare (operand->mObject.mProperty_" ;
        result << enumerator_4708.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue () ;
        result << ")" ;
      }else if (kBoolFalse == test_0) {
        result << "operand->mObject.mProperty_" ;
        result << enumerator_4708.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue () ;
        result << ".objectCompare (mObject.mProperty_" ;
        result << enumerator_4708.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue () ;
        result << ")" ;
      }
      result << " ;\n  }\n" ;
      index_4708_.increment () ;
      enumerator_4708.gotoNextObject () ;
    }
  }
  result << "  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptySortedList (LOCATION_ARGS) {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  result.createNewEmptySortedList (THERE) ;\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_sortedListWithValue (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5810_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5810 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5810.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_5810.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 130)).stringValue () ;
      result << " & inOperand" ;
      result << index_5810_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 130)).stringValue () ;
      if (enumerator_5810.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5810_IDX.increment () ;
      enumerator_5810.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = constructor_emptySortedList (THERE) ;\n  cSortedListElement * p = nullptr ;\n  macroMyNew (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_6219_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6219 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6219.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_6219_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 138)).stringValue () ;
      if (enumerator_6219.hasNextObject ()) {
        result << ", " ;
      }
      index_6219_IDX.increment () ;
      enumerator_6219.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n  capSortedListElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  result.appendObject (attributes) ;\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6693_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6693 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6693.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_6693.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 153)).stringValue () ;
      result << " & inOperand" ;
      result << index_6693_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 153)).stringValue () ;
      if (enumerator_6693.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6693_IDX.increment () ;
      enumerator_6693.gotoNextObject () ;
    }
  }
  result << "\n    " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cSortedListElement * p = nullptr ;\n    macroMyNew (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_7002_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7002 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7002.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7002_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 162)).stringValue () ;
      if (enumerator_7002.hasNextObject ()) {
        result << ", " ;
      }
      index_7002_IDX.increment () ;
      enumerator_7002.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n    capSortedListElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_insert (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7463_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7463 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7463.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_7463.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 177)).stringValue () ;
      result << " inOperand" ;
      result << index_7463_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 177)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_7463_IDX.increment () ;
      enumerator_7463.gotoNextObject () ;
    }
  }
  result << "C_Compiler * /* inCompiler */\n    " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cSortedListElement * p = nullptr ;\n    macroMyNew (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_7788_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7788 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7788.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7788_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 185)).stringValue () ;
      if (enumerator_7788.hasNextObject ()) {
        result << ", " ;
      }
      index_7788_IDX.increment () ;
      enumerator_7788.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n    capSortedListElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::plusAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inOperand,\n                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid ()) {\n    appendSortedList (inOperand) ;\n  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popSmallest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8680_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8680 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8680.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_8680.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 210)).stringValue () ;
      result << " & outOperand" ;
      result << index_8680_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 210)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8680_IDX.increment () ;
      enumerator_8680.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  capSortedListElement attributes ;\n  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (nullptr == p) {\n" ;
  GALGAS_uint index_9173_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9173 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9173.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_9173_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 220)).stringValue () ;
      result << ".drop () ;\n" ;
      index_9173_IDX.increment () ;
      enumerator_9173.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_9403_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9403 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9403.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_9403_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 226)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_9403.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 226)).stringValue () ;
      result << " ;\n" ;
      index_9403_IDX.increment () ;
      enumerator_9403.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popGreatest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9797_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9797 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9797.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_9797.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 235)).stringValue () ;
      result << " & outOperand" ;
      result << index_9797_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 235)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9797_IDX.increment () ;
      enumerator_9797.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  capSortedListElement attributes ;\n  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (nullptr == p) {\n" ;
  GALGAS_uint index_10290_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10290 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10290.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10290_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 245)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10290_IDX.increment () ;
      enumerator_10290.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_10520_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10520 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10520.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10520_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 251)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_10520.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 251)).stringValue () ;
      result << " ;\n" ;
      index_10520_IDX.increment () ;
      enumerator_10520.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_smallest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10911_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10911 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10911.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_10911.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 260)).stringValue () ;
      result << " & outOperand" ;
      result << index_10911_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 260)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10911_IDX.increment () ;
      enumerator_10911.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  capSortedListElement attributes ;\n  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (nullptr == p) {\n" ;
  GALGAS_uint index_11407_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11407 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11407.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11407_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 270)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11407_IDX.increment () ;
      enumerator_11407.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_11637_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11637 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11637.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11637_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 276)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_11637.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 276)).stringValue () ;
      result << " ;\n" ;
      index_11637_IDX.increment () ;
      enumerator_11637.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_greatest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12008_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12008 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12008.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_12008.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 285)).stringValue () ;
      result << " & outOperand" ;
      result << index_12008_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 285)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_12008_IDX.increment () ;
      enumerator_12008.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  capSortedListElement attributes ;\n  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (nullptr == p) {\n" ;
  GALGAS_uint index_12504_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12504 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12504.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12504_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 295)).stringValue () ;
      result << ".drop () ;\n" ;
      index_12504_IDX.increment () ;
      enumerator_12504.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_12734_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12734 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12734.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12734_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 301)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_12734.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 301)).stringValue () ;
      result << " ;\n" ;
      index_12734_IDX.increment () ;
      enumerator_12734.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inEnumeratedObject,\n                   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const typeEnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current (LOCATION_ARGS) const {\n  const cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n  return p->mObject ;\n}\n\n" ;
  GALGAS_uint index_13807_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13807 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13807.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_13807.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 324)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_13807.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 324)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n  const cSortedListElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cSortedListElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cSortedListElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n  return p->mObject.mProperty_" ;
      result << enumerator_13807.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 327)).stringValue () ;
      result << " ;\n}\n\n" ;
      index_13807_IDX.increment () ;
      enumerator_13807.gotoNextObject () ;
    }
  }
  result << "\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sortedListTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                     GALGAS_string & outArgument_outHeader,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sortedListTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_15798 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 409)) ;
  const GALGAS_sortedListTypeForGeneration temp_1 = this ;
  const GALGAS_sortedListTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, var_selfTypedefinition_15798.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 412)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 410))) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_15798.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 417)), var_selfTypedefinition_15798.readProperty_mIsConcrete (), var_selfTypedefinition_15798.readProperty_mConstructorMap (), var_selfTypedefinition_15798.readProperty_mGetterMap (), var_selfTypedefinition_15798.readProperty_mSetterMap (), var_selfTypedefinition_15798.readProperty_mInstanceMethodMap (), var_selfTypedefinition_15798.readProperty_mClassMethodMap (), var_selfTypedefinition_15798.readProperty_mOptionalMethodMap (), var_selfTypedefinition_15798.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_15798.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_15798.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_15798.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 415))), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 415)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sortedListTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_sortedListTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_string & outArgument_outImplementation,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_sortedListTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_17008 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_17008.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_17008.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 439)) ;
    enumerator_17008.gotoNextObject () ;
  }
  const GALGAS_sortedListTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 441)) ;
  const GALGAS_sortedListTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 442)) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = this ;
  const GALGAS_sortedListTypeForGeneration temp_4 = this ;
  const GALGAS_sortedListTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 444)), temp_4.readProperty_mTypedAttributeList (), temp_5.readProperty_mSortDescriptorList () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 443))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structDeclarationAST temp_0 = this ;
  const GALGAS_structDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3491 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 85)), temp_1.readProperty_mStructTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-struct.galgas", 85)) ;
  {
  const GALGAS_structDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3491, temp_2, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 86)) ;
  }
  const GALGAS_structDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_3653 (temp_3.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_3653.hasCurrentObject ()) {
    GALGAS_lstring var_propertyKey_3698 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3653.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 88)), enumerator_3653.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-struct.galgas", 88)) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3491, var_propertyKey_3698 COMMA_SOURCE_FILE ("type-struct.galgas", 89)) ;
    }
    enumerator_3653.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@structDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_structDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_structDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("struct @").add_operation (temp_0.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 98)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodMap var_optionalMethodMap_5167 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 118)) ;
  GALGAS_unifiedTypeMapEntry var_structTypeIndex_5285 ;
  {
  const GALGAS_structDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mStructTypeName (), var_structTypeIndex_5285, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 120)) ;
  }
  GALGAS_propertyMap var_propertyMap_5356 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 122)) ;
  GALGAS_constructorMap var_constructorMap_5395 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 123)) ;
  GALGAS_functionSignature var_constructorPropertyTypeList_5440 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 124)) ;
  GALGAS_typedPropertyList var_typedPropertyList_5498 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 125)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_5552 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 126)) ;
  const GALGAS_structDeclarationAST temp_1 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5668 (temp_1.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_5668.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_propertyTypeEntry_5769 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_5668.current_mPropertyTypeName (HERE), var_propertyTypeEntry_5769, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 128)) ;
    }
    GALGAS_string temp_2 ;
    const enumGalgasBool test_3 = enumerator_5668.current_selector (HERE).boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = enumerator_5668.current_mPropertyName (HERE).readProperty_string () ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_lstring var_selector_5805 = temp_2.getter_nowhere (SOURCE_FILE ("type-struct.galgas", 129)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = enumerator_5668.current_mInitialization (HERE).getter_isNone (SOURCE_FILE ("type-struct.galgas", 130)).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_constructorPropertyTypeList_5440.addAssign_operation (var_selector_5805, var_propertyTypeEntry_5769, enumerator_5668.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-struct.galgas", 131)) ;
      }
    }
    var_typesToIncludeInHeaderCompilation_5552.addAssign_operation (var_propertyTypeEntry_5769  COMMA_SOURCE_FILE ("type-struct.galgas", 133)) ;
    var_typedPropertyList_5498.addAssign_operation (var_propertyTypeEntry_5769, enumerator_5668.current_mPropertyName (HERE), enumerator_5668.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-struct.galgas", 134)), enumerator_5668.current_selector (HERE)  COMMA_SOURCE_FILE ("type-struct.galgas", 134)) ;
    {
    var_propertyMap_5356.setter_insertKey (enumerator_5668.current_mPropertyName (HERE), extensionGetter_accessControl (enumerator_5668.current_mAccessControl (HERE), var_structTypeIndex_5285, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 137)), enumerator_5668.current_isConstant (HERE), var_propertyTypeEntry_5769, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 135)) ;
    }
    enumerator_5668.gotoNextObject () ;
  }
  {
  var_constructorMap_5395.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 143))  COMMA_SOURCE_FILE ("type-struct.galgas", 143)), var_constructorPropertyTypeList_5440, GALGAS_bool (false), var_structTypeIndex_5285, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 142)) ;
  }
  GALGAS_getterMap var_getterMap_6563 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_6563, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 149)) ;
  }
  GALGAS_setterMap var_setterMap_6604 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 151)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6666 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 153)) ;
  {
  const GALGAS_structDeclarationAST temp_5 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_mStructTypeName (), GALGAS_bool (false), var_getterMap_6563, var_setterMap_6604, var_instanceMethodMap_6666, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 155)) ;
  }
  GALGAS_unifiedTypeMapEntry var_enumeratedType_7095 ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_structDeclarationAST temp_7 = this ;
    test_6 = GALGAS_bool (kIsEqual, temp_7.readProperty_mEnumeratedElementTypeName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_enumeratedType_7095 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-struct.galgas", 171)) ;
    }
  }
  if (kBoolFalse == test_6) {
    {
    const GALGAS_structDeclarationAST temp_8 = this ;
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_8.readProperty_mEnumeratedElementTypeName (), var_enumeratedType_7095, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 173)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_7373 = GALGAS_string ("default") ;
  cEnumerator_typedPropertyList enumerator_7435 (var_typedPropertyList_5498, kENUMERATION_UP) ;
  bool bool_9 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_7373.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_7435.hasCurrentObject () && bool_9) {
    while (enumerator_7435.hasCurrentObject () && bool_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsEqual, extensionGetter_definition (enumerator_7435.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 181)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())).operator_or (extensionGetter_definition (enumerator_7435.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 181)).readProperty_mIsConcrete ().operator_not (SOURCE_FILE ("type-struct.galgas", 181)) COMMA_SOURCE_FILE ("type-struct.galgas", 181)).boolEnum () ;
        if (kBoolTrue == test_10) {
          var_defaultConstructorName_7373 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_7435.gotoNextObject () ;
      if (enumerator_7435.hasCurrentObject ()) {
        bool_9 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_7373.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_structDeclarationAST temp_11 = this ;
  const GALGAS_structDeclarationAST temp_12 = this ;
  const GALGAS_structDeclarationAST temp_13 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_7702 = GALGAS_unifiedTypeDefinition::constructor_new (temp_11.readProperty_mStructTypeName (), temp_12.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-struct.galgas", 190)), GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("type-struct.galgas", 191)), GALGAS_bool (false), var_typedPropertyList_5498, var_propertyMap_5356, var_typedPropertyList_5498, var_constructorMap_5395, var_getterMap_6563, var_setterMap_6604, var_instanceMethodMap_6666, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 200)), var_optionalMethodMap_5167, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 202)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-struct.galgas", 203)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-struct.galgas", 203)) COMMA_SOURCE_FILE ("type-struct.galgas", 203)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 204)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 205)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 206)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 207)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 208)), GALGAS_bool (false), var_enumeratedType_7095, var_defaultConstructorName_7373, GALGAS_string ("struct-").add_operation (temp_13.readProperty_mStructTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-struct.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 212)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-struct.galgas", 213))  COMMA_SOURCE_FILE ("type-struct.galgas", 186)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_7702.readProperty_mTypeName (), var_typeDefinition_7702, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 215)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForStruct'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForStruct (C_Compiler *
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-struct.galgas", 223)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-struct.galgas", 224)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-struct.galgas", 225)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-struct.galgas", 226)) ;
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

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForStruct (nullptr,
                                                                    releaseOnceFunctionResult_forbiddenKeysForStruct) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForStruct [1] = {
  nullptr
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

void cPtr_structDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                         const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                         GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structDeclarationAST temp_0 = this ;
  GALGAS_lstring var_structNameForUsefulness_9657 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mStructTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 241)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_9657, var_structNameForUsefulness_9657, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 242)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_structDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mStructurePropertyList ().getter_count (SOURCE_FILE ("type-struct.galgas", 244)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructTypeName ().readProperty_location (), GALGAS_string ("a structure cannot be empty: it must have at least one property"), fixItArray4  COMMA_SOURCE_FILE ("type-struct.galgas", 245)) ;
    }
  }
  GALGAS_typedPropertyList var_typedPropertyList_10010 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 247)) ;
  GALGAS_typedPropertyList var_constructorArgumentList_10058 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 248)) ;
  GALGAS_propertyIndexMap var_propertyMap_10111 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 249)) ;
  const GALGAS_structDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10191 (temp_5.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_10191.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_10249 = function_typeNameForUsefulEntitiesGraph (enumerator_10191.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 251)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_9657, var_propertyTypeNameForUsefulness_10249 COMMA_SOURCE_FILE ("type-struct.galgas", 252)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_10434 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_10191.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 253)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 254)).getter_hasKey (enumerator_10191.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-struct.galgas", 254)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string var_m_10565 = GALGAS_string ("an property cannot be named:") ;
        cEnumerator_stringset enumerator_10639 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 256)), kENUMERATION_UP) ;
        while (enumerator_10639.hasCurrentObject ()) {
          var_m_10565.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_10639.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 257)) ;
          enumerator_10639.gotoNextObject () ;
        }
        var_m_10565.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 259)) ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_10191.current_mPropertyName (HERE).readProperty_location (), var_m_10565, fixItArray7  COMMA_SOURCE_FILE ("type-struct.galgas", 260)) ;
      }
    }
    {
    var_propertyMap_10111.setter_insertKey (enumerator_10191.current_mPropertyName (HERE), var_t_10434, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 262)) ;
    }
    switch (enumerator_10191.current_mInitialization (HERE).enumValue ()) {
    case GALGAS_propertyInCollectionInitializationAST::kNotBuilt:
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_none:
      {
        var_constructorArgumentList_10058.addAssign_operation (var_t_10434, enumerator_10191.current_mPropertyName (HERE), enumerator_10191.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-struct.galgas", 268)), enumerator_10191.current_selector (HERE)  COMMA_SOURCE_FILE ("type-struct.galgas", 265)) ;
      }
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_some:
      {
      }
      break ;
    }
    var_typedPropertyList_10010.addAssign_operation (var_t_10434, enumerator_10191.current_mPropertyName (HERE), enumerator_10191.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-struct.galgas", 275)), enumerator_10191.current_selector (HERE)  COMMA_SOURCE_FILE ("type-struct.galgas", 272)) ;
    enumerator_10191.gotoNextObject () ;
  }
  GALGAS_string var_initializationCode_11177 = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset var_inclusionSet_11207 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-struct.galgas", 280)) ;
  GALGAS_uint var_temporaryVariableIndex_11248 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_11281 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-struct.galgas", 282)) ;
  GALGAS_usefulEntitiesGraph var_usefulEntitiesGraph_11349 = GALGAS_usefulEntitiesGraph::constructor_emptyGraph (SOURCE_FILE ("type-struct.galgas", 283)) ;
  const GALGAS_structDeclarationAST temp_8 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11425 (temp_8.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_11425.hasCurrentObject ()) {
    switch (enumerator_11425.current_mInitialization (HERE).enumValue ()) {
    case GALGAS_propertyInCollectionInitializationAST::kNotBuilt:
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_none:
      {
      }
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_some:
      {
        const cEnumAssociatedValues_propertyInCollectionInitializationAST_some * extractPtr_12706 = (const cEnumAssociatedValues_propertyInCollectionInitializationAST_some *) (enumerator_11425.current_mInitialization (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_11531_expressionAST = extractPtr_12706->mAssociatedValue0 ;
        GALGAS_localVarManager var_variableMap_11558 = GALGAS_localVarManager::constructor_new (SOURCE_FILE ("type-struct.galgas", 288)) ;
        GALGAS_analysisContext var_analysisContext_11623 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("type-struct.galgas", 293)), GALGAS_string::makeEmptyString (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-struct.galgas", 289)) ;
        GALGAS_unifiedTypeMapEntry var_propertyType_11817 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_11425.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 297)) ;
        GALGAS_semanticExpressionForGeneration var_expression_12121 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_11531_expressionAST.ptr (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-struct.galgas", 299)), var_usefulEntitiesGraph_11349, var_propertyType_11817, var_analysisContext_11623, ioArgument_ioTypeMap, var_variableMap_11558, var_expression_12121, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 298)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (var_propertyType_11817, var_expression_12121.readProperty_mResultType (), enumerator_11425.current_mPropertyName (HERE).readProperty_location (), var_expression_12121, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 308)) ;
        }
        GALGAS_string var_sourceVar_12519 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) var_expression_12121.ptr (), var_initializationCode_11177, var_inclusionSet_11207, var_temporaryVariableIndex_11248, var_unusedVariableCppNameSet_11281, var_sourceVar_12519, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 314)) ;
        var_initializationCode_11177.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (extensionGetter_identifierRepresentation (var_propertyType_11817, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 321)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 321)) ;
        var_initializationCode_11177.plusAssign_operation(GALGAS_string (" in_").add_operation (enumerator_11425.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 322)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 322)).add_operation (var_sourceVar_12519, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 322)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 322)) ;
      }
      break ;
    }
    enumerator_11425.gotoNextObject () ;
  }
  const GALGAS_structDeclarationAST temp_9 = this ;
  const GALGAS_structDeclarationAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (temp_9.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 328)), GALGAS_structTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_10.readProperty_mStructTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 330)), var_typedPropertyList_10010, var_constructorArgumentList_10058, var_initializationCode_11177  COMMA_SOURCE_FILE ("type-struct.galgas", 329))  COMMA_SOURCE_FILE ("type-struct.galgas", 327)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'boolsetGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_boolsetGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_boolsetGenerationTemplate_0 [1] = {
  nullptr
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
                                                                                  const GALGAS_typedPropertyList & /* in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST */,
                                                                                  const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n//\n//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" struct"), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n//\n//----------------------------------------------------------------------------------------------------------------------\n\nclass GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n//--------------------------------- Properties\n" ;
  GALGAS_uint index_485_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_485 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_485.hasCurrentObject ()) {
      result << "  public: GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_485.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue () ;
      result << " mProperty_" ;
      result << enumerator_485.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue () ;
      result << " ;\n  public: inline GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_485.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 12)).stringValue () ;
      result << " readProperty_" ;
      result << enumerator_485.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 12)).stringValue () ;
      result << " (void) const {\n    return mProperty_" ;
      result << enumerator_485.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 13)).stringValue () ;
      result << " ;\n  }\n\n" ;
      index_485_.increment () ;
      enumerator_485.gotoNextObject () ;
    }
  }
  result << "//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n" ;
  const enumGalgasBool test_0 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//--------------------------------- Default GALGAS constructor\n  public: static GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " constructor_default (LOCATION_ARGS) ;\n\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "//--------------------------------- Default constructor\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n\n//--------------------------------- Property setters\n" ;
  GALGAS_uint index_1426_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1426 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1426.hasCurrentObject ()) {
      result << "  public: inline void setter_set" ;
      result << enumerator_1426.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 32)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 32)).stringValue () ;
      result << " (const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_1426.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 32)).stringValue () ;
      result << " & inValue COMMA_UNUSED_LOCATION_ARGS) {\n    mProperty_" ;
      result << enumerator_1426.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 33)).stringValue () ;
      result << " = inValue ;\n  }\n\n" ;
      index_1426_.increment () ;
      enumerator_1426.gotoNextObject () ;
    }
  }
  result << "//--------------------------------- Virtual destructor (in debug mode)\n  public: virtual ~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_2029_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2029 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2029.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_2029.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 41)).stringValue () ;
      result << " & in_" ;
      result << enumerator_2029.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 41)).stringValue () ;
      if (enumerator_2029.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_2029_.increment () ;
      enumerator_2029.gotoNextObject () ;
    }
  }
  result << ") ;\n\n" ;
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
                                                                                              const GALGAS_typedPropertyList & in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST,
                                                                                              const GALGAS_string & in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE,
                                                                                              const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  GALGAS_uint index_268_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_268 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_268.hasCurrentObject ()) {
      result << "mProperty_" ;
      result << enumerator_268.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 6)).stringValue () ;
      result << " ()" ;
      if (enumerator_268.hasNextObject ()) {
        result << ",\n" ;
      }
      index_268_.increment () ;
      enumerator_268.gotoNextObject () ;
    }
  }
  result << " {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_811_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_811 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_811.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_811.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue () ;
      result << " & inOperand" ;
      result << index_811_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue () ;
      if (enumerator_811.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_811_IDX.increment () ;
      enumerator_811.gotoNextObject () ;
    }
  }
  result << ") :\n" ;
  GALGAS_uint index_1018_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1018 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1018.hasCurrentObject ()) {
      result << "mProperty_" ;
      result << enumerator_1018.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 24)).stringValue () ;
      result << " (inOperand" ;
      result << index_1018_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 24)).stringValue () ;
      result << ")" ;
      if (enumerator_1018.hasNextObject ()) {
        result << ",\n" ;
      }
      index_1018_IDX.increment () ;
      enumerator_1018.gotoNextObject () ;
    }
  }
  result << " {\n}\n\n" ;
  const enumGalgasBool test_0 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_default (UNUSED_LOCATION_ARGS) {\n  return GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_1509_ (0) ;
    if (in_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1509 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1509.hasCurrentObject ()) {
        result << "GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_1509.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).stringValue () ;
        result << "::constructor_" ;
        result << extensionGetter_definition (enumerator_1509.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).readProperty_mDefaultConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).stringValue () ;
        result << " (HERE)" ;
        if (enumerator_1509.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_1509_.increment () ;
        enumerator_1509.gotoNextObject () ;
      }
    }
    result << ") ;\n}\n\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_new (" ;
  columnMarker = result.currentColumn () ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 45)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "UNUSED_LOCATION_ARGS) {\n" ;
  }else if (kBoolFalse == test_1) {
    GALGAS_uint index_2061_ (0) ;
    if (in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_2061 (in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2061.hasCurrentObject ()) {
        result << "const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_2061.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 49)).stringValue () ;
        result << " & in_" ;
        result << enumerator_2061.current_mPropertyName (HERE).readProperty_string ().stringValue () ;
        if (enumerator_2061.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_2061_.increment () ;
        enumerator_2061.gotoNextObject () ;
      }
    }
    result << " \n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_UNUSED_LOCATION_ARGS) {\n" ;
  }
  result << in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE.stringValue () ;
  result << "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  if (" ;
  GALGAS_uint index_2343_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2343 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2343.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_2343.current_mPropertyName (HERE).readProperty_string ().stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_2343.hasNextObject ()) {
        result << " && " ;
      }
      index_2343_.increment () ;
      enumerator_2343.gotoNextObject () ;
    }
  }
  result << ") {\n    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2515_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2515 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2515.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_2515.current_mPropertyName (HERE).readProperty_string ().stringValue () ;
      if (enumerator_2515.hasNextObject ()) {
        result << ", " ;
      }
      index_2515_.increment () ;
      enumerator_2515.gotoNextObject () ;
    }
  }
  result << ") ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ntypeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n   typeComparisonResult result = kOperandEqual ;\n" ;
  GALGAS_uint index_2963_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2963 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2963.hasCurrentObject ()) {
      result << "  if (result == kOperandEqual) {\n    result = mProperty_" ;
      result << enumerator_2963.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 79)).stringValue () ;
      result << ".objectCompare (inOperand.mProperty_" ;
      result << enumerator_2963.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 79)).stringValue () ;
      result << ") ;\n  }\n" ;
      index_2963_.increment () ;
      enumerator_2963.gotoNextObject () ;
    }
  }
  result << "  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nbool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n  return " ;
  GALGAS_uint index_3474_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3474 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3474.hasCurrentObject ()) {
      result << "mProperty_" ;
      result << enumerator_3474.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 90)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_3474.hasNextObject ()) {
        result << " && " ;
      }
      index_3474_.increment () ;
      enumerator_3474.gotoNextObject () ;
    }
  }
  result << " ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n" ;
  GALGAS_uint index_3835_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3835 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3835.hasCurrentObject ()) {
      result << "  mProperty_" ;
      result << enumerator_3835.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 100)).stringValue () ;
      result << ".drop () ;\n" ;
      index_3835_.increment () ;
      enumerator_3835.gotoNextObject () ;
    }
  }
  result << "}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (" ;
  columnMarker = result.currentColumn () ;
  result << "C_String & ioString,\n                              " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t inIndentation) const {\n  ioString << \"<struct @" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << ":\" ;\n  if (! isValid ()) {\n    ioString << \" not built\" ;\n  }else{\n" ;
  GALGAS_uint index_4372_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4372 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4372.hasCurrentObject ()) {
      result << "    mProperty_" ;
      result << enumerator_4372.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 114)).stringValue () ;
      result << ".description (ioString, inIndentation+1) ;\n" ;
      if (enumerator_4372.hasNextObject ()) {
        result << "    ioString << \", \" ;\n" ;
      }
      index_4372_IDX.increment () ;
      enumerator_4372.gotoNextObject () ;
    }
  }
  result << "  }\n  ioString << \">\" ;\n}\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                 GALGAS_string & outArgument_outHeader,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_14509 (temp_0.readProperty_mTypedPropertyList (), kENUMERATION_UP) ;
  while (enumerator_14509.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_14509.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 375)) ;
    enumerator_14509.gotoNextObject () ;
  }
  const GALGAS_structTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_14598 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 377)) ;
  const GALGAS_structTypeForGeneration temp_2 = this ;
  const GALGAS_structTypeForGeneration temp_3 = this ;
  const GALGAS_structTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_boolsetGenerationTemplate_structTypeHeader_31_ (inCompiler, var_selfTypedefinition_14598.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 380)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), GALGAS_bool (kIsNotEqual, var_selfTypedefinition_14598.readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 378))) ;
  const GALGAS_structTypeForGeneration temp_5 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_14598.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 387)), var_selfTypedefinition_14598.readProperty_mIsConcrete (), var_selfTypedefinition_14598.readProperty_mConstructorMap (), var_selfTypedefinition_14598.readProperty_mGetterMap (), var_selfTypedefinition_14598.readProperty_mSetterMap (), var_selfTypedefinition_14598.readProperty_mInstanceMethodMap (), var_selfTypedefinition_14598.readProperty_mClassMethodMap (), var_selfTypedefinition_14598.readProperty_mOptionalMethodMap (), var_selfTypedefinition_14598.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_14598.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_14598.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_14598.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-struct.galgas", 385))), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 385)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_structTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outImplementation,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 409)) ;
  const GALGAS_structTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_15940 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 410)) ;
  const GALGAS_structTypeForGeneration temp_2 = this ;
  const GALGAS_structTypeForGeneration temp_3 = this ;
  const GALGAS_structTypeForGeneration temp_4 = this ;
  const GALGAS_structTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_boolsetGenerationTemplate_structTypeSpecificImplementation (inCompiler, var_selfTypedefinition_15940.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 413)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), temp_5.readProperty_mConstructorInitializationCode (), GALGAS_bool (kIsNotEqual, var_selfTypedefinition_15940.readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 411))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typealiasDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_typealiasDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_typealiasDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("typealias @").add_operation (temp_0.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 141)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typealiasDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typealiasDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & /* ioArgument_ioSemanticDeclarationList */,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typealiasDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typealiasDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                   GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                   GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                   GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                   GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_typealiasDeclarationAST temp_0 = this ;
  const GALGAS_typealiasDeclarationAST temp_1 = this ;
  GALGAS_lstring var_aliasKey_6603 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 157)), temp_1.readProperty_mAliasTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 157)) ;
  {
  const GALGAS_typealiasDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_aliasKey_6603, temp_2, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 158)) ;
  }
  const GALGAS_typealiasDeclarationAST temp_3 = this ;
  const GALGAS_typealiasDeclarationAST temp_4 = this ;
  GALGAS_lstring var_referenceKey_6756 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mDefinedTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 159)), temp_4.readProperty_mDefinedTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 159)) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_aliasKey_6603, var_referenceKey_6756 COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 160)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typealiasDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typealiasDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                             const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                             const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_definedTypeEntry_7652 ;
  {
  const GALGAS_typealiasDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_0.readProperty_mDefinedTypeName ().readProperty_string (), var_definedTypeEntry_7652, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 171)) ;
  }
  switch (var_definedTypeEntry_7652.enumValue ()) {
  case GALGAS_unifiedTypeMapEntry::kNotBuilt:
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_null:
    {
      const GALGAS_typealiasDeclarationAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mDefinedTypeName ().readProperty_location (), GALGAS_string ("Undefined type"), fixItArray2  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 174)) ;
    }
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_element:
    {
      const cEnumAssociatedValues_unifiedTypeMapEntry_element * extractPtr_9419 = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) (var_definedTypeEntry_7652.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapElementClass_2D_weak extractedValue_7818_weakElement = extractPtr_9419->mAssociatedValue0 ;
      switch (extractedValue_7818_weakElement.bang_unifiedTypeMapElementClass_2D_weak (inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 176)).readProperty_mDefinition ().enumValue ()) {
      case GALGAS_typeDefinition::kNotBuilt:
        break ;
      case GALGAS_typeDefinition::kEnum_unsolved:
        {
          const GALGAS_typealiasDeclarationAST temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mDefinedTypeName ().readProperty_location (), GALGAS_string ("Undefined type"), fixItArray4  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 178)) ;
        }
        break ;
      case GALGAS_typeDefinition::kEnum_solved:
        {
          const cEnumAssociatedValues_typeDefinition_solved * extractPtr_9411 = (const cEnumAssociatedValues_typeDefinition_solved *) (extractedValue_7818_weakElement.bang_unifiedTypeMapElementClass_2D_weak (inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 176)).readProperty_mDefinition ().unsafePointer ()) ;
          const GALGAS_unifiedTypeDefinition extractedValue_7994_def = extractPtr_9411->mAssociatedValue0 ;
          const GALGAS_typealiasDeclarationAST temp_5 = this ;
          GALGAS_unifiedTypeDefinition var_definition_8013 = GALGAS_unifiedTypeDefinition::constructor_new (extractedValue_7994_def.readProperty_mTypeName (), GALGAS_bool (false), extractedValue_7994_def.readProperty_mIsConcrete (), extractedValue_7994_def.readProperty_mSuperType (), extractedValue_7994_def.readProperty_mTypeKindEnum (), extractedValue_7994_def.readProperty_mSupportCollectionValue (), extractedValue_7994_def.readProperty_mAllTypedPropertyList (), extractedValue_7994_def.readProperty_mPropertyMap (), extractedValue_7994_def.readProperty_mCurrentTypedPropertyList (), extractedValue_7994_def.readProperty_mConstructorMap (), extractedValue_7994_def.readProperty_mGetterMap (), extractedValue_7994_def.readProperty_mSetterMap (), extractedValue_7994_def.readProperty_mInstanceMethodMap (), extractedValue_7994_def.readProperty_mClassMethodMap (), extractedValue_7994_def.readProperty_mOptionalMethodMap (), extractedValue_7994_def.readProperty_mEnumerationDescriptor (), extractedValue_7994_def.readProperty_mHandledOperatorFlags (), extractedValue_7994_def.readProperty_mAddAssignOperatorArguments (), extractedValue_7994_def.readProperty_mEnumConstantMap (), extractedValue_7994_def.readProperty_mEnumConstantList (), extractedValue_7994_def.readProperty_mMapSearchMethodList (), extractedValue_7994_def.readProperty_mMapEntrySearchConstructorList (), extractedValue_7994_def.readProperty_mGenerateHeaderInSeparateFile (), extractedValue_7994_def.readProperty_mTypeForEnumeratedElement (), extractedValue_7994_def.readProperty_mDefaultConstructorName (), GALGAS_string ("typealias-").add_operation (temp_5.readProperty_mAliasTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-alias-and-type-declaration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 206)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-alias-and-type-declaration.galgas", 207))  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 180)) ;
          {
          const GALGAS_typealiasDeclarationAST temp_6 = this ;
          extensionSetter_insertType (ioArgument_ioTypeMap, temp_6.readProperty_mAliasTypeName (), var_definition_8013, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 209)) ;
          }
        }
        break ;
      }
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typealiasDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typealiasDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                            const GALGAS_string /* constinArgument_inProductDirectory */,
                                                            const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                            const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                            GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_typealiasDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_10182 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mAliasTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 224)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10182, var_nameForUsefulness_10182, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 225)) ;
  }
  const GALGAS_typealiasDeclarationAST temp_1 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_10340 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mDefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 226)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10182, var_elementTypeNameForUsefulness_10340 COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 227)) ;
  }
  const GALGAS_typealiasDeclarationAST temp_2 = this ;
  GALGAS_unifiedTypeMapEntry var_t_10579 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_2.readProperty_mDefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 229)) ;
  const GALGAS_typealiasDeclarationAST temp_3 = this ;
  const GALGAS_typealiasDeclarationAST temp_4 = this ;
  const GALGAS_typealiasDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("typealias ").add_operation (temp_3.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 231)), GALGAS_aliasTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_4.readProperty_mAliasTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 232)), temp_5.readProperty_mAliasTypeName ().readProperty_string (), var_t_10579  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 232))  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 230)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@aliasTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_aliasTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_string & outArgument_outHeader,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_aliasTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_0.readProperty_mReferencedType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 251)) ;
  const GALGAS_aliasTypeForGeneration temp_1 = this ;
  const GALGAS_aliasTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_typeAliasTypeHeader_31_ (inCompiler, temp_1.readProperty_mAliasTypeName ().getter_identifierRepresentation (SOURCE_FILE ("type-alias-and-type-declaration.galgas", 253)), extensionGetter_identifierRepresentation (temp_2.readProperty_mReferencedType (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 254)) COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 252))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@aliasTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_aliasTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                       GALGAS_string & outArgument_outImplementation,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outImplementation = GALGAS_string::makeEmptyString () ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@aliasTypeForGeneration appendTypeGenericImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_aliasTypeForGeneration::getter_appendTypeGenericImplementation (C_Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionGetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_abstractExtensionGetterAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_abstractExtensionGetterAST temp_0 = this ;
  const GALGAS_abstractExtensionGetterAST temp_1 = this ;
  result_result = GALGAS_string ("abstract extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 133)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 133)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 133)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                      GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionGetterAST temp_0 = this ;
  const GALGAS_abstractExtensionGetterAST temp_1 = this ;
  const GALGAS_abstractExtensionGetterAST temp_2 = this ;
  GALGAS_lstring var_key_6207 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 148)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 148)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 148)), temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 147)) ;
  {
  const GALGAS_abstractExtensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6207, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 151)) ;
  }
  {
  const GALGAS_abstractExtensionGetterAST temp_4 = this ;
  const GALGAS_abstractExtensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6207, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 152)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 152)) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 152)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 154)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 154)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-getter.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 155)) ;
      }
    }
  }
  const GALGAS_abstractExtensionGetterAST temp_9 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_6724 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 160)) ;
  if (nullptr != objectArray_6724) {
    macroValidSharedObject (objectArray_6724, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionGetterAST temp_10 = this ;
    const GALGAS_abstractExtensionGetterAST temp_11 = this ;
    const GALGAS_abstractExtensionGetterAST temp_12 = this ;
    objectArray_6724->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionGetterName (), temp_11.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_12.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::constructor_isVirtualAbstract (SOURCE_FILE ("extension-abstract-getter.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 161)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionGetterAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_8665 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 197)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_8665, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 199)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-abstract-getter.galgas", 199)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 199)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionGetterAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an extension getter: '@").add_operation (extensionGetter_definition (var_selfType_8665, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 201)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 201)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 201)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 200)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_8665, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 202)).readProperty_mIsConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionGetterAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (extensionGetter_definition (var_selfType_8665, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 204)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 204)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 204)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 203)) ;
      }
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_9277 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-getter.galgas", 207)) ;
  const GALGAS_abstractExtensionGetterAST temp_7 = this ;
  cEnumerator_formalInputParameterListAST enumerator_9384 (temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList (), kENUMERATION_UP) ;
  while (enumerator_9384.hasCurrentObject ()) {
    var_formalParameterListForGeneration_9277.addAssign_operation (enumerator_9384.current_mFormalSelector (HERE), extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_9384.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 211)), enumerator_9384.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_9384.current_mFormalArgumentName (HERE), enumerator_9384.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 209)) ;
    enumerator_9384.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterAST temp_8 = this ;
  const GALGAS_abstractExtensionGetterAST temp_9 = this ;
  const GALGAS_abstractExtensionGetterAST temp_10 = this ;
  const GALGAS_abstractExtensionGetterAST temp_11 = this ;
  const GALGAS_abstractExtensionGetterAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (temp_8.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 218)), GALGAS_abstractExtensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 221)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 221)).add_operation (temp_10.readProperty_mAbstractExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 221)), var_selfType_8665, temp_11.readProperty_mAbstractExtensionGetterName ().readProperty_string (), extensionGetter_searchKey (ioArgument_ioTypeMap, temp_12.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 224)), var_formalParameterListForGeneration_9277  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 219))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 217)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

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
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionGetterAST temp_0 = this ;
  const GALGAS_abstractExtensionGetterAST temp_1 = this ;
  ioArgument_ioAbstractExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 247)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionGetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionGetterForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-getter.galgas", 264)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionGetterForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_1 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_2 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 274)).readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), temp_2.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_3.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 273))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionGetterForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionGetterForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 289)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 288)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 289)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 290))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 288)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 291)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 292)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_4 = this ;
  cEnumerator_formalInputParameterListForGeneration enumerator_13730 (temp_4.readProperty_mAbstractExtensionGetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_13730.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13730.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 294)) ;
    enumerator_13730.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_6 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_7 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_8 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 297)).readProperty_mTypeName ().readProperty_string (), temp_6.readProperty_mAbstractExtensionGetterName (), temp_7.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_8.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 296))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                      GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionMethodAST temp_0 = this ;
  const GALGAS_abstractExtensionMethodAST temp_1 = this ;
  const GALGAS_abstractExtensionMethodAST temp_2 = this ;
  GALGAS_lstring var_key_4932 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 106)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 106)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 106)), temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 105)) ;
  {
  const GALGAS_abstractExtensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4932, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 109)) ;
  }
  {
  const GALGAS_abstractExtensionMethodAST temp_4 = this ;
  const GALGAS_abstractExtensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4932, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 110)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 110)) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 110)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 112)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 112)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-method.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 113)) ;
      }
    }
  }
  const GALGAS_abstractExtensionMethodAST temp_9 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_5449 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 118)) ;
  if (nullptr != objectArray_5449) {
    macroValidSharedObject (objectArray_5449, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionMethodAST temp_10 = this ;
    const GALGAS_abstractExtensionMethodAST temp_11 = this ;
    objectArray_5449->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionMethodName (), temp_11.readProperty_mAbstractExtensionMethodFormalParameterList (), GALGAS_methodQualifier::constructor_isVirtualAbstract (SOURCE_FILE ("extension-abstract-method.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 119)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionMethodAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_abstractExtensionMethodAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_abstractExtensionMethodAST temp_0 = this ;
  const GALGAS_abstractExtensionMethodAST temp_1 = this ;
  result_result = GALGAS_string ("abstract extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 132)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 132)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 132)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionMethodAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_7938 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 164)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_7938, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 166)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-abstract-method.galgas", 166)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 166)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionMethodAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_7938, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 167)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 167)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 167)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 167)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_7938, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 168)).readProperty_mIsConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionMethodAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (extensionGetter_definition (var_selfType_7938, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 169)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 169)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 169)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 169)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_8495 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-method.galgas", 172)) ;
  const GALGAS_abstractExtensionMethodAST temp_7 = this ;
  cEnumerator_formalParameterListAST enumerator_8661 (temp_7.readProperty_mAbstractExtensionMethodFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_8661.hasCurrentObject ()) {
    var_formalParameterListForGeneration_8495.addAssign_operation (enumerator_8661.current_mFormalSelector (HERE), enumerator_8661.current_mFormalArgumentPassingMode (HERE), extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_8661.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 177)), enumerator_8661.current_mFormalArgumentName (HERE), enumerator_8661.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 174)) ;
    enumerator_8661.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodAST temp_8 = this ;
  const GALGAS_abstractExtensionMethodAST temp_9 = this ;
  const GALGAS_abstractExtensionMethodAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (temp_8.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 183)), GALGAS_abstractExtensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_7938, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186)).add_operation (temp_9.readProperty_mAbstractExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 186)), var_selfType_7938, temp_10.readProperty_mAbstractExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_8495  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 184))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 182)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

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
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionMethodAST temp_0 = this ;
  const GALGAS_abstractExtensionMethodAST temp_1 = this ;
  ioArgument_ioAbstractExtensionMethodListMapAST.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 210)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionMethodForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_1 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 231)).readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), temp_2.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 230))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionMethodForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionMethodForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-method.galgas", 240)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionMethodForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionMethodForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 249)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 249)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 249)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 249))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 249)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 250)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_3 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_12897 (temp_3.readProperty_mAbstractExtensionMethodFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_12897.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12897.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 252)) ;
    enumerator_12897.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodForGeneration temp_4 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (inCompiler, temp_4.readProperty_mReceiverType (), temp_5.readProperty_mAbstractExtensionMethodName (), temp_6.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 254))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GALGAS_extensionSetterMapForBuildingContext & ioArgument_ioExtensionSetterMapForBuildingContext,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionSetterAST temp_0 = this ;
  const GALGAS_abstractExtensionSetterAST temp_1 = this ;
  const GALGAS_abstractExtensionSetterAST temp_2 = this ;
  GALGAS_lstring var_key_2983 = GALGAS_lstring::constructor_new (GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 62)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 62)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 62)), temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 62)) ;
  {
  const GALGAS_abstractExtensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2983, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 63)) ;
  }
  {
  const GALGAS_abstractExtensionSetterAST temp_4 = this ;
  const GALGAS_abstractExtensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2983, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 64)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 64)) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 64)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 66)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 66)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionSetterAST temp_8 = this ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionSetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-setter.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 67)) ;
      }
    }
  }
  const GALGAS_abstractExtensionSetterAST temp_9 = this ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_3488 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)) ;
  if (nullptr != objectArray_3488) {
    macroValidSharedObject (objectArray_3488, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionSetterAST temp_10 = this ;
    const GALGAS_abstractExtensionSetterAST temp_11 = this ;
    objectArray_3488->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionSetterName (), temp_11.readProperty_mAbstractExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 73)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionSetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_abstractExtensionSetterAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_abstractExtensionSetterAST temp_0 = this ;
  const GALGAS_abstractExtensionSetterAST temp_1 = this ;
  result_result = GALGAS_string ("abstract extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 85)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 85)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 85)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionSetterAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_5951 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 118)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_5951, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 120)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-abstract-setter.galgas", 120)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 120)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionSetterAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_5951, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 121)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 121)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 121)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 121)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_5951, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 122)).readProperty_mIsConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionSetterAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (extensionGetter_definition (var_selfType_5951, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 123)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 123)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 123)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 123)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6509 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-setter.galgas", 126)) ;
  const GALGAS_abstractExtensionSetterAST temp_7 = this ;
  cEnumerator_formalParameterListAST enumerator_6675 (temp_7.readProperty_mAbstractExtensionSetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_6675.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6509.addAssign_operation (enumerator_6675.current_mFormalSelector (HERE), enumerator_6675.current_mFormalArgumentPassingMode (HERE), extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_6675.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 131)), enumerator_6675.current_mFormalArgumentName (HERE), enumerator_6675.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 128)) ;
    enumerator_6675.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterAST temp_8 = this ;
  const GALGAS_abstractExtensionSetterAST temp_9 = this ;
  const GALGAS_abstractExtensionSetterAST temp_10 = this ;
  const GALGAS_abstractExtensionSetterAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (temp_8.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 137)), GALGAS_abstractExtensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 140)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 140)).add_operation (temp_10.readProperty_mAbstractExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 140)), var_selfType_5951, temp_11.readProperty_mAbstractExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_6509  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 138))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 136)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

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
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionSetterAST temp_0 = this ;
  const GALGAS_abstractExtensionSetterAST temp_1 = this ;
  ioArgument_ioAbstractExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 165)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionSetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionSetterForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-setter.galgas", 183)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionSetterForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_1 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 192)).readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName (), temp_2.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 191))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@abstractExtensionSetterForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_abstractExtensionSetterForGeneration temp_0 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 205)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 205)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 205)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 205))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 205)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 206)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_3 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_10666 (temp_3.readProperty_mAbstractExtensionSetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_10666.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10666.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 208)) ;
    enumerator_10666.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterForGeneration temp_4 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (inCompiler, extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 211)).readProperty_mTypeName ().readProperty_string (), temp_5.readProperty_mAbstractExtensionSetterName (), temp_6.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 210))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionGetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_extensionGetterAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_extensionGetterAST temp_0 = this ;
  const GALGAS_extensionGetterAST temp_1 = this ;
  result_result = GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 164)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 164)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 164)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionGetterAST temp_0 = this ;
  const GALGAS_extensionGetterAST temp_1 = this ;
  const GALGAS_extensionGetterAST temp_2 = this ;
  GALGAS_lstring var_key_7696 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 177)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 177)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 177)), temp_2.readProperty_mExtensionGetterName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 177)) ;
  {
  const GALGAS_extensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7696, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 178)) ;
  }
  {
  const GALGAS_extensionGetterAST temp_4 = this ;
  const GALGAS_extensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7696, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 179)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 179)) COMMA_SOURCE_FILE ("extension-getter.galgas", 179)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-getter.galgas", 181)).operator_not (SOURCE_FILE ("extension-getter.galgas", 181)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-getter.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 182)) ;
      }
    }
  }
  const GALGAS_extensionGetterAST temp_9 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_8185 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-getter.galgas", 187)) ;
  if (nullptr != objectArray_8185) {
    macroValidSharedObject (objectArray_8185, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_extensionGetterAST temp_10 = this ;
    const GALGAS_extensionGetterAST temp_11 = this ;
    const GALGAS_extensionGetterAST temp_12 = this ;
    objectArray_8185->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionGetterName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("extension-getter.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 188)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionGetterAST temp_0 = this ;
  const GALGAS_extensionGetterAST temp_1 = this ;
  GALGAS_lstring var_nameForUsefulness_9971 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 224)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9971, var_nameForUsefulness_9971, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 225)) ;
  }
  const GALGAS_extensionGetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_10149 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 226)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_10149, var_nameForUsefulness_9971 COMMA_SOURCE_FILE ("extension-getter.galgas", 227)) ;
  }
  const GALGAS_extensionGetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_10342 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 229)) ;
  GALGAS_string var_selfObjectNameNew_10443 ;
  GALGAS_string var_selfObjectAccessorNew_10475 ;
  GALGAS_bool var_implementedAsFunctionNew_10509 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_10342, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 234)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 234)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectNameNew_10443 = GALGAS_string ("this") ;
      var_selfObjectAccessorNew_10475 = GALGAS_string ("this->") ;
      var_implementedAsFunctionNew_10509 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameNew_10443 = GALGAS_string ("inObject") ;
    var_selfObjectAccessorNew_10475 = GALGAS_string ("inObject.") ;
    var_implementedAsFunctionNew_10509 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionGetterAST temp_5 = this ;
  GALGAS_analysisContext var_analysisContextNew_10859 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameNew_10443, GALGAS_selfAvailability::constructor_available (var_selfType_10342, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("extension-getter.galgas", 248)), var_selfObjectAccessorNew_10475, temp_5.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 244)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_11806 ;
  GALGAS_unifiedTypeMapEntry var_returnType_11848 ;
  GALGAS_string var_returnVariableCppName_11868 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_11899 ;
  {
  const GALGAS_extensionGetterAST temp_6 = this ;
  GALGAS_typedPropertyList temp_7 ;
  const enumGalgasBool test_8 = extensionGetter_definition (var_selfType_10342, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 258)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 258)).operator_or (GALGAS_bool (kIsEqual, extensionGetter_definition (var_selfType_10342, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 258)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-getter.galgas", 258)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 258)).operator_or (GALGAS_bool (kIsEqual, extensionGetter_definition (var_selfType_10342, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 258)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_sharedMapEntryType (SOURCE_FILE ("extension-getter.galgas", 258)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 258)).boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = extensionGetter_definition (var_selfType_10342, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 259)).readProperty_mAllTypedPropertyList () ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-getter.galgas", 260)) ;
  }
  const GALGAS_extensionGetterAST temp_9 = this ;
  const GALGAS_extensionGetterAST temp_10 = this ;
  const GALGAS_extensionGetterAST temp_11 = this ;
  const GALGAS_extensionGetterAST temp_12 = this ;
  routine_analyzeFunctionBody (var_nameForUsefulness_9971, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_10859, ioArgument_ioTypeMap, temp_6.readProperty_mExtensionGetterFormalInputParameterList (), temp_7, var_selfObjectAccessorNew_10475, temp_9.readProperty_mExtensionGetterInstructionList (), temp_10.readProperty_mExtensionGetterReturnedVariableName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_11806, var_returnType_11848, var_returnVariableCppName_11868, var_semanticInstructionListForGeneration_11899, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 252)) ;
  }
  const GALGAS_extensionGetterAST temp_13 = this ;
  const GALGAS_extensionGetterAST temp_14 = this ;
  const GALGAS_extensionGetterAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (temp_13.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 274)), GALGAS_extensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_selfType_10342, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 277)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 277)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 277)).add_operation (temp_14.readProperty_mExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 277)), var_selfType_10342, temp_15.readProperty_mExtensionGetterName ().readProperty_string (), var_implementedAsFunctionNew_10509, var_returnType_11848, var_returnVariableCppName_11868, var_formalParameterListForGeneration_11806, extensionGetter_definition (var_selfType_10342, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 284)).readProperty_mAllTypedPropertyList (), var_semanticInstructionListForGeneration_11899  COMMA_SOURCE_FILE ("extension-getter.galgas", 275))  COMMA_SOURCE_FILE ("extension-getter.galgas", 273)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

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
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionGetterAST temp_0 = this ;
  const GALGAS_extensionGetterAST temp_1 = this ;
  ioArgument_ioExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 306)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionGetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionGetterForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-getter.galgas", 329)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GALGAS_string & outArgument_outHeader,
                                                                      C_Compiler * inCompiler
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
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 338)).readProperty_mTypeName ().readProperty_string (), temp_3.readProperty_mExtensionGetterName (), temp_4.readProperty_mExtensionGetterFormalParameterList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 341)) COMMA_SOURCE_FILE ("extension-getter.galgas", 337))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionGetterForGeneration temp_6 = this ;
    const GALGAS_extensionGetterForGeneration temp_7 = this ;
    const GALGAS_extensionGetterForGeneration temp_8 = this ;
    const GALGAS_extensionGetterForGeneration temp_9 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 345)).readProperty_mTypeName ().readProperty_string (), temp_7.readProperty_mExtensionGetterName (), temp_8.readProperty_mExtensionGetterFormalParameterList (), temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 344))) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionGetterForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_string & outArgument_outImplementation,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionGetterForGeneration temp_0 = this ;
  cEnumerator_formalInputParameterListForGeneration enumerator_16360 (temp_0.readProperty_mExtensionGetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_16360.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16360.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 360)) ;
    enumerator_16360.gotoNextObject () ;
  }
  const GALGAS_extensionGetterForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 362)) ;
  const GALGAS_extensionGetterForGeneration temp_2 = this ;
  GALGAS_formalInputParameterListForGeneration var_extensionReaderFormalParameterList_16540 = temp_2.readProperty_mExtensionGetterFormalParameterList () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_extensionGetterForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_extensionGetterForGeneration temp_5 = this ;
      var_extensionReaderFormalParameterList_16540.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas", 366)), temp_5.readProperty_mReceiverType (), GALGAS_string ("inObject"), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 369))  COMMA_SOURCE_FILE ("extension-getter.galgas", 369)), GALGAS_bool (true), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 365)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_6 = this ;
      const GALGAS_extensionGetterForGeneration temp_7 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 374)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 373)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 374)).add_operation (temp_7.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 375))  COMMA_SOURCE_FILE ("extension-getter.galgas", 373)) ;
      GALGAS_string var_code_17404 ;
      {
      const GALGAS_extensionGetterForGeneration temp_8 = this ;
      const GALGAS_extensionGetterForGeneration temp_9 = this ;
      const GALGAS_extensionGetterForGeneration temp_10 = this ;
      const GALGAS_extensionGetterForGeneration temp_11 = this ;
      routine_generateFunction (GALGAS_string ("extensionGetter_").add_operation (temp_8.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 377)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_16540, temp_9.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("C_Compiler"), temp_10.readProperty_mResultType (), temp_11.readProperty_mResultVarCppName (), GALGAS_bool (false), GALGAS_bool (false), var_code_17404, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 376)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_12 = this ;
      const GALGAS_extensionGetterForGeneration temp_13 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 389)).readProperty_mTypeName ().readProperty_string (), temp_13.readProperty_mExtensionGetterName (), var_code_17404 COMMA_SOURCE_FILE ("extension-getter.galgas", 388))) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_extensionGetterForGeneration temp_14 = this ;
    extensionMethod_addHeaderFileName (temp_14.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 394)) ;
    const GALGAS_extensionGetterForGeneration temp_15 = this ;
    GALGAS_unifiedTypeMapEntry var_baseType_17732 = temp_15.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_17776 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 397)).isValid ()) {
      uint32_t variant_17797 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 397)).uintValue () ;
      bool loop_17797 = true ;
      while (loop_17797) {
        loop_17797 = var_searching_17776.isValid () ;
        if (loop_17797) {
          loop_17797 = var_searching_17776.boolValue () ;
        }
        if (loop_17797 && (0 == variant_17797)) {
          loop_17797 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas", 397)) ;
        }
        if (loop_17797) {
          variant_17797 -- ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = extensionGetter_definition (var_baseType_17732, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 398)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("extension-getter.galgas", 398)).operator_not (SOURCE_FILE ("extension-getter.galgas", 398)).boolEnum () ;
            if (kBoolTrue == test_16) {
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                const GALGAS_extensionGetterForGeneration temp_18 = this ;
                test_17 = extensionGetter_definition (extensionGetter_definition (var_baseType_17732, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 399)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 399)).readProperty_mGetterMap ().getter_hasKey (temp_18.readProperty_mExtensionGetterName () COMMA_SOURCE_FILE ("extension-getter.galgas", 399)).boolEnum () ;
                if (kBoolTrue == test_17) {
                  var_baseType_17732 = extensionGetter_definition (var_baseType_17732, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 400)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_17) {
                var_searching_17776 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_16) {
            var_searching_17776 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionGetterForGeneration temp_19 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_baseType_17732, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 409)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 408)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 409)).add_operation (temp_19.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 410))  COMMA_SOURCE_FILE ("extension-getter.galgas", 408)) ;
    GALGAS_string var_extensionGetterCode_18741 ;
    {
    const GALGAS_extensionGetterForGeneration temp_20 = this ;
    const GALGAS_extensionGetterForGeneration temp_21 = this ;
    const GALGAS_extensionGetterForGeneration temp_22 = this ;
    const GALGAS_extensionGetterForGeneration temp_23 = this ;
    const GALGAS_extensionGetterForGeneration temp_24 = this ;
    routine_generateExtensionGetterNew (GALGAS_string ("cPtr_").add_operation (extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 412)).readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 412)).add_operation (GALGAS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 412)).add_operation (temp_21.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 412)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_16540, temp_22.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("C_Compiler"), temp_23.readProperty_mResultType (), temp_24.readProperty_mResultVarCppName (), var_extensionGetterCode_18741, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 411)) ;
    }
    const GALGAS_extensionGetterForGeneration temp_25 = this ;
    const GALGAS_extensionGetterForGeneration temp_26 = this ;
    const GALGAS_extensionGetterForGeneration temp_27 = this ;
    const GALGAS_extensionGetterForGeneration temp_28 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, extensionGetter_definition (temp_25.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 422)).readProperty_mTypeName ().readProperty_string (), temp_26.readProperty_mExtensionGetterName (), temp_27.readProperty_mExtensionGetterFormalParameterList (), var_extensionGetterCode_18741, temp_28.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 421))) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionMethodAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_extensionMethodAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_extensionMethodAST temp_0 = this ;
  const GALGAS_extensionMethodAST temp_1 = this ;
  result_result = GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 130)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 130)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 130)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionMethodAST temp_0 = this ;
  const GALGAS_extensionMethodAST temp_1 = this ;
  const GALGAS_extensionMethodAST temp_2 = this ;
  GALGAS_lstring var_key_6639 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 144)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 144)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 144)), temp_2.readProperty_mExtensionMethodName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-method.galgas", 143)) ;
  {
  const GALGAS_extensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6639, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 147)) ;
  }
  {
  const GALGAS_extensionMethodAST temp_4 = this ;
  const GALGAS_extensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6639, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 148)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-method.galgas", 148)) COMMA_SOURCE_FILE ("extension-method.galgas", 148)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-method.galgas", 150)).operator_not (SOURCE_FILE ("extension-method.galgas", 150)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-method.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 151)) ;
      }
    }
  }
  const GALGAS_extensionMethodAST temp_9 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_7141 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-method.galgas", 156)) ;
  if (nullptr != objectArray_7141) {
    macroValidSharedObject (objectArray_7141, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_extensionMethodAST temp_10 = this ;
    const GALGAS_extensionMethodAST temp_11 = this ;
    objectArray_7141->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mExtensionMethodName (), temp_11.readProperty_mExtensionMethodFormalParameterList (), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("extension-method.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 157)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionMethodAST temp_0 = this ;
  const GALGAS_extensionMethodAST temp_1 = this ;
  GALGAS_lstring var_nameForUsefulness_8878 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 192)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8878, var_nameForUsefulness_8878, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 193)) ;
  }
  const GALGAS_extensionMethodAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_9056 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 194)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_9056, var_nameForUsefulness_8878 COMMA_SOURCE_FILE ("extension-method.galgas", 195)) ;
  }
  const GALGAS_extensionMethodAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_9250 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 197)) ;
  GALGAS_string var_selfObjectNameNew_9314 ;
  GALGAS_string var_selfObjectAccessorNew_9346 ;
  GALGAS_bool var_implementedAsFunction_9380 ;
  GALGAS_bool var_isReferenceClass_9440 = GALGAS_bool (false) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_isReference_9539 ;
    const bool optionalResult9511 = extensionGetter_definition (var_selfType_9250, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 203)).readProperty_mTypeKindEnum ().optional_classType (var_isReference_9539) ;
    if (!optionalResult9511) {
      test_4 = kBoolFalse ;
    }
    if (kBoolTrue == test_4) {
      var_isReferenceClass_9440 = var_isReference_9539 ;
      var_selfObjectNameNew_9314 = GALGAS_string ("this") ;
      var_selfObjectAccessorNew_9346 = GALGAS_string ("this->") ;
      var_implementedAsFunction_9380 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameNew_9314 = GALGAS_string ("inObject") ;
    var_selfObjectAccessorNew_9346 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_9380 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionMethodAST temp_5 = this ;
  GALGAS_analysisContext var_analysisContextNew_9851 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameNew_9314, GALGAS_selfAvailability::constructor_available (var_selfType_9250, GALGAS_bool (false), var_isReferenceClass_9440  COMMA_SOURCE_FILE ("extension-method.galgas", 218)), var_selfObjectAccessorNew_9346, temp_5.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-method.galgas", 214)) ;
  GALGAS_bool var_isRefClass_10176 = GALGAS_bool (false) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    GALGAS_bool var_reference_10269 ;
    const bool optionalResult10241 = extensionGetter_definition (var_selfType_9250, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 223)).readProperty_mTypeKindEnum ().optional_classType (var_reference_10269) ;
    if (!optionalResult10241) {
      test_6 = kBoolFalse ;
    }
    if (kBoolTrue == test_6) {
      var_isRefClass_10176 = var_reference_10269 ;
    }
  }
  GALGAS_typedPropertyList var_mutableProperties_10324 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 226)) ;
  GALGAS_typedPropertyList var_nonMutableProperties_10372 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 227)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_selfType_9250, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 228)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-method.galgas", 228)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_nonMutableProperties_10372 = extensionGetter_definition (var_selfType_9250, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 229)).readProperty_mAllTypedPropertyList () ;
    }
  }
  if (kBoolFalse == test_7) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      GALGAS_bool var_isReference_10626 ;
      const bool optionalResult10598 = extensionGetter_definition (var_selfType_9250, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 230)).readProperty_mTypeKindEnum ().optional_classType (var_isReference_10626) ;
      if (!optionalResult10598) {
        test_8 = kBoolFalse ;
      }
      if (kBoolTrue == test_8) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_isReference_10626.boolEnum () ;
          if (kBoolTrue == test_9) {
            var_mutableProperties_10324 = extensionGetter_definition (var_selfType_9250, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 232)).readProperty_mAllTypedPropertyList () ;
          }
        }
        if (kBoolFalse == test_9) {
          var_nonMutableProperties_10372 = extensionGetter_definition (var_selfType_9250, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 234)).readProperty_mAllTypedPropertyList () ;
        }
      }
    }
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_11170 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_11216 ;
  {
  const GALGAS_extensionMethodAST temp_10 = this ;
  const GALGAS_extensionMethodAST temp_11 = this ;
  const GALGAS_extensionMethodAST temp_12 = this ;
  routine_analyzeRoutineBody (var_nameForUsefulness_8878, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_9851, ioArgument_ioTypeMap, temp_10.readProperty_mExtensionMethodFormalParameterList (), var_nonMutableProperties_10372, var_mutableProperties_10324, temp_11.readProperty_mExtensionMethodInstructionList (), temp_12.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_11170, var_formalParameterListForGeneration_11216, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 237)) ;
  }
  const GALGAS_extensionMethodAST temp_13 = this ;
  const GALGAS_extensionMethodAST temp_14 = this ;
  const GALGAS_extensionMethodAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (temp_13.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 252)), GALGAS_extensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_9250, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 255)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 255)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 255)).add_operation (temp_14.readProperty_mExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 255)), var_selfType_9250, temp_15.readProperty_mExtensionMethodName ().readProperty_string (), var_implementedAsFunction_9380, var_formalParameterListForGeneration_11216, extensionGetter_definition (var_selfType_9250, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 260)).readProperty_mAllTypedPropertyList (), var_semanticInstructionListForGeneration_11170  COMMA_SOURCE_FILE ("extension-method.galgas", 253))  COMMA_SOURCE_FILE ("extension-method.galgas", 251)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

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
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_extensionMethodAST temp_0 = this ;
  const GALGAS_extensionMethodAST temp_1 = this ;
  ioArgument_ioExtensionMethodListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-method.galgas", 283)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionMethodForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionMethodForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-method.galgas", 302)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GALGAS_string & outArgument_outHeader,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_extensionMethodForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_extensionMethodForGeneration temp_2 = this ;
      const GALGAS_extensionMethodForGeneration temp_3 = this ;
      const GALGAS_extensionMethodForGeneration temp_4 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 312)).readProperty_mTypeName ().readProperty_string (), temp_3.readProperty_mExtensionMethodName (), temp_4.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 311))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionMethodForGeneration temp_5 = this ;
    const GALGAS_extensionMethodForGeneration temp_6 = this ;
    const GALGAS_extensionMethodForGeneration temp_7 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 318)).readProperty_mTypeName ().readProperty_string (), temp_6.readProperty_mExtensionMethodName (), temp_7.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas", 317))) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionMethodForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_string & outArgument_outImplementation,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_extensionMethodForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_extensionMethodForGeneration temp_2 = this ;
      GALGAS_formalParameterListForGeneration var_extensionMethodFormalParameterList_15278 = temp_2.readProperty_mExtensionMethodFormalParameterList () ;
      {
      const GALGAS_extensionMethodForGeneration temp_3 = this ;
      var_extensionMethodFormalParameterList_15278.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas", 335)), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.galgas", 336)), temp_3.readProperty_mReceiverType (), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 338))  COMMA_SOURCE_FILE ("extension-method.galgas", 338)), GALGAS_string ("inObject"), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 334)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_4 = this ;
      const GALGAS_extensionMethodForGeneration temp_5 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 342)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 342)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 342)).add_operation (temp_5.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 342))  COMMA_SOURCE_FILE ("extension-method.galgas", 342)) ;
      GALGAS_string var_code_16234 ;
      {
      const GALGAS_extensionMethodForGeneration temp_6 = this ;
      const GALGAS_extensionMethodForGeneration temp_7 = this ;
      routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("extensionMethod_").add_operation (temp_6.readProperty_mExtensionMethodName ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 345)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_15278, temp_7.readProperty_mSemanticInstructionListForGeneration (), GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_16234, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 343)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_8 = this ;
      const GALGAS_extensionMethodForGeneration temp_9 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 357)).readProperty_mTypeName ().readProperty_string (), temp_9.readProperty_mExtensionMethodName (), var_code_16234 COMMA_SOURCE_FILE ("extension-method.galgas", 356))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionMethodForGeneration temp_10 = this ;
    extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 362)) ;
    const GALGAS_extensionMethodForGeneration temp_11 = this ;
    cEnumerator_formalParameterListForGeneration enumerator_16568 (temp_11.readProperty_mExtensionMethodFormalParameterList (), kENUMERATION_UP) ;
    while (enumerator_16568.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_16568.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 364)) ;
      enumerator_16568.gotoNextObject () ;
    }
    const GALGAS_extensionMethodForGeneration temp_12 = this ;
    GALGAS_unifiedTypeMapEntry var_baseType_16718 = temp_12.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_16762 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 368)).isValid ()) {
      uint32_t variant_16783 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 368)).uintValue () ;
      bool loop_16783 = true ;
      while (loop_16783) {
        loop_16783 = var_searching_16762.isValid () ;
        if (loop_16783) {
          loop_16783 = var_searching_16762.boolValue () ;
        }
        if (loop_16783 && (0 == variant_16783)) {
          loop_16783 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas", 368)) ;
        }
        if (loop_16783) {
          variant_16783 -- ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = extensionGetter_definition (var_baseType_16718, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 369)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("extension-method.galgas", 369)).operator_not (SOURCE_FILE ("extension-method.galgas", 369)).boolEnum () ;
            if (kBoolTrue == test_13) {
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                const GALGAS_extensionMethodForGeneration temp_15 = this ;
                test_14 = extensionGetter_definition (extensionGetter_definition (var_baseType_16718, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 370)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 370)).readProperty_mInstanceMethodMap ().getter_hasKey (temp_15.readProperty_mExtensionMethodName () COMMA_SOURCE_FILE ("extension-method.galgas", 370)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  var_baseType_16718 = extensionGetter_definition (var_baseType_16718, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 371)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_14) {
                var_searching_16762 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_13) {
            var_searching_16762 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionMethodForGeneration temp_16 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (var_baseType_16718, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 380)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 380)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 380)).add_operation (temp_16.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 381))  COMMA_SOURCE_FILE ("extension-method.galgas", 379)) ;
    GALGAS_string var_methodImplementation_17562 ;
    {
    const GALGAS_extensionMethodForGeneration temp_17 = this ;
    const GALGAS_extensionMethodForGeneration temp_18 = this ;
    const GALGAS_extensionMethodForGeneration temp_19 = this ;
    const GALGAS_extensionMethodForGeneration temp_20 = this ;
    routine_generateExtensionMethodNew (temp_17.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionMethodName (), temp_19.readProperty_mExtensionMethodFormalParameterList (), temp_20.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_17562, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 382)) ;
    }
    const GALGAS_extensionMethodForGeneration temp_21 = this ;
    const GALGAS_extensionMethodForGeneration temp_22 = this ;
    const GALGAS_extensionMethodForGeneration temp_23 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, extensionGetter_definition (temp_21.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 391)).readProperty_mTypeName ().readProperty_string (), temp_22.readProperty_mExtensionMethodName (), temp_23.readProperty_mExtensionMethodFormalParameterList (), var_methodImplementation_17562 COMMA_SOURCE_FILE ("extension-method.galgas", 390))) ;
  }
}
