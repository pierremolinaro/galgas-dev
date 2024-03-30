#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-25.h"

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
      GALGAS_formalParameterListForGeneration var_extensionMethodFormalParameterList_15381 = temp_2.readProperty_mExtensionMethodFormalParameterList () ;
      {
      const GALGAS_extensionMethodForGeneration temp_3 = this ;
      var_extensionMethodFormalParameterList_15381.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas", 338)), GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.galgas", 339)), temp_3.readProperty_mReceiverType (), GALGAS_lstring::class_func_new (GALGAS_string ("self"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 341)), GALGAS_string ("inObject"), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 337)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_4 = this ;
      const GALGAS_extensionMethodForGeneration temp_5 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 345)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 345)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 345)).add_operation (temp_5.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 345))  COMMA_SOURCE_FILE ("extension-method.galgas", 345)) ;
      GALGAS_string var_code_16334 ;
      {
      const GALGAS_extensionMethodForGeneration temp_6 = this ;
      const GALGAS_extensionMethodForGeneration temp_7 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GALGAS_bool (false), GALGAS_string ("extensionMethod_").add_operation (temp_6.readProperty_mExtensionMethodName ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 348)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_15381, temp_7.readProperty_mSemanticInstructionListForGeneration (), GALGAS_bool (false), GALGAS_string ("Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_16334, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 346)) ;
      }
      const GALGAS_extensionMethodForGeneration temp_8 = this ;
      const GALGAS_extensionMethodForGeneration temp_9 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 360)).readProperty_typeName ().readProperty_string (), temp_9.readProperty_mExtensionMethodName (), var_code_16334 COMMA_SOURCE_FILE ("extension-method.galgas", 359))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionMethodForGeneration temp_10 = this ;
    extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 365)) ;
    const GALGAS_extensionMethodForGeneration temp_11 = this ;
    cEnumerator_formalParameterListForGeneration enumerator_16666 (temp_11.readProperty_mExtensionMethodFormalParameterList (), EnumerationOrder::up) ;
    while (enumerator_16666.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_16666.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 367)) ;
      enumerator_16666.gotoNextObject () ;
    }
    const GALGAS_extensionMethodForGeneration temp_12 = this ;
    GALGAS_unifiedTypeMapEntry var_baseType_16816 = temp_12.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_16860 = GALGAS_bool (true) ;
    if (GALGAS_uint::class_func_max (SOURCE_FILE ("extension-method.galgas", 371)).isValid ()) {
      uint32_t variant_16881 = GALGAS_uint::class_func_max (SOURCE_FILE ("extension-method.galgas", 371)).uintValue () ;
      bool loop_16881 = true ;
      while (loop_16881) {
        loop_16881 = var_searching_16860.isValid () ;
        if (loop_16881) {
          loop_16881 = var_searching_16860.boolValue () ;
        }
        if (loop_16881 && (0 == variant_16881)) {
          loop_16881 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas", 371)) ;
        }
        if (loop_16881) {
          variant_16881 -- ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = extensionGetter_definition (var_baseType_16816, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 372)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-method.galgas", 372)).operator_not (SOURCE_FILE ("extension-method.galgas", 372)).boolEnum () ;
            if (kBoolTrue == test_13) {
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                const GALGAS_extensionMethodForGeneration temp_15 = this ;
                test_14 = extensionGetter_definition (extensionGetter_definition (var_baseType_16816, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 373)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 373)).readProperty_instanceMethodMap ().getter_hasKey (temp_15.readProperty_mExtensionMethodName () COMMA_SOURCE_FILE ("extension-method.galgas", 373)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  var_baseType_16816 = extensionGetter_definition (var_baseType_16816, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 374)).readProperty_superType () ;
                }
              }
              if (kBoolFalse == test_14) {
                var_searching_16860 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_13) {
            var_searching_16860 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionMethodForGeneration temp_16 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (var_baseType_16816, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 383)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 383)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 383)).add_operation (temp_16.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 384))  COMMA_SOURCE_FILE ("extension-method.galgas", 382)) ;
    GALGAS_string var_methodImplementation_17653 ;
    {
    const GALGAS_extensionMethodForGeneration temp_17 = this ;
    const GALGAS_extensionMethodForGeneration temp_18 = this ;
    const GALGAS_extensionMethodForGeneration temp_19 = this ;
    const GALGAS_extensionMethodForGeneration temp_20 = this ;
    routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_17.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionMethodName (), temp_19.readProperty_mExtensionMethodFormalParameterList (), temp_20.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_17653, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 385)) ;
    }
    const GALGAS_extensionMethodForGeneration temp_21 = this ;
    const GALGAS_extensionMethodForGeneration temp_22 = this ;
    const GALGAS_extensionMethodForGeneration temp_23 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, extensionGetter_definition (temp_21.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 394)).readProperty_typeName ().readProperty_string (), temp_22.readProperty_mExtensionMethodName (), temp_23.readProperty_mExtensionMethodFormalParameterList (), var_methodImplementation_17653 COMMA_SOURCE_FILE ("extension-method.galgas", 393))) ;
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
  GALGAS_lstring var_key_7123 = GALGAS_lstring::class_func_new (GALGAS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 159)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 159)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 159)), temp_2.readProperty_mExtensionSetterName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 158)) ;
  {
  const GALGAS_extensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7123, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 162)) ;
  }
  {
  const GALGAS_extensionSetterAST temp_4 = this ;
  const GALGAS_extensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7123, GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 163)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 163)) COMMA_SOURCE_FILE ("extension-setter.galgas", 163)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_extensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-setter.galgas", 165)).operator_not (SOURCE_FILE ("extension-setter.galgas", 165)).boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_extensionSetterAST temp_8 = this ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GALGAS_extensionSetterMapForType::class_func_emptyMap (SOURCE_FILE ("extension-setter.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 166)) ;
      }
    }
  }
  const GALGAS_extensionSetterAST temp_9 = this ;
  cMapElement_extensionSetterMapForBuildingContext * objectArray_7624 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_9.readProperty_mTypeName (), kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-setter.galgas", 171)) ;
  if (nullptr != objectArray_7624) {
    macroValidSharedObject (objectArray_7624, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    const GALGAS_extensionSetterAST temp_10 = this ;
    const GALGAS_extensionSetterAST temp_11 = this ;
    objectArray_7624->mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionSetterName (), temp_11.readProperty_mExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 172)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_lstring var_nameForUsefulness_9208 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 205)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9208, var_nameForUsefulness_9208, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 206)) ;
  }
  const GALGAS_extensionSetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_9386 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 207)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_9386, var_nameForUsefulness_9208 COMMA_SOURCE_FILE ("extension-setter.galgas", 208)) ;
  }
  const GALGAS_extensionSetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_9579 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 210)) ;
  GALGAS_string var_selfObjectName_9652 ;
  GALGAS_string var_selfObjectAccessor_9681 ;
  GALGAS_bool var_implementedAsFunction_9712 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_9579, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 215)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-setter.galgas", 215)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_selfObjectName_9652 = GALGAS_string ("object") ;
      var_selfObjectAccessor_9681 = GALGAS_string ("object->") ;
      var_implementedAsFunction_9712 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectName_9652 = GALGAS_string ("ioObject") ;
    var_selfObjectAccessor_9681 = GALGAS_string ("ioObject.") ;
    var_implementedAsFunction_9712 = GALGAS_bool (true) ;
  }
  const GALGAS_extensionSetterAST temp_5 = this ;
  GALGAS_analysisContext var_analysisContext_10072 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_9652, GALGAS_selfAvailability::class_func_available (var_selfType_9579, GALGAS_selfMutability::class_func_selfAndPropertiesAreMutable (SOURCE_FILE ("extension-setter.galgas", 229)), GALGAS_bool (true), GALGAS_bool (true)  COMMA_SOURCE_FILE ("extension-setter.galgas", 229)), var_selfObjectAccessor_9681, temp_5.readProperty_requiresSelfForAccessingProperty (), inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 225)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_10836 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_10882 ;
  {
  const GALGAS_extensionSetterAST temp_6 = this ;
  const GALGAS_extensionSetterAST temp_7 = this ;
  const GALGAS_extensionSetterAST temp_8 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_9208, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_10072, ioArgument_ioTypeMap, temp_6.readProperty_mExtensionSetterFormalParameterList (), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("extension-setter.galgas", 239)), extensionGetter_definition (var_selfType_9579, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 240)).readProperty_allTypedPropertyList (), temp_7.readProperty_mExtensionSetterInstructionList (), temp_8.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_10836, var_formalParameterListForGeneration_10882, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 233)) ;
  }
  const GALGAS_extensionSetterAST temp_9 = this ;
  const GALGAS_extensionSetterAST temp_10 = this ;
  const GALGAS_extensionSetterAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension setter ").add_operation (temp_9.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 248)), GALGAS_extensionSetterForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (extensionGetter_definition (var_selfType_9579, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 251)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 251)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 251)).add_operation (temp_10.readProperty_mExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 251)), var_selfType_9579, temp_11.readProperty_mExtensionSetterName ().readProperty_string (), var_implementedAsFunction_9712, var_formalParameterListForGeneration_10882, extensionGetter_definition (var_selfType_9579, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 256)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_10836  COMMA_SOURCE_FILE ("extension-setter.galgas", 249))  COMMA_SOURCE_FILE ("extension-setter.galgas", 247)) ;
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
  ioArgument_ioExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-setter.galgas", 278)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_extensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-setter.galgas", 299)) ;
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
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 309)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionSetterName (), temp_4.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas", 308))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionSetterForGeneration temp_5 = this ;
    const GALGAS_extensionSetterForGeneration temp_6 = this ;
    const GALGAS_extensionSetterForGeneration temp_7 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 315)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mExtensionSetterName (), temp_7.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas", 314))) ;
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
  cEnumerator_formalParameterListForGeneration enumerator_14816 (temp_0.readProperty_mExtensionSetterFormalParameterList (), EnumerationOrder::up) ;
  while (enumerator_14816.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_14816.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 330)) ;
    enumerator_14816.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_extensionSetterForGeneration temp_2 = this ;
    test_1 = temp_2.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_extensionSetterForGeneration temp_3 = this ;
      GALGAS_formalParameterListForGeneration var_extensionSetterFormalParameterList_14979 = temp_3.readProperty_mExtensionSetterFormalParameterList () ;
      {
      const GALGAS_extensionSetterForGeneration temp_4 = this ;
      var_extensionSetterFormalParameterList_14979.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-setter.galgas", 335)), GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.galgas", 336)), temp_4.readProperty_mReceiverType (), GALGAS_lstring::class_func_new (GALGAS_string ("self"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 338)), GALGAS_string ("ioObject"), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 334)) ;
      }
      const GALGAS_extensionSetterForGeneration temp_5 = this ;
      const GALGAS_extensionSetterForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 342)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 342)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 342)).add_operation (temp_6.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 342))  COMMA_SOURCE_FILE ("extension-setter.galgas", 342)) ;
      GALGAS_string var_code_15928 ;
      {
      const GALGAS_extensionSetterForGeneration temp_7 = this ;
      const GALGAS_extensionSetterForGeneration temp_8 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GALGAS_bool (false), GALGAS_string ("extensionSetter_").add_operation (temp_7.readProperty_mExtensionSetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 345)), ioArgument_ioInclusionSet, var_extensionSetterFormalParameterList_14979, temp_8.readProperty_mSemanticInstructionListForGeneration (), GALGAS_bool (false), GALGAS_string ("Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_15928, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 343)) ;
      }
      const GALGAS_extensionSetterForGeneration temp_9 = this ;
      const GALGAS_extensionSetterForGeneration temp_10 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_9.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 357)).readProperty_typeName ().readProperty_string (), temp_10.readProperty_mExtensionSetterName (), var_code_15928 COMMA_SOURCE_FILE ("extension-setter.galgas", 356))) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_extensionSetterForGeneration temp_11 = this ;
    GALGAS_unifiedTypeMapEntry var_baseType_16194 = temp_11.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_16238 = GALGAS_bool (true) ;
    if (GALGAS_uint::class_func_max (SOURCE_FILE ("extension-setter.galgas", 364)).isValid ()) {
      uint32_t variant_16259 = GALGAS_uint::class_func_max (SOURCE_FILE ("extension-setter.galgas", 364)).uintValue () ;
      bool loop_16259 = true ;
      while (loop_16259) {
        loop_16259 = var_searching_16238.isValid () ;
        if (loop_16259) {
          loop_16259 = var_searching_16238.boolValue () ;
        }
        if (loop_16259 && (0 == variant_16259)) {
          loop_16259 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-setter.galgas", 364)) ;
        }
        if (loop_16259) {
          variant_16259 -- ;
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            test_12 = extensionGetter_definition (var_baseType_16194, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 365)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-setter.galgas", 365)).operator_not (SOURCE_FILE ("extension-setter.galgas", 365)).boolEnum () ;
            if (kBoolTrue == test_12) {
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                const GALGAS_extensionSetterForGeneration temp_14 = this ;
                test_13 = extensionGetter_definition (extensionGetter_definition (var_baseType_16194, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 366)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 366)).readProperty_setterMap ().getter_hasKey (temp_14.readProperty_mExtensionSetterName () COMMA_SOURCE_FILE ("extension-setter.galgas", 366)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  var_baseType_16194 = extensionGetter_definition (var_baseType_16194, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 367)).readProperty_superType () ;
                }
              }
              if (kBoolFalse == test_13) {
                var_searching_16238 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_12) {
            var_searching_16238 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionSetterForGeneration temp_15 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (var_baseType_16194, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 375)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 375)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 375)).add_operation (temp_15.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 375))  COMMA_SOURCE_FILE ("extension-setter.galgas", 375)) ;
    extensionMethod_addHeaderFileName (var_baseType_16194, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 376)) ;
    GALGAS_string var_setterImplementation_17098 ;
    {
    const GALGAS_extensionSetterForGeneration temp_16 = this ;
    const GALGAS_extensionSetterForGeneration temp_17 = this ;
    const GALGAS_extensionSetterForGeneration temp_18 = this ;
    const GALGAS_extensionSetterForGeneration temp_19 = this ;
    routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (extensionGetter_definition (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 378)).readProperty_typeName ().readProperty_string (), GALGAS_string::makeEmptyString (), temp_17.readProperty_mExtensionSetterName (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionSetterFormalParameterList (), temp_19.readProperty_mSemanticInstructionListForGeneration (), var_setterImplementation_17098, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 377)) ;
    }
    const GALGAS_extensionSetterForGeneration temp_20 = this ;
    const GALGAS_extensionSetterForGeneration temp_21 = this ;
    const GALGAS_extensionSetterForGeneration temp_22 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (inCompiler, extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 387)).readProperty_typeName ().readProperty_string (), temp_21.readProperty_mExtensionSetterName (), temp_22.readProperty_mExtensionSetterFormalParameterList (), var_setterImplementation_17098 COMMA_SOURCE_FILE ("extension-setter.galgas", 386))) ;
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
  result_result = GALGAS_string ("initializer @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 123)).add_operation (extensionGetter_keyRepresentation (temp_1.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 123)) ;
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
  GALGAS_lstring var_key_5678 = GALGAS_lstring::class_func_new (callExtensionGetter_keyRepresentation ((const cPtr_initializerAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 135)), temp_1.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 135)) ;
  {
  const GALGAS_initializerAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5678, temp_2, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 136)) ;
  }
  {
  const GALGAS_initializerAST temp_3 = this ;
  const GALGAS_initializerAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5678, GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 137)), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 137)) COMMA_SOURCE_FILE ("extension-initializer.galgas", 137)) ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_initializerAST temp_6 = this ;
    test_5 = ioArgument_ioExtensionInitializerForBuildingContext.getter_hasKey (temp_6.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-initializer.galgas", 139)).operator_not (SOURCE_FILE ("extension-initializer.galgas", 139)).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      const GALGAS_initializerAST temp_7 = this ;
      ioArgument_ioExtensionInitializerForBuildingContext.setter_insertKey (temp_7.readProperty_mTypeName (), GALGAS_extensionInitializerMapForType::class_func_emptyMap (SOURCE_FILE ("extension-initializer.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 140)) ;
      }
    }
  }
  const GALGAS_initializerAST temp_8 = this ;
  cMapElement_extensionInitializerForBuildingContext * objectArray_6126 = (cMapElement_extensionInitializerForBuildingContext *) ioArgument_ioExtensionInitializerForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_8.readProperty_mTypeName (), kSearchErrorMessage_extensionInitializerForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-initializer.galgas", 145)) ;
  if (nullptr != objectArray_6126) {
    macroValidSharedObject (objectArray_6126, cMapElement_extensionInitializerForBuildingContext) ;
    {
    const GALGAS_initializerAST temp_9 = this ;
    objectArray_6126->mProperty_mExtensionInitializerMapForType.setter_insertKey (var_key_5678, temp_9.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 146)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@initializerAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_initializerAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
                                                   GALGAS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_initializerAST temp_0 = this ;
  const GALGAS_initializerAST temp_1 = this ;
  GALGAS_lstring var_nameForUsefulness_7476 = function_initializerNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), temp_1.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 174)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7476, var_nameForUsefulness_7476, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 175)) ;
  }
  const GALGAS_initializerAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_7663 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 176)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7663, var_nameForUsefulness_7476 COMMA_SOURCE_FILE ("extension-initializer.galgas", 177)) ;
  }
  const GALGAS_initializerAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_7863 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 179)) ;
  GALGAS_string var_selfObjectNameString_7938 ;
  GALGAS_string var_selfObjectAccessorString_7975 ;
  GALGAS_bool var_isReferenceClass_8079 = GALGAS_bool (false) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_isReference_8175 ;
    const bool optionalResult8147 = extensionGetter_definition (var_selfType_7863, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 185)).readProperty_typeKind ().optional_classType (var_isReference_8175) ;
    if (!optionalResult8147) {
      test_4 = kBoolFalse ;
    }
    if (kBoolTrue == test_4) {
      var_isReferenceClass_8079 = var_isReference_8175 ;
      var_selfObjectNameString_7938 = GALGAS_string ("this") ;
      var_selfObjectAccessorString_7975 = GALGAS_string ("this->") ;
    }
  }
  if (kBoolFalse == test_4) {
    var_selfObjectNameString_7938 = GALGAS_string ("inObject") ;
    var_selfObjectAccessorString_7975 = GALGAS_string ("inObject.") ;
  }
  GALGAS_analysisContext var_analysisContextNew_9357 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameString_7938, GALGAS_selfAvailability::class_func_initializer (extensionGetter_definition (var_selfType_7863, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 216)).readProperty_allTypedPropertyList ()  COMMA_SOURCE_FILE ("extension-initializer.galgas", 216)), var_selfObjectAccessorString_7975, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 212)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_10804 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_10859 ;
  {
  const GALGAS_initializerAST temp_5 = this ;
  const GALGAS_initializerAST temp_6 = this ;
  const GALGAS_initializerAST temp_7 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_7476, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_9357, ioArgument_ioTypeMap, temp_5.readProperty_mFormalParameterList (), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("extension-initializer.galgas", 241)), extensionGetter_definition (var_selfType_7863, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas", 242)).readProperty_allTypedPropertyList (), temp_6.readProperty_mInstructionList (), temp_7.readProperty_mEndOfInitializerLocation (), var_semanticInstructionListForGeneration_10804, var_formalParameterListForGeneration_10859, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas", 235)) ;
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
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::class_func_emptyMap (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 169)) ;
      }
    }
  }
  const GALGAS_overridingAbstractExtensionGetterAST temp_4 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_7301 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_4.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 174)) ;
  if (nullptr != objectArray_7301) {
    macroValidSharedObject (objectArray_7301, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_overridingAbstractExtensionGetterAST temp_5 = this ;
    const GALGAS_overridingAbstractExtensionGetterAST temp_6 = this ;
    const GALGAS_overridingAbstractExtensionGetterAST temp_7 = this ;
    objectArray_7301->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mAbstractExtensionGetterName (), temp_6.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 175)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_unifiedTypeMapEntry var_selfType_9291 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 214)) ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_returnType_9373 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 216)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_selfType_9291, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 218)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 218)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 218)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_overridingAbstractExtensionGetterAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9291, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 219)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 219)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 219)), fixItArray4  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 219)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = extensionGetter_definition (var_selfType_9291, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 220)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_overridingAbstractExtensionGetterAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9291, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 221)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 221)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 221)), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 221)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_9964 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_10009 = extensionGetter_definition (var_selfType_9291, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 225)).readProperty_superType () ;
  GALGAS_functionSignature var_inheritedSignature_10078 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 226)) ;
  GALGAS_unifiedTypeMapEntry var_inheritedReturnType_10129 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 227)) ;
  GALGAS_location var_inheritedDeclarationLocation_10175 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 228)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 229)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 229)).isValid ()) {
    uint32_t variant_10223 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 229)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 229)).uintValue () ;
    bool loop_10223 = true ;
    while (loop_10223) {
      loop_10223 = var_superType_10009.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 230)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 230)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_9964.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 230)).isValid () ;
      if (loop_10223) {
        loop_10223 = var_superType_10009.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 230)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 230)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_9964.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 230)).boolValue () ;
      }
      if (loop_10223 && (0 == variant_10223)) {
        loop_10223 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 229)) ;
      }
      if (loop_10223) {
        variant_10223 -- ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          const GALGAS_overridingAbstractExtensionGetterAST temp_9 = this ;
          test_8 = extensionGetter_definition (var_superType_10009, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 231)).readProperty_getterMap ().getter_hasKey (temp_9.readProperty_mAbstractExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 231)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_methodQualifier var_qualifier_10630 ;
            const GALGAS_overridingAbstractExtensionGetterAST temp_10 = this ;
            GALGAS_methodKind joker_10508 ; // Joker input parameter
            GALGAS_bool joker_10585 ; // Joker input parameter
            GALGAS_string joker_10648 ; // Joker input parameter
            extensionGetter_definition (var_superType_10009, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 232)).readProperty_getterMap ().method_searchKey (temp_10.readProperty_mAbstractExtensionGetterName (), joker_10508, var_inheritedSignature_10078, var_inheritedDeclarationLocation_10175, joker_10585, var_inheritedReturnType_10129, var_qualifier_10630, joker_10648, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 232)) ;
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_10630.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 242)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_baseTypeName_9964 = extensionGetter_definition (var_superType_10009, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 243)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_10009 = extensionGetter_definition (var_superType_10009, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 246)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_9964.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_overridingAbstractExtensionGetterAST temp_13 = this ;
      TC_Array <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray14  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 249)) ;
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_9964.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_11036 = GALGAS_formalInputParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 253)) ;
      const GALGAS_overridingAbstractExtensionGetterAST temp_16 = this ;
      cEnumerator_formalInputParameterListAST enumerator_11184 (temp_16.readProperty_mAbstractExtensionGetterFormalInputParameterList (), EnumerationOrder::up) ;
      while (enumerator_11184.hasCurrentObject ()) {
        var_formalParameterListForGeneration_11036.addAssign_operation (enumerator_11184.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11184.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 257)), enumerator_11184.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_11184.current_mFormalArgumentName (HERE), enumerator_11184.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 255)) ;
        enumerator_11184.gotoNextObject () ;
      }
      {
      const GALGAS_overridingAbstractExtensionGetterAST temp_17 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_11036, var_returnType_9373, temp_17.readProperty_mAbstractExtensionGetterName ().readProperty_location (), var_inheritedSignature_10078, var_inheritedReturnType_10129, var_inheritedDeclarationLocation_10175, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 262)) ;
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
  ioArgument_ioOverridingAbstractExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 290)) ;
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
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::class_func_emptyMap (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 137)) ;
      }
    }
  }
  const GALGAS_overridingAbstractExtensionMethodAST temp_4 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_6257 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_4.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 142)) ;
  if (nullptr != objectArray_6257) {
    macroValidSharedObject (objectArray_6257, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_overridingAbstractExtensionMethodAST temp_5 = this ;
    const GALGAS_overridingAbstractExtensionMethodAST temp_6 = this ;
    objectArray_6257->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionMethodName (), temp_6.readProperty_mOverridingExtensionMethodFormalParameterList (), GALGAS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 143)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_unifiedTypeMapEntry var_selfType_8330 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 182)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_8330, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 184)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 184)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 184)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_overridingAbstractExtensionMethodAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_8330, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 185)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 185)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 185)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 185)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_8330, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 186)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_overridingAbstractExtensionMethodAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (extensionGetter_definition (var_selfType_8330, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 187)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 187)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 187)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 187)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_8892 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_8937 = extensionGetter_definition (var_selfType_8330, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 191)).readProperty_superType () ;
  GALGAS_formalParameterSignature var_inheritedSignature_8987 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 192)) ;
  GALGAS_location var_inheritedDeclarationLocation_9053 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 193)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 194)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 194)).isValid ()) {
    uint32_t variant_9101 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 194)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 194)).uintValue () ;
    bool loop_9101 = true ;
    while (loop_9101) {
      loop_9101 = var_superType_8937.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 195)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 195)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_8892.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 195)).isValid () ;
      if (loop_9101) {
        loop_9101 = var_superType_8937.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 195)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 195)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_8892.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 195)).boolValue () ;
      }
      if (loop_9101 && (0 == variant_9101)) {
        loop_9101 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 194)) ;
      }
      if (loop_9101) {
        variant_9101 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingAbstractExtensionMethodAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_8937, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 196)).readProperty_instanceMethodMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 196)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_9499 ;
            const GALGAS_overridingAbstractExtensionMethodAST temp_9 = this ;
            GALGAS_methodKind joker_9406 ; // Joker input parameter
            GALGAS_bool joker_9483 ; // Joker input parameter
            GALGAS_string joker_9517 ; // Joker input parameter
            extensionGetter_definition (var_superType_8937, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 197)).readProperty_instanceMethodMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_9406, var_inheritedSignature_8987, var_inheritedDeclarationLocation_9053, joker_9483, var_qualifier_9499, joker_9517, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 197)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_9499.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 206)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_8892 = extensionGetter_definition (var_superType_8937, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 207)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_8937 = extensionGetter_definition (var_superType_8937, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 210)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_8892.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingAbstractExtensionMethodAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 213)) ;
    }
  }
  GALGAS_localVarManager var_variableMap_9889 = GALGAS_localVarManager::class_func_new (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 216)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_10084 ;
  {
  const GALGAS_overridingAbstractExtensionMethodAST temp_14 = this ;
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionMethodFormalParameterList (), var_variableMap_9889, var_formalParameterListForGeneration_10084, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 217)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_8892.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      const GALGAS_overridingAbstractExtensionMethodAST temp_16 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_10084, temp_16.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_8987, var_inheritedDeclarationLocation_9053, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 226)) ;
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
  ioArgument_ioOverridingAbstractExtensionMethodListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 253)) ;
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
  result_result = GALGAS_string ("overriding extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 75)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 75)).add_operation (temp_1.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 75)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 90)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionSetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_unifiedTypeMapEntry var_selfType_6097 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 123)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_6097, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 125)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 125)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 125)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_overridingAbstractExtensionSetterAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_6097, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 126)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 126)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 126)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 126)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_6097, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 127)).readProperty_isConcrete ().boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_overridingAbstractExtensionSetterAST temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (extensionGetter_definition (var_selfType_6097, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 128)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 128)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 128)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 128)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_6659 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_6704 = extensionGetter_definition (var_selfType_6097, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 132)).readProperty_superType () ;
  GALGAS_formalParameterSignature var_inheritedSignature_6754 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 133)) ;
  GALGAS_location var_inheritedDeclarationLocation_6810 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 134)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 135)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 135)).isValid ()) {
    uint32_t variant_6858 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 135)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 135)).uintValue () ;
    bool loop_6858 = true ;
    while (loop_6858) {
      loop_6858 = var_superType_6704.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 136)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 136)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_6659.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 136)).isValid () ;
      if (loop_6858) {
        loop_6858 = var_superType_6704.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 136)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 136)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_6659.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 136)).boolValue () ;
      }
      if (loop_6858 && (0 == variant_6858)) {
        loop_6858 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 135)) ;
      }
      if (loop_6858) {
        variant_6858 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingAbstractExtensionSetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_6704, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 137)).readProperty_setterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionSetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 137)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_7162 ;
            const GALGAS_overridingAbstractExtensionSetterAST temp_9 = this ;
            GALGAS_methodKind joker_7131 ; // Joker input parameter
            GALGAS_bool joker_7154 ; // Joker input parameter
            GALGAS_string joker_7172 ; // Joker input parameter
            extensionGetter_definition (var_superType_6704, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 138)).readProperty_setterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionSetterName (), joker_7131, var_inheritedSignature_6754, joker_7154, var_qualifier_7162, joker_7172, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 138)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_7162.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 139)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_6659 = extensionGetter_definition (var_superType_6704, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 140)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_6704 = extensionGetter_definition (var_superType_6704, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 143)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_6659.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingAbstractExtensionSetterAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("this setter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 146)) ;
    }
  }
  GALGAS_localVarManager var_variableMap_7536 = GALGAS_localVarManager::class_func_new (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 149)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_7731 ;
  {
  const GALGAS_overridingAbstractExtensionSetterAST temp_14 = this ;
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionSetterFormalParameterList (), var_variableMap_7536, var_formalParameterListForGeneration_7731, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 150)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_6659.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      const GALGAS_overridingAbstractExtensionSetterAST temp_16 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_7731, temp_16.readProperty_mOverridingExtensionSetterName ().readProperty_location (), var_inheritedSignature_6754, var_inheritedDeclarationLocation_6810, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 159)) ;
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
  ioArgument_ioOverridingAbstractExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 185)) ;
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
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GALGAS_extensionGetterMapForType::class_func_emptyMap (SOURCE_FILE ("extension-overriding-getter.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 198)) ;
      }
    }
  }
  const GALGAS_overridingExtensionGetterAST temp_4 = this ;
  cMapElement_extensionGetterMapForBuildingContext * objectArray_8326 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_4.readProperty_mTypeName (), kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 203)) ;
  if (nullptr != objectArray_8326) {
    macroValidSharedObject (objectArray_8326, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    const GALGAS_overridingExtensionGetterAST temp_5 = this ;
    const GALGAS_overridingExtensionGetterAST temp_6 = this ;
    const GALGAS_overridingExtensionGetterAST temp_7 = this ;
    objectArray_8326->mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionGetterName (), temp_6.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_7.readProperty_mOverridingExtensionGetterFormalInputParameterList (), GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-getter.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 204)) ;
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

