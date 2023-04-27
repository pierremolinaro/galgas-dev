#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-23.h"

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
  GALGAS_lstring var_nameForUsefulness_9862 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 270)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9862, var_nameForUsefulness_9862, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 271)) ;
  }
  const GALGAS_arrayDeclarationAST temp_1 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_10027 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mElementTypeName (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 272)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9862, var_elementTypeNameForUsefulness_10027 COMMA_SOURCE_FILE ("type-array.galgas", 273)) ;
  }
  const GALGAS_arrayDeclarationAST temp_2 = this ;
  const GALGAS_arrayDeclarationAST temp_3 = this ;
  const GALGAS_arrayDeclarationAST temp_4 = this ;
  const GALGAS_arrayDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array ").add_operation (temp_2.readProperty_mArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 276)), GALGAS_arrayTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_3.readProperty_mArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 278)), extensionGetter_searchKey (ioArgument_ioTypeMap, temp_4.readProperty_mElementTypeName (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 279)), temp_5.readProperty_mDimension ().readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 280))  COMMA_SOURCE_FILE ("type-array.galgas", 277))  COMMA_SOURCE_FILE ("type-array.galgas", 275)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_11136 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 298)) ;
  const GALGAS_arrayTypeForGeneration temp_1 = this ;
  const GALGAS_arrayTypeForGeneration temp_2 = this ;
  const GALGAS_arrayTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, var_selfTypeDefinition_11136.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 301)), extensionGetter_identifierRepresentation (temp_2.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 302)), temp_3.readProperty_mDimension () COMMA_SOURCE_FILE ("type-array.galgas", 299))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_11136.readProperty_mTypeName ().readProperty_string (), var_selfTypeDefinition_11136.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-array.galgas", 307)), var_selfTypeDefinition_11136.readProperty_mIsConcrete (), var_selfTypeDefinition_11136.readProperty_mConstructorMap (), var_selfTypeDefinition_11136.readProperty_mGetterMap (), var_selfTypeDefinition_11136.readProperty_mSetterMap (), var_selfTypeDefinition_11136.readProperty_mInstanceMethodMap (), var_selfTypeDefinition_11136.readProperty_mClassMethodMap (), var_selfTypeDefinition_11136.readProperty_mOptionalMethodMap (), var_selfTypeDefinition_11136.readProperty_mEnumerationDescriptor (), var_selfTypeDefinition_11136.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_11136.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_11136.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-array.galgas", 305))), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 305)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_12387 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 328)) ;
  const GALGAS_arrayTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 329)) ;
  const GALGAS_arrayTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 330)) ;
  GALGAS_stringlist var_suffixList_12561 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 332)) ;
  GALGAS_uint var_idx_12594 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_arrayTypeForGeneration temp_3 = this ;
  if (temp_3.readProperty_mDimension ().isValid ()) {
    uint32_t variant_12605 = temp_3.readProperty_mDimension ().uintValue () ;
    bool loop_12605 = true ;
    while (loop_12605) {
      const GALGAS_arrayTypeForGeneration temp_4 = this ;
      loop_12605 = GALGAS_bool (kIsStrictInf, var_idx_12594.objectCompare (temp_4.readProperty_mDimension ())).isValid () ;
      if (loop_12605) {
        loop_12605 = GALGAS_bool (kIsStrictInf, var_idx_12594.objectCompare (temp_4.readProperty_mDimension ())).boolValue () ;
      }
      if (loop_12605 && (0 == variant_12605)) {
        loop_12605 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 334)) ;
      }
      if (loop_12605) {
        variant_12605 -- ;
        var_suffixList_12561.addAssign_operation (var_idx_12594.getter_string (SOURCE_FILE ("type-array.galgas", 335))  COMMA_SOURCE_FILE ("type-array.galgas", 335)) ;
        var_idx_12594.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 336)) ;
      }
    }
  }
  const GALGAS_arrayTypeForGeneration temp_5 = this ;
  const GALGAS_arrayTypeForGeneration temp_6 = this ;
  const GALGAS_arrayTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_12387.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 340)), extensionGetter_identifierRepresentation (temp_6.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 341)), temp_7.readProperty_mDimension (), var_suffixList_12561 COMMA_SOURCE_FILE ("type-array.galgas", 338))) ;
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
  GALGAS_lstring var_key_3079 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 81)), temp_1.readProperty_mBoolsetTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 81)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3079, temp_2, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 82)) ;
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
  result_result = GALGAS_string ("boolset @").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 90)) ;
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
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-boolset.galgas", 98)) ;
  result_result.addAssign_operation (GALGAS_string ("all")  COMMA_SOURCE_FILE ("type-boolset.galgas", 99)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-boolset.galgas", 100)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-boolset.galgas", 101)) ;
  result_result.addAssign_operation (GALGAS_string ("none")  COMMA_SOURCE_FILE ("type-boolset.galgas", 102)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-boolset.galgas", 103)) ;
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

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForBoolset (NULL,
                                                                     releaseOnceFunctionResult_forbiddenKeysForBoolset) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForBoolset [1] = {
  NULL
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
  GALGAS_stringset var_slotNameSet_4712 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-boolset.galgas", 116)) ;
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_4733 (temp_0.readProperty_mFlagList (), kENUMERATION_UP) ;
  while (enumerator_4733.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 118)).getter_hasKey (enumerator_4733.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 118)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_m_4840 = GALGAS_string ("a slot cannot be named:") ;
        cEnumerator_stringset enumerator_4910 (function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 120)), kENUMERATION_UP) ;
        while (enumerator_4910.hasCurrentObject ()) {
          var_m_4840.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_4910.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 121)) ;
          enumerator_4910.gotoNextObject () ;
        }
        var_m_4840.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 123)) ;
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4733.current_mValue (HERE).readProperty_location (), var_m_4840, fixItArray2  COMMA_SOURCE_FILE ("type-boolset.galgas", 124)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_slotNameSet_4712.getter_hasKey (enumerator_4733.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 125)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_4733.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated slot name"), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 126)) ;
        }
      }
    }
    var_slotNameSet_4712.addAssign_operation (enumerator_4733.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 128)) ;
    enumerator_4733.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_boolsetTypeIndex_5240 ;
  {
  const GALGAS_boolsetDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_5.readProperty_mBoolsetTypeName (), var_boolsetTypeIndex_5240, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 131)) ;
  }
  GALGAS_getterMap var_getterMap_5341 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_5341, inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 133)) ;
  }
  GALGAS_constructorMap var_constructorMap_5379 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 134)) ;
  {
  var_constructorMap_5379.setter_insertKey (GALGAS_string ("none").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 135)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 135)), GALGAS_bool (false), var_boolsetTypeIndex_5240, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 135)) ;
  }
  {
  var_constructorMap_5379.setter_insertKey (GALGAS_string ("all").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 136)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 136)), GALGAS_bool (false), var_boolsetTypeIndex_5240, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 136)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5341, ioArgument_ioTypeMap, GALGAS_string ("none"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 137)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5341, ioArgument_ioTypeMap, GALGAS_string ("all"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 144)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = this ;
  cEnumerator_lstringlist enumerator_5876 (temp_6.readProperty_mFlagList (), kENUMERATION_UP) ;
  while (enumerator_5876.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_constructorMap_5379.getter_hasKey (enumerator_5876.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 152)).operator_not (SOURCE_FILE ("type-boolset.galgas", 152)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        var_constructorMap_5379.setter_insertKey (enumerator_5876.current_mValue (HERE), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 153)), GALGAS_bool (false), var_boolsetTypeIndex_5240, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 153)) ;
        }
        {
        routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5341, ioArgument_ioTypeMap, enumerator_5876.current_mValue (HERE).readProperty_string (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 154)) ;
        }
      }
    }
    enumerator_5876.gotoNextObject () ;
  }
  GALGAS_setterMap var_setterMap_6274 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 164)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6344 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 166)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_8 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mBoolsetTypeName (), GALGAS_bool (false), var_getterMap_5341, var_setterMap_6274, var_instanceMethodMap_6344, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 168)) ;
  }
  GALGAS_operators var_operators_6722 = GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("type-boolset.galgas", 182)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("type-boolset.galgas", 182)) COMMA_SOURCE_FILE ("type-boolset.galgas", 182)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("type-boolset.galgas", 182)) COMMA_SOURCE_FILE ("type-boolset.galgas", 182)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("type-boolset.galgas", 182)) COMMA_SOURCE_FILE ("type-boolset.galgas", 182)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-boolset.galgas", 183)) COMMA_SOURCE_FILE ("type-boolset.galgas", 182)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("type-boolset.galgas", 183)) COMMA_SOURCE_FILE ("type-boolset.galgas", 183)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-boolset.galgas", 183)) COMMA_SOURCE_FILE ("type-boolset.galgas", 183)) ;
  const GALGAS_boolsetDeclarationAST temp_9 = this ;
  const GALGAS_boolsetDeclarationAST temp_10 = this ;
  const GALGAS_boolsetDeclarationAST temp_11 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_6940 = GALGAS_unifiedTypeDefinition::constructor_new (temp_9.readProperty_mBoolsetTypeName (), temp_10.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-boolset.galgas", 189)), GALGAS_typeKindEnum::constructor_boolsetType (SOURCE_FILE ("type-boolset.galgas", 190)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 192)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 193)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 194)), var_constructorMap_5379, var_getterMap_5341, var_setterMap_6274, var_instanceMethodMap_6344, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 199)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 200)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 201)), var_operators_6722, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 203)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 204)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 205)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 206)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 207)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-boolset.galgas", 209)), GALGAS_string ("none"), GALGAS_string ("boolset-").add_operation (temp_11.readProperty_mBoolsetTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-boolset.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 211)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-boolset.galgas", 212))  COMMA_SOURCE_FILE ("type-boolset.galgas", 185)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_6940.readProperty_mTypeName (), var_typeDefinition_6940, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 214)) ;
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
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mFlagList ().getter_length (SOURCE_FILE ("type-boolset.galgas", 232)).objectCompare (GALGAS_uint (uint32_t (64U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_boolsetDeclarationAST temp_2 = this ;
      GALGAS_location var_s_8440 = temp_2.readProperty_mFlagList ().getter_mValueAtIndex (GALGAS_uint (uint32_t (64U)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 233)).readProperty_location () ;
      const GALGAS_boolsetDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_8440, GALGAS_string ("max flags count is 64 (here: ").add_operation (temp_3.readProperty_mFlagList ().getter_length (SOURCE_FILE ("type-boolset.galgas", 234)).getter_string (SOURCE_FILE ("type-boolset.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 234)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 234)), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 234)) ;
    }
  }
  const GALGAS_boolsetDeclarationAST temp_5 = this ;
  GALGAS_lstring var_boolsetNameForUsefulness_8619 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 237)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_boolsetNameForUsefulness_8619, var_boolsetNameForUsefulness_8619, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 238)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = this ;
  const GALGAS_boolsetDeclarationAST temp_7 = this ;
  const GALGAS_boolsetDeclarationAST temp_8 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("boolset ").add_operation (temp_6.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 240)), GALGAS_boolsetTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_7.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 242)), temp_8.readProperty_mFlagList ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 241))  COMMA_SOURCE_FILE ("type-boolset.galgas", 239)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'structGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_structGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_structGenerationTemplate_0 [1] = {
  NULL
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
  GALGAS_uint index_1084_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_1084 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1084.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_1084.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 32)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) {\n  return GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " (((uint64_t) 1) << " ;
      result << index_1084_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 33)).stringValue () ;
      result << ") ;\n}\n\n" ;
      index_1084_idx.increment () ;
      enumerator_1084.gotoNextObject () ;
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
  GALGAS_uint index_4971_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_4971 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4971.hasCurrentObject ()) {
      result << "    if ((mFlags & ((uint64_t) 1) << " ;
      result << index_4971_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 123)).stringValue () ;
      result << ") != 0) {\n      ioString << \" " ;
      result << enumerator_4971.current_mValue (HERE).readProperty_string ().stringValue () ;
      result << "\" ;\n    }\n" ;
      index_4971_idx.increment () ;
      enumerator_4971.gotoNextObject () ;
    }
  }
  result << "  }\n  ioString << \">\" ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_none (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool (mFlags == 0) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_all (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool (mFlags == (uint64_t) " ;
  result << in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 146)).stringValue () ;
  result << ") ;\n  }\n  return result ;\n}\n\n" ;
  GALGAS_uint index_5821_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_5821 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5821.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_5821.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 153)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << " ;
      result << index_5821_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 156)).stringValue () ;
      result << ") != 0) ;\n  }\n  return result ;\n}\n\n" ;
      index_5821_idx.increment () ;
      enumerator_5821.gotoNextObject () ;
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
  GALGAS_unifiedTypeDefinition var_typedefinition_10169 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 278)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (inCompiler, var_typedefinition_10169.readProperty_mTypeName ().readProperty_string (), var_typedefinition_10169.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-boolset.galgas", 281)), temp_1.readProperty_mFlagList () COMMA_SOURCE_FILE ("type-boolset.galgas", 279))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typedefinition_10169.readProperty_mTypeName ().readProperty_string (), var_typedefinition_10169.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-boolset.galgas", 286)), var_typedefinition_10169.readProperty_mIsConcrete (), var_typedefinition_10169.readProperty_mConstructorMap (), var_typedefinition_10169.readProperty_mGetterMap (), var_typedefinition_10169.readProperty_mSetterMap (), var_typedefinition_10169.readProperty_mInstanceMethodMap (), var_typedefinition_10169.readProperty_mClassMethodMap (), var_typedefinition_10169.readProperty_mOptionalMethodMap (), var_typedefinition_10169.readProperty_mEnumerationDescriptor (), var_typedefinition_10169.readProperty_mHandledOperatorFlags (), var_typedefinition_10169.readProperty_mAddAssignOperatorArguments (), var_typedefinition_10169.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-boolset.galgas", 284))), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 284)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 308)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  const GALGAS_boolsetTypeForGeneration temp_2 = this ;
  const GALGAS_boolsetTypeForGeneration temp_3 = this ;
  const GALGAS_boolsetTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (inCompiler, extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 310)).readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 311)), temp_3.readProperty_mFlagList (), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 313)).left_shift_operation (temp_4.readProperty_mFlagList ().getter_length (SOURCE_FILE ("type-boolset.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 313)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 313)) COMMA_SOURCE_FILE ("type-boolset.galgas", 309))) ;
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
  NULL
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
  GALGAS_lstring var_key_6337 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 182)), temp_1.readProperty_mClassTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 182)) ;
  {
  const GALGAS_classDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6337, temp_2, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 183)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_classDeclarationAST temp_4 = this ;
    test_3 = GALGAS_bool (kIsNotEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_classDeclarationAST temp_5 = this ;
      const GALGAS_classDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6337, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 188)), temp_6.readProperty_mSuperClassName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 188)) COMMA_SOURCE_FILE ("type-class.galgas", 186)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_7 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_6765 (temp_7.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_6765.hasCurrentObject ()) {
    {
    const GALGAS_classDeclarationAST temp_8 = this ;
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6337, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_6765.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 195)), temp_8.readProperty_mSuperClassName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 195)) COMMA_SOURCE_FILE ("type-class.galgas", 193)) ;
    }
    enumerator_6765.gotoNextObject () ;
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
  GALGAS_getterMap var_getterMap_7661 ;
  GALGAS_setterMap var_setterMap_7690 ;
  GALGAS_instanceMethodMap var_instanceMethodMap_7735 ;
  GALGAS_typedPropertyList var_inheritedTypedPropertyList_7789 ;
  GALGAS_propertyMap var_attributeMap_7823 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 212)) ;
  GALGAS_unifiedTypeMapEntry var_superClassIndex_7899 ;
  GALGAS_bool var_generateHeaderInSeparateFile_7942 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_7899 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 217)) ;
      {
      routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_7661, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 218)) ;
      }
      var_setterMap_7690 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 219)) ;
      var_instanceMethodMap_7735 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 220)) ;
      var_inheritedTypedPropertyList_7789 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 221)) ;
      var_attributeMap_7823 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 222)) ;
      var_generateHeaderInSeparateFile_7942 = GALGAS_bool (false) ;
      const GALGAS_classDeclarationAST temp_2 = this ;
      cEnumerator_lstringlist enumerator_8270 (temp_2.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
      while (enumerator_8270.hasCurrentObject ()) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_8270.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_generateHeaderInSeparateFile_7942 = GALGAS_bool (true) ;
          }
        }
        enumerator_8270.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_classDeclarationAST temp_4 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_4.readProperty_mSuperClassName (), var_superClassIndex_7899, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 230)) ;
    }
    GALGAS_unifiedTypeDefinition var_superTypeDefinition_8580 ;
    const GALGAS_classDeclarationAST temp_5 = this ;
    extensionMethod_searchType (ioArgument_ioTypeMap, temp_5.readProperty_mSuperClassName (), var_superTypeDefinition_8580, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 231)) ;
    var_inheritedTypedPropertyList_7789 = var_superTypeDefinition_8580.readProperty_mAllTypedPropertyList () ;
    var_attributeMap_7823 = var_superTypeDefinition_8580.readProperty_mPropertyMap () ;
    var_generateHeaderInSeparateFile_7942 = var_superTypeDefinition_8580.readProperty_mGenerateHeaderInSeparateFile () ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_superTypeDefinition_8580.readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("type-class.galgas", 236)).operator_not (SOURCE_FILE ("type-class.galgas", 236)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_classDeclarationAST temp_7 = this ;
        const GALGAS_classDeclarationAST temp_8 = this ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mSuperClassName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_8.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 237)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 237)), fixItArray9  COMMA_SOURCE_FILE ("type-class.galgas", 237)) ;
      }
    }
    var_setterMap_7690 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 240)) ;
    cEnumerator_setterMap enumerator_9102 (var_superTypeDefinition_8580.readProperty_mSetterMap (), kENUMERATION_UP) ;
    while (enumerator_9102.hasCurrentObject ()) {
      {
      var_setterMap_7690.setter_insertKey (enumerator_9102.current_lkey (HERE), enumerator_9102.current_mKind (HERE), enumerator_9102.current_mParameterList (HERE), enumerator_9102.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 247)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 242)) ;
      }
      enumerator_9102.gotoNextObject () ;
    }
    var_getterMap_7661 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 252)) ;
    cEnumerator_getterMap enumerator_9512 (var_superTypeDefinition_8580.readProperty_mGetterMap (), kENUMERATION_UP) ;
    while (enumerator_9512.hasCurrentObject ()) {
      {
      var_getterMap_7661.setter_insertKey (enumerator_9512.current_lkey (HERE), enumerator_9512.current_mKind (HERE), enumerator_9512.current_mArgumentTypeList (HERE), enumerator_9512.current_mDeclarationLocation (HERE), enumerator_9512.current_mHasCompilerArgument (HERE), enumerator_9512.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 262)), enumerator_9512.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 255)) ;
      }
      enumerator_9512.gotoNextObject () ;
    }
    var_instanceMethodMap_7735 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 267)) ;
    cEnumerator_instanceMethodMap enumerator_9977 (var_superTypeDefinition_8580.readProperty_mInstanceMethodMap (), kENUMERATION_UP) ;
    while (enumerator_9977.hasCurrentObject ()) {
      {
      var_instanceMethodMap_7735.setter_insertKey (enumerator_9977.current_lkey (HERE), enumerator_9977.current_mKind (HERE), enumerator_9977.current_mParameterList (HERE), enumerator_9977.current_mDeclarationLocation (HERE), enumerator_9977.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 276)), enumerator_9977.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 270)) ;
      }
      enumerator_9977.gotoNextObject () ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_classIndex_10383 ;
  {
  const GALGAS_classDeclarationAST temp_10 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_10.readProperty_mClassTypeName (), var_classIndex_10383, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 282)) ;
  }
  GALGAS_functionSignature var_constructorPropertyTypeList_10496 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 284)) ;
  cEnumerator_typedPropertyList enumerator_10558 (var_inheritedTypedPropertyList_7789, kENUMERATION_UP) ;
  while (enumerator_10558.hasCurrentObject ()) {
    GALGAS_lstring temp_11 ;
    const enumGalgasBool test_12 = enumerator_10558.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = enumerator_10558.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_12) {
      temp_11 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 287)) ;
    }
    var_constructorPropertyTypeList_10496.addAssign_operation (temp_11, enumerator_10558.current_mPropertyTypeEntry (HERE), enumerator_10558.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 286)) ;
    enumerator_10558.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_13 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10859 (temp_13.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10859.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = enumerator_10859.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-class.galgas", 292)).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_10859.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a class"), fixItArray15  COMMA_SOURCE_FILE ("type-class.galgas", 293)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_11087 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_10859.current_mPropertyTypeName (HERE), var_attributeTypeIndex_11087, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 295)) ;
    }
    GALGAS_bool var_hasSelector_11110 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_11139 (enumerator_10859.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_11139.hasCurrentObject ()) {
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = GALGAS_bool (kIsEqual, enumerator_11139.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_16) {
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = var_hasSelector_11110.boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              fixItArray18.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_11139.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray18  COMMA_SOURCE_FILE ("type-class.galgas", 300)) ;
            }
          }
          var_hasSelector_11110 = GALGAS_bool (true) ;
        }
      }
      enumerator_11139.gotoNextObject () ;
    }
    GALGAS_lstring temp_19 ;
    const enumGalgasBool test_20 = var_hasSelector_11110.boolEnum () ;
    if (kBoolTrue == test_20) {
      temp_19 = enumerator_10859.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_20) {
      temp_19 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 306)) ;
    }
    var_constructorPropertyTypeList_10496.addAssign_operation (temp_19, var_attributeTypeIndex_11087, enumerator_10859.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 305)) ;
    {
    var_attributeMap_7823.setter_insertKey (enumerator_10859.current_mPropertyName (HERE), extensionGetter_accessControl (enumerator_10859.current_mAccessControl (HERE), var_classIndex_10383, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 311)), enumerator_10859.current_isConstant (HERE), var_attributeTypeIndex_11087, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 309)) ;
    }
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = var_getterMap_7661.getter_hasKey (enumerator_10859.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-class.galgas", 315)).boolEnum () ;
      if (kBoolTrue == test_21) {
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_10859.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_10859.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 316)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 316)), fixItArray22  COMMA_SOURCE_FILE ("type-class.galgas", 316)) ;
      }
    }
    enumerator_10859.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_11957 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 320)) ;
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    const GALGAS_classDeclarationAST temp_24 = this ;
    test_23 = temp_24.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 321)).boolEnum () ;
    if (kBoolTrue == test_23) {
      {
      var_constructorMap_11957.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 323))  COMMA_SOURCE_FILE ("type-class.galgas", 323)), var_constructorPropertyTypeList_10496, GALGAS_bool (false), var_classIndex_10383, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 322)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedPropertyList_12249 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 330)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList_12303 = var_inheritedTypedPropertyList_7789 ;
  const GALGAS_classDeclarationAST temp_25 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_12434 (temp_25.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12434.hasCurrentObject ()) {
    enumGalgasBool test_26 = kBoolTrue ;
    if (kBoolTrue == test_26) {
      test_26 = enumerator_12434.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-class.galgas", 333)).boolEnum () ;
      if (kBoolTrue == test_26) {
        TC_Array <C_FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (enumerator_12434.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a class"), fixItArray27  COMMA_SOURCE_FILE ("type-class.galgas", 334)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_12662 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12434.current_mPropertyTypeName (HERE), var_attributeTypeIndex_12662, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 336)) ;
    }
    GALGAS_bool var_hasSelector_12685 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_12711 (enumerator_12434.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_12711.hasCurrentObject ()) {
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_bool (kIsEqual, enumerator_12711.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_28) {
          TC_Array <C_FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticWarning (enumerator_12711.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%nogetter' is obsolete and has no effect"), fixItArray29  COMMA_SOURCE_FILE ("type-class.galgas", 340)) ;
        }
      }
      if (kBoolFalse == test_28) {
        enumGalgasBool test_30 = kBoolTrue ;
        if (kBoolTrue == test_30) {
          test_30 = GALGAS_bool (kIsEqual, enumerator_12711.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_30) {
            TC_Array <C_FixItDescription> fixItArray31 ;
            inCompiler->emitSemanticWarning (enumerator_12711.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%setter' is obsolete and has no effect"), fixItArray31  COMMA_SOURCE_FILE ("type-class.galgas", 342)) ;
          }
        }
        if (kBoolFalse == test_30) {
          enumGalgasBool test_32 = kBoolTrue ;
          if (kBoolTrue == test_32) {
            test_32 = GALGAS_bool (kIsEqual, enumerator_12711.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_32) {
              var_hasSelector_12685 = GALGAS_bool (true) ;
            }
          }
        }
      }
      enumerator_12711.gotoNextObject () ;
    }
    var_currentClassTypedPropertyList_12249.addAssign_operation (var_attributeTypeIndex_12662, enumerator_12434.current_mPropertyName (HERE), enumerator_12434.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 347)), var_hasSelector_12685  COMMA_SOURCE_FILE ("type-class.galgas", 347)) ;
    var_allTypedAttributeList_12303.addAssign_operation (var_attributeTypeIndex_12662, enumerator_12434.current_mPropertyName (HERE), enumerator_12434.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 348)), var_hasSelector_12685  COMMA_SOURCE_FILE ("type-class.galgas", 348)) ;
    enumerator_12434.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_13373 (var_currentClassTypedPropertyList_12249, kENUMERATION_UP) ;
  while (enumerator_13373.hasCurrentObject ()) {
    enumGalgasBool test_33 = kBoolTrue ;
    if (kBoolTrue == test_33) {
      test_33 = enumerator_13373.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_33) {
        {
        GALGAS_formalParameterSignature temp_34 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 356)) ;
        temp_34.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 356)), enumerator_13373.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-class.galgas", 356)), enumerator_13373.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 356)) ;
        var_setterMap_7690.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_13373.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-class.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 354)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 354))  COMMA_SOURCE_FILE ("type-class.galgas", 354)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 355)), temp_34, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-class.galgas", 358)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 353)) ;
        }
      }
    }
    enumerator_13373.gotoNextObject () ;
  }
  {
  const GALGAS_classDeclarationAST temp_35 = this ;
  const GALGAS_classDeclarationAST temp_36 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_35.readProperty_mClassTypeName (), GALGAS_bool (true), var_getterMap_7661, var_setterMap_7690, var_instanceMethodMap_7735, temp_36.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 364)) ;
  }
  const GALGAS_classDeclarationAST temp_37 = this ;
  GALGAS_string temp_38 ;
  const enumGalgasBool test_39 = temp_37.readProperty_mIsAbstract ().boolEnum () ;
  if (kBoolTrue == test_39) {
    temp_38 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_39) {
    temp_38 = GALGAS_string ("default") ;
  }
  GALGAS_string var_defaultConstructorName_14328 = temp_38 ;
  cEnumerator_typedPropertyList enumerator_14407 (var_allTypedAttributeList_12303, kENUMERATION_UP) ;
  bool bool_40 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_14328.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_14407.hasCurrentObject () && bool_40) {
    while (enumerator_14407.hasCurrentObject () && bool_40) {
      enumGalgasBool test_41 = kBoolTrue ;
      if (kBoolTrue == test_41) {
        test_41 = GALGAS_bool (kIsEqual, extensionGetter_definition (enumerator_14407.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 380)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_41) {
          var_defaultConstructorName_14328 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_14407.gotoNextObject () ;
      if (enumerator_14407.hasCurrentObject ()) {
        bool_40 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_14328.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_42 = this ;
  const GALGAS_classDeclarationAST temp_43 = this ;
  const GALGAS_classDeclarationAST temp_44 = this ;
  const GALGAS_classDeclarationAST temp_45 = this ;
  const GALGAS_classDeclarationAST temp_46 = this ;
  GALGAS_operators temp_47 ;
  const enumGalgasBool test_48 = temp_46.readProperty_mIsReference ().boolEnum () ;
  if (kBoolTrue == test_48) {
    temp_47 = GALGAS_operators::constructor_isReferenceEquatable (SOURCE_FILE ("type-class.galgas", 402)) ;
  }else if (kBoolFalse == test_48) {
    temp_47 = GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-class.galgas", 402)) ;
  }
  const GALGAS_classDeclarationAST temp_49 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_14649 = GALGAS_unifiedTypeDefinition::constructor_new (temp_42.readProperty_mClassTypeName (), temp_43.readProperty_mIsPredefined (), temp_44.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 388)), var_superClassIndex_7899, GALGAS_typeKindEnum::constructor_classType (temp_45.readProperty_mIsReference ()  COMMA_SOURCE_FILE ("type-class.galgas", 390)), GALGAS_bool (false), var_allTypedAttributeList_12303, var_attributeMap_7823, var_currentClassTypedPropertyList_12249, var_constructorMap_11957, var_getterMap_7661, var_setterMap_7690, var_instanceMethodMap_7735, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 399)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 400)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 401)), temp_47, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 403)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 404)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 405)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 406)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 407)), var_generateHeaderInSeparateFile_7942, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 409)), var_defaultConstructorName_14328, GALGAS_string ("class-").add_operation (temp_49.readProperty_mClassTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-class.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 411)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-class.galgas", 412))  COMMA_SOURCE_FILE ("type-class.galgas", 385)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14649.readProperty_mTypeName (), var_typeDefinition_14649, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 414)) ;
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
  GALGAS_lstring var_classTypeNameForUsefulness_16383 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 427)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_16383, var_classTypeNameForUsefulness_16383, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 428)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_classDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_classDeclarationAST temp_3 = this ;
      GALGAS_lstring var_superClassNameForUsefulness_16617 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 430)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16383, var_superClassNameForUsefulness_16617 COMMA_SOURCE_FILE ("type-class.galgas", 431)) ;
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
      GALGAS_lstring var_weakRefTypeNameForUsefulness_16848 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_6.readProperty_mClassTypeName ().readProperty_string ().add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 434)), temp_7.readProperty_mClassTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 434)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16383, var_weakRefTypeNameForUsefulness_16848 COMMA_SOURCE_FILE ("type-class.galgas", 435)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_17120 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_8.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 438)) ;
  const GALGAS_classDeclarationAST temp_9 = this ;
  GALGAS_unifiedTypeMapEntry temp_10 ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, temp_9.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 441)) ;
  }else if (kBoolFalse == test_11) {
    const GALGAS_classDeclarationAST temp_12 = this ;
    temp_10 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_12.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 442)) ;
  }
  GALGAS_unifiedTypeMapEntry var_superClassEntry_17234 = temp_10 ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (kIsNotEqual, var_superClassEntry_17234.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 447)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_bool var_superClassIsReference_17669 ;
      extensionGetter_definition (var_superClassEntry_17234, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 448)).readProperty_mTypeKindEnum ().method_classType (var_superClassIsReference_17669, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 448)) ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_classDeclarationAST temp_15 = this ;
        test_14 = var_superClassIsReference_17669.operator_and (temp_15.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 449)) COMMA_SOURCE_FILE ("type-class.galgas", 449)).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_classDeclarationAST temp_16 = this ;
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'refClass', as its super class"), fixItArray17  COMMA_SOURCE_FILE ("type-class.galgas", 450)) ;
        }
      }
      if (kBoolFalse == test_14) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          const GALGAS_classDeclarationAST temp_19 = this ;
          test_18 = var_superClassIsReference_17669.operator_not (SOURCE_FILE ("type-class.galgas", 451)).operator_and (temp_19.readProperty_mIsReference () COMMA_SOURCE_FILE ("type-class.galgas", 451)).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GALGAS_classDeclarationAST temp_20 = this ;
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'valueclass', as its super class"), fixItArray21  COMMA_SOURCE_FILE ("type-class.galgas", 452)) ;
          }
        }
      }
    }
  }
  GALGAS_typedPropertyList var_allAttributeList_18235 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsEqual, var_superClassEntry_17234.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 459)))).boolEnum () ;
    if (kBoolTrue == test_22) {
      var_allAttributeList_18235 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 460)) ;
      GALGAS_bool var_generatedInSeparateFileFeature_18347 = GALGAS_bool (false) ;
      enumGalgasBool test_23 = kBoolTrue ;
      if (kBoolTrue == test_23) {
        const GALGAS_classDeclarationAST temp_24 = this ;
        test_23 = GALGAS_bool (kIsStrictSup, temp_24.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-class.galgas", 462)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_23) {
          const GALGAS_classDeclarationAST temp_25 = this ;
          cEnumerator_lstringlist enumerator_18425 (temp_25.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
          while (enumerator_18425.hasCurrentObject ()) {
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = GALGAS_bool (kIsEqual, enumerator_18425.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
              if (kBoolTrue == test_26) {
                enumGalgasBool test_27 = kBoolTrue ;
                if (kBoolTrue == test_27) {
                  test_27 = var_generatedInSeparateFileFeature_18347.boolEnum () ;
                  if (kBoolTrue == test_27) {
                    TC_Array <C_FixItDescription> fixItArray28 ;
                    inCompiler->emitSemanticError (enumerator_18425.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'generatedInSeparateFile' is already named"), fixItArray28  COMMA_SOURCE_FILE ("type-class.galgas", 466)) ;
                  }
                }
                var_generatedInSeparateFileFeature_18347 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_26) {
              TC_Array <C_FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (enumerator_18425.current_mValue (HERE).readProperty_location (), GALGAS_string ("only the 'generatedInSeparateFile' attribute is allowed here"), fixItArray29  COMMA_SOURCE_FILE ("type-class.galgas", 470)) ;
            }
            enumerator_18425.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_22) {
    var_allAttributeList_18235 = extensionGetter_definition (var_superClassEntry_17234, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 475)).readProperty_mAllTypedPropertyList () ;
    enumGalgasBool test_30 = kBoolTrue ;
    if (kBoolTrue == test_30) {
      const GALGAS_classDeclarationAST temp_31 = this ;
      test_30 = GALGAS_bool (kIsStrictSup, temp_31.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-class.galgas", 476)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_30) {
        const GALGAS_classDeclarationAST temp_32 = this ;
        cEnumerator_lstringlist enumerator_19003 (temp_32.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
        while (enumerator_19003.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray33 ;
          inCompiler->emitSemanticError (enumerator_19003.current_mValue (HERE).readProperty_location (), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray33  COMMA_SOURCE_FILE ("type-class.galgas", 478)) ;
          enumerator_19003.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_19220 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 483)) ;
  GALGAS_propertyIndexMap var_attributeMap_19264 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 484)) ;
  const GALGAS_classDeclarationAST temp_34 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_19371 (temp_34.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_19371.hasCurrentObject ()) {
    enumGalgasBool test_35 = kBoolTrue ;
    if (kBoolTrue == test_35) {
      test_35 = enumerator_19371.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-class.galgas", 486)).boolEnum () ;
      if (kBoolTrue == test_35) {
        TC_Array <C_FixItDescription> fixItArray36 ;
        inCompiler->emitSemanticError (enumerator_19371.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a class"), fixItArray36  COMMA_SOURCE_FILE ("type-class.galgas", 487)) ;
      }
    }
    GALGAS_lstring var_propertyTypeNameForUsefulness_19568 = function_typeNameForUsefulEntitiesGraph (enumerator_19371.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 489)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16383, var_propertyTypeNameForUsefulness_19568 COMMA_SOURCE_FILE ("type-class.galgas", 490)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_19732 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_19371.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 491)) ;
    GALGAS_bool var_hasSelector_19796 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_19822 (enumerator_19371.current_mAttributeList (HERE), kENUMERATION_UP) ;
    bool bool_37 = var_hasSelector_19796.operator_not (SOURCE_FILE ("type-class.galgas", 493)).isValidAndTrue () ;
    if (enumerator_19822.hasCurrentObject () && bool_37) {
      while (enumerator_19822.hasCurrentObject () && bool_37) {
        var_hasSelector_19796 = GALGAS_bool (kIsEqual, enumerator_19822.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))) ;
        enumerator_19822.gotoNextObject () ;
        if (enumerator_19822.hasCurrentObject ()) {
          bool_37 = var_hasSelector_19796.operator_not (SOURCE_FILE ("type-class.galgas", 493)).isValidAndTrue () ;
        }
      }
    }
    var_typedAttributeList_19220.addAssign_operation (var_t_19732, enumerator_19371.current_mPropertyName (HERE), enumerator_19371.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 499)), var_hasSelector_19796  COMMA_SOURCE_FILE ("type-class.galgas", 496)) ;
    var_allAttributeList_18235.addAssign_operation (var_t_19732, enumerator_19371.current_mPropertyName (HERE), enumerator_19371.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 504)), var_hasSelector_19796  COMMA_SOURCE_FILE ("type-class.galgas", 501)) ;
    {
    var_attributeMap_19264.setter_insertKey (enumerator_19371.current_mPropertyName (HERE), var_t_19732, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 506)) ;
    }
    enumerator_19371.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_38 = this ;
  const GALGAS_classDeclarationAST temp_39 = this ;
  const GALGAS_classDeclarationAST temp_40 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (temp_38.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 510)), GALGAS_classTypeForGeneration::constructor_new (var_selfType_17120, temp_39.readProperty_mIsAbstract (), temp_40.readProperty_mIsReference (), var_superClassEntry_17234, var_allAttributeList_18235, var_typedAttributeList_19220, extensionGetter_definition (var_selfType_17120, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 518)).readProperty_mGenerateHeaderInSeparateFile ()  COMMA_SOURCE_FILE ("type-class.galgas", 511))  COMMA_SOURCE_FILE ("type-class.galgas", 509)) ;
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
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 543)).operator_not (SOURCE_FILE ("type-class.galgas", 543)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_classTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 544)) ;
    }
  }
  const GALGAS_classTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_21849 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 546)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classTypeForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_classTypeForGeneration temp_6 = this ;
      const GALGAS_classTypeForGeneration temp_7 = this ;
      GALGAS_string temp_8 ;
      const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 551)).boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_9) {
        const GALGAS_classTypeForGeneration temp_10 = this ;
        temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 551)) ;
      }
      const GALGAS_classTypeForGeneration temp_11 = this ;
      const GALGAS_classTypeForGeneration temp_12 = this ;
      const GALGAS_classTypeForGeneration temp_13 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21849.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 550)), temp_8, temp_11.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_12.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 553)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())), temp_13.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 548))) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_classTypeForGeneration temp_14 = this ;
    const GALGAS_classTypeForGeneration temp_15 = this ;
    GALGAS_string temp_16 ;
    const enumGalgasBool test_17 = temp_15.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 560)).boolEnum () ;
    if (kBoolTrue == test_17) {
      temp_16 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_17) {
      const GALGAS_classTypeForGeneration temp_18 = this ;
      temp_16 = extensionGetter_identifierRepresentation (temp_18.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 560)) ;
    }
    const GALGAS_classTypeForGeneration temp_19 = this ;
    const GALGAS_classTypeForGeneration temp_20 = this ;
    const GALGAS_classTypeForGeneration temp_21 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21849.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_14.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 559)), temp_16, temp_19.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_20.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 562)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())), temp_21.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 557))) ;
  }
  const GALGAS_classTypeForGeneration temp_22 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_21849.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_22.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 568)), var_selfTypeDefinition_21849.readProperty_mIsConcrete (), var_selfTypeDefinition_21849.readProperty_mConstructorMap (), var_selfTypeDefinition_21849.readProperty_mGetterMap (), var_selfTypeDefinition_21849.readProperty_mSetterMap (), var_selfTypeDefinition_21849.readProperty_mInstanceMethodMap (), var_selfTypeDefinition_21849.readProperty_mClassMethodMap (), var_selfTypeDefinition_21849.readProperty_mOptionalMethodMap (), var_selfTypeDefinition_21849.readProperty_mEnumerationDescriptor (), var_selfTypeDefinition_21849.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_21849.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_21849.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-class.galgas", 566))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 566)) ;
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
  cEnumerator_typedPropertyList enumerator_23778 (temp_0.readProperty_mCurrentTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_23778.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_23778.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 589)) ;
    enumerator_23778.gotoNextObject () ;
  }
  const GALGAS_classTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_23887 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 591)) ;
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
          const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 597)).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_9) {
            const GALGAS_classTypeForGeneration temp_10 = this ;
            temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 597)) ;
          }
          const GALGAS_classTypeForGeneration temp_11 = this ;
          const GALGAS_classTypeForGeneration temp_12 = this ;
          const GALGAS_classTypeForGeneration temp_13 = this ;
          const GALGAS_classTypeForGeneration temp_14 = this ;
          const GALGAS_classTypeForGeneration temp_15 = this ;
          GALGAS_string var_part_31__24021 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23887.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 596)), temp_8, temp_11.readProperty_mCurrentTypedAttributeList (), temp_12.readProperty_mAllTypedAttributeList (), temp_13.readProperty_mIsAbstract (), extensionGetter_definition (temp_14.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 601)).readProperty_mGetterMap (), extensionGetter_definition (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 602)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 594))) ;
          const GALGAS_classTypeForGeneration temp_16 = this ;
          const GALGAS_classTypeForGeneration temp_17 = this ;
          GALGAS_string temp_18 ;
          const enumGalgasBool test_19 = temp_17.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 607)).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_19) {
            const GALGAS_classTypeForGeneration temp_20 = this ;
            temp_18 = extensionGetter_identifierRepresentation (temp_20.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 607)) ;
          }
          const GALGAS_classTypeForGeneration temp_21 = this ;
          const GALGAS_classTypeForGeneration temp_22 = this ;
          const GALGAS_classTypeForGeneration temp_23 = this ;
          GALGAS_string var_part_32__24536 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23887.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_16.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 606)), temp_18, temp_21.readProperty_mCurrentTypedAttributeList (), temp_22.readProperty_mAllTypedAttributeList (), temp_23.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 604))) ;
          const GALGAS_classTypeForGeneration temp_24 = this ;
          GALGAS_string var_headerFileName_24946 = GALGAS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_24.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 612)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 612)) ;
          {
          GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 614)), var_headerFileName_24946, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_part_31__24021, GALGAS_string ("\n\n"), var_part_32__24536, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 613)) ;
          }
          outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_24946, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 624)).add_operation (GALGAS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 624)) ;
        }
      }
      if (kBoolFalse == test_4) {
        const GALGAS_classTypeForGeneration temp_25 = this ;
        const GALGAS_classTypeForGeneration temp_26 = this ;
        GALGAS_string temp_27 ;
        const enumGalgasBool test_28 = temp_26.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 629)).boolEnum () ;
        if (kBoolTrue == test_28) {
          temp_27 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_28) {
          const GALGAS_classTypeForGeneration temp_29 = this ;
          temp_27 = extensionGetter_identifierRepresentation (temp_29.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 629)) ;
        }
        const GALGAS_classTypeForGeneration temp_30 = this ;
        const GALGAS_classTypeForGeneration temp_31 = this ;
        const GALGAS_classTypeForGeneration temp_32 = this ;
        const GALGAS_classTypeForGeneration temp_33 = this ;
        const GALGAS_classTypeForGeneration temp_34 = this ;
        outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23887.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_25.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 628)), temp_27, temp_30.readProperty_mCurrentTypedAttributeList (), temp_31.readProperty_mAllTypedAttributeList (), temp_32.readProperty_mIsAbstract (), extensionGetter_definition (temp_33.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 633)).readProperty_mGetterMap (), extensionGetter_definition (temp_34.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 634)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 626))) ;
        const GALGAS_classTypeForGeneration temp_35 = this ;
        const GALGAS_classTypeForGeneration temp_36 = this ;
        GALGAS_string temp_37 ;
        const enumGalgasBool test_38 = temp_36.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 639)).boolEnum () ;
        if (kBoolTrue == test_38) {
          temp_37 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_38) {
          const GALGAS_classTypeForGeneration temp_39 = this ;
          temp_37 = extensionGetter_identifierRepresentation (temp_39.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 639)) ;
        }
        const GALGAS_classTypeForGeneration temp_40 = this ;
        const GALGAS_classTypeForGeneration temp_41 = this ;
        const GALGAS_classTypeForGeneration temp_42 = this ;
        outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23887.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_35.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 638)), temp_37, temp_40.readProperty_mCurrentTypedAttributeList (), temp_41.readProperty_mAllTypedAttributeList (), temp_42.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 636))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 636)) ;
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
        const enumGalgasBool test_48 = temp_46.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 650)).boolEnum () ;
        if (kBoolTrue == test_48) {
          temp_47 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_48) {
          const GALGAS_classTypeForGeneration temp_49 = this ;
          temp_47 = extensionGetter_identifierRepresentation (temp_49.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 650)) ;
        }
        const GALGAS_classTypeForGeneration temp_50 = this ;
        const GALGAS_classTypeForGeneration temp_51 = this ;
        const GALGAS_classTypeForGeneration temp_52 = this ;
        const GALGAS_classTypeForGeneration temp_53 = this ;
        const GALGAS_classTypeForGeneration temp_54 = this ;
        GALGAS_string var_part_31__26469 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23887.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_45.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 649)), temp_47, temp_50.readProperty_mCurrentTypedAttributeList (), temp_51.readProperty_mAllTypedAttributeList (), temp_52.readProperty_mIsAbstract (), extensionGetter_definition (temp_53.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 654)).readProperty_mGetterMap (), extensionGetter_definition (temp_54.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 655)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 647))) ;
        const GALGAS_classTypeForGeneration temp_55 = this ;
        const GALGAS_classTypeForGeneration temp_56 = this ;
        GALGAS_string temp_57 ;
        const enumGalgasBool test_58 = temp_56.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 660)).boolEnum () ;
        if (kBoolTrue == test_58) {
          temp_57 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_58) {
          const GALGAS_classTypeForGeneration temp_59 = this ;
          temp_57 = extensionGetter_identifierRepresentation (temp_59.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 660)) ;
        }
        const GALGAS_classTypeForGeneration temp_60 = this ;
        const GALGAS_classTypeForGeneration temp_61 = this ;
        const GALGAS_classTypeForGeneration temp_62 = this ;
        GALGAS_string var_part_32__26980 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23887.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_55.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 659)), temp_57, temp_60.readProperty_mCurrentTypedAttributeList (), temp_61.readProperty_mAllTypedAttributeList (), temp_62.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 657))) ;
        const GALGAS_classTypeForGeneration temp_63 = this ;
        GALGAS_string var_headerFileName_27386 = GALGAS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_63.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 665)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 665)) ;
        {
        GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 667)), var_headerFileName_27386, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_part_31__26469, GALGAS_string ("\n\n"), var_part_32__26980, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 666)) ;
        }
        outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_27386, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 677)).add_operation (GALGAS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 677)) ;
      }
    }
    if (kBoolFalse == test_43) {
      const GALGAS_classTypeForGeneration temp_64 = this ;
      const GALGAS_classTypeForGeneration temp_65 = this ;
      GALGAS_string temp_66 ;
      const enumGalgasBool test_67 = temp_65.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 682)).boolEnum () ;
      if (kBoolTrue == test_67) {
        temp_66 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_67) {
        const GALGAS_classTypeForGeneration temp_68 = this ;
        temp_66 = extensionGetter_identifierRepresentation (temp_68.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 682)) ;
      }
      const GALGAS_classTypeForGeneration temp_69 = this ;
      const GALGAS_classTypeForGeneration temp_70 = this ;
      const GALGAS_classTypeForGeneration temp_71 = this ;
      const GALGAS_classTypeForGeneration temp_72 = this ;
      const GALGAS_classTypeForGeneration temp_73 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23887.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_64.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 681)), temp_66, temp_69.readProperty_mCurrentTypedAttributeList (), temp_70.readProperty_mAllTypedAttributeList (), temp_71.readProperty_mIsAbstract (), extensionGetter_definition (temp_72.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 686)).readProperty_mGetterMap (), extensionGetter_definition (temp_73.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 687)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 679))) ;
      const GALGAS_classTypeForGeneration temp_74 = this ;
      const GALGAS_classTypeForGeneration temp_75 = this ;
      GALGAS_string temp_76 ;
      const enumGalgasBool test_77 = temp_75.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 692)).boolEnum () ;
      if (kBoolTrue == test_77) {
        temp_76 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_77) {
        const GALGAS_classTypeForGeneration temp_78 = this ;
        temp_76 = extensionGetter_identifierRepresentation (temp_78.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 692)) ;
      }
      const GALGAS_classTypeForGeneration temp_79 = this ;
      const GALGAS_classTypeForGeneration temp_80 = this ;
      const GALGAS_classTypeForGeneration temp_81 = this ;
      outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23887.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_74.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 691)), temp_76, temp_79.readProperty_mCurrentTypedAttributeList (), temp_80.readProperty_mAllTypedAttributeList (), temp_81.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 689))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 689)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 706)) ;
  const GALGAS_classTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_29337 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 707)) ;
  const GALGAS_classTypeForGeneration temp_2 = this ;
  const GALGAS_classTypeForGeneration temp_3 = this ;
  const GALGAS_classTypeForGeneration temp_4 = this ;
  GALGAS_typedPropertyList var_at_29381 = temp_2.readProperty_mAllTypedAttributeList ().getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint (uint32_t (0U)), temp_3.readProperty_mAllTypedAttributeList ().getter_length (SOURCE_FILE ("type-class.galgas", 709)).substract_operation (temp_4.readProperty_mCurrentTypedAttributeList ().getter_length (SOURCE_FILE ("type-class.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 709))  COMMA_SOURCE_FILE ("type-class.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 708)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_classTypeForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_classTypeForGeneration temp_7 = this ;
      const GALGAS_classTypeForGeneration temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = temp_8.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 715)).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_10) {
        const GALGAS_classTypeForGeneration temp_11 = this ;
        temp_9 = extensionGetter_identifierRepresentation (temp_11.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 715)) ;
      }
      const GALGAS_classTypeForGeneration temp_12 = this ;
      const GALGAS_classTypeForGeneration temp_13 = this ;
      const GALGAS_classTypeForGeneration temp_14 = this ;
      const GALGAS_classTypeForGeneration temp_15 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeSpecificImplementation (inCompiler, var_typedefinition_29337.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_7.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 714)), temp_9, temp_12.readProperty_mCurrentTypedAttributeList (), temp_13.readProperty_mAllTypedAttributeList (), var_at_29381, temp_14.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 720)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 712))) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_classTypeForGeneration temp_16 = this ;
    const GALGAS_classTypeForGeneration temp_17 = this ;
    GALGAS_string temp_18 ;
    const enumGalgasBool test_19 = temp_17.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 726)).boolEnum () ;
    if (kBoolTrue == test_19) {
      temp_18 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_19) {
      const GALGAS_classTypeForGeneration temp_20 = this ;
      temp_18 = extensionGetter_identifierRepresentation (temp_20.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 726)) ;
    }
    const GALGAS_classTypeForGeneration temp_21 = this ;
    const GALGAS_classTypeForGeneration temp_22 = this ;
    const GALGAS_classTypeForGeneration temp_23 = this ;
    const GALGAS_classTypeForGeneration temp_24 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeSpecificImplementation (inCompiler, var_typedefinition_29337.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_16.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 725)), temp_18, temp_21.readProperty_mCurrentTypedAttributeList (), temp_22.readProperty_mAllTypedAttributeList (), var_at_29381, temp_23.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_24.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 731)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 723))) ;
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
  GALGAS_bool var_generateMethodDeclaration_31105 = GALGAS_bool (true) ;
  GALGAS_string var_suffix_31125 = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GALGAS_methodQualifier::kNotBuilt:
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualAbstract:
    {
      var_suffix_31125 = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtual:
    {
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isBasic:
  case GALGAS_methodQualifier::kEnum_isBasicFinal:
    {
      var_generateMethodDeclaration_31105 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isInherited:
    {
      var_generateMethodDeclaration_31105 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverriding:
    {
      var_suffix_31125 = GALGAS_string (" override") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverridingAbstract:
    {
      var_suffix_31125 = GALGAS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_31105.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("//--- Extension getter ").add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 762)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 762)) ;
      result_result.plusAssign_operation(GALGAS_string ("  public: virtual class GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inReturnedType, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 763)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 763)) ;
      result_result.plusAssign_operation(GALGAS_string (" getter_").add_operation (constinArgument_inGetterName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-class.galgas", 764)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 764)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 764)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 764)) ;
      GALGAS_bool var_first_31772 = GALGAS_bool (true) ;
      cEnumerator_functionSignature enumerator_31824 (constinArgument_inArgumentTypeList, kENUMERATION_UP) ;
      while (enumerator_31824.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_first_31772.boolEnum () ;
          if (kBoolTrue == test_1) {
            var_first_31772 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 771)) ;
        }
        result_result.plusAssign_operation(GALGAS_string ("const class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_31824.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 773)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 773)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 773)) ;
        result_result.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_31824.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 774)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 774)) ;
        enumerator_31824.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_first_31772.operator_not (SOURCE_FILE ("type-class.galgas", 777)).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 778)) ;
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("C_Compiler *"), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 780)) ;
          var_first_31772 = GALGAS_bool (false) ;
        }
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = var_first_31772.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("LOCATION_ARGS") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssign_operation(temp_4.add_operation (GALGAS_string (") const"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 783)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 783)) ;
      result_result.plusAssign_operation(var_suffix_31125.add_operation (GALGAS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 784)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 784)) ;
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
  NULL
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
  GALGAS_bool var_generateMethodDeclaration_32876 = GALGAS_bool (true) ;
  GALGAS_string var_suffix_32896 = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GALGAS_methodQualifier::kNotBuilt:
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualAbstract:
    {
      var_suffix_32896 = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtual:
    {
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isBasic:
  case GALGAS_methodQualifier::kEnum_isBasicFinal:
    {
      var_generateMethodDeclaration_32876 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isInherited:
    {
      var_generateMethodDeclaration_32876 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverriding:
    {
      var_suffix_32896 = GALGAS_string (" override") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverridingAbstract:
    {
      var_suffix_32896 = GALGAS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_32876.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("//--- Extension method ").add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 813)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 813)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 813)) ;
      result_result.plusAssign_operation(GALGAS_string ("  public: virtual void method_").add_operation (constinArgument_inMethodName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-class.galgas", 814)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 814)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 814)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 814)) ;
      GALGAS_bool var_first_33474 = GALGAS_bool (true) ;
      cEnumerator_formalParameterSignature enumerator_33526 (constinArgument_inArgumentTypeList, kENUMERATION_UP) ;
      while (enumerator_33526.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_first_33474.boolEnum () ;
          if (kBoolTrue == test_1) {
            var_first_33474 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 821)) ;
        }
        switch (enumerator_33526.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            result_result.plusAssign_operation(GALGAS_string ("const class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_33526.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 825)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 825)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 825)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_33526.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 827)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 827)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 827)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 827)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_33526.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 829)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 829)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 829)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 829)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_33526.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 831)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 831)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 831)) ;
          }
          break ;
        }
        result_result.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_33526.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 833)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 833)) ;
        enumerator_33526.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_first_33474.operator_not (SOURCE_FILE ("type-class.galgas", 836)).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 837)) ;
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("C_Compiler *"), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 839)) ;
          var_first_33474 = GALGAS_bool (false) ;
        }
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = var_first_33474.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("LOCATION_ARGS") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssign_operation(temp_4.add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 842)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 842)) ;
      result_result.plusAssign_operation(var_suffix_32896.add_operation (GALGAS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 843)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 843)) ;
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
  NULL
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
  GALGAS_lstring var_key_1648 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 30)), temp_1.readProperty_mWeakReferenceTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 30)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_1648, temp_2, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 31)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
    test_3 = GALGAS_bool (kIsNotEqual, temp_4.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
      const GALGAS_weakReferenceDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_1648, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 35)), temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 35)) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 33)) ;
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
  GALGAS_unifiedTypeMapEntry var_superClassIndex_2949 ;
  GALGAS_bool var_generateHeaderInSeparateFile_2990 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_2949 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 59)) ;
      var_generateHeaderInSeparateFile_2990 = GALGAS_bool (false) ;
      const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
      cEnumerator_lstringlist enumerator_3151 (temp_2.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
      while (enumerator_3151.hasCurrentObject ()) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_3151.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_generateHeaderInSeparateFile_2990 = GALGAS_bool (true) ;
          }
        }
        enumerator_3151.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_4.readProperty_mSuperWeakReferenceTypeName (), var_superClassIndex_2949, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 67)) ;
    }
    GALGAS_unifiedTypeDefinition var_superTypeDefinition_3471 ;
    const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
    extensionMethod_searchType (ioArgument_ioTypeMap, temp_5.readProperty_mSuperWeakReferenceTypeName (), var_superTypeDefinition_3471, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 68)) ;
    var_generateHeaderInSeparateFile_2990 = var_superTypeDefinition_3471.readProperty_mGenerateHeaderInSeparateFile () ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_superTypeDefinition_3471.readProperty_mTypeKindEnum ().getter_isWeakReferenceType (SOURCE_FILE ("type-weak-reference.galgas", 79)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 79)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_weakReferenceDeclarationAST temp_7 = this ;
        const GALGAS_weakReferenceDeclarationAST temp_8 = this ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_8.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 80)).add_operation (GALGAS_string (" should be a weak reference type"), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 80)), fixItArray9  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 80)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_weakReferenceIndex_4081 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_10 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_10.readProperty_mWeakReferenceTypeName (), var_weakReferenceIndex_4081, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 84)) ;
  }
  GALGAS_constructorMap var_constructorMap_4140 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 89)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_11 = this ;
  var_constructorMap_4140.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nil"), temp_11.readProperty_mWeakReferenceTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 91)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 92)), GALGAS_bool (false), var_weakReferenceIndex_4081, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 90)) ;
  }
  GALGAS_getterMap var_getterMap_4334 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 97)) ;
  GALGAS_setterMap var_setterMap_4366 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 98)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4414 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 99)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_12 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_12.readProperty_mWeakReferenceTypeName (), GALGAS_bool (false), var_getterMap_4334, var_setterMap_4366, var_instanceMethodMap_4414, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 100)) ;
  }
  cEnumerator_getterMap enumerator_4762 (var_getterMap_4334, kENUMERATION_UP) ;
  while (enumerator_4762.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray13 ;
    inCompiler->emitSemanticError (enumerator_4762.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray13  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 114)) ;
    enumerator_4762.gotoNextObject () ;
  }
  cEnumerator_setterMap enumerator_4863 (var_setterMap_4366, kENUMERATION_UP) ;
  while (enumerator_4863.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (enumerator_4863.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray14  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 117)) ;
    enumerator_4863.gotoNextObject () ;
  }
  cEnumerator_instanceMethodMap enumerator_4964 (var_instanceMethodMap_4414, kENUMERATION_UP) ;
  while (enumerator_4964.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray15 ;
    inCompiler->emitSemanticError (enumerator_4964.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray15  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 120)) ;
    enumerator_4964.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_classIndex_5144 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_16 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_16.readProperty_mClassTypeName (), var_classIndex_5144, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 123)) ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_17 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_18 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_19 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_5166 = GALGAS_unifiedTypeDefinition::constructor_new (temp_17.readProperty_mWeakReferenceTypeName (), temp_18.readProperty_mIsPredefined (), GALGAS_bool (true), var_superClassIndex_2949, GALGAS_typeKindEnum::constructor_weakReferenceType (var_classIndex_5144  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 129)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 131)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 132)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 133)), var_constructorMap_4140, GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 135)), GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 136)), GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 137)), GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 138)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 139)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 140)), GALGAS_operators::constructor_isReferenceEquatable (SOURCE_FILE ("type-weak-reference.galgas", 141)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 142)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 143)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 144)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 145)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 146)), var_generateHeaderInSeparateFile_2990, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 148)), GALGAS_string ("nil"), GALGAS_string ("weak-reference-").add_operation (temp_19.readProperty_mWeakReferenceTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 150)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-weak-reference.galgas", 151))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 124)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_5166.readProperty_mTypeName (), var_typeDefinition_5166, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 153)) ;
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
      GALGAS_lstring var_superWeakRefNameForUsefulness_7082 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 173)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_weakRefTypeNameForUsefulness_6828, var_superWeakRefNameForUsefulness_7082 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 174)) ;
      }
    }
  }
  const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_7310 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_4.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 177)) ;
  const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
  GALGAS_unifiedTypeMapEntry temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 180)) ;
  }else if (kBoolFalse == test_7) {
    const GALGAS_weakReferenceDeclarationAST temp_8 = this ;
    temp_6 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_8.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 181)) ;
  }
  GALGAS_unifiedTypeMapEntry var_superClassEntry_7428 = temp_6 ;
  GALGAS_typedPropertyList var_allAttributeList_7795 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, var_superClassEntry_7428.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 187)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_allAttributeList_7795 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 188)) ;
      GALGAS_bool var_generatedInSeparateFileFeature_7901 = GALGAS_bool (false) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_weakReferenceDeclarationAST temp_11 = this ;
        test_10 = GALGAS_bool (kIsStrictSup, temp_11.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-weak-reference.galgas", 190)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_weakReferenceDeclarationAST temp_12 = this ;
          cEnumerator_lstringlist enumerator_7975 (temp_12.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
          while (enumerator_7975.hasCurrentObject ()) {
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsEqual, enumerator_7975.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
              if (kBoolTrue == test_13) {
                enumGalgasBool test_14 = kBoolTrue ;
                if (kBoolTrue == test_14) {
                  test_14 = var_generatedInSeparateFileFeature_7901.boolEnum () ;
                  if (kBoolTrue == test_14) {
                    TC_Array <C_FixItDescription> fixItArray15 ;
                    inCompiler->emitSemanticError (enumerator_7975.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'generatedInSeparateFile' is already named"), fixItArray15  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 194)) ;
                  }
                }
                var_generatedInSeparateFileFeature_7901 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_13) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (enumerator_7975.current_mValue (HERE).readProperty_location (), GALGAS_string ("only the 'generatedInSeparateFile' attribute is allowed here"), fixItArray16  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 198)) ;
            }
            enumerator_7975.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    var_allAttributeList_7795 = extensionGetter_definition (var_superClassEntry_7428, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 203)).readProperty_mAllTypedPropertyList () ;
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      const GALGAS_weakReferenceDeclarationAST temp_18 = this ;
      test_17 = GALGAS_bool (kIsStrictSup, temp_18.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-weak-reference.galgas", 204)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        const GALGAS_weakReferenceDeclarationAST temp_19 = this ;
        cEnumerator_lstringlist enumerator_8525 (temp_19.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
        while (enumerator_8525.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (enumerator_8525.current_mValue (HERE).readProperty_location (), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray20  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 206)) ;
          enumerator_8525.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_8730 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 211)) ;
  GALGAS_propertyIndexMap var_attributeMap_8772 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 212)) ;
  const GALGAS_weakReferenceDeclarationAST temp_21 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_8863 (temp_21.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_8863.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_t_8899 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_8863.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 214)) ;
    GALGAS_bool var_hasSelector_8961 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_8985 (enumerator_8863.current_mAttributeList (HERE), kENUMERATION_UP) ;
    bool bool_22 = var_hasSelector_8961.operator_not (SOURCE_FILE ("type-weak-reference.galgas", 216)).isValidAndTrue () ;
    if (enumerator_8985.hasCurrentObject () && bool_22) {
      while (enumerator_8985.hasCurrentObject () && bool_22) {
        var_hasSelector_8961 = GALGAS_bool (kIsEqual, enumerator_8985.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))) ;
        enumerator_8985.gotoNextObject () ;
        if (enumerator_8985.hasCurrentObject ()) {
          bool_22 = var_hasSelector_8961.operator_not (SOURCE_FILE ("type-weak-reference.galgas", 216)).isValidAndTrue () ;
        }
      }
    }
    var_typedAttributeList_8730.addAssign_operation (var_t_8899, enumerator_8863.current_mPropertyName (HERE), enumerator_8863.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 222)), var_hasSelector_8961  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 219)) ;
    var_allAttributeList_7795.addAssign_operation (var_t_8899, enumerator_8863.current_mPropertyName (HERE), enumerator_8863.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 227)), var_hasSelector_8961  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 224)) ;
    {
    var_attributeMap_8772.setter_insertKey (enumerator_8863.current_mPropertyName (HERE), var_t_8899, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 229)) ;
    }
    enumerator_8863.gotoNextObject () ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_23 = this ;
  GALGAS_unifiedTypeMapEntry var_referenceClassType_9407 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_23.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 232)) ;
  const GALGAS_weakReferenceDeclarationAST temp_24 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("weak reference ").add_operation (temp_24.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 236)), GALGAS_weakReferenceTypeForGeneration::constructor_new (var_selfType_7310, var_referenceClassType_9407, var_superClassEntry_7428, var_allAttributeList_7795, var_typedAttributeList_8730, extensionGetter_definition (var_selfType_7310, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 243)).readProperty_mGenerateHeaderInSeparateFile ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 237))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 235)) ;
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
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 263)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 263)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_weakReferenceTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 264)) ;
    }
  }
  const GALGAS_weakReferenceTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReferenceClassType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 266)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_4 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_10998 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 267)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_5 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_6 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_7 = this ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 271)).boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_9) {
    const GALGAS_weakReferenceTypeForGeneration temp_10 = this ;
    temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 271)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeHeader_31_ (inCompiler, extensionGetter_identifierRepresentation (temp_5.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 269)), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 270)), temp_8, GALGAS_bool (kIsNotEqual, var_typedefinition_10998.readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 268))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typedefinition_10998.readProperty_mTypeName ().readProperty_string (), var_typedefinition_10998.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 276)), var_typedefinition_10998.readProperty_mIsConcrete (), var_typedefinition_10998.readProperty_mConstructorMap (), var_typedefinition_10998.readProperty_mGetterMap (), var_typedefinition_10998.readProperty_mSetterMap (), var_typedefinition_10998.readProperty_mInstanceMethodMap (), var_typedefinition_10998.readProperty_mClassMethodMap (), var_typedefinition_10998.readProperty_mOptionalMethodMap (), var_typedefinition_10998.readProperty_mEnumerationDescriptor (), var_typedefinition_10998.readProperty_mHandledOperatorFlags (), var_typedefinition_10998.readProperty_mAddAssignOperatorArguments (), var_typedefinition_10998.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-weak-reference.galgas", 274))), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 274)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 298)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_12358 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 299)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_2 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_3 = this ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = temp_3.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 303)).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_5) {
    const GALGAS_weakReferenceTypeForGeneration temp_6 = this ;
    temp_4 = extensionGetter_identifierRepresentation (temp_6.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 303)) ;
  }
  const GALGAS_weakReferenceTypeForGeneration temp_7 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_8 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_9 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_10 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_11 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 301)), var_typedefinition_12358.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 302)), temp_4, temp_7.readProperty_mTypedAttributeList (), temp_8.readProperty_mAllTypedPropertyList (), temp_9.readProperty_mAllTypedPropertyList ().getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint (uint32_t (0U)), temp_10.readProperty_mAllTypedPropertyList ().getter_length (SOURCE_FILE ("type-weak-reference.galgas", 306)).substract_operation (temp_11.readProperty_mTypedAttributeList ().getter_length (SOURCE_FILE ("type-weak-reference.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 306))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 306)), GALGAS_bool (kIsNotEqual, var_typedefinition_12358.readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 300))) ;
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
  GALGAS_lstring var_key_4627 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 136)), temp_1.readProperty_mEnumTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 136)) ;
  {
  const GALGAS_enumDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4627, temp_2, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 137)) ;
  }
  GALGAS_bool var_circularReference_4869 = GALGAS_bool (true) ;
  const GALGAS_enumDeclarationAST temp_3 = this ;
  cEnumerator_enumConstantList enumerator_4916 (temp_3.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_4 = var_circularReference_4869.isValidAndTrue () ;
  if (enumerator_4916.hasCurrentObject () && bool_4) {
    while (enumerator_4916.hasCurrentObject () && bool_4) {
      GALGAS_bool var_namesCurrentType_4991 = GALGAS_bool (false) ;
      cEnumerator__32_lstringlist enumerator_5018 (enumerator_4916.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
      bool bool_5 = var_namesCurrentType_4991.operator_not (SOURCE_FILE ("type-enum.galgas", 142)).isValidAndTrue () ;
      if (enumerator_5018.hasCurrentObject () && bool_5) {
        while (enumerator_5018.hasCurrentObject () && bool_5) {
          GALGAS_lstring var_propertyKey_5105 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5018.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 143)), enumerator_5018.current_mValue_30_ (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 143)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, var_propertyKey_5105.readProperty_string ().objectCompare (var_key_4627.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_namesCurrentType_4991 = GALGAS_bool (true) ;
            }
          }
          enumerator_5018.gotoNextObject () ;
          if (enumerator_5018.hasCurrentObject ()) {
            bool_5 = var_namesCurrentType_4991.operator_not (SOURCE_FILE ("type-enum.galgas", 142)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_namesCurrentType_4991.operator_not (SOURCE_FILE ("type-enum.galgas", 148)).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_circularReference_4869 = GALGAS_bool (false) ;
        }
      }
      enumerator_4916.gotoNextObject () ;
      if (enumerator_4916.hasCurrentObject ()) {
        bool_4 = var_circularReference_4869.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_circularReference_4869.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumDeclarationAST temp_9 = this ;
      cEnumerator_enumConstantList enumerator_5467 (temp_9.readProperty_mConstantList (), kENUMERATION_UP) ;
      while (enumerator_5467.hasCurrentObject ()) {
        cEnumerator__32_lstringlist enumerator_5514 (enumerator_5467.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_5514.hasCurrentObject ()) {
          GALGAS_lstring var_propertyKey_5576 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5514.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 156)), enumerator_5514.current_mValue_30_ (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 156)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, var_propertyKey_5576.readProperty_string ().objectCompare (var_key_4627.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4627, var_propertyKey_5576 COMMA_SOURCE_FILE ("type-enum.galgas", 158)) ;
              }
            }
          }
          enumerator_5514.gotoNextObject () ;
        }
        enumerator_5467.gotoNextObject () ;
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
  GALGAS_constructorMap var_constructorMap_6537 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 176)) ;
  GALGAS_setterMap var_setterMap_6569 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 177)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6617 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 178)) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_6708 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 180)) ;
  GALGAS_unifiedTypeMapEntry var_enumTypeEntry_6806 ;
  {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mEnumTypeName (), var_enumTypeEntry_6806, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 182)) ;
  }
  GALGAS_constantIndexMap var_constantMap_6861 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 184)) ;
  GALGAS_bool var_hasAssociatedValues_6898 = GALGAS_bool (false) ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  cEnumerator_enumConstantList enumerator_6958 (temp_1.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_6958.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_7036 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 187)) ;
    GALGAS_functionSignature var_argumentTypeList_7085 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 188)) ;
    cEnumerator__32_lstringlist enumerator_7121 (enumerator_6958.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_7121.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_7224 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_7121.current_mValue_30_ (HERE), var_associatedTypeEntry_7224, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 190)) ;
      }
      var_argumentTypeList_7085.addAssign_operation (enumerator_7121.current_mValue_31_ (HERE), var_associatedTypeEntry_7224, enumerator_7121.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 191)) ;
      var_associatedTypeList_7036.addAssign_operation (var_associatedTypeEntry_7224  COMMA_SOURCE_FILE ("type-enum.galgas", 192)) ;
      var_hasAssociatedValues_6898 = GALGAS_bool (true) ;
      enumerator_7121.gotoNextObject () ;
    }
    {
    var_constantMap_6861.setter_insertKey (enumerator_6958.current_mConstantName (HERE), var_constantMap_6861.getter_count (SOURCE_FILE ("type-enum.galgas", 195)), var_associatedTypeList_7036, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 195)) ;
    }
    {
    var_constructorMap_6537.setter_insertOrReplace (enumerator_6958.current_mConstantName (HERE), var_argumentTypeList_7085, GALGAS_bool (false), var_enumTypeEntry_6806 COMMA_SOURCE_FILE ("type-enum.galgas", 196)) ;
    }
    enumerator_6958.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_2 = this ;
  cEnumerator_enumConstantList enumerator_7673 (temp_2.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_7673.hasCurrentObject ()) {
    GALGAS_optionalMethodSignature var_argumentTypeList_7749 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 205)) ;
    cEnumerator__32_lstringlist enumerator_7785 (enumerator_7673.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_7785.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_7888 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_7785.current_mValue_30_ (HERE), var_associatedTypeEntry_7888, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 207)) ;
      }
      var_argumentTypeList_7749.addAssign_operation (GALGAS_bool (false), enumerator_7785.current_mValue_31_ (HERE), var_associatedTypeEntry_7888, enumerator_7785.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 208)) ;
      enumerator_7785.gotoNextObject () ;
    }
    {
    var_optionalMethodMap_6708.setter_insertKey (enumerator_7673.current_mConstantName (HERE), var_argumentTypeList_7749, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 210)) ;
    }
    enumerator_7673.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_3 = this ;
  cEnumerator_enumConstantList enumerator_8148 (temp_3.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_8148.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_8148.current_mAssociatedValueDefinitionList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 217)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_unifiedTypeMapEntryList var_associatedTypeList_8284 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 218)) ;
        GALGAS_formalParameterSignature var_argumentTypeList_8342 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 219)) ;
        cEnumerator__32_lstringlist enumerator_8380 (enumerator_8148.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_8380.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_8485 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8380.current_mValue_30_ (HERE), var_associatedTypeEntry_8485, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 221)) ;
          }
          var_argumentTypeList_8342.addAssign_operation (enumerator_8380.current_mValue_31_ (HERE), var_associatedTypeEntry_8485, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-enum.galgas", 222)), enumerator_8380.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 222)) ;
          var_associatedTypeList_8284.addAssign_operation (var_associatedTypeEntry_8485  COMMA_SOURCE_FILE ("type-enum.galgas", 223)) ;
          var_hasAssociatedValues_6898 = GALGAS_bool (true) ;
          enumerator_8380.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_6617.setter_insertKey (enumerator_8148.current_mConstantName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-enum.galgas", 228)), var_argumentTypeList_8342, enumerator_8148.current_mConstantName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-enum.galgas", 232)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 226)) ;
        }
      }
    }
    enumerator_8148.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap_8972 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_8972, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 238)) ;
  }
  const GALGAS_enumDeclarationAST temp_5 = this ;
  cEnumerator_enumConstantList enumerator_8996 (temp_5.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_8996.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument (var_getterMap_8972, ioArgument_ioTypeMap, GALGAS_string ("is").add_operation (enumerator_8996.current_mConstantName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-enum.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 243)), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 240)) ;
    }
    enumerator_8996.gotoNextObject () ;
  }
  {
  const GALGAS_enumDeclarationAST temp_6 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_6.readProperty_mEnumTypeName (), GALGAS_bool (false), var_getterMap_8972, var_setterMap_6569, var_instanceMethodMap_6617, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 249)) ;
  }
  GALGAS_string var_defaultConstructorName_9637 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_enumDeclarationAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mDefaultConstantName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_unifiedTypeMapEntryList var_associatedTypeList_9796 ;
      const GALGAS_enumDeclarationAST temp_9 = this ;
      GALGAS_uint joker_9771 ; // Joker input parameter
      var_constantMap_6861.method_searchKey (temp_9.readProperty_mDefaultConstantName (), joker_9771, var_associatedTypeList_9796, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 265)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsEqual, var_associatedTypeList_9796.getter_length (SOURCE_FILE ("type-enum.galgas", 266)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_enumDeclarationAST temp_11 = this ;
          var_defaultConstructorName_9637 = temp_11.readProperty_mDefaultConstantName ().readProperty_string () ;
        }
      }
      if (kBoolFalse == test_10) {
        const GALGAS_enumDeclarationAST temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mDefaultConstantName ().readProperty_location (), GALGAS_string ("the default constant should have no associated values"), fixItArray13  COMMA_SOURCE_FILE ("type-enum.galgas", 269)) ;
      }
    }
  }
  const GALGAS_enumDeclarationAST temp_14 = this ;
  const GALGAS_enumDeclarationAST temp_15 = this ;
  const GALGAS_enumDeclarationAST temp_16 = this ;
  const GALGAS_enumDeclarationAST temp_17 = this ;
  GALGAS_headerKind temp_18 ;
  const enumGalgasBool test_19 = var_hasAssociatedValues_6898.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-enum.galgas", 300)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-enum.galgas", 300)) ;
  }
  GALGAS_unifiedTypeDefinition var_typeDefinition_10074 = GALGAS_unifiedTypeDefinition::constructor_new (temp_14.readProperty_mEnumTypeName (), temp_15.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-enum.galgas", 277)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("type-enum.galgas", 278)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 280)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 281)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 282)), var_constructorMap_6537, var_getterMap_8972, var_setterMap_6569, var_instanceMethodMap_6617, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 287)), var_optionalMethodMap_6708, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 289)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-enum.galgas", 290)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-enum.galgas", 290)) COMMA_SOURCE_FILE ("type-enum.galgas", 290)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 291)), var_constantMap_6861, temp_16.readProperty_mConstantList (), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 294)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 295)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-enum.galgas", 297)), var_defaultConstructorName_9637, GALGAS_string ("enum-").add_operation (temp_17.readProperty_mEnumTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-enum.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 299)), temp_18  COMMA_SOURCE_FILE ("type-enum.galgas", 273)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_10074.readProperty_mTypeName (), var_typeDefinition_10074, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 302)) ;
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
  GALGAS_lstring var_nameForUsefulness_11704 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mEnumTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 319)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11704, var_nameForUsefulness_11704, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 320)) ;
  }
  GALGAS_stringlist var_constantList_11871 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 322)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration_11955 = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 323)) ;
  GALGAS_constantIndexMap var_constantMap_11978 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 324)) ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  cEnumerator_enumConstantList enumerator_12053 (temp_1.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_12053.hasCurrentObject ()) {
    var_constantList_11871.addAssign_operation (enumerator_12053.current_mConstantName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 326)) ;
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_12173 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 327)) ;
    GALGAS_stringset var_associatedValueNameSet_12220 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-enum.galgas", 328)) ;
    cEnumerator__32_lstringlist enumerator_12250 (enumerator_12053.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_12250.hasCurrentObject ()) {
      GALGAS_lstring var_propertyTypeNameForUsefulness_12328 = function_typeNameForUsefulEntitiesGraph (enumerator_12250.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 330)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_11704, var_propertyTypeNameForUsefulness_12328 COMMA_SOURCE_FILE ("type-enum.galgas", 331)) ;
      }
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_12492 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_12250.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 332)) ;
      var_associatedTypeList_12173.addAssign_operation (var_associatedTypeEntry_12492  COMMA_SOURCE_FILE ("type-enum.galgas", 333)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_associatedValueNameSet_12220.getter_hasKey (enumerator_12250.current_mValue_31_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-enum.galgas", 334)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_12250.current_mValue_31_ (HERE).readProperty_location (), GALGAS_string ("duplicated name"), fixItArray3  COMMA_SOURCE_FILE ("type-enum.galgas", 335)) ;
        }
      }
      var_associatedValueNameSet_12220.addAssign_operation (enumerator_12250.current_mValue_31_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 337)) ;
      enumerator_12250.gotoNextObject () ;
    }
    {
    var_constantMap_11978.setter_insertKey (enumerator_12053.current_mConstantName (HERE), var_constantMap_11978.getter_count (SOURCE_FILE ("type-enum.galgas", 339)), var_associatedTypeList_12173, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 339)) ;
    }
    var_enumConstantListForGeneration_11955.addAssign_operation (enumerator_12053.current_mConstantName (HERE).readProperty_string (), var_associatedTypeList_12173  COMMA_SOURCE_FILE ("type-enum.galgas", 340)) ;
    enumerator_12053.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_12935 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_4.readProperty_mEnumTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 343)) ;
  const GALGAS_enumDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (temp_5.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 345)), GALGAS_enumTypeForGeneration::constructor_new (var_selfType_12935, var_enumConstantListForGeneration_11955  COMMA_SOURCE_FILE ("type-enum.galgas", 346))  COMMA_SOURCE_FILE ("type-enum.galgas", 344)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [1] = {
  NULL
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
  GALGAS_uint index_652_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_652 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_652.hasCurrentObject ()) {
      result << ",\n    kEnum_" ;
      result << enumerator_652.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 15)).stringValue () ;
      index_652_.increment () ;
      enumerator_652.gotoNextObject () ;
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
    GALGAS_uint index_290_ (0) ;
    if (in_CONSTANT_5F_LIST.isValid ()) {
      cEnumerator_enumConstantListForGeneration enumerator_290 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_290.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_290.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 8)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "//----------------------------------------------------------------------------------------------------------------------\n\nclass cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_290.current_mConstantName (HERE).stringValue () ;
          result << " : public cEnumAssociatedValues {\n" ;
          GALGAS_uint index_626_idx (0) ;
          if (enumerator_290.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_626 (enumerator_290.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_626.hasCurrentObject ()) {
              result << "  public: const GALGAS_" ;
              result << extensionGetter_identifierRepresentation (enumerator_626.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " mAssociatedValue" ;
              result << index_626_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " ;\n" ;
              index_626_idx.increment () ;
              enumerator_626.gotoNextObject () ;
            }
          }
          result << "\n//--- Constructor\n  public: cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_290.current_mConstantName (HERE).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_907_idx (0) ;
          if (enumerator_290.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_907 (enumerator_290.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_907.hasCurrentObject ()) {
              result << "const GALGAS_" ;
              result << extensionGetter_identifierRepresentation (enumerator_907.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              result << " inAssociatedValue" ;
              result << index_907_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              if (enumerator_907.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_907_idx.increment () ;
              enumerator_907.gotoNextObject () ;
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
          result << enumerator_290.current_mConstantName (HERE).stringValue () ;
          result << " (void) {}\n} ;\n\n" ;
        }else if (kBoolFalse == test_1) {
        }
        index_290_.increment () ;
        enumerator_290.gotoNextObject () ;
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
  GALGAS_uint index_65_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_65 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_65.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_65.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 3)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n\ncEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << "::cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_427_idx (0) ;
        if (enumerator_65.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_427 (enumerator_65.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_427.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_427.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            result << " inAssociatedValue" ;
            result << index_427_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            if (enumerator_427.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_427_idx.increment () ;
            enumerator_427.gotoNextObject () ;
          }
        }
        result << "\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) :\ncEnumAssociatedValues (THERE)" ;
        GALGAS_uint index_663_idx (0) ;
        if (enumerator_65.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_663 (enumerator_65.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_663.hasCurrentObject ()) {
            result << ",\nmAssociatedValue" ;
            result << index_663_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << " (inAssociatedValue" ;
            result << index_663_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << ")" ;
            index_663_idx.increment () ;
            enumerator_663.gotoNextObject () ;
          }
        }
        result << " {\n} ;\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << "::description (" ;
        columnMarker = result.currentColumn () ;
        result << "C_String & ioString,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "const int32_t inIndentation) const {\n  ioString << \"(\\n\" ;\n" ;
        GALGAS_uint index_1166_idx (0) ;
        if (enumerator_65.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1166 (enumerator_65.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1166.hasCurrentObject ()) {
            result << "  mAssociatedValue" ;
            result << index_1166_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue () ;
            result << ".description (ioString, inIndentation) ;\n" ;
            index_1166_idx.increment () ;
            enumerator_1166.gotoNextObject () ;
          }
        }
        result << "  ioString << \")\" ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ntypeComparisonResult cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << "::compare (const cEnumAssociatedValues * inOperand) const {\n  const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = dynamic_cast<const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << " *> (inOperand) ;\n  macroValidPointer (ptr) ;\n  typeComparisonResult result = kOperandEqual ;\n" ;
        GALGAS_uint index_1896_idx (0) ;
        if (enumerator_65.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1896 (enumerator_65.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1896.hasCurrentObject ()) {
            result << "  if (result == kOperandEqual) {\n    result = mAssociatedValue" ;
            result << index_1896_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ".objectCompare (ptr->mAssociatedValue" ;
            result << index_1896_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ") ;\n  }\n" ;
            index_1896_idx.increment () ;
            enumerator_1896.gotoNextObject () ;
          }
        }
        result << "  return result ;\n}\n\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_65_.increment () ;
      enumerator_65.gotoNextObject () ;
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
  GALGAS_uint index_2461_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_2461 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2461.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_2461.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 54)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2461.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 55)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "UNUSED_LOCATION_ARGS" ;
      }else if (kBoolFalse == test_2) {
        GALGAS_uint index_2846_idx (0) ;
        if (enumerator_2461.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_2846 (enumerator_2461.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_2846.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_2846.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            result << " & inAssociatedValue" ;
            result << index_2846_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            if (enumerator_2846.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_2846_idx.increment () ;
            enumerator_2846.gotoNextObject () ;
          }
        }
        result << "\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS" ;
      }
      result << ") {\n  GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " result ;\n" ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2461.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  result.mEnum = kEnum_" ;
        result << enumerator_2461.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 67)).stringValue () ;
        result << " ;\n" ;
      }else if (kBoolFalse == test_3) {
        result << "  if (" ;
        GALGAS_uint index_3252_idx (0) ;
        if (enumerator_2461.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3252 (enumerator_2461.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3252.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3252_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 71)).stringValue () ;
            result << ".isValid ()" ;
            if (enumerator_3252.hasNextObject ()) {
              result << " && " ;
            }
            index_3252_idx.increment () ;
            enumerator_3252.gotoNextObject () ;
          }
        }
        result << ") {\n    result.mEnum = kEnum_" ;
        result << enumerator_2461.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 75)).stringValue () ;
        result << " ;\n    cEnumAssociatedValues * ptr = NULL ;\n    macroMyNew (ptr, cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_2461.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        GALGAS_uint index_3609_idx (0) ;
        if (enumerator_2461.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3609 (enumerator_2461.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3609.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3609_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).stringValue () ;
            if (enumerator_3609.hasNextObject ()) {
              result << ", " ;
            }
            index_3609_idx.increment () ;
            enumerator_3609.gotoNextObject () ;
          }
        }
        result << " COMMA_THERE)) ;\n    result.mAssociatedValues.setPointer (ptr) ;\n    macroDetachSharedObject (ptr) ;\n  }\n" ;
      }
      result << "  return result ;\n}\n\n" ;
      index_2461_.increment () ;
      enumerator_2461.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3915_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_3915 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3915.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, enumerator_3915.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 92)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::method_" ;
        result << enumerator_3915.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 94)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_4239_idx (0) ;
        if (enumerator_3915.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4239 (enumerator_3915.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4239.hasCurrentObject ()) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_4239.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << " & outAssociatedValue" ;
            result << index_4239_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            index_4239_idx.increment () ;
            enumerator_4239.gotoNextObject () ;
          }
        }
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) const {\n  if (mEnum != kEnum_" ;
        result << enumerator_3915.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 100)).stringValue () ;
        result << ") {\n" ;
        GALGAS_uint index_4541_idx (0) ;
        if (enumerator_3915.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4541 (enumerator_3915.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4541.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_4541_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 102)).stringValue () ;
            result << ".drop () ;\n" ;
            index_4541_idx.increment () ;
            enumerator_4541.gotoNextObject () ;
          }
        }
        result << "    C_String s ;\n    s << \"method @" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " " ;
        result << enumerator_3915.current_mConstantName (HERE).stringValue () ;
        result << " invoked with an invalid enum value\" ;\n    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n  }else{\n    const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3915.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3915.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n" ;
        GALGAS_uint index_5040_idx (0) ;
        if (enumerator_3915.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_5040 (enumerator_3915.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_5040.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_5040_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " = ptr->mAssociatedValue" ;
            result << index_5040_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " ;\n" ;
            index_5040_idx.increment () ;
            enumerator_5040.gotoNextObject () ;
          }
        }
        result << "  }\n}\n\n" ;
      }else if (kBoolFalse == test_4) {
      }
      index_3915_.increment () ;
      enumerator_3915.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5239_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5239 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5239.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nbool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::optional_" ;
      result << enumerator_5239.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 120)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_5521_idx (0) ;
      if (enumerator_5239.current_mAssociatedValueTypeList (HERE).isValid ()) {
        cEnumerator_unifiedTypeMapEntryList enumerator_5521 (enumerator_5239.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
        while (enumerator_5521.hasCurrentObject ()) {
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_5521.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue () ;
          result << " & outAssociatedValue" ;
          result << index_5521_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue () ;
          if (enumerator_5521.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_5521_idx.increment () ;
          enumerator_5521.gotoNextObject () ;
        }
      }
      result << ") const {\n  const bool ok = mEnum == kEnum_" ;
      result << enumerator_5239.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 128)).stringValue () ;
      result << " ;\n" ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, enumerator_5239.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 129)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "  if (ok) {\n    const auto * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5239.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n    // const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5239.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5239.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n" ;
        GALGAS_uint index_6176_idx (0) ;
        if (enumerator_5239.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_6176 (enumerator_5239.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_6176.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_6176_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 134)).stringValue () ;
            result << " = ptr->mAssociatedValue" ;
            result << index_6176_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 134)).stringValue () ;
            result << " ;\n" ;
            index_6176_idx.increment () ;
            enumerator_6176.gotoNextObject () ;
          }
        }
        result << "  }\n" ;
      }else if (kBoolFalse == test_5) {
      }
      result << "  return ok ;\n}\n\n" ;
      index_5239_.increment () ;
      enumerator_5239.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n\nstatic const char * gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [" ;
  result << in_CONSTANT_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).stringValue () ;
  result << "] = {\n  \"(not built)\"" ;
  GALGAS_uint index_6655_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6655 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6655.hasCurrentObject ()) {
      result << ",\n  " ;
      result << enumerator_6655.current_mConstantName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 147)).stringValue () ;
      index_6655_.increment () ;
      enumerator_6655.gotoNextObject () ;
    }
  }
  result << "\n} ;\n\n" ;
  GALGAS_uint index_6795_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6795 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6795.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_is" ;
      result << enumerator_6795.current_mConstantName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n  return GALGAS_bool (kNotBuilt != mEnum, kEnum_" ;
      result << enumerator_6795.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 156)).stringValue () ;
      result << " == mEnum) ;\n}\n\n" ;
      index_6795_.increment () ;
      enumerator_6795.gotoNextObject () ;
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
  GALGAS_bool var_hasAssociatedValues_14911 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_14953 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_14911.operator_not (SOURCE_FILE ("type-enum.galgas", 399)).isValidAndTrue () ;
  if (enumerator_14953.hasCurrentObject () && bool_1) {
    while (enumerator_14953.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_14911 = GALGAS_bool (kIsStrictSup, enumerator_14953.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 400)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_14953.gotoNextObject () ;
      if (enumerator_14953.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_14911.operator_not (SOURCE_FILE ("type-enum.galgas", 399)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_15104 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 402)) ;
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, var_selfTypedefinition_15104.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_15104.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 405)), temp_3.readProperty_mConstantList (), var_hasAssociatedValues_14911 COMMA_SOURCE_FILE ("type-enum.galgas", 403))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_15104.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_15104.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 411)), var_selfTypedefinition_15104.readProperty_mIsConcrete (), var_selfTypedefinition_15104.readProperty_mConstructorMap (), var_selfTypedefinition_15104.readProperty_mGetterMap (), var_selfTypedefinition_15104.readProperty_mSetterMap (), var_selfTypedefinition_15104.readProperty_mInstanceMethodMap (), var_selfTypedefinition_15104.readProperty_mClassMethodMap (), var_selfTypedefinition_15104.readProperty_mOptionalMethodMap (), var_selfTypedefinition_15104.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_15104.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_15104.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_15104.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-enum.galgas", 409))), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 409)) ;
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
  GALGAS_bool var_hasAssociatedValues_16331 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_16373 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_16331.operator_not (SOURCE_FILE ("type-enum.galgas", 434)).isValidAndTrue () ;
  if (enumerator_16373.hasCurrentObject () && bool_1) {
    while (enumerator_16373.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_16331 = GALGAS_bool (kIsStrictSup, enumerator_16373.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 435)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_16373.gotoNextObject () ;
      if (enumerator_16373.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_16331.operator_not (SOURCE_FILE ("type-enum.galgas", 434)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_16533 (temp_2.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_16533.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapEntryList enumerator_16574 (enumerator_16533.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_16574.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName_31_ (enumerator_16574.current_mEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 439)) ;
      enumerator_16574.gotoNextObject () ;
    }
    enumerator_16533.gotoNextObject () ;
  }
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_16695 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 442)) ;
  const GALGAS_enumTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, var_selfTypedefinition_16695.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_16695.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 445)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_16331 COMMA_SOURCE_FILE ("type-enum.galgas", 443))) ;
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
  GALGAS_bool var_hasAssociatedValues_17285 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_17327 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_17285.operator_not (SOURCE_FILE ("type-enum.galgas", 459)).isValidAndTrue () ;
  if (enumerator_17327.hasCurrentObject () && bool_1) {
    while (enumerator_17327.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_17285 = GALGAS_bool (kIsStrictSup, enumerator_17327.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 460)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_17327.gotoNextObject () ;
      if (enumerator_17327.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_17285.operator_not (SOURCE_FILE ("type-enum.galgas", 459)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 462)) ;
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_17537 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 463)) ;
  const GALGAS_enumTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, var_selfTypedefinition_17537.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_17537.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 466)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_17285 COMMA_SOURCE_FILE ("type-enum.galgas", 464))) ;
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
  GALGAS_lstring var_key_11972 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 313)), temp_1.readProperty_mExternTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-extern.galgas", 313)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11972, temp_2, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 314)) ;
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
  GALGAS_getterMap var_getterMap_12894 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_12894, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 328)) ;
  }
  GALGAS_constructorMap var_constructorMap_12933 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 329)) ;
  GALGAS_setterMap var_setterMap_12965 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 330)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_13013 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 331)) ;
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  cEnumerator_externTypeConstructorList enumerator_13091 (temp_0.readProperty_mExternTypeConstructorList (), kENUMERATION_UP) ;
  while (enumerator_13091.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_returnedTypeEntry_13197 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_13091.current_mResultTypeName (HERE), var_returnedTypeEntry_13197, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 334)) ;
    }
    GALGAS_functionSignature var_arguments_13242 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 336)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_13318 (enumerator_13091.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_13318.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_13418 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_13318.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_13418, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 338)) ;
      }
      var_arguments_13242.addAssign_operation (enumerator_13318.current_mFormalSelector (HERE), var_argumentTypeEntry_13418, enumerator_13318.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 339)) ;
      enumerator_13318.gotoNextObject () ;
    }
    {
    var_constructorMap_12933.setter_insertKey (enumerator_13091.current_mConstructorName (HERE), var_arguments_13242, GALGAS_bool (true), var_returnedTypeEntry_13197, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 342)) ;
    }
    enumerator_13091.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  cEnumerator_externTypeGetterList enumerator_13737 (temp_1.readProperty_mExternTypeGetterList (), kENUMERATION_UP) ;
  while (enumerator_13737.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_returnedTypeEntry_13838 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_13737.current_mResultTypeName (HERE), var_returnedTypeEntry_13838, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 351)) ;
    }
    GALGAS_functionSignature var_arguments_13883 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 353)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_13959 (enumerator_13737.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_13959.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_14059 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_13959.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_14059, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 355)) ;
      }
      var_arguments_13883.addAssign_operation (enumerator_13959.current_mFormalSelector (HERE), var_argumentTypeEntry_14059, enumerator_13959.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 356)) ;
      enumerator_13959.gotoNextObject () ;
    }
    {
    var_getterMap_12894.setter_insertKey (enumerator_13737.current_mGetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 361)), var_arguments_13883, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 363)), GALGAS_bool (true), var_returnedTypeEntry_13838, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 366)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 359)) ;
    }
    enumerator_13737.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  cEnumerator_externTypeSetterList enumerator_14483 (temp_2.readProperty_mExternTypeSetterList (), kENUMERATION_UP) ;
  while (enumerator_14483.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_14568 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 372)) ;
    cEnumerator_formalParameterListAST enumerator_14671 (enumerator_14483.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_14671.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_14814 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_14671.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_14814, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 374)) ;
      }
      var_routineSignature_14568.addAssign_operation (enumerator_14671.current_mFormalSelector (HERE), var_parameterTypeIndex_14814, enumerator_14671.current_mFormalArgumentPassingMode (HERE), enumerator_14671.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 378)) ;
      enumerator_14671.gotoNextObject () ;
    }
    {
    var_setterMap_12965.setter_insertKey (enumerator_14483.current_mSetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 383)), var_routineSignature_14568, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 386)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 381)) ;
    }
    enumerator_14483.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  cEnumerator_externTypeMethodList enumerator_15259 (temp_3.readProperty_mExternTypeMethodList (), kENUMERATION_UP) ;
  while (enumerator_15259.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_15318 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 392)) ;
    cEnumerator_formalParameterListAST enumerator_15447 (enumerator_15259.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_15447.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_15569 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_15447.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_15569, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 394)) ;
      }
      var_routineSignature_15318.addAssign_operation (enumerator_15447.current_mFormalSelector (HERE), var_parameterTypeIndex_15569, enumerator_15447.current_mFormalArgumentPassingMode (HERE), enumerator_15447.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 398)) ;
      enumerator_15447.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_13013.setter_insertKey (enumerator_15259.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 403)), var_routineSignature_15318, enumerator_15259.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 407)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 401)) ;
    }
    enumerator_15259.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  const GALGAS_externTypeDeclarationAST temp_6 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_16025 = GALGAS_unifiedTypeDefinition::constructor_new (temp_4.readProperty_mExternTypeName (), temp_5.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-extern.galgas", 416)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("type-extern.galgas", 417)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 419)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 420)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 421)), var_constructorMap_12933, var_getterMap_12894, var_setterMap_12965, var_instanceMethodMap_13013, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 426)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 427)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 428)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-extern.galgas", 429)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 430)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 431)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 432)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 433)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 434)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-extern.galgas", 436)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (temp_6.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-extern.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 438)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-extern.galgas", 439))  COMMA_SOURCE_FILE ("type-extern.galgas", 412)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_16025.readProperty_mTypeName (), var_typeDefinition_16025, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 441)) ;
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
  GALGAS_lstring var_nameForUsefulness_17568 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 458)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17568, var_nameForUsefulness_17568, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 459)) ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (temp_1.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 462)), GALGAS_externTypeDeclarationForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_2.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 464)), temp_3.readProperty_mExternTypeName ().readProperty_string (), temp_4.readProperty_mCppPreDeclarationCode (), temp_5.readProperty_mCppClassCode ()  COMMA_SOURCE_FILE ("type-extern.galgas", 463))  COMMA_SOURCE_FILE ("type-extern.galgas", 461)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_18758 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 486)) ;
  const GALGAS_externTypeDeclarationForGeneration temp_1 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_2 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, var_selfTypedefinition_18758.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 489)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode () COMMA_SOURCE_FILE ("type-extern.galgas", 487))) ;
  const GALGAS_externTypeDeclarationForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_18758.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 495)), var_selfTypedefinition_18758.readProperty_mIsConcrete (), var_selfTypedefinition_18758.readProperty_mConstructorMap (), var_selfTypedefinition_18758.readProperty_mGetterMap (), var_selfTypedefinition_18758.readProperty_mSetterMap (), var_selfTypedefinition_18758.readProperty_mInstanceMethodMap (), var_selfTypedefinition_18758.readProperty_mClassMethodMap (), var_selfTypedefinition_18758.readProperty_mOptionalMethodMap (), var_selfTypedefinition_18758.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_18758.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_18758.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_18758.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-extern.galgas", 493))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 493)) ;
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
  GALGAS_lstring var_key_3881 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 104)), temp_1.readProperty_mGraphTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 104)) ;
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3881, temp_2, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 105)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3881, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 106)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 106)) COMMA_SOURCE_FILE ("type-graph.galgas", 106)) ;
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
  GALGAS_unifiedTypeMapEntry var_stringTypeEntry_4945 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeEntry_4945, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 120)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringTypeEntry_5070 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstring"), var_lstringTypeEntry_5070, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 125)) ;
  }
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_5191 ;
  {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mGraphTypeName (), var_graphTypeEntry_5191, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 130)) ;
  }
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_5340 ;
  {
  const GALGAS_graphDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mAssociatedListTypeName (), var_associatedListTypeEntry_5340, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 135)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringListTypeEntry_5478 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeEntry_5478, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 140)) ;
  }
  GALGAS_getterMap var_getterMap_5555 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_5555, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 145)) ;
  }
  GALGAS_constructorMap var_constructorMap_5594 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 146)) ;
  GALGAS_setterMap var_setterMap_5626 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 147)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5674 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 148)) ;
  GALGAS_formalParameterSignature var_formalParameterList_5765 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 150)) ;
  var_formalParameterList_5765.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 152)), var_associatedListTypeEntry_5340, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 154)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 151)) ;
  var_formalParameterList_5765.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 157)), var_lstringListTypeEntry_5478, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 159)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 156)) ;
  var_formalParameterList_5765.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 162)), var_associatedListTypeEntry_5340, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 164)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 161)) ;
  var_formalParameterList_5765.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 167)), var_lstringListTypeEntry_5478, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 169)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 166)) ;
  {
  var_instanceMethodMap_5674.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 172))  COMMA_SOURCE_FILE ("type-graph.galgas", 172)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 173)), var_formalParameterList_5765, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 175)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 177)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 171)) ;
  }
  {
  var_instanceMethodMap_5674.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 181))  COMMA_SOURCE_FILE ("type-graph.galgas", 181)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 182)), var_formalParameterList_5765, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 184)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 186)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 180)) ;
  }
  var_formalParameterList_5765 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 191)) ;
  var_formalParameterList_5765.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 193)), var_associatedListTypeEntry_5340, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 195)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 192)) ;
  var_formalParameterList_5765.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 198)), var_lstringListTypeEntry_5478, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 200)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 197)) ;
  {
  var_instanceMethodMap_5674.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("circularities"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 203))  COMMA_SOURCE_FILE ("type-graph.galgas", 203)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 204)), var_formalParameterList_5765, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 206)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 208)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 202)) ;
  }
  {
  var_instanceMethodMap_5674.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 212))  COMMA_SOURCE_FILE ("type-graph.galgas", 212)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 213)), var_formalParameterList_5765, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 215)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 217)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 211)) ;
  }
  {
  var_instanceMethodMap_5674.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 221))  COMMA_SOURCE_FILE ("type-graph.galgas", 221)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 222)), var_formalParameterList_5765, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 224)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 226)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 220)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5555, ioArgument_ioTypeMap, GALGAS_string ("nodeList"), temp_2.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 231)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5555, ioArgument_ioTypeMap, GALGAS_string ("reversedGraph"), temp_3.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 239)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5555, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 247)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5555, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 255)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5555, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 263)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5555, ioArgument_ioTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 271)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_5555, ioArgument_ioTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 279)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_5555, ioArgument_ioTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 289)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5555, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 299)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5555, ioArgument_ioTypeMap, GALGAS_string ("lkeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 307)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5555, ioArgument_ioTypeMap, GALGAS_string ("edges"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 315)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_5555, ioArgument_ioTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), temp_4.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 323)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_5555, ioArgument_ioTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 337)) ;
  }
  {
  var_constructorMap_5594.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 348))  COMMA_SOURCE_FILE ("type-graph.galgas", 348)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 349)), GALGAS_bool (false), var_graphTypeEntry_5191, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 347)) ;
  }
  var_formalParameterList_5765 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 354)) ;
  var_formalParameterList_5765.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 356)), var_lstringTypeEntry_5070, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 358)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 355)) ;
  cEnumerator_functionSignature enumerator_11953 (extensionGetter_definition (var_associatedListTypeEntry_5340, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 360)).readProperty_mAddAssignOperatorArguments (), kENUMERATION_UP) ;
  while (enumerator_11953.hasCurrentObject ()) {
    var_formalParameterList_5765.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 362)), enumerator_11953.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 364)), enumerator_11953.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 361)) ;
    enumerator_11953.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_5 = this ;
  cEnumerator_graphInsertModifierList enumerator_12209 (temp_5.readProperty_mInsertModifierList (), kENUMERATION_UP) ;
  while (enumerator_12209.hasCurrentObject ()) {
    {
    var_setterMap_5626.setter_insertOrReplace (enumerator_12209.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 370)), var_formalParameterList_5765, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 373)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 368)) ;
    }
    enumerator_12209.gotoNextObject () ;
  }
  {
  var_setterMap_5626.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 380))  COMMA_SOURCE_FILE ("type-graph.galgas", 380)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 381)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 382)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 384)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 379)) ;
  }
  var_formalParameterList_5765 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 388)) ;
  var_formalParameterList_5765.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 389)), var_stringTypeEntry_4945, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 389)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 389)) ;
  {
  var_setterMap_5626.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 391))  COMMA_SOURCE_FILE ("type-graph.galgas", 391)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 392)), var_formalParameterList_5765, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 395)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 390)) ;
  }
  var_formalParameterList_5765 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 400)) ;
  var_formalParameterList_5765.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 401)), var_lstringTypeEntry_5070, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 401)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 401)) ;
  var_formalParameterList_5765.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 402)), var_lstringTypeEntry_5070, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 402)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 402)) ;
  {
  var_setterMap_5626.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 404))  COMMA_SOURCE_FILE ("type-graph.galgas", 404)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 405)), var_formalParameterList_5765, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 408)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 403)) ;
  }
  var_formalParameterList_5765 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 413)) ;
  var_formalParameterList_5765.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 414)), var_lstringTypeEntry_5070, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 414)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 414)) ;
  {
  var_setterMap_5626.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 416))  COMMA_SOURCE_FILE ("type-graph.galgas", 416)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 417)), var_formalParameterList_5765, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 420)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 415)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_6 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_6.readProperty_mGraphTypeName (), GALGAS_bool (false), var_getterMap_5555, var_setterMap_5626, var_instanceMethodMap_5674, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 425)) ;
  }
  const GALGAS_graphDeclarationAST temp_7 = this ;
  const GALGAS_graphDeclarationAST temp_8 = this ;
  const GALGAS_graphDeclarationAST temp_9 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_14635 = GALGAS_unifiedTypeDefinition::constructor_new (temp_7.readProperty_mGraphTypeName (), temp_8.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-graph.galgas", 443)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("type-graph.galgas", 444)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 446)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 447)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 448)), var_constructorMap_5594, var_getterMap_5555, var_setterMap_5626, var_instanceMethodMap_5674, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 453)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 454)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 455)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-graph.galgas", 456)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 457)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 458)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 459)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 460)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 461)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-graph.galgas", 463)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (temp_9.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-graph.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 465)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-graph.galgas", 466))  COMMA_SOURCE_FILE ("type-graph.galgas", 439)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14635.readProperty_mTypeName (), var_typeDefinition_14635, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 468)) ;
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
  GALGAS_lstring var_nameForUsefulness_16304 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 485)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16304, var_nameForUsefulness_16304, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 486)) ;
  }
  const GALGAS_graphDeclarationAST temp_1 = this ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_16472 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 487)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16304, var_associatedTypeNameForUsefulness_16472 COMMA_SOURCE_FILE ("type-graph.galgas", 488)) ;
  }
  const GALGAS_graphDeclarationAST temp_2 = this ;
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_16651 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_2.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 490)) ;
  const GALGAS_graphDeclarationAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_16726 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_3.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 491)) ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  const GALGAS_graphDeclarationAST temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListElementTypeEntry_16817 = extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_4.readProperty_mAssociatedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 493)), temp_5.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 492)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_associatedListTypeEntry_16726, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 495)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-graph.galgas", 495)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_graphDeclarationAST temp_7 = this ;
      const GALGAS_graphDeclarationAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_8.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 496)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 496)), fixItArray9  COMMA_SOURCE_FILE ("type-graph.galgas", 496)) ;
    }
  }
  GALGAS_stringset temp_10 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-graph.galgas", 499)) ;
  temp_10.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("type-graph.galgas", 499)) ;
  temp_10.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("type-graph.galgas", 499)) ;
  GALGAS_stringset var_reservedModifierNames_17235 = temp_10 ;
  const GALGAS_graphDeclarationAST temp_11 = this ;
  cEnumerator_graphInsertModifierList enumerator_17309 (temp_11.readProperty_mInsertModifierList (), kENUMERATION_UP) ;
  while (enumerator_17309.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_reservedModifierNames_17235.getter_hasKey (enumerator_17309.current_mInsertModifierName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-graph.galgas", 501)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_17309.current_mInsertModifierName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17309.current_mInsertModifierName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 502)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 502)), fixItArray13  COMMA_SOURCE_FILE ("type-graph.galgas", 502)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_17309.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 504)) ;
    }
    enumerator_17309.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_14 = this ;
  const GALGAS_graphDeclarationAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (temp_14.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 508)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeEntry_16651, var_associatedListTypeEntry_16726, var_associatedListElementTypeEntry_16817, temp_15.readProperty_mInsertModifierList ()  COMMA_SOURCE_FILE ("type-graph.galgas", 509))  COMMA_SOURCE_FILE ("type-graph.galgas", 507)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_18669 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 532)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, var_selfTypedefinition_18669.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 535)) COMMA_SOURCE_FILE ("type-graph.galgas", 533))) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_18669.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 539)), var_selfTypedefinition_18669.readProperty_mIsConcrete (), var_selfTypedefinition_18669.readProperty_mConstructorMap (), var_selfTypedefinition_18669.readProperty_mGetterMap (), var_selfTypedefinition_18669.readProperty_mSetterMap (), var_selfTypedefinition_18669.readProperty_mInstanceMethodMap (), var_selfTypedefinition_18669.readProperty_mClassMethodMap (), var_selfTypedefinition_18669.readProperty_mOptionalMethodMap (), var_selfTypedefinition_18669.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_18669.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_18669.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_18669.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-graph.galgas", 537))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 537)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 560)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 561)) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedListElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 562)) ;
  const GALGAS_graphDeclarationForGeneration temp_3 = this ;
  const GALGAS_graphDeclarationForGeneration temp_4 = this ;
  const GALGAS_graphDeclarationForGeneration temp_5 = this ;
  const GALGAS_graphDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 565)), temp_5.readProperty_mAssociatedListTypeEntry (), temp_6.readProperty_mInsertModifierList () COMMA_SOURCE_FILE ("type-graph.galgas", 563))) ;
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
  GALGAS_lstring var_key_3226 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 82)), temp_1.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 82)) ;
  {
  const GALGAS_listDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3226, temp_2, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 83)) ;
  }
  const GALGAS_listDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_3382 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_3382.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3382.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 85)), enumerator_3382.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 85)) COMMA_SOURCE_FILE ("type-list.galgas", 85)) ;
    }
    enumerator_3382.gotoNextObject () ;
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
  GALGAS_typedPropertyList var_typedAttributeList_4279 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 101)) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_4375 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_4375.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_4375.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-list.galgas", 103)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4375.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a list"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 104)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_4594 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_4375.current_mPropertyTypeName (HERE), var_attributeTypeIndex_4594, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 106)) ;
    }
    GALGAS_bool var_hasSelector_4615 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_4639 (enumerator_4375.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_4639.hasCurrentObject ()) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, enumerator_4639.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticWarning (enumerator_4639.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%setter' is obsolete and has no effect"), fixItArray4  COMMA_SOURCE_FILE ("type-list.galgas", 110)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (kIsEqual, enumerator_4639.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticWarning (enumerator_4639.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%nogetter' is obsolete and has no effect"), fixItArray6  COMMA_SOURCE_FILE ("type-list.galgas", 112)) ;
          }
        }
        if (kBoolFalse == test_5) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsEqual, enumerator_4639.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_7) {
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = var_hasSelector_4615.boolEnum () ;
                if (kBoolTrue == test_8) {
                  TC_Array <C_FixItDescription> fixItArray9 ;
                  inCompiler->emitSemanticError (enumerator_4639.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '%selector' attribute is already named"), fixItArray9  COMMA_SOURCE_FILE ("type-list.galgas", 115)) ;
                }
              }
              var_hasSelector_4615 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            GALGAS_stringlist temp_11 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 121)) ;
            temp_11.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 121)) ;
            appendFixItActions (fixItArray10, kFixItReplace, temp_11) ;
            inCompiler->emitSemanticError (enumerator_4639.current_mValue (HERE).readProperty_location (), GALGAS_string ("only '%selector' attribute is allowed here"), fixItArray10  COMMA_SOURCE_FILE ("type-list.galgas", 119)) ;
          }
        }
      }
      enumerator_4639.gotoNextObject () ;
    }
    var_typedAttributeList_4279.addAssign_operation (var_attributeTypeIndex_4594, enumerator_4375.current_mPropertyName (HERE), GALGAS_bool (true), var_hasSelector_4615  COMMA_SOURCE_FILE ("type-list.galgas", 124)) ;
    enumerator_4375.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_uintType_5385 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("uint"), var_uintType_5385, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 127)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listTypeIndex_5472 ;
  {
  const GALGAS_listDeclarationAST temp_12 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_12.readProperty_mListTypeName (), var_listTypeIndex_5472, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 129)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_5676 ;
  {
  const GALGAS_listDeclarationAST temp_13 = this ;
  const GALGAS_listDeclarationAST temp_14 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_13.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 132)), temp_14.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 132)), var_listElementTypeIndex_5676, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 131)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5761 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 136)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_5820 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 137)) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_5888 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 138)) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_5955 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 139)) ;
  cEnumerator_typedPropertyList enumerator_6024 (var_typedAttributeList_4279, kENUMERATION_UP) ;
  while (enumerator_6024.hasCurrentObject ()) {
    GALGAS_string temp_15 ;
    const enumGalgasBool test_16 = enumerator_6024.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = enumerator_6024.current_mPropertyName (HERE).readProperty_string () ;
    }else if (kBoolFalse == test_16) {
      temp_15 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_selector_6067 = temp_15 ;
    var_enumerationDescriptor_5761.addAssign_operation (enumerator_6024.current_mPropertyTypeEntry (HERE), enumerator_6024.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 142)) ;
    var_constructorAttributeTypeList_5820.addAssign_operation (var_selector_6067.getter_nowhere (SOURCE_FILE ("type-list.galgas", 144)), enumerator_6024.current_mPropertyTypeEntry (HERE), enumerator_6024.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 143)) ;
    var_setterOutputFormalArgumentList_5888.addAssign_operation (var_selector_6067.getter_nowhere (SOURCE_FILE ("type-list.galgas", 148)), enumerator_6024.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-list.galgas", 150)), enumerator_6024.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 147)) ;
    var_setterInputFormalArgumentList_5955.addAssign_operation (var_selector_6067.getter_nowhere (SOURCE_FILE ("type-list.galgas", 153)), enumerator_6024.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 155)), enumerator_6024.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 152)) ;
    enumerator_6024.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_6653 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 159)) ;
  {
  const GALGAS_listDeclarationAST temp_17 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_6653, ioArgument_ioTypeMap, GALGAS_string ("emptyList"), temp_17.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 160)) ;
  }
  {
  var_constructorMap_6653.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 168))  COMMA_SOURCE_FILE ("type-list.galgas", 168)), var_constructorAttributeTypeList_5820, GALGAS_bool (false), var_listTypeIndex_5472, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 167)) ;
  }
  GALGAS_getterMap var_getterMap_7061 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_7061, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 174)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_7061, ioArgument_ioTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 175)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_7061, ioArgument_ioTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 182)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_18 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_7061, ioArgument_ioTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_18.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 189)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_19 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_7061, ioArgument_ioTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_19.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 197)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_20 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_7061, ioArgument_ioTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_string ("inRange"), temp_20.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 205)) ;
  }
  cEnumerator_typedPropertyList enumerator_8093 (var_typedAttributeList_4279, kENUMERATION_UP) ;
  while (enumerator_8093.hasCurrentObject ()) {
    {
    GALGAS_functionSignature temp_21 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 217)) ;
    temp_21.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 217)), var_uintType_5385, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 217)) ;
    var_getterMap_7061.setter_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_8093.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 215)), enumerator_8093.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 215)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 216)), temp_21, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 218)), GALGAS_bool (true), enumerator_8093.current_mPropertyTypeEntry (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 221)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 214)) ;
    }
    enumerator_8093.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_8550 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 226)) ;
  {
  var_instanceMethodMap_8550.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 228))  COMMA_SOURCE_FILE ("type-list.galgas", 228)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 229)), var_setterOutputFormalArgumentList_5888, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 231)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 233)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 227)) ;
  }
  {
  var_instanceMethodMap_8550.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 237))  COMMA_SOURCE_FILE ("type-list.galgas", 237)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 238)), var_setterOutputFormalArgumentList_5888, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 240)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 242)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 236)) ;
  }
  GALGAS_setterMap var_setterMap_9072 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 246)) ;
  {
  GALGAS_formalParameterSignature temp_22 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 250)) ;
  temp_22.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 250)), var_listElementTypeIndex_5676, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-list.galgas", 250)), GALGAS_string ("inElement")  COMMA_SOURCE_FILE ("type-list.galgas", 250)) ;
  var_setterMap_9072.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("append"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 248))  COMMA_SOURCE_FILE ("type-list.galgas", 248)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 249)), temp_22, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 252)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 247)) ;
  }
  {
  var_setterMap_9072.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 256))  COMMA_SOURCE_FILE ("type-list.galgas", 256)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 257)), var_setterOutputFormalArgumentList_5888, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 260)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 255)) ;
  }
  {
  var_setterMap_9072.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 264))  COMMA_SOURCE_FILE ("type-list.galgas", 264)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 265)), var_setterOutputFormalArgumentList_5888, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 268)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 263)) ;
  }
  var_setterOutputFormalArgumentList_5888.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 271)), var_uintType_5385, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 271)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 271)) ;
  {
  var_setterMap_9072.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 273))  COMMA_SOURCE_FILE ("type-list.galgas", 273)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 274)), var_setterOutputFormalArgumentList_5888, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 277)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 272)) ;
  }
  cEnumerator_typedPropertyList enumerator_10115 (var_typedAttributeList_4279, kENUMERATION_UP) ;
  while (enumerator_10115.hasCurrentObject ()) {
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      test_23 = enumerator_10115.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_23) {
        GALGAS_formalParameterSignature var_setterFormalArgumentList_10199 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 282)) ;
        var_setterFormalArgumentList_10199.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 283)), enumerator_10115.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 283)), enumerator_10115.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 283)) ;
        var_setterFormalArgumentList_10199.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 284)), var_uintType_5385, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 284)), enumerator_10115.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 284)) ;
        {
        var_setterMap_9072.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_10115.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 286)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 286)), enumerator_10115.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 286)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 287)), var_setterFormalArgumentList_10199, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 290)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 285)) ;
        }
      }
    }
    enumerator_10115.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_5955.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 296)), var_uintType_5385, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 296)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 296)) ;
  {
  var_setterMap_9072.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 298))  COMMA_SOURCE_FILE ("type-list.galgas", 298)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 299)), var_setterInputFormalArgumentList_5955, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 302)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 297)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_24 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_24.readProperty_mListTypeName (), GALGAS_bool (false), var_getterMap_7061, var_setterMap_9072, var_instanceMethodMap_8550, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 306)) ;
  }
  const GALGAS_listDeclarationAST temp_25 = this ;
  const GALGAS_listDeclarationAST temp_26 = this ;
  const GALGAS_listDeclarationAST temp_27 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_11597 = GALGAS_unifiedTypeDefinition::constructor_new (temp_25.readProperty_mListTypeName (), temp_26.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-list.galgas", 324)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-list.galgas", 325)), GALGAS_bool (true), var_typedAttributeList_4279, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 328)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 329)), var_constructorMap_6653, var_getterMap_7061, var_setterMap_9072, var_instanceMethodMap_8550, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 334)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 335)), var_enumerationDescriptor_5761, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-list.galgas", 337)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-list.galgas", 337)) COMMA_SOURCE_FILE ("type-list.galgas", 337)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("type-list.galgas", 337)) COMMA_SOURCE_FILE ("type-list.galgas", 337)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-list.galgas", 337)) COMMA_SOURCE_FILE ("type-list.galgas", 337)), var_constructorAttributeTypeList_5820, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 339)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 340)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 341)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 342)), GALGAS_bool (false), var_listElementTypeIndex_5676, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (temp_27.readProperty_mListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-list.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 346)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-list.galgas", 347))  COMMA_SOURCE_FILE ("type-list.galgas", 320)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_11597.readProperty_mTypeName (), var_typeDefinition_11597, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 349)) ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_12819 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 357)) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_12892 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12892.hasCurrentObject ()) {
    var_structAttributeList_12819.addAssign_operation (enumerator_12892.current_isConstant (HERE), enumerator_12892.current_mPropertyTypeName (HERE), enumerator_12892.current_mPropertyName (HERE), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-list.galgas", 363)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 364)), enumerator_12892.current_mInitialization (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 359)) ;
    enumerator_12892.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  const GALGAS_listDeclarationAST temp_2 = this ;
  const GALGAS_listDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 369)), temp_3.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 369)), var_structAttributeList_12819, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 367))  COMMA_SOURCE_FILE ("type-list.galgas", 367)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_14070 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 390)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14070, var_nameForUsefulness_14070, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 391)) ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  const GALGAS_listDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_14234 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 392)), temp_2.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 392)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14070, var_elementTypeNameForUsefulness_14234 COMMA_SOURCE_FILE ("type-list.galgas", 393)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_14470 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 395)) ;
  GALGAS_propertyIndexMap var_attributeMap_14512 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 396)) ;
  const GALGAS_listDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_14606 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_14606.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = enumerator_14606.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-list.galgas", 398)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_14606.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a list"), fixItArray5  COMMA_SOURCE_FILE ("type-list.galgas", 399)) ;
      }
    }
    GALGAS_lstring var_propertyTypeNameForUsefulness_14793 = function_typeNameForUsefulEntitiesGraph (enumerator_14606.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 401)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14070, var_propertyTypeNameForUsefulness_14793 COMMA_SOURCE_FILE ("type-list.galgas", 402)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_14944 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_14606.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 403)) ;
    GALGAS_bool var_hasSelector_15006 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_15030 (enumerator_14606.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_15030.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsEqual, enumerator_15030.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (enumerator_15030.current_mValue (HERE).readProperty_location (), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 407)) ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsEqual, enumerator_15030.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticWarning (enumerator_15030.current_mValue (HERE).readProperty_location (), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray9  COMMA_SOURCE_FILE ("type-list.galgas", 409)) ;
          }
        }
        if (kBoolFalse == test_8) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsEqual, enumerator_15030.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_10) {
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = var_hasSelector_15006.boolEnum () ;
                if (kBoolTrue == test_11) {
                  TC_Array <C_FixItDescription> fixItArray12 ;
                  inCompiler->emitSemanticError (enumerator_15030.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '%selector' attribute is already named"), fixItArray12  COMMA_SOURCE_FILE ("type-list.galgas", 412)) ;
                }
              }
              var_hasSelector_15006 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_10) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            GALGAS_stringlist temp_14 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 418)) ;
            temp_14.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 418)) ;
            appendFixItActions (fixItArray13, kFixItReplace, temp_14) ;
            inCompiler->emitSemanticError (enumerator_15030.current_mValue (HERE).readProperty_location (), GALGAS_string ("only '%selector' attribut is allowed here"), fixItArray13  COMMA_SOURCE_FILE ("type-list.galgas", 416)) ;
          }
        }
      }
      enumerator_15030.gotoNextObject () ;
    }
    var_typedAttributeList_14470.addAssign_operation (var_t_14944, enumerator_14606.current_mPropertyName (HERE), GALGAS_bool (true), var_hasSelector_15006  COMMA_SOURCE_FILE ("type-list.galgas", 421)) ;
    {
    var_attributeMap_14512.setter_insertKey (enumerator_14606.current_mPropertyName (HERE), var_t_14944, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 426)) ;
    }
    enumerator_14606.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_15 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_15822 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_15.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 429)) ;
  const GALGAS_listDeclarationAST temp_16 = this ;
  const GALGAS_listDeclarationAST temp_17 = this ;
  const GALGAS_listDeclarationAST temp_18 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (temp_16.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 431)), GALGAS_listTypeForGeneration::constructor_new (var_selfType_15822, extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_17.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 434)), temp_18.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 434)), var_typedAttributeList_14470  COMMA_SOURCE_FILE ("type-list.galgas", 432))  COMMA_SOURCE_FILE ("type-list.galgas", 430)) ;
}
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
  GALGAS_uint index_843_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_843 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_843.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const class GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_843.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_843.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      index_843_.increment () ;
      enumerator_843.gotoNextObject () ;
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
  GALGAS_uint index_579_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_579 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_579.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_579.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      result << " & in_" ;
      result << enumerator_579.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      if (enumerator_579.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_579_.increment () ;
      enumerator_579.gotoNextObject () ;
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
  GALGAS_uint index_1621_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1621 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1621.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_1621.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1621.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      if (enumerator_1621.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1621_.increment () ;
      enumerator_1621.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (" ;
  GALGAS_uint index_1874_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1874 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1874.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_1874.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 45)).stringValue () ;
      if (enumerator_1874.hasNextObject ()) {
        result << ", " ;
      }
      index_1874_.increment () ;
      enumerator_1874.gotoNextObject () ;
    }
  }
  result << ") {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inElement COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (" ;
  GALGAS_uint index_2309_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2309 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2309.hasCurrentObject ()) {
      result << "inElement.mProperty_" ;
      result << enumerator_2309.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 57)).stringValue () ;
      if (enumerator_2309.hasNextObject ()) {
        result << ", " ;
      }
      index_2309_.increment () ;
      enumerator_2309.gotoNextObject () ;
    }
  }
  result << ") {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nbool cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n  return true ; // return mObject.isValid () ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncCollectionElement * cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n  cCollectionElement * result = NULL ;\n  macroMyNew (result, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_3008_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3008 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3008.hasCurrentObject ()) {
      result << "mObject.mProperty_" ;
      result << enumerator_3008.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 75)).stringValue () ;
      if (enumerator_3008.hasNextObject ()) {
        result << ", " ;
      }
      index_3008_.increment () ;
      enumerator_3008.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
  GALGAS_uint index_3439_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3439 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3439.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n  ioString.writeStringMultiple (\"| \", inIndentation) ;\n  ioString << " ;
      result << enumerator_3439.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 89)).stringValue () ;
      result << " \":\" ;\n  mObject.mProperty_" ;
      result << enumerator_3439.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 90)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_3439_.increment () ;
      enumerator_3439.gotoNextObject () ;
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
  result << "  (capCollectionElementArray ()) ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_listWithValue (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5253_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5253 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5253.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_5253.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      result << " & inOperand" ;
      result << index_5253_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      if (enumerator_5253.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5253_IDX.increment () ;
      enumerator_5253.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n  if (" ;
  GALGAS_uint index_5514_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5514 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5514.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_5514_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 131)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_5514.hasNextObject ()) {
        result << " && " ;
      }
      index_5514_IDX.increment () ;
      enumerator_5514.gotoNextObject () ;
    }
  }
  result << ") {\n    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (capCollectionElementArray ()) ;\n    capCollectionElement attributes ;\n    GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (attributes" ;
  GALGAS_uint index_5838_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5838 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5838.hasCurrentObject ()) {
      result << ", inOperand" ;
      result << index_5838_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 139)).stringValue () ;
      index_5838_IDX.increment () ;
      enumerator_5838.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n    result.appendObject (attributes) ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_6250_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6250 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6250.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_6250.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      result << " & in_" ;
      result << enumerator_6250.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      index_6250_.increment () ;
      enumerator_6250.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n  macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6584_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6584 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6584.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_6584.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 158)).stringValue () ;
      if (enumerator_6584.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6584_.increment () ;
      enumerator_6584.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n  outAttributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6994_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6994 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6994.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_6994.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      result << " & inOperand" ;
      result << index_6994_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      if (enumerator_6994.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6994_IDX.increment () ;
      enumerator_6994.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    if (" ;
  GALGAS_uint index_7240_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7240 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7240.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7240_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 177)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_7240.hasNextObject ()) {
        result << " && " ;
      }
      index_7240_IDX.increment () ;
      enumerator_7240.gotoNextObject () ;
    }
  }
  result << ") {\n      cCollectionElement * p = NULL ;\n      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_7488_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7488 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7488.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7488_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 184)).stringValue () ;
      if (enumerator_7488.hasNextObject ()) {
        result << ", " ;
      }
      index_7488_IDX.increment () ;
      enumerator_7488.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n      capCollectionElement attributes ;\n      attributes.setPointer (p) ;\n      macroDetachSharedObject (p) ;\n      appendObject (attributes) ;\n    }else{ // Destroy receiver\n      drop () ;\n    }\n  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_append (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inElement,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    if (inElement.isValid ()) {\n      cCollectionElement * p = NULL ;\n      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inElement COMMA_THERE)) ;\n      capCollectionElement attributes ;\n      attributes.setPointer (p) ;\n      macroDetachSharedObject (p) ;\n      appendObject (attributes) ;\n    }else{\n      drop () ;\n    }\n  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_insertAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8669_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8669 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8669.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_8669.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 221)).stringValue () ;
      result << " inOperand" ;
      result << index_8669_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 221)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8669_IDX.increment () ;
      enumerator_8669.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inInsertionIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    if (inInsertionIndex.isValid ()" ;
  GALGAS_uint index_9006_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9006 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9006.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_9006_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 229)).stringValue () ;
      result << ".isValid ()" ;
      index_9006_IDX.increment () ;
      enumerator_9006.gotoNextObject () ;
    }
  }
  result << ") {\n      cCollectionElement * p = NULL ;\n      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_9241_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9241 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9241.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_9241_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 235)).stringValue () ;
      if (enumerator_9241.hasNextObject ()) {
        result << ", " ;
      }
      index_9241_IDX.increment () ;
      enumerator_9241.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n      capCollectionElement attributes ;\n      attributes.setPointer (p) ;\n      macroDetachSharedObject (p) ;\n      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;\n    }else{\n      drop () ;\n    }\n  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_removeAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9815_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9815 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9815.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_9815.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 253)).stringValue () ;
      result << " & outOperand" ;
      result << index_9815_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 253)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9815_IDX.increment () ;
      enumerator_9815.gotoNextObject () ;
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
  result << " *) attributes.ptr () ;\n      if (NULL == p) {\n" ;
  GALGAS_uint index_10412_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10412 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10412.hasCurrentObject ()) {
      result << "        outOperand" ;
      result << index_10412_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 266)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10412_IDX.increment () ;
      enumerator_10412.gotoNextObject () ;
    }
  }
  result << "        drop () ;\n      }else{\n        macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_10650_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10650 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10650.hasCurrentObject ()) {
      result << "        outOperand" ;
      result << index_10650_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 273)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_10650.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 273)).stringValue () ;
      result << " ;\n" ;
      index_10650_IDX.increment () ;
      enumerator_10650.gotoNextObject () ;
    }
  }
  result << "      }\n    }else{\n" ;
  GALGAS_uint index_10858_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10858 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10858.hasCurrentObject ()) {
      result << "      outOperand" ;
      result << index_10858_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 279)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10858_IDX.increment () ;
      enumerator_10858.gotoNextObject () ;
    }
  }
  result << "      drop () ;    \n    }\n  }else{\n" ;
  GALGAS_uint index_11022_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11022 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11022.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11022_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 286)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11022_IDX.increment () ;
      enumerator_11022.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popFirst (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11332_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11332 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11332.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_11332.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 295)).stringValue () ;
      result << " & outOperand" ;
      result << index_11332_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 295)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11332_IDX.increment () ;
      enumerator_11332.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  removeFirstObject (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (NULL == p) {\n" ;
  GALGAS_uint index_11778_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11778 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11778.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11778_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 305)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11778_IDX.increment () ;
      enumerator_11778.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_11986_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11986 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11986.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11986_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 311)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_11986.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 311)).stringValue () ;
      result << " ;\n" ;
      index_11986_IDX.increment () ;
      enumerator_11986.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popLast (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12353_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12353 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12353.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_12353.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 320)).stringValue () ;
      result << " & outOperand" ;
      result << index_12353_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 320)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_12353_IDX.increment () ;
      enumerator_12353.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  removeLastObject (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (NULL == p) {\n" ;
  GALGAS_uint index_12798_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12798 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12798.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12798_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 330)).stringValue () ;
      result << ".drop () ;\n" ;
      index_12798_IDX.increment () ;
      enumerator_12798.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_13006_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13006 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13006.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13006_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 336)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_13006.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 336)).stringValue () ;
      result << " ;\n" ;
      index_13006_IDX.increment () ;
      enumerator_13006.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_first (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_13371_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13371 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13371.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_13371.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 345)).stringValue () ;
      result << " & outOperand" ;
      result << index_13371_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 345)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_13371_IDX.increment () ;
      enumerator_13371.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes ;\n  readFirst (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (NULL == p) {\n" ;
  GALGAS_uint index_13815_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13815 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13815.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13815_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 355)).stringValue () ;
      result << ".drop () ;\n" ;
      index_13815_IDX.increment () ;
      enumerator_13815.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_14023_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14023 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14023.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_14023_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 361)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_14023.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 361)).stringValue () ;
      result << " ;\n" ;
      index_14023_IDX.increment () ;
      enumerator_14023.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_last (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_14387_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14387 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14387.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_14387.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue () ;
      result << " & outOperand" ;
      result << index_14387_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_14387_IDX.increment () ;
      enumerator_14387.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes ;\n  readLast (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (NULL == p) {\n" ;
  GALGAS_uint index_14830_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14830 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14830.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_14830_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 380)).stringValue () ;
      result << ".drop () ;\n" ;
      index_14830_IDX.increment () ;
      enumerator_14830.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_15038_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15038 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15038.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_15038_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 386)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_15038.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 386)).stringValue () ;
      result << " ;\n" ;
      index_15038_IDX.increment () ;
      enumerator_15038.gotoNextObject () ;
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
  GALGAS_uint index_17875_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17875 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17875.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_17875.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_17875.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).stringValue () ;
        result << "AtIndex (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_17875.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).stringValue () ;
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
        result << " *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;\n  if (NULL != p) {\n    macroValidSharedObject (p, cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n    macroUniqueSharedObject (p) ;\n    p->mObject.mProperty_" ;
        result << enumerator_17875.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 454)).stringValue () ;
        result << " = inOperand ;\n  }\n}\n\n" ;
      }else if (kBoolFalse == test_0) {
      }
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_17875.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 460)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_17875.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 460)).stringValue () ;
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
      result << extensionGetter_identifierRepresentation (enumerator_17875.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 465)).stringValue () ;
      result << " result ;\n  if (NULL != p) {\n    macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n    result = p->mObject.mProperty_" ;
      result << enumerator_17875.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 468)).stringValue () ;
      result << " ;\n  }\n  return result ;\n}\n\n" ;
      index_17875_IDX.increment () ;
      enumerator_17875.gotoNextObject () ;
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
  GALGAS_uint index_20811_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20811 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20811.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_20811.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 494)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_20811.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 494)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n  const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n  return p->mObject.mProperty_" ;
      result << enumerator_20811.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 497)).stringValue () ;
      result << " ;\n}\n\n" ;
      index_20811_IDX.increment () ;
      enumerator_20811.gotoNextObject () ;
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
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_17448 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 471)) ;
  const GALGAS_listTypeForGeneration temp_1 = this ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, var_selfTypedefinition_17448.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 474)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-list.galgas", 472))) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_17448.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 479)), var_selfTypedefinition_17448.readProperty_mIsConcrete (), var_selfTypedefinition_17448.readProperty_mConstructorMap (), var_selfTypedefinition_17448.readProperty_mGetterMap (), var_selfTypedefinition_17448.readProperty_mSetterMap (), var_selfTypedefinition_17448.readProperty_mInstanceMethodMap (), var_selfTypedefinition_17448.readProperty_mClassMethodMap (), var_selfTypedefinition_17448.readProperty_mOptionalMethodMap (), var_selfTypedefinition_17448.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_17448.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_17448.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_17448.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-list.galgas", 477))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 477)) ;
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
  cEnumerator_typedPropertyList enumerator_18735 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_18735.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18735.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 501)) ;
    enumerator_18735.gotoNextObject () ;
  }
  const GALGAS_listTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 503)) ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 504)) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_18966 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 505)) ;
  const GALGAS_listTypeForGeneration temp_4 = this ;
  const GALGAS_listTypeForGeneration temp_5 = this ;
  const GALGAS_listTypeForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, var_selfTypedefinition_18966.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 508)), temp_5.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (extensionGetter_definition (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 510)).readProperty_mTypeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 510)) COMMA_SOURCE_FILE ("type-list.galgas", 506))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_2620 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 63)) ;
  var_structAttributeList_2620.addAssign_operation (GALGAS_bool (false), GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 66)), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 67)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-listmap.galgas", 68)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 69)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-listmap.galgas", 70))  COMMA_SOURCE_FILE ("type-listmap.galgas", 64)) ;
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  var_structAttributeList_2620.addAssign_operation (GALGAS_bool (false), temp_0.readProperty_mAssociatedListTypeName (), GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 74)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-listmap.galgas", 75)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 76)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-listmap.galgas", 77))  COMMA_SOURCE_FILE ("type-listmap.galgas", 71)) ;
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 81)), temp_3.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 81)), var_structAttributeList_2620, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 79))  COMMA_SOURCE_FILE ("type-listmap.galgas", 79)) ;
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
  GALGAS_lstring var_key_3929 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 97)), temp_1.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 97)) ;
  {
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3929, temp_2, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 98)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  const GALGAS_listmapDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3929, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 99)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 99)) COMMA_SOURCE_FILE ("type-listmap.galgas", 99)) ;
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
  GALGAS_unifiedTypeDefinition var_associatedTypeDefinition_5016 ;
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioTypeMap, temp_0.readProperty_mAssociatedListTypeName (), var_associatedTypeDefinition_5016, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 113)) ;
  GALGAS_typedPropertyList var_listTypedAttributeList_5065 = var_associatedTypeDefinition_5016.readProperty_mAllTypedPropertyList () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_associatedTypeDefinition_5016.readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 123)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_listmapDeclarationAST temp_2 = this ;
      const GALGAS_listmapDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 124)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 124)), fixItArray4  COMMA_SOURCE_FILE ("type-listmap.galgas", 124)) ;
      var_listTypedAttributeList_5065 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 125)) ;
    }
  }
  GALGAS_constructorMap var_constructorMap_5582 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 128)) ;
  GALGAS_getterMap var_getterMap_5654 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_5654, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 129)) ;
  }
  GALGAS_setterMap var_setterMap_5683 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 130)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5731 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 131)) ;
  GALGAS_unifiedTypeMapEntry var_associatedListTypeIndex_5852 ;
  {
  const GALGAS_listmapDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_5.readProperty_mAssociatedListTypeName (), var_associatedListTypeIndex_5852, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 133)) ;
  }
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_5947 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeIndex_5947, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 135)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5654, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 137)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5654, ioArgument_ioTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 144)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5654, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 151)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_6 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_5654, ioArgument_ioTypeMap, GALGAS_string ("listForKey"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inKey"), temp_6.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 158)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_7 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_5582, ioArgument_ioTypeMap, GALGAS_string ("emptyMap"), temp_7.readProperty_mListmapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 167)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor_6929 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 175)) ;
  var_enumeratorDescriptor_6929.addAssign_operation (var_stringTypeIndex_5947, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 176)) ;
  var_enumeratorDescriptor_6929.addAssign_operation (var_associatedListTypeIndex_5852, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 177)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription_7143 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 179)) ;
  var_addAssignOperatorDescription_7143.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 180)), var_stringTypeIndex_5947, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 180)) ;
  cEnumerator_typedPropertyList enumerator_7284 (var_listTypedAttributeList_5065, kENUMERATION_UP) ;
  while (enumerator_7284.hasCurrentObject ()) {
    var_addAssignOperatorDescription_7143.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 182)), enumerator_7284.current_mPropertyTypeEntry (HERE), enumerator_7284.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 182)) ;
    enumerator_7284.gotoNextObject () ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_8 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mListmapTypeName (), GALGAS_bool (false), var_getterMap_5654, var_setterMap_5683, var_instanceMethodMap_5731, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 185)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_7963 ;
  {
  const GALGAS_listmapDeclarationAST temp_9 = this ;
  const GALGAS_listmapDeclarationAST temp_10 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_9.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 200)), temp_10.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 200)), var_listElementTypeIndex_7963, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 199)) ;
  }
  const GALGAS_listmapDeclarationAST temp_11 = this ;
  const GALGAS_listmapDeclarationAST temp_12 = this ;
  const GALGAS_listmapDeclarationAST temp_13 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_8016 = GALGAS_unifiedTypeDefinition::constructor_new (temp_11.readProperty_mListmapTypeName (), temp_12.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-listmap.galgas", 208)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("type-listmap.galgas", 209)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 211)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 212)), var_listTypedAttributeList_5065, var_constructorMap_5582, var_getterMap_5654, var_setterMap_5683, var_instanceMethodMap_5731, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 218)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 219)), var_enumeratorDescriptor_6929, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-listmap.galgas", 221)), var_addAssignOperatorDescription_7143, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 223)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 224)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 225)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 226)), GALGAS_bool (false), var_listElementTypeIndex_7963, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (temp_13.readProperty_mListmapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-listmap.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 230)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-listmap.galgas", 231))  COMMA_SOURCE_FILE ("type-listmap.galgas", 204)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8016.readProperty_mTypeName (), var_typeDefinition_8016, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 233)) ;
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
  GALGAS_lstring var_nameForUsefulness_9679 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 250)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9679, var_nameForUsefulness_9679, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 251)) ;
  }
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_9849 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 252)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9679, var_associatedTypeNameForUsefulness_9849 COMMA_SOURCE_FILE ("type-listmap.galgas", 253)) ;
  }
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_10037 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 254)), temp_3.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 254)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9679, var_elementTypeNameForUsefulness_10037 COMMA_SOURCE_FILE ("type-listmap.galgas", 255)) ;
  }
  GALGAS_unifiedTypeDefinition var_associatedTypeDefinition_10360 ;
  const GALGAS_listmapDeclarationAST temp_4 = this ;
  extensionMethod_searchType (ioArgument_ioTypeMap, temp_4.readProperty_mAssociatedListTypeName (), var_associatedTypeDefinition_10360, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 257)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_associatedTypeDefinition_10360.readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 267)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_listmapDeclarationAST temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("associated type should be a list type"), fixItArray7  COMMA_SOURCE_FILE ("type-listmap.galgas", 268)) ;
    }
  }
  const GALGAS_listmapDeclarationAST temp_8 = this ;
  const GALGAS_listmapDeclarationAST temp_9 = this ;
  const GALGAS_listmapDeclarationAST temp_10 = this ;
  const GALGAS_listmapDeclarationAST temp_11 = this ;
  const GALGAS_listmapDeclarationAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (temp_8.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 272)), GALGAS_listmapTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_9.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 274)), extensionGetter_searchKey (ioArgument_ioTypeMap, temp_10.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 275)), var_associatedTypeDefinition_10360.readProperty_mAllTypedPropertyList (), extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_11.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 277)), temp_12.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 277))  COMMA_SOURCE_FILE ("type-listmap.galgas", 273))  COMMA_SOURCE_FILE ("type-listmap.galgas", 271)) ;
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
  cEnumerator_typedPropertyList enumerator_11931 (temp_0.readProperty_mAssociatedListTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_11931.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_11931.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 297)) ;
    enumerator_11931.gotoNextObject () ;
  }
  const GALGAS_listmapTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_12052 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 299)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, var_selfTypedefinition_12052.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 302)) COMMA_SOURCE_FILE ("type-listmap.galgas", 300))) ;
  const GALGAS_listmapTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_12052.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 306)), var_selfTypedefinition_12052.readProperty_mIsConcrete (), var_selfTypedefinition_12052.readProperty_mConstructorMap (), var_selfTypedefinition_12052.readProperty_mGetterMap (), var_selfTypedefinition_12052.readProperty_mSetterMap (), var_selfTypedefinition_12052.readProperty_mInstanceMethodMap (), var_selfTypedefinition_12052.readProperty_mClassMethodMap (), var_selfTypedefinition_12052.readProperty_mOptionalMethodMap (), var_selfTypedefinition_12052.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_12052.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_12052.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_12052.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-listmap.galgas", 304))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 304)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 327)) ;
  const GALGAS_listmapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListMapElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 328)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = this ;
  const GALGAS_listmapTypeForGeneration temp_3 = this ;
  const GALGAS_listmapTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 330)), extensionGetter_identifierRepresentation (temp_3.readProperty_mAssociatedListTypeIndex (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 331)), temp_4.readProperty_mAssociatedListTypedAttributeList () COMMA_SOURCE_FILE ("type-listmap.galgas", 329))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dictDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_dictDeclarationAST::getter_keyRepresentation (C_Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_dictDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mDictTypeName ().readProperty_string () ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_3539 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 85)) ;
  const GALGAS_dictDeclarationAST temp_0 = this ;
  var_structAttributeList_3539.addAssign_operation (GALGAS_bool (true), temp_0.readProperty_mKeyTypeName (), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 86)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-dict.galgas", 86)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 86)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-dict.galgas", 86))  COMMA_SOURCE_FILE ("type-dict.galgas", 86)) ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  var_structAttributeList_3539.addAssign_operation (GALGAS_bool (true), temp_1.readProperty_mElementTypeName (), GALGAS_string ("value").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 87)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-dict.galgas", 87)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 87)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-dict.galgas", 87))  COMMA_SOURCE_FILE ("type-dict.galgas", 87)) ;
  const GALGAS_dictDeclarationAST temp_2 = this ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_2.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_3.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 90)), temp_4.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 90)), var_structAttributeList_3539, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-dict.galgas", 88))  COMMA_SOURCE_FILE ("type-dict.galgas", 88)) ;
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
  GALGAS_lstring var_dictNodeName_4746 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 104)), temp_1.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 104)) ;
  {
  const GALGAS_dictDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_dictNodeName_4746, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 105)) ;
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
  GALGAS_unifiedTypeMapEntry var_keyTypeIndex_5672 ;
  {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_0.readProperty_mKeyTypeName ().readProperty_string (), var_keyTypeIndex_5672, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 117)) ;
  }
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_5887 ;
  {
  const GALGAS_dictDeclarationAST temp_1 = this ;
  const GALGAS_dictDeclarationAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_1.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 120)), temp_2.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 120)), var_elementTypeEntry_5887, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 119)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5954 = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_keyTypeIndex_5672, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 124)) ;
  GALGAS_constructorMap var_constructorMap_6066 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 126)) ;
  GALGAS_getterMap var_getterMap_6141 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_6141, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 127)) ;
  }
  GALGAS_setterMap var_setterMap_6172 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 128)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6222 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 129)) ;
  {
  const GALGAS_dictDeclarationAST temp_3 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_6066, ioArgument_ioTypeMap, GALGAS_string ("emptyDict"), temp_3.readProperty_mDictTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 131)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_6141, ioArgument_ioTypeMap, GALGAS_string ("hasKey"), GALGAS_string::makeEmptyString (), temp_4.readProperty_mKeyTypeName ().readProperty_string (), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 139)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (var_getterMap_6141, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 147)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_6938 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 155)) ;
  GALGAS_typedPropertyList var_typedPropertyList_6988 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 156)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_7072 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 157)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_7072.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 158)), var_keyTypeIndex_5672, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 158)) ;
  var_insertMethodFormalArgumentList_6938.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 160)), var_keyTypeIndex_5672, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 162)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 159)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_7385 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 164)) ;
  var_removeMethodFormalArgumentList_7385.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 166)), var_keyTypeIndex_5672, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 168)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 165)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_7596 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 170)) ;
  var_optionalMethodSignature_7596.addAssign_operation (GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 173)), var_keyTypeIndex_5672, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 171)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_7741 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 176)) ;
  GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_7845 ;
  {
  const GALGAS_dictDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_5.readProperty_mElementTypeName (), var_attributeTypeIndex_7845, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 177)) ;
  }
  GALGAS_lstring var_elementPropertyName_7874 = GALGAS_string ("value").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 178)) ;
  GALGAS_bool var_hasSelector_7914 = GALGAS_bool (false) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_7072.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 180)), var_attributeTypeIndex_7845, var_elementPropertyName_7874.readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 180)) ;
  var_typedPropertyList_6988.addAssign_operation (var_attributeTypeIndex_7845, var_elementPropertyName_7874, GALGAS_bool (false), var_hasSelector_7914  COMMA_SOURCE_FILE ("type-dict.galgas", 181)) ;
  var_typesToIncludeInHeaderCompilation_7741.addAssign_operation (var_attributeTypeIndex_7845  COMMA_SOURCE_FILE ("type-dict.galgas", 182)) ;
  var_enumerationDescriptor_5954.addAssign_operation (var_attributeTypeIndex_7845, var_elementPropertyName_7874.readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 183)) ;
  var_insertMethodFormalArgumentList_6938.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 185)), var_attributeTypeIndex_7845, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 187)), var_elementPropertyName_7874.readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 184)) ;
  var_removeMethodFormalArgumentList_7385.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 190)), var_attributeTypeIndex_7845, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-dict.galgas", 192)), var_elementPropertyName_7874.readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 189)) ;
  var_optionalMethodSignature_7596.addAssign_operation (GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 196)), var_attributeTypeIndex_7845, var_elementPropertyName_7874.readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 194)) ;
  {
  const GALGAS_dictDeclarationAST temp_6 = this ;
  var_setterMap_6172.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), temp_6.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 201)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 202)), var_removeMethodFormalArgumentList_7385, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 205)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 200)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_7 = this ;
  const GALGAS_dictDeclarationAST temp_8 = this ;
  var_instanceMethodMap_6222.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("searchKey"), temp_7.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 210)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 211)), var_removeMethodFormalArgumentList_7385, temp_8.readProperty_mDictTypeName ().readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 215)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 209)) ;
  }
  GALGAS_lstring var_accessorName_9392 = GALGAS_lstring::constructor_new (var_elementPropertyName_7874.readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 219)), var_elementPropertyName_7874.readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 219)) ;
  {
  GALGAS_functionSignature temp_9 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 223)) ;
  temp_9.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 223)), var_keyTypeIndex_5672, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 223)) ;
  var_getterMap_6141.setter_insertOrReplace (var_accessorName_9392, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 222)), temp_9, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 224)), GALGAS_bool (true), var_attributeTypeIndex_7845, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 227)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 220)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_10 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_10.readProperty_mDictTypeName (), GALGAS_bool (false), var_getterMap_6141, var_setterMap_6172, var_instanceMethodMap_6222, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 231)) ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_10178 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 245)) ;
  {
  var_optionalMethodMap_10178.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 246)), var_optionalMethodSignature_7596, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 246)) ;
  }
  const GALGAS_dictDeclarationAST temp_11 = this ;
  const GALGAS_dictDeclarationAST temp_12 = this ;
  const GALGAS_dictDeclarationAST temp_13 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_10334 = GALGAS_unifiedTypeDefinition::constructor_new (temp_11.readProperty_mDictTypeName (), temp_12.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-dict.galgas", 252)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-dict.galgas", 253)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 255)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 256)), var_typedPropertyList_6988, var_constructorMap_6066, var_getterMap_6141, var_setterMap_6172, var_instanceMethodMap_6222, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 262)), var_optionalMethodMap_10178, var_enumerationDescriptor_5954, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-dict.galgas", 265)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-dict.galgas", 265)) COMMA_SOURCE_FILE ("type-dict.galgas", 265)), var_argumentTypeListForAddAssignWithFieldExpressionList_7072, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 267)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 268)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 269)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 270)), GALGAS_bool (false), var_elementTypeEntry_5887, GALGAS_string ("emptyDict"), GALGAS_string ("dict-").add_operation (temp_13.readProperty_mDictTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-dict.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 274)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-dict.galgas", 275))  COMMA_SOURCE_FILE ("type-dict.galgas", 248)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_10334.readProperty_mTypeName (), var_typeDefinition_10334, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 277)) ;
  }
}
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
  GALGAS_lstring var_nameForUsefulness_12013 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 290)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12013, var_nameForUsefulness_12013, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 291)) ;
  }
  const GALGAS_dictDeclarationAST temp_1 = this ;
  const GALGAS_dictDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_12181 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mDictTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 292)), temp_2.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 292)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_12013, var_elementTypeNameForUsefulness_12181 COMMA_SOURCE_FILE ("type-dict.galgas", 293)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_12443 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 295)) ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_t_12479 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_3.readProperty_mElementTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 296)) ;
  GALGAS_bool var_hasSelector_12546 = GALGAS_bool (false) ;
  var_typedAttributeList_12443.addAssign_operation (var_t_12479, GALGAS_string ("value").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 300)), GALGAS_bool (false), var_hasSelector_12546  COMMA_SOURCE_FILE ("type-dict.galgas", 298)) ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  const GALGAS_dictDeclarationAST temp_5 = this ;
  const GALGAS_dictDeclarationAST temp_6 = this ;
  const GALGAS_dictDeclarationAST temp_7 = this ;
  const GALGAS_dictDeclarationAST temp_8 = this ;
  const GALGAS_dictDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("dict ").add_operation (temp_4.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 305)), GALGAS_dictTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_5.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 307)), extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_6.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 308)), temp_7.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 308)), temp_8.readProperty_mDictTypeName (), var_typedAttributeList_12443, temp_9.readProperty_mKeyTypeName ()  COMMA_SOURCE_FILE ("type-dict.galgas", 306))  COMMA_SOURCE_FILE ("type-dict.galgas", 304)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_13991 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 335)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (inCompiler, var_selfTypedefinition_13991.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 338)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-dict.galgas", 336))) ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_13991.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 343)), var_selfTypedefinition_13991.readProperty_mIsConcrete (), var_selfTypedefinition_13991.readProperty_mConstructorMap (), var_selfTypedefinition_13991.readProperty_mGetterMap (), var_selfTypedefinition_13991.readProperty_mSetterMap (), var_selfTypedefinition_13991.readProperty_mInstanceMethodMap (), var_selfTypedefinition_13991.readProperty_mClassMethodMap (), var_selfTypedefinition_13991.readProperty_mOptionalMethodMap (), var_selfTypedefinition_13991.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_13991.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_13991.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_13991.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-dict.galgas", 341))), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 341)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 364)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 365)) ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  const GALGAS_dictTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 367)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-dict.galgas", 369)) COMMA_SOURCE_FILE ("type-dict.galgas", 366))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters (const GALGAS_lstring constinArgument_inString,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_16131 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 382)), kENUMERATION_UP) ;
  while (enumerator_16131.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_16168 = enumerator_16131.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 383)) ;
    {
    GALGAS_string joker_16255 ; // Joker input parameter
    var_explodedArray_16168.setter_popFirst (joker_16255, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 384)) ;
    }
    cEnumerator_stringlist enumerator_16273 (var_explodedArray_16168, kENUMERATION_UP) ;
    while (enumerator_16273.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_16273.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 386)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_16348 = enumerator_16273.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 387)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_16348.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 389)) ;
            }
          }
        }
      }
      enumerator_16273.gotoNextObject () ;
    }
    enumerator_16131.gotoNextObject () ;
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
  cEnumerator_stringlist enumerator_16841 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 399)), kENUMERATION_UP) ;
  while (enumerator_16841.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_16878 = enumerator_16841.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 400)) ;
    {
    GALGAS_string joker_16965 ; // Joker input parameter
    var_explodedArray_16878.setter_popFirst (joker_16965, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 401)) ;
    }
    cEnumerator_stringlist enumerator_16983 (var_explodedArray_16878, kENUMERATION_UP) ;
    while (enumerator_16983.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_16983.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 403)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_17058 = enumerator_16983.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 404)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_17058.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_17058.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-dict.galgas", 405)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 406)) ;
            }
          }
        }
      }
      enumerator_16983.gotoNextObject () ;
    }
    enumerator_16841.gotoNextObject () ;
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
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dict.galgas", 416)) ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 417)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-dict.galgas", 418)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-dict.galgas", 419)) ;
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
//Overriding extension getter '@mapDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_mapDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_mapDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 47)) ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_10300 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 294)) ;
  var_structAttributeList_10300.addAssign_operation (GALGAS_bool (false), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("type-map.galgas", 297)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 298)), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-map.galgas", 299)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 300)), GALGAS_propertyInCollectionInitializationAST::constructor_none (SOURCE_FILE ("type-map.galgas", 301))  COMMA_SOURCE_FILE ("type-map.galgas", 295)) ;
  const GALGAS_mapDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10526 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10526.hasCurrentObject ()) {
    var_structAttributeList_10300.addAssign_operation (GALGAS_bool (false), enumerator_10526.current_mPropertyTypeName (HERE), enumerator_10526.current_mPropertyName (HERE), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-map.galgas", 307)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 308)), enumerator_10526.current_mInitialization (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 303)) ;
    enumerator_10526.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_1 = this ;
  const GALGAS_mapDeclarationAST temp_2 = this ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 313)), temp_3.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 313)), var_structAttributeList_10300, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map.galgas", 311))  COMMA_SOURCE_FILE ("type-map.galgas", 311)) ;
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
  GALGAS_lstring var_key_11692 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 329)), temp_1.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 329)) ;
  {
  const GALGAS_mapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11692, temp_2, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 330)) ;
  }
  const GALGAS_mapDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11846 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_11846.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_11846.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 332)), enumerator_11846.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 332)) COMMA_SOURCE_FILE ("type-map.galgas", 332)) ;
    }
    enumerator_11846.gotoNextObject () ;
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
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_12764 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeIndex_12764, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 348)) ;
  }
  GALGAS_unifiedTypeMapEntry var_locationTypeEntry_12860 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("location"), var_locationTypeEntry_12860, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 350)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringTypeIndex_12953 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_12953, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 352)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 354)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_12953, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 354)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_13038 = temp_0 ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_13121 = GALGAS_bool (false) ;
  GALGAS_bool var_activateSuggestion_13154 = GALGAS_bool (true) ;
  const GALGAS_mapDeclarationAST temp_1 = this ;
  cEnumerator_lstringlist enumerator_13170 (temp_1.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_13170.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_13170.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_13121.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_13170.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-map.galgas", 361)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_13121 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, enumerator_13170.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("noSuggestion"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_activateSuggestion_13154.operator_not (SOURCE_FILE ("type-map.galgas", 365)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_13170.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray7  COMMA_SOURCE_FILE ("type-map.galgas", 366)) ;
            }
          }
          var_activateSuggestion_13154 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_13170.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute"), fixItArray8  COMMA_SOURCE_FILE ("type-map.galgas", 370)) ;
      }
    }
    enumerator_13170.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_13637 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 374)) ;
  GALGAS_getterMap var_getterMap_13710 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_13710, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 375)) ;
  }
  GALGAS_setterMap var_setterMap_13738 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 376)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_13786 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 377)) ;
  {
  const GALGAS_mapDeclarationAST temp_9 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_13637, ioArgument_ioTypeMap, GALGAS_string ("emptyMap"), temp_9.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 379)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_10 = this ;
  const GALGAS_mapDeclarationAST temp_11 = this ;
  routine_enterConstructorWithArgument (var_constructorMap_13637, ioArgument_ioTypeMap, GALGAS_string ("mapWithMapToOverride"), temp_10.readProperty_mMapTypeName ().readProperty_string (), GALGAS_string ("inMap"), temp_11.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 386)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13710, ioArgument_ioTypeMap, GALGAS_string ("levels"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 396)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments (var_getterMap_13710, ioArgument_ioTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 403)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13710, ioArgument_ioTypeMap, GALGAS_string ("keySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 414)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13710, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 421)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_13710, ioArgument_ioTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 428)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_13710, ioArgument_ioTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 437)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_12 = this ;
  routine_enterBaseGetterWithoutArgument (var_getterMap_13710, ioArgument_ioTypeMap, GALGAS_string ("overriddenMap"), temp_12.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 446)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_13710, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 453)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_15780 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 461)) ;
  GALGAS_typedPropertyList var_typedPropertyList_15835 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 462)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_15914 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 463)) ;
  GALGAS_string temp_13 ;
  const enumGalgasBool test_14 = var_usesSelectorsInInsertAndSearch_13121.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_string::makeEmptyString () ;
  }
  var_optionalMethodSignature_15914.addAssign_operation (GALGAS_bool (true), temp_13.getter_nowhere (SOURCE_FILE ("type-map.galgas", 466)), var_stringTypeIndex_12764, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 464)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_16141 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 469)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_16141.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 470)), var_lstringTypeIndex_12953, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 470)) ;
  GALGAS_string temp_15 ;
  const enumGalgasBool test_16 = var_usesSelectorsInInsertAndSearch_13121.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_15780.addAssign_operation (temp_15.getter_nowhere (SOURCE_FILE ("type-map.galgas", 472)), var_lstringTypeIndex_12953, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 474)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 471)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_16505 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 476)) ;
  GALGAS_string temp_17 ;
  const enumGalgasBool test_18 = var_usesSelectorsInInsertAndSearch_13121.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_16505.addAssign_operation (temp_17.getter_nowhere (SOURCE_FILE ("type-map.galgas", 478)), var_lstringTypeIndex_12953, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 480)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 477)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_16774 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 482)) ;
  const GALGAS_mapDeclarationAST temp_19 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_16851 (temp_19.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_16851.hasCurrentObject ()) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = enumerator_16851.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-map.galgas", 484)).boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_16851.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a map"), fixItArray21  COMMA_SOURCE_FILE ("type-map.galgas", 485)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_17069 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16851.current_mPropertyTypeName (HERE), var_attributeTypeIndex_17069, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 487)) ;
    }
    GALGAS_bool var_hasSelector_17090 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_17117 (enumerator_16851.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_17117.hasCurrentObject ()) {
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        test_22 = GALGAS_bool (kIsEqual, enumerator_17117.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_22) {
          var_hasSelector_17090 = GALGAS_bool (true) ;
          enumGalgasBool test_23 = kBoolTrue ;
          if (kBoolTrue == test_23) {
            GALGAS_bool test_24 = var_hasSelector_17090 ;
            if (kBoolTrue == test_24.boolEnum ()) {
              test_24 = var_usesSelectorsInInsertAndSearch_13121 ;
            }
            test_23 = test_24.boolEnum () ;
            if (kBoolTrue == test_23) {
              TC_Array <C_FixItDescription> fixItArray25 ;
              inCompiler->emitSemanticWarning (enumerator_17117.current_mValue (HERE).readProperty_location (), GALGAS_string ("%selector useless, map has %selectors attributes"), fixItArray25  COMMA_SOURCE_FILE ("type-map.galgas", 493)) ;
            }
          }
        }
      }
      enumerator_17117.gotoNextObject () ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_16141.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 497)), var_attributeTypeIndex_17069, enumerator_16851.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 497)) ;
    var_typedPropertyList_15835.addAssign_operation (var_attributeTypeIndex_17069, enumerator_16851.current_mPropertyName (HERE), GALGAS_bool (true), var_hasSelector_17090  COMMA_SOURCE_FILE ("type-map.galgas", 498)) ;
    var_typesToIncludeInHeaderCompilation_16774.addAssign_operation (var_attributeTypeIndex_17069  COMMA_SOURCE_FILE ("type-map.galgas", 499)) ;
    var_enumerationDescriptor_13038.addAssign_operation (var_attributeTypeIndex_17069, enumerator_16851.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 500)) ;
    GALGAS_bool test_26 = var_usesSelectorsInInsertAndSearch_13121 ;
    if (kBoolTrue != test_26.boolEnum ()) {
      test_26 = var_hasSelector_17090 ;
    }
    GALGAS_lstring temp_27 ;
    const enumGalgasBool test_28 = test_26.boolEnum () ;
    if (kBoolTrue == test_28) {
      temp_27 = enumerator_16851.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_28) {
      temp_27 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 502)) ;
    }
    var_insertMethodFormalArgumentList_15780.addAssign_operation (temp_27, var_attributeTypeIndex_17069, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 504)), enumerator_16851.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 501)) ;
    GALGAS_bool test_29 = var_usesSelectorsInInsertAndSearch_13121 ;
    if (kBoolTrue != test_29.boolEnum ()) {
      test_29 = var_hasSelector_17090 ;
    }
    GALGAS_lstring temp_30 ;
    const enumGalgasBool test_31 = test_29.boolEnum () ;
    if (kBoolTrue == test_31) {
      temp_30 = enumerator_16851.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_31) {
      temp_30 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 507)) ;
    }
    var_removeMethodFormalArgumentList_16505.addAssign_operation (temp_30, var_attributeTypeIndex_17069, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 509)), enumerator_16851.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 506)) ;
    GALGAS_bool test_32 = var_usesSelectorsInInsertAndSearch_13121 ;
    if (kBoolTrue != test_32.boolEnum ()) {
      test_32 = var_hasSelector_17090 ;
    }
    GALGAS_lstring temp_33 ;
    const enumGalgasBool test_34 = test_32.boolEnum () ;
    if (kBoolTrue == test_34) {
      temp_33 = enumerator_16851.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_34) {
      temp_33 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 513)) ;
    }
    var_optionalMethodSignature_15914.addAssign_operation (GALGAS_bool (false), temp_33, var_attributeTypeIndex_17069, enumerator_16851.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 511)) ;
    enumerator_16851.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_35 = this ;
  cEnumerator_insertMethodListAST enumerator_18403 (temp_35.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_18403.hasCurrentObject ()) {
    enumGalgasBool test_36 = kBoolTrue ;
    if (kBoolTrue == test_36) {
      test_36 = var_setterMap_13738.getter_hasKey (enumerator_18403.current_mInsertMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 519)).boolEnum () ;
      if (kBoolTrue == test_36) {
        TC_Array <C_FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (enumerator_18403.current_mInsertMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_18403.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 520)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 520)), fixItArray37  COMMA_SOURCE_FILE ("type-map.galgas", 520)) ;
      }
    }
    if (kBoolFalse == test_36) {
      {
      var_setterMap_13738.setter_insertOrReplace (enumerator_18403.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 524)), var_insertMethodFormalArgumentList_15780, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 527)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 522)) ;
      }
    }
    enumerator_18403.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_38 = this ;
  cEnumerator_mapRemoveMethodListAST enumerator_18866 (temp_38.readProperty_mRemoveMethodList (), kENUMERATION_UP) ;
  while (enumerator_18866.hasCurrentObject ()) {
    enumGalgasBool test_39 = kBoolTrue ;
    if (kBoolTrue == test_39) {
      test_39 = var_setterMap_13738.getter_hasKey (enumerator_18866.current_mMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 534)).boolEnum () ;
      if (kBoolTrue == test_39) {
        TC_Array <C_FixItDescription> fixItArray40 ;
        inCompiler->emitSemanticError (enumerator_18866.current_mMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_18866.current_mMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 535)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 535)), fixItArray40  COMMA_SOURCE_FILE ("type-map.galgas", 535)) ;
      }
    }
    if (kBoolFalse == test_39) {
      {
      var_setterMap_13738.setter_insertOrReplace (enumerator_18866.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 539)), var_removeMethodFormalArgumentList_16505, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 542)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 537)) ;
      }
    }
    enumerator_18866.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_41 = this ;
  cEnumerator_mapSearchMethodListAST enumerator_19376 (temp_41.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_19376.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_searchMethodFormalArgumentList_19445 = var_removeMethodFormalArgumentList_16505 ;
    enumGalgasBool test_42 = kBoolTrue ;
    if (kBoolTrue == test_42) {
      test_42 = enumerator_19376.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_42) {
        GALGAS_lstring temp_43 ;
        const enumGalgasBool test_44 = var_usesSelectorsInInsertAndSearch_13121.boolEnum () ;
        if (kBoolTrue == test_44) {
          temp_43 = GALGAS_string ("keyLocation").getter_nowhere (SOURCE_FILE ("type-map.galgas", 552)) ;
        }else if (kBoolFalse == test_44) {
          temp_43 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 552)) ;
        }
        var_searchMethodFormalArgumentList_19445.addAssign_operation (temp_43, var_locationTypeEntry_12860, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 554)), GALGAS_string ("outKeyLocation")  COMMA_SOURCE_FILE ("type-map.galgas", 551)) ;
      }
    }
    {
    var_instanceMethodMap_13786.setter_insertKey (enumerator_19376.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 559)), var_searchMethodFormalArgumentList_19445, enumerator_19376.current_mSearchMethodName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 563)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 557)) ;
    }
    enumerator_19376.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_45 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_20031 (temp_45.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_20031.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_20078 = GALGAS_lstring::constructor_new (enumerator_20031.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 569)), enumerator_20031.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 569)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_20221 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_20031.current_mPropertyTypeName (HERE), var_attributeTypeIndex_20221, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 570)) ;
    }
    {
    GALGAS_functionSignature temp_46 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 574)) ;
    temp_46.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 574)), var_stringTypeIndex_12764, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 574)) ;
    var_getterMap_13710.setter_insertOrReplace (var_accessorName_20078, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 573)), temp_46, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 575)), GALGAS_bool (true), var_attributeTypeIndex_20221, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 578)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 571)) ;
    }
    enumerator_20031.gotoNextObject () ;
  }
  enumGalgasBool test_47 = kBoolTrue ;
  if (kBoolTrue == test_47) {
    const GALGAS_mapDeclarationAST temp_48 = this ;
    test_47 = GALGAS_bool (kIsSupOrEqual, temp_48.readProperty_mInsertOrReplaceDeclarationListAST ().getter_length (SOURCE_FILE ("type-map.galgas", 583)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_47) {
      GALGAS_location var_insertOrReplaceLocation_20663 ;
      const GALGAS_mapDeclarationAST temp_49 = this ;
      temp_49.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceLocation_20663, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 584)) ;
      {
      var_setterMap_13738.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation_20663  COMMA_SOURCE_FILE ("type-map.galgas", 586)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 587)), var_insertMethodFormalArgumentList_15780, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 590)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 585)) ;
      }
    }
  }
  const GALGAS_mapDeclarationAST temp_50 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_21012 (temp_50.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_21012.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_21059 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_21012.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-map.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 597)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 597)), enumerator_21012.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 596)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_21298 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_21012.current_mPropertyTypeName (HERE), var_attributeTypeIndex_21298, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 600)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_21365 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 604)) ;
    var_accessorFormalArgumentList_21365.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 605)), var_attributeTypeIndex_21298, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 605)), enumerator_21012.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 605)) ;
    var_accessorFormalArgumentList_21365.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 606)), var_stringTypeIndex_12764, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 606)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-map.galgas", 606)) ;
    {
    var_setterMap_13738.setter_insertOrReplace (var_accessorName_21059, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 609)), var_accessorFormalArgumentList_21365, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 612)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 607)) ;
    }
    enumerator_21012.gotoNextObject () ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_21830 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 617)) ;
  {
  var_optionalMethodMap_21830.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 618)), var_optionalMethodSignature_15914, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 618)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_51 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_51.readProperty_mMapTypeName (), GALGAS_bool (false), var_getterMap_13710, var_setterMap_13738, var_instanceMethodMap_13786, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 620)) ;
  }
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_22471 ;
  {
  const GALGAS_mapDeclarationAST temp_52 = this ;
  const GALGAS_mapDeclarationAST temp_53 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_52.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 635)), temp_53.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 635)), var_elementTypeEntry_22471, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 634)) ;
  }
  const GALGAS_mapDeclarationAST temp_54 = this ;
  const GALGAS_mapDeclarationAST temp_55 = this ;
  const GALGAS_mapDeclarationAST temp_56 = this ;
  const GALGAS_mapDeclarationAST temp_57 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_22519 = GALGAS_unifiedTypeDefinition::constructor_new (temp_54.readProperty_mMapTypeName (), temp_55.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-map.galgas", 643)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-map.galgas", 644)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 646)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 647)), var_typedPropertyList_15835, var_constructorMap_13637, var_getterMap_13710, var_setterMap_13738, var_instanceMethodMap_13786, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 653)), var_optionalMethodMap_21830, var_enumerationDescriptor_13038, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map.galgas", 656)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-map.galgas", 656)) COMMA_SOURCE_FILE ("type-map.galgas", 656)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-map.galgas", 656)) COMMA_SOURCE_FILE ("type-map.galgas", 656)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-map.galgas", 656)) COMMA_SOURCE_FILE ("type-map.galgas", 656)), var_argumentTypeListForAddAssignWithFieldExpressionList_16141, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 658)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 659)), temp_56.readProperty_mSearchMethodList (), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 661)), GALGAS_bool (false), var_elementTypeEntry_22471, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (temp_57.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-map.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 665)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-map.galgas", 666))  COMMA_SOURCE_FILE ("type-map.galgas", 639)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_22519.readProperty_mTypeName (), var_typeDefinition_22519, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 668)) ;
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
  GALGAS_lstring var_nameForUsefulness_24615 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 697)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_24615, var_nameForUsefulness_24615, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 698)) ;
  }
  const GALGAS_mapDeclarationAST temp_1 = this ;
  const GALGAS_mapDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_24778 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mMapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 699)), temp_2.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 699)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_24615, var_elementTypeNameForUsefulness_24778 COMMA_SOURCE_FILE ("type-map.galgas", 700)) ;
  }
  GALGAS_bool var_usesSelectorsInInsertAndSearch_25016 = GALGAS_bool (false) ;
  GALGAS_bool var_activateSuggestion_25049 = GALGAS_bool (true) ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  cEnumerator_lstringlist enumerator_25065 (temp_3.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_25065.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, enumerator_25065.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_usesSelectorsInInsertAndSearch_25016 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, enumerator_25065.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("noSuggestion"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_activateSuggestion_25049 = GALGAS_bool (false) ;
        }
      }
    }
    enumerator_25065.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_25328 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 712)) ;
  GALGAS_propertyIndexMap var_attributeMap_25370 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 713)) ;
  const GALGAS_mapDeclarationAST temp_6 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_25418 (temp_6.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_25418.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_25482 = function_typeNameForUsefulEntitiesGraph (enumerator_25418.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 715)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_24615, var_propertyTypeNameForUsefulness_25482 COMMA_SOURCE_FILE ("type-map.galgas", 716)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_25654 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_25418.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 717)) ;
    GALGAS_bool var_hasSelector_25716 = GALGAS_bool (false) ;
    var_typedAttributeList_25328.addAssign_operation (var_t_25654, enumerator_25418.current_mPropertyName (HERE), GALGAS_bool (true), var_hasSelector_25716  COMMA_SOURCE_FILE ("type-map.galgas", 719)) ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 724)).getter_hasKey (enumerator_25418.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 724)).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_string var_m_25915 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_25992 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 726)), kENUMERATION_UP) ;
        while (enumerator_25992.hasCurrentObject ()) {
          var_m_25915.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_25992.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 727)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 727)) ;
          enumerator_25992.gotoNextObject () ;
        }
        var_m_25915.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 729)) ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_25418.current_mPropertyName (HERE).readProperty_location (), var_m_25915, fixItArray8  COMMA_SOURCE_FILE ("type-map.galgas", 730)) ;
      }
    }
    {
    var_attributeMap_25370.setter_insertKey (enumerator_25418.current_mPropertyName (HERE), var_t_25654, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 732)) ;
    }
    enumerator_25418.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_26223 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 735)) ;
  const GALGAS_mapDeclarationAST temp_9 = this ;
  cEnumerator_insertMethodListAST enumerator_26287 (temp_9.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_26287.hasCurrentObject ()) {
    {
    var_insertMethodMap_26223.setter_insertKey (enumerator_26287.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 737)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_26287.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 738)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_26287.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 739)) ;
    }
    enumerator_26287.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_26545 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 742)) ;
  const GALGAS_mapDeclarationAST temp_10 = this ;
  cEnumerator_mapSearchMethodListAST enumerator_26591 (temp_10.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_26591.hasCurrentObject ()) {
    {
    var_searchMethodMap_26545.setter_insertKey (enumerator_26591.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 744)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_26591.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 745)) ;
    }
    enumerator_26591.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_11 = this ;
  cEnumerator_mapRemoveMethodListAST enumerator_26786 (temp_11.readProperty_mRemoveMethodList (), kENUMERATION_UP) ;
  while (enumerator_26786.hasCurrentObject ()) {
    {
    var_insertMethodMap_26223.setter_insertKey (enumerator_26786.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 749)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_26786.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 750)) ;
    }
    enumerator_26786.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_12 = this ;
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_27025 (temp_12.readProperty_mInsertOrReplaceDeclarationListAST (), kENUMERATION_UP) ;
  GALGAS_uint index_26988 ((uint32_t) 0) ;
  while (enumerator_27025.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (kIsStrictSup, index_26988.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticWarning (enumerator_27025.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared"), fixItArray14  COMMA_SOURCE_FILE ("type-map.galgas", 755)) ;
      }
    }
    enumerator_27025.gotoNextObject () ;
    index_26988.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 753)) ;
  }
  const GALGAS_mapDeclarationAST temp_15 = this ;
  GALGAS_bool var_hasInsertOrReplaceModifier_27252 = GALGAS_bool (kIsStrictSup, temp_15.readProperty_mInsertOrReplaceDeclarationListAST ().getter_length (SOURCE_FILE ("type-map.galgas", 758)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = var_hasInsertOrReplaceModifier_27252.operator_and (var_insertMethodMap_26223.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("type-map.galgas", 759)) COMMA_SOURCE_FILE ("type-map.galgas", 759)).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_location var_insertOrReplaceDeclarationLocation_27481 ;
      const GALGAS_mapDeclarationAST temp_17 = this ;
      temp_17.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceDeclarationLocation_27481, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 760)) ;
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_27481, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray18  COMMA_SOURCE_FILE ("type-map.galgas", 761)) ;
    }
  }
  const GALGAS_mapDeclarationAST temp_19 = this ;
  const GALGAS_mapDeclarationAST temp_20 = this ;
  const GALGAS_mapDeclarationAST temp_21 = this ;
  const GALGAS_mapDeclarationAST temp_22 = this ;
  const GALGAS_mapDeclarationAST temp_23 = this ;
  const GALGAS_mapDeclarationAST temp_24 = this ;
  const GALGAS_mapDeclarationAST temp_25 = this ;
  const GALGAS_mapDeclarationAST temp_26 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (temp_19.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 766)), GALGAS_mapTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_20.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 768)), extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_21.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 769)), temp_22.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 769)), temp_23.readProperty_mMapTypeName (), var_typedAttributeList_25328, temp_24.readProperty_mInsertMethodList (), temp_25.readProperty_mSearchMethodList (), temp_26.readProperty_mRemoveMethodList (), var_hasInsertOrReplaceModifier_27252, var_activateSuggestion_25049  COMMA_SOURCE_FILE ("type-map.galgas", 767))  COMMA_SOURCE_FILE ("type-map.galgas", 765)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_29180 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 801)) ;
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, var_selfTypedefinition_29180.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 804)), temp_2.readProperty_mTypedAttributeList (), temp_3.readProperty_mSearchMethodList () COMMA_SOURCE_FILE ("type-map.galgas", 802))) ;
  const GALGAS_mapTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_29180.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 810)), var_selfTypedefinition_29180.readProperty_mIsConcrete (), var_selfTypedefinition_29180.readProperty_mConstructorMap (), var_selfTypedefinition_29180.readProperty_mGetterMap (), var_selfTypedefinition_29180.readProperty_mSetterMap (), var_selfTypedefinition_29180.readProperty_mInstanceMethodMap (), var_selfTypedefinition_29180.readProperty_mClassMethodMap (), var_selfTypedefinition_29180.readProperty_mOptionalMethodMap (), var_selfTypedefinition_29180.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_29180.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_29180.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_29180.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-map.galgas", 808))), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 808)) ;
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
  cEnumerator_typedPropertyList enumerator_30361 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_30361.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_30361.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 832)) ;
    enumerator_30361.gotoNextObject () ;
  }
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_30468 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 834)) ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, var_selfTypedefinition_30468.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 837)), temp_3.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-map.galgas", 835))) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 848)) ;
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 849)) ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_31136 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 850)) ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  const GALGAS_mapTypeForGeneration temp_4 = this ;
  const GALGAS_mapTypeForGeneration temp_5 = this ;
  const GALGAS_mapTypeForGeneration temp_6 = this ;
  const GALGAS_mapTypeForGeneration temp_7 = this ;
  const GALGAS_mapTypeForGeneration temp_8 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, var_selfTypedefinition_31136.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-map.galgas", 852)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mInsertMethodList (), temp_5.readProperty_mSearchMethodList (), temp_6.readProperty_mRemoveMethodList (), temp_7.readProperty_mHasInsertOrReplaceModifier (), temp_8.readProperty_mActivateSuggestions () COMMA_SOURCE_FILE ("type-map.galgas", 851))) ;
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
  GALGAS_lstring var_key_4854 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 135)), temp_1.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 135)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4854, temp_2, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 136)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5022 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_5022.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5022.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 138)), enumerator_5022.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 138)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 138)) ;
    }
    enumerator_5022.gotoNextObject () ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_5637 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 148)) ;
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5710 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_5710.hasCurrentObject ()) {
    var_structAttributeList_5637.addAssign_operation (enumerator_5710.current_isConstant (HERE), enumerator_5710.current_mPropertyTypeName (HERE), enumerator_5710.current_mPropertyName (HERE), GALGAS_AccessControlAST::constructor_publicAccess (SOURCE_FILE ("type-sorted-list.galgas", 154)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 155)), enumerator_5710.current_mInitialization (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 150)) ;
    enumerator_5710.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 160)), temp_3.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 160)), var_structAttributeList_5637, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 158))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 158)) ;
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
  GALGAS_optionalMethodMap var_optionalMethodMap_6682 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 175)) ;
  GALGAS_unifiedTypeMapEntry var_listTypeIndex_6793 ;
  {
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mSortedListTypeName (), var_listTypeIndex_6793, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 177)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_7009 ;
  {
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_1.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 180)), temp_2.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 180)), var_listElementTypeIndex_7009, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 179)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_7097 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 184)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_7156 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 185)) ;
  GALGAS_formalParameterSignature var_setterFormalArgumentList_7218 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 186)) ;
  GALGAS_typedPropertyList var_typedAttributeList_7267 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 187)) ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_7315 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_7315.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_7410 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_7315.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7410, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 189)) ;
    }
    GALGAS_bool var_hasSelector_7431 = GALGAS_bool (false) ;
    var_typedAttributeList_7267.addAssign_operation (var_attributeTypeIndex_7410, enumerator_7315.current_mPropertyName (HERE), GALGAS_bool (true), var_hasSelector_7431  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 191)) ;
    var_enumerationDescriptor_7097.addAssign_operation (var_attributeTypeIndex_7410, enumerator_7315.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 192)) ;
    var_constructorAttributeTypeList_7156.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 193)), var_attributeTypeIndex_7410, enumerator_7315.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 193)) ;
    var_setterFormalArgumentList_7218.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-sorted-list.galgas", 194)), var_attributeTypeIndex_7410, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-sorted-list.galgas", 194)), enumerator_7315.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 194)) ;
    enumerator_7315.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_7885 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 197)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_4 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_7885, ioArgument_ioTypeMap, GALGAS_string ("emptySortedList"), temp_4.readProperty_mSortedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 198)) ;
  }
  {
  var_constructorMap_7885.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sortedListWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 206))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 206)), var_constructorAttributeTypeList_7156, GALGAS_bool (false), var_listTypeIndex_6793, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 205)) ;
  }
  GALGAS_getterMap var_getterMap_8310 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_8310, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 212)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_8310, ioArgument_ioTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 213)) ;
  }
  GALGAS_setterMap var_setterMap_8515 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 221)) ;
  {
  var_setterMap_8515.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popGreatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 223))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 223)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 224)), var_setterFormalArgumentList_7218, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 227)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 222)) ;
  }
  {
  var_setterMap_8515.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popSmallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 231))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 231)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 232)), var_setterFormalArgumentList_7218, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 235)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 230)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_9017 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 239)) ;
  {
  var_instanceMethodMap_9017.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("greatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 241))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 241)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 242)), var_setterFormalArgumentList_7218, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 244)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 246)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 240)) ;
  }
  {
  var_instanceMethodMap_9017.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("smallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 250))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 250)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-sorted-list.galgas", 251)), var_setterFormalArgumentList_7218, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 253)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-sorted-list.galgas", 255)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 249)) ;
  }
  {
  const GALGAS_sortedListDeclarationAST temp_5 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_mSortedListTypeName (), GALGAS_bool (false), var_getterMap_8310, var_setterMap_8515, var_instanceMethodMap_9017, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 259)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_6 = this ;
  const GALGAS_sortedListDeclarationAST temp_7 = this ;
  const GALGAS_sortedListDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_9881 = GALGAS_unifiedTypeDefinition::constructor_new (temp_6.readProperty_mSortedListTypeName (), temp_7.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-sorted-list.galgas", 277)), GALGAS_typeKindEnum::constructor_sortedListType (SOURCE_FILE ("type-sorted-list.galgas", 278)), GALGAS_bool (true), var_typedAttributeList_7267, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 281)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 282)), var_constructorMap_7885, var_getterMap_8310, var_setterMap_8515, var_instanceMethodMap_9017, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 287)), var_optionalMethodMap_6682, var_enumerationDescriptor_7097, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-sorted-list.galgas", 290)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-sorted-list.galgas", 290)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 290)), var_constructorAttributeTypeList_7156, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 292)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 293)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 294)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 295)), GALGAS_bool (false), var_listElementTypeIndex_7009, GALGAS_string ("emptySortedList"), GALGAS_string ("-sortedlist-").add_operation (temp_8.readProperty_mSortedListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-sorted-list.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 299)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-sorted-list.galgas", 300))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 273)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_9881.readProperty_mTypeName (), var_typeDefinition_9881, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 302)) ;
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
  GALGAS_lstring var_sortedListNameForUsefulness_11540 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 319)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_sortedListNameForUsefulness_11540, var_sortedListNameForUsefulness_11540, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 320)) ;
  }
  const GALGAS_sortedListDeclarationAST temp_1 = this ;
  const GALGAS_sortedListDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_11730 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 321)), temp_2.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 321)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_11540, var_elementTypeNameForUsefulness_11730 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 322)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_11979 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 324)) ;
  GALGAS_propertyIndexMap var_attributeMap_12040 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 325)) ;
  const GALGAS_sortedListDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_12088 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12088.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_12152 = function_typeNameForUsefulEntitiesGraph (enumerator_12088.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 327)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_11540, var_propertyTypeNameForUsefulness_12152 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 328)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_12313 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_12088.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 329)) ;
    GALGAS_bool var_hasSelector_12375 = GALGAS_bool (true) ;
    var_typedAttributeList_11979.addAssign_operation (var_t_12313, enumerator_12088.current_mPropertyName (HERE), GALGAS_bool (true), var_hasSelector_12375  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 331)) ;
    {
    var_attributeMap_12040.setter_insertKey (enumerator_12088.current_mPropertyName (HERE), var_t_12313, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 336)) ;
    }
    enumerator_12088.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting_12598 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-sorted-list.galgas", 339)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList_12661 = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 340)) ;
  const GALGAS_sortedListDeclarationAST temp_4 = this ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_12705 (temp_4.readProperty_mSortDescriptorList (), kENUMERATION_UP) ;
  while (enumerator_12705.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_type_12818 ;
    var_attributeMap_12040.method_searchKey (enumerator_12705.current_mSortedAttributeName (HERE), var_type_12818, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 342)) ;
    var_sortDescriptorList_12661.addAssign_operation (var_type_12818, enumerator_12705.current_mSortedAttributeName (HERE).readProperty_string (), enumerator_12705.current_mAscending (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 343)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_attributesUsedForSorting_12598.getter_hasKey (enumerator_12705.current_mSortedAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 344)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_12705.current_mSortedAttributeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_12705.current_mSortedAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 345)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 345)), fixItArray6  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 345)) ;
      }
    }
    var_attributesUsedForSorting_12598.addAssign_operation (enumerator_12705.current_mSortedAttributeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 347)) ;
    enumerator_12705.gotoNextObject () ;
  }
  const GALGAS_sortedListDeclarationAST temp_7 = this ;
  const GALGAS_sortedListDeclarationAST temp_8 = this ;
  const GALGAS_sortedListDeclarationAST temp_9 = this ;
  const GALGAS_sortedListDeclarationAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (temp_7.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 351)), GALGAS_sortedListTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_8.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 353)), extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_lstring::constructor_new (temp_9.readProperty_mSortedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 354)), temp_10.readProperty_mSortedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 354)), var_typedAttributeList_11979, var_sortDescriptorList_12661  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 352))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 350)) ;
}
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
  GALGAS_uint index_607_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_607 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_607.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_607.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue () ;
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
  result << "COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cSortedListElement * copy (void) ;\n\n//--- Virtual method for comparing elements\n  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n\n//--- Description\n public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n\n//--- Virtual method that comparing element for sorting\n  public: virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;\n} ;\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncSortedListElement_" ;
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
      result << extensionGetter_identifierRepresentation (enumerator_1709.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 39)).stringValue () ;
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
  result << "COMMA_LOCATION_ARGS) :\ncSortedListElement (THERE),\nmObject (" ;
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
  result << ") {\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nbool cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n  return mObject.isValid () ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ncSortedListElement * cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n  cSortedListElement * result = NULL ;\n  macroMyNew (result, cSortedListElement_" ;
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
  result << " COMMA_HERE)) ;\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
  GALGAS_uint index_3144_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3144 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3144.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n  ioString.writeStringMultiple (\"| \", inIndentation) ;\n  ioString << " ;
      result << enumerator_3144.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 79)).stringValue () ;
      result << " \":\" ;\n  mObject.mProperty_" ;
      result << enumerator_3144.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 80)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_3144_.increment () ;
      enumerator_3144.gotoNextObject () ;
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
  GALGAS_uint index_4706_ (0) ;
  if (in_SORT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_sortDescriptorListForGeneration enumerator_4706 (in_SORT_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4706.hasCurrentObject ()) {
      result << "  if (result == kOperandEqual) {\n    result = " ;
      const enumGalgasBool test_0 = enumerator_4706.current_mAscendingOrder (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "mObject.mProperty_" ;
        result << enumerator_4706.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue () ;
        result << ".objectCompare (operand->mObject.mProperty_" ;
        result << enumerator_4706.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue () ;
        result << ")" ;
      }else if (kBoolFalse == test_0) {
        result << "operand->mObject.mProperty_" ;
        result << enumerator_4706.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue () ;
        result << ".objectCompare (mObject.mProperty_" ;
        result << enumerator_4706.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue () ;
        result << ")" ;
      }
      result << " ;\n  }\n" ;
      index_4706_.increment () ;
      enumerator_4706.gotoNextObject () ;
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
  GALGAS_uint index_5809_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5809 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5809.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_5809.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 130)).stringValue () ;
      result << " & inOperand" ;
      result << index_5809_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 130)).stringValue () ;
      if (enumerator_5809.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5809_IDX.increment () ;
      enumerator_5809.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = constructor_emptySortedList (THERE) ;\n  cSortedListElement * p = NULL ;\n  macroMyNew (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_6215_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6215 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6215.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_6215_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 138)).stringValue () ;
      if (enumerator_6215.hasNextObject ()) {
        result << ", " ;
      }
      index_6215_IDX.increment () ;
      enumerator_6215.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n  capSortedListElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  result.appendObject (attributes) ;\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6710_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6710 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6710.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_6710.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 153)).stringValue () ;
      result << " & inOperand" ;
      result << index_6710_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 153)).stringValue () ;
      if (enumerator_6710.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6710_IDX.increment () ;
      enumerator_6710.gotoNextObject () ;
    }
  }
  result << "\n    " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cSortedListElement * p = NULL ;\n    macroMyNew (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_7070_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7070 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7070.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7070_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 162)).stringValue () ;
      if (enumerator_7070.hasNextObject ()) {
        result << ", " ;
      }
      index_7070_IDX.increment () ;
      enumerator_7070.gotoNextObject () ;
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
  GALGAS_uint index_7962_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7962 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7962.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_7962.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 187)).stringValue () ;
      result << " & outOperand" ;
      result << index_7962_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 187)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_7962_IDX.increment () ;
      enumerator_7962.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  capSortedListElement attributes ;\n  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (NULL == p) {\n" ;
  GALGAS_uint index_8452_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8452 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8452.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_8452_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 197)).stringValue () ;
      result << ".drop () ;\n" ;
      index_8452_IDX.increment () ;
      enumerator_8452.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_8682_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8682 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8682.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_8682_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 203)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_8682.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 203)).stringValue () ;
      result << " ;\n" ;
      index_8682_IDX.increment () ;
      enumerator_8682.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popGreatest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9076_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9076 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9076.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_9076.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 212)).stringValue () ;
      result << " & outOperand" ;
      result << index_9076_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 212)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9076_IDX.increment () ;
      enumerator_9076.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n  capSortedListElement attributes ;\n  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (NULL == p) {\n" ;
  GALGAS_uint index_9566_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9566 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9566.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_9566_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 222)).stringValue () ;
      result << ".drop () ;\n" ;
      index_9566_IDX.increment () ;
      enumerator_9566.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_9796_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9796 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9796.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_9796_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 228)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_9796.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 228)).stringValue () ;
      result << " ;\n" ;
      index_9796_IDX.increment () ;
      enumerator_9796.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_smallest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10187_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10187 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10187.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_10187.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 237)).stringValue () ;
      result << " & outOperand" ;
      result << index_10187_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 237)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10187_IDX.increment () ;
      enumerator_10187.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  capSortedListElement attributes ;\n  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (NULL == p) {\n" ;
  GALGAS_uint index_10680_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10680 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10680.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10680_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 247)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10680_IDX.increment () ;
      enumerator_10680.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_10910_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10910 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10910.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10910_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 253)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_10910.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 253)).stringValue () ;
      result << " ;\n" ;
      index_10910_IDX.increment () ;
      enumerator_10910.gotoNextObject () ;
    }
  }
  result << "  }\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_greatest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11301_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11301 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11301.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_11301.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 262)).stringValue () ;
      result << " & outOperand" ;
      result << index_11301_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 262)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11301_IDX.increment () ;
      enumerator_11301.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n  capSortedListElement attributes ;\n  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n  if (NULL == p) {\n" ;
  GALGAS_uint index_11794_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11794 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11794.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11794_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 272)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11794_IDX.increment () ;
      enumerator_11794.gotoNextObject () ;
    }
  }
  result << "  }else{\n    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_12024_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12024 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12024.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12024_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 278)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_12024.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 278)).stringValue () ;
      result << " ;\n" ;
      index_12024_IDX.increment () ;
      enumerator_12024.gotoNextObject () ;
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
  GALGAS_uint index_13097_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13097 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13097.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n\nGALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_13097.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 301)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_13097.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 301)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n  const cSortedListElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cSortedListElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cSortedListElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n  return p->mObject.mProperty_" ;
      result << enumerator_13097.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 304)).stringValue () ;
      result << " ;\n}\n\n" ;
      index_13097_IDX.increment () ;
      enumerator_13097.gotoNextObject () ;
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
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_15222 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 399)) ;
  const GALGAS_sortedListTypeForGeneration temp_1 = this ;
  const GALGAS_sortedListTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, var_selfTypedefinition_15222.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 402)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 400))) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_15222.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 407)), var_selfTypedefinition_15222.readProperty_mIsConcrete (), var_selfTypedefinition_15222.readProperty_mConstructorMap (), var_selfTypedefinition_15222.readProperty_mGetterMap (), var_selfTypedefinition_15222.readProperty_mSetterMap (), var_selfTypedefinition_15222.readProperty_mInstanceMethodMap (), var_selfTypedefinition_15222.readProperty_mClassMethodMap (), var_selfTypedefinition_15222.readProperty_mOptionalMethodMap (), var_selfTypedefinition_15222.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_15222.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_15222.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_15222.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 405))), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 405)) ;
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
  cEnumerator_typedPropertyList enumerator_16415 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_16415.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16415.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 429)) ;
    enumerator_16415.gotoNextObject () ;
  }
  const GALGAS_sortedListTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 431)) ;
  const GALGAS_sortedListTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 432)) ;
  const GALGAS_sortedListTypeForGeneration temp_3 = this ;
  const GALGAS_sortedListTypeForGeneration temp_4 = this ;
  const GALGAS_sortedListTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 434)), temp_4.readProperty_mTypedAttributeList (), temp_5.readProperty_mSortDescriptorList () COMMA_SOURCE_FILE ("type-sorted-list.galgas", 433))) ;
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
  GALGAS_lstring var_key_3333 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 84)), temp_1.readProperty_mStructTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-struct.galgas", 84)) ;
  {
  const GALGAS_structDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3333, temp_2, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 85)) ;
  }
  const GALGAS_structDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_3493 (temp_3.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_3493.hasCurrentObject ()) {
    GALGAS_lstring var_propertyKey_3548 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3493.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 87)), enumerator_3493.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-struct.galgas", 87)) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3333, var_propertyKey_3548 COMMA_SOURCE_FILE ("type-struct.galgas", 88)) ;
    }
    enumerator_3493.gotoNextObject () ;
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
  result_result = GALGAS_string ("struct @").add_operation (temp_0.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 97)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'selectorFeatureForNewConstructor'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_selectorFeatureForNewConstructor (C_Compiler *
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
  GALGAS_optionalMethodMap var_optionalMethodMap_5020 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 117)) ;
  GALGAS_unifiedTypeMapEntry var_structTypeIndex_5136 ;
  {
  const GALGAS_structDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mStructTypeName (), var_structTypeIndex_5136, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 119)) ;
  }
  GALGAS_propertyMap var_propertyMap_5203 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 121)) ;
  GALGAS_constructorMap var_constructorMap_5245 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 122)) ;
  GALGAS_functionSignature var_constructorPropertyTypeList_5303 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 123)) ;
  GALGAS_typedPropertyList var_typedPropertyList_5351 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 124)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_5421 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 125)) ;
  const GALGAS_structDeclarationAST temp_1 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5520 (temp_1.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_5520.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_propertyTypeEntry_5624 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_5520.current_mPropertyTypeName (HERE), var_propertyTypeEntry_5624, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 127)) ;
    }
    GALGAS_lstring var_selector_5651 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-struct.galgas", 128)) ;
    cEnumerator_lstringlist enumerator_5682 (enumerator_5520.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_5682.hasCurrentObject ()) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, enumerator_5682.current_mValue (HERE).readProperty_string ().objectCompare (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 130)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_selector_5651 = enumerator_5520.current_mPropertyName (HERE) ;
        }
      }
      enumerator_5682.gotoNextObject () ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = enumerator_5520.current_mInitialization (HERE).getter_isNone (SOURCE_FILE ("type-struct.galgas", 134)).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_constructorPropertyTypeList_5303.addAssign_operation (var_selector_5651, var_propertyTypeEntry_5624, enumerator_5520.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-struct.galgas", 135)) ;
      }
    }
    var_typesToIncludeInHeaderCompilation_5421.addAssign_operation (var_propertyTypeEntry_5624  COMMA_SOURCE_FILE ("type-struct.galgas", 137)) ;
    GALGAS_bool var_hasSelector_6031 = GALGAS_bool (false) ;
    var_typedPropertyList_5351.addAssign_operation (var_propertyTypeEntry_5624, enumerator_5520.current_mPropertyName (HERE), enumerator_5520.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-struct.galgas", 139)), var_hasSelector_6031  COMMA_SOURCE_FILE ("type-struct.galgas", 139)) ;
    {
    var_propertyMap_5203.setter_insertKey (enumerator_5520.current_mPropertyName (HERE), extensionGetter_accessControl (enumerator_5520.current_mAccessControl (HERE), var_structTypeIndex_5136, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 142)), enumerator_5520.current_isConstant (HERE), var_propertyTypeEntry_5624, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 140)) ;
    }
    enumerator_5520.gotoNextObject () ;
  }
  {
  var_constructorMap_5245.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 148))  COMMA_SOURCE_FILE ("type-struct.galgas", 148)), var_constructorPropertyTypeList_5303, GALGAS_bool (false), var_structTypeIndex_5136, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 147)) ;
  }
  GALGAS_getterMap var_getterMap_6530 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioTypeMap, var_getterMap_6530, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 154)) ;
  }
  GALGAS_setterMap var_setterMap_6571 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 156)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6641 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 158)) ;
  {
  const GALGAS_structDeclarationAST temp_4 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_4.readProperty_mStructTypeName (), GALGAS_bool (false), var_getterMap_6530, var_setterMap_6571, var_instanceMethodMap_6641, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 160)) ;
  }
  GALGAS_unifiedTypeMapEntry var_enumeratedType_7067 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_structDeclarationAST temp_6 = this ;
    test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mEnumeratedElementTypeName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_enumeratedType_7067 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-struct.galgas", 176)) ;
    }
  }
  if (kBoolFalse == test_5) {
    {
    const GALGAS_structDeclarationAST temp_7 = this ;
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_7.readProperty_mEnumeratedElementTypeName (), var_enumeratedType_7067, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 178)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_7353 = GALGAS_string ("default") ;
  cEnumerator_typedPropertyList enumerator_7394 (var_typedPropertyList_5351, kENUMERATION_UP) ;
  bool bool_8 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_7353.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_7394.hasCurrentObject () && bool_8) {
    while (enumerator_7394.hasCurrentObject () && bool_8) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsEqual, extensionGetter_definition (enumerator_7394.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 186)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())).operator_or (extensionGetter_definition (enumerator_7394.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 186)).readProperty_mIsConcrete ().operator_not (SOURCE_FILE ("type-struct.galgas", 186)) COMMA_SOURCE_FILE ("type-struct.galgas", 186)).boolEnum () ;
        if (kBoolTrue == test_9) {
          var_defaultConstructorName_7353 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_7394.gotoNextObject () ;
      if (enumerator_7394.hasCurrentObject ()) {
        bool_8 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_7353.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_structDeclarationAST temp_10 = this ;
  const GALGAS_structDeclarationAST temp_11 = this ;
  const GALGAS_structDeclarationAST temp_12 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_7674 = GALGAS_unifiedTypeDefinition::constructor_new (temp_10.readProperty_mStructTypeName (), temp_11.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-struct.galgas", 195)), GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("type-struct.galgas", 196)), GALGAS_bool (false), var_typedPropertyList_5351, var_propertyMap_5203, var_typedPropertyList_5351, var_constructorMap_5245, var_getterMap_6530, var_setterMap_6571, var_instanceMethodMap_6641, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 205)), var_optionalMethodMap_5020, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 207)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-struct.galgas", 208)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-struct.galgas", 208)) COMMA_SOURCE_FILE ("type-struct.galgas", 208)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 209)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 210)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 211)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 212)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 213)), GALGAS_bool (false), var_enumeratedType_7067, var_defaultConstructorName_7353, GALGAS_string ("struct-").add_operation (temp_12.readProperty_mStructTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-struct.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 217)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-struct.galgas", 218))  COMMA_SOURCE_FILE ("type-struct.galgas", 191)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_7674.readProperty_mTypeName (), var_typeDefinition_7674, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 220)) ;
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
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-struct.galgas", 228)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-struct.galgas", 229)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-struct.galgas", 230)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-struct.galgas", 231)) ;
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
  GALGAS_lstring var_structNameForUsefulness_9638 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mStructTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 246)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_9638, var_structNameForUsefulness_9638, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 247)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_structDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mStructurePropertyList ().getter_length (SOURCE_FILE ("type-struct.galgas", 249)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructTypeName ().readProperty_location (), GALGAS_string ("a structure cannot be empty: it must have at least one property"), fixItArray4  COMMA_SOURCE_FILE ("type-struct.galgas", 250)) ;
    }
  }
  GALGAS_typedPropertyList var_typedPropertyList_9986 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 252)) ;
  GALGAS_typedPropertyList var_constructorArgumentList_10040 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 253)) ;
  GALGAS_propertyIndexMap var_propertyMap_10081 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 254)) ;
  const GALGAS_structDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10167 (temp_5.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_10167.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_10240 = function_typeNameForUsefulEntitiesGraph (enumerator_10167.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 256)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_9638, var_propertyTypeNameForUsefulness_10240 COMMA_SOURCE_FILE ("type-struct.galgas", 257)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_10397 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_10167.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 258)) ;
    GALGAS_bool var_hasSelector_10459 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_10483 (enumerator_10167.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_10483.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, enumerator_10483.current_mValue (HERE).readProperty_string ().objectCompare (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 261)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_10483.current_mValue (HERE).readProperty_location (), GALGAS_string ("a struct property accepts only the %").add_operation (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 262)).add_operation (GALGAS_string (" feature"), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 262)), fixItArray7  COMMA_SOURCE_FILE ("type-struct.galgas", 262)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_hasSelector_10459.boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_10483.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated %").add_operation (function_selectorFeatureForNewConstructor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 264)).add_operation (GALGAS_string (" feature"), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 264)), fixItArray9  COMMA_SOURCE_FILE ("type-struct.galgas", 264)) ;
        }
      }
      if (kBoolFalse == test_8) {
        var_hasSelector_10459 = GALGAS_bool (true) ;
      }
      enumerator_10483.gotoNextObject () ;
    }
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 269)).getter_hasKey (enumerator_10167.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-struct.galgas", 269)).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_string var_m_10949 = GALGAS_string ("an property cannot be named:") ;
        cEnumerator_stringset enumerator_11023 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 271)), kENUMERATION_UP) ;
        while (enumerator_11023.hasCurrentObject ()) {
          var_m_10949.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_11023.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 272)) ;
          enumerator_11023.gotoNextObject () ;
        }
        var_m_10949.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 274)) ;
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (enumerator_10167.current_mPropertyName (HERE).readProperty_location (), var_m_10949, fixItArray11  COMMA_SOURCE_FILE ("type-struct.galgas", 275)) ;
      }
    }
    {
    var_propertyMap_10081.setter_insertKey (enumerator_10167.current_mPropertyName (HERE), var_t_10397, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 277)) ;
    }
    switch (enumerator_10167.current_mInitialization (HERE).enumValue ()) {
    case GALGAS_propertyInCollectionInitializationAST::kNotBuilt:
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_none:
      {
        var_constructorArgumentList_10040.addAssign_operation (var_t_10397, enumerator_10167.current_mPropertyName (HERE), enumerator_10167.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-struct.galgas", 283)), var_hasSelector_10459  COMMA_SOURCE_FILE ("type-struct.galgas", 280)) ;
      }
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_some:
      {
      }
      break ;
    }
    var_typedPropertyList_9986.addAssign_operation (var_t_10397, enumerator_10167.current_mPropertyName (HERE), enumerator_10167.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-struct.galgas", 290)), var_hasSelector_10459  COMMA_SOURCE_FILE ("type-struct.galgas", 287)) ;
    enumerator_10167.gotoNextObject () ;
  }
  GALGAS_string var_initializationCode_11552 = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset var_inclusionSet_11576 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-struct.galgas", 295)) ;
  GALGAS_uint var_temporaryVariableIndex_11627 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_11662 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-struct.galgas", 297)) ;
  GALGAS_usefulEntitiesGraph var_usefulEntitiesGraph_11725 = GALGAS_usefulEntitiesGraph::constructor_emptyGraph (SOURCE_FILE ("type-struct.galgas", 298)) ;
  const GALGAS_structDeclarationAST temp_12 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11796 (temp_12.readProperty_mStructurePropertyList (), kENUMERATION_UP) ;
  while (enumerator_11796.hasCurrentObject ()) {
    switch (enumerator_11796.current_mInitialization (HERE).enumValue ()) {
    case GALGAS_propertyInCollectionInitializationAST::kNotBuilt:
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_none:
      {
      }
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_some:
      {
        const cEnumAssociatedValues_propertyInCollectionInitializationAST_some * extractPtr_13088 = (const cEnumAssociatedValues_propertyInCollectionInitializationAST_some *) (enumerator_11796.current_mInitialization (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_11901_expressionAST = extractPtr_13088->mAssociatedValue0 ;
        GALGAS_localVarManager var_variableMap_11926 = GALGAS_localVarManager::constructor_new (GALGAS_currentVarManager::constructor_new (GALGAS_scopeLocalVarMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 303)), GALGAS_localVarMapListForLLVM::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 303))  COMMA_SOURCE_FILE ("type-struct.galgas", 303)), GALGAS_openedOverrideList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 303))  COMMA_SOURCE_FILE ("type-struct.galgas", 303)) ;
        GALGAS_analysisContext var_analysisContext_12014 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("type-struct.galgas", 308)), GALGAS_string::makeEmptyString (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("type-struct.galgas", 304)) ;
        GALGAS_unifiedTypeMapEntry var_propertyType_12205 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_11796.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 312)) ;
        GALGAS_semanticExpressionForGeneration var_expression_12507 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_11901_expressionAST.ptr (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-struct.galgas", 314)), var_usefulEntitiesGraph_11725, var_propertyType_12205, var_analysisContext_12014, ioArgument_ioTypeMap, var_variableMap_11926, var_expression_12507, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 313)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (var_propertyType_12205, var_expression_12507.readProperty_mResultType (), enumerator_11796.current_mPropertyName (HERE).readProperty_location (), var_expression_12507, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 323)) ;
        }
        GALGAS_string var_sourceVar_12904 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) var_expression_12507.ptr (), var_initializationCode_11552, var_inclusionSet_11576, var_temporaryVariableIndex_11627, var_unusedVariableCppNameSet_11662, var_sourceVar_12904, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 329)) ;
        var_initializationCode_11552.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (extensionGetter_identifierRepresentation (var_propertyType_12205, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 336)) ;
        var_initializationCode_11552.plusAssign_operation(GALGAS_string (" in_").add_operation (enumerator_11796.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 337)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 337)).add_operation (var_sourceVar_12904, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 337)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 337)) ;
      }
      break ;
    }
    enumerator_11796.gotoNextObject () ;
  }
  const GALGAS_structDeclarationAST temp_13 = this ;
  const GALGAS_structDeclarationAST temp_14 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (temp_13.readProperty_mStructTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 343)), GALGAS_structTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_14.readProperty_mStructTypeName (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 345)), var_typedPropertyList_9986, var_constructorArgumentList_10040, var_initializationCode_11552  COMMA_SOURCE_FILE ("type-struct.galgas", 344))  COMMA_SOURCE_FILE ("type-struct.galgas", 342)) ;
}
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
  GALGAS_uint index_486_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_486 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_486.hasCurrentObject ()) {
      result << "  public: GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_486.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue () ;
      result << " mProperty_" ;
      result << enumerator_486.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue () ;
      result << " ;\n  public: inline GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_486.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 12)).stringValue () ;
      result << " readProperty_" ;
      result << enumerator_486.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 12)).stringValue () ;
      result << " (void) const {\n    return mProperty_" ;
      result << enumerator_486.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 13)).stringValue () ;
      result << " ;\n  }\n\n" ;
      index_486_.increment () ;
      enumerator_486.gotoNextObject () ;
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
  GALGAS_uint index_1447_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1447 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1447.hasCurrentObject ()) {
      result << "  public: inline void setter_set" ;
      result << enumerator_1447.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 32)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 32)).stringValue () ;
      result << " (const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_1447.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 32)).stringValue () ;
      result << " & inValue COMMA_UNUSED_LOCATION_ARGS) {\n    mProperty_" ;
      result << enumerator_1447.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 33)).stringValue () ;
      result << " = inValue ;\n  }\n\n" ;
      index_1447_.increment () ;
      enumerator_1447.gotoNextObject () ;
    }
  }
  result << "//--------------------------------- Virtual destructor (in debug mode)\n  public: virtual ~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_2070_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2070 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2070.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_2070.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 41)).stringValue () ;
      result << " & in_" ;
      result << enumerator_2070.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 41)).stringValue () ;
      if (enumerator_2070.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_2070_.increment () ;
      enumerator_2070.gotoNextObject () ;
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
  GALGAS_uint index_813_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_813 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_813.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_813.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue () ;
      result << " & inOperand" ;
      result << index_813_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue () ;
      if (enumerator_813.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_813_IDX.increment () ;
      enumerator_813.gotoNextObject () ;
    }
  }
  result << ") :\n" ;
  GALGAS_uint index_1020_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1020 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1020.hasCurrentObject ()) {
      result << "mProperty_" ;
      result << enumerator_1020.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 24)).stringValue () ;
      result << " (inOperand" ;
      result << index_1020_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 24)).stringValue () ;
      result << ")" ;
      if (enumerator_1020.hasNextObject ()) {
        result << ",\n" ;
      }
      index_1020_IDX.increment () ;
      enumerator_1020.gotoNextObject () ;
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
    GALGAS_uint index_1510_ (0) ;
    if (in_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1510 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1510.hasCurrentObject ()) {
        result << "GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_1510.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).stringValue () ;
        result << "::constructor_" ;
        result << extensionGetter_definition (enumerator_1510.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).readProperty_mDefaultConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).stringValue () ;
        result << " (HERE)" ;
        if (enumerator_1510.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_1510_.increment () ;
        enumerator_1510.gotoNextObject () ;
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
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 45)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "UNUSED_LOCATION_ARGS) {\n" ;
  }else if (kBoolFalse == test_1) {
    GALGAS_uint index_2063_ (0) ;
    if (in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_2063 (in_CONSTRUCTOR_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2063.hasCurrentObject ()) {
        result << "const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_2063.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 49)).stringValue () ;
        result << " & in_" ;
        result << enumerator_2063.current_mPropertyName (HERE).readProperty_string ().stringValue () ;
        if (enumerator_2063.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_2063_.increment () ;
        enumerator_2063.gotoNextObject () ;
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
  GALGAS_uint index_2345_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2345 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2345.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_2345.current_mPropertyName (HERE).readProperty_string ().stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_2345.hasNextObject ()) {
        result << " && " ;
      }
      index_2345_.increment () ;
      enumerator_2345.gotoNextObject () ;
    }
  }
  result << ") {\n    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2517_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2517 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2517.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_2517.current_mPropertyName (HERE).readProperty_string ().stringValue () ;
      if (enumerator_2517.hasNextObject ()) {
        result << ", " ;
      }
      index_2517_.increment () ;
      enumerator_2517.gotoNextObject () ;
    }
  }
  result << ") ;\n  }\n  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\ntypeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n   typeComparisonResult result = kOperandEqual ;\n" ;
  GALGAS_uint index_2965_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2965 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2965.hasCurrentObject ()) {
      result << "  if (result == kOperandEqual) {\n    result = mProperty_" ;
      result << enumerator_2965.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 79)).stringValue () ;
      result << ".objectCompare (inOperand.mProperty_" ;
      result << enumerator_2965.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 79)).stringValue () ;
      result << ") ;\n  }\n" ;
      index_2965_.increment () ;
      enumerator_2965.gotoNextObject () ;
    }
  }
  result << "  return result ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nbool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n  return " ;
  GALGAS_uint index_3476_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3476 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3476.hasCurrentObject ()) {
      result << "mProperty_" ;
      result << enumerator_3476.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 90)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_3476.hasNextObject ()) {
        result << " && " ;
      }
      index_3476_.increment () ;
      enumerator_3476.gotoNextObject () ;
    }
  }
  result << " ;\n}\n\n//----------------------------------------------------------------------------------------------------------------------\n\nvoid GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n" ;
  GALGAS_uint index_3837_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3837 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3837.hasCurrentObject ()) {
      result << "  mProperty_" ;
      result << enumerator_3837.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 100)).stringValue () ;
      result << ".drop () ;\n" ;
      index_3837_.increment () ;
      enumerator_3837.gotoNextObject () ;
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
  GALGAS_uint index_4375_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4375 (in_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4375.hasCurrentObject ()) {
      result << "    mProperty_" ;
      result << enumerator_4375.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 114)).stringValue () ;
      result << ".description (ioString, inIndentation+1) ;\n" ;
      if (enumerator_4375.hasNextObject ()) {
        result << "    ioString << \", \" ;\n" ;
      }
      index_4375_IDX.increment () ;
      enumerator_4375.gotoNextObject () ;
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
  cEnumerator_typedPropertyList enumerator_14886 (temp_0.readProperty_mTypedPropertyList (), kENUMERATION_UP) ;
  while (enumerator_14886.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_14886.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 390)) ;
    enumerator_14886.gotoNextObject () ;
  }
  const GALGAS_structTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_14992 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 392)) ;
  const GALGAS_structTypeForGeneration temp_2 = this ;
  const GALGAS_structTypeForGeneration temp_3 = this ;
  const GALGAS_structTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_boolsetGenerationTemplate_structTypeHeader_31_ (inCompiler, var_selfTypedefinition_14992.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 395)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), GALGAS_bool (kIsNotEqual, var_selfTypedefinition_14992.readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 393))) ;
  const GALGAS_structTypeForGeneration temp_5 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_14992.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 402)), var_selfTypedefinition_14992.readProperty_mIsConcrete (), var_selfTypedefinition_14992.readProperty_mConstructorMap (), var_selfTypedefinition_14992.readProperty_mGetterMap (), var_selfTypedefinition_14992.readProperty_mSetterMap (), var_selfTypedefinition_14992.readProperty_mInstanceMethodMap (), var_selfTypedefinition_14992.readProperty_mClassMethodMap (), var_selfTypedefinition_14992.readProperty_mOptionalMethodMap (), var_selfTypedefinition_14992.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_14992.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_14992.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_14992.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-struct.galgas", 400))), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 400)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 424)) ;
  const GALGAS_structTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_16334 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 425)) ;
  const GALGAS_structTypeForGeneration temp_2 = this ;
  const GALGAS_structTypeForGeneration temp_3 = this ;
  const GALGAS_structTypeForGeneration temp_4 = this ;
  const GALGAS_structTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_boolsetGenerationTemplate_structTypeSpecificImplementation (inCompiler, var_selfTypedefinition_16334.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 428)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), temp_5.readProperty_mConstructorInitializationCode (), GALGAS_bool (kIsNotEqual, var_selfTypedefinition_16334.readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 426))) ;
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
  result_result = GALGAS_string ("typealias @").add_operation (temp_0.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 76)) ;
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
  GALGAS_lstring var_aliasKey_4205 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 92)), temp_1.readProperty_mAliasTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 92)) ;
  {
  const GALGAS_typealiasDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_aliasKey_4205, temp_2, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 93)) ;
  }
  const GALGAS_typealiasDeclarationAST temp_3 = this ;
  const GALGAS_typealiasDeclarationAST temp_4 = this ;
  GALGAS_lstring var_referenceKey_4362 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mDefinedTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 94)), temp_4.readProperty_mDefinedTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 94)) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_aliasKey_4205, var_referenceKey_4362 COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 95)) ;
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
  GALGAS_unifiedTypeMapEntry var_definedTypeEntry_5262 ;
  {
  const GALGAS_typealiasDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_0.readProperty_mDefinedTypeName ().readProperty_string (), var_definedTypeEntry_5262, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 106)) ;
  }
  switch (var_definedTypeEntry_5262.enumValue ()) {
  case GALGAS_unifiedTypeMapEntry::kNotBuilt:
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_null:
    {
      const GALGAS_typealiasDeclarationAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mDefinedTypeName ().readProperty_location (), GALGAS_string ("Undefined type"), fixItArray2  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 109)) ;
    }
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_element:
    {
      const cEnumAssociatedValues_unifiedTypeMapEntry_element * extractPtr_7016 = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) (var_definedTypeEntry_5262.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapElementClass_2D_weak extractedValue_5423_weakElement = extractPtr_7016->mAssociatedValue0 ;
      switch (extractedValue_5423_weakElement.bang_unifiedTypeMapElementClass_2D_weak (inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 111)).readProperty_mDefinition ().enumValue ()) {
      case GALGAS_typeDefinition::kNotBuilt:
        break ;
      case GALGAS_typeDefinition::kEnum_unsolved:
        {
          const GALGAS_typealiasDeclarationAST temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mDefinedTypeName ().readProperty_location (), GALGAS_string ("Undefined type"), fixItArray4  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 113)) ;
        }
        break ;
      case GALGAS_typeDefinition::kEnum_solved:
        {
          const cEnumAssociatedValues_typeDefinition_solved * extractPtr_7006 = (const cEnumAssociatedValues_typeDefinition_solved *) (extractedValue_5423_weakElement.bang_unifiedTypeMapElementClass_2D_weak (inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 111)).readProperty_mDefinition ().unsafePointer ()) ;
          const GALGAS_unifiedTypeDefinition extractedValue_5591_def = extractPtr_7006->mAssociatedValue0 ;
          const GALGAS_typealiasDeclarationAST temp_5 = this ;
          GALGAS_unifiedTypeDefinition var_definition_5617 = GALGAS_unifiedTypeDefinition::constructor_new (extractedValue_5591_def.readProperty_mTypeName (), GALGAS_bool (false), extractedValue_5591_def.readProperty_mIsConcrete (), extractedValue_5591_def.readProperty_mSuperType (), extractedValue_5591_def.readProperty_mTypeKindEnum (), extractedValue_5591_def.readProperty_mSupportCollectionValue (), extractedValue_5591_def.readProperty_mAllTypedPropertyList (), extractedValue_5591_def.readProperty_mPropertyMap (), extractedValue_5591_def.readProperty_mCurrentTypedPropertyList (), extractedValue_5591_def.readProperty_mConstructorMap (), extractedValue_5591_def.readProperty_mGetterMap (), extractedValue_5591_def.readProperty_mSetterMap (), extractedValue_5591_def.readProperty_mInstanceMethodMap (), extractedValue_5591_def.readProperty_mClassMethodMap (), extractedValue_5591_def.readProperty_mOptionalMethodMap (), extractedValue_5591_def.readProperty_mEnumerationDescriptor (), extractedValue_5591_def.readProperty_mHandledOperatorFlags (), extractedValue_5591_def.readProperty_mAddAssignOperatorArguments (), extractedValue_5591_def.readProperty_mEnumConstantMap (), extractedValue_5591_def.readProperty_mEnumConstantList (), extractedValue_5591_def.readProperty_mMapSearchMethodList (), extractedValue_5591_def.readProperty_mMapEntrySearchConstructorList (), extractedValue_5591_def.readProperty_mGenerateHeaderInSeparateFile (), extractedValue_5591_def.readProperty_mTypeForEnumeratedElement (), extractedValue_5591_def.readProperty_mDefaultConstructorName (), GALGAS_string ("typealias-").add_operation (temp_5.readProperty_mAliasTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-alias-and-type-declaration.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 141)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-alias-and-type-declaration.galgas", 142))  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 115)) ;
          {
          const GALGAS_typealiasDeclarationAST temp_6 = this ;
          extensionSetter_insertType (ioArgument_ioTypeMap, temp_6.readProperty_mAliasTypeName (), var_definition_5617, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 144)) ;
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
  GALGAS_lstring var_nameForUsefulness_7793 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mAliasTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 159)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7793, var_nameForUsefulness_7793, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 160)) ;
  }
  const GALGAS_typealiasDeclarationAST temp_1 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_7962 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mDefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 161)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_7793, var_elementTypeNameForUsefulness_7962 COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 162)) ;
  }
  const GALGAS_typealiasDeclarationAST temp_2 = this ;
  GALGAS_unifiedTypeMapEntry var_t_8174 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_2.readProperty_mDefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 164)) ;
  const GALGAS_typealiasDeclarationAST temp_3 = this ;
  const GALGAS_typealiasDeclarationAST temp_4 = this ;
  const GALGAS_typealiasDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("typealias ").add_operation (temp_3.readProperty_mAliasTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 166)), GALGAS_aliasTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_4.readProperty_mAliasTypeName (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 167)), temp_5.readProperty_mAliasTypeName ().readProperty_string (), var_t_8174  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 167))  COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 165)) ;
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
  extensionMethod_addHeaderFileName_31_ (temp_0.readProperty_mReferencedType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 186)) ;
  const GALGAS_aliasTypeForGeneration temp_1 = this ;
  const GALGAS_aliasTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_typeAliasTypeHeader_31_ (inCompiler, temp_1.readProperty_mAliasTypeName ().getter_identifierRepresentation (SOURCE_FILE ("type-alias-and-type-declaration.galgas", 188)), extensionGetter_identifierRepresentation (temp_2.readProperty_mReferencedType (), inCompiler COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 189)) COMMA_SOURCE_FILE ("type-alias-and-type-declaration.galgas", 187))) ;
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
  result_result = GALGAS_string ("abstract extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 130)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 130)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 130)) ;
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
  GALGAS_lstring var_key_5926 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 145)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 145)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 145)), temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 144)) ;
  {
  const GALGAS_abstractExtensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5926, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 148)) ;
  }
  {
  const GALGAS_abstractExtensionGetterAST temp_4 = this ;
  const GALGAS_abstractExtensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5926, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 149)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 149)) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 149)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 151)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 151)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-getter.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 152)) ;
      }
    }
  }
  const GALGAS_abstractExtensionGetterAST temp_9 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_6444 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 157)) ;
  if (NULL != objectArray_6444) {
    macroValidSharedObject (objectArray_6444, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionGetterAST temp_10 = this ;
    const GALGAS_abstractExtensionGetterAST temp_11 = this ;
    const GALGAS_abstractExtensionGetterAST temp_12 = this ;
    objectArray_6444->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionGetterName (), temp_11.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_12.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::constructor_isVirtualAbstract (SOURCE_FILE ("extension-abstract-getter.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 158)) ;
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
  GALGAS_unifiedTypeMapEntry var_selfType_8389 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 194)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_8389, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 196)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-abstract-getter.galgas", 196)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 196)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionGetterAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an extension getter: '@").add_operation (extensionGetter_definition (var_selfType_8389, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 198)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 198)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 198)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 197)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_8389, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 199)).readProperty_mIsConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionGetterAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (extensionGetter_definition (var_selfType_8389, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 201)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 201)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 201)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 200)) ;
      }
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_9025 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-getter.galgas", 204)) ;
  const GALGAS_abstractExtensionGetterAST temp_7 = this ;
  cEnumerator_formalInputParameterListAST enumerator_9111 (temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList (), kENUMERATION_UP) ;
  while (enumerator_9111.hasCurrentObject ()) {
    var_formalParameterListForGeneration_9025.addAssign_operation (enumerator_9111.current_mFormalSelector (HERE), extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_9111.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 208)), enumerator_9111.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_9111.current_mFormalArgumentName (HERE), enumerator_9111.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 206)) ;
    enumerator_9111.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterAST temp_8 = this ;
  const GALGAS_abstractExtensionGetterAST temp_9 = this ;
  const GALGAS_abstractExtensionGetterAST temp_10 = this ;
  const GALGAS_abstractExtensionGetterAST temp_11 = this ;
  const GALGAS_abstractExtensionGetterAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (temp_8.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 215)), GALGAS_abstractExtensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 218)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 218)).add_operation (temp_10.readProperty_mAbstractExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 218)), var_selfType_8389, temp_11.readProperty_mAbstractExtensionGetterName ().readProperty_string (), extensionGetter_searchKey (ioArgument_ioTypeMap, temp_12.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 221)), var_formalParameterListForGeneration_9025  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 216))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 214)) ;
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
  ioArgument_ioAbstractExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 244)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionGetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionGetterForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-getter.galgas", 261)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 271)).readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), temp_2.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_3.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 270))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 286)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 285)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 286)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 287))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 285)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 288)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 289)) ;
  const GALGAS_abstractExtensionGetterForGeneration temp_4 = this ;
  cEnumerator_formalInputParameterListForGeneration enumerator_13447 (temp_4.readProperty_mAbstractExtensionGetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_13447.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13447.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 291)) ;
    enumerator_13447.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionGetterForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_6 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_7 = this ;
  const GALGAS_abstractExtensionGetterForGeneration temp_8 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 294)).readProperty_mTypeName ().readProperty_string (), temp_6.readProperty_mAbstractExtensionGetterName (), temp_7.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_8.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 293))) ;
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
  GALGAS_lstring var_key_4653 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 103)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 103)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 103)), temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 102)) ;
  {
  const GALGAS_abstractExtensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4653, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 106)) ;
  }
  {
  const GALGAS_abstractExtensionMethodAST temp_4 = this ;
  const GALGAS_abstractExtensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4653, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 107)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 107)) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 107)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 109)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 109)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-method.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 110)) ;
      }
    }
  }
  const GALGAS_abstractExtensionMethodAST temp_9 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_5171 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 115)) ;
  if (NULL != objectArray_5171) {
    macroValidSharedObject (objectArray_5171, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionMethodAST temp_10 = this ;
    const GALGAS_abstractExtensionMethodAST temp_11 = this ;
    objectArray_5171->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionMethodName (), temp_11.readProperty_mAbstractExtensionMethodFormalParameterList (), GALGAS_methodQualifier::constructor_isVirtualAbstract (SOURCE_FILE ("extension-abstract-method.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 116)) ;
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
  result_result = GALGAS_string ("abstract extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 129)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 129)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 129)) ;
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
  GALGAS_unifiedTypeMapEntry var_selfType_7664 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 161)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_7664, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 163)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-abstract-method.galgas", 163)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 163)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionMethodAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_7664, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 164)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 164)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 164)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 164)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_7664, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 165)).readProperty_mIsConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionMethodAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (extensionGetter_definition (var_selfType_7664, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 166)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 166)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 166)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 166)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_8245 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-method.galgas", 169)) ;
  const GALGAS_abstractExtensionMethodAST temp_7 = this ;
  cEnumerator_formalParameterListAST enumerator_8380 (temp_7.readProperty_mAbstractExtensionMethodFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_8380.hasCurrentObject ()) {
    var_formalParameterListForGeneration_8245.addAssign_operation (enumerator_8380.current_mFormalSelector (HERE), enumerator_8380.current_mFormalArgumentPassingMode (HERE), extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_8380.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 174)), enumerator_8380.current_mFormalArgumentName (HERE), enumerator_8380.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 171)) ;
    enumerator_8380.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodAST temp_8 = this ;
  const GALGAS_abstractExtensionMethodAST temp_9 = this ;
  const GALGAS_abstractExtensionMethodAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (temp_8.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 180)), GALGAS_abstractExtensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_7664, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 183)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 183)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 183)).add_operation (temp_9.readProperty_mAbstractExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 183)), var_selfType_7664, temp_10.readProperty_mAbstractExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_8245  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 181))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 179)) ;
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
  ioArgument_ioAbstractExtensionMethodListMapAST.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 207)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 228)).readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), temp_2.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 227))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionMethodForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionMethodForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-method.galgas", 237)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 246)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 246)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 246)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 246))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 246)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 247)) ;
  const GALGAS_abstractExtensionMethodForGeneration temp_3 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_12616 (temp_3.readProperty_mAbstractExtensionMethodFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_12616.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12616.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 249)) ;
    enumerator_12616.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionMethodForGeneration temp_4 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionMethodForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (inCompiler, temp_4.readProperty_mReceiverType (), temp_5.readProperty_mAbstractExtensionMethodName (), temp_6.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 251))) ;
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
  GALGAS_lstring var_key_3956 = GALGAS_lstring::constructor_new (GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 87)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 87)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 87)), temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 87)) ;
  {
  const GALGAS_abstractExtensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3956, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 88)) ;
  }
  {
  const GALGAS_abstractExtensionSetterAST temp_4 = this ;
  const GALGAS_abstractExtensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3956, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 89)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 89)) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 89)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_abstractExtensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 91)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 91)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_abstractExtensionSetterAST temp_8 = this ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionSetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-setter.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 92)) ;
      }
    }
  }
  const GALGAS_abstractExtensionSetterAST temp_9 = this ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_4462 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 97)) ;
  if (NULL != objectArray_4462) {
    macroValidSharedObject (objectArray_4462, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GALGAS_abstractExtensionSetterAST temp_10 = this ;
    const GALGAS_abstractExtensionSetterAST temp_11 = this ;
    objectArray_4462->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionSetterName (), temp_11.readProperty_mAbstractExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 98)) ;
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
  result_result = GALGAS_string ("abstract extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 110)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 110)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 110)) ;
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
  GALGAS_unifiedTypeMapEntry var_selfType_6929 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 143)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_6929, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 145)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-abstract-setter.galgas", 145)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 145)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_abstractExtensionSetterAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_6929, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 146)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 146)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 146)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 146)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_6929, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 147)).readProperty_mIsConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_abstractExtensionSetterAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (extensionGetter_definition (var_selfType_6929, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 148)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 148)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 148)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 148)) ;
      }
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_7511 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-setter.galgas", 151)) ;
  const GALGAS_abstractExtensionSetterAST temp_7 = this ;
  cEnumerator_formalParameterListAST enumerator_7646 (temp_7.readProperty_mAbstractExtensionSetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_7646.hasCurrentObject ()) {
    var_formalParameterListForGeneration_7511.addAssign_operation (enumerator_7646.current_mFormalSelector (HERE), enumerator_7646.current_mFormalArgumentPassingMode (HERE), extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_7646.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 156)), enumerator_7646.current_mFormalArgumentName (HERE), enumerator_7646.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 153)) ;
    enumerator_7646.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterAST temp_8 = this ;
  const GALGAS_abstractExtensionSetterAST temp_9 = this ;
  const GALGAS_abstractExtensionSetterAST temp_10 = this ;
  const GALGAS_abstractExtensionSetterAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (temp_8.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 162)), GALGAS_abstractExtensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 165)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 165)).add_operation (temp_10.readProperty_mAbstractExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 165)), var_selfType_6929, temp_11.readProperty_mAbstractExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_7511  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 163))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 161)) ;
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
  ioArgument_ioAbstractExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 190)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionSetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_abstractExtensionSetterForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-setter.galgas", 208)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 217)).readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName (), temp_2.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 216))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 230)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 230)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 230)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 230))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 230)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 231)) ;
  const GALGAS_abstractExtensionSetterForGeneration temp_3 = this ;
  cEnumerator_formalParameterListForGeneration enumerator_11637 (temp_3.readProperty_mAbstractExtensionSetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_11637.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11637.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 233)) ;
    enumerator_11637.gotoNextObject () ;
  }
  const GALGAS_abstractExtensionSetterForGeneration temp_4 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_5 = this ;
  const GALGAS_abstractExtensionSetterForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (inCompiler, extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 236)).readProperty_mTypeName ().readProperty_string (), temp_5.readProperty_mAbstractExtensionSetterName (), temp_6.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 235))) ;
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
  result_result = GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 166)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 166)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 166)) ;
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
  GALGAS_lstring var_key_7401 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 179)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 179)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 179)), temp_2.readProperty_mExtensionGetterName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 179)) ;
  {
  const GALGAS_extensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7401, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 180)) ;
  }
  {
  const GALGAS_extensionGetterAST temp_4 = this ;
  const GALGAS_extensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7401, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 181)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 181)) COMMA_SOURCE_FILE ("extension-getter.galgas", 181)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-getter.galgas", 183)).operator_not (SOURCE_FILE ("extension-getter.galgas", 183)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-getter.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 184)) ;
      }
    }
  }
  const GALGAS_extensionGetterAST temp_9 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_7891 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-getter.galgas", 189)) ;
  if (NULL != objectArray_7891) {
    macroValidSharedObject (objectArray_7891, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_extensionGetterAST temp_10 = this ;
    const GALGAS_extensionGetterAST temp_11 = this ;
    const GALGAS_extensionGetterAST temp_12 = this ;
    objectArray_7891->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionGetterName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("extension-getter.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 190)) ;
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
  GALGAS_lstring var_nameForUsefulness_9690 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 226)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9690, var_nameForUsefulness_9690, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 227)) ;
  }
  const GALGAS_extensionGetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_9872 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 228)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_9872, var_nameForUsefulness_9690 COMMA_SOURCE_FILE ("extension-getter.galgas", 229)) ;
  }
  const GALGAS_extensionGetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_10052 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 231)) ;
  GALGAS_string var_selfObjectNameNew_10162 ;
  GALGAS_string var_selfObjectAccessorNew_10198 ;
  GALGAS_bool var_implementedAsFunctionNew_10235 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_10052, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 236)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 236)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectNameNew_10162 = GALGAS_string ("this") ;
      var_selfObjectAccessorNew_10198 = GALGAS_string ("this->") ;
      var_implementedAsFunctionNew_10235 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameNew_10162 = GALGAS_string ("inObject") ;
    var_selfObjectAccessorNew_10198 = GALGAS_string ("inObject.") ;
    var_implementedAsFunctionNew_10235 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionGetterAST temp_5 = this ;
  GALGAS_analysisContext var_analysisContextNew_10579 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameNew_10162, GALGAS_selfAvailability::constructor_available (var_selfType_10052, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("extension-getter.galgas", 250)), var_selfObjectAccessorNew_10198, temp_5.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 246)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_11540 ;
  GALGAS_unifiedTypeMapEntry var_returnType_11560 ;
  GALGAS_string var_returnVariableCppName_11591 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_11637 ;
  {
  const GALGAS_extensionGetterAST temp_6 = this ;
  GALGAS_typedPropertyList temp_7 ;
  const enumGalgasBool test_8 = extensionGetter_definition (var_selfType_10052, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 260)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 260)).operator_or (GALGAS_bool (kIsEqual, extensionGetter_definition (var_selfType_10052, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 260)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-getter.galgas", 260)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 260)).operator_or (GALGAS_bool (kIsEqual, extensionGetter_definition (var_selfType_10052, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 260)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_sharedMapEntryType (SOURCE_FILE ("extension-getter.galgas", 260)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 260)).boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = extensionGetter_definition (var_selfType_10052, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 261)).readProperty_mAllTypedPropertyList () ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-getter.galgas", 262)) ;
  }
  const GALGAS_extensionGetterAST temp_9 = this ;
  const GALGAS_extensionGetterAST temp_10 = this ;
  const GALGAS_extensionGetterAST temp_11 = this ;
  const GALGAS_extensionGetterAST temp_12 = this ;
  routine_analyzeFunctionBody (var_nameForUsefulness_9690, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_10579, ioArgument_ioTypeMap, temp_6.readProperty_mExtensionGetterFormalInputParameterList (), temp_7, var_selfObjectAccessorNew_10198, temp_9.readProperty_mExtensionGetterInstructionList (), temp_10.readProperty_mExtensionGetterReturnedVariableName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_11540, var_returnType_11560, var_returnVariableCppName_11591, var_semanticInstructionListForGeneration_11637, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 254)) ;
  }
  const GALGAS_extensionGetterAST temp_13 = this ;
  const GALGAS_extensionGetterAST temp_14 = this ;
  const GALGAS_extensionGetterAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (temp_13.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 276)), GALGAS_extensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_selfType_10052, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 279)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 279)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 279)).add_operation (temp_14.readProperty_mExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 279)), var_selfType_10052, temp_15.readProperty_mExtensionGetterName ().readProperty_string (), var_implementedAsFunctionNew_10235, var_returnType_11560, var_returnVariableCppName_11591, var_formalParameterListForGeneration_11540, extensionGetter_definition (var_selfType_10052, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 286)).readProperty_mAllTypedPropertyList (), var_semanticInstructionListForGeneration_11637  COMMA_SOURCE_FILE ("extension-getter.galgas", 277))  COMMA_SOURCE_FILE ("extension-getter.galgas", 275)) ;
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
  ioArgument_ioExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-getter.galgas", 308)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionGetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionGetterForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-getter.galgas", 331)) ;
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
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 340)).readProperty_mTypeName ().readProperty_string (), temp_3.readProperty_mExtensionGetterName (), temp_4.readProperty_mExtensionGetterFormalParameterList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 343)) COMMA_SOURCE_FILE ("extension-getter.galgas", 339))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionGetterForGeneration temp_6 = this ;
    const GALGAS_extensionGetterForGeneration temp_7 = this ;
    const GALGAS_extensionGetterForGeneration temp_8 = this ;
    const GALGAS_extensionGetterForGeneration temp_9 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 347)).readProperty_mTypeName ().readProperty_string (), temp_7.readProperty_mExtensionGetterName (), temp_8.readProperty_mExtensionGetterFormalParameterList (), temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 346))) ;
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
  cEnumerator_formalInputParameterListForGeneration enumerator_16063 (temp_0.readProperty_mExtensionGetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_16063.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16063.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 362)) ;
    enumerator_16063.gotoNextObject () ;
  }
  const GALGAS_extensionGetterForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 364)) ;
  const GALGAS_extensionGetterForGeneration temp_2 = this ;
  GALGAS_formalInputParameterListForGeneration var_extensionReaderFormalParameterList_16276 = temp_2.readProperty_mExtensionGetterFormalParameterList () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_extensionGetterForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_extensionGetterForGeneration temp_5 = this ;
      var_extensionReaderFormalParameterList_16276.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas", 368)), temp_5.readProperty_mReceiverType (), GALGAS_string ("inObject"), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 371))  COMMA_SOURCE_FILE ("extension-getter.galgas", 371)), GALGAS_bool (true), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 367)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_6 = this ;
      const GALGAS_extensionGetterForGeneration temp_7 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 376)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 375)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 376)).add_operation (temp_7.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 377))  COMMA_SOURCE_FILE ("extension-getter.galgas", 375)) ;
      GALGAS_string var_code_17110 ;
      {
      const GALGAS_extensionGetterForGeneration temp_8 = this ;
      const GALGAS_extensionGetterForGeneration temp_9 = this ;
      const GALGAS_extensionGetterForGeneration temp_10 = this ;
      const GALGAS_extensionGetterForGeneration temp_11 = this ;
      routine_generateFunction (GALGAS_string ("extensionGetter_").add_operation (temp_8.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 379)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_16276, temp_9.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("C_Compiler"), temp_10.readProperty_mResultType (), temp_11.readProperty_mResultVarCppName (), GALGAS_bool (false), GALGAS_bool (false), var_code_17110, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 378)) ;
      }
      const GALGAS_extensionGetterForGeneration temp_12 = this ;
      const GALGAS_extensionGetterForGeneration temp_13 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 391)).readProperty_mTypeName ().readProperty_string (), temp_13.readProperty_mExtensionGetterName (), var_code_17110 COMMA_SOURCE_FILE ("extension-getter.galgas", 390))) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_extensionGetterForGeneration temp_14 = this ;
    extensionMethod_addHeaderFileName (temp_14.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 396)) ;
    const GALGAS_extensionGetterForGeneration temp_15 = this ;
    GALGAS_unifiedTypeMapEntry var_baseType_17442 = temp_15.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_17487 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 399)).isValid ()) {
      uint32_t variant_17503 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 399)).uintValue () ;
      bool loop_17503 = true ;
      while (loop_17503) {
        loop_17503 = var_searching_17487.isValid () ;
        if (loop_17503) {
          loop_17503 = var_searching_17487.boolValue () ;
        }
        if (loop_17503 && (0 == variant_17503)) {
          loop_17503 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas", 399)) ;
        }
        if (loop_17503) {
          variant_17503 -- ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = extensionGetter_definition (var_baseType_17442, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 400)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("extension-getter.galgas", 400)).operator_not (SOURCE_FILE ("extension-getter.galgas", 400)).boolEnum () ;
            if (kBoolTrue == test_16) {
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                const GALGAS_extensionGetterForGeneration temp_18 = this ;
                test_17 = extensionGetter_definition (extensionGetter_definition (var_baseType_17442, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 401)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 401)).readProperty_mGetterMap ().getter_hasKey (temp_18.readProperty_mExtensionGetterName () COMMA_SOURCE_FILE ("extension-getter.galgas", 401)).boolEnum () ;
                if (kBoolTrue == test_17) {
                  var_baseType_17442 = extensionGetter_definition (var_baseType_17442, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 402)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_17) {
                var_searching_17487 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_16) {
            var_searching_17487 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionGetterForGeneration temp_19 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_baseType_17442, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 411)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 410)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 411)).add_operation (temp_19.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 412))  COMMA_SOURCE_FILE ("extension-getter.galgas", 410)) ;
    GALGAS_string var_extensionGetterCode_18462 ;
    {
    const GALGAS_extensionGetterForGeneration temp_20 = this ;
    const GALGAS_extensionGetterForGeneration temp_21 = this ;
    const GALGAS_extensionGetterForGeneration temp_22 = this ;
    const GALGAS_extensionGetterForGeneration temp_23 = this ;
    const GALGAS_extensionGetterForGeneration temp_24 = this ;
    routine_generateExtensionGetterNew (GALGAS_string ("cPtr_").add_operation (extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 414)).readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 414)).add_operation (GALGAS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 414)).add_operation (temp_21.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 414)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_16276, temp_22.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("C_Compiler"), temp_23.readProperty_mResultType (), temp_24.readProperty_mResultVarCppName (), var_extensionGetterCode_18462, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 413)) ;
    }
    const GALGAS_extensionGetterForGeneration temp_25 = this ;
    const GALGAS_extensionGetterForGeneration temp_26 = this ;
    const GALGAS_extensionGetterForGeneration temp_27 = this ;
    const GALGAS_extensionGetterForGeneration temp_28 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, extensionGetter_definition (temp_25.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 424)).readProperty_mTypeName ().readProperty_string (), temp_26.readProperty_mExtensionGetterName (), temp_27.readProperty_mExtensionGetterFormalParameterList (), var_extensionGetterCode_18462, temp_28.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 423))) ;
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
  result_result = GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 126)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 126)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 126)) ;
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
  GALGAS_lstring var_key_6219 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 140)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 140)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 140)), temp_2.readProperty_mExtensionMethodName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-method.galgas", 139)) ;
  {
  const GALGAS_extensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6219, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 143)) ;
  }
  {
  const GALGAS_extensionMethodAST temp_4 = this ;
  const GALGAS_extensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6219, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 144)), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("extension-method.galgas", 144)) COMMA_SOURCE_FILE ("extension-method.galgas", 144)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-method.galgas", 146)).operator_not (SOURCE_FILE ("extension-method.galgas", 146)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-method.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 147)) ;
      }
    }
  }
  const GALGAS_extensionMethodAST temp_9 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_6722 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-method.galgas", 152)) ;
  if (NULL != objectArray_6722) {
    macroValidSharedObject (objectArray_6722, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_extensionMethodAST temp_10 = this ;
    const GALGAS_extensionMethodAST temp_11 = this ;
    objectArray_6722->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mExtensionMethodName (), temp_11.readProperty_mExtensionMethodFormalParameterList (), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("extension-method.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 153)) ;
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
  GALGAS_lstring var_nameForUsefulness_8472 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 188)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8472, var_nameForUsefulness_8472, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 189)) ;
  }
  const GALGAS_extensionMethodAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_8654 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 190)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_8654, var_nameForUsefulness_8472 COMMA_SOURCE_FILE ("extension-method.galgas", 191)) ;
  }
  const GALGAS_extensionMethodAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_8835 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 193)) ;
  GALGAS_string var_selfObjectNameNew_8908 ;
  GALGAS_string var_selfObjectAccessorNew_8944 ;
  GALGAS_bool var_implementedAsFunction_8978 ;
  GALGAS_bool var_isReferenceClass_9033 = GALGAS_bool (false) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_isReference_9127 ;
    const bool optionalResult9097 = extensionGetter_definition (var_selfType_8835, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 199)).readProperty_mTypeKindEnum ().optional_classType (var_isReference_9127) ;
    if (!optionalResult9097) {
      test_4 = kBoolFalse ;
    }
    if (kBoolTrue == test_4) {
      var_isReferenceClass_9033 = var_isReference_9127 ;
      var_selfObjectNameNew_8908 = GALGAS_string ("this") ;
      var_selfObjectAccessorNew_8944 = GALGAS_string ("this->") ;
      var_implementedAsFunction_8978 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameNew_8908 = GALGAS_string ("inObject") ;
    var_selfObjectAccessorNew_8944 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_8978 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionMethodAST temp_5 = this ;
  GALGAS_analysisContext var_analysisContextNew_9446 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameNew_8908, GALGAS_selfAvailability::constructor_available (var_selfType_8835, GALGAS_bool (false), var_isReferenceClass_9033  COMMA_SOURCE_FILE ("extension-method.galgas", 214)), var_selfObjectAccessorNew_8944, temp_5.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-method.galgas", 210)) ;
  GALGAS_bool var_isRefClass_9763 = GALGAS_bool (false) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    GALGAS_bool var_reference_9855 ;
    const bool optionalResult9827 = extensionGetter_definition (var_selfType_8835, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 219)).readProperty_mTypeKindEnum ().optional_classType (var_reference_9855) ;
    if (!optionalResult9827) {
      test_6 = kBoolFalse ;
    }
    if (kBoolTrue == test_6) {
      var_isRefClass_9763 = var_reference_9855 ;
    }
  }
  GALGAS_typedPropertyList var_mutableProperties_9918 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 222)) ;
  GALGAS_typedPropertyList var_nonMutableProperties_9969 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 223)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_selfType_8835, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 224)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-method.galgas", 224)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_nonMutableProperties_9969 = extensionGetter_definition (var_selfType_8835, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 225)).readProperty_mAllTypedPropertyList () ;
    }
  }
  if (kBoolFalse == test_7) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      GALGAS_bool var_isReference_10214 ;
      const bool optionalResult10184 = extensionGetter_definition (var_selfType_8835, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 226)).readProperty_mTypeKindEnum ().optional_classType (var_isReference_10214) ;
      if (!optionalResult10184) {
        test_8 = kBoolFalse ;
      }
      if (kBoolTrue == test_8) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_isReference_10214.boolEnum () ;
          if (kBoolTrue == test_9) {
            var_mutableProperties_9918 = extensionGetter_definition (var_selfType_8835, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 228)).readProperty_mAllTypedPropertyList () ;
          }
        }
        if (kBoolFalse == test_9) {
          var_nonMutableProperties_9969 = extensionGetter_definition (var_selfType_8835, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 230)).readProperty_mAllTypedPropertyList () ;
        }
      }
    }
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_10783 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_10825 ;
  {
  const GALGAS_extensionMethodAST temp_10 = this ;
  const GALGAS_extensionMethodAST temp_11 = this ;
  const GALGAS_extensionMethodAST temp_12 = this ;
  routine_analyzeRoutineBody (var_nameForUsefulness_8472, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_9446, ioArgument_ioTypeMap, temp_10.readProperty_mExtensionMethodFormalParameterList (), var_nonMutableProperties_9969, var_mutableProperties_9918, temp_11.readProperty_mExtensionMethodInstructionList (), temp_12.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_10783, var_formalParameterListForGeneration_10825, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 233)) ;
  }
  const GALGAS_extensionMethodAST temp_13 = this ;
  const GALGAS_extensionMethodAST temp_14 = this ;
  const GALGAS_extensionMethodAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (temp_13.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 248)), GALGAS_extensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_8835, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 251)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 251)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 251)).add_operation (temp_14.readProperty_mExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 251)), var_selfType_8835, temp_15.readProperty_mExtensionMethodName ().readProperty_string (), var_implementedAsFunction_8978, var_formalParameterListForGeneration_10825, extensionGetter_definition (var_selfType_8835, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 256)).readProperty_mAllTypedPropertyList (), var_semanticInstructionListForGeneration_10783  COMMA_SOURCE_FILE ("extension-method.galgas", 249))  COMMA_SOURCE_FILE ("extension-method.galgas", 247)) ;
}