void cPtr_overridingExtensionGetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_lstring var_nameForUsefulness_10445 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 247)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10445, var_nameForUsefulness_10445, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 248)) ;
  }
  const GALGAS_overridingExtensionGetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_10633 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 249)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_10633, var_nameForUsefulness_10445 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 250)) ;
  }
  const GALGAS_overridingExtensionGetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_10826 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 252)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_10826, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 254)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas", 254)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 254)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionGetterAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension getter: '@").add_operation (extensionGetter_definition (var_selfType_10826, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 255)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 255)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 255)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 255)) ;
    }
  }
  GALGAS_string var_baseTypeName_11169 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_11214 = extensionGetter_definition (var_selfType_10826, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 259)).readProperty_superType () ;
  GALGAS_functionSignature var_inheritedSignature_11283 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("extension-overriding-getter.galgas", 260)) ;
  GALGAS_unifiedTypeMapEntry var_inheritedReturnType_11313 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-getter.galgas", 261)) ;
  GALGAS_location var_inheritedDeclarationLocation_11379 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 262)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 263)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 263)).isValid ()) {
    uint32_t variant_11427 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 263)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 263)).uintValue () ;
    bool loop_11427 = true ;
    while (loop_11427) {
      loop_11427 = var_superType_11214.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 264)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 264)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_11169.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 264)).isValid () ;
      if (loop_11427) {
        loop_11427 = var_superType_11214.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 264)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 264)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_11169.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 264)).boolValue () ;
      }
      if (loop_11427 && (0 == variant_11427)) {
        loop_11427 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-getter.galgas", 263)) ;
      }
      if (loop_11427) {
        variant_11427 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingExtensionGetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_11214, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 265)).readProperty_getterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 265)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_11855 ;
            const GALGAS_overridingExtensionGetterAST temp_9 = this ;
            GALGAS_methodKind joker_11716 ; // Joker input parameter
            GALGAS_bool joker_11793 ; // Joker input parameter
            GALGAS_string joker_11873 ; // Joker input parameter
            extensionGetter_definition (var_superType_11214, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 266)).readProperty_getterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionGetterName (), joker_11716, var_inheritedSignature_11283, var_inheritedDeclarationLocation_11379, joker_11793, var_inheritedReturnType_11313, var_qualifier_11855, joker_11873, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 266)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_11855.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-getter.galgas", 276)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_11169 = extensionGetter_definition (var_superType_11214, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 277)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_11214 = extensionGetter_definition (var_superType_11214, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 280)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_11169.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingExtensionGetterAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 283)) ;
    }
  }
  const GALGAS_overridingExtensionGetterAST temp_14 = this ;
  GALGAS_analysisContext var_analysisContext_12241 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("this"), GALGAS_selfAvailability::class_func_available (var_selfType_10826, GALGAS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-getter.galgas", 290)), GALGAS_bool (false), GALGAS_bool (true)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 290)), GALGAS_string ("object."), temp_14.readProperty_requiresSelfForAccessingProperty (), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 286)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_13250 ;
  GALGAS_unifiedTypeMapEntry var_returnType_13313 ;
  GALGAS_string var_returnVariableCppName_13341 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_13410 ;
  {
  const GALGAS_overridingExtensionGetterAST temp_15 = this ;
  GALGAS_typedPropertyList temp_16 ;
  const enumGalgasBool test_17 = extensionGetter_definition (var_selfType_10826, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 300)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas", 300)).operator_or (GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_10826, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 300)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-overriding-getter.galgas", 300)))) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 300)).boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = extensionGetter_definition (var_selfType_10826, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 301)).readProperty_allTypedPropertyList () ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("extension-overriding-getter.galgas", 302)) ;
  }
  const GALGAS_overridingExtensionGetterAST temp_18 = this ;
  const GALGAS_overridingExtensionGetterAST temp_19 = this ;
  const GALGAS_overridingExtensionGetterAST temp_20 = this ;
  const GALGAS_overridingExtensionGetterAST temp_21 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_10445, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_12241, ioArgument_ioTypeMap, temp_15.readProperty_mOverridingExtensionGetterFormalInputParameterList (), temp_16, GALGAS_string ("this->"), temp_18.readProperty_mOverridingExtensionGetterInstructionList (), temp_19.readProperty_mOverridingExtensionGetterReturnedVariableName (), temp_20.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_21.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_13250, var_returnType_13313, var_returnVariableCppName_13341, var_semanticInstructionListForGeneration_13410, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 294)) ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_11169.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_22) {
      {
      const GALGAS_overridingExtensionGetterAST temp_23 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_13250, var_returnType_13313, temp_23.readProperty_mOverridingExtensionGetterName ().readProperty_location (), var_inheritedSignature_11283, var_inheritedReturnType_11313, var_inheritedDeclarationLocation_11379, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 316)) ;
      }
    }
  }
  const GALGAS_overridingExtensionGetterAST temp_24 = this ;
  const GALGAS_overridingExtensionGetterAST temp_25 = this ;
  const GALGAS_overridingExtensionGetterAST temp_26 = this ;
  const GALGAS_overridingExtensionGetterAST temp_27 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension getter ").add_operation (temp_24.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 327)), GALGAS_overrideExtensionGetterForGeneration::class_func_new (GALGAS_bool (false), GALGAS_string ("getter-").add_operation (temp_25.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 330)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 330)).add_operation (temp_26.readProperty_mOverridingExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 330)), var_selfType_10826, var_baseTypeName_11169, temp_27.readProperty_mOverridingExtensionGetterName ().readProperty_string (), var_returnType_13313, var_returnVariableCppName_13341, var_formalParameterListForGeneration_13250, extensionGetter_definition (var_selfType_10826, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 337)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_13410  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 328))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 326)) ;
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
  ioArgument_ioOverridingExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 359)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overrideExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_overrideExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-getter.galgas", 382)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 391)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 391))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 391)) ;
  GALGAS_string var_extensionGetterCode_17751 ;
  {
  const GALGAS_overrideExtensionGetterForGeneration temp_1 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_2 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_3 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_4 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_5 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_6 = this ;
  routine_generateExtensionGetterNew_3F__26__3F__3F__3F__3F__3F__21_ (GALGAS_string ("cPtr_").add_operation (extensionGetter_definition (temp_1.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 393)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 393)).add_operation (GALGAS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 393)).add_operation (temp_2.readProperty_mOverridingExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 393)), ioArgument_ioInclusionSet, temp_3.readProperty_mOverridingExtensionGetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("Compiler"), temp_5.readProperty_mResultType (), temp_6.readProperty_mResultVarCppName (), var_extensionGetterCode_17751, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 392)) ;
  }
  const GALGAS_overrideExtensionGetterForGeneration temp_7 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_8 = this ;
  const GALGAS_overrideExtensionGetterForGeneration temp_9 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 403)).readProperty_typeName ().readProperty_string (), temp_8.readProperty_mOverridingExtensionGetterName (), var_extensionGetterCode_17751, temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 402))) ;
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
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GALGAS_extensionMethodMapForType::class_func_emptyMap (SOURCE_FILE ("extension-overriding-method.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 164)) ;
      }
    }
  }
  const GALGAS_overridingExtensionMethodAST temp_4 = this ;
  cMapElement_extensionMethodMapForBuildingContext * objectArray_7547 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_4.readProperty_mTypeName (), kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 169)) ;
  if (nullptr != objectArray_7547) {
    macroValidSharedObject (objectArray_7547, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    const GALGAS_overridingExtensionMethodAST temp_5 = this ;
    const GALGAS_overridingExtensionMethodAST temp_6 = this ;
    objectArray_7547->mProperty_mExtensionMethodMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionMethodName (), temp_6.readProperty_mOverridingExtensionMethodFormalParameterList (), GALGAS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-method.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 170)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_lstring var_nameForUsefulness_9200 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 203)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9200, var_nameForUsefulness_9200, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 204)) ;
  }
  const GALGAS_overridingExtensionMethodAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_9388 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 205)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_9388, var_nameForUsefulness_9200 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 206)) ;
  }
  const GALGAS_overridingExtensionMethodAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_9581 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 208)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_9581, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 210)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-method.galgas", 210)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 210)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionMethodAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_9581, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 211)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 211)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 211)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 211)) ;
    }
  }
  GALGAS_string var_baseTypeName_9924 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_9969 = extensionGetter_definition (var_selfType_9581, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 215)).readProperty_superType () ;
  GALGAS_formalParameterSignature var_inheritedSignature_10019 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 216)) ;
  GALGAS_location var_inheritedDeclarationLocation_10085 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 217)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 218)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 218)).isValid ()) {
    uint32_t variant_10133 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 218)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 218)).uintValue () ;
    bool loop_10133 = true ;
    while (loop_10133) {
      loop_10133 = var_superType_9969.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 219)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 219)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_9924.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 219)).isValid () ;
      if (loop_10133) {
        loop_10133 = var_superType_9969.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 219)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 219)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_9924.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 219)).boolValue () ;
      }
      if (loop_10133 && (0 == variant_10133)) {
        loop_10133 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-method.galgas", 218)) ;
      }
      if (loop_10133) {
        variant_10133 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingExtensionMethodAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_9969, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 220)).readProperty_instanceMethodMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 220)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_10531 ;
            const GALGAS_overridingExtensionMethodAST temp_9 = this ;
            GALGAS_methodKind joker_10438 ; // Joker input parameter
            GALGAS_bool joker_10515 ; // Joker input parameter
            GALGAS_string joker_10549 ; // Joker input parameter
            extensionGetter_definition (var_superType_9969, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 221)).readProperty_instanceMethodMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_10438, var_inheritedSignature_10019, var_inheritedDeclarationLocation_10085, joker_10515, var_qualifier_10531, joker_10549, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 221)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_10531.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-method.galgas", 230)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_9924 = extensionGetter_definition (var_superType_9969, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 231)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_9969 = extensionGetter_definition (var_superType_9969, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 234)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_9924.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingExtensionMethodAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("this method is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 237)) ;
    }
  }
  const GALGAS_overridingExtensionMethodAST temp_14 = this ;
  GALGAS_analysisContext var_analysisContext_10917 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("this"), GALGAS_selfAvailability::class_func_available (var_selfType_9581, GALGAS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-method.galgas", 244)), GALGAS_bool (false), GALGAS_bool (true)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 244)), GALGAS_string ("this->"), temp_14.readProperty_requiresSelfForAccessingProperty (), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 240)) ;
  GALGAS_bool var_isRefClass_11321 = GALGAS_bool (false) ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    GALGAS_bool var_reference_11409 ;
    const bool optionalResult11381 = extensionGetter_definition (var_selfType_9581, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 249)).readProperty_typeKind ().optional_classType (var_reference_11409) ;
    if (!optionalResult11381) {
      test_15 = kBoolFalse ;
    }
    if (kBoolTrue == test_15) {
      var_isRefClass_11321 = var_reference_11409 ;
    }
  }
  GALGAS_typedPropertyList var_mutableProperties_11464 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 252)) ;
  GALGAS_typedPropertyList var_nonMutableProperties_11512 = GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 253)) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_9581, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 254)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-overriding-method.galgas", 254)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      var_nonMutableProperties_11512 = extensionGetter_definition (var_selfType_9581, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 255)).readProperty_allTypedPropertyList () ;
    }
  }
  if (kBoolFalse == test_16) {
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      GALGAS_bool var_isReference_11755 ;
      const bool optionalResult11727 = extensionGetter_definition (var_selfType_9581, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 256)).readProperty_typeKind ().optional_classType (var_isReference_11755) ;
      if (!optionalResult11727) {
        test_17 = kBoolFalse ;
      }
      if (kBoolTrue == test_17) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = var_isReference_11755.boolEnum () ;
          if (kBoolTrue == test_18) {
            var_mutableProperties_11464 = extensionGetter_definition (var_selfType_9581, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 258)).readProperty_allTypedPropertyList () ;
          }
        }
        if (kBoolFalse == test_18) {
          var_nonMutableProperties_11512 = extensionGetter_definition (var_selfType_9581, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 260)).readProperty_allTypedPropertyList () ;
        }
      }
    }
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_12314 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_12360 ;
  {
  const GALGAS_overridingExtensionMethodAST temp_19 = this ;
  const GALGAS_overridingExtensionMethodAST temp_20 = this ;
  const GALGAS_overridingExtensionMethodAST temp_21 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_9200, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_10917, ioArgument_ioTypeMap, temp_19.readProperty_mOverridingExtensionMethodFormalParameterList (), var_nonMutableProperties_11512, var_mutableProperties_11464, temp_20.readProperty_mOverridingExtensionMethodInstructionList (), temp_21.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_12314, var_formalParameterListForGeneration_12360, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 263)) ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_9924.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_22) {
      {
      const GALGAS_overridingExtensionMethodAST temp_23 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_12360, temp_23.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_10019, var_inheritedDeclarationLocation_10085, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 278)) ;
      }
    }
  }
  const GALGAS_overridingExtensionMethodAST temp_24 = this ;
  const GALGAS_overridingExtensionMethodAST temp_25 = this ;
  const GALGAS_overridingExtensionMethodAST temp_26 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension method ").add_operation (temp_24.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 287)), GALGAS_overridingExtensionMethodForGeneration::class_func_new (GALGAS_bool (false), GALGAS_string ("method-").add_operation (extensionGetter_definition (var_selfType_9581, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 290)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 290)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 290)).add_operation (temp_25.readProperty_mOverridingExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 290)), var_selfType_9581, var_baseTypeName_9924, temp_26.readProperty_mOverridingExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_12360, extensionGetter_definition (var_selfType_9581, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 295)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_12314  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 288))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 286)) ;
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
  ioArgument_ioOverridingExtensionMethodListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 317)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_overridingExtensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-method.galgas", 338)) ;
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
  GALGAS_string var_methodImplementation_16223 ;
  {
  const GALGAS_overridingExtensionMethodForGeneration temp_0 = this ;
  const GALGAS_overridingExtensionMethodForGeneration temp_1 = this ;
  const GALGAS_overridingExtensionMethodForGeneration temp_2 = this ;
  const GALGAS_overridingExtensionMethodForGeneration temp_3 = this ;
  routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_0.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_1.readProperty_mExtensionMethodName (), temp_2.readProperty_mExtensionMethodFormalParameterList (), temp_3.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_16223, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 347)) ;
  }
  const GALGAS_overridingExtensionMethodForGeneration temp_4 = this ;
  const GALGAS_overridingExtensionMethodForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (inCompiler, extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 356)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_mExtensionMethodName (), var_methodImplementation_16223 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 355))) ;
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

void cPtr_overridingExtensionSetterAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
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
  GALGAS_lstring var_nameForUsefulness_6676 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 136)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6676, var_nameForUsefulness_6676, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 137)) ;
  }
  const GALGAS_overridingExtensionSetterAST temp_2 = this ;
  GALGAS_lstring var_typeNameForUsefulness_6864 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 138)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_6864, var_nameForUsefulness_6676 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 139)) ;
  }
  const GALGAS_overridingExtensionSetterAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_7057 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 141)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_7057, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 143)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-setter.galgas", 143)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 143)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionSetterAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7057, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 144)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 144)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 144)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 144)) ;
    }
  }
  GALGAS_string var_baseTypeName_7400 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapEntry var_superType_7445 = extensionGetter_definition (var_selfType_7057, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 148)).readProperty_superType () ;
  GALGAS_formalParameterSignature var_inheritedSignature_7495 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 149)) ;
  GALGAS_location var_inheritedDeclarationLocation_7561 = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 150)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 151)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 151)).isValid ()) {
    uint32_t variant_7609 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 151)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 151)).uintValue () ;
    bool loop_7609 = true ;
    while (loop_7609) {
      loop_7609 = var_superType_7445.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 152)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 152)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_7400.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 152)).isValid () ;
      if (loop_7609) {
        loop_7609 = var_superType_7445.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 152)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 152)).operator_and (GALGAS_bool (ComparisonKind::equal, var_baseTypeName_7400.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 152)).boolValue () ;
      }
      if (loop_7609 && (0 == variant_7609)) {
        loop_7609 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 151)) ;
      }
      if (loop_7609) {
        variant_7609 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingExtensionSetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_7445, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 153)).readProperty_setterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionSetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 153)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_7913 ;
            const GALGAS_overridingExtensionSetterAST temp_9 = this ;
            GALGAS_methodKind joker_7882 ; // Joker input parameter
            GALGAS_bool joker_7905 ; // Joker input parameter
            GALGAS_string joker_7923 ; // Joker input parameter
            extensionGetter_definition (var_superType_7445, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 154)).readProperty_setterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionSetterName (), joker_7882, var_inheritedSignature_7495, joker_7905, var_qualifier_7913, joker_7923, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 154)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_qualifier_7913.objectCompare (GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-setter.galgas", 155)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_7400 = extensionGetter_definition (var_superType_7445, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 156)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_7445 = extensionGetter_definition (var_superType_7445, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 159)).readProperty_superType () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (ComparisonKind::equal, var_baseTypeName_7400.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingExtensionSetterAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("this setter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 162)) ;
    }
  }
  const GALGAS_overridingExtensionSetterAST temp_14 = this ;
  GALGAS_analysisContext var_analysisContext_8283 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("object"), GALGAS_selfAvailability::class_func_available (var_selfType_7057, GALGAS_selfMutability::class_func_selfAndPropertiesAreMutable (SOURCE_FILE ("extension-overriding-setter.galgas", 169)), GALGAS_bool (true), GALGAS_bool (true)  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 169)), GALGAS_string ("object->"), temp_14.readProperty_requiresSelfForAccessingProperty (), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 165)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9072 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_9118 ;
  {
  const GALGAS_overridingExtensionSetterAST temp_15 = this ;
  const GALGAS_overridingExtensionSetterAST temp_16 = this ;
  const GALGAS_overridingExtensionSetterAST temp_17 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_6676, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8283, ioArgument_ioTypeMap, temp_15.readProperty_mOverridingExtensionSetterFormalParameterList (), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 179)), extensionGetter_definition (var_selfType_7057, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 180)).readProperty_allTypedPropertyList (), temp_16.readProperty_mOverridingExtensionSetterInstructionList (), temp_17.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_9072, var_formalParameterListForGeneration_9118, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 173)) ;
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GALGAS_bool (ComparisonKind::notEqual, var_baseTypeName_7400.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_18) {
      {
      const GALGAS_overridingExtensionSetterAST temp_19 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_9118, temp_19.readProperty_mOverridingExtensionSetterName ().readProperty_location (), var_inheritedSignature_7495, var_inheritedDeclarationLocation_7561, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 188)) ;
      }
    }
  }
  const GALGAS_overridingExtensionSetterAST temp_20 = this ;
  const GALGAS_overridingExtensionSetterAST temp_21 = this ;
  const GALGAS_overridingExtensionSetterAST temp_22 = this ;
  const GALGAS_overridingExtensionSetterAST temp_23 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" overriding extension setter ").add_operation (temp_20.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 197)), GALGAS_overridingExtensionSetterForGeneration::class_func_new (GALGAS_bool (false), GALGAS_string ("setter-").add_operation (temp_21.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 200)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 200)).add_operation (temp_22.readProperty_mOverridingExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 200)), var_selfType_7057, var_baseTypeName_7400, temp_23.readProperty_mOverridingExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_9118, extensionGetter_definition (var_selfType_7057, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 205)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_9072  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 198))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 196)) ;
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
  ioArgument_ioOverridingExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 228)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_overridingExtensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-setter.galgas", 249)) ;
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
  GALGAS_string var_methodImplementation_12837 ;
  {
  const GALGAS_overridingExtensionSetterForGeneration temp_0 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_1 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_2 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_3 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_4 = this ;
  routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 259)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mBaseTypeName (), temp_2.readProperty_mExtensionSetterName (), ioArgument_ioInclusionSet, temp_3.readProperty_mExtensionSetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_12837, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 258)) ;
  }
  const GALGAS_overridingExtensionSetterForGeneration temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_baseType_12889 = temp_5.readProperty_mReceiverType () ;
  GALGAS_bool var_searching_12931 = GALGAS_bool (true) ;
  if (GALGAS_uint::class_func_max (SOURCE_FILE ("extension-overriding-setter.galgas", 269)).isValid ()) {
    uint32_t variant_12950 = GALGAS_uint::class_func_max (SOURCE_FILE ("extension-overriding-setter.galgas", 269)).uintValue () ;
    bool loop_12950 = true ;
    while (loop_12950) {
      loop_12950 = var_searching_12931.isValid () ;
      if (loop_12950) {
        loop_12950 = var_searching_12931.boolValue () ;
      }
      if (loop_12950 && (0 == variant_12950)) {
        loop_12950 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 269)) ;
      }
      if (loop_12950) {
        variant_12950 -- ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = extensionGetter_definition (var_baseType_12889, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 270)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 270)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 270)).boolEnum () ;
          if (kBoolTrue == test_6) {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              const GALGAS_overridingExtensionSetterForGeneration temp_8 = this ;
              test_7 = extensionGetter_definition (extensionGetter_definition (var_baseType_12889, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 271)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 271)).readProperty_setterMap ().getter_hasKey (temp_8.readProperty_mExtensionSetterName () COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 271)).boolEnum () ;
              if (kBoolTrue == test_7) {
                var_baseType_12889 = extensionGetter_definition (var_baseType_12889, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 272)).readProperty_superType () ;
              }
            }
            if (kBoolFalse == test_7) {
              var_searching_12931 = GALGAS_bool (false) ;
            }
          }
        }
        if (kBoolFalse == test_6) {
          var_searching_12931 = GALGAS_bool (false) ;
        }
      }
    }
  }
  const GALGAS_overridingExtensionSetterForGeneration temp_9 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (var_baseType_12889, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 280)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 280)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 280)).add_operation (temp_9.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 280))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 280)) ;
  const GALGAS_overridingExtensionSetterForGeneration temp_10 = this ;
  extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 281)) ;
  const GALGAS_overridingExtensionSetterForGeneration temp_11 = this ;
  const GALGAS_overridingExtensionSetterForGeneration temp_12 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (inCompiler, extensionGetter_definition (temp_11.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 283)).readProperty_typeName ().readProperty_string (), temp_12.readProperty_mExtensionSetterName (), var_methodImplementation_12837 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 282))) ;
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
  GALGAS_lstring var_key_2814 = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 55)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 55)) ;
  {
  const GALGAS_predefinedTypeAST temp_1 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2814, temp_1, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 56)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodMap var_optionalMethodMap_3647 ;
  const GALGAS_predefinedTypeAST temp_0 = this ;
  callExtensionMethod_getOptionalMethodMap ((cPtr_predefinedTypeAST *) temp_0.ptr (), ioArgument_ioTypeMap, var_optionalMethodMap_3647, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 67)) ;
  GALGAS_classFunctionMap var_constructorMap_3731 ;
  const GALGAS_predefinedTypeAST temp_1 = this ;
  callExtensionMethod_getClassFunctionMap ((cPtr_predefinedTypeAST *) temp_1.ptr (), ioArgument_ioTypeMap, var_constructorMap_3731, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 68)) ;
  GALGAS_getterMap var_getterMap_3798 ;
  const GALGAS_predefinedTypeAST temp_2 = this ;
  callExtensionMethod_getGetterMap ((cPtr_predefinedTypeAST *) temp_2.ptr (), ioArgument_ioTypeMap, var_getterMap_3798, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 69)) ;
  GALGAS_setterMap var_setterMap_3860 ;
  const GALGAS_predefinedTypeAST temp_3 = this ;
  callExtensionMethod_getSetterMap ((cPtr_predefinedTypeAST *) temp_3.ptr (), ioArgument_ioTypeMap, var_setterMap_3860, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 70)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_3938 ;
  const GALGAS_predefinedTypeAST temp_4 = this ;
  callExtensionMethod_getInstanceMethodMap ((cPtr_predefinedTypeAST *) temp_4.ptr (), ioArgument_ioTypeMap, var_instanceMethodMap_3938, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 71)) ;
  GALGAS_classMethodMap var_classMethodMap_4018 ;
  const GALGAS_predefinedTypeAST temp_5 = this ;
  callExtensionMethod_getClassMethodMap ((cPtr_predefinedTypeAST *) temp_5.ptr (), ioArgument_ioTypeMap, var_classMethodMap_4018, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 72)) ;
  GALGAS_functionSignature var_addAssignArgumentList_4105 ;
  const GALGAS_predefinedTypeAST temp_6 = this ;
  callExtensionMethod_getAddAssignArgumentList ((cPtr_predefinedTypeAST *) temp_6.ptr (), ioArgument_ioTypeMap, var_addAssignArgumentList_4105, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 73)) ;
  GALGAS_enumerationDescriptorList var_enumerationList_4213 ;
  GALGAS_string var_enumeratedTypeName_4248 ;
  const GALGAS_predefinedTypeAST temp_7 = this ;
  callExtensionMethod_getEnumerationList ((cPtr_predefinedTypeAST *) temp_7.ptr (), ioArgument_ioTypeMap, var_enumerationList_4213, var_enumeratedTypeName_4248, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 74)) ;
  {
  const GALGAS_predefinedTypeAST temp_8 = this ;
  GALGAS_unifiedTypeMapEntry joker_4336 ; // Joker input parameter
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_8.readProperty_mPredefinedTypeName (), joker_4336, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 79)) ;
  }
  GALGAS_unifiedTypeMapEntry var_enumeratedTypeEntry_4388 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (ComparisonKind::equal, var_enumeratedTypeName_4248.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_enumeratedTypeEntry_4388 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("predefinedTypeAST.galgas", 83)) ;
    }
  }
  if (kBoolFalse == test_9) {
    {
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, var_enumeratedTypeName_4248, var_enumeratedTypeEntry_4388, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 85)) ;
    }
  }
  {
  const GALGAS_predefinedTypeAST temp_10 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (temp_10.readProperty_mPredefinedTypeName (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 94)), GALGAS_bool (false), var_getterMap_3798, var_setterMap_3860, var_instanceMethodMap_3938, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 88)) ;
  }
  const GALGAS_predefinedTypeAST temp_11 = this ;
  const GALGAS_predefinedTypeAST temp_12 = this ;
  const GALGAS_predefinedTypeAST temp_13 = this ;
  const GALGAS_predefinedTypeAST temp_14 = this ;
  const GALGAS_predefinedTypeAST temp_15 = this ;
  const GALGAS_predefinedTypeAST temp_16 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_5017 = GALGAS_unifiedTypeDefinition::class_func_new (GALGAS_lstring::class_func_new (temp_11.readProperty_mPredefinedTypeName (), GALGAS_location::class_func_nowhere (SOURCE_FILE ("predefinedTypeAST.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 103)), temp_12.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("predefinedTypeAST.galgas", 106)), callExtensionGetter_typeKind ((const cPtr_predefinedTypeAST *) temp_13.ptr (), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 107)), callExtensionGetter_supportsCollectionValue ((const cPtr_predefinedTypeAST *) temp_14.ptr (), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 108)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("predefinedTypeAST.galgas", 109)), GALGAS_propertyMap::class_func_emptyMap (SOURCE_FILE ("predefinedTypeAST.galgas", 110)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("predefinedTypeAST.galgas", 111)), var_constructorMap_3731, var_getterMap_3798, var_setterMap_3860, var_instanceMethodMap_3938, var_classMethodMap_4018, var_optionalMethodMap_3647, var_enumerationList_4213, callExtensionGetter_getSupportedOperatorFlags ((const cPtr_predefinedTypeAST *) temp_15.ptr (), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 119)), var_addAssignArgumentList_4105, GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("predefinedTypeAST.galgas", 121)), GALGAS_mapSearchMethodListAST::class_func_emptyList (SOURCE_FILE ("predefinedTypeAST.galgas", 122)), GALGAS_bool (false), var_enumeratedTypeEntry_4388, callExtensionGetter_defaultInitializerName ((const cPtr_predefinedTypeAST *) temp_16.ptr (), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 125)), GALGAS_string ("predefined-types"), GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("predefinedTypeAST.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 102)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_5017.readProperty_typeName (), var_typeDefinition_5017, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 129)) ;
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
  GALGAS_lstring var_nameForUsefulness_6861 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::class_func_new (temp_0.readProperty_mPredefinedTypeName (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 142)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 142)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6861, var_nameForUsefulness_6861, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 143)) ;
  }
  const GALGAS_predefinedTypeAST temp_1 = this ;
  const GALGAS_predefinedTypeAST temp_2 = this ;
  const GALGAS_predefinedTypeAST temp_3 = this ;
  const GALGAS_predefinedTypeAST temp_4 = this ;
  const GALGAS_predefinedTypeAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("Predefined type ").add_operation (temp_1.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 146)), GALGAS_primitiveTypeForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (temp_2.readProperty_mPredefinedTypeName (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 148)), temp_3.readProperty_mPredefinedTypeName (), callExtensionGetter_cppDeclarationString ((const cPtr_predefinedTypeAST *) temp_4.ptr (), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 150)), GALGAS_bool (ComparisonKind::equal, callExtensionGetter_typeKind ((const cPtr_predefinedTypeAST *) temp_5.ptr (), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 151)).objectCompare (GALGAS_typeKindEnum::class_func_packageType (SOURCE_FILE ("predefinedTypeAST.galgas", 151))))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 147))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 145)) ;
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
  GALGAS_propertyInCollectionListAST var_attributeList_10586 = GALGAS_propertyInCollectionListAST::class_func_emptyList (SOURCE_FILE ("predefinedTypeAST.galgas", 234)) ;
  var_attributeList_10586.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::class_func_new (constinArgument_inElementTypeName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 237)), GALGAS_lstring::class_func_new (GALGAS_string ("mValue"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 238)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("predefinedTypeAST.galgas", 239)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("predefinedTypeAST.galgas", 241))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 235)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::class_func_new (GALGAS_bool (true), GALGAS_lstring::class_func_new (constinArgument_inElementTypeName.add_operation (GALGAS_string ("list"), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 244)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 244)), var_attributeList_10586, GALGAS_bool (true)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 242))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 242)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, constinArgument_inElementTypeName.add_operation (GALGAS_string ("list"), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 248)) ;
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
  GALGAS_propertyInCollectionListAST var_attributeList_11407 = GALGAS_propertyInCollectionListAST::class_func_emptyList (SOURCE_FILE ("predefinedTypeAST.galgas", 255)) ;
  var_attributeList_11407.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::class_func_new (GALGAS_string ("string"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 258)), GALGAS_lstring::class_func_new (GALGAS_string ("mValue0"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 259)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("predefinedTypeAST.galgas", 260)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("predefinedTypeAST.galgas", 262))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 256)) ;
  var_attributeList_11407.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::class_func_new (GALGAS_string ("string"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 265)), GALGAS_lstring::class_func_new (GALGAS_string ("mValue1"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 266)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("predefinedTypeAST.galgas", 267)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("predefinedTypeAST.galgas", 269))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 263)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::class_func_new (GALGAS_bool (true), GALGAS_lstring::class_func_new (GALGAS_string ("2stringlist"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 273)), var_attributeList_11407, GALGAS_bool (true)  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 271))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 271)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("2stringlist"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 277)) ;
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
  GALGAS_propertyInCollectionListAST var_attributeList_12508 = GALGAS_propertyInCollectionListAST::class_func_emptyList (SOURCE_FILE ("predefinedTypeAST.galgas", 285)) ;
  var_attributeList_12508.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::class_func_new (constinArgument_inElementTypeName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 288)), GALGAS_lstring::class_func_new (constinArgument_inElementTypeName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 289)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("predefinedTypeAST.galgas", 290)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("predefinedTypeAST.galgas", 292))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 286)) ;
  var_attributeList_12508.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::class_func_new (GALGAS_string ("location"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 295)), GALGAS_lstring::class_func_new (GALGAS_string ("location"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 296)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("predefinedTypeAST.galgas", 297)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("predefinedTypeAST.galgas", 299))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 293)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_structDeclarationAST::class_func_new (GALGAS_bool (true), GALGAS_lstring::class_func_new (GALGAS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 302)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 302)), var_attributeList_12508, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 300))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 300)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 306)) ;
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
  GALGAS_propertyInCollectionListAST var_attributeList_13569 = GALGAS_propertyInCollectionListAST::class_func_emptyList (SOURCE_FILE ("predefinedTypeAST.galgas", 313)) ;
  var_attributeList_13569.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::class_func_new (GALGAS_string ("uint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 316)), GALGAS_lstring::class_func_new (GALGAS_string ("start"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 317)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("predefinedTypeAST.galgas", 318)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("predefinedTypeAST.galgas", 320))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 314)) ;
  var_attributeList_13569.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::class_func_new (GALGAS_string ("uint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 323)), GALGAS_lstring::class_func_new (GALGAS_string ("length"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 324)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("predefinedTypeAST.galgas", 325)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("predefinedTypeAST.galgas", 327))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 321)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_structDeclarationAST::class_func_new (GALGAS_bool (true), GALGAS_lstring::class_func_new (GALGAS_string ("range"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 330)), var_attributeList_13569, GALGAS_string ("uint")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 328))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 328)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("range"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 334)) ;
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
  GALGAS_lstring var_typeUsefulnessName_14448 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::class_func_new (constinArgument_inTypeName, GALGAS_location::class_func_nowhere (SOURCE_FILE ("predefinedTypeAST.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 340)) ;
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_typeUsefulnessName_14448  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 341)) ;
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
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_applicationPredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("application")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 348))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 348)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("application"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 349)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_bigintPredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("bigint")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 350))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 350)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("bigint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 351)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_binarysetPredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("binaryset")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 352))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 352)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("binaryset"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 353)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_boolPredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("bool")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 354))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 354)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("bool"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 355)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_charPredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("char")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 356))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 356)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("char"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 357)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_dataPredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("data")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 358))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 358)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("data"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 359)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_doublePredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("double")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 360))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 360)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("double"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 361)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_filewrapperPredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("filewrapper")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 362))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 362)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("filewrapper"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 363)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_functionPredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("function")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 364))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 364)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("function"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 365)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_locationPredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("location")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 366))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 366)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("location"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 367)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_objectPredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("object")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 368))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 368)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("object"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 369)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_sintPredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("sint")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 370))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 370)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("sint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 371)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_sint_36__34_PredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("sint64")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 372))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 372)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("sint64"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 373)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_stringPredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("string")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 374))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 374)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("string"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 375)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_stringsetPredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("stringset")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 376))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 376)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("stringset"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 377)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_timerPredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("timer")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 378))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 378)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("timer"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 379)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_typePredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("type")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 380))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 380)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("type"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 381)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_uintPredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("uint")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 382))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 382)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("uint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 383)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_uint_36__34_PredefinedTypeAST::class_func_new (GALGAS_bool (true), GALGAS_string ("uint64")  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 384))  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 384)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("uint64"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 385)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("function"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 387)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("luint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 388)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("lstring"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 389)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("object"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 390)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 391)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("type"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 392)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 393)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 394)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 395)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("lbigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 396)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("bool"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 398)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 399)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("char"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 400)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("double"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 401)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("sint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 402)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("sint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 403)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 404)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 405)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 406)) ;
  }
  {
  routine_appendPredefined_32_StringListTypeAST_26__26_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 408)) ;
  }
  {
  routine_appendStructASTForRangeType_26__26_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypeAST.galgas", 410)) ;
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
//Overriding extension getter '@applicationPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_applicationPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
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
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-application.galgas", 55)) ;
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
  outArgument_outClassMethodMap = GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-application.galgas", 279)) ;
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
//Overriding extension getter '@bigintPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_bigintPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
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
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-bigint.galgas", 44)) ;
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
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-bigint.galgas", 59)) ;
  GALGAS_unifiedTypeMapEntry var_bigIntType_2562 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), var_bigIntType_2562, inCompiler COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 61)) ;
  }
  GALGAS_formalParameterSignature var_argList_2608 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("predefinedType-bigint.galgas", 62)) ;
  var_argList_2608.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-bigint.galgas", 63)), var_bigIntType_2562, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-bigint.galgas", 63)), GALGAS_string ("inDivisor")  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 63)) ;
  var_argList_2608.addAssign_operation (GALGAS_string ("quotient").getter_nowhere (SOURCE_FILE ("predefinedType-bigint.galgas", 64)), var_bigIntType_2562, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("predefinedType-bigint.galgas", 64)), GALGAS_string ("outQuotient")  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 64)) ;
  var_argList_2608.addAssign_operation (GALGAS_string ("remainder").getter_nowhere (SOURCE_FILE ("predefinedType-bigint.galgas", 65)), var_bigIntType_2562, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("predefinedType-bigint.galgas", 65)), GALGAS_string ("outRemainder")  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 65)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("divideBy"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 67)), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 67)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("predefinedType-bigint.galgas", 68)), var_argList_2608, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 70)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("predefinedType-bigint.galgas", 72)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("predefinedType-bigint.galgas", 66)) ;
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
  outArgument_outSetterMap = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-bigint.galgas", 101)) ;
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
//Overriding extension getter '@binarysetPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_binarysetPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("emptyBinarySet") ;
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
  result_result = GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("predefinedType-binaryset.galgas", 36)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("predefinedType-binaryset.galgas", 36)) COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 36)).operator_or (GALGAS_operators::class_func_infixXorOperator (SOURCE_FILE ("predefinedType-binaryset.galgas", 36)) COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 36)).operator_or (GALGAS_operators::class_func_prefixTildeOperator (SOURCE_FILE ("predefinedType-binaryset.galgas", 37)) COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 36)).operator_or (GALGAS_operators::class_func_infixShiftOperator (SOURCE_FILE ("predefinedType-binaryset.galgas", 37)) COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 37)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-binaryset.galgas", 38)) COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 37)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-binaryset.galgas", 38)) COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 38)) ;
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
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 44))) ;
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
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-binaryset.galgas", 51)) ;
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithBit"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 61)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fullBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 68)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithPredicateString"), GALGAS_string ("string"), GALGAS_string ("inPredicateString"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 75)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 84)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 97)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 110)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 123)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 136)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 149)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 162)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 175)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 188)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 201)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 214)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 227)) ;
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
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 246)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFull"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 247)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nodeCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 255)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isEmpty"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 263)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantVariableCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 271)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ITE"), GALGAS_string ("binaryset"), GALGAS_string ("inTHENoperand"), GALGAS_string ("binaryset"), GALGAS_string ("inELSEoperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 279)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("print"), GALGAS_string ("stringlist"), GALGAS_string ("inVariableList"), GALGAS_string ("uintlist"), GALGAS_string ("inBDDCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 288)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphvizDump"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 297)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("stringlist"), GALGAS_string ("inBitNameList"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 305)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transformedBy"), GALGAS_string ("uintlist"), GALGAS_string ("inTransformationArray"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 313)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 321)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 329)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 336)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 343)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 350)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigValueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bigint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 359)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedValueCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 368)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64ValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 376)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 383)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueListWithNameList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_string ("inNameList"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 390)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("predicateStringValue"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 397)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedStringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 405)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap10"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 412)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap021"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 419)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap102"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 426)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap120"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 433)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap201"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 440)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap210"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 447)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transposedBy"), GALGAS_string ("uintlist"), GALGAS_string ("inTransposeVector"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 454)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transitiveClosure"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 461)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("accessibleStates"), GALGAS_string ("binaryset"), GALGAS_string ("inInitialStateSet"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 468)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("implies"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 475)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("equalTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 482)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("notEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 489)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowerOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 496)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("greaterOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 503)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictGreaterThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 510)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictLowerThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 517)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetByTranslatingFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inFirstIndexToTranslate"), GALGAS_string ("uint"), GALGAS_string ("inTranslation"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 524)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsValue"), GALGAS_string ("uint64"), GALGAS_string ("inValue"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 531)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existsOnBitRange"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 538)) ;
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
  outArgument_outClassMethodMap = GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-binaryset.galgas", 551)) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setNodeTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 552)) ;
  }
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setAndTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-binaryset.galgas", 560)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_boolPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("default") ;
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
  result_result = GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("predefinedType-bool.galgas", 36)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("predefinedType-bool.galgas", 36)) COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 36)).operator_or (GALGAS_operators::class_func_infixXorOperator (SOURCE_FILE ("predefinedType-bool.galgas", 36)) COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 36)).operator_or (GALGAS_operators::class_func_prefixNotOperator (SOURCE_FILE ("predefinedType-bool.galgas", 36)) COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 36)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-bool.galgas", 37)) COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 36)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-bool.galgas", 37)) COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 37)) ;
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
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 43))) ;
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
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-bool.galgas", 50)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("default"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 51)) ;
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
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 64)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 65)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ocString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 73)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 81)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 89)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 97)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 105)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-bool.galgas", 113)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@charPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_charPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
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
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-char.galgas", 218)) ;
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
//Overriding extension getter '@dataPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_dataPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("emptyData") ;
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
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-data.galgas", 37)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyData"), GALGAS_string ("data"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 38)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("dataWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 45)) ;
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
  result_result = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-data.galgas", 59)).operator_or (GALGAS_operators::class_func_generateEnumerationHelperMethods (SOURCE_FILE ("predefinedType-data.galgas", 59)) COMMA_SOURCE_FILE ("predefinedType-data.galgas", 59)) ;
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
  GALGAS_unifiedTypeMapEntry var_uintTypeIndex_2882 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), var_uintTypeIndex_2882, inCompiler COMMA_SOURCE_FILE ("predefinedType-data.galgas", 67)) ;
  }
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::class_func_emptyList (SOURCE_FILE ("predefinedType-data.galgas", 68)) ;
  outArgument_outEnumerationList.addAssign_operation (var_uintTypeIndex_2882, GALGAS_string ("data")  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 69)) ;
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
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-data.galgas", 77)) ;
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 78)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 86)) ;
  }
  GALGAS_formalParameterSignature var_argList_3772 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("predefinedType-data.galgas", 94)) ;
  GALGAS_unifiedTypeMapEntry var_t_3861 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t_3861, inCompiler COMMA_SOURCE_FILE ("predefinedType-data.galgas", 95)) ;
  }
  var_argList_3772.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-data.galgas", 96)), var_t_3861, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-data.galgas", 96)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 96)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t_3861, inCompiler COMMA_SOURCE_FILE ("predefinedType-data.galgas", 97)) ;
  }
  var_argList_3772.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-data.galgas", 98)), var_t_3861, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("predefinedType-data.galgas", 98)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 98)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 100)), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 100)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("predefinedType-data.galgas", 101)), var_argList_3772, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 103)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("predefinedType-data.galgas", 105)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("predefinedType-data.galgas", 99)) ;
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
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 114)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 115)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cStringRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 123)) ;
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
  outArgument_outSetterMap = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-data.galgas", 137)) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendByte"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 138)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendShortBE"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 146)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendShortLE"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 154)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendUIntBE"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 162)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendUIntLE"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 170)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inValue"), GALGAS_string ("appendUTF8String"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 178)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("data"), GALGAS_string ("inValue"), GALGAS_string ("appendData"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-data.galgas", 186)) ;
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
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-data.galgas", 199))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@doublePredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_doublePredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
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
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-double.galgas", 197)) ;
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
//Overriding extension getter '@filewrapperPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_filewrapperPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
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


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperPredefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperPredefinedTypeAST::method_getSetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_setterMap & outArgument_outSetterMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-filewrapper.galgas", 49)) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inDirectoryPath"), GALGAS_string ("setCurrentDirectory"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 50)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_getterMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 64)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allTextFilePathes"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 65)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allBinaryFilePathes"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 73)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allDirectoryPathes"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 81)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentDirectory"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 89)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allFilePathesWithExtension"), GALGAS_string ("string"), GALGAS_string ("inExtension"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 97)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 104)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 111)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 118)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 125)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathForPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 132)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 139)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 146)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-filewrapper.galgas", 153)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_functionPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_functionPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-function.galgas", 36)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_classFunctionMap & outArgument_outMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-function.galgas", 43)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionList"), GALGAS_string ("functionlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-function.galgas", 44)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionWithName"), GALGAS_string ("string"), GALGAS_string ("inName"), GALGAS_string ("function"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-function.galgas", 51)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFunctionDefined"), GALGAS_string ("string"), GALGAS_string ("inFunctionName"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-function.galgas", 60)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                          GALGAS_getterMap & outArgument_outMap,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-function.galgas", 75)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-function.galgas", 76)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("resultType"), GALGAS_string::makeEmptyString (), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-function.galgas", 84)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("formalParameterTypeList"), GALGAS_string::makeEmptyString (), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-function.galgas", 92)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("invoke"), GALGAS_string ("objectlist"), GALGAS_string ("inParameters"), GALGAS_string ("location"), GALGAS_string ("inErrorLocation"), GALGAS_string ("object"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-function.galgas", 100)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_functionPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-function.galgas", 112))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@locationPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_locationPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("nowhere") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@locationPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_locationPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-location.galgas", 36)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-location.galgas", 36)) COMMA_SOURCE_FILE ("predefinedType-location.galgas", 36)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@locationPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_locationPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_classFunctionMap & outArgument_outMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-location.galgas", 43)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nowhere"), GALGAS_string ("location"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 44)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("here"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 51)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("next"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 58)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("separator"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 65)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@locationPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_locationPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                          GALGAS_getterMap & outArgument_outMap,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 78)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("startLocationString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 79)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("endLocationString"), GALGAS_string ("locationString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 87)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("startLocationIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 95)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("endLocationIndex"), GALGAS_string ("locationIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 103)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("file"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 111)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("startLine"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 119)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("endLine"), GALGAS_string ("line"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 127)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("startColumn"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 135)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("endColumn"), GALGAS_string ("column"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 143)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isNowhere"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 151)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("union"), GALGAS_string::makeEmptyString (), GALGAS_string ("location"), GALGAS_string ("inOtherLocation"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-location.galgas", 159)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@locationPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_locationPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-location.galgas", 172))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@objectPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_objectPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@objectPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_objectPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-object.galgas", 36)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@objectPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_objectPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-object.galgas", 42))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@objectPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_objectPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GALGAS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-object.galgas", 49)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectStaticType"), GALGAS_string::makeEmptyString (), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-object.galgas", 50)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectDynamicType"), GALGAS_string::makeEmptyString (), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-object.galgas", 58)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST supportsCollectionValue'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_stringsetPredefinedTypeAST::getter_supportsCollectionValue (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_stringsetPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("emptySet") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_stringsetPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 43))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_stringsetPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_infixSubOperator (SOURCE_FILE ("predefinedType-stringset.galgas", 49)).operator_or (GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("predefinedType-stringset.galgas", 50)) COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 49)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("predefinedType-stringset.galgas", 50)) COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 50)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-stringset.galgas", 51)) COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 50)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-stringset.galgas", 51)) COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 51)).operator_or (GALGAS_operators::class_func_generateEnumerationHelperMethods (SOURCE_FILE ("predefinedType-stringset.galgas", 52)) COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 51)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-stringset.galgas", 52)) COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 52)).operator_or (GALGAS_operators::class_func_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("predefinedType-stringset.galgas", 53)) COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 52)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-stringset.galgas", 60)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 61)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 68)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithStringList"), GALGAS_string ("stringlist"), GALGAS_string ("inStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 77)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithLStringList"), GALGAS_string ("lstringlist"), GALGAS_string ("inLStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 86)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getSetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GALGAS_setterMap & outArgument_outSetterMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringType_3884 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType_3884, inCompiler COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 101)) ;
  }
  outArgument_outSetterMap = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-stringset.galgas", 102)) ;
  {
  outArgument_outSetterMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("removeKey"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 104)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("predefinedType-stringset.galgas", 105)), GALGAS_formalParameterSignature::class_func_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-stringset.galgas", 106)), var_stringType_3884, GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("predefinedType-stringset.galgas", 106)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 106)), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("predefinedType-stringset.galgas", 108)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 103)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inValue"), GALGAS_string ("insert"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 111)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getEnumerationList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getEnumerationList (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                 GALGAS_string & outArgument_outEnumeratedType,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_4800 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex_4800, inCompiler COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 126)) ;
  }
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::class_func_emptyList (SOURCE_FILE ("predefinedType-stringset.galgas", 127)) ;
  outArgument_outEnumerationList.addAssign_operation (var_stringTypeIndex_4800, GALGAS_string ("key")  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 128)) ;
  outArgument_outEnumeratedType = GALGAS_string ("string") ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getAddAssignArgumentList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getAddAssignArgumentList (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_functionSignature & outArgument_outAddAssignArgumentList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_5281 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex_5281, inCompiler COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 136)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("predefinedType-stringset.galgas", 137)) ;
  temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-stringset.galgas", 137)), var_stringTypeIndex_5281, GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 137)) ;
  outArgument_outAddAssignArgumentList = temp_0 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GALGAS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 144)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 145)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 152)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("anyString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 160)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-stringset.galgas", 168)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sintPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_sintPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("default") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_sintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 36))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_sintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_infixAddOperator (SOURCE_FILE ("predefinedType-sint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixSubOperator (SOURCE_FILE ("predefinedType-sint.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixMulOperator (SOURCE_FILE ("predefinedType-sint.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixDivOperator (SOURCE_FILE ("predefinedType-sint.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixModOperator (SOURCE_FILE ("predefinedType-sint.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixShiftOperator (SOURCE_FILE ("predefinedType-sint.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 43)).operator_or (GALGAS_operators::class_func_prefixPlusOperator (SOURCE_FILE ("predefinedType-sint.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 43)).operator_or (GALGAS_operators::class_func_prefixMinusOperator (SOURCE_FILE ("predefinedType-sint.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 43)).operator_or (GALGAS_operators::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("predefinedType-sint.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 44)).operator_or (GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("predefinedType-sint.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 44)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("predefinedType-sint.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 45)).operator_or (GALGAS_operators::class_func_infixXorOperator (SOURCE_FILE ("predefinedType-sint.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 45)).operator_or (GALGAS_operators::class_func_prefixTildeOperator (SOURCE_FILE ("predefinedType-sint.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 45)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-sint.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 45)).operator_or (GALGAS_operators::class_func_incDecOperator (SOURCE_FILE ("predefinedType-sint.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 46)).operator_or (GALGAS_operators::class_func_incDecOperatorNoOVF (SOURCE_FILE ("predefinedType-sint.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 46)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-sint.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 46)).operator_or (GALGAS_operators::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("predefinedType-sint.galgas", 47)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 46)).operator_or (GALGAS_operators::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("predefinedType-sint.galgas", 47)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 47)).operator_or (GALGAS_operators::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("predefinedType-sint.galgas", 47)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 47)).operator_or (GALGAS_operators::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("predefinedType-sint.galgas", 47)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 47)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-sint.galgas", 48)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 47)).operator_or (GALGAS_operators::class_func_minusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-sint.galgas", 48)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 48)).operator_or (GALGAS_operators::class_func_mulEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-sint.galgas", 49)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 48)).operator_or (GALGAS_operators::class_func_divEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-sint.galgas", 49)) COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 49)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sintPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sintPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-sint.galgas", 57)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 58)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 65)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sintPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sintPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GALGAS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 78)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 79)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 87)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 95)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 111)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 119)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 127)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 135)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 146)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 155)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 162)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 169)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint.galgas", 176)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sint64PredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_sint_36__34_PredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("default") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sint64PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_sint_36__34_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_infixAddOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 36)).operator_or (GALGAS_operators::class_func_infixSubOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 36)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 36)).operator_or (GALGAS_operators::class_func_infixMulOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 36)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 36)).operator_or (GALGAS_operators::class_func_infixDivOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 36)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 36)).operator_or (GALGAS_operators::class_func_infixModOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 37)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 36)).operator_or (GALGAS_operators::class_func_infixShiftOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 37)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 37)).operator_or (GALGAS_operators::class_func_prefixPlusOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 37)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 37)).operator_or (GALGAS_operators::class_func_prefixMinusOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 38)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 37)).operator_or (GALGAS_operators::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("predefinedType-sint64.galgas", 38)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 38)).operator_or (GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 39)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 38)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 39)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 39)).operator_or (GALGAS_operators::class_func_infixXorOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 39)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 39)).operator_or (GALGAS_operators::class_func_prefixTildeOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 39)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 39)).operator_or (GALGAS_operators::class_func_incDecOperator (SOURCE_FILE ("predefinedType-sint64.galgas", 40)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 39)).operator_or (GALGAS_operators::class_func_incDecOperatorNoOVF (SOURCE_FILE ("predefinedType-sint64.galgas", 40)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 40)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-sint64.galgas", 40)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 40)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-sint64.galgas", 40)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 40)).operator_or (GALGAS_operators::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("predefinedType-sint64.galgas", 41)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 40)).operator_or (GALGAS_operators::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("predefinedType-sint64.galgas", 41)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 41)).operator_or (GALGAS_operators::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("predefinedType-sint64.galgas", 41)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 41)).operator_or (GALGAS_operators::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("predefinedType-sint64.galgas", 41)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 41)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-sint64.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 41)).operator_or (GALGAS_operators::class_func_minusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-sint64.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 42)).operator_or (GALGAS_operators::class_func_mulEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-sint64.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 42)).operator_or (GALGAS_operators::class_func_divEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-sint64.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 43)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sint64PredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sint_36__34_PredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_classFunctionMap & outArgument_outMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-sint64.galgas", 50)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 51)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 58)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sint64PredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sint_36__34_PredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GALGAS_getterMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 71)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 72)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 80)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 88)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 96)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 104)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 120)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 128)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 139)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 148)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 155)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 162)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 169)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sint64PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_sint_36__34_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-sint64.galgas", 181))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_stringPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("default") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GALGAS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-string.galgas", 37)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("homeDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 38)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("newWithStdIn"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("retrieveAndResetTemplateString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("separatorString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 59)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSymbolicLinkContents"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 66)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSourceFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 75)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 82)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 89)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDateTime"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 98)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariable"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 105)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariableOrEmpty"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 114)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppLineComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 123)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppSpaceComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 130)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppTitleComment"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 137)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 146)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppChar"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 155)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsJoinedByString"), GALGAS_string ("stringlist"), GALGAS_string ("inComponents"), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 164)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRepeatingString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("uint"), GALGAS_string ("inCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 175)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSequenceOfCharacters"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 186)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getClassMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getClassMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-string.galgas", 203)) ;
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("deleteFile"), GALGAS_string ("inFilePath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 204)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("deleteFileIfExists"), GALGAS_string ("inFilePath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 211)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("removeEmptyDirectory"), GALGAS_string ("inDirectoryPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 218)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("removeDirectoryRecursively"), GALGAS_string ("inDirectoryPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 225)) ;
  }
  GALGAS_unifiedTypeMapEntry var_stringType_7108 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType_7108, inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 232)) ;
  }
  GALGAS_unifiedTypeMapEntry var_boolType_7198 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_boolType_7198, inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 233)) ;
  }
  GALGAS_formalParameterSignature var_argList_7263 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("predefinedType-string.galgas", 235)) ;
  var_argList_7263.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 236)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 236)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 236)) ;
  var_argList_7263.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 237)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 237)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 237)) ;
  var_argList_7263.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 238)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 238)), GALGAS_string ("inContents")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 238)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (GALGAS_string ("generateFile"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 240)), var_argList_7263, GALGAS_bool (true) COMMA_SOURCE_FILE ("predefinedType-string.galgas", 239)) ;
  }
  var_argList_7263 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("predefinedType-string.galgas", 245)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("startPath").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 246)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 246)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 246)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("fileName").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 247)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 247)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 247)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("lineComment").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 248)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 248)), GALGAS_string ("inLineCommentPrefix")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 248)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("header").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 249)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 249)), GALGAS_string ("inHeader")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 249)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("defaultUserZone1").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 250)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 250)), GALGAS_string ("inDefaultUserZone1")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 250)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("generatedZone2").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 251)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 251)), GALGAS_string ("inGeneratedZone2")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 251)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("defaultUserZone2").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 252)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 252)), GALGAS_string ("inDefaultUserZone2")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 252)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("generatedZone3").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 253)), var_stringType_7108, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 253)), GALGAS_string ("inGeneratedZone3")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 253)) ;
  var_argList_7263.addAssign_operation (GALGAS_string ("makeExecutable").getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 254)), var_boolType_7198, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 254)), GALGAS_string ("inMakeExecutable")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 254)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (GALGAS_string ("generateFileWithPattern"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 256)), var_argList_7263, GALGAS_bool (true) COMMA_SOURCE_FILE ("predefinedType-string.galgas", 255)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getInstanceMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getInstanceMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-string.galgas", 266)) ;
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 267)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 275)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 283)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 291)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeSymbolicLinkWithPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 299)) ;
  }
  {
  routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (outArgument_outInstanceMethodMap, GALGAS_string ("makeDirectory"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 307)) ;
  }
  GALGAS_formalParameterSignature var_argList_10389 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("predefinedType-string.galgas", 313)) ;
  GALGAS_unifiedTypeMapEntry var_t_10478 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t_10478, inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 314)) ;
  }
  var_argList_10389.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 315)), var_t_10478, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("predefinedType-string.galgas", 315)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 315)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t_10478, inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 316)) ;
  }
  var_argList_10389.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("predefinedType-string.galgas", 317)), var_t_10478, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("predefinedType-string.galgas", 317)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 317)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 319)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("predefinedType-string.galgas", 320)), var_argList_10389, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 322)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("predefinedType-string.galgas", 324)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 318)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::class_func_new (GALGAS_string ("writeToExecutableFileWhenDifferentContents"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 328)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("predefinedType-string.galgas", 329)), var_argList_10389, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 331)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("predefinedType-string.galgas", 333)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 327)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getSetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GALGAS_setterMap & outArgument_outSetterMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-string.galgas", 342)) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inCapacity"), GALGAS_string ("setCapacity"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 343)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("incIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 351)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("decIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 359)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inColumnIndex"), GALGAS_string ("appendSpacesUntilColumn"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 367)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("setCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 375)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("insertCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 385)) ;
  }
  {
  routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("outChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("removeCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 395)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GALGAS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 411)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lastCharacter"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 412)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nowhere"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstring"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 420)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("here"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 428)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doesEnvironmentVariableExist"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 436)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 444)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("range"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 452)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationWithUnicodeEscaping"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 460)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("assemblerRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 468)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileNameRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 476)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nameRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 484)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cStringRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 492)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 500)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decodedStringFromRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 508)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("HTMLRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 516)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationEscapingQuestionMark"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 524)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Representation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 532)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationWithoutDelimiters"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 540)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Length"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 548)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf32Representation"), GALGAS_string ("withZeroTerminator"), GALGAS_string ("bool"), GALGAS_string ("inAppendZeroTerminator"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 556)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByTrimmingWhiteSpaces"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 566)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("md5"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 574)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sha256"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 582)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalUnsignedNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 590)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalUnsignedNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 598)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalUnsigned64Number"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 606)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalUnsigned64Number"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 614)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalSignedNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 622)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalSignedNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 630)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalSigned64Number"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 638)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalSigned64Number"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 646)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalSignedBigInt"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 654)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalSignedBigInt"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 662)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDoubleNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 670)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doubleNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 678)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("capacity"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 686)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isSymbolicLink"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 694)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExists"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 702)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExists"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 710)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("pathExtension"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 718)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nativePathWithUnixPath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 726)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unixPathWithNativePath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 734)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lastPathComponent"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 742)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingPathExtension"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 750)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByCapitalizingFirstCharacter"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 758)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("firstCharacterOrNul"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 766)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingLastPathComponent"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 774)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByStandardizingPath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 782)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowercaseString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 790)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uppercaseString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 798)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("reversedString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 806)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentColumn"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 814)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("system"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 822)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("popen"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 830)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationEnclosedWithin"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inCharacter"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 838)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandWithArguments"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_string ("inArguments"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 847)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hiddenCommandWithArguments"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_string ("inArguments"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 856)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("characterAtIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 865)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacter"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 874)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacterInRange"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inFirstCharacter"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inLastCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 883)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRemovingCharacterAtIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 896)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subStringFromIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 905)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("rightSubString"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 914)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("leftSubString"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 923)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subString"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inStart"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 932)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathFromPath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 941)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("relativePathFromPath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 950)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsSeparatedByString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 958)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftPadding"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 966)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRightPadding"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 975)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftAndRightPadding"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 984)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByReplacingStringByString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inSearchedString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inReplacementString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 993)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFiles"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1002)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hiddenFiles"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1012)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directories"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1021)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesWithExtensions"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1030)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFilesWithExtensions"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1039)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_stringPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-string.galgas", 1053)).operator_or (GALGAS_operators::class_func_infixAddOperator (SOURCE_FILE ("predefinedType-string.galgas", 1053)) COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1053)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-string.galgas", 1054)) COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1053)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-string.galgas", 1054)) COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1054)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getOptionalMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getOptionalMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_optionalMethodMap & outArgument_outMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_optionalMethodMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-string.galgas", 1061)) ;
  {
  routine_enterBaseOptionalMethodWithArgument_26__26__3F_optionalMethodName_3F__3F_ (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extractBigInt"), GALGAS_string ("bigint"), GALGAS_string ("outBigInt"), inCompiler  COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1062)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_stringPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-string.galgas", 1074))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_timerPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("start") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_timerPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-timer.galgas", 36)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@timerPredefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getSetterMap (GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                       GALGAS_setterMap & outArgument_outSetterMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-timer.galgas", 43)) ;
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GALGAS_string ("stop"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 44)) ;
  }
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GALGAS_string ("resume"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 49)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@timerPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                       GALGAS_getterMap & outArgument_outMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("msFromStart"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 61)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 69)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isRunning"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 77)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@timerPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GALGAS_classFunctionMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-timer.galgas", 91)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("start"), GALGAS_string ("timer"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 92)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_timerPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-timer.galgas", 104))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typePredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_typePredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typePredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typePredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-type.galgas", 37)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("typeList"), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-type.galgas", 38)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typePredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typePredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GALGAS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-type.galgas", 51)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-type.galgas", 52)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasSuperclass"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-type.galgas", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("superclass"), GALGAS_string::makeEmptyString (), GALGAS_string ("type"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-type.galgas", 68)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typePredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_typePredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-type.galgas", 81)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-type.galgas", 81)) COMMA_SOURCE_FILE ("predefinedType-type.galgas", 81)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typePredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_typePredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-type.galgas", 87))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uintPredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_uintPredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("default") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_uintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 36))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_uintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_infixAddOperator (SOURCE_FILE ("predefinedType-uint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixSubOperator (SOURCE_FILE ("predefinedType-uint.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixMulOperator (SOURCE_FILE ("predefinedType-uint.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixDivOperator (SOURCE_FILE ("predefinedType-uint.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixModOperator (SOURCE_FILE ("predefinedType-uint.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 42)).operator_or (GALGAS_operators::class_func_infixShiftOperator (SOURCE_FILE ("predefinedType-uint.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 43)).operator_or (GALGAS_operators::class_func_prefixPlusOperator (SOURCE_FILE ("predefinedType-uint.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 43)).operator_or (GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("predefinedType-uint.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 43)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("predefinedType-uint.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 44)).operator_or (GALGAS_operators::class_func_infixXorOperator (SOURCE_FILE ("predefinedType-uint.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 44)).operator_or (GALGAS_operators::class_func_prefixTildeOperator (SOURCE_FILE ("predefinedType-uint.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 44)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-uint.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 44)).operator_or (GALGAS_operators::class_func_incDecOperator (SOURCE_FILE ("predefinedType-uint.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 45)).operator_or (GALGAS_operators::class_func_incDecOperatorNoOVF (SOURCE_FILE ("predefinedType-uint.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 45)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-uint.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 45)).operator_or (GALGAS_operators::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("predefinedType-uint.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 45)).operator_or (GALGAS_operators::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("predefinedType-uint.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 46)).operator_or (GALGAS_operators::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("predefinedType-uint.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 46)).operator_or (GALGAS_operators::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("predefinedType-uint.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 46)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint.galgas", 47)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 46)).operator_or (GALGAS_operators::class_func_minusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint.galgas", 47)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 47)).operator_or (GALGAS_operators::class_func_mulEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint.galgas", 48)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 47)).operator_or (GALGAS_operators::class_func_divEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint.galgas", 48)) COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 48)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uintPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-uint.galgas", 55)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compilationMode"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 56)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("random"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 63)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 70)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("errorCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 77)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("warningCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 84)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueWithMask"), GALGAS_string ("uint"), GALGAS_string ("inLowerIndex"), GALGAS_string ("uint"), GALGAS_string ("inUpperIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 91)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uintPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GALGAS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 108)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 109)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 117)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 125)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 133)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 141)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lsbIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 149)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantBitCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 157)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("oneBitCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 165)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 173)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("alphaString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 181)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 189)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 197)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 208)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeValueAssigned"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 216)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isInRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 224)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 232)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 239)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 246)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 253)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uintPredefinedTypeAST getClassMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getClassMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-uint.galgas", 266)) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setRandomSeed"), GALGAS_string ("uint"), GALGAS_string ("inSeed"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint.galgas", 267)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uint64PredefinedTypeAST defaultInitializerName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_uint_36__34_PredefinedTypeAST::getter_defaultInitializerName (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("default") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uint64PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_uint_36__34_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 34))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uint64PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_operators cPtr_uint_36__34_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::class_func_infixAddOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 40)).operator_or (GALGAS_operators::class_func_infixSubOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 40)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 40)).operator_or (GALGAS_operators::class_func_infixMulOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 40)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 40)).operator_or (GALGAS_operators::class_func_infixDivOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 40)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 40)).operator_or (GALGAS_operators::class_func_infixModOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 41)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 40)).operator_or (GALGAS_operators::class_func_infixShiftOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 41)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 41)).operator_or (GALGAS_operators::class_func_prefixPlusOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 41)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 41)).operator_or (GALGAS_operators::class_func_infixAndOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 41)).operator_or (GALGAS_operators::class_func_infixOrOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 42)).operator_or (GALGAS_operators::class_func_infixXorOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 42)).operator_or (GALGAS_operators::class_func_prefixTildeOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 42)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 42)).operator_or (GALGAS_operators::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("predefinedType-uint64.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 42)).operator_or (GALGAS_operators::class_func_incDecOperator (SOURCE_FILE ("predefinedType-uint64.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 43)).operator_or (GALGAS_operators::class_func_incDecOperatorNoOVF (SOURCE_FILE ("predefinedType-uint64.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 43)).operator_or (GALGAS_operators::class_func_isComparable (SOURCE_FILE ("predefinedType-uint64.galgas", 43)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 43)).operator_or (GALGAS_operators::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("predefinedType-uint64.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 43)).operator_or (GALGAS_operators::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("predefinedType-uint64.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 44)).operator_or (GALGAS_operators::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("predefinedType-uint64.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 44)).operator_or (GALGAS_operators::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("predefinedType-uint64.galgas", 44)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 44)).operator_or (GALGAS_operators::class_func_plusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint64.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 44)).operator_or (GALGAS_operators::class_func_minusEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint64.galgas", 45)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 45)).operator_or (GALGAS_operators::class_func_mulEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint64.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 45)).operator_or (GALGAS_operators::class_func_divEqualOperatorWithExpression (SOURCE_FILE ("predefinedType-uint64.galgas", 46)) COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 46)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uint64PredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_uint_36__34_PredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_classFunctionMap & outArgument_outMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::class_func_emptyMap (SOURCE_FILE ("predefinedType-uint64.galgas", 53)) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 54)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64MaskWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 61)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64BaseValueWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 70)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64WithBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 79)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uint64PredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_uint_36__34_PredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GALGAS_getterMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 94)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 95)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 111)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 118)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 126)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintSlice"), GALGAS_string ("uint"), GALGAS_string ("inStartBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 134)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("alphaString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 143)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 151)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 159)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 167)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 178)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 186)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 193)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 200)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("predefinedType-uint64.galgas", 207)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputActualParameterAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mOutputActualParameterExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 115)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outputActualParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                    const GALGAS_string constinArgument_inSelector,
                                                                    Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  GALGAS_bool test_0 = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("actual-parameters.galgas", 122)))) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("actual-parameters.galgas", 122)))) ;
  }
  result_result = test_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = result_result.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_outputActualParameterAST temp_2 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & ioArgument_ioActualOutputArgumentList,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputActualParameterAST temp_0 = this ;
  const GALGAS_outputActualParameterAST temp_1 = this ;
  const GALGAS_outputActualParameterAST temp_2 = this ;
  ioArgument_ioActualOutputArgumentList.addAssign_operation (temp_0.readProperty_mActualSelector (), temp_1.readProperty_mOutputActualParameterExpression (), temp_2.readProperty_mEndOfExpressionLocation ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 131)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       const GALGAS_lstring constinArgument_inFormalSelector,
                                                                       const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                       const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                       GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                       GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (SOURCE_FILE ("actual-parameters.galgas", 151)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("actual-parameters.galgas", 152)))) COMMA_SOURCE_FILE ("actual-parameters.galgas", 151)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputActualParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 154)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 154)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 155)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 156)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 153)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputActualParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 159)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_7978 = GALGAS_string ("!").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 159)) ;
        const GALGAS_outputActualParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_7978) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_7978, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 160)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 160)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 160)) ;
      }
    }
    GALGAS_semanticExpressionForGeneration var_expression_8500 ;
    const GALGAS_outputActualParameterAST temp_9 = this ;
    callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_mOutputActualParameterExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8500, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 162)) ;
    {
    const GALGAS_outputActualParameterAST temp_10 = this ;
    routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inFormalArgumentType, var_expression_8500.readProperty_mResultType (), temp_10.readProperty_mEndOfExpressionLocation (), var_expression_8500, inCompiler  COMMA_SOURCE_FILE ("actual-parameters.galgas", 172)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputActualParameterForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_expression_8500  COMMA_SOURCE_FILE ("actual-parameters.galgas", 179))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 179)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outputInputActualParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                         const GALGAS_string constinArgument_inSelector,
                                                                         Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 206)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputActualParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputInputActualParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 215)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                            const GALGAS_lstring constinArgument_inFormalSelector,
                                                                            const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                            const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                            GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                            GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 232)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputActualParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 234)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 234)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 235)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 236)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 233)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputActualParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 238)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_11698 = GALGAS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 238)) ;
        const GALGAS_outputInputActualParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_11698) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_11698, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 239)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 239)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 239)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_parameterType_12048 ;
  GALGAS_string var_variableCppName_12073 ;
  {
  const GALGAS_outputInputActualParameterAST temp_9 = this ;
  GALGAS_string joker_12095 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mOutputInputActualParameterName (), var_parameterType_12048, var_variableCppName_12073, joker_12095, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 242)) ;
  }
  GALGAS_unifiedTypeMapEntryList var_typeList_12112 = GALGAS_unifiedTypeMapEntryList::class_func_listWithValue (var_parameterType_12048  COMMA_SOURCE_FILE ("actual-parameters.galgas", 248)) ;
  const GALGAS_outputInputActualParameterAST temp_10 = this ;
  cEnumerator_lstringlist enumerator_12188 (temp_10.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_12188.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_12237 = extensionGetter_definition (var_parameterType_12048, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 250)).readProperty_propertyMap () ;
    GALGAS_AccessControl var_accessControl_12347 ;
    GALGAS_bool var_isConstant_12374 ;
    var_propertyMap_12237.method_searchKey (enumerator_12188.current_mValue (HERE), var_accessControl_12347, var_isConstant_12374, var_parameterType_12048, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 251)) ;
    extensionMethod_checkSetAccess (var_accessControl_12347, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_12188.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 257)) ;
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_isConstant_12374.boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_12188.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 262)) ;
      }
    }
    var_typeList_12112.addAssign_operation (var_parameterType_12048  COMMA_SOURCE_FILE ("actual-parameters.galgas", 264)) ;
    enumerator_12188.gotoNextObject () ;
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_12048)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_outputInputActualParameterAST temp_14 = this ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mOutputInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_12048, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 269)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 269)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 269)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 271)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 270)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 271)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas", 268)) ;
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_outputInputActualParameterAST temp_17 = this ;
    test_16 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_17.readProperty_mOutputInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 274)).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_outputInputActualParameterAST temp_18 = this ;
      TC_Array <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mOutputInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray19  COMMA_SOURCE_FILE ("actual-parameters.galgas", 275)) ;
    }
  }
  const GALGAS_outputInputActualParameterAST temp_20 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_20.readProperty_mOutputInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 278)) ;
  const GALGAS_outputInputActualParameterAST temp_21 = this ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::class_func_new (var_parameterType_12048, var_variableCppName_12073, temp_21.readProperty_mStructAttributeList (), var_typeList_12112  COMMA_SOURCE_FILE ("actual-parameters.galgas", 280))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 280)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSingleJokerParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSingleJokerParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputSingleJokerParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outputInputSingleJokerParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                              const GALGAS_string constinArgument_inSelector,
                                                                              Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 306)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputSingleJokerParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSingleJokerParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSingleJokerParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputInputSingleJokerParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 315)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSingleJokerParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSingleJokerParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 332)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputSingleJokerParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 334)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 334)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 335)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 336)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 333)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputSingleJokerParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 338)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_16364 = GALGAS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 338)) ;
        const GALGAS_outputInputSingleJokerParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_16364) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_16364, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 339)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 339)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 339)) ;
      }
    }
  }
  GALGAS_classFunctionMap var_classFunctionMap_16610 = extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 342)).readProperty_classFunctionMap () ;
  GALGAS_bool var_hasCompilerArgument_16694 = GALGAS_bool (false) ;
  GALGAS_string var_constructorName_16738 = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_16767 = GALGAS_bool (false) ;
  cEnumerator_classFunctionMap enumerator_16794 (var_classFunctionMap_16610, EnumerationOrder::up) ;
  bool bool_9 = var_found_16767.operator_not (SOURCE_FILE ("actual-parameters.galgas", 346)).isValidAndTrue () ;
  if (enumerator_16794.hasCurrentObject () && bool_9) {
    while (enumerator_16794.hasCurrentObject () && bool_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        GALGAS_bool test_11 = GALGAS_bool (ComparisonKind::equal, enumerator_16794.current (HERE).readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("actual-parameters.galgas", 347)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
        if (kBoolTrue == test_11.boolEnum ()) {
          test_11 = GALGAS_bool (ComparisonKind::equal, enumerator_16794.current (HERE).readProperty_mReturnedType ().objectCompare (constinArgument_inFormalArgumentType)) ;
        }
        test_10 = test_11.boolEnum () ;
        if (kBoolTrue == test_10) {
          var_hasCompilerArgument_16694 = enumerator_16794.current (HERE).readProperty_mHasCompilerArgument () ;
          var_constructorName_16738 = enumerator_16794.current (HERE).readProperty_lkey ().readProperty_string () ;
          var_found_16767 = GALGAS_bool (true) ;
        }
      }
      enumerator_16794.gotoNextObject () ;
      if (enumerator_16794.hasCurrentObject ()) {
        bool_9 = var_found_16767.operator_not (SOURCE_FILE ("actual-parameters.galgas", 346)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = var_found_16767.operator_not (SOURCE_FILE ("actual-parameters.galgas", 353)).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_outputInputSingleJokerParameterAST temp_13 = this ;
      TC_Array <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 355)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 355)).add_operation (GALGAS_string ("' has no initializer without argument"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 355)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas", 354)) ;
    }
  }
  const GALGAS_outputInputSingleJokerParameterAST temp_15 = this ;
  GALGAS_string var_cppVarName_17265 = GALGAS_string ("joker_").add_operation (temp_15.readProperty_mActualSelector ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 358)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 358)) ;
  const GALGAS_outputInputSingleJokerParameterAST temp_16 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::class_func_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_17265, GALGAS_defaultConstructorExpressionForGeneration::class_func_new (constinArgument_inFormalArgumentType, temp_16.readProperty_mActualSelector ().readProperty_location (), var_constructorName_16738, var_hasCompilerArgument_16694  COMMA_SOURCE_FILE ("actual-parameters.galgas", 363))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 359))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 359)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_cppVarName_17265, GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 368)), GALGAS_unifiedTypeMapEntryList::class_func_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("actual-parameters.galgas", 369))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 365))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 365)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSelfParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputSelfParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outputInputSelfParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                       const GALGAS_string constinArgument_inSelector,
                                                                       Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 391)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputSelfParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSelfParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputInputSelfParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 400)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSelfParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          const GALGAS_lstring constinArgument_inFormalSelector,
                                                                          const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                          const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                          GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                          GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                          GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                          GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 417)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputSelfParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 419)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 419)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 420)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 421)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 418)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputSelfParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 423)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_20542 = GALGAS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 423)) ;
        const GALGAS_outputInputSelfParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_20542) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_20542, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 424)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 424)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 424)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    GALGAS_unifiedTypeMapEntry var_selfType_21133 ;
    GALGAS_selfMutability var_selfMutability_21163 ;
    GALGAS_bool var_unused_0_21195 ;
    GALGAS_bool var_unused_0_21220 ;
    const bool optionalResult21112 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_21133, var_selfMutability_21163, var_unused_0_21195, var_unused_0_21220) ;
    if (!optionalResult21112) {
      test_9 = kBoolFalse ;
    }
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = extensionGetter_selfIsMutable (var_selfMutability_21163, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 434)).operator_not (SOURCE_FILE ("actual-parameters.galgas", 434)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_outputInputSelfParameterAST temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 435)) ;
        }
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_selfType_21133)).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_outputInputSelfParameterAST temp_14 = this ;
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_selfType_21133, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 440)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 440)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 440)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 442)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 441)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 442)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas", 439)) ;
        }
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::class_func_new (constinArgument_inFormalArgumentType, GALGAS_string ("ioObject"), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 447)), GALGAS_unifiedTypeMapEntryList::class_func_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("actual-parameters.galgas", 448))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 444))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 444)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_outputInputSelfParameterAST temp_16 = this ;
    TC_Array <FixItDescription> fixItArray17 ;
    inCompiler->emitSemanticError (temp_16.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray17  COMMA_SOURCE_FILE ("actual-parameters.galgas", 451)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputJokerParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outputInputJokerParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                        const GALGAS_string /* constinArgument_inSelector */,
                                                                        Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 474)))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outputInputJokerParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mQualifierLocation (), GALGAS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 483)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                           GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                           const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                           const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas", 500)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputJokerParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mQualifierLocation (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 502)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 502)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 503)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 503)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 501)) ;
    }
  }
  GALGAS_classFunctionMap var_classFunctionMap_24935 = extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 506)).readProperty_classFunctionMap () ;
  GALGAS_bool var_hasCompilerArgument_25021 = GALGAS_bool (false) ;
  GALGAS_string var_constructorName_25067 = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_25098 = GALGAS_bool (false) ;
  cEnumerator_classFunctionMap enumerator_25127 (var_classFunctionMap_24935, EnumerationOrder::up) ;
  bool bool_3 = var_found_25098.operator_not (SOURCE_FILE ("actual-parameters.galgas", 510)).isValidAndTrue () ;
  if (enumerator_25127.hasCurrentObject () && bool_3) {
    while (enumerator_25127.hasCurrentObject () && bool_3) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        GALGAS_bool test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_25127.current (HERE).readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("actual-parameters.galgas", 511)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
        if (kBoolTrue == test_5.boolEnum ()) {
          test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_25127.current (HERE).readProperty_mReturnedType ().objectCompare (constinArgument_inFormalArgumentType)) ;
        }
        test_4 = test_5.boolEnum () ;
        if (kBoolTrue == test_4) {
          var_hasCompilerArgument_25021 = enumerator_25127.current (HERE).readProperty_mHasCompilerArgument () ;
          var_constructorName_25067 = enumerator_25127.current (HERE).readProperty_lkey ().readProperty_string () ;
          var_found_25098 = GALGAS_bool (true) ;
        }
      }
      enumerator_25127.gotoNextObject () ;
      if (enumerator_25127.hasCurrentObject ()) {
        bool_3 = var_found_25098.operator_not (SOURCE_FILE ("actual-parameters.galgas", 510)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_found_25098.operator_not (SOURCE_FILE ("actual-parameters.galgas", 517)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_outputInputJokerParameterAST temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mQualifierLocation (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 519)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 519)).add_operation (GALGAS_string ("' has no initializer without argument"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 519)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 518)) ;
    }
  }
  const GALGAS_outputInputJokerParameterAST temp_9 = this ;
  const GALGAS_outputInputJokerParameterAST temp_10 = this ;
  GALGAS_string var_cppVarName_25625 = GALGAS_string ("joker_").add_operation (temp_9.readProperty_mQualifierLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 522)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 522)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 522)).add_operation (temp_10.readProperty_mJokerIndex ().getter_string (SOURCE_FILE ("actual-parameters.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 522)) ;
  const GALGAS_outputInputJokerParameterAST temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::class_func_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_25625, GALGAS_defaultConstructorExpressionForGeneration::class_func_new (constinArgument_inFormalArgumentType, temp_11.readProperty_mQualifierLocation (), var_constructorName_25067, var_hasCompilerArgument_25021  COMMA_SOURCE_FILE ("actual-parameters.galgas", 527))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 523))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 523)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_cppVarName_25625, GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 532)), GALGAS_unifiedTypeMapEntryList::class_func_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("actual-parameters.galgas", 533))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 529))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 529)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualExistingVariableParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualExistingVariableParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_inputActualExistingVariableParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                                   const GALGAS_string constinArgument_inSelector,
                                                                                   Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 556)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualExistingVariableParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualExistingVariableParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputActualExistingVariableParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 565)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualExistingVariableParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                      const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                      const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                      GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                      GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                      GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 582)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualExistingVariableParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 584)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 584)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 585)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 585)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 583)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualExistingVariableParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 587)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_28808 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 587)) ;
        const GALGAS_inputActualExistingVariableParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_28808) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_28808, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 588)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 588)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 588)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_parameterType_29235 ;
  GALGAS_string var_targetVariableCppName_29260 ;
  {
  const GALGAS_inputActualExistingVariableParameterAST temp_9 = this ;
  GALGAS_string joker_29288 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mInputActualParameterName (), var_parameterType_29235, var_targetVariableCppName_29260, joker_29288, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 591)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_29235)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_inputActualExistingVariableParameterAST temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_29235, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 600)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 600)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 600)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 601)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 601)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 601)), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 599)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    const GALGAS_inputActualExistingVariableParameterAST temp_14 = this ;
    test_13 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_14.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 604)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_inputActualExistingVariableParameterAST temp_15 = this ;
      TC_Array <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray16  COMMA_SOURCE_FILE ("actual-parameters.galgas", 605)) ;
    }
  }
  const GALGAS_inputActualExistingVariableParameterAST temp_17 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_17.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 608)) ;
  GALGAS__32_stringlist var_poisonedVarCppNameList_30012 = GALGAS__32_stringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 610)) ;
  const GALGAS_inputActualExistingVariableParameterAST temp_18 = this ;
  cEnumerator_lstringlist enumerator_30049 (temp_18.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
  while (enumerator_30049.hasCurrentObject ()) {
    GALGAS_string var_targetVariableCppName_30175 ;
    GALGAS_string var_nameForCheckingFormalParameterUsing_30210 ;
    {
    GALGAS_unifiedTypeMapEntry joker_30159 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_30049.current_mValue (HERE), joker_30159, var_targetVariableCppName_30175, var_nameForCheckingFormalParameterUsing_30210, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 612)) ;
    }
    var_poisonedVarCppNameList_30012.addAssign_operation (var_targetVariableCppName_30175, var_nameForCheckingFormalParameterUsing_30210  COMMA_SOURCE_FILE ("actual-parameters.galgas", 618)) ;
    enumerator_30049.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::class_func_new (var_parameterType_29235, var_targetVariableCppName_29260, var_poisonedVarCppNameList_30012  COMMA_SOURCE_FILE ("actual-parameters.galgas", 620))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 620)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfPropertyParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualSelfPropertyParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_inputActualSelfPropertyParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                               const GALGAS_string constinArgument_inSelector,
                                                                               Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 647)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualSelfPropertyParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfPropertyParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputActualSelfPropertyParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 656)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfPropertyParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                  const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                  const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                  GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                  GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                  GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 674)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualSelfPropertyParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 676)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 676)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 677)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 677)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 677)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 675)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualSelfPropertyParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 679)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_33004 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 679)) ;
        const GALGAS_inputActualSelfPropertyParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_33004) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_33004, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 680)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 680)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 680)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    GALGAS_unifiedTypeMapEntry var_selfType_33255 ;
    GALGAS_selfMutability var_selfMutability_33285 ;
    GALGAS_bool var_unused_0_33317 ;
    GALGAS_bool var_unused_0_33343 ;
    const bool optionalResult33234 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_33255, var_selfMutability_33285, var_unused_0_33317, var_unused_0_33343) ;
    if (!optionalResult33234) {
      test_9 = kBoolFalse ;
    }
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = extensionGetter_selfIsMutable (var_selfMutability_33285, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 684)).operator_not (SOURCE_FILE ("actual-parameters.galgas", 684)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_inputActualSelfPropertyParameterAST temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 685)) ;
        }
      }
      GALGAS_propertyMap var_propertyMap_33507 = extensionGetter_definition (var_selfType_33255, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 687)).readProperty_propertyMap () ;
      GALGAS_unifiedTypeMapEntry var_parameterType_33628 ;
      const GALGAS_inputActualSelfPropertyParameterAST temp_13 = this ;
      GALGAS_AccessControl joker_33619_2 ; // Joker input parameter
      GALGAS_bool joker_33619_1 ; // Joker input parameter
      var_propertyMap_33507.method_searchKey (temp_13.readProperty_mInputActualSelfPropertyName (), joker_33619_2, joker_33619_1, var_parameterType_33628, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 688)) ;
      const GALGAS_inputActualSelfPropertyParameterAST temp_14 = this ;
      GALGAS_string var_targetVariableCppName_33653 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 689)).add_operation (temp_14.readProperty_mInputActualSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas", 690)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 690)) ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_33628)).boolEnum () ;
        if (kBoolTrue == test_15) {
          const GALGAS_inputActualSelfPropertyParameterAST temp_16 = this ;
          TC_Array <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_33628, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 694)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 694)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 694)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 695)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 695)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 695)), fixItArray17  COMMA_SOURCE_FILE ("actual-parameters.galgas", 693)) ;
        }
      }
      GALGAS__32_stringlist var_poisonedVarCppNameList_34238 = GALGAS__32_stringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 698)) ;
      const GALGAS_inputActualSelfPropertyParameterAST temp_18 = this ;
      cEnumerator_lstringlist enumerator_34277 (temp_18.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
      while (enumerator_34277.hasCurrentObject ()) {
        GALGAS_string var_targetVariableCppName_34411 ;
        GALGAS_string var_nameForCheckingFormalParameterUsing_34448 ;
        {
        GALGAS_unifiedTypeMapEntry joker_34393 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_34277.current_mValue (HERE), joker_34393, var_targetVariableCppName_34411, var_nameForCheckingFormalParameterUsing_34448, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 700)) ;
        }
        var_poisonedVarCppNameList_34238.addAssign_operation (var_targetVariableCppName_34411, var_nameForCheckingFormalParameterUsing_34448  COMMA_SOURCE_FILE ("actual-parameters.galgas", 706)) ;
        enumerator_34277.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::class_func_new (var_parameterType_33628, var_targetVariableCppName_33653, var_poisonedVarCppNameList_34238  COMMA_SOURCE_FILE ("actual-parameters.galgas", 708))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 708)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_inputActualSelfPropertyParameterAST temp_19 = this ;
    TC_Array <FixItDescription> fixItArray20 ;
    inCompiler->emitSemanticError (temp_19.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray20  COMMA_SOURCE_FILE ("actual-parameters.galgas", 715)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualSelfParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_inputActualSelfParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                       const GALGAS_string constinArgument_inSelector,
                                                                       Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 739)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualSelfParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputActualSelfParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 748)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          const GALGAS_lstring constinArgument_inFormalSelector,
                                                                          const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                          const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                          GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                          GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 766)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualSelfParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 768)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 768)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 768)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 769)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 769)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 767)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualSelfParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 771)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_37341 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 771)) ;
        const GALGAS_inputActualSelfParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_37341) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_37341, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 772)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 772)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 772)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    GALGAS_unifiedTypeMapEntry var_selfType_37592 ;
    GALGAS_selfMutability var_selfMutability_37622 ;
    GALGAS_bool var_unused_0_37654 ;
    GALGAS_bool var_unused_0_37680 ;
    const bool optionalResult37571 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_37592, var_selfMutability_37622, var_unused_0_37654, var_unused_0_37680) ;
    if (!optionalResult37571) {
      test_9 = kBoolFalse ;
    }
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = extensionGetter_selfIsMutable (var_selfMutability_37622, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 776)).operator_not (SOURCE_FILE ("actual-parameters.galgas", 776)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_inputActualSelfParameterAST temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mSelfLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas", 777)) ;
        }
      }
      GALGAS_string var_targetVariableCppName_37977 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_selfType_37592)).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_inputActualSelfParameterAST temp_14 = this ;
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mSelfLocation (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_selfType_37592, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 786)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 786)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 786)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 788)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 787)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 788)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas", 785)) ;
        }
      }
      GALGAS__32_stringlist var_poisonedVarCppNameList_38524 = GALGAS__32_stringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 791)) ;
      const GALGAS_inputActualSelfParameterAST temp_16 = this ;
      cEnumerator_lstringlist enumerator_38563 (temp_16.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
      while (enumerator_38563.hasCurrentObject ()) {
        GALGAS_string var_targetVariableCppName_38697 ;
        GALGAS_string var_nameForCheckingFormalParameterUsing_38734 ;
        {
        GALGAS_unifiedTypeMapEntry joker_38679 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_38563.current_mValue (HERE), joker_38679, var_targetVariableCppName_38697, var_nameForCheckingFormalParameterUsing_38734, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 793)) ;
        }
        var_poisonedVarCppNameList_38524.addAssign_operation (var_targetVariableCppName_38697, var_nameForCheckingFormalParameterUsing_38734  COMMA_SOURCE_FILE ("actual-parameters.galgas", 799)) ;
        enumerator_38563.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::class_func_new (var_selfType_37592, var_targetVariableCppName_37977, var_poisonedVarCppNameList_38524  COMMA_SOURCE_FILE ("actual-parameters.galgas", 801))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 801)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_inputActualSelfParameterAST temp_17 = this ;
    TC_Array <FixItDescription> fixItArray18 ;
    inCompiler->emitSemanticError (temp_17.readProperty_mSelfLocation (), GALGAS_string ("'self' not available in this context"), fixItArray18  COMMA_SOURCE_FILE ("actual-parameters.galgas", 808)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewVariableParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualNewVariableParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_inputActualNewVariableParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                              const GALGAS_string constinArgument_inSelector,
                                                                              Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 833)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualNewVariableParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewVariableParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputActualNewVariableParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 842)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewVariableParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 861)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualNewVariableParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 863)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 863)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 863)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 865)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 864)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 865)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 862)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualNewVariableParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 867)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_41693 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 867)) ;
        const GALGAS_inputActualNewVariableParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_41693) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_41693, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 868)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 868)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 868)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_inputActualNewVariableParameterAST temp_10 = this ;
    test_9 = GALGAS_bool (ComparisonKind::notEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_inputActualNewVariableParameterAST temp_11 = this ;
      GALGAS_unifiedTypeMapEntry var_parameterType_41981 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 872)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_41981)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_inputActualNewVariableParameterAST temp_13 = this ;
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_41981, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 875)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 875)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 875)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 877)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 876)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 877)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas", 874)) ;
        }
      }
    }
  }
  const GALGAS_inputActualNewVariableParameterAST temp_15 = this ;
  const GALGAS_inputActualNewVariableParameterAST temp_16 = this ;
  GALGAS_string var_targetVariableCppName_42449 = GALGAS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas", 881)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 881)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 881)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 881)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 881)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 881)) ;
  {
  const GALGAS_inputActualNewVariableParameterAST temp_17 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_17.readProperty_mInputActualParameterName (), GALGAS_bool (true), constinArgument_inFormalArgumentType, var_targetVariableCppName_42449, var_targetVariableCppName_42449, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 882)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_42449  COMMA_SOURCE_FILE ("actual-parameters.galgas", 890))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 890)) ;
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GALGAS_inputActualNewVariableParameterAST temp_19 = this ;
    test_18 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_19.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 894)).boolEnum () ;
    if (kBoolTrue == test_18) {
      const GALGAS_inputActualNewVariableParameterAST temp_20 = this ;
      TC_Array <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray21  COMMA_SOURCE_FILE ("actual-parameters.galgas", 895)) ;
    }
  }
  const GALGAS_inputActualNewVariableParameterAST temp_22 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_22.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 898)) ;
  GALGAS__32_stringlist var_poisonedVarCppNameList_43383 = GALGAS__32_stringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 900)) ;
  const GALGAS_inputActualNewVariableParameterAST temp_23 = this ;
  cEnumerator_lstringlist enumerator_43420 (temp_23.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
  while (enumerator_43420.hasCurrentObject ()) {
    GALGAS_string var_targetVariableCppName_43546 ;
    GALGAS_string var_nameForCheckingFormalParameterUsing_43581 ;
    {
    GALGAS_unifiedTypeMapEntry joker_43530 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_43420.current_mValue (HERE), joker_43530, var_targetVariableCppName_43546, var_nameForCheckingFormalParameterUsing_43581, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 902)) ;
    }
    var_poisonedVarCppNameList_43383.addAssign_operation (var_targetVariableCppName_43546, var_nameForCheckingFormalParameterUsing_43581  COMMA_SOURCE_FILE ("actual-parameters.galgas", 908)) ;
    enumerator_43420.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_42449, var_poisonedVarCppNameList_43383  COMMA_SOURCE_FILE ("actual-parameters.galgas", 910))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 910)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewConstantParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualNewConstantParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_inputActualNewConstantParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                              const GALGAS_string constinArgument_inSelector,
                                                                              Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 939)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualNewConstantParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewConstantParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputActualNewConstantParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 948)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewConstantParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 967)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualNewConstantParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 969)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 969)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 969)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 971)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 970)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 971)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 968)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualNewConstantParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 973)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_46512 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 973)) ;
        const GALGAS_inputActualNewConstantParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_46512) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_46512, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 974)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 974)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 974)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_inputActualNewConstantParameterAST temp_10 = this ;
    test_9 = GALGAS_bool (ComparisonKind::notEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_inputActualNewConstantParameterAST temp_11 = this ;
      GALGAS_unifiedTypeMapEntry var_parameterType_46800 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 978)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_46800)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_inputActualNewConstantParameterAST temp_13 = this ;
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_46800, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 981)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 981)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 981)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 982)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 982)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 982)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas", 980)) ;
        }
      }
    }
  }
  const GALGAS_inputActualNewConstantParameterAST temp_15 = this ;
  const GALGAS_inputActualNewConstantParameterAST temp_16 = this ;
  GALGAS_string var_targetVariableCppName_47260 = GALGAS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas", 986)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 986)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 986)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 986)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 986)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 986)) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_inputActualNewConstantParameterAST temp_18 = this ;
    test_17 = temp_18.readProperty_mMarkedAsUnused ().boolEnum () ;
    if (kBoolTrue == test_17) {
      {
      const GALGAS_inputActualNewConstantParameterAST temp_19 = this ;
      extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, temp_19.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_47260, var_targetVariableCppName_47260, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 988)) ;
      }
    }
  }
  if (kBoolFalse == test_17) {
    {
    const GALGAS_inputActualNewConstantParameterAST temp_20 = this ;
    extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_20.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_47260, var_targetVariableCppName_47260, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 995)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_47260  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1003))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1003)) ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    const GALGAS_inputActualNewConstantParameterAST temp_22 = this ;
    test_21 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_22.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas", 1008)).boolEnum () ;
    if (kBoolTrue == test_21) {
      const GALGAS_inputActualNewConstantParameterAST temp_23 = this ;
      TC_Array <FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray24  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1009)) ;
    }
  }
  const GALGAS_inputActualNewConstantParameterAST temp_25 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_25.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1012)) ;
  GALGAS__32_stringlist var_poisonedVarCppNameList_48417 = GALGAS__32_stringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 1014)) ;
  const GALGAS_inputActualNewConstantParameterAST temp_26 = this ;
  cEnumerator_lstringlist enumerator_48454 (temp_26.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
  while (enumerator_48454.hasCurrentObject ()) {
    GALGAS_string var_targetVariableCppName_48580 ;
    GALGAS_string var_nameForCheckingFormalParameterUsing_48615 ;
    {
    GALGAS_unifiedTypeMapEntry joker_48564 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_48454.current_mValue (HERE), joker_48564, var_targetVariableCppName_48580, var_nameForCheckingFormalParameterUsing_48615, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1016)) ;
    }
    var_poisonedVarCppNameList_48417.addAssign_operation (var_targetVariableCppName_48580, var_nameForCheckingFormalParameterUsing_48615  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1022)) ;
    enumerator_48454.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_47260, var_poisonedVarCppNameList_48417  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1024))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1024)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputSingleJokerActualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputSingleJokerActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_inputSingleJokerActualParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                              const GALGAS_string constinArgument_inSelector,
                                                                              Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 1050)))) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputSingleJokerActualParameterAST temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputSingleJokerActualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputSingleJokerActualParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1059)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputSingleJokerActualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                 GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 1076)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputSingleJokerActualParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1078)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1078)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1078)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1080)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1079)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1080)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1077)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputSingleJokerActualParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1082)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_51405 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1082)) ;
        const GALGAS_inputSingleJokerActualParameterAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_51405) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_51405, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1083)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1083)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1083)) ;
      }
    }
    if (kBoolFalse == test_3) {
      const GALGAS_inputSingleJokerActualParameterAST temp_9 = this ;
      GALGAS_string var_cppVarName_51606 = GALGAS_string ("joker_").add_operation (temp_9.readProperty_mActualSelector ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1085)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 1085)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1085)) ;
      GALGAS__32_stringlist var_poisonedVarCppNameList_51739 = GALGAS__32_stringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 1087)) ;
      const GALGAS_inputSingleJokerActualParameterAST temp_10 = this ;
      cEnumerator_lstringlist enumerator_51778 (temp_10.readProperty_mPoisonedVarNameList (), EnumerationOrder::up) ;
      while (enumerator_51778.hasCurrentObject ()) {
        GALGAS_string var_targetVariableCppName_51912 ;
        GALGAS_string var_nameForCheckingFormalParameterUsing_51949 ;
        {
        GALGAS_unifiedTypeMapEntry joker_51894 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_51778.current_mValue (HERE), joker_51894, var_targetVariableCppName_51912, var_nameForCheckingFormalParameterUsing_51949, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1089)) ;
        }
        var_poisonedVarCppNameList_51739.addAssign_operation (var_targetVariableCppName_51912, var_nameForCheckingFormalParameterUsing_51949  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1095)) ;
        enumerator_51778.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_cppVarName_51606, var_poisonedVarCppNameList_51739  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1097))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1097)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerActualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputJokerActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_inputJokerActualParameterAST::getter_isCompatibleWith (const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                        const GALGAS_string /* constinArgument_inSelector */,
                                                                        Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 1124)))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerActualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_enterInActualOutputParameterList (GALGAS_actualOutputExpressionList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_inputJokerActualParameterAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mQualifierLocation (), GALGAS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1133)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerActualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                           GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                           const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                           const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                           GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas", 1150)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputJokerActualParameterAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mQualifierLocation (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1152)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1152)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1152)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1153)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1153)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1153)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1151)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_inputJokerActualParameterAST temp_3 = this ;
    const GALGAS_inputJokerActualParameterAST temp_4 = this ;
    GALGAS_string var_cppVarName_54687 = GALGAS_string ("joker_").add_operation (temp_3.readProperty_mQualifierLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1155)).getter_string (SOURCE_FILE ("actual-parameters.galgas", 1155)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1155)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1155)).add_operation (temp_4.readProperty_mJokerIndex ().getter_string (SOURCE_FILE ("actual-parameters.galgas", 1155)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas", 1155)) ;
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::class_func_new (constinArgument_inFormalArgumentType, var_cppVarName_54687, GALGAS__32_stringlist::class_func_emptyList (SOURCE_FILE ("actual-parameters.galgas", 1160))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1157))  COMMA_SOURCE_FILE ("actual-parameters.galgas", 1157)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externProcedureDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                         GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externProcedureDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 109)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externProcedureDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_externProcedureDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_externProcedureDeclarationAST temp_0 = this ;
  const GALGAS_externProcedureDeclarationAST temp_1 = this ;
  result_result = GALGAS_string ("routine ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 115)).add_operation (extensionGetter_keyRepresentation (temp_1.readProperty_mFormalArgumentListAST (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 115)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externProcedureDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                   const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                   const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_routineSignature_5991 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("extern-procedure-declaration.galgas", 142)) ;
  const GALGAS_externProcedureDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_6064 (temp_0.readProperty_mFormalArgumentListAST (), EnumerationOrder::up) ;
  while (enumerator_6064.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_6158 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6064.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_6158, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 144)) ;
    }
    var_routineSignature_5991.addAssign_operation (enumerator_6064.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_6158, enumerator_6064.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_6064.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 145)) ;
    enumerator_6064.gotoNextObject () ;
  }
  {
  const GALGAS_externProcedureDeclarationAST temp_1 = this ;
  const GALGAS_externProcedureDeclarationAST temp_2 = this ;
  extensionSetter_insertKey (ioArgument_ioSemanticContext.mProperty_routineMap, temp_1.readProperty_mRoutineName (), var_routineSignature_5991, temp_2.readProperty_isFilePrivate (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 152)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externProcedureDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterListForGeneration var_formalArgumentList_7227 = GALGAS_formalParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("extern-procedure-declaration.galgas", 169)) ;
  GALGAS_formalParameterSignature var_routineSignature_7293 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("extern-procedure-declaration.galgas", 170)) ;
  const GALGAS_externProcedureDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_7366 (temp_0.readProperty_mFormalArgumentListAST (), EnumerationOrder::up) ;
  while (enumerator_7366.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterType_7402 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_7366.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 172)) ;
    var_formalArgumentList_7227.addAssign_operation (enumerator_7366.current (HERE).readProperty_mFormalSelector (), enumerator_7366.current (HERE).readProperty_mFormalArgumentPassingMode (), var_parameterType_7402, enumerator_7366.current (HERE).readProperty_mFormalArgumentName (), enumerator_7366.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 173)) ;
    var_routineSignature_7293.addAssign_operation (enumerator_7366.current (HERE).readProperty_mFormalSelector (), var_parameterType_7402, enumerator_7366.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_7366.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 179)) ;
    enumerator_7366.gotoNextObject () ;
  }
  const GALGAS_externProcedureDeclarationAST temp_1 = this ;
  GALGAS_lstring var_mangledName_7886 = function_routineMangledName (temp_1.readProperty_mRoutineName (), var_routineSignature_7293, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 185)) ;
  GALGAS_lstring var_nameForUsefulness_7995 = function_procedureNameForUsefulEntitiesGraph (var_mangledName_7886, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 187)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7995, var_nameForUsefulness_7995, inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 188)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_externProcedureDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_usefullProcedure ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_7995  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 190)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (var_mangledName_7886.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 194)), GALGAS_routinePrototypeDeclarationForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (var_mangledName_7886.readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extern-procedure-declaration.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 197)), var_mangledName_7886.readProperty_string (), var_formalArgumentList_7227  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 195))  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 193)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@routinePrototypeDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_routinePrototypeDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("extern-procedure-declaration.galgas", 220)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@routinePrototypeDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_routinePrototypeDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_string & outArgument_outHeader,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_routinePrototypeDeclarationForGeneration temp_0 = this ;
  const GALGAS_routinePrototypeDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (inCompiler, temp_0.readProperty_routineMangledName (), temp_1.readProperty_mFormalArgumentList () COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas", 227))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_routineSignature_6936 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("procedure-declaration.galgas", 179)) ;
  const GALGAS_procDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_7009 (temp_0.readProperty_mFormalArgumentListAST (), EnumerationOrder::up) ;
  while (enumerator_7009.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_7103 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_7009.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_7103, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 181)) ;
    }
    var_routineSignature_6936.addAssign_operation (enumerator_7009.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_7103, enumerator_7009.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_7009.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 182)) ;
    enumerator_7009.gotoNextObject () ;
  }
  const GALGAS_procDeclarationAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mRoutineInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 189)) ;
  {
  const GALGAS_procDeclarationAST temp_2 = this ;
  const GALGAS_procDeclarationAST temp_3 = this ;
  extensionSetter_insertKey (ioArgument_ioSemanticContext.mProperty_routineMap, temp_2.readProperty_mRoutineName (), var_routineSignature_6936, temp_3.readProperty_isFilePrivate (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 191)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_routineSignature_8283 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("procedure-declaration.galgas", 208)) ;
  const GALGAS_procDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_8356 (temp_0.readProperty_mFormalArgumentListAST (), EnumerationOrder::up) ;
  while (enumerator_8356.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterType_8392 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_8356.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 210)) ;
    var_routineSignature_8283.addAssign_operation (enumerator_8356.current (HERE).readProperty_mFormalSelector (), var_parameterType_8392, enumerator_8356.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_8356.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 211)) ;
    enumerator_8356.gotoNextObject () ;
  }
  const GALGAS_procDeclarationAST temp_1 = this ;
  GALGAS_lstring var_mangledName_8663 = function_routineMangledName (temp_1.readProperty_mRoutineName (), var_routineSignature_8283, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 217)) ;
  GALGAS_lstring var_nameForUsefulness_8772 = function_procedureNameForUsefulEntitiesGraph (var_mangledName_8663, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 219)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8772, var_nameForUsefulness_8772, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 220)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_procDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_usefullProcedure ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_8772  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 222)) ;
    }
  }
  GALGAS_analysisContext var_analysisContext_9046 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("procedure-declaration.galgas", 229)), GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 225)) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_9639 ;
  GALGAS_formalParameterListForGeneration var_formalArgumentList_9666 ;
  {
  const GALGAS_procDeclarationAST temp_4 = this ;
  const GALGAS_procDeclarationAST temp_5 = this ;
  const GALGAS_procDeclarationAST temp_6 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_nameForUsefulness_8772, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_9046, ioArgument_ioTypeMap, temp_4.readProperty_mFormalArgumentListAST (), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("procedure-declaration.galgas", 239)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("procedure-declaration.galgas", 240)), temp_5.readProperty_mRoutineInstructionList (), temp_6.readProperty_mEndOfRoutineInstructionList (), var_instructionList_9639, var_formalArgumentList_9666, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 233)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (var_mangledName_8663.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 247)), GALGAS_routineImplementationForGeneration::class_func_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (var_mangledName_8663.readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 250)), var_mangledName_8663.readProperty_string (), var_formalArgumentList_9666, GALGAS_bool (false), var_instructionList_9639  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 248))  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 246)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@routineImplementationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_routineImplementationForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_generateHeader ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_routineImplementationForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_2.readProperty_routineMangledName ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 280))  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 280)) ;
    }
  }
  GALGAS_string var_code_11535 ;
  {
  const GALGAS_routineImplementationForGeneration temp_3 = this ;
  const GALGAS_routineImplementationForGeneration temp_4 = this ;
  const GALGAS_routineImplementationForGeneration temp_5 = this ;
  const GALGAS_routineImplementationForGeneration temp_6 = this ;
  routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (temp_3.readProperty_mGenerateStatic (), GALGAS_string ("routine_").add_operation (temp_4.readProperty_routineMangledName ().getter_identifierRepresentation (SOURCE_FILE ("procedure-declaration.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 284)), ioArgument_ioInclusionSet, temp_5.readProperty_mFormalArgumentList (), temp_6.readProperty_mRoutineInstructionList (), GALGAS_bool (false), GALGAS_string ("Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_11535, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 282)) ;
  }
  const GALGAS_routineImplementationForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, temp_7.readProperty_routineMangledName (), var_code_11535 COMMA_SOURCE_FILE ("procedure-declaration.galgas", 295))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Once function 'generateFewHeaderFiles'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_bool onceFunction_generateFewHeaderFiles (Compiler *
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_generateFewHeaderFiles = false ;
static GALGAS_bool gOnceFunctionResult_generateFewHeaderFiles ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool function_generateFewHeaderFiles (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_generateFewHeaderFiles) {
    gOnceFunctionResult_generateFewHeaderFiles = onceFunction_generateFewHeaderFiles (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_generateFewHeaderFiles = true ;
  }
  return gOnceFunctionResult_generateFewHeaderFiles ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_generateFewHeaderFiles (void) {
  gOnceFunctionResult_generateFewHeaderFiles.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_generateFewHeaderFiles (nullptr,
                                                                  releaseOnceFunctionResult_generateFewHeaderFiles) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateFewHeaderFiles [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateFewHeaderFiles (Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_generateFewHeaderFiles (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateFewHeaderFiles ("generateFewHeaderFiles",
                                                                        functionWithGenericHeader_generateFewHeaderFiles,
                                                                        & kTypeDescriptor_GALGAS_bool,
                                                                        0,
                                                                        functionArgs_generateFewHeaderFiles) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWithoutArgument&&?name?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (GALGAS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                   const GALGAS_string constinArgument_inClassFunctionName,
                                                                                                   const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                   const GALGAS_bool constinArgument_inHasLexiqueArgument,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_1691 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1691, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 32)) ;
  }
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inClassFunctionName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 37)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 38)), constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_1691 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 36)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWithArgument&&?name?argTypeName?argName?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (GALGAS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                          const GALGAS_string constinArgument_inClassFunctionName,
                                                                                                                          const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                                                          const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                                                          const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                          const GALGAS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_2399 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_2399, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 55)) ;
  }
  GALGAS_unifiedTypeMapEntry var_t_2486 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_2486, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 56)) ;
  }
  {
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 59)) ;
  temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 59)), var_t_2486, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 59)) ;
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inClassFunctionName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 58)), temp_0, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_2399 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 57)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith2Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (GALGAS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                         const GALGAS_string constinArgument_inClassFunctionName,
                                                                                                                                                                         const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                         const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                         const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                         const GALGAS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                         const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                         const GALGAS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                                                                         Compiler * inCompiler
                                                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_3300 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3300, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 78)) ;
  }
  GALGAS_functionSignature var_argumentTypeList_3325 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 79)) ;
  GALGAS_unifiedTypeMapEntry var_t_3393 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_3393, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 81)) ;
  }
  var_argumentTypeList_3325.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 82)), var_t_3393, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 82)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_3393, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 83)) ;
  }
  var_argumentTypeList_3325.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 84)), var_t_3393, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 84)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inClassFunctionName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 86)), var_argumentTypeList_3325, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_3300 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 85)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith3Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?argTypeName3?argName3?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (GALGAS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                                                           const GALGAS_string constinArgument_inClassFunctionName,
                                                                                                                                                                                                           const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                                                           const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                                                           const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                                                           const GALGAS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                                                           const GALGAS_string constinArgument_inArgument_33_TypeName,
                                                                                                                                                                                                           const GALGAS_string constinArgument_inArgument_33_Name,
                                                                                                                                                                                                           const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                                                           const GALGAS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_4502 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4502, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 108)) ;
  }
  GALGAS_unifiedTypeMapEntry var_t_4589 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4589, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 109)) ;
  }
  GALGAS_functionSignature var_argumentTypeList_4617 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 110)) ;
  var_argumentTypeList_4617.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 111)), var_t_4589, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 111)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_4589, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 112)) ;
  }
  var_argumentTypeList_4617.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 113)), var_t_4589, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 113)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_4589, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 114)) ;
  }
  var_argumentTypeList_4617.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 115)), var_t_4589, constinArgument_inArgument_33_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 115)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inClassFunctionName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 117)), var_argumentTypeList_4617, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_4502 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 116)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                   const GALGAS_string constinArgument_inGetterName,
                                                                                                                                   const GALGAS_string constinArgument_inObsoleteGetterName,
                                                                                                                                   const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                                   const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_1932 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1932, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 31)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 33)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 34)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 35)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 36)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_1932, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 39)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 32)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inObsoleteGetterName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inObsoleteGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 44)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 45)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 46)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 47)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_1932, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 50)), constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticsGetters.galgas", 43)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                   const GALGAS_string constinArgument_inGetterName,
                                                                                                                                   const GALGAS_string constinArgument_inObsoleteGetterName,
                                                                                                                                   const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                                   const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_3303 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3303, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 64)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 66)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 67)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 68)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 69)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_3303, GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 72)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 65)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inObsoleteGetterName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inObsoleteGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 77)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 78)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 79)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 80)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_3303, GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 83)), constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticsGetters.galgas", 76)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWithArgument&&?getterName?argumentTypeName?argumentName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                    const GALGAS_string constinArgument_inGetterName,
                                                                                                                                                    const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                    const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                                                                                    const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                                                    const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_4475 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4475, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 100)) ;
  }
  GALGAS_functionSignature var_argList_4519 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 101)) ;
  GALGAS_unifiedTypeMapEntry var_t_4600 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4600, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 102)) ;
  }
  var_argList_4519.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 103)), var_t_4600, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 103)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 105)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 106)), var_argList_4519, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 108)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_4475, GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 111)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 104)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWith2Arguments&&??????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                           const GALGAS_string constinArgument_inGetterName,
                                                                                                                           const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                                                           const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                                                           const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                                                                                           const GALGAS_string constinArgument_inArgument_32_Name,
                                                                                                                           const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                           const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_5492 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_5492, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 129)) ;
  }
  GALGAS_functionSignature var_argList_5536 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 130)) ;
  GALGAS_unifiedTypeMapEntry var_t_5634 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_5634, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 131)) ;
  }
  var_argList_5536.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 132)), var_t_5634, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 132)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_5634, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 133)) ;
  }
  var_argList_5536.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 134)), var_t_5634, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 134)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 136)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 137)), var_argList_5536, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 139)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_5492, GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 142)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 135)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                                              GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                              const GALGAS_string constinArgument_inGetterName,
                                                                                                                              const GALGAS_string constinArgument_inObsoleteGetterName,
                                                                                                                              const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                              const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_6734 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_6734, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 155)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 157)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 158)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 159)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 160)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_6734, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 163)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 156)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inObsoleteGetterName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inObsoleteGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 168)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 169)), GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 170)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 171)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_6734, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 174)), constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticsGetters.galgas", 167)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithArgument&&?getterName?argSelector?argType?argName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                const GALGAS_string constinArgument_inGetterName,
                                                                                                                                                const GALGAS_string constinArgument_inArgument_31_Selector,
                                                                                                                                                const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                                                                                const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                                                const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_7987 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_7987, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 192)) ;
  }
  GALGAS_functionSignature var_argList_8031 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 193)) ;
  GALGAS_unifiedTypeMapEntry var_t_8112 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_8112, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 194)) ;
  }
  var_argList_8031.addAssign_operation (constinArgument_inArgument_31_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 195)), var_t_8112, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 195)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 197)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 198)), var_argList_8031, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 200)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_7987, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 203)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 196)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithArgument&&?getterName???returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                        const GALGAS_string constinArgument_inGetterName,
                                                                                                                        const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                                                        const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                                                        const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                        const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_8961 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_8961, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 219)) ;
  }
  GALGAS_functionSignature var_argList_9005 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 220)) ;
  GALGAS_unifiedTypeMapEntry var_t_9086 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_9086, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 221)) ;
  }
  var_argList_9005.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 222)), var_t_9086, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 222)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 224)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 225)), var_argList_9005, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 227)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_8961, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 230)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 223)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWith2Arguments&&?getterName?arg1Selector?arg1TypeName?arg1Name?arg2Selector?arg2TypeName?arg2Name?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                                                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                                                                          const GALGAS_string constinArgument_inGetterName,
                                                                                                                                                                                                                          const GALGAS_string constinArgument_inArgument_31_Selector,
                                                                                                                                                                                                                          const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                                                                          const GALGAS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                                                                          const GALGAS_string constinArgument_inArgument_32_Selector,
                                                                                                                                                                                                                          const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                                                                          const GALGAS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                                                                          const GALGAS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                                                                          const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedTypeIndex_10132 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_10132, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 250)) ;
  }
  GALGAS_functionSignature var_argList_10176 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 251)) ;
  GALGAS_unifiedTypeMapEntry var_t_10274 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_10274, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 252)) ;
  }
  var_argList_10176.addAssign_operation (constinArgument_inArgument_31_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 253)), var_t_10274, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 253)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_10274, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 254)) ;
  }
  var_argList_10176.addAssign_operation (constinArgument_inArgument_32_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 255)), var_t_10274, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 255)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::class_func_new (constinArgument_inGetterName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 257)), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 258)), var_argList_10176, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 260)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_10132, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 263)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 256)) ;
  }
}


