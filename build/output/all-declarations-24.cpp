#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingAbstractExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingAbstractExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  const GGS_overridingAbstractExtensionMethodAST temp_1 = this ;
  result_result = GGS_string ("overriding extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 138)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 138)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 138)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingAbstractExtensionMethodAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                                GGS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                                GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 154)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingAbstractExtensionMethodAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 156)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 156)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingAbstractExtensionMethodAST temp_3 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 157)) ;
      }
    }
  }
  const GGS_overridingAbstractExtensionMethodAST temp_4 = this ;
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_6743 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubscript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingAbstractExtensionMethodAST temp_5 = this ;
  const GGS_overridingAbstractExtensionMethodAST temp_6 = this ;
  var_entry_6743.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionMethodName (), temp_6.readProperty_mOverridingExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 163)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_6743, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 168)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingAbstractExtensionMethodAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                          const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                          const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                          const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                          const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                          GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingAbstractExtensionMethodAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GGS_string /* constinArgument_inProductDirectory */,
                                                                         const GGS_semanticContext constinArgument_inSemanticContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GGS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8926 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 206)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_8926, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 208)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 208)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 208)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_overridingAbstractExtensionMethodAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_8926, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 209)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 209)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 209)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 209)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_8926, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 210)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_overridingAbstractExtensionMethodAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare an abstract extension method: '@").add_operation (extensionGetter_definition (var_selfType_8926, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 211)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 211)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 211)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 211)) ;
      }
    }
  }
  GGS_string var_baseTypeName_9480 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_9525 = extensionGetter_definition (var_selfType_8926, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 215)).readProperty_superType () ;
  GGS_formalParameterSignature var_inheritedSignature_9573 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_location var_inheritedDeclarationLocation_9639 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 217)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 218)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 218)).isValid ()) {
    uint32_t variant_9687 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 218)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 218)).uintValue () ;
    bool loop_9687 = true ;
    while (loop_9687) {
      loop_9687 = var_superType_9525.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 219)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 219)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_9480.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 219)).isValid () ;
      if (loop_9687) {
        loop_9687 = var_superType_9525.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 219)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 219)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_9480.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 219)).boolValue () ;
      }
      if (loop_9687 && (0 == variant_9687)) {
        loop_9687 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 218)) ;
      }
      if (loop_9687) {
        variant_9687 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingAbstractExtensionMethodAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_9525, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 220)).readProperty_instanceMethodMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 220)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_10078 ;
            const GGS_overridingAbstractExtensionMethodAST temp_9 = this ;
            GGS_methodKind joker_9985 ; // Joker input parameter
            GGS_bool joker_10062 ; // Joker input parameter
            GGS_string joker_10096 ; // Joker input parameter
            extensionGetter_definition (var_superType_9525, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 221)).readProperty_instanceMethodMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_9985, var_inheritedSignature_9573, var_inheritedDeclarationLocation_9639, joker_10062, var_qualifier_10078, joker_10096, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 221)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_10078.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 230)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_9480 = extensionGetter_definition (var_superType_9525, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 231)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_9525 = extensionGetter_definition (var_superType_9525, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 234)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_9480.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingAbstractExtensionMethodAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 237)) ;
    }
  }
  GGS_localVarManager var_variableMap_10464 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_10658 ;
  {
  const GGS_overridingAbstractExtensionMethodAST temp_14 = this ;
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionMethodFormalParameterList (), var_variableMap_10464, var_formalParameterListForGeneration_10658, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 241)) ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_9480.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      {
      const GGS_overridingAbstractExtensionMethodAST temp_16 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_10658, temp_16.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_9573, var_inheritedDeclarationLocation_9639, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 250)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingAbstractExtensionMethodAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionMethodListMap,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  const GGS_overridingAbstractExtensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingAbstractExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 280)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionMethodAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                      GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  const GGS_abstractExtensionMethodAST temp_1 = this ;
  const GGS_abstractExtensionMethodAST temp_2 = this ;
  GGS_lstring var_key_5767 = GGS_lstring::init_21__21_ (GGS_string ("extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 139)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 139)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 139)), temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5767, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 142)) ;
  }
  {
  const GGS_abstractExtensionMethodAST temp_4 = this ;
  const GGS_abstractExtensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5767, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 143)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 143)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_abstractExtensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 145)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 145)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_abstractExtensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 146)) ;
      }
    }
  }
  const GGS_abstractExtensionMethodAST temp_9 = this ;
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_6310 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubscript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionMethodAST temp_10 = this ;
  const GGS_abstractExtensionMethodAST temp_11 = this ;
  var_entry_6310.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionMethodName (), temp_11.readProperty_mAbstractExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("extension-abstract-method.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 152)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_6310, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 157)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_abstractExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  const GGS_abstractExtensionMethodAST temp_1 = this ;
  result_result = GGS_string ("abstract extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 170)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 170)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 170)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionMethodAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionMethodAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GGS_string /* constinArgument_inProductDirectory */,
                                                               const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8466 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 197)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_8466, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 199)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-method.galgas", 199)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 199)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_abstractExtensionMethodAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_8466, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 200)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 200)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 200)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 200)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_8466, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 201)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_abstractExtensionMethodAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare an abstract extension method: '@").add_operation (extensionGetter_definition (var_selfType_8466, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 202)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 202)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 202)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 202)) ;
      }
    }
  }
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_9034 = GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_abstractExtensionMethodAST temp_7 = this ;
  UpEnumerator_formalParameterListAST enumerator_9202 (temp_7.readProperty_mAbstractExtensionMethodFormalParameterList ()) ;
  while (enumerator_9202.hasCurrentObject ()) {
    var_formalParameterListForGeneration_9034.addAssignOperation (enumerator_9202.current_mFormalSelector (HERE), enumerator_9202.current_mFormalArgumentPassingMode (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_9202.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 210)), enumerator_9202.current_mFormalArgumentName (HERE), enumerator_9202.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 207)) ;
    enumerator_9202.gotoNextObject () ;
  }
  const GGS_abstractExtensionMethodAST temp_8 = this ;
  const GGS_abstractExtensionMethodAST temp_9 = this ;
  const GGS_abstractExtensionMethodAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("abstract extension method ").add_operation (temp_8.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 216)), GGS_abstractExtensionMethodForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21_ (GGS_bool (true), GGS_string ("method-").add_operation (extensionGetter_definition (var_selfType_8466, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 219)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 219)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 219)).add_operation (temp_9.readProperty_mAbstractExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 219)), var_selfType_8466, temp_10.readProperty_mAbstractExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_9034, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 215)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionMethodAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionMethodListMapAST,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  const GGS_abstractExtensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioAbstractExtensionMethodListMapAST, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 244)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionMethodForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GGS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionMethodForGeneration temp_0 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_1 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 269)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), temp_2.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 268))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_abstractExtensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-method.galgas", 278)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionMethodForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionMethodForGeneration temp_0 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("method-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 287)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 286)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 287)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 288))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 286)) ;
  const GGS_abstractExtensionMethodForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 289)) ;
  const GGS_abstractExtensionMethodForGeneration temp_3 = this ;
  UpEnumerator_formalParameterListForGeneration enumerator_13269 (temp_3.readProperty_mAbstractExtensionMethodFormalParameterList ()) ;
  while (enumerator_13269.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13269.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 291)) ;
    enumerator_13269.gotoNextObject () ;
  }
  const GGS_abstractExtensionMethodForGeneration temp_4 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_5 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (inCompiler, temp_4.readProperty_mReceiverType (), temp_5.readProperty_mAbstractExtensionMethodName (), temp_6.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 293))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_extensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_extensionGetterAST temp_0 = this ;
  const GGS_extensionGetterAST temp_1 = this ;
  result_result = GGS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 200)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 200)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 200)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionGetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GGS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                              GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionGetterAST temp_0 = this ;
  const GGS_extensionGetterAST temp_1 = this ;
  const GGS_extensionGetterAST temp_2 = this ;
  GGS_lstring var_key_8465 = GGS_lstring::init_21__21_ (GGS_string ("extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 213)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 213)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 213)), temp_2.readProperty_mExtensionGetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_8465, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 214)) ;
  }
  {
  const GGS_extensionGetterAST temp_4 = this ;
  const GGS_extensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_8465, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 215)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-getter.galgas", 215)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_extensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-getter.galgas", 217)).operator_not (SOURCE_FILE ("extension-getter.galgas", 217)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_extensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 218)) ;
      }
    }
  }
  const GGS_extensionGetterAST temp_9 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_8974 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubscript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionGetterAST temp_10 = this ;
  const GGS_extensionGetterAST temp_11 = this ;
  const GGS_extensionGetterAST temp_12 = this ;
  var_entry_8974.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionGetterName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("extension-getter.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 224)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_8974, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 230)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionGetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionGetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionGetterAST temp_0 = this ;
  const GGS_extensionGetterAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_11121 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 271)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11121, var_nameForUsefulness_11121, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 272)) ;
  }
  const GGS_extensionGetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_11299 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 273)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_11299, var_nameForUsefulness_11121 COMMA_SOURCE_FILE ("extension-getter.galgas", 274)) ;
  }
  const GGS_extensionGetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_11503 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 276)) ;
  GGS_string var_selfObjectNameNew_11615 ;
  GGS_string var_selfObjectAccessorNew_11647 ;
  GGS_bool var_implementedAsFunctionNew_11681 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_11503, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 281)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas", 281)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_selfObjectNameNew_11615 = GGS_string ("this") ;
      var_selfObjectAccessorNew_11647 = GGS_string ("this->") ;
      var_implementedAsFunctionNew_11681 = GGS_bool (false) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    var_selfObjectNameNew_11615 = GGS_string ("inObject") ;
    var_selfObjectAccessorNew_11647 = GGS_string ("inObject.") ;
    var_implementedAsFunctionNew_11681 = GGS_bool (true) ;
  }
  GGS_analysisContext var_analysisContextNew_12023 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameNew_11615, GGS_selfAvailability::class_func_available (var_selfType_11503, GGS_selfMutability::class_func_none (SOURCE_FILE ("extension-getter.galgas", 295))  COMMA_SOURCE_FILE ("extension-getter.galgas", 295)), var_selfObjectAccessorNew_11647, inCompiler COMMA_HERE) ;
  GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_12636 ;
  GGS_unifiedTypeMapEntry var_returnType_12678 ;
  GGS_string var_returnVariableCppName_12698 ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_12729 ;
  {
  const GGS_extensionGetterAST temp_5 = this ;
  const GGS_extensionGetterAST temp_6 = this ;
  const GGS_extensionGetterAST temp_7 = this ;
  const GGS_extensionGetterAST temp_8 = this ;
  const GGS_extensionGetterAST temp_9 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_11121, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_12023, ioArgument_ioTypeMap, temp_5.readProperty_mExtensionGetterFormalInputParameterList (), temp_6.readProperty_mExtensionGetterInstructionList (), temp_7.readProperty_mExtensionGetterReturnedVariableName (), temp_8.readProperty_mExtensionGetterReturnedTypeName (), temp_9.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_12636, var_returnType_12678, var_returnVariableCppName_12698, var_semanticInstructionListForGeneration_12729, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 298)) ;
  }
  const GGS_extensionGetterAST temp_10 = this ;
  const GGS_extensionGetterAST temp_11 = this ;
  const GGS_extensionGetterAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("extension getter ").add_operation (temp_10.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 315)), GGS_extensionGetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_bool (true), GGS_string ("getter-").add_operation (extensionGetter_definition (var_selfType_11503, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 318)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 318)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 318)).add_operation (temp_11.readProperty_mExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 318)), var_selfType_11503, temp_12.readProperty_mExtensionGetterName ().readProperty_string (), var_implementedAsFunctionNew_11681, var_returnType_12678, var_returnVariableCppName_12698, var_formalParameterListForGeneration_12636, extensionGetter_definition (var_selfType_11503, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 325)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_12729, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas", 314)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionGetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & ioArgument_ioExtensionGetterListMap,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_extensionGetterAST temp_0 = this ;
  const GGS_extensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 348)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-getter.galgas", 368)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionGetterForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_extensionGetterForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_extensionGetterForGeneration temp_2 = this ;
      const GGS_extensionGetterForGeneration temp_3 = this ;
      const GGS_extensionGetterForGeneration temp_4 = this ;
      const GGS_extensionGetterForGeneration temp_5 = this ;
      outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 377)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionGetterName (), temp_4.readProperty_mExtensionGetterFormalParameterList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 380)) COMMA_SOURCE_FILE ("extension-getter.galgas", 376))) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_extensionGetterForGeneration temp_6 = this ;
    const GGS_extensionGetterForGeneration temp_7 = this ;
    const GGS_extensionGetterForGeneration temp_8 = this ;
    const GGS_extensionGetterForGeneration temp_9 = this ;
    outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 384)).readProperty_typeName ().readProperty_string (), temp_7.readProperty_mExtensionGetterName (), temp_8.readProperty_mExtensionGetterFormalParameterList (), temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 383))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extensionGetterForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionGetterForGeneration temp_0 = this ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_16980 (temp_0.readProperty_mExtensionGetterFormalParameterList ()) ;
  while (enumerator_16980.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16980.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 398)) ;
    enumerator_16980.gotoNextObject () ;
  }
  const GGS_extensionGetterForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 400)) ;
  const GGS_extensionGetterForGeneration temp_2 = this ;
  GGS_formalInputParameterListForGeneration var_extensionReaderFormalParameterList_17167 = temp_2.readProperty_mExtensionGetterFormalParameterList () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_extensionGetterForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      const GGS_extensionGetterForGeneration temp_5 = this ;
      var_extensionReaderFormalParameterList_17167.setter_insertAtIndex (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas", 404)), temp_5.readProperty_mReceiverType (), GGS_string ("inObject"), GGS_lstring::init_21__21_ (GGS_string ("self"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 407)), inCompiler COMMA_HERE), GGS_bool (true), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 403)) ;
      }
      const GGS_extensionGetterForGeneration temp_6 = this ;
      const GGS_extensionGetterForGeneration temp_7 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("getter-").add_operation (extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 412)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 411)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 412)).add_operation (temp_7.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 413))  COMMA_SOURCE_FILE ("extension-getter.galgas", 411)) ;
      GGS_string var_code_18055 ;
      {
      const GGS_extensionGetterForGeneration temp_8 = this ;
      const GGS_extensionGetterForGeneration temp_9 = this ;
      const GGS_extensionGetterForGeneration temp_10 = this ;
      const GGS_extensionGetterForGeneration temp_11 = this ;
      routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GGS_string ("extensionGetter_").add_operation (temp_8.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 415)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_17167, temp_9.readProperty_mSemanticInstructionListForGeneration (), GGS_string ("Compiler"), temp_10.readProperty_mResultType (), temp_11.readProperty_mResultVarCppName (), GGS_bool (false), GGS_bool (false), var_code_18055, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 414)) ;
      }
      const GGS_extensionGetterForGeneration temp_12 = this ;
      const GGS_extensionGetterForGeneration temp_13 = this ;
      outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 427)).readProperty_typeName ().readProperty_string (), temp_13.readProperty_mExtensionGetterName (), var_code_18055 COMMA_SOURCE_FILE ("extension-getter.galgas", 426))) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_extensionGetterForGeneration temp_14 = this ;
    extensionMethod_addHeaderFileName (temp_14.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 432)) ;
    const GGS_extensionGetterForGeneration temp_15 = this ;
    GGS_unifiedTypeMapEntry var_baseType_18397 = temp_15.readProperty_mReceiverType () ;
    GGS_bool var_searching_18443 = GGS_bool (true) ;
    if (GGS_uint::class_func_max (SOURCE_FILE ("extension-getter.galgas", 435)).isValid ()) {
      uint32_t variant_18466 = GGS_uint::class_func_max (SOURCE_FILE ("extension-getter.galgas", 435)).uintValue () ;
      bool loop_18466 = true ;
      while (loop_18466) {
        loop_18466 = var_searching_18443.isValid () ;
        if (loop_18466) {
          loop_18466 = var_searching_18443.boolValue () ;
        }
        if (loop_18466 && (0 == variant_18466)) {
          loop_18466 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas", 435)) ;
        }
        if (loop_18466) {
          variant_18466 -= 1 ;
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            test_16 = extensionGetter_definition (var_baseType_18397, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 436)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-getter.galgas", 436)).operator_not (SOURCE_FILE ("extension-getter.galgas", 436)).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              GalgasBool test_17 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_17) {
                const GGS_extensionGetterForGeneration temp_18 = this ;
                test_17 = extensionGetter_definition (extensionGetter_definition (var_baseType_18397, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 437)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 437)).readProperty_getterMap ().getter_hasKey (temp_18.readProperty_mExtensionGetterName () COMMA_SOURCE_FILE ("extension-getter.galgas", 437)).boolEnum () ;
                if (GalgasBool::boolTrue == test_17) {
                  var_baseType_18397 = extensionGetter_definition (var_baseType_18397, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 438)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_17) {
                var_searching_18443 = GGS_bool (false) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_16) {
            var_searching_18443 = GGS_bool (false) ;
          }
        }
      }
    }
    const GGS_extensionGetterForGeneration temp_19 = this ;
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("getter-").add_operation (extensionGetter_definition (var_baseType_18397, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 447)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 446)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 447)).add_operation (temp_19.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 448))  COMMA_SOURCE_FILE ("extension-getter.galgas", 446)) ;
    GGS_string var_extensionGetterCode_19417 ;
    {
    const GGS_extensionGetterForGeneration temp_20 = this ;
    const GGS_extensionGetterForGeneration temp_21 = this ;
    const GGS_extensionGetterForGeneration temp_22 = this ;
    const GGS_extensionGetterForGeneration temp_23 = this ;
    const GGS_extensionGetterForGeneration temp_24 = this ;
    routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (GGS_string ("cPtr_").add_operation (extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 450)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 450)).add_operation (GGS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 450)).add_operation (temp_21.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 450)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_17167, temp_22.readProperty_mSemanticInstructionListForGeneration (), GGS_string ("Compiler"), temp_23.readProperty_mResultType (), temp_24.readProperty_mResultVarCppName (), var_extensionGetterCode_19417, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 449)) ;
    }
    const GGS_extensionGetterForGeneration temp_25 = this ;
    const GGS_extensionGetterForGeneration temp_26 = this ;
    const GGS_extensionGetterForGeneration temp_27 = this ;
    const GGS_extensionGetterForGeneration temp_28 = this ;
    outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, extensionGetter_definition (temp_25.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 460)).readProperty_typeName ().readProperty_string (), temp_26.readProperty_mExtensionGetterName (), temp_27.readProperty_mExtensionGetterFormalParameterList (), var_extensionGetterCode_19417, temp_28.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas", 459))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingExtensionMethodAST temp_0 = this ;
  const GGS_overridingExtensionMethodAST temp_1 = this ;
  result_result = GGS_string ("overriding extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 160)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 160)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 160)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionMethodAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                        GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                        GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionMethodAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 176)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingExtensionMethodAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 178)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 178)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingExtensionMethodAST temp_3 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 179)) ;
      }
    }
  }
  const GGS_overridingExtensionMethodAST temp_4 = this ;
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_7579 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubscript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingExtensionMethodAST temp_5 = this ;
  const GGS_overridingExtensionMethodAST temp_6 = this ;
  var_entry_7579.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionMethodName (), temp_6.readProperty_mOverridingExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-method.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 185)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_7579, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 190)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionMethodAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionMethodAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument_inProductDirectory */,
                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionMethodAST temp_0 = this ;
  const GGS_overridingExtensionMethodAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_9700 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 227)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9700, var_nameForUsefulness_9700, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 228)) ;
  }
  const GGS_overridingExtensionMethodAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_9888 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 229)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_9888, var_nameForUsefulness_9700 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 230)) ;
  }
  const GGS_overridingExtensionMethodAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_10092 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 232)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_10092, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 234)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-method.galgas", 234)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 234)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_overridingExtensionMethodAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_definition (var_selfType_10092, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 235)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 235)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 235)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 235)) ;
    }
  }
  GGS_string var_baseTypeName_10431 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_10476 = extensionGetter_definition (var_selfType_10092, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 239)).readProperty_superType () ;
  GGS_formalParameterSignature var_inheritedSignature_10524 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_location var_inheritedDeclarationLocation_10590 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 241)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 242)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 242)).isValid ()) {
    uint32_t variant_10638 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 242)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 242)).uintValue () ;
    bool loop_10638 = true ;
    while (loop_10638) {
      loop_10638 = var_superType_10476.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 243)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 243)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_10431.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 243)).isValid () ;
      if (loop_10638) {
        loop_10638 = var_superType_10476.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 243)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 243)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_10431.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 243)).boolValue () ;
      }
      if (loop_10638 && (0 == variant_10638)) {
        loop_10638 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-method.galgas", 242)) ;
      }
      if (loop_10638) {
        variant_10638 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingExtensionMethodAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_10476, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 244)).readProperty_instanceMethodMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 244)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_11028 ;
            const GGS_overridingExtensionMethodAST temp_9 = this ;
            GGS_methodKind joker_10935 ; // Joker input parameter
            GGS_bool joker_11012 ; // Joker input parameter
            GGS_string joker_11046 ; // Joker input parameter
            extensionGetter_definition (var_superType_10476, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 245)).readProperty_instanceMethodMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_10935, var_inheritedSignature_10524, var_inheritedDeclarationLocation_10590, joker_11012, var_qualifier_11028, joker_11046, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 245)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_11028.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-method.galgas", 254)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_10431 = extensionGetter_definition (var_superType_10476, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 255)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_10476 = extensionGetter_definition (var_superType_10476, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 258)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_10431.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingExtensionMethodAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("this method is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 261)) ;
    }
  }
  GGS_analysisContext var_analysisContext_11410 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string ("this"), GGS_selfAvailability::class_func_available (var_selfType_10092, GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-method.galgas", 268))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 268)), GGS_string ("this->"), inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_12119 ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_12165 ;
  {
  const GGS_overridingExtensionMethodAST temp_14 = this ;
  const GGS_overridingExtensionMethodAST temp_15 = this ;
  const GGS_overridingExtensionMethodAST temp_16 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_9700, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_11410, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionMethodFormalParameterList (), temp_15.readProperty_mOverridingExtensionMethodInstructionList (), temp_16.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_12119, var_formalParameterListForGeneration_12165, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 275)) ;
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_10431.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      {
      const GGS_overridingExtensionMethodAST temp_18 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_12165, temp_18.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_10524, var_inheritedDeclarationLocation_10590, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 288)) ;
      }
    }
  }
  const GGS_overridingExtensionMethodAST temp_19 = this ;
  const GGS_overridingExtensionMethodAST temp_20 = this ;
  const GGS_overridingExtensionMethodAST temp_21 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("override extension method ").add_operation (temp_19.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 297)), GGS_overridingExtensionMethodForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_bool (false), GGS_string ("method-").add_operation (extensionGetter_definition (var_selfType_10092, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 300)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 300)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 300)).add_operation (temp_20.readProperty_mOverridingExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 300)), var_selfType_10092, var_baseTypeName_10431, temp_21.readProperty_mOverridingExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_12165, extensionGetter_definition (var_selfType_10092, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 305)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_12119, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 296)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionMethodAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionMethodListMap,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingExtensionMethodAST temp_0 = this ;
  const GGS_overridingExtensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 330)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_overridingExtensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-method.galgas", 352)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionMethodForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                                       GGS_string & outArgument_outImplementation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_methodImplementation_16122 ;
  {
  const GGS_overridingExtensionMethodForGeneration temp_0 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_1 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_2 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_3 = this ;
  routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_0.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_1.readProperty_mExtensionMethodName (), temp_2.readProperty_mExtensionMethodFormalParameterList (), temp_3.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_16122, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 361)) ;
  }
  const GGS_overridingExtensionMethodForGeneration temp_4 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (inCompiler, extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 370)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_mExtensionMethodName (), var_methodImplementation_16122 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 369))) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionSetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GGS_extensionSetterMapForBuildingContext & ioArgument_ioExtensionSetterMapForBuildingContext,
                                                                      GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionSetterAST temp_0 = this ;
  const GGS_abstractExtensionSetterAST temp_1 = this ;
  const GGS_abstractExtensionSetterAST temp_2 = this ;
  GGS_lstring var_key_5323 = GGS_lstring::init_21__21_ (GGS_string ("extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 119)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 119)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 119)), temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5323, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 120)) ;
  }
  {
  const GGS_abstractExtensionSetterAST temp_4 = this ;
  const GGS_abstractExtensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5323, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 121)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 121)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_abstractExtensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 123)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 123)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_abstractExtensionSetterAST temp_8 = this ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionSetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 124)) ;
      }
    }
  }
  const GGS_abstractExtensionSetterAST temp_9 = this ;
  GGS_extensionSetterMapForBuildingContext_2E_element var_entry_5848 = ioArgument_ioExtensionSetterMapForBuildingContext.readSubscript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionSetterAST temp_10 = this ;
  const GGS_abstractExtensionSetterAST temp_11 = this ;
  var_entry_5848.mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionSetterName (), temp_11.readProperty_mAbstractExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 130)) ;
  }
  {
  ioArgument_ioExtensionSetterMapForBuildingContext.setter_replaceKey (var_entry_5848, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 134)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionSetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_abstractExtensionSetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_abstractExtensionSetterAST temp_0 = this ;
  const GGS_abstractExtensionSetterAST temp_1 = this ;
  result_result = GGS_string ("abstract extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 146)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 146)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 146)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionSetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionSetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GGS_string /* constinArgument_inProductDirectory */,
                                                               const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionSetterAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7950 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 174)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_7950, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 176)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-setter.galgas", 176)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 176)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_abstractExtensionSetterAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GGS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7950, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 177)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 177)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 177)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 177)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_7950, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 178)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_abstractExtensionSetterAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionSetterName ().readProperty_location (), GGS_string ("cannot declare an abstract extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7950, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 179)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 179)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 179)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 179)) ;
      }
    }
  }
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_8518 = GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_abstractExtensionSetterAST temp_7 = this ;
  UpEnumerator_formalParameterListAST enumerator_8686 (temp_7.readProperty_mAbstractExtensionSetterFormalParameterList ()) ;
  while (enumerator_8686.hasCurrentObject ()) {
    var_formalParameterListForGeneration_8518.addAssignOperation (enumerator_8686.current_mFormalSelector (HERE), enumerator_8686.current_mFormalArgumentPassingMode (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_8686.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 187)), enumerator_8686.current_mFormalArgumentName (HERE), enumerator_8686.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 184)) ;
    enumerator_8686.gotoNextObject () ;
  }
  const GGS_abstractExtensionSetterAST temp_8 = this ;
  const GGS_abstractExtensionSetterAST temp_9 = this ;
  const GGS_abstractExtensionSetterAST temp_10 = this ;
  const GGS_abstractExtensionSetterAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string (" abstract extension setter ").add_operation (temp_8.readProperty_mAbstractExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 193)), GGS_abstractExtensionSetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21_ (GGS_bool (true), GGS_string ("setter-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 196)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 196)).add_operation (temp_10.readProperty_mAbstractExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 196)), var_selfType_7950, temp_11.readProperty_mAbstractExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_8518, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 192)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionSetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionSetterListMap,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_abstractExtensionSetterAST temp_0 = this ;
  const GGS_abstractExtensionSetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioAbstractExtensionSetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 220)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@abstractExtensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_abstractExtensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-setter.galgas", 239)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionSetterForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GGS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionSetterForGeneration temp_0 = this ;
  const GGS_abstractExtensionSetterForGeneration temp_1 = this ;
  const GGS_abstractExtensionSetterForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 247)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionSetterName (), temp_2.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 246))) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@abstractExtensionSetterForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionSetterForGeneration temp_0 = this ;
  const GGS_abstractExtensionSetterForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("setter-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 260)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 260)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 260)).add_operation (temp_1.readProperty_mAbstractExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-setter.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 260))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 260)) ;
  const GGS_abstractExtensionSetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 261)) ;
  const GGS_abstractExtensionSetterForGeneration temp_3 = this ;
  UpEnumerator_formalParameterListForGeneration enumerator_12634 (temp_3.readProperty_mAbstractExtensionSetterFormalParameterList ()) ;
  while (enumerator_12634.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12634.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 263)) ;
    enumerator_12634.gotoNextObject () ;
  }
  const GGS_abstractExtensionSetterForGeneration temp_4 = this ;
  const GGS_abstractExtensionSetterForGeneration temp_5 = this ;
  const GGS_abstractExtensionSetterForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (inCompiler, extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 266)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_mAbstractExtensionSetterName (), temp_6.readProperty_mAbstractExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 265))) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionSetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                        GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionSetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 110)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionSetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingExtensionSetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingExtensionSetterAST temp_0 = this ;
  const GGS_overridingExtensionSetterAST temp_1 = this ;
  result_result = GGS_string ("overriding extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 118)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 118)).add_operation (temp_1.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 118)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionSetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionSetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument_inProductDirectory */,
                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionSetterAST temp_0 = this ;
  const GGS_overridingExtensionSetterAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_6820 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 149)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6820, var_nameForUsefulness_6820, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 150)) ;
  }
  const GGS_overridingExtensionSetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_7008 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 151)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7008, var_nameForUsefulness_6820 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 152)) ;
  }
  const GGS_overridingExtensionSetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7212 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 154)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_7212, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 156)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-setter.galgas", 156)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 156)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_overridingExtensionSetterAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GGS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_definition (var_selfType_7212, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 157)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 157)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 157)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 157)) ;
    }
  }
  GGS_string var_baseTypeName_7551 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_7596 = extensionGetter_definition (var_selfType_7212, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 161)).readProperty_superType () ;
  GGS_formalParameterSignature var_inheritedSignature_7644 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_location var_inheritedDeclarationLocation_7710 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 163)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 164)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 164)).isValid ()) {
    uint32_t variant_7758 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 164)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 164)).uintValue () ;
    bool loop_7758 = true ;
    while (loop_7758) {
      loop_7758 = var_superType_7596.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 165)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 165)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7551.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 165)).isValid () ;
      if (loop_7758) {
        loop_7758 = var_superType_7596.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 165)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 165)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7551.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 165)).boolValue () ;
      }
      if (loop_7758 && (0 == variant_7758)) {
        loop_7758 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 164)) ;
      }
      if (loop_7758) {
        variant_7758 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingExtensionSetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_7596, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 166)).readProperty_setterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionSetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 166)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_8054 ;
            const GGS_overridingExtensionSetterAST temp_9 = this ;
            GGS_methodKind joker_8023 ; // Joker input parameter
            GGS_bool joker_8046 ; // Joker input parameter
            GGS_string joker_8064 ; // Joker input parameter
            extensionGetter_definition (var_superType_7596, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 167)).readProperty_setterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionSetterName (), joker_8023, var_inheritedSignature_7644, joker_8046, var_qualifier_8054, joker_8064, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 167)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_8054.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-setter.galgas", 168)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_7551 = extensionGetter_definition (var_superType_7596, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 169)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_7596 = extensionGetter_definition (var_superType_7596, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 172)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_7551.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingExtensionSetterAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GGS_string ("this setter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 175)) ;
    }
  }
  GGS_analysisContext var_analysisContext_8421 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string ("object"), GGS_selfAvailability::class_func_available (var_selfType_7212, GGS_selfMutability::class_func_selfAndPropertiesAreMutable (SOURCE_FILE ("extension-overriding-setter.galgas", 182))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 182)), GGS_string ("object->"), inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8966 ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_9012 ;
  {
  const GGS_overridingExtensionSetterAST temp_14 = this ;
  const GGS_overridingExtensionSetterAST temp_15 = this ;
  const GGS_overridingExtensionSetterAST temp_16 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_6820, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8421, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionSetterFormalParameterList (), temp_15.readProperty_mOverridingExtensionSetterInstructionList (), temp_16.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_8966, var_formalParameterListForGeneration_9012, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 185)) ;
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_7551.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      {
      const GGS_overridingExtensionSetterAST temp_18 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_9012, temp_18.readProperty_mOverridingExtensionSetterName ().readProperty_location (), var_inheritedSignature_7644, var_inheritedDeclarationLocation_7710, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 198)) ;
      }
    }
  }
  const GGS_overridingExtensionSetterAST temp_19 = this ;
  const GGS_overridingExtensionSetterAST temp_20 = this ;
  const GGS_overridingExtensionSetterAST temp_21 = this ;
  const GGS_overridingExtensionSetterAST temp_22 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string (" overriding extension setter ").add_operation (temp_19.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 207)), GGS_overridingExtensionSetterForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_bool (false), GGS_string ("setter-").add_operation (temp_20.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 210)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 210)).add_operation (temp_21.readProperty_mOverridingExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 210)), var_selfType_7212, var_baseTypeName_7551, temp_22.readProperty_mOverridingExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_9012, extensionGetter_definition (var_selfType_7212, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 215)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_8966, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 206)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionSetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionSetterListMap,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingExtensionSetterAST temp_0 = this ;
  const GGS_overridingExtensionSetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingExtensionSetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 241)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_overridingExtensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-setter.galgas", 263)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingExtensionSetterForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionSetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                                       GGS_string & outArgument_outImplementation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_methodImplementation_12832 ;
  {
  const GGS_overridingExtensionSetterForGeneration temp_0 = this ;
  const GGS_overridingExtensionSetterForGeneration temp_1 = this ;
  const GGS_overridingExtensionSetterForGeneration temp_2 = this ;
  const GGS_overridingExtensionSetterForGeneration temp_3 = this ;
  const GGS_overridingExtensionSetterForGeneration temp_4 = this ;
  routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 273)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mBaseTypeName (), temp_2.readProperty_mExtensionSetterName (), ioArgument_ioInclusionSet, temp_3.readProperty_mExtensionSetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_12832, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 272)) ;
  }
  const GGS_overridingExtensionSetterForGeneration temp_5 = this ;
  GGS_unifiedTypeMapEntry var_baseType_12884 = temp_5.readProperty_mReceiverType () ;
  GGS_bool var_searching_12926 = GGS_bool (true) ;
  if (GGS_uint::class_func_max (SOURCE_FILE ("extension-overriding-setter.galgas", 283)).isValid ()) {
    uint32_t variant_12945 = GGS_uint::class_func_max (SOURCE_FILE ("extension-overriding-setter.galgas", 283)).uintValue () ;
    bool loop_12945 = true ;
    while (loop_12945) {
      loop_12945 = var_searching_12926.isValid () ;
      if (loop_12945) {
        loop_12945 = var_searching_12926.boolValue () ;
      }
      if (loop_12945 && (0 == variant_12945)) {
        loop_12945 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 283)) ;
      }
      if (loop_12945) {
        variant_12945 -= 1 ;
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = extensionGetter_definition (var_baseType_12884, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 284)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 284)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 284)).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              const GGS_overridingExtensionSetterForGeneration temp_8 = this ;
              test_7 = extensionGetter_definition (extensionGetter_definition (var_baseType_12884, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 285)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 285)).readProperty_setterMap ().getter_hasKey (temp_8.readProperty_mExtensionSetterName () COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 285)).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                var_baseType_12884 = extensionGetter_definition (var_baseType_12884, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 286)).readProperty_superType () ;
              }
            }
            if (GalgasBool::boolFalse == test_7) {
              var_searching_12926 = GGS_bool (false) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_6) {
          var_searching_12926 = GGS_bool (false) ;
        }
      }
    }
  }
  const GGS_overridingExtensionSetterForGeneration temp_9 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("setter-").add_operation (extensionGetter_definition (var_baseType_12884, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 294)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 294)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 294)).add_operation (temp_9.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 294))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 294)) ;
  const GGS_overridingExtensionSetterForGeneration temp_10 = this ;
  extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 295)) ;
  const GGS_overridingExtensionSetterForGeneration temp_11 = this ;
  const GGS_overridingExtensionSetterForGeneration temp_12 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (inCompiler, extensionGetter_definition (temp_11.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 297)).readProperty_typeName ().readProperty_string (), temp_12.readProperty_mExtensionSetterName (), var_methodImplementation_12832 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 296))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingAbstractExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingAbstractExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  const GGS_overridingAbstractExtensionGetterAST temp_1 = this ;
  result_result = GGS_string ("overriding extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 161)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 161)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 161)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingAbstractExtensionGetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                                GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                GGS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                                GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 176)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingAbstractExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 178)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 178)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingAbstractExtensionGetterAST temp_3 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 179)) ;
      }
    }
  }
  const GGS_overridingAbstractExtensionGetterAST temp_4 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_7510 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubscript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingAbstractExtensionGetterAST temp_5 = this ;
  const GGS_overridingAbstractExtensionGetterAST temp_6 = this ;
  const GGS_overridingAbstractExtensionGetterAST temp_7 = this ;
  var_entry_7510.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mAbstractExtensionGetterName (), temp_6.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 185)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_7510, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 191)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingAbstractExtensionGetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                          const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                          const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                          const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                          const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                          GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingAbstractExtensionGetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GGS_string /* constinArgument_inProductDirectory */,
                                                                         const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GGS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_9807 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 231)) ;
  const GGS_overridingAbstractExtensionGetterAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_returnType_9890 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 233)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_selfType_9807, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 235)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 235)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 235)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_overridingAbstractExtensionGetterAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare a extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9807, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 236)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 236)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 236)), fixItArray4  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 236)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = extensionGetter_definition (var_selfType_9807, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 237)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_overridingAbstractExtensionGetterAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare an abstract extension getter: '@").add_operation (extensionGetter_definition (var_selfType_9807, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 238)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 238)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 238)), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 238)) ;
      }
    }
  }
  GGS_string var_baseTypeName_10473 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_10518 = extensionGetter_definition (var_selfType_9807, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 242)).readProperty_superType () ;
  GGS_functionSignature var_inheritedSignature_10585 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_inheritedReturnType_10637 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 244)) ;
  GGS_location var_inheritedDeclarationLocation_10681 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 245)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 246)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 246)).isValid ()) {
    uint32_t variant_10729 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 246)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 246)).uintValue () ;
    bool loop_10729 = true ;
    while (loop_10729) {
      loop_10729 = var_superType_10518.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 247)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 247)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_10473.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 247)).isValid () ;
      if (loop_10729) {
        loop_10729 = var_superType_10518.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 247)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 247)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_10473.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 247)).boolValue () ;
      }
      if (loop_10729 && (0 == variant_10729)) {
        loop_10729 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 246)) ;
      }
      if (loop_10729) {
        variant_10729 -= 1 ;
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_overridingAbstractExtensionGetterAST temp_9 = this ;
          test_8 = extensionGetter_definition (var_superType_10518, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 248)).readProperty_getterMap ().getter_hasKey (temp_9.readProperty_mAbstractExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 248)).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_methodQualifier var_qualifier_11129 ;
            const GGS_overridingAbstractExtensionGetterAST temp_10 = this ;
            GGS_methodKind joker_11007 ; // Joker input parameter
            GGS_bool joker_11084 ; // Joker input parameter
            GGS_string joker_11147 ; // Joker input parameter
            extensionGetter_definition (var_superType_10518, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 249)).readProperty_getterMap ().method_searchKey (temp_10.readProperty_mAbstractExtensionGetterName (), joker_11007, var_inheritedSignature_10585, var_inheritedDeclarationLocation_10681, joker_11084, var_inheritedReturnType_10637, var_qualifier_11129, joker_11147, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 249)) ;
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_11129.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 259)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                var_baseTypeName_10473 = extensionGetter_definition (var_superType_10518, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 260)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_10518 = extensionGetter_definition (var_superType_10518, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 263)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::equal, var_baseTypeName_10473.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_overridingAbstractExtensionGetterAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("this getter is not declared by a super class"), fixItArray14  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 266)) ;
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_10473.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_11532 = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_overridingAbstractExtensionGetterAST temp_16 = this ;
      UpEnumerator_formalInputParameterListAST enumerator_11680 (temp_16.readProperty_mAbstractExtensionGetterFormalInputParameterList ()) ;
      while (enumerator_11680.hasCurrentObject ()) {
        var_formalParameterListForGeneration_11532.addAssignOperation (enumerator_11680.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11680.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 274)), enumerator_11680.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_11680.current_mFormalArgumentName (HERE), enumerator_11680.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 272)) ;
        enumerator_11680.gotoNextObject () ;
      }
      {
      const GGS_overridingAbstractExtensionGetterAST temp_17 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_11532, var_returnType_9890, temp_17.readProperty_mAbstractExtensionGetterName ().readProperty_location (), var_inheritedSignature_10585, var_inheritedReturnType_10637, var_inheritedDeclarationLocation_10681, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 279)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@overridingAbstractExtensionGetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionGetterListMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  const GGS_overridingAbstractExtensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingAbstractExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 310)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'generateFewHeaderFiles'
//
//--------------------------------------------------------------------------------------------------

static GGS_bool onceFunction_generateFewHeaderFiles (Compiler *
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_generateFewHeaderFiles = false ;
static GGS_bool gOnceFunctionResult_generateFewHeaderFiles ;

//--------------------------------------------------------------------------------------------------

GGS_bool function_generateFewHeaderFiles (class Compiler * inCompiler
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

static const GALGAS_TypeDescriptor * functionArgs_generateFewHeaderFiles [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_generateFewHeaderFiles (Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GGS_location & /* inErrorLocation */
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
//Overriding extension method '@lexicalRewindInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRewindInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GGS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalRewindInstructionAST temp_0 = this ;
  ioArgument_ioTagMap.method_searchKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 73)) ;
  const GGS_lexicalRewindInstructionAST temp_1 = this ;
  GGS_lexicalSentValueList joker_3285 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_1.readProperty_mTerminalName (), joker_3285, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 74)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRewindInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                       const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalRewindInstructionAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("self.restoreScanningPoint (locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 83)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 83)) ;
  const GGS_lexicalRewindInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssignOperation(GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 84)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 84)).add_operation (temp_1.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 84)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 84)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalRewindInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRewindInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                    const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalRewindInstructionAST temp_0 = this ;
  result_result = GGS_string ("mCurrentLocation = currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 101)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 101)) ;
  const GGS_lexicalRewindInstructionAST temp_1 = this ;
  result_result.plusAssignOperation(GGS_string ("mTokenEndLocation = endLocationForTag_").add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 102)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 102)) ;
  const GGS_lexicalRewindInstructionAST temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("mCurrentChar = currentCharForTag_").add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 103)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 103)) ;
  const GGS_lexicalRewindInstructionAST temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("token.mTokenCode = kToken_").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 104)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 104)) ;
  result_result.plusAssignOperation(GGS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 105)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalTagInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalTagInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                    GGS_lexicalTagMap & ioArgument_ioTagMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_lexicalTagInstructionAST temp_0 = this ;
  ioArgument_ioTagMap.setter_insertKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 68)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalTagInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                    const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalTagInstructionAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("let locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 77)).add_operation (GGS_string (" = self.savedScanningPoint ()\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 77)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalTagInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalTagInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                 const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTagInstructionAST temp_0 = this ;
  const GGS_lexicalTagInstructionAST temp_1 = this ;
  const GGS_lexicalTagInstructionAST temp_2 = this ;
  result_result = GGS_string ("const LocationInSource currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 93)).add_operation (GGS_string (" = mCurrentLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 93)).add_operation (GGS_string ("const LocationInSource endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 93)).add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 94)).add_operation (GGS_string (" = mTokenEndLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 94)).add_operation (GGS_string ("const utf32 currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 94)).add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 95)).add_operation (GGS_string (" = mCurrentChar ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 95)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalWarningInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalWarningInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                        GGS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_lexicalWarningInstructionAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 68)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalWarningInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                        const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalWarningInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalWarningInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                     const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalWarningInstructionAST temp_0 = this ;
  result_result = GGS_string ("lexicalWarning (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 105)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 105)).add_operation (temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 105)).add_operation (GGS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 105)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateSwiftCocoaRoutineArgument (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("&self.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 187)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFormalInputArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFormalInputArgumentAST::getter_generateSwiftCocoaRoutineArgument (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalFormalInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 195)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalAttributeInputOutputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputOutputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                          const GGS_lexicalArgumentModeAST constinArgument_inLexicalRoutineFormalArgumentMode,
                                                                                          const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum var_attributeLexicalType_8793 ;
  const GGS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_8793, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 212)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_attributeLexicalType_8793.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalAttributeInputOutputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GGS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_8793, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 218)).add_operation (GGS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 219)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 220)).add_operation (GGS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 221)), fixItArray3  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 218)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 225)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_lexicalAttributeInputOutputArgumentAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualPassingModeLocation (), GGS_string ("the output mode (!) is required here, not an output/input mode"), fixItArray6  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 226)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalFormalInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFormalInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 const GGS_lexicalArgumentModeAST constinArgument_inLexicalRoutineFormalArgumentMode,
                                                                                 const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalFormalInputArgumentAST temp_0 = this ;
  callExtensionMethod_checkLexicalRoutineCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), ioArgument_ioLexiqueAnalysisContext, constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 237)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 242)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalFormalInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualPassingModeLocation (), GGS_string ("the output/input mode (!\?) is required here, not an input mode"), fixItArray3  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 243)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalRoutineCallInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRoutineCallInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                            GGS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_10519 ;
  GGS_stringlist var_routineErrorMessageList_10561 ;
  const GGS_lexicalRoutineCallInstructionAST temp_0 = this ;
  GGS_bool joker_10589 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalRoutineMessageMap ().method_searchKey (temp_0.readProperty_mRoutineName (), var_lexicalRoutineFormalArgumentList_10519, var_routineErrorMessageList_10561, joker_10589, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 252)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_lexicalRoutineCallInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, var_lexicalRoutineFormalArgumentList_10519.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 259)).objectCompare (temp_2.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 259)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalRoutineCallInstructionAST temp_3 = this ;
      const GGS_lexicalRoutineCallInstructionAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mRoutineName ().readProperty_location (), GGS_string ("this lexical routine call names ").add_operation (temp_4.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 261)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 260)).add_operation (GGS_string (" actual argument(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 261)).add_operation (var_lexicalRoutineFormalArgumentList_10519.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 263)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 262)).add_operation (GGS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 263)), fixItArray5  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 260)) ;
    }
  }
  const GGS_lexicalRoutineCallInstructionAST temp_6 = this ;
  UpEnumerator_lexicalRoutineFormalArgumentList enumerator_11085 (var_lexicalRoutineFormalArgumentList_10519) ;
  UpEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_11126 (temp_6.readProperty_mActualArgumentList ()) ;
  while (enumerator_11085.hasCurrentObject () && enumerator_11126.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRoutineCallArgument ((cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_11126.current_mLexicalRoutineActualArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_11085.current_mLexicalFormalArgumentMode (HERE), enumerator_11085.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 267)) ;
    enumerator_11085.gotoNextObject () ;
    enumerator_11126.gotoNextObject () ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_lexicalRoutineCallInstructionAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, var_routineErrorMessageList_10561.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 274)).objectCompare (temp_8.readProperty_mErrorMessageList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 274)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_lexicalRoutineCallInstructionAST temp_9 = this ;
      const GGS_lexicalRoutineCallInstructionAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mRoutineName ().readProperty_location (), GGS_string ("this lexical routine call names ").add_operation (temp_10.readProperty_mErrorMessageList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 276)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 275)).add_operation (GGS_string (" error message(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 276)).add_operation (var_routineErrorMessageList_10561.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 278)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 277)).add_operation (GGS_string (" error message(s)"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 278)), fixItArray11  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 275)) ;
    }
  }
  const GGS_lexicalRoutineCallInstructionAST temp_12 = this ;
  UpEnumerator_lstringlist enumerator_11775 (temp_12.readProperty_mErrorMessageList ()) ;
  while (enumerator_11775.hasCurrentObject ()) {
    GGS_lexicalMessageMap_2E_element var_entry_11820 = ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalMessageMap ().readSubscript__3F_searchKey (enumerator_11775.current_mValue (HERE), inCompiler COMMA_HERE) ;
    var_entry_11820.mProperty_mMessageIsUsed = GGS_bool (true) ;
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_replaceKey (var_entry_11820, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 284)) ;
    }
    enumerator_11775.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRoutineCallInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                            const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalRoutineCallInstructionAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("scanner_cocoa_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 312)).add_operation (GGS_string (" (&scanningOk"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 312)) ;
  const GGS_lexicalRoutineCallInstructionAST temp_1 = this ;
  UpEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_13317 (temp_1.readProperty_mActualArgumentList ()) ;
  while (enumerator_13317.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_generateSwiftCocoaRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_13317.current_mLexicalRoutineActualArgument (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 314)) ;
    enumerator_13317.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 316)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateRoutineArgument (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  result_result = GGS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 330)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFormalInputArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFormalInputArgumentAST::getter_generateRoutineArgument (Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalFormalInputArgumentAST temp_0 = this ;
  result_result = callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 337)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalRoutineCallInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRoutineCallInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                         const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalRoutineCallInstructionAST temp_0 = this ;
  result_result = GGS_string ("::scanner_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 352)).add_operation (GGS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 352)) ;
  const GGS_lexicalRoutineCallInstructionAST temp_1 = this ;
  UpEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_15017 (temp_1.readProperty_mActualArgumentList ()) ;
  while (enumerator_15017.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_generateRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_15017.current_mLexicalRoutineActualArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 354)) ;
    enumerator_15017.gotoNextObject () ;
  }
  const GGS_lexicalRoutineCallInstructionAST temp_2 = this ;
  UpEnumerator_lstringlist enumerator_15167 (temp_2.readProperty_mErrorMessageList ()) ;
  while (enumerator_15167.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string (", gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 357)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 357)).add_operation (enumerator_15167.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 357)) ;
    enumerator_15167.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 359)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalDropInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalDropInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     GGS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalDropInstructionAST temp_0 = this ;
  GGS_lexicalSentValueList joker_3097 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mTerminalName (), joker_3097, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 68)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalDropInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                     const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalDropInstructionAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 77)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 77)).add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-drop.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 77)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 77)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalDropInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalDropInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                  const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalDropInstructionAST temp_0 = this ;
  result_result = GGS_string ("enterDroppedTerminal (kToken_").add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-drop.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 95)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 95)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalSelectInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSelectInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GGS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalSelectInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSelectBranchListAST enumerator_4351 (temp_0.readProperty_mLexicalSelectBranchList ()) ;
  while (enumerator_4351.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) enumerator_4351.current_mSelectExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 114)) ;
    GGS_lexicalTagMap var_tagMap_4493 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 115)) ;
    UpEnumerator_lexicalInstructionListAST enumerator_4558 (enumerator_4351.current_mSelectInstructionList (HERE)) ;
    while (enumerator_4558.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4558.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4493, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 117)) ;
      enumerator_4558.gotoNextObject () ;
    }
    enumerator_4351.gotoNextObject () ;
  }
  GGS_lexicalTagMap var_tagMap_4702 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 120)) ;
  const GGS_lexicalSelectInstructionAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_4765 (temp_1.readProperty_mDefaultInstructionList ()) ;
  while (enumerator_4765.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4765.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4702, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 122)) ;
    enumerator_4765.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSelectInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
  const GGS_lexicalSelectInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSelectBranchListAST enumerator_5260 (temp_0.readProperty_mLexicalSelectBranchList ()) ;
  while (enumerator_5260.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string ("if scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 136)) ;
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_5260.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 137)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 138)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 139)) ;
    }
    UpEnumerator_lexicalInstructionListAST enumerator_5553 (enumerator_5260.current_mSelectInstructionList (HERE)) ;
    while (enumerator_5553.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_5553.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 141)) ;
      enumerator_5553.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 143)) ;
    }
    enumerator_5260.gotoNextObject () ;
    if (enumerator_5260.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 145)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas", 148)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      result_outGeneratedCode.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 149)) ;
      {
      result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 150)) ;
      }
      const GGS_lexicalSelectInstructionAST temp_3 = this ;
      UpEnumerator_lexicalInstructionListAST enumerator_5974 (temp_3.readProperty_mDefaultInstructionList ()) ;
      while (enumerator_5974.hasCurrentObject ()) {
        result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_5974.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 152)) ;
        enumerator_5974.gotoNextObject () ;
      }
      {
      result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 154)) ;
      }
    }
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 156)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalSelectInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
  const GGS_lexicalSelectInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSelectBranchListAST enumerator_6581 (temp_0.readProperty_mLexicalSelectBranchList ()) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 165)).isValidAndTrue () ;
  if (enumerator_6581.hasCurrentObject () && bool_1) {
    while (enumerator_6581.hasCurrentObject () && bool_1) {
      UpEnumerator_lexicalInstructionListAST enumerator_6666 (enumerator_6581.current_mSelectInstructionList (HERE)) ;
      bool bool_2 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 166)).isValidAndTrue () ;
      if (enumerator_6666.hasCurrentObject () && bool_2) {
        while (enumerator_6666.hasCurrentObject () && bool_2) {
          result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_6666.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 167)) ;
          enumerator_6666.gotoNextObject () ;
          if (enumerator_6666.hasCurrentObject ()) {
            bool_2 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 166)).isValidAndTrue () ;
          }
        }
      }
      enumerator_6581.gotoNextObject () ;
      if (enumerator_6581.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 165)).isValidAndTrue () ;
      }
    }
  }
  const GGS_lexicalSelectInstructionAST temp_3 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_6812 (temp_3.readProperty_mDefaultInstructionList ()) ;
  bool bool_4 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 170)).isValidAndTrue () ;
  if (enumerator_6812.hasCurrentObject () && bool_4) {
    while (enumerator_6812.hasCurrentObject () && bool_4) {
      result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_6812.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 171)) ;
      enumerator_6812.gotoNextObject () ;
      if (enumerator_6812.hasCurrentObject ()) {
        bool_4 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 170)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSelectInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                    const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  const GGS_lexicalSelectInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSelectBranchListAST enumerator_7278 (temp_0.readProperty_mLexicalSelectBranchList ()) ;
  while (enumerator_7278.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 185)) ;
    result_result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_7278.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 186)) ;
    result_result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 187)) ;
    {
    result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 188)) ;
    }
    UpEnumerator_lexicalInstructionListAST enumerator_7515 (enumerator_7278.current_mSelectInstructionList (HERE)) ;
    while (enumerator_7515.hasCurrentObject ()) {
      result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7515.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 190)) ;
      enumerator_7515.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 192)) ;
    }
    enumerator_7278.gotoNextObject () ;
    if (enumerator_7278.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 194)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas", 197)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      result_result.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 198)) ;
      {
      result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 199)) ;
      }
      const GGS_lexicalSelectInstructionAST temp_3 = this ;
      UpEnumerator_lexicalInstructionListAST enumerator_7883 (temp_3.readProperty_mDefaultInstructionList ()) ;
      while (enumerator_7883.hasCurrentObject ()) {
        result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7883.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 201)) ;
        enumerator_7883.gotoNextObject () ;
      }
      {
      result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 203)) ;
      }
    }
  }
  result_result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 205)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalErrorInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      GGS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_lexicalErrorInstructionAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 69)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                      const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                      Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("scanningOk = false\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalErrorInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                   const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalErrorInstructionAST temp_0 = this ;
  result_result = GGS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 106)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 106)).add_operation (temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 106)).add_operation (GGS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 106)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalRepeatInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRepeatInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GGS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalRepeatInstructionAST temp_0 = this ;
  UpEnumerator_lexicalWhileBranchListAST enumerator_3922 (temp_0.readProperty_mLexicalWhileBranchList ()) ;
  while (enumerator_3922.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) enumerator_3922.current_mWhileExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 101)) ;
    GGS_lexicalTagMap var_tagMap_4061 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 102)) ;
    UpEnumerator_lexicalInstructionListAST enumerator_4126 (enumerator_3922.current_mWhileInstructionList (HERE)) ;
    while (enumerator_4126.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4126.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4061, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 104)) ;
      enumerator_4126.gotoNextObject () ;
    }
    enumerator_3922.gotoNextObject () ;
  }
  GGS_lexicalTagMap var_tagMap_4269 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 107)) ;
  const GGS_lexicalRepeatInstructionAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_4332 (temp_1.readProperty_mRepeatedInstructionList ()) ;
  while (enumerator_4332.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4332.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4269, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 109)) ;
    enumerator_4332.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRepeatInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("while (loop && scanningOk) {\n") ;
  {
  result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 158)) ;
  }
  const GGS_lexicalRepeatInstructionAST temp_0 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_6750 (temp_0.readProperty_mRepeatedInstructionList ()) ;
  while (enumerator_6750.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6750.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 161)) ;
    enumerator_6750.gotoNextObject () ;
  }
  const GGS_lexicalRepeatInstructionAST temp_1 = this ;
  UpEnumerator_lexicalWhileBranchListAST enumerator_6955 (temp_1.readProperty_mLexicalWhileBranchList ()) ;
  while (enumerator_6955.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string ("if scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 166)) ;
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_6955.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 167)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 168)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 169)) ;
    }
    UpEnumerator_lexicalInstructionListAST enumerator_7245 (enumerator_6955.current_mWhileInstructionList (HERE)) ;
    while (enumerator_7245.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7245.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 171)) ;
      enumerator_7245.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 173)) ;
    }
    enumerator_6955.gotoNextObject () ;
    if (enumerator_6955.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 175)) ;
    }
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}else{\n  loop = false\n}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 177)) ;
  {
  result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 180)) ;
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}\nloop = true\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 181)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalRepeatInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRepeatInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                    const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("do {\n") ;
  {
  result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 200)) ;
  }
  const GGS_lexicalRepeatInstructionAST temp_0 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_8429 (temp_0.readProperty_mRepeatedInstructionList ()) ;
  while (enumerator_8429.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8429.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 203)) ;
    enumerator_8429.gotoNextObject () ;
  }
  const GGS_lexicalRepeatInstructionAST temp_1 = this ;
  UpEnumerator_lexicalWhileBranchListAST enumerator_8621 (temp_1.readProperty_mLexicalWhileBranchList ()) ;
  while (enumerator_8621.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 208)) ;
    result_result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_8621.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 209)) ;
    result_result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 210)) ;
    {
    result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 211)) ;
    }
    UpEnumerator_lexicalInstructionListAST enumerator_8855 (enumerator_8621.current_mWhileInstructionList (HERE)) ;
    while (enumerator_8855.hasCurrentObject ()) {
      result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8855.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 213)) ;
      enumerator_8855.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 215)) ;
    }
    enumerator_8621.gotoNextObject () ;
    if (enumerator_8621.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 217)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string ("}else{\n  loop = false ;\n}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 219)) ;
  {
  result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 222)) ;
  }
  result_result.plusAssignOperation(GGS_string ("}while (loop) ;\nloop = true ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 223)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalStructuredSendInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStructuredSendInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               GGS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSendSearchListAST enumerator_4556 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_4556.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalTokenListMap.setter_setMShouldBeGeneratedForKey (GGS_bool (true), enumerator_4556.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 112)) ;
    }
    GGS_lexicalTypeEnum joker_4796 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_4556.current_mAttributeName (HERE), joker_4796, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 113)) ;
    enumerator_4556.gotoNextObject () ;
  }
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  callExtensionMethod_checkLexicalDefaultAction ((cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 115)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                               const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSendSearchListAST enumerator_5261 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_5261.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string ("if (tokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 126)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("  tokenCode = search_into_").add_operation (constinArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 127)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("_").add_operation (enumerator_5261.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 128)).add_operation (GGS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 128)).add_operation (enumerator_5261.current_mAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 128)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 128)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 128)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 129)) ;
    enumerator_5261.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("if tokenCode == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 131)) ;
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (callExtensionGetter_generateSwiftCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 132)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 132)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 133)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalStructuredSendInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                            const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSendSearchListAST enumerator_6468 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_6468.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 152)) ;
    result_result.plusAssignOperation(GGS_string ("  token.mTokenCode = search_into_").add_operation (enumerator_6468.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 153)).add_operation (GGS_string (" (token.mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 153)).add_operation (enumerator_6468.current_mAttributeName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 153)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 153)) ;
    result_result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 154)) ;
    enumerator_6468.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 156)) ;
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result_result.plusAssignOperation(GGS_string ("  ").add_operation (callExtensionGetter_generateDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 157)) ;
  result_result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 158)) ;
  result_result.plusAssignOperation(GGS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 159)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalLogInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalLogInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                    GGS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalLogInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                    const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("/* lexicalLog (LINE_AND_SOURCE_FILE) */\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalLogInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalLogInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                 const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                 Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("lexicalLog (LINE_AND_SOURCE_FILE) ;\n") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalSimpleSendInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSimpleSendInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                           GGS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalSimpleSendInstructionAST temp_0 = this ;
  GGS_lexicalSentValueList joker_3100 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mSentTerminal (), joker_3100, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 66)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSimpleSendInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                           const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 75)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 75)).add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 75)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 75)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalSimpleSendInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSimpleSendInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                        const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result_result = GGS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 93)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 93)) ;
  result_result.plusAssignOperation(GGS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 94)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAllGuiComponentFromASTGalgas3??!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33__3F__3F__21_ (const GGS_galgasGUIComponentListAST constinArgument_inGuiComponentListAST,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  GGS_optionComponentMapForGeneration & outArgument_outOptionComponentMapForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionComponentMapForGeneration.drop () ; // Release 'out' argument
  outArgument_outOptionComponentMapForGeneration = GGS_optionComponentMapForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_galgasGUIComponentListAST enumerator_13880 (constinArgument_inGuiComponentListAST) ;
  while (enumerator_13880.hasCurrentObject ()) {
    {
    routine_guiComponentSemanticAnalysis_3F__3F__26_ (enumerator_13880.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 416)) ;
    }
    enumerator_13880.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'guiComponentSemanticAnalysis??&'
//
//--------------------------------------------------------------------------------------------------

void routine_guiComponentSemanticAnalysis_3F__3F__26_ (const GGS_galgasGUIComponentListAST_2E_element constinArgument_inGUIComponentAST,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_optionComponentMapForGeneration & ioArgument_ioOptionComponentMapForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_string ().objectCompare (GGS_string ("cocoa"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_location (), GGS_string ("the gui name should be 'cocoa'"), fixItArray1  COMMA_SOURCE_FILE ("guiCompilation.galgas", 430)) ;
    }
  }
  GGS_guiAnalysisContext var_context_14618 = GGS_guiAnalysisContext::init (inCompiler COMMA_HERE) ;
  var_context_14618.mProperty_mProjectIndexingDescriptorList = constinArgument_inGUIComponentAST.readProperty_mProjectIndexingDescriptorList () ;
  UpEnumerator_lstringlist enumerator_14771 (constinArgument_inGUIComponentAST.readProperty_mImportedOptionList ()) ;
  while (enumerator_14771.hasCurrentObject ()) {
    GGS_bool joker_14915_5 ; // Joker input parameter
    GGS_commandLineOptionMap joker_14915_4 ; // Joker input parameter
    GGS_commandLineOptionMap joker_14915_3 ; // Joker input parameter
    GGS_commandLineOptionMap joker_14915_2 ; // Joker input parameter
    GGS_commandLineOptionMap joker_14915_1 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (enumerator_14771.current_mValue (HERE), joker_14915_5, joker_14915_4, joker_14915_3, joker_14915_2, joker_14915_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 437)) ;
    var_context_14618.mProperty_mImportedOptionComponentList.addAssignOperation (enumerator_14771.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 441)) ;
    enumerator_14771.gotoNextObject () ;
  }
  GGS_bool var_runOptionDefined_15023 = GGS_bool (false) ;
  UpEnumerator_guiSimpleAttributeListAST enumerator_15060 (constinArgument_inGUIComponentAST.readProperty_mGlobalSimpleAttributeList ()) ;
  while (enumerator_15060.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, enumerator_15060.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("run"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = var_runOptionDefined_15023.boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_15060.current_mKey (HERE).readProperty_location (), GGS_string ("option already defined"), fixItArray4  COMMA_SOURCE_FILE ("guiCompilation.galgas", 448)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = GGS_bool (ComparisonKind::equal, enumerator_15060.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GenericArray <FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_15060.current_mValue (HERE).readProperty_location (), GGS_string ("run option string should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("guiCompilation.galgas", 450)) ;
            }
          }
          if (GalgasBool::boolFalse == test_5) {
            var_context_14618.mProperty_mBuildRunOption = enumerator_15060.current_mValue (HERE).readProperty_string () ;
            var_runOptionDefined_15023 = GGS_bool (true) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::equal, enumerator_15060.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("nibAndMainClass"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          UpEnumerator_stringlist enumerator_15548 (enumerator_15060.current_mValue (HERE).readProperty_string ().getter_componentsSeparatedByString (GGS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas", 456))) ;
          while (enumerator_15548.hasCurrentObject ()) {
            var_context_14618.mProperty_mNibAndClassList.addAssignOperation (enumerator_15548.current (HERE).readProperty_mValue ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 457)) ;
            enumerator_15548.gotoNextObject () ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticWarning (enumerator_15060.current_mKey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_15060.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 460)).add_operation (GGS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 460)), fixItArray8  COMMA_SOURCE_FILE ("guiCompilation.galgas", 460)) ;
      }
    }
    enumerator_15060.gotoNextObject () ;
  }
  UpEnumerator_withLexiqueListAST enumerator_15800 (constinArgument_inGUIComponentAST.readProperty_mWithLexiqueList ()) ;
  GGS_uint index_15755 (uint32_t (0)) ;
  while (enumerator_15800.hasCurrentObject ()) {
    GGS_terminalMap var_terminalMap_16018 ;
    GGS_lexicalStyleListAST var_lexicalStyleListAST_16051 ;
    GGS_bool joker_15991 ; // Joker input parameter
    GGS_indexingListAST joker_16036_3 ; // Joker input parameter
    GGS_terminalDeclarationListAST joker_16036_2 ; // Joker input parameter
    GGS_lexicalAttributeListAST joker_16036_1 ; // Joker input parameter
    GGS_lexicalListDeclarationListAST joker_16077 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (enumerator_15800.current_mLexiqueFileName (HERE), joker_15991, var_terminalMap_16018, joker_16036_3, joker_16036_2, joker_16036_1, var_lexicalStyleListAST_16051, joker_16077, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 466)) ;
    GGS_stringset var_terminalSymbolSet_16128 = var_terminalMap_16018.getter_keySet (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 475)) ;
    UpEnumerator_guiLabelListAST enumerator_16213 (enumerator_15800.current_mLabels (HERE)) ;
    while (enumerator_16213.hasCurrentObject ()) {
      UpEnumerator_terminalLabelListAST enumerator_16250 (enumerator_16213.current_mTerminalList (HERE)) ;
      while (enumerator_16250.hasCurrentObject ()) {
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = var_terminalSymbolSet_16128.getter_hasKey (enumerator_16250.current_mTerminal (HERE).readProperty_string () COMMA_SOURCE_FILE ("guiCompilation.galgas", 479)).operator_not (SOURCE_FILE ("guiCompilation.galgas", 479)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_16250.current_mTerminal (HERE).readProperty_location (), GGS_string ("the '$").add_operation (enumerator_16250.current_mTerminal (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 480)).add_operation (GGS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 481)).add_operation (enumerator_15800.current_mLexiqueFileName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 482)).add_operation (GGS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 483)), fixItArray10  COMMA_SOURCE_FILE ("guiCompilation.galgas", 480)) ;
          }
        }
        enumerator_16250.gotoNextObject () ;
      }
      enumerator_16213.gotoNextObject () ;
    }
    GGS_textMacroList var_textMacroList_16595 = GGS_textMacroList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_guiCompoundAttributeListAST enumerator_16644 (enumerator_15800.current_mCompoundAttributes (HERE)) ;
    while (enumerator_16644.hasCurrentObject ()) {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::notEqual, enumerator_16644.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("textMacro"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_16644.current_mKey (HERE).readProperty_location (), GGS_string ("for a compound attribute, only the 'textMacro' key is valid"), fixItArray12  COMMA_SOURCE_FILE ("guiCompilation.galgas", 492)) ;
        }
      }
      if (GalgasBool::boolFalse == test_11) {
        var_textMacroList_16595.addAssignOperation (enumerator_16644.current_mAttributeName (HERE).readProperty_string (), enumerator_16644.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 494)) ;
      }
      enumerator_16644.gotoNextObject () ;
    }
    GGS_bool var_hasAssociatedExtension_16932 = GGS_bool (false) ;
    GGS_bool var_hasTabViewTitle_16977 = GGS_bool (false) ;
    GGS_bool var_hasBlockComment_17015 = GGS_bool (false) ;
    GGS_string var_tabViewTitle_17055 = GGS_string::makeEmptyString () ;
    GGS_string var_blockComment_17089 = GGS_string::makeEmptyString () ;
    UpEnumerator_guiSimpleAttributeListAST enumerator_17121 (enumerator_15800.current_mSimpleAttributes (HERE)) ;
    while (enumerator_17121.hasCurrentObject ()) {
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::equal, enumerator_17121.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("fileExtension"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          {
          var_context_14618.mProperty_mExtensionMap.setter_insertKey (enumerator_17121.current_mValue (HERE), enumerator_15800.current_mLexiqueFileName (HERE).readProperty_string (), index_15755, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 505)) ;
          }
          var_hasAssociatedExtension_16932 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_13) {
        GalgasBool test_14 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_14) {
          test_14 = GGS_bool (ComparisonKind::equal, enumerator_17121.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("title"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_14) {
            GalgasBool test_15 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_15) {
              test_15 = var_hasTabViewTitle_16977.boolEnum () ;
              if (GalgasBool::boolTrue == test_15) {
                GenericArray <FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (enumerator_17121.current_mKey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_17121.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 509)).add_operation (GGS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 509)), fixItArray16  COMMA_SOURCE_FILE ("guiCompilation.galgas", 509)) ;
              }
            }
            var_hasTabViewTitle_16977 = GGS_bool (true) ;
            var_tabViewTitle_17055 = enumerator_17121.current_mValue (HERE).readProperty_string () ;
          }
        }
        if (GalgasBool::boolFalse == test_14) {
          GalgasBool test_17 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_17) {
            test_17 = GGS_bool (ComparisonKind::equal, enumerator_17121.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("blockComment"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_17) {
              GalgasBool test_18 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_18) {
                test_18 = var_hasBlockComment_17015.boolEnum () ;
                if (GalgasBool::boolTrue == test_18) {
                  GenericArray <FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (enumerator_17121.current_mKey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_17121.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 515)).add_operation (GGS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 515)), fixItArray19  COMMA_SOURCE_FILE ("guiCompilation.galgas", 515)) ;
                }
              }
              var_hasBlockComment_17015 = GGS_bool (true) ;
              var_blockComment_17089 = enumerator_17121.current_mValue (HERE).readProperty_string () ;
            }
          }
          if (GalgasBool::boolFalse == test_17) {
            GenericArray <FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_17121.current_mKey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_17121.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 520)).add_operation (GGS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 520)), fixItArray20  COMMA_SOURCE_FILE ("guiCompilation.galgas", 520)) ;
          }
        }
      }
      enumerator_17121.gotoNextObject () ;
    }
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = var_hasAssociatedExtension_16932.operator_not (SOURCE_FILE ("guiCompilation.galgas", 524)).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_15800.current_mLexiqueFileName (HERE).readProperty_location (), GGS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")"), fixItArray22  COMMA_SOURCE_FILE ("guiCompilation.galgas", 525)) ;
      }
    }
    GalgasBool test_23 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_23) {
      test_23 = var_hasTabViewTitle_16977.operator_not (SOURCE_FILE ("guiCompilation.galgas", 528)).boolEnum () ;
      if (GalgasBool::boolTrue == test_23) {
        GenericArray <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_15800.current_mLexiqueFileName (HERE).readProperty_location (), GGS_string ("the 'title' key should be defined once (it is not defined)"), fixItArray24  COMMA_SOURCE_FILE ("guiCompilation.galgas", 529)) ;
      }
    }
    var_context_14618.mProperty_mWithLexiqueList.addAssignOperation (enumerator_15800.current_mLexiqueFileName (HERE).readProperty_string (), index_15755, var_blockComment_17089, var_tabViewTitle_17055, var_textMacroList_16595, enumerator_15800.current_mLabels (HERE), var_lexicalStyleListAST_16051  COMMA_SOURCE_FILE ("guiCompilation.galgas", 532)) ;
    enumerator_15800.gotoNextObject () ;
    index_15755.increment_operation (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 464)) ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName (), var_context_14618, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 542)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateAllGuiComponentsGalgas3???&swift'
//
//--------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33__3F__3F__3F__26_swift (const GGS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                                                      const GGS_string constinArgument_inOutputDirectory,
                                                                      const GGS_bool constinArgument_inQuietOutputByDefault,
                                                                      GGS_stringlist & ioArgument_ioSwiftAllProductFileList,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_optionComponentMapForGeneration enumerator_19226 (constinArgument_inOptionComponentMapForGeneration) ;
  while (enumerator_19226.hasCurrentObject ()) {
    GGS_string var_swiftuiFileName_19948 = GGS_string ("gui-swiftui-").add_operation (enumerator_19226.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 575)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 575)) ;
    ioArgument_ioSwiftAllProductFileList.addAssignOperation (var_swiftuiFileName_19948  COMMA_SOURCE_FILE ("guiCompilation.galgas", 576)) ;
    GGS_string var_swiftui_5F_string_20065 = GGS_string (filewrapperTemplate_guiGenerationTemplates_swiftui_5F_gui_5F_implementation (inCompiler, enumerator_19226.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault COMMA_SOURCE_FILE ("guiCompilation.galgas", 577))) ;
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_swiftuiFileName_19948, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_swiftui_5F_string_20065, GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 581)) ;
    }
    enumerator_19226.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'guiGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_guiGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_guiGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_guiGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_guiGenerationTemplates_0,
  0,
  gWrapperAllDirectories_guiGenerationTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates swiftui_gui_implementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_guiGenerationTemplates_swiftui_5F_gui_5F_implementation (Compiler * /* inCompiler */,
                                                                                        const GGS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                        const GGS_bool & /* in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nimport SwiftUI\nimport UniformTypeIdentifiers\n\n//--------------------------------------------------------------------------------------------------\n\nextension UTType {\n") ;
  GGS_uint index_212_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    UpEnumerator_extensionMap enumerator_212 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ()) ;
    while (enumerator_212.hasCurrentObject ()) {
      result.appendString ("  nonisolated static let ") ;
      result.appendString (enumerator_212.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" = UTType (exportedAs: Bundle.main.bundleIdentifier! + \".") ;
      result.appendString (enumerator_212.current_lkey (HERE).readProperty_string ().getter_lowercaseString (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 9)).stringValue ()) ;
      result.appendString ("\")\n") ;
      enumerator_212.gotoNextObject () ;
      index_212_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nextension ProjectDocument {\n  static let readableContentTypes : [UTType] = [") ;
  GGS_uint index_596_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    UpEnumerator_extensionMap enumerator_596 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ()) ;
    while (enumerator_596.hasCurrentObject ()) {
      result.appendString (".") ;
      result.appendString (enumerator_596.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 18)).stringValue ()) ;
      enumerator_596.gotoNextObject () ;
      if (enumerator_596.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_596_.increment () ;
    }
  }
  result.appendString ("]\n}\n\n//--------------------------------------------------------------------------------------------------\n//    Project file extensions\n//--------------------------------------------------------------------------------------------------\n\nlet projectFileExtensions = Set ([") ;
  GGS_uint index_974_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    UpEnumerator_extensionMap enumerator_974 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ()) ;
    while (enumerator_974.hasCurrentObject ()) {
      result.appendString (enumerator_974.current_lkey (HERE).readProperty_string ().getter_lowercaseString (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 30)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 30)).stringValue ()) ;
      enumerator_974.gotoNextObject () ;
      if (enumerator_974.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_974_.increment () ;
    }
  }
  result.appendString ("])\n\n//--------------------------------------------------------------------------------------------------\n//   Scanner for a given extension\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func scannerFor (extension inExtension : String) -> AbstractScanner\? {\n  var result : AbstractScanner\? = nil\n  let fileExtension = inExtension.lowercased ()\n") ;
  GGS_uint index_1548_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    UpEnumerator_extensionMap enumerator_1548 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ()) ;
    const bool nonEmpty_enumerator_1548 = enumerator_1548.hasCurrentObject () ;
    if (nonEmpty_enumerator_1548) {
      result.appendString ("  if") ;
    }
    while (enumerator_1548.hasCurrentObject ()) {
      result.appendString (" fileExtension == ") ;
      result.appendString (enumerator_1548.current_lkey (HERE).readProperty_string ().getter_lowercaseString (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 44)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (" {\n    result = ScannerFor_") ;
      result.appendString (enumerator_1548.current_mLexiqueName (HERE).stringValue ()) ;
      result.appendString (" ()\n") ;
      enumerator_1548.gotoNextObject () ;
      if (enumerator_1548.hasCurrentObject ()) {
        result.appendString ("  }else if") ;
      }
      index_1548_.increment () ;
    }
    if (nonEmpty_enumerator_1548) {
      result.appendString ("  }\n") ;
    }
  }
  result.appendString ("  return result\n}\n\n//--------------------------------------------------------------------------------------------------\n// Setting View\n//--------------------------------------------------------------------------------------------------\n\nstruct SettingsView : View {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  enum SidebarItem {\n    case commandLineOptions\n") ;
  GGS_uint index_2239_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    UpEnumerator_importedLexiqueList enumerator_2239 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ()) ;
    while (enumerator_2239.hasCurrentObject ()) {
      result.appendString ("    case ") ;
      result.appendString (enumerator_2239.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2239.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 63)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_2239.gotoNextObject () ;
      index_2239_.increment () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @State private var mSelection : SidebarItem = .commandLineOptions\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @ViewBuilder var body : some View {\n    NavigationSplitView {\n      List(selection: self.$mSelection) {\n        Text (\"Options\").tag (SidebarItem.commandLineOptions)\n\n") ;
  GGS_uint index_2835_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    UpEnumerator_importedLexiqueList enumerator_2835 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ()) ;
    while (enumerator_2835.hasCurrentObject ()) {
      result.appendString ("        Text (\"") ;
      result.appendString (enumerator_2835.current_mTitle (HERE).stringValue ()) ;
      result.appendString ("\").tag (SidebarItem.") ;
      result.appendString (enumerator_2835.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2835.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 78)).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_2835.gotoNextObject () ;
      index_2835_.increment () ;
    }
  }
  result.appendString ("      }\n      .toolbar (removing: .sidebarToggle)\n    } detail: {\n      switch self.mSelection {\n        case .commandLineOptions : OptionView ()\n") ;
  GGS_uint index_3164_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    UpEnumerator_importedLexiqueList enumerator_3164 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ()) ;
    while (enumerator_3164.hasCurrentObject ()) {
      result.appendString ("        case .") ;
      result.appendString (enumerator_3164.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3164.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 86)).stringValue ()) ;
      result.appendString (" : SettingViewFor_") ;
      result.appendString (enumerator_3164.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (" ()\n") ;
      enumerator_3164.gotoNextObject () ;
      index_3164_.increment () ;
    }
  }
  result.appendString ("      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n\n") ;
  GGS_uint index_3526_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    UpEnumerator_importedLexiqueList enumerator_3526 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ()) ;
    while (enumerator_3526.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n//   Popup list data for '") ;
      result.appendString (enumerator_3526.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("' lexique\n//--------------------------------------------------------------------------------------------------\n\nlet gPopUpData_") ;
      result.appendString (enumerator_3526.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (" : [[UInt16]] = [\n") ;
      GGS_uint index_3914_ (0) ;
      if (enumerator_3526.current_mLabels (HERE).isValid ()) {
        UpEnumerator_guiLabelListAST enumerator_3914 (enumerator_3526.current_mLabels (HERE)) ;
        while (enumerator_3914.hasCurrentObject ()) {
          result.appendString ("  [") ;
          result.appendString (enumerator_3914.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 104)).stringValue ()) ;
          result.appendString (", // Leading character count to strip\n") ;
          GGS_uint index_4063_ (0) ;
          if (enumerator_3914.current_mTerminalList (HERE).isValid ()) {
            UpEnumerator_terminalLabelListAST enumerator_4063 (enumerator_3914.current_mTerminalList (HERE)) ;
            while (enumerator_4063.hasCurrentObject ()) {
              result.appendString ("    ") ;
              result.appendString (enumerator_3526.current_mLexiqueClassName (HERE).stringValue ()) ;
              result.appendString ("_1_") ;
              result.appendString (enumerator_4063.current_mTerminal (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 106)).stringValue ()) ;
              result.appendString (", ") ;
              result.appendString (enumerator_4063.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 106)).stringValue ()) ;
              enumerator_4063.gotoNextObject () ;
              if (enumerator_4063.hasCurrentObject ()) {
                result.appendString (",\n") ;
              }
              index_4063_.increment () ;
            }
          }
          result.appendString ("\n  ]") ;
          enumerator_3914.gotoNextObject () ;
          if (enumerator_3914.hasCurrentObject ()) {
            result.appendString (",\n") ;
          }
          index_3914_.increment () ;
        }
      }
      result.appendString ("\n]\n\n//--------------------------------------------------------------------------------------------------\n//   Block Comment for '") ;
      result.appendString (enumerator_3526.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("' lexique\n//--------------------------------------------------------------------------------------------------\n\nlet gLineComment_") ;
      result.appendString (enumerator_3526.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (" : String\? = ") ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_3526.current_mBlockComment (HERE).getter_count (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 119)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("nil") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (enumerator_3526.current_mBlockComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 119)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("\n\n") ;
      enumerator_3526.gotoNextObject () ;
      index_3526_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalOrExpressionAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 37)) ;
  result_result.plusAssignOperation(GGS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 38)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 39)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
  result_outGeneratedCode = GGS_string ("self.testForInputFromChar (") ;
  const GGS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 49)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 49)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (", toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 50)) ;
  const GGS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 51)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 51)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 52)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalStringMatchAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("self.testForInputString (").add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 60)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (", advance: true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 61)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringNotMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringNotMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("self.notTestForInputString (") ;
  const GGS_lexicalStringNotMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 70)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (", error: &scanningOk)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 71)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("self.testForInputChar (") ;
  const GGS_lexicalCharacterMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 80)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 80)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 81)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterSetMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterSetMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalCharacterSetMatchAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("self.testForChar_").add_operation (temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 88)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 88)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 100)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 107)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 107)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalUnsignedInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 113)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("self.previousChar") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("scanner_cocoa_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 127)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 127)) ;
  const GGS_lexicalFunctionInputArgumentAST temp_1 = this ;
  UpEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_5991 (temp_1.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_5991.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_5991.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 129)) ;
    enumerator_5991.gotoNextObject () ;
    if (enumerator_5991.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 130)) ;
    }
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 132)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSendTerminalByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GGS_string constinArgument_inScannerClassName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 146)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 146)).add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 146)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 146)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                    Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("scanningOk = false\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalImplicitRuleAST::getter_generateSwiftCocoaCode (const GGS_string constinArgument_inScannerClassName,
                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  GGS_tokenSortedlist var_tokenSortedList_8241 ;
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_8233 ; // Joker input parameter
  GGS_bool joker_8257 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_8233, var_tokenSortedList_8241, joker_8257, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 179)) ;
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
  DownEnumerator_tokenSortedlist enumerator_8302 (var_tokenSortedList_8241) ;
  while (enumerator_8302.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string ("if scanningOk && self.testForInputString ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 182)) ;
    result_outGeneratedCode.plusAssignOperation(enumerator_8302.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 183)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string (", advance: true) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 184)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("  tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 185)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 185)).add_operation (enumerator_8302.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 185)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 185)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 186)) ;
    enumerator_8302.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalExplicitRuleAST::getter_generateSwiftCocoaCode (const GGS_string constinArgument_inScannerClassName,
                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("if scanningOk && (") ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 197)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 198)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 199)) ;
  }
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_9181 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_9181.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_9181.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 201)) ;
    enumerator_9181.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 203)) ;
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 204)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                         GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                         GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                         GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionComponentDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("optionCompilation.galgas", 187)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                   const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                   const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                   const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                   const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                   GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_commandLineOptionMap var_boolOptionMap_7637 = GGS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GGS_commandLineOptionMap var_uintOptionMap_7687 = GGS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GGS_commandLineOptionMap var_stringOptionMap_7737 = GGS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GGS_commandLineOptionMap var_stringListOptionMap_7789 = GGS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GGS_stringset var_optionNameSet_7823 = GGS_stringset::class_func_emptySet (SOURCE_FILE ("optionCompilation.galgas", 205)) ;
  const GGS_optionComponentDeclarationAST temp_0 = this ;
  UpEnumerator_commandLineOptionListAST enumerator_7884 (temp_0.readProperty_mOptions ()) ;
  while (enumerator_7884.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_optionNameSet_7823.getter_hasKey (enumerator_7884.current (HERE).readProperty_mOptionInternalName ().readProperty_string () COMMA_SOURCE_FILE ("optionCompilation.galgas", 207)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_7884.current (HERE).readProperty_mOptionInternalName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_7884.current (HERE).readProperty_mOptionInternalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 209)).add_operation (GGS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 209)), fixItArray2  COMMA_SOURCE_FILE ("optionCompilation.galgas", 208)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, enumerator_7884.current (HERE).readProperty_mOptionTypeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          {
          var_boolOptionMap_7637.setter_insertKey (enumerator_7884.current (HERE).readProperty_mOptionInternalName (), enumerator_7884.current (HERE).readProperty_mOptionInvocationLetter ().readProperty_char (), enumerator_7884.current (HERE).readProperty_mOptionInvocationString ().readProperty_string (), enumerator_7884.current (HERE).readProperty_mOptionComment ().readProperty_string (), GGS_string ("false"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 212)) ;
          }
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::notEqual, enumerator_7884.current (HERE).readProperty_mOptionDefaultValueKind ().objectCompare (GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 219)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_7884.current (HERE).readProperty_mOptionDefaultValue ().readProperty_location (), GGS_string ("an @bool option cannot have a default value (default value is always false)"), fixItArray5  COMMA_SOURCE_FILE ("optionCompilation.galgas", 220)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::equal, enumerator_7884.current (HERE).readProperty_mOptionTypeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            {
            GGS_string temp_7 ;
            const GalgasBool test_8 = GGS_bool (ComparisonKind::equal, enumerator_7884.current (HERE).readProperty_mOptionDefaultValue ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              temp_7 = GGS_string ("0") ;
            }else if (GalgasBool::boolFalse == test_8) {
              temp_7 = enumerator_7884.current (HERE).readProperty_mOptionDefaultValue ().readProperty_string () ;
            }
            var_uintOptionMap_7687.setter_insertKey (enumerator_7884.current (HERE).readProperty_mOptionInternalName (), enumerator_7884.current (HERE).readProperty_mOptionInvocationLetter ().readProperty_char (), enumerator_7884.current (HERE).readProperty_mOptionInvocationString ().readProperty_string (), enumerator_7884.current (HERE).readProperty_mOptionComment ().readProperty_string (), temp_7, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 224)) ;
            }
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::equal, enumerator_7884.current (HERE).readProperty_mOptionDefaultValueKind ().objectCompare (GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 231)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                GenericArray <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_7884.current (HERE).readProperty_mOptionDefaultValue ().readProperty_location (), GGS_string ("an @uint option default value cannot be an @string value"), fixItArray10  COMMA_SOURCE_FILE ("optionCompilation.galgas", 232)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_6) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = GGS_bool (ComparisonKind::equal, enumerator_7884.current (HERE).readProperty_mOptionTypeName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              {
              var_stringOptionMap_7737.setter_insertKey (enumerator_7884.current (HERE).readProperty_mOptionInternalName (), enumerator_7884.current (HERE).readProperty_mOptionInvocationLetter ().readProperty_char (), enumerator_7884.current (HERE).readProperty_mOptionInvocationString ().readProperty_string (), enumerator_7884.current (HERE).readProperty_mOptionComment ().readProperty_string (), enumerator_7884.current (HERE).readProperty_mOptionDefaultValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 236)) ;
              }
              GalgasBool test_12 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_12) {
                test_12 = GGS_bool (ComparisonKind::equal, enumerator_7884.current (HERE).readProperty_mOptionDefaultValueKind ().objectCompare (GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 243)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_12) {
                  GenericArray <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (enumerator_7884.current (HERE).readProperty_mOptionDefaultValue ().readProperty_location (), GGS_string ("an @string option default value cannot be an @uint value"), fixItArray13  COMMA_SOURCE_FILE ("optionCompilation.galgas", 244)) ;
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            GalgasBool test_14 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_14) {
              test_14 = GGS_bool (ComparisonKind::equal, enumerator_7884.current (HERE).readProperty_mOptionTypeName ().readProperty_string ().objectCompare (GGS_string ("stringlist"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_14) {
                {
                var_stringListOptionMap_7789.setter_insertKey (enumerator_7884.current (HERE).readProperty_mOptionInternalName (), enumerator_7884.current (HERE).readProperty_mOptionInvocationLetter ().readProperty_char (), enumerator_7884.current (HERE).readProperty_mOptionInvocationString ().readProperty_string (), enumerator_7884.current (HERE).readProperty_mOptionComment ().readProperty_string (), enumerator_7884.current (HERE).readProperty_mOptionDefaultValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 248)) ;
                }
                GalgasBool test_15 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_15) {
                  test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_7884.current (HERE).readProperty_mOptionDefaultValueKind ().objectCompare (GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 255)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_15) {
                    GenericArray <FixItDescription> fixItArray16 ;
                    inCompiler->emitSemanticError (enumerator_7884.current (HERE).readProperty_mOptionDefaultValue ().readProperty_location (), GGS_string ("an @stringlist option cannot accept default value"), fixItArray16  COMMA_SOURCE_FILE ("optionCompilation.galgas", 256)) ;
                  }
                }
              }
            }
            if (GalgasBool::boolFalse == test_14) {
              GenericArray <FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_7884.current (HERE).readProperty_mOptionTypeName ().readProperty_location (), GGS_string ("only the @bool, @uint or @string types are allowed here"), fixItArray17  COMMA_SOURCE_FILE ("optionCompilation.galgas", 260)) ;
            }
          }
        }
      }
    }
    var_optionNameSet_7823.plusPlusAssignOperation (enumerator_7884.current (HERE).readProperty_mOptionInternalName ().readProperty_string ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 263)) ;
    enumerator_7884.gotoNextObject () ;
  }
  {
  const GGS_optionComponentDeclarationAST temp_18 = this ;
  const GGS_optionComponentDeclarationAST temp_19 = this ;
  ioArgument_ioSemanticContext.mProperty_mOptionComponentMapForSemanticAnalysis.setter_insertKey (temp_18.readProperty_mOptionComponentName (), temp_19.readProperty_isPredefined (), var_boolOptionMap_7637, var_uintOptionMap_7687, var_stringOptionMap_7737, var_stringListOptionMap_7789, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 266)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_string /* constinArgument_inProductDirectory */,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                  const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionComponentDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_11417 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 288)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11417, var_nameForUsefulness_11417, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 289)) ;
  }
  GGS_bool var_optionIsPredefined_11705 ;
  GGS_commandLineOptionMap var_boolOptionMap_11757 ;
  GGS_commandLineOptionMap var_uintOptionMap_11804 ;
  GGS_commandLineOptionMap var_stringOptionMap_11851 ;
  GGS_commandLineOptionMap var_stringListOptionMap_11900 ;
  const GGS_optionComponentDeclarationAST temp_1 = this ;
  constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionIsPredefined_11705, var_boolOptionMap_11757, var_uintOptionMap_11804, var_stringOptionMap_11851, var_stringListOptionMap_11900, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 291)) ;
  GGS_commandLineOptionSortedList var_boolOptionSortedList_11984 = GGS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_commandLineOptionMap enumerator_12031 (var_boolOptionMap_11757) ;
  while (enumerator_12031.hasCurrentObject ()) {
    var_boolOptionSortedList_11984.addAssignOperation (enumerator_12031.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12031.current (HERE).readProperty_mOptionChar (), enumerator_12031.current (HERE).readProperty_mOptionString (), enumerator_12031.current (HERE).readProperty_mComment (), enumerator_12031.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 302)) ;
    enumerator_12031.gotoNextObject () ;
  }
  GGS_commandLineOptionSortedList var_uintOptionSortedList_12274 = GGS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_commandLineOptionMap enumerator_12321 (var_uintOptionMap_11804) ;
  while (enumerator_12321.hasCurrentObject ()) {
    var_uintOptionSortedList_12274.addAssignOperation (enumerator_12321.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12321.current (HERE).readProperty_mOptionChar (), enumerator_12321.current (HERE).readProperty_mOptionString (), enumerator_12321.current (HERE).readProperty_mComment (), enumerator_12321.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 311)) ;
    enumerator_12321.gotoNextObject () ;
  }
  GGS_commandLineOptionSortedList var_stringOptionSortedList_12564 = GGS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_commandLineOptionMap enumerator_12613 (var_stringOptionMap_11851) ;
  while (enumerator_12613.hasCurrentObject ()) {
    var_stringOptionSortedList_12564.addAssignOperation (enumerator_12613.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12613.current (HERE).readProperty_mOptionChar (), enumerator_12613.current (HERE).readProperty_mOptionString (), enumerator_12613.current (HERE).readProperty_mComment (), enumerator_12613.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 320)) ;
    enumerator_12613.gotoNextObject () ;
  }
  GGS_commandLineOptionSortedList var_stringListOptionSortedList_12860 = GGS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_commandLineOptionMap enumerator_12913 (var_stringListOptionMap_11900) ;
  while (enumerator_12913.hasCurrentObject ()) {
    var_stringListOptionSortedList_12860.addAssignOperation (enumerator_12913.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12913.current (HERE).readProperty_mOptionChar (), enumerator_12913.current (HERE).readProperty_mOptionString (), enumerator_12913.current (HERE).readProperty_mComment (), enumerator_12913.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 329)) ;
    enumerator_12913.gotoNextObject () ;
  }
  const GGS_optionComponentDeclarationAST temp_2 = this ;
  const GGS_optionComponentDeclarationAST temp_3 = this ;
  const GGS_optionComponentDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("option ").add_operation (temp_2.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 338)), GGS_optionComponentForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_bool (true), GGS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 341)), var_optionIsPredefined_11705, temp_4.readProperty_mOptionComponentName ().readProperty_string (), var_boolOptionSortedList_11984, var_uintOptionSortedList_12274, var_stringOptionSortedList_12564, var_stringListOptionSortedList_12860, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas", 337)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_optionComponentForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_optionComponentForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_mIsPredefined () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_optionComponentForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  const GGS_optionComponentForGeneration temp_0 = this ;
  GGS_headerKind temp_1 ;
  const GalgasBool test_2 = temp_0.readProperty_mIsPredefined ().boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("optionCompilation.galgas", 376)) ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("optionCompilation.galgas", 376)) ;
  }
  result_result = temp_1 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionComponentForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mIsPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outHeader = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_optionComponentForGeneration temp_2 = this ;
    const GGS_optionComponentForGeneration temp_3 = this ;
    const GGS_optionComponentForGeneration temp_4 = this ;
    const GGS_optionComponentForGeneration temp_5 = this ;
    const GGS_optionComponentForGeneration temp_6 = this ;
    outArgument_outHeader = GGS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, temp_2.readProperty_mOptionComponentName (), temp_3.readProperty_mBoolOptionSortedList (), temp_4.readProperty_mUIntOptionSortedList (), temp_5.readProperty_mStringOptionSortedList (), temp_6.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 386))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionComponentForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mIsPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outImplementation = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_optionComponentForGeneration temp_2 = this ;
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 406))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 406)) ;
    const GGS_optionComponentForGeneration temp_3 = this ;
    const GGS_optionComponentForGeneration temp_4 = this ;
    const GGS_optionComponentForGeneration temp_5 = this ;
    const GGS_optionComponentForGeneration temp_6 = this ;
    const GGS_optionComponentForGeneration temp_7 = this ;
    outArgument_outImplementation = GGS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, temp_3.readProperty_mOptionComponentName (), temp_4.readProperty_mBoolOptionSortedList (), temp_5.readProperty_mUIntOptionSortedList (), temp_6.readProperty_mStringOptionSortedList (), temp_7.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 407))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentForGeneration appendSpecificFiles'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendSpecificFiles (const GGS_string constinArgument_inProductDirectory,
                                                                    GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                    GGS_stringlist & ioArgument_ioSwiftAppProductFileList,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_bool test_1 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("optionCompilation.galgas", 426)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_1.boolEnum ()) {
      const GGS_optionComponentForGeneration temp_2 = this ;
      test_1 = temp_2.readProperty_mIsPredefined ().operator_not (SOURCE_FILE ("optionCompilation.galgas", 426)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionComponentForGeneration temp_3 = this ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 428)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 428))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 428)) ;
      const GGS_optionComponentForGeneration temp_4 = this ;
      ioArgument_ioSwiftAppProductFileList.addAssignOperation (GGS_string ("option-").add_operation (temp_4.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 429)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 429))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 429)) ;
      {
      const GGS_optionComponentForGeneration temp_5 = this ;
      const GGS_optionComponentForGeneration temp_6 = this ;
      const GGS_optionComponentForGeneration temp_7 = this ;
      const GGS_optionComponentForGeneration temp_8 = this ;
      const GGS_optionComponentForGeneration temp_9 = this ;
      const GGS_optionComponentForGeneration temp_10 = this ;
      const GGS_optionComponentForGeneration temp_11 = this ;
      GGS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GGS_string ("option-").add_operation (temp_5.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 432)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 432)), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), GGS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftUI (inCompiler, GGS_string ("option-").add_operation (temp_6.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 437)).add_operation (GGS_string ("-swiftui"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 437)), temp_7.readProperty_mOptionComponentName (), temp_8.readProperty_mBoolOptionSortedList (), temp_9.readProperty_mUIntOptionSortedList (), temp_10.readProperty_mStringOptionSortedList (), temp_11.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 436))), GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 430)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'optionGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_optionGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_optionGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_optionGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_optionGenerationTemplates_0,
  0,
  gWrapperAllDirectories_optionGenerationTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderZone3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (Compiler * /* inCompiler */,
                                                                               const GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                               const GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                               const GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                               const GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                               const GGS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//                               Bool options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_409_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_409 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_409.hasCurrentObject ()) {
      result.appendString ("extern BoolCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_409.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      enumerator_409.gotoNextObject () ;
      index_409_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                               UInt options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_972_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_972 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_972.hasCurrentObject ()) {
      result.appendString ("extern UIntCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_972.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      enumerator_972.gotoNextObject () ;
      index_972_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String options                                                   \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_1537_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_1537 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_1537.hasCurrentObject ()) {
      result.appendString ("extern StringCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1537.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      enumerator_1537.gotoNextObject () ;
      index_1537_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String List options                                              \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_2109_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_2109 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_2109.hasCurrentObject ()) {
      result.appendString ("extern StringListCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2109.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      enumerator_2109.gotoNextObject () ;
      index_2109_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (Compiler * /* inCompiler */,
                                                                                         const GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                         const GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const GGS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                               Bool options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_408_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_408 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_408.hasCurrentObject ()) {
      result.appendString ("BoolCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_408.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue ()) ;
      result.appendString (" (\"") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("\",\n                                         ") ;
      result.appendString (enumerator_408.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_408.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_408.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_408.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 12)).stringValue ()) ;
      result.appendString (") ;\n\n") ;
      enumerator_408.gotoNextObject () ;
      index_408_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                               UInt options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_1389_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_1389 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_1389.hasCurrentObject ()) {
      result.appendString ("UIntCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1389.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue ()) ;
      result.appendString (" (\"") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("\",\n                                         ") ;
      result.appendString (enumerator_1389.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_1389.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_1389.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_1389.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_1389.current_mDefaultValue (HERE).stringValue ()) ;
      result.appendString (") ;\n\n") ;
      enumerator_1389.gotoNextObject () ;
      index_1389_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String options                                                   \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_2437_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_2437 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_2437.hasCurrentObject ()) {
      result.appendString ("StringCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2437.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue ()) ;
      result.appendString (" (\"") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("\",\n                                         ") ;
      result.appendString (enumerator_2437.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_2437.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_2437.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 38)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_2437.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 39)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_2437.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 40)).stringValue ()) ;
      result.appendString (") ;\n\n") ;
      enumerator_2437.gotoNextObject () ;
      index_2437_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String List options                                              \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_3533_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_3533 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_3533.hasCurrentObject ()) {
      result.appendString ("StringListCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3533.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue ()) ;
      result.appendString (" (\"") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("\",\n                                         ") ;
      result.appendString (enumerator_3533.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 50)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_3533.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_3533.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 52)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_3533.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 53)).stringValue ()) ;
      result.appendString (") ;\n\n") ;
      enumerator_3533.gotoNextObject () ;
      index_3533_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationSwiftUI'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftUI (Compiler * inCompiler,
                                                                                      const GGS_string & /* in_OPTION_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                      const GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                      const GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                      const GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                      const GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                      const GGS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nimport SwiftUI\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let SELECTED_COMPILER_TOOL_INDEX_PREFKEY = \"selected.compiler.tool.index\"\n") ;
  GGS_uint index_367_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_367 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_367.hasCurrentObject ()) {
      result.appendString ("fileprivate let ") ;
      result.appendString (enumerator_367.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY = ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 10)).add_operation (enumerator_367.current_mOptionIdentifier (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 10)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 10)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_367.gotoNextObject () ;
      index_367_.increment () ;
    }
  }
  GGS_uint index_578_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_578 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_578.hasCurrentObject ()) {
      result.appendString ("fileprivate let ") ;
      result.appendString (enumerator_578.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY = ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 13)).add_operation (enumerator_578.current_mOptionIdentifier (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 13)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 13)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_578.gotoNextObject () ;
      index_578_.increment () ;
    }
  }
  GGS_uint index_791_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_791 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_791.hasCurrentObject ()) {
      result.appendString ("fileprivate let ") ;
      result.appendString (enumerator_791.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY = ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 16)).add_operation (enumerator_791.current_mOptionIdentifier (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 16)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 16)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_791.gotoNextObject () ;
      index_791_.increment () ;
    }
  }
  GGS_uint index_1009_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_1009 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_1009.hasCurrentObject ()) {
      result.appendString ("fileprivate let ") ;
      result.appendString (enumerator_1009.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY = ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 19)).add_operation (enumerator_1009.current_mOptionIdentifier (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 19)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 19)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_1009.gotoNextObject () ;
      index_1009_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//   Options View\n//--------------------------------------------------------------------------------------------------\n\nstruct OptionView : View {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mCompilerTools : [CompilerTool] = compilerTools ()\n  @AppStorage(SELECTED_COMPILER_TOOL_INDEX_PREFKEY) private var mSelectedCompilerIndex = 0\n  @State private var mCommandLine = compilerCommandExplained ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Bool options\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_2056_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_2056 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_2056.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(") ;
      result.appendString (enumerator_2056.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) private var ") ;
      result.appendString (enumerator_2056.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (" : Bool = ") ;
      result.appendString (enumerator_2056.current_mDefaultValue (HERE).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_2056.gotoNextObject () ;
      index_2056_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // UInt options\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_2495_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_2495 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_2495.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(") ;
      result.appendString (enumerator_2495.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) private var ") ;
      result.appendString (enumerator_2495.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (" : UInt = ") ;
      result.appendString (enumerator_2495.current_mDefaultValue (HERE).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_2495.gotoNextObject () ;
      index_2495_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // String options\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_2938_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_2938 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_2938.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(") ;
      result.appendString (enumerator_2938.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) private var ") ;
      result.appendString (enumerator_2938.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (" : String = ") ;
      result.appendString (enumerator_2938.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 52)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_2938.gotoNextObject () ;
      index_2938_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // String list options\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_3434_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_3434 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_3434.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(") ;
      result.appendString (enumerator_3434.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) private var ") ;
      result.appendString (enumerator_3434.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (" : [String] = ") ;
      result.appendString (enumerator_3434.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 59)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_3434.gotoNextObject () ;
      index_3434_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Body\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @ViewBuilder var body : some View {\n    VStack {\n      HStack {\n        Picker(\"Compiler\", selection: self.$mSelectedCompilerIndex) {\n          ForEach (self.mCompilerTools, id: \\.id) { tool in\n            Text (tool.url.lastPathComponent).tag (tool.id)\n          }\n        }.pickerStyle (.automatic)\n        Spacer ()\n      }\n      ScrollView {\n        VStack (alignment: .leading) {\n") ;
  GGS_uint index_4297_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_4297 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_4297.hasCurrentObject ()) {
      result.appendString ("          Toggle (") ;
      result.appendString (enumerator_4297.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 78)).stringValue ()) ;
      result.appendString (", isOn: self.$") ;
      result.appendString (enumerator_4297.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_4297.gotoNextObject () ;
      index_4297_.increment () ;
    }
  }
  GGS_uint index_4516_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_4516 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_4516.hasCurrentObject ()) {
      result.appendString ("          HStack { Text (") ;
      result.appendString (enumerator_4516.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 81)).stringValue ()) ;
      result.appendString (") ; TextField (\"\", value: self.$") ;
      result.appendString (enumerator_4516.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (", format: .number.precision (.fractionLength (0)))\n") ;
      enumerator_4516.gotoNextObject () ;
      index_4516_.increment () ;
    }
  }
  GGS_uint index_4811_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_4811 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_4811.hasCurrentObject ()) {
      result.appendString ("          HStack { Text (") ;
      result.appendString (enumerator_4811.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (") ; TextField (\"\", text: self.$") ;
      result.appendString (enumerator_4811.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (") }\n") ;
      enumerator_4811.gotoNextObject () ;
      index_4811_.increment () ;
    }
  }
  GGS_uint index_5063_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_5063 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_5063.hasCurrentObject ()) {
      result.appendString ("          HStack { Text (") ;
      result.appendString (enumerator_5063.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 87)).stringValue ()) ;
      result.appendString (") ; TextField (\"\", text: self.$") ;
      result.appendString (enumerator_5063.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_5063.gotoNextObject () ;
      index_5063_.increment () ;
    }
  }
  result.appendString ("        }.padding ()\n      }.background (.white)\n      HStack { Text (\"Build Command\") ; Spacer () }\n      TextEditor (text: .constant (self.mCommandLine))\n      .font (.system (size: 12).monospaced())\n      .frame (height: 64)\n    }.padding ()\n    .onReceive (NotificationCenter.default.publisher (for: UserDefaults.didChangeNotification)) { _ in\n      self.mCommandLine = compilerCommandExplained ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\nprivate func compilerCommandExplained () -> String {\n  let command : CommandLineToolInvocation = commandLineToolInvocation ()\n  var result = command.tool.lastPathComponent\n  for arg in command.arguments {\n    result += \" \" + arg\n  }\n  return result\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstruct CommandLineToolInvocation {\n  let tool : URL\n  let arguments : [String]\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc commandLineToolInvocation () -> CommandLineToolInvocation {\n  let ud = UserDefaults.standard\n  let compilerTools : [CompilerTool] = compilerTools ()\n  let selectedCompilerIndex : Int = ud.integer (forKey: SELECTED_COMPILER_TOOL_INDEX_PREFKEY)\n  let tool = compilerTools [selectedCompilerIndex].url\n  var arguments = [String] ()\n") ;
  GGS_uint index_6782_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_6782 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_6782.hasCurrentObject ()) {
      result.appendString ("  if ud.bool (forKey: ") ;
      result.appendString (enumerator_6782.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) {\n    arguments.append (") ;
      result.appendString (GGS_string ("--").add_operation (enumerator_6782.current_mOptionString (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 133)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 133)).stringValue ()) ;
      result.appendString (")\n  }\n") ;
      enumerator_6782.gotoNextObject () ;
      index_6782_.increment () ;
    }
  }
  GGS_uint index_7042_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_7042 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_7042.hasCurrentObject ()) {
      result.appendString ("  do{\n    let v : Int = ud.integer (forKey: ") ;
      result.appendString (enumerator_7042.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY)\n    if v != ") ;
      result.appendString (enumerator_7042.current_mDefaultValue (HERE).stringValue ()) ;
      result.appendString (" {\n      arguments.append (") ;
      result.appendString (GGS_string ("--").add_operation (enumerator_7042.current_mOptionString (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 140)).add_operation (GGS_string ("="), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 140)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 140)).stringValue ()) ;
      result.appendString (" + String (v))\n    }\n  }\n") ;
      enumerator_7042.gotoNextObject () ;
      index_7042_.increment () ;
    }
  }
  GGS_uint index_7406_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_7406 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_7406.hasCurrentObject ()) {
      result.appendString ("  do{\n    let v : String = ud.string (forKey: ") ;
      result.appendString (enumerator_7406.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) \?\? \"\"\n    if v != ") ;
      result.appendString (enumerator_7406.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 147)).stringValue ()) ;
      result.appendString (" {\n      arguments.append (") ;
      result.appendString (GGS_string ("--").add_operation (enumerator_7406.current_mOptionString (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 148)).add_operation (GGS_string ("="), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 148)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 148)).stringValue ()) ;
      result.appendString (" + v)\n    }\n  }\n") ;
      enumerator_7406.gotoNextObject () ;
      index_7406_.increment () ;
    }
  }
  GGS_uint index_7815_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_7815 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_7815.hasCurrentObject ()) {
      result.appendString ("  do{\n    let v : String = ud.string (forKey: ") ;
      result.appendString (enumerator_7815.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) \?\? \"\"\n    if v != ") ;
      result.appendString (enumerator_7815.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 155)).stringValue ()) ;
      result.appendString (" {\n      arguments.append (") ;
      result.appendString (GGS_string ("--").add_operation (enumerator_7815.current_mOptionString (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 156)).add_operation (GGS_string ("="), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 156)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 156)).stringValue ()) ;
      result.appendString (" + v)\n    }\n  }\n") ;
      enumerator_7815.gotoNextObject () ;
      index_7815_.increment () ;
    }
  }
  result.appendString ("  return CommandLineToolInvocation (tool: tool, arguments: arguments)\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@procDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_routineSignature_6978 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  const GGS_procDeclarationAST temp_0 = this ;
  UpEnumerator_formalParameterListAST enumerator_7051 (temp_0.readProperty_mFormalArgumentListAST ()) ;
  while (enumerator_7051.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterTypeIndex_7145 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_7051.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_7145, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 183)) ;
    }
    var_routineSignature_6978.addAssignOperation (enumerator_7051.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_7145, enumerator_7051.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_7051.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 184)) ;
    enumerator_7051.gotoNextObject () ;
  }
  const GGS_procDeclarationAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mRoutineInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 191)) ;
  {
  const GGS_procDeclarationAST temp_2 = this ;
  const GGS_procDeclarationAST temp_3 = this ;
  extensionSetter_insertKey (ioArgument_ioSemanticContext.mProperty_routineMap, temp_2.readProperty_mRoutineName (), var_routineSignature_6978, temp_3.readProperty_isFilePrivate (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 193)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@procDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_routineSignature_8330 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  const GGS_procDeclarationAST temp_0 = this ;
  UpEnumerator_formalParameterListAST enumerator_8403 (temp_0.readProperty_mFormalArgumentListAST ()) ;
  while (enumerator_8403.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_8439 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_8403.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 212)) ;
    var_routineSignature_8330.addAssignOperation (enumerator_8403.current (HERE).readProperty_mFormalSelector (), var_parameterType_8439, enumerator_8403.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_8403.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 213)) ;
    enumerator_8403.gotoNextObject () ;
  }
  const GGS_procDeclarationAST temp_1 = this ;
  GGS_lstring var_mangledName_8710 = function_routineMangledName (temp_1.readProperty_mRoutineName (), var_routineSignature_8330, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 219)) ;
  GGS_lstring var_nameForUsefulness_8820 = function_procedureNameForUsefulEntitiesGraph (var_mangledName_8710, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 221)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8820, var_nameForUsefulness_8820, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 222)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_procDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_usefullProcedure ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_8820  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 224)) ;
    }
  }
  GGS_analysisContext var_analysisContext_9095 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("procedure-declaration.galgas", 231)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_instructionList_9543 ;
  GGS_formalParameterListForGeneration var_formalArgumentList_9570 ;
  {
  const GGS_procDeclarationAST temp_4 = this ;
  const GGS_procDeclarationAST temp_5 = this ;
  const GGS_procDeclarationAST temp_6 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_8820, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_9095, ioArgument_ioTypeMap, temp_4.readProperty_mFormalArgumentListAST (), temp_5.readProperty_mRoutineInstructionList (), temp_6.readProperty_mEndOfRoutineInstructionList (), var_instructionList_9543, var_formalArgumentList_9570, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 234)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("proc ").add_operation (var_mangledName_8710.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 246)), GGS_routineImplementationForGeneration::init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_bool (true), GGS_string ("proc-").add_operation (var_mangledName_8710.readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 249)), var_mangledName_8710.readProperty_string (), var_formalArgumentList_9570, GGS_bool (false), var_instructionList_9543, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 245)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@routineImplementationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                                   GGS_string & outArgument_outImplementation,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_routineImplementationForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_generateHeader ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_routineImplementationForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (temp_2.readProperty_routineMangledName ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 279))  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 279)) ;
    }
  }
  GGS_string var_code_11455 ;
  {
  const GGS_routineImplementationForGeneration temp_3 = this ;
  const GGS_routineImplementationForGeneration temp_4 = this ;
  const GGS_routineImplementationForGeneration temp_5 = this ;
  const GGS_routineImplementationForGeneration temp_6 = this ;
  routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (temp_3.readProperty_mGenerateStatic (), GGS_string ("routine_").add_operation (temp_4.readProperty_routineMangledName ().getter_identifierRepresentation (SOURCE_FILE ("procedure-declaration.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas", 283)), ioArgument_ioInclusionSet, temp_5.readProperty_mFormalArgumentList (), temp_6.readProperty_mRoutineInstructionList (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_11455, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas", 281)) ;
  }
  const GGS_routineImplementationForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, temp_7.readProperty_routineMangledName (), var_code_11455 COMMA_SOURCE_FILE ("procedure-declaration.galgas", 294))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxSignatureOfInstructionList'
//
//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration function_syntaxSignatureOfInstructionList (const GGS_string & constinArgument_inPosfix,
                                                                                    const GGS_semanticInstructionListForGeneration & constinArgument_inInstructionList,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticInstructionListForGeneration result_result ; // Returned variable
  result_result = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticInstructionListForGeneration enumerator_2040 (constinArgument_inInstructionList) ;
  while (enumerator_2040.hasCurrentObject ()) {
    callExtensionMethod_appendSyntaxSignature ((cPtr_semanticInstructionForGeneration *) enumerator_2040.current_mInstruction (HERE).ptr (), constinArgument_inPosfix, result_result, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 43)) ;
    enumerator_2040.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_syntaxSignatureOfInstructionList [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_syntaxSignatureOfInstructionList (Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_semanticInstructionListForGeneration operand1 = GGS_semanticInstructionListForGeneration::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  return function_syntaxSignatureOfInstructionList (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_syntaxSignatureOfInstructionList ("syntaxSignatureOfInstructionList",
                                                                                  functionWithGenericHeader_syntaxSignatureOfInstructionList,
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
                                                                                  2,
                                                                                  functionArgs_syntaxSignatureOfInstructionList) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'compareSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool function_compareSyntaxSignature (const GGS_semanticInstructionListForGeneration & constinArgument_inReferenceSignature,
                                          const GGS_semanticInstructionListForGeneration & constinArgument_inTestedSignature,
                                          const GGS_location & constinArgument_inErrorLocation,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_outOk ; // Returned variable
  result_outOk = GGS_bool (true) ;
  UpEnumerator_semanticInstructionListForGeneration enumerator_2924 (constinArgument_inReferenceSignature) ;
  UpEnumerator_semanticInstructionListForGeneration enumerator_2968 (constinArgument_inTestedSignature) ;
  bool bool_0 = result_outOk.isValidAndTrue () ;
  if (enumerator_2924.hasCurrentObject () && enumerator_2968.hasCurrentObject () && bool_0) {
    while (enumerator_2924.hasCurrentObject () && enumerator_2968.hasCurrentObject () && bool_0) {
      result_outOk = callExtensionGetter_compareInstructionSyntaxSignature ((const cPtr_semanticInstructionForGeneration *) enumerator_2924.current_mInstruction (HERE).ptr (), enumerator_2968.current_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 70)) ;
      enumerator_2924.gotoNextObject () ;
      enumerator_2968.gotoNextObject () ;
      if (enumerator_2924.hasCurrentObject () && enumerator_2968.hasCurrentObject ()) {
        bool_0 = result_outOk.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = result_outOk.operator_and (GGS_bool (ComparisonKind::lowerThan, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 72)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 72)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 72)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_semanticInstructionForGeneration var_instruction_3229 = constinArgument_inTestedSignature.getter_mInstructionAtIndex (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 73)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_syntaxInstructionForGeneration var_si_3322 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3229.ptr ())) ;
        if (nullptr == var_si_3322.ptr ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_si_3322.readProperty_mInstructionLocation (), GGS_string ("syntax signature error, exceeding instruction; this branch has more syntax instructions than reference branch"), fixItArray3  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 75)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 78)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = result_outOk.operator_and (GGS_bool (ComparisonKind::greaterThan, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 80)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 80)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 80)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("syntax signature error, missing instruction; this branch has less syntax instructions than reference branch"), fixItArray6  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 81)) ;
        GGS_semanticInstructionForGeneration var_instruction_3857 = constinArgument_inReferenceSignature.getter_mInstructionAtIndex (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 83)) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_syntaxInstructionForGeneration var_si_3950 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3857.ptr ())) ;
          if (nullptr == var_si_3950.ptr ()) {
            test_7 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_7) {
            GenericArray <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (var_si_3950.readProperty_mInstructionLocation (), GGS_string ("this is the syntax instruction in reference branch that corresponds to the first missing instruction"), fixItArray8  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 87)) ;
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 90)) ;
        }
      }
    }
  }
//---
  return result_outOk ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_compareSyntaxSignature [4] = {
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_compareSyntaxSignature (Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_semanticInstructionListForGeneration operand0 = GGS_semanticInstructionListForGeneration::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  const GGS_semanticInstructionListForGeneration operand1 = GGS_semanticInstructionListForGeneration::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  const GGS_location operand2 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                             inCompiler
                                                             COMMA_THERE) ;
  return function_compareSyntaxSignature (operand0,
                                          operand1,
                                          operand2,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compareSyntaxSignature ("compareSyntaxSignature",
                                                                        functionWithGenericHeader_compareSyntaxSignature,
                                                                        & kTypeDescriptor_GALGAS_bool,
                                                                        3,
                                                                        functionArgs_compareSyntaxSignature) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'targetGalgas3GenerationFileWrapper'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'makefile-arm64-linux-on-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_6 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-arm64-linux-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_6 [1] = {
  nullptr
} ;

//--- Directory 'makefile-arm64-linux-on-macosx'

const cDirectoryWrapper gWrapperDirectory_6_targetGalgas_33_GenerationFileWrapper (
  "makefile-arm64-linux-on-macosx",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_6,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_6
) ;

//--- All files of 'makefile-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_1 [1] = {
  nullptr
} ;

//--- Directory 'makefile-macosx'

const cDirectoryWrapper gWrapperDirectory_1_targetGalgas_33_GenerationFileWrapper (
  "makefile-macosx",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_1,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_1
) ;

//--- All files of 'makefile-unix' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_5 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-unix' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_5 [1] = {
  nullptr
} ;

//--- Directory 'makefile-unix'

const cDirectoryWrapper gWrapperDirectory_5_targetGalgas_33_GenerationFileWrapper (
  "makefile-unix",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_5,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_5
) ;

//--- All files of 'makefile-win32-on-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-win32-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_2 [1] = {
  nullptr
} ;

//--- Directory 'makefile-win32-on-macosx'

const cDirectoryWrapper gWrapperDirectory_2_targetGalgas_33_GenerationFileWrapper (
  "makefile-win32-on-macosx",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_2,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_2
) ;

//--- All files of 'makefile-x86linux32-on-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_8 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-x86linux32-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_8 [1] = {
  nullptr
} ;

//--- Directory 'makefile-x86linux32-on-macosx'

const cDirectoryWrapper gWrapperDirectory_8_targetGalgas_33_GenerationFileWrapper (
  "makefile-x86linux32-on-macosx",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_8,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_8
) ;

//--- All files of 'makefile-x86linux64-on-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_7 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-x86linux64-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_7 [1] = {
  nullptr
} ;

//--- Directory 'makefile-x86linux64-on-macosx'

const cDirectoryWrapper gWrapperDirectory_7_targetGalgas_33_GenerationFileWrapper (
  "makefile-x86linux64-on-macosx",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_7,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_7
) ;

//--- File 'project-xcode-swiftui/adding-icons-to-your-application.rtf'

const char * gWrapperFileContent_0_targetGalgas_33_GenerationFileWrapper = 
  "{\\rtf1\\ansi\\ansicpg1252\\cocoartf1138\\cocoasubrtf510\n"
  "{\\fonttbl\\f0\\fnil\\fcharset0 GillSans;\\f1\\fnil\\fcharset128 HiraKakuProN-W3;}\n"
  "{\\colortbl;\\red255\\green255\\blue255;}\n"
  "\\paperw11900\\paperh16840\\margl1440\\margr1440\\vieww14100\\viewh8520\\viewkind0\n"
  "\\pard\\tx566\\tx1133\\tx1700\\tx2267\\tx2834\\tx3401\\tx3968\\tx4535\\tx5102\\tx5669\\tx6236\\tx6803\\pardirnatural\n"
  "\n"
  "\\f0\\fs28 \\cf0 By default, your Cocoa application has no associated icon.\\\n"
  "\\\n"
  "For adding an icon for your application and your documents :\\\n"
  "\\\n"
  "\n"
  "\\f1\\b \\'87\\'40\n"
  "\\f0  Create an 'userResources' folder in the 'project_xcode' folder.\n"
  "\\b0 \\\n"
  "\\\n"
  "\\pard\\tx566\\tx1133\\tx1700\\tx2267\\tx2834\\tx3401\\tx3968\\tx4535\\tx5102\\tx5669\\tx6236\\tx6803\\pardirnatural\n"
  "\n"
  "\\f1\\b \\cf0 \\'87\\'41\n"
  "\\f0  For application icon : \n"
  "\\b0 add an icon file named 'application_icns.icns'.\\\n"
  "\\\n"
  "\n"
  "\\f1\\b \\'87\\'42\n"
  "\\f0  For every document type : \n"
  "\\b0 add an icon file whose name is based upon the source file extension : \n"
  "\\i 'extension\n"
  "\\i0 _icns.icns'.\\\n"
  "\\\n"
  "\\pard\\tx566\\tx1133\\tx1700\\tx2267\\tx2834\\tx3401\\tx3968\\tx4535\\tx5102\\tx5669\\tx6236\\tx6803\\pardirnatural\n"
  "\n"
  "\\b \\cf0 So :\\\n"
  "\n"
  "\\b0 \\\n"
  "\\pard\\tx566\\tx1133\\tx1700\\tx2267\\tx2834\\tx3401\\tx3968\\tx4535\\tx5102\\tx5669\\tx6236\\tx6803\\pardirnatural\n"
  "\\cf0 At the next galgas compilation, theses icons will be added automatically to the Xcode project.\\\n"
  "}" ;

const cRegularFileWrapper gWrapperFile_0_targetGalgas_33_GenerationFileWrapper (
  "adding-icons-to-your-application.rtf",
  "rtf",
  true, // Text file
 1274, // Text length
  gWrapperFileContent_0_targetGalgas_33_GenerationFileWrapper
) ;

//--- File 'Base.lproj/Credits.rtf'

const char * gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper = 
  "{\\rtf1\\mac\\ansicpg10000\\cocoartf824\\cocoasubrtf380\n"
  "{\\fonttbl\\f0\\fswiss\\fcharset77 Helvetica-Bold;}\n"
  "{\\colortbl;\\red255\\green255\\blue255;}\n"
  "\\vieww9000\\viewh8400\\viewkind0\n"
  "\\pard\\tx560\\tx1120\\tx1680\\tx2240\\tx2800\\tx3360\\tx3920\\tx4480\\tx5040\\tx5600\\tx6160\\tx6720\\ql\\qnatural\n"
  "\n"
  "\\f0\\b\\fs24 \\cf0 GALGAS Cocoa Project\\\n"
  "}\n"
   ;

const cRegularFileWrapper gWrapperFile_1_targetGalgas_33_GenerationFileWrapper (
  "Credits.rtf",
  "rtf",
  true, // Text file
 310, // Text length
  gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper
) ;

//--- All files of 'Base.lproj' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_4 [2] = {
  & gWrapperFile_1_targetGalgas_33_GenerationFileWrapper,
  nullptr
} ;

//--- All sub-directories of 'Base.lproj' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_4 [1] = {
  nullptr
} ;

//--- Directory 'Base.lproj'

const cDirectoryWrapper gWrapperDirectory_4_targetGalgas_33_GenerationFileWrapper (
  "Base.lproj",
  1,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_4,
  0,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_4
) ;

//--- All files of 'project-xcode-swiftui' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_3 [2] = {
  & gWrapperFile_0_targetGalgas_33_GenerationFileWrapper,
  nullptr
} ;

//--- All sub-directories of 'project-xcode-swiftui' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_3 [2] = {
  & gWrapperDirectory_4_targetGalgas_33_GenerationFileWrapper,
  nullptr
} ;

//--- Directory 'project-xcode-swiftui'

const cDirectoryWrapper gWrapperDirectory_3_targetGalgas_33_GenerationFileWrapper (
  "project-xcode-swiftui",
  1,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_3,
  1,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_3
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_0 [8] = {
  & gWrapperDirectory_6_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_1_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_5_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_2_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_8_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_7_targetGalgas_33_GenerationFileWrapper,
  & gWrapperDirectory_3_targetGalgas_33_GenerationFileWrapper,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_targetGalgas_33_GenerationFileWrapper (
  "",
  0,
  gWrapperAllFiles_targetGalgas_33_GenerationFileWrapper_0,
  7,
  gWrapperAllDirectories_targetGalgas_33_GenerationFileWrapper_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx (Compiler * /* inCompiler */,
                                                                                      const GGS_string & /* in_PROJECT_5F_NAME */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_macosx (Compiler * /* inCompiler */,
                                                                                      const GGS_string & in_PROJECT_5F_NAME,
                                                                                      const GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom macosx_gcc_tools import buildForMacOS\n#----------------------------------------------------------------- Build\nbuildForMacOS (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_macosx (Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_macosx (Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_macosx (Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_macosx'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_macosx (Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix (Compiler * /* inCompiler */,
                                                                                    const GGS_string & /* in_PROJECT_5F_NAME */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (Compiler * /* inCompiler */,
                                                                                    const GGS_string & in_PROJECT_5F_NAME,
                                                                                    const GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom unix_gcc_tools import buildForUnix\n#----------------------------------------------------------------- Build\nbuildForUnix (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_unix (Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_unix (Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_unix (Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_unix (Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper install_unix'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_unix (Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"install-release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                                   const GGS_string & /* in_PROJECT_5F_NAME */
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                                   const GGS_string & in_PROJECT_5F_NAME,
                                                                                                                   const GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom x86linux_on_macosx_gcc_tools_32 import buildForLinux32OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForLinux32OnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_x86linux32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n\n#-----------------------------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#-----------------------------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#-----------------------------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                                   const GGS_string & /* in_PROJECT_5F_NAME */
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                                   const GGS_string & in_PROJECT_5F_NAME,
                                                                                                                   const GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom x86linux_on_macosx_gcc_tools_64 import buildForLinux64OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForLinux64OnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_x86linux64_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                        const GGS_string & /* in_PROJECT_5F_NAME */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                        const GGS_string & in_PROJECT_5F_NAME,
                                                                                                        const GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom mingw32_on_macosx_gcc_tools import buildForWin32OnMacOSX\n#----------------------------------------------------------------- Build\nbuildForWin32OnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_win32_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_win_33__32__5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper clean_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_arm_36__34__5F_linux_5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                                 const GGS_string & /* in_PROJECT_5F_NAME */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"clean\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_arm_36__34__5F_linux_5F_on_5F_mac (Compiler * /* inCompiler */,
                                                                                                                 const GGS_string & in_PROJECT_5F_NAME,
                                                                                                                 const GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, json\n\n#---------------------------------------------------------------------------------------------------\n\n#----------------------------------------------------------------- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n#----------------------------------------------------------------- Get goal as first argument\ngoal = \"all\" # Default goal\nif len (sys.argv) > 1 :\n  goal = sys.argv [1]\n#----------------------------------------------------------------- Get max parallel jobs as second argument\nmaxParallelJobs = 0 # 0 means use host processor count\nif len (sys.argv) > 2 :\n  maxParallelJobs = int (sys.argv [2])\n#----------------------------------------------------------------- Get json description dictionary\njsonFilePath = os.path.normpath (scriptDir + \"/../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output/file-list.json\")\nwith open (jsonFilePath) as f:\n  dictionary = json.loads (f.read ())\nLIBPM_DIRECTORY_PATH = dictionary [\"LIBPM_DIRECTORY_PATH\"]\n#----------------------------------------------------------------- Import builder\nsys.path.append (os.path.abspath (LIBPM_DIRECTORY_PATH + \"/python-makefiles\"))\nfrom arm64linux_on_macosx_gcc_tools import buildForArm64LinuxOnMacOSX\n#----------------------------------------------------------------- Build\nbuildForArm64LinuxOnMacOSX (dictionary, jsonFilePath, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\", \"") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("\", goal, maxParallelJobs, maxParallelJobs == 1)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_verbose_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_arm_36__34__5F_linux_5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"all\", \"1\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_debug_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_arm_36__34__5F_linux_5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"debug\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_release_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_arm_36__34__5F_linux_5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"release\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper build_lto_arm64_linux_on_mac'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_arm_36__34__5F_linux_5F_on_5F_mac (Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/python3\n# -*- coding: UTF-8 -*-\n#---------------------------------------------------------------------------------------------------\n\nimport sys, os, subprocess, atexit\n\n#---------------------------------------------------------------------------------------------------\n\ndef cleanup():\n  if childProcess.poll () == None :\n    childProcess.kill ()\n\n#---------------------------------------------------------------------------------------------------\n\n#--- Register a function for killing subprocess\natexit.register (cleanup)\n#--- Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n#---\nchildProcess = subprocess.Popen ([\"python3\", \"build.py\", \"lto\"], cwd=scriptDir)\n#--- Wait for subprocess termination\nif childProcess.poll () == None :\n  childProcess.wait ()\nif childProcess.returncode != 0 :\n  sys.exit (childProcess.returncode)\n\n#---------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper codeblocks_project'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (Compiler * /* inCompiler */,
                                                                                            const GGS_string & in_PROJECT_5F_NAME,
                                                                                            const GGS_stringlist & in_TOOL_5F_CPP_5F_FILE_5F_LIST,
                                                                                            const GGS_string & in_LIBPM_5F_PATH,
                                                                                            const GGS_stringlist & in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST,
                                                                                            const GGS_string & in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY,
                                                                                            const GGS_bool & in_GENERATE_5F_FOR_5F_WINDOWS,
                                                                                            const GGS_string & in_PLATFORM,
                                                                                            const GGS_bool & in_VERBOSE_5F_OPTION,
                                                                                            const GGS_string & in_BUILD_5F_DIR_5F_NAME
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<\?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"yes\" \?>\n<CodeBlocks_project_file>\n <FileVersion major=\"1\" minor=\"6\" />\n <Project>\n  <Option title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" />\n  <Option pch_mode=\"0\" />\n  <Option compiler=\"gcc\" />\n  <Build>\n   <Target title=\"Release\">\n    <Option platforms=\"") ;
  result.appendString (in_PLATFORM.stringValue ()) ;
  result.appendString (";\" />\n    <Option output=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  const GalgasBool test_0 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (GGS_string (".exe").stringValue ()) ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\" prefix_auto=\"0\" extension_auto=\"0\" />\n    <Option object_output=\"objects\" />\n    <Option type=\"1\" />\n    <Option compiler=\"gcc\" />\n    <Option projectResourceIncludeDirsRelation=\"1\" />\n    <Compiler>\n     <Add option=\"-fomit-frame-pointer\" />\n     <Add option=\"-O2\" />\n     <Add option=\"-Wnon-virtual-dtor\" />\n     <Add option=\"-Winit-self\" />\n     <Add option=\"-Wredundant-decls\" />\n     <Add option=\"-Wundef\" />\n     <Add option=\"-Wmissing-include-dirs\" />\n     <Add option=\"-Weffc++\" />\n     <Add option=\"-std=c++17\" />\n     <Add option=\"-Wshadow\" />\n     <Add option=\"-Wall\" />\n     <Add option=\"-W\" />\n     <Add option=\"-DDO_NOT_GENERATE_CHECKINGS\" />\n     ") ;
  const GalgasBool test_1 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString (GGS_string ("<Add option=\"-D_WIN32_WINNT=0x501\" />\n").stringValue ()) ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    </Compiler>\n   </Target>\n   <Target title=\"Debug\">\n    <Option platforms=\"") ;
  result.appendString (in_PLATFORM.stringValue ()) ;
  result.appendString (";\" />\n    <Option output=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-debug") ;
  const GalgasBool test_2 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString (GGS_string (".exe").stringValue ()) ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\" prefix_auto=\"0\" extension_auto=\"0\" />\n    <Option object_output=\"objects_debug\" />\n    <Option deps_output=\".deps_debug\" />\n    <Option type=\"1\" />\n    <Option compiler=\"gcc\" />\n    <Option projectResourceIncludeDirsRelation=\"1\" />\n    <Compiler>\n     <Add option=\"-g\" />\n     <Add option=\"-Wnon-virtual-dtor\" />\n     <Add option=\"-Winit-self\" />\n     <Add option=\"-Wredundant-decls\" />\n     <Add option=\"-Wundef\" />\n     <Add option=\"-Winline\" />\n     <Add option=\"-Wmissing-include-dirs\" />\n     <Add option=\"-Weffc++\" />\n     <Add option=\"-std=c++17\" />\n     <Add option=\"-Wshadow\" />\n     <Add option=\"-Wall\" />\n     <Add option=\"-W\" />\n     ") ;
  const GalgasBool test_3 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString (GGS_string ("<Add option=\"-D_WIN32_WINNT=0x501\" />\n").stringValue ()) ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    </Compiler>\n   </Target>\n  </Build>\n  <VirtualTargets>\n   <Add alias=\"All\" targets=\"Release;Debug;\" />\n  </VirtualTargets>\n  <Compiler>\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/generic-arraies\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/streams\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/time\" />\n   <Add directory=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities\" />\n   <Add directory=\"../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/user-headers\" />\n   <Add directory=\"../") ;
  result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
  result.appendString ("/output\" />\n   <Add directory=\"") ;
  result.appendString (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_DIRECTORY.stringValue ()) ;
  result.appendString ("\" />\n  </Compiler>\n  <Linker>\n") ;
  const GalgasBool test_4 = in_GENERATE_5F_FOR_5F_WINDOWS.boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString (GGS_string ("   <Add option=\"-static\" />\n   <Add library=\"Comdlg32\" />\n").stringValue ()) ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  </Linker>\n") ;
  const GalgasBool test_5 = in_VERBOSE_5F_OPTION.boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("  <Unit filename=\"") ;
    result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
    result.appendString ("/galgas/C_galgas_verbose_option.cpp\" />\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("  <Unit filename=\"") ;
    result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
    result.appendString ("/galgas/C_galgas_quiet_option.cpp\" />\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  GGS_uint index_3184_ (0) ;
  if (in_TOOL_5F_CPP_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_3184 (in_TOOL_5F_CPP_5F_FILE_5F_LIST) ;
    while (enumerator_3184.hasCurrentObject ()) {
      result.appendString ("  <Unit filename=\"../") ;
      result.appendString (in_BUILD_5F_DIR_5F_NAME.stringValue ()) ;
      result.appendString ("/output/") ;
      result.appendString (enumerator_3184.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\" />\n") ;
      enumerator_3184.gotoNextObject () ;
      index_3184_.increment () ;
    }
  }
  GGS_uint index_3304_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_3304 (in_HAND_5F_CODED_5F_SOURCE_5F_TOOL_5F_FILE_5F_LIST) ;
    while (enumerator_3304.hasCurrentObject ()) {
      result.appendString ("  <Unit filename=\"../") ;
      result.appendString (enumerator_3304.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\" />\n") ;
      enumerator_3304.gotoNextObject () ;
      index_3304_.increment () ;
    }
  }
  result.appendString ("   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/AbstractCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/BoolCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/UIntCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/StringCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/StringListCommandLineOption.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/builtin-command-line-options.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/analyzeCommandLineOptions.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface/F_mainForLIBPM.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-add.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-bit.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-chunk-operations.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-constructors.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-conversions.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-divide.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-logic-operations.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-multiply.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-print.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-shifts.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-subtract.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned-utilities.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigSigned.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-add.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-bit.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-chunk-operations.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-constructors.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-conversions.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-divide-naive.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-divide.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-logic-operations.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-multiply.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-print.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-shifts.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-subtract.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/BigUnsigned-utilities.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/ChunkSharedArray.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers/UInt128.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd/BinaryDecisionDiagram.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd/BinaryDecisionDiagramRelationSingleType.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd/BinaryDecisionDiagramRelationConfiguration.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd/BinaryDecisionDiagramRelation.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files/FileManager.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files/AbstractFileHandle.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files/TextFileWrite.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files/HTMLFileWrite.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/files/BinaryFileWrite.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/streams/AbstractOutputStream.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/streams/ColoredConsole.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/streams/ConsoleOut.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings/utf32.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings/String-class-getters.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings/String-class.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings/HTMLString.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/strings/print.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/time/Timer.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/time/DateTime.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/PrologueEpilogue.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/SharedObject.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/U8Data.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/F_DisplayException.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/macroAssert.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/F_GetPrime.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/MF_MemoryControl.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/cpp-allocation.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/basic-allocation.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/UInt32Set.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/DirectedGraph.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/md5.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/SHA256.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities/galgas-random.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/C_galgas_CLI_Options.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/Compiler.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/Lexique.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/Lexique-parsing.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/LocationInSource.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/SourceTextInString.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GALGAS_TypeDescriptor.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/C_galgas_function_descriptor.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/galgas-input-output.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/C_galgas_class_inspector.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/IssueWithFixIt.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/cObjectArray.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/cCollectionElement.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/capCollectionElement.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/capCollectionElementArray.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/cGenericAbstractEnumerator.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/Enumerator_range.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/IndexingDictionary.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/IssueDescriptor.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/LexiqueIntrospection.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_root.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_reference_class.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_value_class.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_graph.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_enumAssociatedValues.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/acPtr_class.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/acStrongPtr_class.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/cPtr_weakReference_proxy.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/AC_GALGAS_weak_reference.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/cPtr_object.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/scanner_actions.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_application.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_bigint.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_binaryset.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_bool.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_char.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_data.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_double.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_filewrapper.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_function.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_location.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_sint.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_sint64.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_string.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_string-getters.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_stringset.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_type.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_object.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_uint.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_timer.cpp\" />\n   <Unit filename=\"") ;
  result.appendString (in_LIBPM_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas/GGS_uint64.cpp\" />\n  <Extensions>\n   <code_completion />\n   <envvars />\n   <debugger />\n   <lib_finder disable_auto=\"1\" />\n  </Extensions>\n </Project>\n</CodeBlocks_project_file>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_info_plist'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (Compiler * /* inCompiler */,
                                                                                                const GGS_string & in_PROJECT_5F_NAME,
                                                                                                const GGS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                                                const GGS_string & in_VERSION_5F_STRING,
                                                                                                const GGS_stringset & in_HANDLED_5F_EXTENSION_5F_SET,
                                                                                                const GGS_string & in_MACOSX_5F_DEPLOYMENT_5F_TARGET,
                                                                                                const GGS_string & /* in_DOCUMENT_5F_CLASS */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n<plist version=\"1.0\">\n<dict>\n <key>CFBundleDevelopmentRegion</key>\n <string>English</string>\n <key>CFBundleExecutable</key>\n <string>${EXECUTABLE_NAME}</string>\n <key>CFBundleIconFile</key>\n <string>application_icns</string>\n <key>CFBundleIdentifier</key>\n <string>") ;
  result.appendString (in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue ()) ;
  result.appendString (".") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</string>\n <key>CFBundleInfoDictionaryVersion</key>\n <string>6.0</string>\n <key>CFBundleName</key>\n <string>${PRODUCT_NAME}</string>\n <key>CFBundlePackageType</key>\n <string>APPL</string>\n <key>LSMinimumSystemVersion</key>\n <string>") ;
  result.appendString (in_MACOSX_5F_DEPLOYMENT_5F_TARGET.stringValue ()) ;
  result.appendString ("</string>\n <key>CFBundleShortVersionString</key>\n <string>") ;
  result.appendString (in_VERSION_5F_STRING.stringValue ()) ;
  result.appendString ("</string>\n <key>NSMainNibFile</key>\n <string>MainMenu</string>\n <key>NSPrincipalClass</key>\n <string>NSApplication</string>\n <key>CFBundleDocumentTypes</key>\n <array>\n") ;
  GGS_uint index_986_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_986 (in_HANDLED_5F_EXTENSION_5F_SET) ;
    while (enumerator_986.hasCurrentObject ()) {
      result.appendString ("  <dict>\n			<key>CFBundleTypeIconFile</key>\n			<string>") ;
      result.appendString (enumerator_986.current_key (HERE).stringValue ()) ;
      result.appendString ("_icns</string>\n      <key>CFBundleTypeIconSystemGenerated</key>\n      <integer>0</integer>\n      <key>CFBundleTypeName</key>\n      <string>") ;
      result.appendString (enumerator_986.current_key (HERE).stringValue ()) ;
      result.appendString (" Source</string>\n      <key>CFBundleTypeRole</key>\n      <string>Editor</string>\n      <key>LSHandlerRank</key>\n      <string>Default</string>\n      <key>LSItemContentTypes</key>\n      <array>\n        <string>$(PRODUCT_BUNDLE_IDENTIFIER).") ;
      result.appendString (enumerator_986.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n      </array>\n  </dict>\n") ;
      enumerator_986.gotoNextObject () ;
      index_986_.increment () ;
    }
  }
  result.appendString ("\n </array>\n <key>UTExportedTypeDeclarations</key>\n <array>\n") ;
  GGS_uint index_1575_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_1575 (in_HANDLED_5F_EXTENSION_5F_SET) ;
    while (enumerator_1575.hasCurrentObject ()) {
      result.appendString ("  <dict>\n    <key>UTTypeConformsTo</key>\n    <array>\n      <string>public.text</string>\n    </array>\n    <key>UTTypeDescription</key>\n    <string>") ;
      result.appendString (enumerator_1575.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n    <key>UTTypeIcons</key>\n    <dict>\n      <key>UTTypeIconBadgeName</key>\n      <string>") ;
      result.appendString (enumerator_1575.current_key (HERE).stringValue ()) ;
      result.appendString ("_icns</string>\n    </dict>\n    <key>UTTypeIdentifier</key>\n    <string>$(PRODUCT_BUNDLE_IDENTIFIER).") ;
      result.appendString (enumerator_1575.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n    <key>UTTypeTagSpecification</key>\n    <dict>\n      <key>public.filename-extension</key>\n      <array>\n        <string>") ;
      result.appendString (enumerator_1575.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n      </array>\n    </dict>\n  </dict>\n") ;
      enumerator_1575.gotoNextObject () ;
      index_1575_.increment () ;
    }
  }
  result.appendString ("\n </array>\n</dict>\n</plist>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_build_xcode'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#!/bin/sh\ncd `dirname $0` && xcodebuild -alltargets -configuration Default\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper makefile_info_plist_strings'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (Compiler * /* inCompiler */,
                                                                                                           const GGS_string & /* in_PROJECT_5F_NAME */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("/* Localized versions of Info.plist keys */\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper json_file_list'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_json_5F_file_5F_list (Compiler * /* inCompiler */,
                                                                                           const GGS_stringset & in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET,
                                                                                           const GGS_stringlist & in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST,
                                                                                           const GGS_stringlist & in_MAKEFILE_5F_FILE_5F_LIST,
                                                                                           const GGS_stringlist & in_TOOL_5F_LINK_5F_LIST,
                                                                                           const GGS_string & in_LIBPM_5F_DIRECTORY_5F_PATH,
                                                                                           const GGS_string & in_RELATIVE_5F_BUILD_5F_DIR
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("{   \"LIBPM_DIRECTORY_PATH\" : \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("\",\n    \"SOURCES_DIR\"  :  [\"../") ;
  result.appendString (in_RELATIVE_5F_BUILD_5F_DIR.stringValue ()) ;
  result.appendString ("/output\",\n                       \"../") ;
  result.appendString (in_RELATIVE_5F_BUILD_5F_DIR.stringValue ()) ;
  result.appendString ("/user-headers\",\n                       \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/bdd\",\n                       \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/big-integers\",\n                       \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/command_line_interface\",\n                       \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/files\",\n                       \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/galgas\",\n                       \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/generic-arraies\",\n                       \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/streams\",\n                       \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/strings\",\n                       \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/time\",\n                       \"") ;
  result.appendString (in_LIBPM_5F_DIRECTORY_5F_PATH.stringValue ()) ;
  result.appendString ("/utilities\"") ;
  GGS_uint index_821_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_821 (in_HAND_5F_CODED_5F_SOURCE_5F_DIR_5F_SET) ;
    while (enumerator_821.hasCurrentObject ()) {
      result.appendString (",\n                       \"") ;
      result.appendString (enumerator_821.current_key (HERE).stringValue ()) ;
      result.appendString ("\"") ;
      enumerator_821.gotoNextObject () ;
      index_821_.increment () ;
    }
  }
  result.appendString ("],\n    \"SOURCES\"  :  [\n") ;
  GGS_uint index_934_ (0) ;
  if (in_MAKEFILE_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_934 (in_MAKEFILE_5F_FILE_5F_LIST) ;
    while (enumerator_934.hasCurrentObject ()) {
      result.appendString ("        \"") ;
      result.appendString (enumerator_934.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\",\n") ;
      enumerator_934.gotoNextObject () ;
      index_934_.increment () ;
    }
  }
  GGS_uint index_1018_ (0) ;
  if (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_1018 (in_HAND_5F_CODED_5F_SOURCE_5F_FILE_5F_LIST) ;
    while (enumerator_1018.hasCurrentObject ()) {
      result.appendString ("        \"") ;
      result.appendString (enumerator_1018.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\",\n") ;
      enumerator_1018.gotoNextObject () ;
      index_1018_.increment () ;
    }
  }
  result.appendString ("       \"AbstractCommandLineOption.cpp\",\n       \"BoolCommandLineOption.cpp\",\n       \"UIntCommandLineOption.cpp\",\n       \"StringCommandLineOption.cpp\",\n       \"StringListCommandLineOption.cpp\",\n       \"builtin-command-line-options.cpp\",\n       \"analyzeCommandLineOptions.cpp\",\n       \"F_mainForLIBPM.cpp\",\n       \"BinaryDecisionDiagram.cpp\",\n       \"BinaryDecisionDiagramRelationSingleType.cpp\",\n       \"BinaryDecisionDiagramRelationConfiguration.cpp\",\n       \"BinaryDecisionDiagramRelation.cpp\",\n       \"FileManager.cpp\",\n       \"AbstractFileHandle.cpp\",\n       \"TextFileWrite.cpp\",\n       \"HTMLFileWrite.cpp\",\n       \"BinaryFileWrite.cpp\",\n       \"AbstractOutputStream.cpp\",\n       \"ColoredConsole.cpp\",\n       \"ConsoleOut.cpp\",\n       \"utf32.cpp\",\n       \"String-class-getters.cpp\",\n       \"String-class.cpp\",\n       \"HTMLString.cpp\",\n       \"print.cpp\",\n       \"Timer.cpp\",\n       \"DateTime.cpp\",\n       \"PrologueEpilogue.cpp\",\n       \"SharedObject.cpp\",\n       \"BigSigned-add.cpp\",\n       \"BigSigned-bit.cpp\",\n       \"BigSigned-chunk-operations.cpp\",\n       \"BigSigned-constructors.cpp\",\n       \"BigSigned-conversions.cpp\",\n       \"BigSigned-divide.cpp\",\n       \"BigSigned-logic-operations.cpp\",\n       \"BigSigned-multiply.cpp\",\n       \"BigSigned-print.cpp\",\n       \"BigSigned-shifts.cpp\",\n       \"BigSigned-subtract.cpp\",\n       \"BigSigned-utilities.cpp\",\n       \"BigSigned.cpp\",\n       \"BigUnsigned-add.cpp\",\n       \"BigUnsigned-bit.cpp\",\n       \"BigUnsigned-chunk-operations.cpp\",\n       \"BigUnsigned-constructors.cpp\",\n       \"BigUnsigned-conversions.cpp\",\n       \"BigUnsigned-divide-naive.cpp\",\n       \"BigUnsigned-divide.cpp\",\n       \"BigUnsigned-logic-operations.cpp\",\n       \"BigUnsigned-multiply.cpp\",\n       \"BigUnsigned-print.cpp\",\n       \"BigUnsigned-shifts.cpp\",\n       \"BigUnsigned-subtract.cpp\",\n       \"BigUnsigned-utilities.cpp\",\n       \"ChunkSharedArray.cpp\",\n       \"UInt128.cpp\",\n       \"U8Data.cpp\",\n       \"F_DisplayException.cpp\",\n       \"macroAssert.cpp\",\n       \"F_GetPrime.cpp\",\n       \"MF_MemoryControl.cpp\",\n       \"cpp-allocation.cpp\",\n       \"basic-allocation.cpp\",\n       \"UInt32Set.cpp\",\n       \"DirectedGraph.cpp\",\n       \"md5.cpp\",\n       \"SHA256.cpp\",\n       \"galgas-random.cpp\",\n       \"C_galgas_CLI_Options.cpp\",\n       \"Compiler.cpp\",\n       \"Lexique.cpp\",\n       \"Lexique-parsing.cpp\",\n       \"LocationInSource.cpp\",\n       \"SourceTextInString.cpp\",\n       \"GALGAS_TypeDescriptor.cpp\",\n       \"C_galgas_function_descriptor.cpp\",\n       \"galgas-input-output.cpp\",\n       \"C_galgas_class_inspector.cpp\",\n       \"IssueWithFixIt.cpp\",\n       \"cObjectArray.cpp\",\n       \"cCollectionElement.cpp\",\n       \"capCollectionElement.cpp\",\n       \"capCollectionElementArray.cpp\",\n       \"cGenericAbstractEnumerator.cpp\",\n       \"Enumerator_range.cpp\",\n       \"IndexingDictionary.cpp\",\n       \"IssueDescriptor.cpp\",\n       \"LexiqueIntrospection.cpp\",\n       \"AC_GALGAS_root.cpp\",\n       \"AC_GALGAS_reference_class.cpp\",\n       \"AC_GALGAS_value_class.cpp\",\n       \"AC_GALGAS_graph.cpp\",\n       \"AC_GALGAS_enumAssociatedValues.cpp\",\n       \"acPtr_class.cpp\",\n       \"acStrongPtr_class.cpp\",\n       \"cPtr_weakReference_proxy.cpp\",\n       \"AC_GALGAS_weak_reference.cpp\",\n       \"cPtr_object.cpp\",\n       \"scanner_actions.cpp\",\n       \"GGS_application.cpp\",\n       \"GGS_bigint.cpp\",\n       \"GGS_binaryset.cpp\",\n       \"GGS_bool.cpp\",\n       \"GGS_char.cpp\",\n       \"GGS_data.cpp\",\n       \"GGS_double.cpp\",\n       \"GGS_filewrapper.cpp\",\n       \"GGS_function.cpp\",\n       \"GGS_location.cpp\",\n       \"GGS_sint.cpp\",\n       \"GGS_sint64.cpp\",\n       \"GGS_string.cpp\",\n       \"GGS_string-getters.cpp\",\n       \"GGS_stringset.cpp\",\n       \"GGS_type.cpp\",\n       \"GGS_object.cpp\",\n       \"GGS_uint.cpp\",\n       \"GGS_timer.cpp\",\n       \"GGS_uint64.cpp\"\n    ],\n    \"USER_LINK_OPTIONS\"  :  [") ;
  GGS_uint index_4895_ (0) ;
  if (in_TOOL_5F_LINK_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_4895 (in_TOOL_5F_LINK_5F_LIST) ;
    while (enumerator_4895.hasCurrentObject ()) {
      result.appendString ("\n        \"") ;
      result.appendString (enumerator_4895.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\"") ;
      enumerator_4895.gotoNextObject () ;
      if (enumerator_4895.hasCurrentObject ()) {
        result.appendString (",") ;
      }
      index_4895_.increment () ;
    }
  }
  result.appendString ("\n    ]\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'targetGalgas3GenerationFileWrapper project_header'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_project_5F_header (Compiler * /* inCompiler */,
                                                                                        const GGS_string & in_VERSION_5F_STRING
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//     Project common header file                                                                \n//\n//--------------------------------------------------------------------------------------------------\n\n#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#define PROJECT_VERSION_STRING \"") ;
  result.appendString (in_VERSION_5F_STRING.stringValue ()) ;
  result.appendString ("\"\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksWindowsTarget??buildDirName???libpmPath???'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksWindowsTarget_3F__3F_buildDirName_3F__3F__3F_libpmPath_3F__3F__3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                                         const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                         const GGS_string constinArgument_inProjectName,
                                                                                                         const GGS_stringlist constinArgument_inToolCppFileList,
                                                                                                         const GGS_string constinArgument_inLIBPMpath,
                                                                                                         const GGS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                                                                         const GGS_string constinArgument_inHandCodedSourceDirectory,
                                                                                                         const GGS_bool constinArgument_inVerboseOption,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_6721 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-windows"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 114)) ;
  var_dir_6721.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 115)) ;
  GGS_string var_s_6814 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, GGS_bool (true), GGS_string ("Windows"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 116))) ;
  GGS_bool joker_7206 ; // Joker input parameter
  var_s_6814.method_writeToFileWhenDifferentContents (var_dir_6721.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 127)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 127)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 127)), joker_7206, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 127)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksLinuxI686Target??buildDirName??????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                                           const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                           const GGS_string constinArgument_inProjectName,
                                                                                                           const GGS_stringlist constinArgument_inToolCppFileList,
                                                                                                           const GGS_string constinArgument_inLIBPMpath,
                                                                                                           const GGS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                                                                           const GGS_string constinArgument_inHandCodedSourceDirectory,
                                                                                                           const GGS_bool constinArgument_inVerboseOption,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_7682 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-linux32"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 142)) ;
  var_dir_7682.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 143)) ;
  GGS_string var_s_7775 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, GGS_bool (false), GGS_string ("Unix"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 144))) ;
  GGS_bool joker_8165 ; // Joker input parameter
  var_s_7775.method_writeToFileWhenDifferentContents (var_dir_7682.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 155)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 155)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 155)), joker_8165, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 155)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateGalgasCodeBlocksLinuxX86_64Target??buildDirName??????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                                                   const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                                   const GGS_string constinArgument_inProjectName,
                                                                                                                   const GGS_stringlist constinArgument_inToolCppFileList,
                                                                                                                   const GGS_string constinArgument_inLIBPMpath,
                                                                                                                   const GGS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                                                                                   const GGS_string constinArgument_inHandCodedSourceDirectory,
                                                                                                                   const GGS_bool constinArgument_inVerboseOption,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_8642 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/project-codeblocks-linux64"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 170)) ;
  var_dir_8642.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 171)) ;
  GGS_string var_s_8735 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_codeblocks_5F_project (inCompiler, constinArgument_inProjectName, constinArgument_inToolCppFileList, constinArgument_inLIBPMpath, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, GGS_bool (false), GGS_string ("Unix"), constinArgument_inVerboseOption, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 172))) ;
  GGS_bool joker_9125 ; // Joker input parameter
  var_s_8735.method_writeToFileWhenDifferentContents (var_dir_8642.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 183)).add_operation (constinArgument_inProjectName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 183)).add_operation (GGS_string (".cbp"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 183)), joker_9125, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 183)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileMinGWOnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileMinGWOnMacOSXTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                          const GGS_string constinArgument_inBuildDirectoryName,
                                                                          const GGS_string constinArgument_inProjectName,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_9412 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-win32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 192)) ;
  var_dir_9412.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 193)) ;
  GGS_bool joker_9658 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 194))).method_writeToExecutableFileWhenDifferentContents (var_dir_9412.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 194)), joker_9658, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 194)) ;
  GGS_bool joker_9810 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 195))).method_writeToExecutableFileWhenDifferentContents (var_dir_9412.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 195)), joker_9810, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 195)) ;
  GGS_bool joker_9954 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 196))).method_writeToExecutableFileWhenDifferentContents (var_dir_9412.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 196)), joker_9954, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 196)) ;
  GGS_bool joker_10102 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 197))).method_writeToExecutableFileWhenDifferentContents (var_dir_9412.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 197)), joker_10102, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 197)) ;
  GGS_bool joker_10254 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_win_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 198))).method_writeToExecutableFileWhenDifferentContents (var_dir_9412.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 198)), joker_10254, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 198)) ;
  GGS_bool joker_10413 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_win_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 199))).method_writeToExecutableFileWhenDifferentContents (var_dir_9412.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 200)), joker_10413, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 199)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_9412.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 203)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileUnixTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileUnixTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                 const GGS_string constinArgument_inBuildDirectoryName,
                                                                 const GGS_string constinArgument_inProjectName,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_10744 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-unix"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 212)) ;
  var_dir_10744.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 213)) ;
  GGS_bool joker_10971 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_unix (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 214))).method_writeToExecutableFileWhenDifferentContents (var_dir_10744.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 214)), joker_10971, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 214)) ;
  GGS_bool joker_11115 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 215))).method_writeToExecutableFileWhenDifferentContents (var_dir_10744.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 215)), joker_11115, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 215)) ;
  GGS_bool joker_11251 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 216))).method_writeToExecutableFileWhenDifferentContents (var_dir_10744.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 216)), joker_11251, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 216)) ;
  GGS_bool joker_11391 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 217))).method_writeToExecutableFileWhenDifferentContents (var_dir_10744.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 217)), joker_11391, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 217)) ;
  GGS_bool joker_11535 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 218))).method_writeToExecutableFileWhenDifferentContents (var_dir_10744.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 218)), joker_11535, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 218)) ;
  GGS_bool joker_11667 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_install_5F_unix (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 219))).method_writeToExecutableFileWhenDifferentContents (var_dir_10744.add_operation (GGS_string ("/install.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 219)), joker_11667, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 219)) ;
  GGS_bool joker_11810 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_unix (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 220))).method_writeToExecutableFileWhenDifferentContents (var_dir_10744.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 220)), joker_11810, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 220)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_10744.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 221)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileMacTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileMacTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                const GGS_string constinArgument_inBuildDirectoryName,
                                                                const GGS_string constinArgument_inProjectName,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_12137 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 230)) ;
  var_dir_12137.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 231)) ;
  GGS_bool joker_12368 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_macosx (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 232))).method_writeToExecutableFileWhenDifferentContents (var_dir_12137.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 232)), joker_12368, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 232)) ;
  GGS_bool joker_12514 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 233))).method_writeToExecutableFileWhenDifferentContents (var_dir_12137.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 233)), joker_12514, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 233)) ;
  GGS_bool joker_12652 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 234))).method_writeToExecutableFileWhenDifferentContents (var_dir_12137.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 234)), joker_12652, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 234)) ;
  GGS_bool joker_12794 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 235))).method_writeToExecutableFileWhenDifferentContents (var_dir_12137.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 235)), joker_12794, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 235)) ;
  GGS_bool joker_12940 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_macosx (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 236))).method_writeToExecutableFileWhenDifferentContents (var_dir_12137.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 236)), joker_12940, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 236)) ;
  GGS_bool joker_13085 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_macosx (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 237))).method_writeToExecutableFileWhenDifferentContents (var_dir_12137.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 237)), joker_13085, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 237)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_12137.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 238)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileLinux32OnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileLinux_33__32_OnMacOSXTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                  const GGS_string constinArgument_inBuildDirectoryName,
                                                                                  const GGS_string constinArgument_inProjectName,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_13424 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-x86linux32-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 247)) ;
  var_dir_13424.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 248)) ;
  GGS_bool joker_13680 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 249))).method_writeToExecutableFileWhenDifferentContents (var_dir_13424.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 249)), joker_13680, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 249)) ;
  GGS_bool joker_13837 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 250))).method_writeToExecutableFileWhenDifferentContents (var_dir_13424.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 250)), joker_13837, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 250)) ;
  GGS_bool joker_13986 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 251))).method_writeToExecutableFileWhenDifferentContents (var_dir_13424.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 251)), joker_13986, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 251)) ;
  GGS_bool joker_14139 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 252))).method_writeToExecutableFileWhenDifferentContents (var_dir_13424.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 252)), joker_14139, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 252)) ;
  GGS_bool joker_14296 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 253))).method_writeToExecutableFileWhenDifferentContents (var_dir_13424.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 253)), joker_14296, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 253)) ;
  GGS_bool joker_14452 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_33__32__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 254))).method_writeToExecutableFileWhenDifferentContents (var_dir_13424.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 254)), joker_14452, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 254)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_13424.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 255)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateMakefileLinux64OnMacOSXTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateMakefileLinux_36__34_OnMacOSXTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                                  const GGS_string constinArgument_inBuildDirectoryName,
                                                                                  const GGS_string constinArgument_inProjectName,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_14791 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-x86linux64-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 264)) ;
  var_dir_14791.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 265)) ;
  GGS_bool joker_15047 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 266))).method_writeToExecutableFileWhenDifferentContents (var_dir_14791.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 266)), joker_15047, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 266)) ;
  GGS_bool joker_15204 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 267))).method_writeToExecutableFileWhenDifferentContents (var_dir_14791.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 267)), joker_15204, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 267)) ;
  GGS_bool joker_15353 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 268))).method_writeToExecutableFileWhenDifferentContents (var_dir_14791.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 268)), joker_15353, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 268)) ;
  GGS_bool joker_15506 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 269))).method_writeToExecutableFileWhenDifferentContents (var_dir_14791.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 269)), joker_15506, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 269)) ;
  GGS_bool joker_15663 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 270))).method_writeToExecutableFileWhenDifferentContents (var_dir_14791.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 270)), joker_15663, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 270)) ;
  GGS_bool joker_15819 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_x_38__36_linux_36__34__5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 271))).method_writeToExecutableFileWhenDifferentContents (var_dir_14791.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 271)), joker_15819, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 271)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_14791.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 272)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateArm64LinuxMakefileTarget??buildDirName?'
//
//--------------------------------------------------------------------------------------------------

void routine_generateArm_36__34_LinuxMakefileTarget_3F__3F_buildDirName_3F_ (const GGS_string constinArgument_inProjectDirectory,
                                                                             const GGS_string constinArgument_inBuildDirectoryName,
                                                                             const GGS_string constinArgument_inProjectName,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_dir_16239 = constinArgument_inProjectDirectory.add_operation (GGS_string ("/makefile-arm64-linux-on-macosx"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 280)) ;
  var_dir_16239.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 281)) ;
  GGS_bool joker_16497 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler, constinArgument_inProjectName, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 282))).method_writeToExecutableFileWhenDifferentContents (var_dir_16239.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 282)), joker_16497, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 282)) ;
  GGS_bool joker_16655 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_release_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 283))).method_writeToExecutableFileWhenDifferentContents (var_dir_16239.add_operation (GGS_string ("/build+release.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 283)), joker_16655, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 283)) ;
  GGS_bool joker_16805 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_lto_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 284))).method_writeToExecutableFileWhenDifferentContents (var_dir_16239.add_operation (GGS_string ("/build+lto.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 284)), joker_16805, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 284)) ;
  GGS_bool joker_16959 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_debug_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 285))).method_writeToExecutableFileWhenDifferentContents (var_dir_16239.add_operation (GGS_string ("/build+debug.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 285)), joker_16959, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 285)) ;
  GGS_bool joker_17117 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_build_5F_verbose_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 286))).method_writeToExecutableFileWhenDifferentContents (var_dir_16239.add_operation (GGS_string ("/verbose-build.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 286)), joker_17117, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 286)) ;
  GGS_bool joker_17274 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_clean_5F_arm_36__34__5F_linux_5F_on_5F_mac (inCompiler, constinArgument_inProjectName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 287))).method_writeToExecutableFileWhenDifferentContents (var_dir_16239.add_operation (GGS_string ("/clean.py"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 287)), joker_17274, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 287)) ;
  {
  GGS_string::class_method_deleteFileIfExists (var_dir_16239.add_operation (GGS_string ("/makefile"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 288)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'updateGalgasTargets?absoluteBuildDir?buildDirName??????????appProductFileList?swiftAppProductFileList????&?'
//
//--------------------------------------------------------------------------------------------------

void routine_updateGalgasTargets_3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F_appProductFileList_3F_swiftAppProductFileList_3F__3F__3F__3F__26__3F_ (const GGS_string constinArgument_inAbsoluteBuildDirectory,
                                                                                                                                                                                   const GGS_string constinArgument_inBuildDirectoryName,
                                                                                                                                                                                   const GGS_string constinArgument_inProjectSourceFilePath,
                                                                                                                                                                                   const GGS_string constinArgument_inTargetName,
                                                                                                                                                                                   const GGS_location /* constinArgument_inEndOfProjectSourceFile */,
                                                                                                                                                                                   const GGS_string constinArgument_inProjectVersionString,
                                                                                                                                                                                   const GGS_projectQualifiedFeatureMap constinArgument_inProjectQualifiedFeatureMap,
                                                                                                                                                                                   const GGS_lstringlist constinArgument_inTargetFeatureList,
                                                                                                                                                                                   const GGS_bool constinArgument_inQuietOutputByDefault,
                                                                                                                                                                                   const GGS_stringlist constinArgument_inToolCppFileList,
                                                                                                                                                                                   const GGS_stringlist constinArgument_inToolHeaderFileList,
                                                                                                                                                                                   const GGS_stringlist constinArgument_inAppProductFileList,
                                                                                                                                                                                   const GGS_stringlist constinArgument_inSwiftAppProductFileList,
                                                                                                                                                                                   const GGS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                                                                                                                                                   const GGS_stringlist constinArgument_inFrameworkToolFileList,
                                                                                                                                                                                   const GGS_string constinArgument_inHandCodedSourceDirectory,
                                                                                                                                                                                   const GGS_stringset constinArgument_inHandledExtensionSet,
                                                                                                                                                                                   GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                                                                                                                                   const GGS_stringlist constinArgument_inHandCodedLinkAppFileList,
                                                                                                                                                                                   Compiler * inCompiler
                                                                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioAllProductFileSet.plusAssignOperation(GGS_stringset::class_func_setWithStringList (constinArgument_inSwiftAppProductFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 320)) ;
  GGS_string var_projectDirectory_18569 = constinArgument_inProjectSourceFilePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 321)) ;
  GGS_bool joker_18861 ; // Joker input parameter
  GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_project_5F_header (inCompiler, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 323))).method_writeToFileWhenDifferentContents (constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/project_header.h"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 324)), joker_18861, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 323)) ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("project_header.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 327)) ;
  GGS_stringlist var_toolCppFileList_19002 = constinArgument_inToolCppFileList ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inQuietOutputByDefault.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_toolCppFileList_19002.addAssignOperation (GGS_string ("C_galgas_verbose_option.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 331)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_toolCppFileList_19002.addAssignOperation (GGS_string ("C_galgas_quiet_option.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 333)) ;
  }
  GGS_lstring var_macCodeSign_19278 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_projectQualifiedFeatureMap_2E_element var_entry_19299 = constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("macCodeSign"), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("macCodeSign"), inCompiler COMMA_HERE).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, var_entry_19299.readProperty_mFeatureValue ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_entry_19299.readProperty_mFeatureValue ().readProperty_location (), GGS_string ("the %macCodeSign attribute should not be empty"), fixItArray3  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 339)) ;
          var_macCodeSign_19278.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        var_macCodeSign_19278 = var_entry_19299.readProperty_mFeatureValue () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    var_macCodeSign_19278 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasTargetGeneration.galgas", 344)) ;
  }
  GGS_string var_MACOSX_5F_DEPLOYMENT_5F_TARGET_19680 = GGS_string ("14.6") ;
  GGS_string var_libpmPath_19800 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_projectQualifiedFeatureMap_2E_element var_entry_19819 = constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("libpmAtPath"), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("libpmAtPath"), inCompiler COMMA_HERE).isValuated ()) {
      test_4 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, var_entry_19819.readProperty_mFeatureValue ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (var_entry_19819.readProperty_mFeatureValue ().readProperty_location (), GGS_string ("the libpm path should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 352)) ;
          var_libpmPath_19800.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        var_libpmPath_19800 = var_entry_19819.readProperty_mFeatureValue ().readProperty_string () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    {
    routine_updateLIBPMatPath_3F_ (constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 357)) ;
    }
    var_libpmPath_19800 = GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 358)).add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 358)) ;
  }
  GGS_stringset var_availableGenerationFeatures_20351 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_availableGenerationFeatures_20351.plusPlusAssignOperation (GGS_string ("quietOutputByDefault")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 363)) ;
  var_availableGenerationFeatures_20351.plusPlusAssignOperation (GGS_string ("codeblocks-windows")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 364)) ;
  var_availableGenerationFeatures_20351.plusPlusAssignOperation (GGS_string ("codeblocks-linux32")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 365)) ;
  var_availableGenerationFeatures_20351.plusPlusAssignOperation (GGS_string ("codeblocks-linux64")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 366)) ;
  var_availableGenerationFeatures_20351.plusPlusAssignOperation (GGS_string ("makefile-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 367)) ;
  var_availableGenerationFeatures_20351.plusPlusAssignOperation (GGS_string ("makefile-unix")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 368)) ;
  var_availableGenerationFeatures_20351.plusPlusAssignOperation (GGS_string ("makefile-x86linux32-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 369)) ;
  var_availableGenerationFeatures_20351.plusPlusAssignOperation (GGS_string ("makefile-x86linux64-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 370)) ;
  var_availableGenerationFeatures_20351.plusPlusAssignOperation (GGS_string ("makefile-arm64-linux-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 371)) ;
  var_availableGenerationFeatures_20351.plusPlusAssignOperation (GGS_string ("makefile-win32-on-macosx")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 372)) ;
  var_availableGenerationFeatures_20351.plusPlusAssignOperation (GGS_string ("MacOS")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 373)) ;
  var_availableGenerationFeatures_20351.plusPlusAssignOperation (GGS_string ("MacSwiftApp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 374)) ;
  GGS_stringset var_generationFeatures_21076 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_xcodeProject var_xcodeProject_21146 = GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas", 377)) ;
  UpEnumerator_lstringlist enumerator_21187 (constinArgument_inTargetFeatureList) ;
  while (enumerator_21187.hasCurrentObject ()) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = var_availableGenerationFeatures_20351.getter_hasKey (enumerator_21187.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 379)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = var_generationFeatures_21076.getter_hasKey (enumerator_21187.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 380)).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_21187.current_mValue (HERE).readProperty_location (), GGS_string ("duplicate '").add_operation (enumerator_21187.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 381)).add_operation (GGS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 381)), fixItArray9  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 381)) ;
          }
        }
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = GGS_bool (ComparisonKind::equal, enumerator_21187.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string ("MacSwiftApp"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::notEqual, var_xcodeProject_21146.objectCompare (GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas", 385)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                GenericArray <FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_21187.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated XCode setting"), fixItArray12  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 386)) ;
              }
            }
            var_xcodeProject_21146 = GGS_xcodeProject::class_func_swiftApp (SOURCE_FILE ("galgasTargetGeneration.galgas", 388)) ;
          }
        }
        if (GalgasBool::boolFalse == test_10) {
          var_generationFeatures_21076.plusPlusAssignOperation (enumerator_21187.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 390)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      GGS_stringlist var_s_21694 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      UpEnumerator_stringset enumerator_21713 (var_availableGenerationFeatures_20351) ;
      while (enumerator_21713.hasCurrentObject ()) {
        var_s_21694.addAssignOperation (GGS_string ("%").add_operation (enumerator_21713.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 395))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 395)) ;
        enumerator_21713.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray13 ;
      appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, var_s_21694) ;
      inCompiler->emitSemanticError (enumerator_21187.current_mValue (HERE).readProperty_location (), GGS_string ("unknown '").add_operation (enumerator_21187.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 397)).add_operation (GGS_string ("' feature"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 397)), fixItArray13  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 397)) ;
    }
    enumerator_21187.gotoNextObject () ;
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    GGS_bool test_15 = GGS_bool (ComparisonKind::notEqual, var_macCodeSign_19278.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
    if (GalgasBool::boolTrue == test_15.boolEnum ()) {
      test_15 = GGS_bool (ComparisonKind::equal, var_xcodeProject_21146.objectCompare (GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas", 401)))) ;
    }
    test_14 = test_15.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (var_macCodeSign_19278.readProperty_location (), GGS_string ("the %macCodeSign attribute implies the definition of an OS X target system: \"%MacSwiftApp\""), fixItArray16  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 402)) ;
    }
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::notEqual, var_xcodeProject_21146.objectCompare (GGS_xcodeProject::class_func_none (SOURCE_FILE ("galgasTargetGeneration.galgas", 406)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      test_17 = constinArgument_inProjectQualifiedFeatureMap.getter_hasKey (GGS_string ("applicationBundleBase") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 406)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 406)).boolEnum () ;
      if (GalgasBool::boolTrue == test_17) {
        GenericArray <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticWarning (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 407)), GGS_string ("For a MacOS target, the \"applicationBundleBase\" feature should be set; for example: '%applicationBundleBase : \"fr.what\" ;'"), fixItArray18  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 407)) ;
      }
    }
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = var_generationFeatures_21076.getter_hasKey (GGS_string ("makefile-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 410)).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      {
      routine_generateMakefileMacTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 411)) ;
      }
    }
  }
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = var_generationFeatures_21076.getter_hasKey (GGS_string ("makefile-unix") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 413)).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      {
      routine_generateMakefileUnixTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 414)) ;
      }
    }
  }
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    test_21 = var_generationFeatures_21076.getter_hasKey (GGS_string ("makefile-x86linux32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 416)).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      {
      routine_generateMakefileLinux_33__32_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 417)) ;
      }
    }
  }
  GalgasBool test_22 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_22) {
    test_22 = var_generationFeatures_21076.getter_hasKey (GGS_string ("makefile-x86linux64-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 419)).boolEnum () ;
    if (GalgasBool::boolTrue == test_22) {
      {
      routine_generateMakefileLinux_36__34_OnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 420)) ;
      }
    }
  }
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    test_23 = var_generationFeatures_21076.getter_hasKey (GGS_string ("makefile-arm64-linux-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 422)).boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      {
      routine_generateArm_36__34_LinuxMakefileTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 423)) ;
      }
    }
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = var_generationFeatures_21076.getter_hasKey (GGS_string ("makefile-win32-on-macosx") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 425)).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      {
      routine_generateMakefileMinGWOnMacOSXTarget_3F__3F_buildDirName_3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 426)) ;
      }
    }
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    test_25 = var_generationFeatures_21076.getter_hasKey (GGS_string ("codeblocks-windows") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 428)).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      {
      routine_generateGalgasCodeBlocksWindowsTarget_3F__3F_buildDirName_3F__3F__3F_libpmPath_3F__3F__3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_19800, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 429)) ;
      }
    }
  }
  GalgasBool test_26 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_26) {
    test_26 = var_generationFeatures_21076.getter_hasKey (GGS_string ("codeblocks-linux32") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 440)).boolEnum () ;
    if (GalgasBool::boolTrue == test_26) {
      {
      routine_generateGalgasCodeBlocksLinuxI_36__38__36_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_19800, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 441)) ;
      }
    }
  }
  GalgasBool test_27 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_27) {
    test_27 = var_generationFeatures_21076.getter_hasKey (GGS_string ("codeblocks-linux64") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 452)).boolEnum () ;
    if (GalgasBool::boolTrue == test_27) {
      {
      routine_generateGalgasCodeBlocksLinuxX_38__36__5F__36__34_Target_3F__3F_buildDirName_3F__3F__3F__3F__3F__3F_ (var_projectDirectory_18569, constinArgument_inBuildDirectoryName, constinArgument_inTargetName, constinArgument_inToolCppFileList, var_libpmPath_19800, constinArgument_inHandCodedSourceToolFileList, constinArgument_inHandCodedSourceDirectory, constinArgument_inQuietOutputByDefault, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 453)) ;
      }
    }
  }
  GGS_stringlist var_linkOptionForLinkingFrameworkWithTool_24593 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_24644 (constinArgument_inFrameworkToolFileList) ;
  while (enumerator_24644.hasCurrentObject ()) {
    var_linkOptionForLinkingFrameworkWithTool_24593.addAssignOperation (GGS_string ("-framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 467)) ;
    var_linkOptionForLinkingFrameworkWithTool_24593.addAssignOperation (enumerator_24644.current_mValue (HERE).getter_deletingPathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas", 468))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 468)) ;
    enumerator_24644.gotoNextObject () ;
  }
  GGS_stringlist var_handCodedSourceToolFileList_24858 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_24899 (constinArgument_inHandCodedSourceToolFileList) ;
  while (enumerator_24899.hasCurrentObject ()) {
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      test_28 = GGS_bool (ComparisonKind::notEqual, enumerator_24899.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("galgasTargetGeneration.galgas", 473)).objectCompare (GGS_string ("h"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        var_handCodedSourceToolFileList_24858.addAssignOperation (enumerator_24899.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 474))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 474)) ;
      }
    }
    enumerator_24899.gotoNextObject () ;
  }
  GGS_stringset var_handCodedSourceDirectorySet_25051 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_25115 (constinArgument_inHandCodedSourceToolFileList) ;
  while (enumerator_25115.hasCurrentObject ()) {
    GGS_string var_subDir_25156 = enumerator_25115.current (HERE).readProperty_mValue ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasTargetGeneration.galgas", 479)) ;
    GalgasBool test_29 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_29) {
      test_29 = GGS_bool (ComparisonKind::equal, var_subDir_25156.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_29) {
        var_handCodedSourceDirectorySet_25051.plusPlusAssignOperation (GGS_string ("../sources/tool-sources")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 481)) ;
      }
    }
    if (GalgasBool::boolFalse == test_29) {
      var_handCodedSourceDirectorySet_25051.plusPlusAssignOperation (GGS_string ("../sources/tool-sources/").add_operation (var_subDir_25156, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 483))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 483)) ;
    }
    enumerator_25115.gotoNextObject () ;
  }
  GGS_string var_jsonFileListContents_25409 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_json_5F_file_5F_list (inCompiler, var_handCodedSourceDirectorySet_25051, var_handCodedSourceToolFileList_24858, var_toolCppFileList_19002, var_linkOptionForLinkingFrameworkWithTool_24593, var_libpmPath_19800, constinArgument_inBuildDirectoryName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 486))) ;
  GGS_string var_jsonFileListPath_25676 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/file-list.json"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 494)) ;
  GGS_bool joker_25822 ; // Joker input parameter
  var_jsonFileListContents_25409.method_writeToFileWhenDifferentContents (var_jsonFileListPath_25676, joker_25822, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 495)) ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("file-list.json")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 496)) ;
  switch (var_xcodeProject_21146.enumValue ()) {
  case GGS_xcodeProject::Enumeration::invalid:
    break ;
  case GGS_xcodeProject::Enumeration::enum_none:
    break ;
  case GGS_xcodeProject::Enumeration::enum_swiftApp:
    {
      GGS_string var_dir_25977 = var_projectDirectory_18569.add_operation (GGS_string ("/xcode-project"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 501)) ;
      var_dir_25977.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 502)) ;
      GGS_string var_applicationBundleBase_26078 ;
      GalgasBool test_30 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_30) {
        const GGS_projectQualifiedFeatureMap_2E_element var_entry_26111 = constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("applicationBundleBase"), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!constinArgument_inProjectQualifiedFeatureMap.readSubscript__3F_ (GGS_string ("applicationBundleBase"), inCompiler COMMA_HERE).isValuated ()) {
          test_30 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_30) {
          var_applicationBundleBase_26078 = var_entry_26111.readProperty_mFeatureValue ().readProperty_string () ;
        }
      }
      if (GalgasBool::boolFalse == test_30) {
        var_applicationBundleBase_26078 = GGS_string ("unknown.unknown") ;
      }
      GGS_string var_InfoPlistContents_26310 = GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist (inCompiler, constinArgument_inTargetName, var_applicationBundleBase_26078, constinArgument_inProjectVersionString, constinArgument_inHandledExtensionSet, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_19680, GGS_string ("$(PRODUCT_MODULE_NAME).ProjectDocument") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 510))) ;
      GGS_bool joker_26668 ; // Joker input parameter
      var_InfoPlistContents_26310.method_writeToFileWhenDifferentContents (var_dir_25977.add_operation (GGS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 518)), joker_26668, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 518)) ;
      GalgasBool test_31 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_31) {
        test_31 = var_dir_25977.add_operation (GGS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 520)).getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas", 520)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 520)).boolEnum () ;
        if (GalgasBool::boolTrue == test_31) {
          GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_build_5F_xcode (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 521))).method_writeToExecutableFile (var_dir_25977.add_operation (GGS_string ("/build.command"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 521)) ;
        }
      }
      var_dir_25977.add_operation (GGS_string ("/Base.lproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 524)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 524)) ;
      GGS_string var_InfoPlist_5F_strings_5F_path_26926 = var_dir_25977.add_operation (GGS_string ("/Base.lproj/InfoPlist.strings"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 525)) ;
      GGS_bool joker_27142 ; // Joker input parameter
      GGS_string (filewrapperTemplate_targetGalgas_33_GenerationFileWrapper_makefile_5F_info_5F_plist_5F_strings (inCompiler, constinArgument_inTargetName COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 526))).method_writeToFileWhenDifferentContents (var_InfoPlist_5F_strings_5F_path_26926, joker_27142, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 526)) ;
      GGS_string var_Credits_5F_rtf_5F_path_27154 = var_dir_25977.add_operation (GGS_string ("/Base.lproj/Credits.rtf"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 527)) ;
      GalgasBool test_32 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_32) {
        test_32 = var_Credits_5F_rtf_5F_path_27154.getter_fileExists (SOURCE_FILE ("galgasTargetGeneration.galgas", 528)).operator_not (SOURCE_FILE ("galgasTargetGeneration.galgas", 528)).boolEnum () ;
        if (GalgasBool::boolTrue == test_32) {
          GGS_string (gWrapperFileContent_1_targetGalgas_33_GenerationFileWrapper).method_writeToFile (var_Credits_5F_rtf_5F_path_27154, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 529)) ;
        }
      }
      GGS_string var_userResourceDir_27458 = var_projectDirectory_18569.add_operation (GGS_string ("/xcode-project/userResources"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 532)) ;
      var_userResourceDir_27458.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 533)) ;
      GGS_stringlist temp_33 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 534)) ;
      temp_33.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("icns"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 534)) ;
      GGS_stringlist var_extensionList_27582 = temp_33 ;
      GGS_stringlist var_resourceFiles_27619 = var_userResourceDir_27458.getter_regularFilesWithExtensions (GGS_bool (false), var_extensionList_27582 COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 535)) ;
      GGS_string var_newIntermediateFilePath_27730 = constinArgument_inAbsoluteBuildDirectory.add_operation (GGS_string ("/output/file-list-for-xcode-project.txt"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 537)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("file-list-for-xcode-project.txt")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 538)) ;
      GGS_XcodeProjectDescriptor var_xcodeProject_27980 = GGS_XcodeProjectDescriptor::init (inCompiler COMMA_HERE) ;
      var_xcodeProject_27980.mProperty_mApplicationBundleName = var_applicationBundleBase_26078 ;
      var_xcodeProject_27980.mProperty_mProjectName = constinArgument_inTargetName ;
      GGS_string var_headerSearchPaths_28139 = GGS_string ("HEADER_SEARCH_PATHS = (\"../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 543)).add_operation (GGS_string ("/output\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 544)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 544)).add_operation (GGS_string ("/libpm\", \"../"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 544)).add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 545)).add_operation (GGS_string ("/user-headers\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 546)) ;
      var_headerSearchPaths_28139.plusAssignOperation(GGS_string (", \"").add_operation (constinArgument_inHandCodedSourceDirectory, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 547)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 547)) ;
      var_headerSearchPaths_28139.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 548)) ;
      GGS_stringlist temp_34 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 624)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("ALWAYS_SEARCH_USER_PATHS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 551)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_CXX_LANGUAGE_STANDARD = \"c++17\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 552)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 553)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_BLOCK_CAPTURE_AUTORELEASING = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 554)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_COMMA = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 555)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_DEPRECATED_OBJC_IMPLEMENTATIONS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 556)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_EMPTY_BODY = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 557)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_INFINITE_RECURSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 558)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_OBJC_IMPLICIT_RETAIN_SELF = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 559)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_QUOTED_INCLUDE_IN_FRAMEWORK_HEADER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 560)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_RANGE_LOOP_ANALYSIS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 561)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_STRICT_PROTOTYPES = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 562)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 563)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_MOVE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 564)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_UNREACHABLE_CODE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 565)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN__DUPLICATE_METHOD_MATCH = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 566)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 567)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_NO_COMMON_BLOCKS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 568)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("ENABLE_STRICT_OBJC_MSGSEND = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 569)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 570)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_THREADSAFE_STATICS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 571)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 572)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 573)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 574)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 575)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 576)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 577)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 578)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 579)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 580)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 581)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 582)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 583)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 584)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 585)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_MISSING_PARENTHESES = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 586)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 587)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_PEDANTIC = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 588)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SHADOW = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 589)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SIGN_COMPARE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 590)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 591)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNDECLARED_SELECTOR = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 592)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 593)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 594)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_FUNCTION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 595)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_LABEL = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 596)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VALUE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 597)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VARIABLE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 598)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_headerSearchPaths_28139, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 599)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SDKROOT = macosx"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 600)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("COPY_PHASE_STRIP = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 601)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 602)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_DISABLE_SAFETY_CHECKS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 603)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_ENABLE_BARE_SLASH_REGEX = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 604)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_ENABLE_EMIT_CONST_VALUES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 605)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_ENFORCE_EXCLUSIVE_ACCESS = off"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 606)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_INSTALL_MODULE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 607)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_INSTALL_OBJC_HEADER = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 608)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_PRECOMPILE_BRIDGING_HEADER = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 609)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_REFLECTION_METADATA_LEVEL = all"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 610)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_STRICT_CONCURRENCY = complete"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 611)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_TREAT_WARNINGS_AS_ERRORS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 612)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_CONCISE_MAGIC_FILE = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 613)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_DEPRECATE_APPLICATION_MAIN = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 614)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_DISABLE_OUTWARD_ACTOR_ISOLATION = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 615)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_EXISTENTIAL_ANY = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 616)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_FORWARD_TRAILING_CLOSURES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 617)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_GLOBAL_CONCURRENCY = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 618)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_IMPLICIT_OPEN_EXISTENTIALS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 619)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_IMPORT_OBJC_FORWARD_DECLS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 620)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_INFER_SENDABLE_FROM_CAPTURES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 621)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_ISOLATED_DEFAULT_VALUES = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 622)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_UPCOMING_FEATURE_REGION_BASED_ISOLATION = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 623)) ;
      temp_34.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_VERSION = 5.0"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 624)) ;
      GGS_stringlist var_xcodeSettingList_28491 = temp_34 ;
      GalgasBool test_35 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_35) {
        test_35 = GGS_bool (ComparisonKind::notEqual, var_MACOSX_5F_DEPLOYMENT_5F_TARGET_19680.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_35) {
          var_xcodeSettingList_28491.addAssignOperation (GGS_string ("MACOSX_DEPLOYMENT_TARGET = \"").add_operation (var_MACOSX_5F_DEPLOYMENT_5F_TARGET_19680, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 627)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 627))  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 627)) ;
        }
      }
      {
      extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_27980, var_xcodeSettingList_28491, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 629)) ;
      }
      GGS_stringlist var_appFrameworksFileRefList_32462 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GalgasBool test_36 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_36) {
        test_36 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedLinkAppFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 632)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_36) {
          GGS_stringlist joker_32747 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_32778 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_32811 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_32900 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_string var_frameworkGroupRef_32961 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("Frameworks (App)"), GGS_string ("/System/Library/Frameworks"), GGS_stringset::class_func_setWithStringList (constinArgument_inHandCodedLinkAppFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 636)), joker_32747, joker_32778, joker_32811, var_appFrameworksFileRefList_32462, joker_32900, var_frameworkGroupRef_32961, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 633)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27980, var_frameworkGroupRef_32961, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 644)) ;
          }
        }
      }
      GGS_stringlist var_buildCFileRefListForTool_33110 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_buildCppFileRefListForTool_33161 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_swift_5F_FileRefList_33214 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_frameworksFileRefList_33258 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GGS_stringlist var_resourceFileBuildRefs_33306 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GalgasBool test_37 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_37) {
        test_37 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inHandCodedSourceToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 653)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_37) {
          GGS_string var_groupRef_33912 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("Hand Coded Sources (Tool)"), GGS_string ("../sources/tool-sources/"), GGS_stringset::class_func_setWithStringList (constinArgument_inHandCodedSourceToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 657)), var_buildCFileRefListForTool_33110, var_buildCppFileRefListForTool_33161, var_swift_5F_FileRefList_33214, var_frameworksFileRefList_33258, var_resourceFileBuildRefs_33306, var_groupRef_33912, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 654)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27980, var_groupRef_33912, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 665)) ;
          }
        }
      }
      GGS_stringlist var_toolFrameworksFileRefList_34061 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      GalgasBool test_38 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_38) {
        test_38 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inFrameworkToolFileList.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 669)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_38) {
          GGS_stringlist joker_34349 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_34380 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_34413 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_stringlist joker_34502 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_string var_frameworkGroupRef_34562 ;
          {
          extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("Frameworks (Tool)"), GGS_string ("/System/Library/Frameworks"), GGS_stringset::class_func_setWithStringList (constinArgument_inFrameworkToolFileList  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 673)), joker_34349, joker_34380, joker_34413, var_toolFrameworksFileRefList_34061, joker_34502, var_frameworkGroupRef_34562, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 670)) ;
          }
          {
          extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27980, var_frameworkGroupRef_34562, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 681)) ;
          }
        }
      }
      GGS_stringlist var_outputGroupFileList_34717 = constinArgument_inToolCppFileList.add_operation (constinArgument_inToolHeaderFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 684)).add_operation (constinArgument_inAppProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 684)) ;
      var_outputGroupFileList_34717.plusAssignOperation(constinArgument_inSwiftAppProductFileList, inCompiler  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 685)) ;
      GGS_string var_groupRef_35305 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("Generated by GALGAS"), GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 688)).add_operation (GGS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 688)), GGS_stringset::class_func_setWithStringList (var_outputGroupFileList_34717  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 689)), var_buildCFileRefListForTool_33110, var_buildCppFileRefListForTool_33161, var_swift_5F_FileRefList_33214, var_frameworksFileRefList_33258, var_resourceFileBuildRefs_33306, var_groupRef_35305, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 686)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27980, var_groupRef_35305, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 697)) ;
      }
      GGS_stringlist var_libpmReferenceGroupList_35402 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
      {
      GGS_stringset temp_39 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 712)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationConfiguration.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 704)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationConfiguration.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 705)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 706)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 707)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationSingleType.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 708)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagramRelationSingleType.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 709)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram-node.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 710)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 711)) ;
      temp_39.plusPlusAssignOperation (GGS_string ("BinaryDecisionDiagram.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 712)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("Binary Decision Diagrams"), GGS_string ("bdd"), temp_39, var_buildCFileRefListForTool_33110, var_buildCppFileRefListForTool_33161, var_swift_5F_FileRefList_33214, var_frameworksFileRefList_33258, var_resourceFileBuildRefs_33306, var_groupRef_35305, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 700)) ;
      }
      var_libpmReferenceGroupList_35402.addAssignOperation (var_groupRef_35305  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 721)) ;
      {
      GGS_stringset temp_40 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 763)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-add.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 727)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-bit.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 728)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-chunk-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 729)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-constructors.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 730)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-conversions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 731)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-divide.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 732)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-logic-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 733)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-multiply.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 734)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 735)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-shifts.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 736)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-subtract.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 737)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned-utilities.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 738)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 739)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigSigned.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 740)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-add.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 741)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-bit.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 742)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-chunk-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 743)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-constructors.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 744)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-conversions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 745)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-divide-naive.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 746)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-divide.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 747)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-logic-operations.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 748)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-multiply.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 749)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 750)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-shifts.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 751)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-subtract.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 752)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned-utilities.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 753)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("BigUnsigned.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 754)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("ChunkSelectSize.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 755)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("ChunkSharedArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 756)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("ChunkSharedArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 757)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("UInt128.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 758)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("UInt128.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 759)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("chunk-U16.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 760)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("chunk-U32.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 761)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("chunk-U64.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 762)) ;
      temp_40.plusPlusAssignOperation (GGS_string ("chunk-U8.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 763)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("Big Integers"), GGS_string ("big-integers"), temp_40, var_buildCFileRefListForTool_33110, var_buildCppFileRefListForTool_33161, var_swift_5F_FileRefList_33214, var_frameworksFileRefList_33258, var_resourceFileBuildRefs_33306, var_groupRef_35305, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 723)) ;
      }
      var_libpmReferenceGroupList_35402.addAssignOperation (var_groupRef_35305  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 772)) ;
      {
      GGS_stringset temp_41 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 818)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("AbstractScanner.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 778)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("AllocationDebugView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 779)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("Application.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 780)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ASCII.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 781)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("Color+RawRepresentable.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 782)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("CommandLineOption.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 783)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("common-command-line-options.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 784)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("CompilationIssue.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 785)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("CompileLogView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 786)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("CustomFont.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 787)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("CustomFontPicker.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 788)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("FocusedValues+extension.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 789)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("IdentifiableAttributedString.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 790)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("IndexingOperation.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 791)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("lexical-functions.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 792)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("LexicalToken.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 793)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("Notification+names.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 794)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectCompiler.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 795)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectDocument.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 796)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectDocumentView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 797)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+compile.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 798)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+populateContextualMenu.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 799)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectDocumentView+search.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 800)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ProjectWindowManagerView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 801)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("RootDirectoryNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 802)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("ScrollSourceToLineNotification.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 803)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SearchResultItem.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 804)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SearchResultItemView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 805)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SearchResultNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 806)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SearchResultNodeView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 807)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SharedTextModel.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 808)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SourceFileNode.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 809)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SourceFileNodeID.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 810)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("SourceFileNodeView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 811)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("String+LineAndColumn.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 812)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("String+LineRangeForLineNumber.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 813)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("String+LineStartAndEndLocations.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 814)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("TemplateDelimiter.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 815)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("TextSyntaxColoringView.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 816)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("UInt64+displayString.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 817)) ;
      temp_41.plusPlusAssignOperation (GGS_string ("UserInterfaceSetting.swift")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 818)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("Swift App"), GGS_string ("swiftui-app"), temp_41, var_buildCFileRefListForTool_33110, var_buildCppFileRefListForTool_33161, var_swift_5F_FileRefList_33214, var_frameworksFileRefList_33258, var_resourceFileBuildRefs_33306, var_groupRef_35305, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 774)) ;
      }
      var_libpmReferenceGroupList_35402.addAssignOperation (var_groupRef_35305  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 827)) ;
      {
      GGS_stringset temp_42 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 835)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("GenericArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 833)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("GenericUniqueArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 834)) ;
      temp_42.plusPlusAssignOperation (GGS_string ("GenericUniqueMatrix.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 835)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("Generic Arraies"), GGS_string ("generic-arraies"), temp_42, var_buildCFileRefListForTool_33110, var_buildCppFileRefListForTool_33161, var_swift_5F_FileRefList_33214, var_frameworksFileRefList_33258, var_resourceFileBuildRefs_33306, var_groupRef_35305, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 829)) ;
      }
      var_libpmReferenceGroupList_35402.addAssignOperation (var_groupRef_35305  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 844)) ;
      {
      GGS_stringset temp_43 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 865)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("F_mainForLIBPM.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 850)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("F_mainForLIBPM.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 851)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("builtin-command-line-options.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 852)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("builtin-command-line-options.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 853)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("analyzeCommandLineOptions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 854)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("analyzeCommandLineOptions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 855)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("AbstractCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 856)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("AbstractCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 857)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BoolCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 858)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("BoolCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 859)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("UIntCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 860)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("UIntCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 861)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("StringCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 862)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("StringCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 863)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("StringListCommandLineOption.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 864)) ;
      temp_43.plusPlusAssignOperation (GGS_string ("StringListCommandLineOption.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 865)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("Command line Interface"), GGS_string ("command_line_interface"), temp_43, var_buildCFileRefListForTool_33110, var_buildCppFileRefListForTool_33161, var_swift_5F_FileRefList_33214, var_frameworksFileRefList_33258, var_resourceFileBuildRefs_33306, var_groupRef_35305, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 846)) ;
      }
      var_libpmReferenceGroupList_35402.addAssignOperation (var_groupRef_35305  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 874)) ;
      {
      GGS_stringset temp_44 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 889)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("FileManager.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 880)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("FileManager.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 881)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("AbstractFileHandle.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 882)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("AbstractFileHandle.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 883)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("BinaryFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 884)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("BinaryFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 885)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("TextFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 886)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("TextFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 887)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("HTMLFileWrite.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 888)) ;
      temp_44.plusPlusAssignOperation (GGS_string ("HTMLFileWrite.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 889)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("File"), GGS_string ("files"), temp_44, var_buildCFileRefListForTool_33110, var_buildCppFileRefListForTool_33161, var_swift_5F_FileRefList_33214, var_frameworksFileRefList_33258, var_resourceFileBuildRefs_33306, var_groupRef_35305, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 876)) ;
      }
      var_libpmReferenceGroupList_35402.addAssignOperation (var_groupRef_35305  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 898)) ;
      {
      GGS_stringset temp_45 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 996)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_reference_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 904)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_reference_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 905)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_value_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 906)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_value_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 907)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_enumAssociatedValues.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 908)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_enumAssociatedValues.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 909)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_graph.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 910)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_graph.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 911)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_root.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 912)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_root.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 913)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_weak_reference.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 914)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("AC_GALGAS_weak_reference.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 915)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("acPtr_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 916)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("acPtr_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 917)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("acStrongPtr_class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 918)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("acStrongPtr_class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 919)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("cPtr_weakReference_proxy.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 920)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("cPtr_weakReference_proxy.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 921)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Compiler.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 922)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Compiler.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 923)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("C_galgas_class_inspector.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 924)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("C_galgas_class_inspector.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 925)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("C_galgas_CLI_Options.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 926)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("C_galgas_CLI_Options.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 927)) ;
      GGS_string temp_46 ;
      const GalgasBool test_47 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (GalgasBool::boolTrue == test_47) {
        temp_46 = GGS_string ("C_galgas_verbose_option.cpp") ;
      }else if (GalgasBool::boolFalse == test_47) {
        temp_46 = GGS_string ("C_galgas_quiet_option.cpp") ;
      }
      temp_45.plusPlusAssignOperation (temp_46  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 928)) ;
      GGS_string temp_48 ;
      const GalgasBool test_49 = constinArgument_inQuietOutputByDefault.boolEnum () ;
      if (GalgasBool::boolTrue == test_49) {
        temp_48 = GGS_string ("C_galgas_verbose_option.h") ;
      }else if (GalgasBool::boolFalse == test_49) {
        temp_48 = GGS_string ("C_galgas_quiet_option.h") ;
      }
      temp_45.plusPlusAssignOperation (temp_48  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 929)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("F_verbose_output.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 930)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("C_galgas_function_descriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 931)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("C_galgas_function_descriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 932)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("galgas-input-output.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 933)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("galgas-input-output.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 934)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GALGAS_TypeDescriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 935)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GALGAS_TypeDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 936)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IssueWithFixIt.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 937)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IssueWithFixIt.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 938)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Lexique-parsing.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 939)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Lexique.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 940)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Lexique.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 941)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("LocationInSource.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 942)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("LocationInSource.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 943)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("SourceTextInString.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 944)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("SourceTextInString.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 945)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("capCollectionElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 946)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("capCollectionElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 947)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("capCollectionElementArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 948)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("capCollectionElementArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 949)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("cCollectionElement.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 950)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("cCollectionElement.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 951)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Enumerator_range.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 952)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("Enumerator_range.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 953)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("cGenericAbstractEnumerator.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 954)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("cGenericAbstractEnumerator.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 955)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IndexingDictionary.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 956)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IndexingDictionary.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 957)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IssueDescriptor.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 958)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("IssueDescriptor.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 959)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("LexiqueIntrospection.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 960)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("LexiqueIntrospection.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 961)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("cObjectArray.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 962)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("cObjectArray.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 963)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("cPtr_object.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 964)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("cPtr_object.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 965)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("TemplateDelimiter.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 966)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_application.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 967)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_binaryset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 968)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_bigint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 969)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_bool.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 970)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_char.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 971)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 972)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_double.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 973)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_filewrapper.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 974)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_function.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 975)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_location.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 976)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_object.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 977)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_sint64.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 978)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_sint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 979)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_string.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 980)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_string-getters.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 981)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_stringset.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 982)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 983)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_type.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 984)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_uint64.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 985)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GGS_uint.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 986)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("scanner_actions.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 987)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("scanner_actions.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 988)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("ComparisonResult.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 989)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("ComparisonKind.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 990)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("EnumerationOrder.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 991)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GALGAS_GenericDictionary.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 992)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("GALGAS_GenericMapRoot.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 993)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("SharedGenericPtrWithValueSemantics.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 994)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("SharedObject.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 995)) ;
      temp_45.plusPlusAssignOperation (GGS_string ("SharedObject.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 996)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("Galgas"), GGS_string ("galgas"), temp_45, var_buildCFileRefListForTool_33110, var_buildCppFileRefListForTool_33161, var_swift_5F_FileRefList_33214, var_frameworksFileRefList_33258, var_resourceFileBuildRefs_33306, var_groupRef_35305, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 900)) ;
      }
      var_libpmReferenceGroupList_35402.addAssignOperation (var_groupRef_35305  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1005)) ;
      {
      GGS_stringset temp_50 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1016)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("AbstractOutputStream.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1011)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("AbstractOutputStream.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1012)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("ConsoleOut.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1013)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("ConsoleOut.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1014)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("ColoredConsole.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1015)) ;
      temp_50.plusPlusAssignOperation (GGS_string ("ColoredConsole.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1016)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("Streams"), GGS_string ("streams"), temp_50, var_buildCFileRefListForTool_33110, var_buildCppFileRefListForTool_33161, var_swift_5F_FileRefList_33214, var_frameworksFileRefList_33258, var_resourceFileBuildRefs_33306, var_groupRef_35305, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1007)) ;
      }
      var_libpmReferenceGroupList_35402.addAssignOperation (var_groupRef_35305  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1025)) ;
      {
      GGS_stringset temp_51 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1039)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("String-class-getters.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1031)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("String-class.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1032)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("String-class.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1033)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("string_encodings.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1034)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("unicode-data.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1035)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("utf32.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1036)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("utf32.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1037)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("print.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1038)) ;
      temp_51.plusPlusAssignOperation (GGS_string ("print.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1039)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("Strings"), GGS_string ("strings"), temp_51, var_buildCFileRefListForTool_33110, var_buildCppFileRefListForTool_33161, var_swift_5F_FileRefList_33214, var_frameworksFileRefList_33258, var_resourceFileBuildRefs_33306, var_groupRef_35305, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1027)) ;
      }
      var_libpmReferenceGroupList_35402.addAssignOperation (var_groupRef_35305  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1048)) ;
      {
      GGS_stringset temp_52 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1057)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("DateTime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1054)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("DateTime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1055)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("Timer.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1056)) ;
      temp_52.plusPlusAssignOperation (GGS_string ("Timer.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1057)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("Time"), GGS_string ("time"), temp_52, var_buildCFileRefListForTool_33110, var_buildCppFileRefListForTool_33161, var_swift_5F_FileRefList_33214, var_frameworksFileRefList_33258, var_resourceFileBuildRefs_33306, var_groupRef_35305, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1050)) ;
      }
      var_libpmReferenceGroupList_35402.addAssignOperation (var_groupRef_35305  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1066)) ;
      {
      GGS_stringset temp_53 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1101)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("basic-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1072)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("basic-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1073)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("U8Data.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1074)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("U8Data.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1075)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("DirectedGraph.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1076)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("DirectedGraph.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1077)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("PrologueEpilogue.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1078)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("PrologueEpilogue.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1079)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("UInt32Set.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1080)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("UInt32Set.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1081)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("cpp-allocation.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1082)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("cpp-allocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1083)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("F_DisplayException.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1084)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("F_DisplayException.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1085)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("F_GetPrime.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1086)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("F_GetPrime.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1087)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("M_machine.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1088)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("M_SourceLocation.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1089)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("md5.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1090)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("md5.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1091)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("SHA256.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1092)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("SHA256.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1093)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("macroAssert.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1094)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("macroAssert.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1095)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("MF_MemoryControl.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1096)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("MF_MemoryControl.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1097)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("switch-fallthrough.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1098)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("TF_Swap.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1099)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("galgas-random.cpp")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1100)) ;
      temp_53.plusPlusAssignOperation (GGS_string ("galgas-random.h")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1101)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("Utilities"), GGS_string ("utilities"), temp_53, var_buildCFileRefListForTool_33110, var_buildCppFileRefListForTool_33161, var_swift_5F_FileRefList_33214, var_frameworksFileRefList_33258, var_resourceFileBuildRefs_33306, var_groupRef_35305, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1068)) ;
      }
      var_libpmReferenceGroupList_35402.addAssignOperation (var_groupRef_35305  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1110)) ;
      GGS_string var_libpmGroupRef_49137 ;
      {
      extensionSetter_addGroup (var_xcodeProject_27980, GGS_string ("libpm"), GGS_string ("../").add_operation (constinArgument_inBuildDirectoryName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1112)).add_operation (GGS_string ("/libpm"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1112)), var_libpmReferenceGroupList_35402, var_libpmGroupRef_49137, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1112)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27980, var_libpmGroupRef_49137, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1113)) ;
      }
      GGS_string var_resourcesGroupRef_49625 ;
      {
      GGS_stringset temp_54 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1118)) ;
      temp_54.plusPlusAssignOperation (GGS_string ("Info.plist")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1118)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("Resources"), GGS_string ("."), temp_54, var_buildCFileRefListForTool_33110, var_buildCppFileRefListForTool_33161, var_swift_5F_FileRefList_33214, var_frameworksFileRefList_33258, var_resourceFileBuildRefs_33306, var_resourcesGroupRef_49625, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1115)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27980, var_resourcesGroupRef_49625, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1126)) ;
      }
      GGS_string var_userResourcesGroupRef_50174 ;
      {
      extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("User Resources"), GGS_string ("userResources"), GGS_stringset::class_func_setWithStringList (var_resourceFiles_27619  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1131)), var_buildCFileRefListForTool_33110, var_buildCppFileRefListForTool_33161, var_swift_5F_FileRefList_33214, var_frameworksFileRefList_33258, var_resourceFileBuildRefs_33306, var_userResourcesGroupRef_50174, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1128)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27980, var_userResourcesGroupRef_50174, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1139)) ;
      }
      GGS_string var_frameworkGroupRef_50779 ;
      {
      GGS_stringset temp_55 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1146)) ;
      temp_55.plusPlusAssignOperation (GGS_string ("AppKit.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1145)) ;
      temp_55.plusPlusAssignOperation (GGS_string ("Cocoa.framework")  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1146)) ;
      extensionSetter_addGroupWithFiles (var_xcodeProject_27980, GGS_string ("Frameworks for App"), GGS_string ("/System/Library/Frameworks"), temp_55, var_buildCFileRefListForTool_33110, var_buildCppFileRefListForTool_33161, var_swift_5F_FileRefList_33214, var_frameworksFileRefList_33258, var_resourceFileBuildRefs_33306, var_frameworkGroupRef_50779, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1141)) ;
      }
      {
      extensionSetter_placeGroupAsMainGroup (var_xcodeProject_27980, var_frameworkGroupRef_50779, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1155)) ;
      }
      GGS_stringlist var_codeSigningSettingList_50924 ;
      GalgasBool test_56 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_56) {
        test_56 = GGS_bool (ComparisonKind::equal, var_macCodeSign_19278.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_56) {
          GGS_stringlist temp_57 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1159)) ;
          temp_57.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CODE_SIGN_IDENTITY = \"-\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1159)) ;
          var_codeSigningSettingList_50924 = temp_57 ;
        }
      }
      if (GalgasBool::boolFalse == test_56) {
        GGS_stringlist var_components_51069 = var_macCodeSign_19278.readProperty_string ().getter_componentsSeparatedByString (GGS_string (":") COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1161)) ;
        GalgasBool test_58 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_58) {
          test_58 = GGS_bool (ComparisonKind::notEqual, var_components_51069.getter_count (SOURCE_FILE ("galgasTargetGeneration.galgas", 1162)).objectCompare (GGS_uint (uint32_t (2U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_58) {
            GenericArray <FixItDescription> fixItArray59 ;
            inCompiler->emitSemanticError (var_macCodeSign_19278.readProperty_location (), GGS_string ("the %macCodeSign attribute associated string should be \"key:value\""), fixItArray59  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1163)) ;
            var_codeSigningSettingList_50924.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_58) {
          GalgasBool test_60 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_60) {
            test_60 = GGS_bool (ComparisonKind::equal, var_components_51069.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1164)).objectCompare (GGS_string ("MacDeveloper"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_60) {
              GGS_stringlist temp_61 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1167)) ;
              temp_61.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CODE_SIGN_IDENTITY = \"Mac Developer\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1166)) ;
              temp_61.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("DEVELOPMENT_TEAM = \"").add_operation (var_components_51069.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1167)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1167)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1167)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1167)) ;
              var_codeSigningSettingList_50924 = temp_61 ;
            }
          }
          if (GalgasBool::boolFalse == test_60) {
            GalgasBool test_62 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_62) {
              test_62 = GGS_bool (ComparisonKind::equal, var_components_51069.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1169)).objectCompare (GGS_string ("Certificate"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_62) {
                GGS_stringlist temp_63 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1170)) ;
                temp_63.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CODE_SIGN_IDENTITY = \"").add_operation (var_components_51069.getter_mValueAtIndex (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1170)), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1170)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1170)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1170)) ;
                var_codeSigningSettingList_50924 = temp_63 ;
              }
            }
            if (GalgasBool::boolFalse == test_62) {
              GenericArray <FixItDescription> fixItArray64 ;
              inCompiler->emitSemanticError (var_macCodeSign_19278.readProperty_location (), GGS_string ("the %macCodeSign attribute string is \"key:value\", but key should be 'MacDeveloper' or 'Certificate'"), fixItArray64  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1172)) ;
              var_codeSigningSettingList_50924.drop () ; // Release error dropped variable
            }
          }
        }
      }
      GGS_stringlist temp_65 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1180)) ;
      temp_65.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 2"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1177)) ;
      temp_65.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = (DO_NOT_GENERATE_CHECKINGS)"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1178)) ;
      temp_65.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_PARAMETER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1179)) ;
      temp_65.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_26078, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1180)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1180)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1180)).add_operation (GGS_string (".tool\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1180)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1180)) ;
      GGS_stringlist var_settingList_51946 = temp_65.add_operation (var_codeSigningSettingList_50924, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1181)) ;
      GGS_string var_releaseTargetRef_52565 ;
      GGS_string var_releaseProductFileRef_52608 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_27980, constinArgument_inTargetName.add_operation (GGS_string (" tool"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1183)), constinArgument_inTargetName, var_buildCFileRefListForTool_33110.add_operation (var_buildCppFileRefListForTool_33161, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1185)), var_toolFrameworksFileRefList_34061, var_settingList_51946, var_releaseTargetRef_52565, var_releaseProductFileRef_52608, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1182)) ;
      }
      GGS_stringlist temp_66 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1197)) ;
      temp_66.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1193)) ;
      temp_66.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1194)) ;
      temp_66.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1195)) ;
      temp_66.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_PARAMETER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1196)) ;
      temp_66.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("PRODUCT_BUNDLE_IDENTIFIER = \"").add_operation (var_applicationBundleBase_26078, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1197)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1197)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1197)).add_operation (GGS_string (".tooldebug\""), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1197)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1197)) ;
      var_settingList_51946 = temp_66.add_operation (var_codeSigningSettingList_50924, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1198)) ;
      GGS_string var_debugTargetRef_53335 ;
      GGS_string var_debugProductFileRef_53376 ;
      {
      extensionSetter_addToolTarget (var_xcodeProject_27980, constinArgument_inTargetName.add_operation (GGS_string (" tool debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1200)), constinArgument_inTargetName.add_operation (GGS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1201)), var_buildCFileRefListForTool_33110.add_operation (var_buildCppFileRefListForTool_33161, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1202)), var_toolFrameworksFileRefList_34061, var_settingList_51946, var_debugTargetRef_53335, var_debugProductFileRef_53376, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1199)) ;
      }
      GGS_stringlist temp_67 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1211)) ;
      temp_67.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1210)) ;
      temp_67.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1211)) ;
      GGS_stringlist var_cocoaConfigurationSettingList_53447 = temp_67.add_operation (var_codeSigningSettingList_50924, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1212)) ;
      {
      GGS_stringlist temp_68 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1220)) ;
      temp_68.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_releaseTargetRef_52565, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1220)) ;
      temp_68.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_debugTargetRef_53335, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1220)) ;
      GGS__32_stringlist temp_69 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1221)) ;
      temp_69.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (var_releaseProductFileRef_52608, constinArgument_inTargetName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1221)) ;
      temp_69.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (var_debugProductFileRef_53376, constinArgument_inTargetName.add_operation (GGS_string ("-debug"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1221)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1221)) ;
      GGS_string joker_54209 ; // Joker input parameter
      extensionSetter_addAppTarget (var_xcodeProject_27980, constinArgument_inTargetName.add_operation (GGS_string (" IDE"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1214)), constinArgument_inTargetName.getter_capitalizingFirstCharacter (SOURCE_FILE ("galgasTargetGeneration.galgas", 1215)).add_operation (GGS_string (" IDE"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1215)), var_swift_5F_FileRefList_33214, var_frameworksFileRefList_33258.add_operation (var_appFrameworksFileRefList_32462, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1217)), var_resourceFileBuildRefs_33306, var_cocoaConfigurationSettingList_53447, temp_68, temp_69, joker_54209, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1213)) ;
      }
      extensionMethod_generateAtPath (var_xcodeProject_27980, var_dir_25977.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1226)).add_operation (constinArgument_inTargetName, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1226)).add_operation (GGS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1226)), var_newIntermediateFilePath_27730, inCompiler COMMA_SOURCE_FILE ("galgasTargetGeneration.galgas", 1225)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@repeatInstruction transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                            const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                            GGS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                            GGS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_addedNonTerminalIndex_4810 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 109)) ;
  GGS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList_4896 = GGS_syntaxInstructionListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  {
  const GGS_repeatInstruction temp_0 = this ;
  routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList_4896, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 112)) ;
  }
  GGS_branchListForGrammarAnalysis var_repeatBranchList_5240 = GGS_branchListForGrammarAnalysis::class_func_listWithValue (var_repeatedInstructionList_4896  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 119)) ;
  const GGS_repeatInstruction temp_1 = this ;
  UpEnumerator_listOfSyntaxInstructionList enumerator_5360 (temp_1.readProperty_mRepeatBranchList ()) ;
  while (enumerator_5360.hasCurrentObject ()) {
    GGS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_5400 = GGS_syntaxInstructionListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
    {
    routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (enumerator_5360.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_5400, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 123)) ;
    }
    var_repeatBranchList_5240.addAssignOperation (var_syntaxInstructionList_5400  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 130)) ;
    enumerator_5360.gotoNextObject () ;
  }
  const GGS_repeatInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssignOperation (GGS_repeatInstructionForGrammarAnalysis::init_21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_repeatBranchList_5240, var_addedNonTerminalIndex_4810, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 133)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@repeatInstruction analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GGS_bool constinArgument_inHasTranslateFeature,
                                                              const GGS_terminalMap constinArgument_inTerminalMap,
                                                              const GGS_string constinArgument_inLexiqueName,
                                                              const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                              const GGS_string constinArgument_inComponentName,
                                                              const GGS_stringset constinArgument_inIndexNameSet,
                                                              GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_uint & ioArgument_ioSelectMethodCount,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_choiceIndex_6776 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 160)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 162)) ;
  }
  GGS_semanticInstructionListForGeneration var_repeated_5F_instructionList_7328 ;
  {
  const GGS_repeatInstruction temp_0 = this ;
  const GGS_repeatInstruction temp_1 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_0.readProperty_mRepeatedInstructionList (), temp_1.readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList_7328, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 164)) ;
  }
  GGS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_7428 = GGS_listOfSemanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_repeatInstruction temp_2 = this ;
  UpEnumerator_listOfSyntaxInstructionList enumerator_7507 (temp_2.readProperty_mRepeatBranchList ()) ;
  while (enumerator_7507.hasCurrentObject ()) {
    GGS_semanticInstructionListForGeneration var_instructionList_7959 ;
    {
    routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_7507.current_mSyntaxInstructionList (HERE), enumerator_7507.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_7959, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 184)) ;
    }
    var_listOfSemanticInstructionListForGeneration_7428.addAssignOperation (var_instructionList_7959, enumerator_7507.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 201)) ;
    enumerator_7507.gotoNextObject () ;
  }
  {
  const GGS_repeatInstruction temp_3 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_3.readProperty_mEndOf_5F_repeat_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 204)) ;
  }
  const GGS_repeatInstruction temp_4 = this ;
  const GGS_repeatInstruction temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_repeatInstructionForGeneration::init_21__21__21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_6776, var_repeated_5F_instructionList_7328, temp_5.readProperty_mEndOf_5F_repeat_5F_instruction (), var_listOfSemanticInstructionListForGeneration_7428, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 206)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@repeatInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::method_appendSyntaxSignature (const GGS_string constinArgument_inPosfix,
                                                                        GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_repeatInstructionForGeneration temp_0 = this ;
  GGS_semanticInstructionListForGeneration var_repeated_5F_instructionList_9438 = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_m_5F_repeated_5F_instructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 236)) ;
  GGS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_9549 = GGS_listOfSemanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_repeatInstructionForGeneration temp_1 = this ;
  UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_9665 (temp_1.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
  while (enumerator_9665.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_9549.addAssignOperation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_9665.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 240)), enumerator_9665.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 239)) ;
    enumerator_9665.gotoNextObject () ;
  }
  const GGS_repeatInstructionForGeneration temp_2 = this ;
  const GGS_repeatInstructionForGeneration temp_3 = this ;
  const GGS_repeatInstructionForGeneration temp_4 = this ;
  const GGS_repeatInstructionForGeneration temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_repeatInstructionForGeneration::init_21__21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mChoiceIndex (), var_repeated_5F_instructionList_9438, temp_5.readProperty_mEndOfRepeatedInstructions (), var_listOfSemanticInstructionListForGeneration_9549, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 244)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@repeatInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_repeatInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_repeatInstructionForGeneration var_si_10576 (dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_10576.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_repeatInstructionForGeneration temp_1 = this ;
      result_result = function_compareSyntaxSignature (temp_1.readProperty_m_5F_repeated_5F_instructionList (), var_si_10576.readProperty_m_5F_repeated_5F_instructionList (), var_si_10576.readProperty_mEndOfRepeatedInstructions (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 261)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_repeatInstructionForGeneration temp_3 = this ;
        test_2 = result_result.operator_and (GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 262)).objectCompare (var_si_10576.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 262)))) COMMA_SOURCE_FILE ("instruction-repeat.galgas", 262)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_repeatInstructionForGeneration temp_4 = this ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_si_10576.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (temp_4.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 265)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 264)).add_operation (GGS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 265)).add_operation (var_si_10576.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 267)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 266)), fixItArray5  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 263)) ;
          result_result = GGS_bool (false) ;
        }
      }
      const GGS_repeatInstructionForGeneration temp_6 = this ;
      UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_11279 (temp_6.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_11358 (var_si_10576.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      bool bool_7 = result_result.isValidAndTrue () ;
      if (enumerator_11279.hasCurrentObject () && enumerator_11358.hasCurrentObject () && bool_7) {
        while (enumerator_11279.hasCurrentObject () && enumerator_11358.hasCurrentObject () && bool_7) {
          result_result = function_compareSyntaxSignature (enumerator_11279.current_mInstructionList (HERE), enumerator_11358.current_mInstructionList (HERE), enumerator_11358.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 271)) ;
          enumerator_11279.gotoNextObject () ;
          enumerator_11358.gotoNextObject () ;
          if (enumerator_11279.hasCurrentObject () && enumerator_11358.hasCurrentObject ()) {
            bool_7 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_syntaxInstructionForGeneration var_si_11585 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_11585.ptr ()) {
        test_8 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_si_11585.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction"), fixItArray9  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 275)) ;
        result_result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      const GGS_repeatInstructionForGeneration temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray11  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 279)) ;
      result_result = GGS_bool (false) ;
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = result_result.operator_not (SOURCE_FILE ("instruction-repeat.galgas", 282)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_repeatInstructionForGeneration temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 283)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@repeatInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_repeatFlagCppName_12542 = GGS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 299)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 300)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_repeatFlagCppName_12542, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 301)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 301)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (var_repeatFlagCppName_12542, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 302)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 302)) ;
  {
  const GGS_repeatInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_0.readProperty_m_5F_repeated_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 303)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 311)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_repeatInstructionForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 312)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_repeatInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (select_").add_operation (temp_3.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 313)) ;
      const GGS_repeatInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("_").add_operation (temp_4.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 314)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 314)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 314)).add_operation (GGS_string (") == 2) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 314)) ;
      const GGS_repeatInstructionForGeneration temp_5 = this ;
      GGS_semanticInstructionListForGeneration var_instructionList_13297 = temp_5.readProperty_mListOfSemanticInstructionListForGeneration ().getter_mInstructionListAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 315)) ;
      {
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, var_instructionList_13297, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 324)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_repeatFlagCppName_12542, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 325)).add_operation (GGS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 325)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 326)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_repeatInstructionForGeneration temp_6 = this ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (select_").add_operation (temp_6.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 328)) ;
    const GGS_repeatInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("_").add_operation (temp_7.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 329)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 329)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 329)).add_operation (GGS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 329)) ;
    const GGS_repeatInstructionForGeneration temp_8 = this ;
    UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_13964 (temp_8.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
    GGS_uint index_13942 (uint32_t (0)) ;
    while (enumerator_13964.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case ").add_operation (index_13942.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)).add_operation (GGS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)) ;
      {
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_13964.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 332)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 340)) ;
      enumerator_13964.gotoNextObject () ;
      index_13942.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 330)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 342)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_repeatFlagCppName_12542, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 343)).add_operation (GGS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 343)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 343)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 344)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 345)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 347)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 348)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectInstruction transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                            const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                            GGS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                            GGS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_addedNonTerminalIndex_4481 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 103)) ;
  GGS_branchListForGrammarAnalysis var_selectBranchList_4567 = GGS_branchListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  const GGS_selectInstruction temp_0 = this ;
  UpEnumerator_listOfSyntaxInstructionList enumerator_4649 (temp_0.readProperty_mSelectBranchList ()) ;
  while (enumerator_4649.hasCurrentObject ()) {
    GGS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_4689 = GGS_syntaxInstructionListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
    {
    routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (enumerator_4649.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_4689, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 108)) ;
    }
    var_selectBranchList_4567.addAssignOperation (var_syntaxInstructionList_4689  COMMA_SOURCE_FILE ("instruction-select.galgas", 115)) ;
    enumerator_4649.gotoNextObject () ;
  }
  const GGS_selectInstruction temp_1 = this ;
  ioArgument_ioSyntaxInstructionList.addAssignOperation (GGS_selectInstructionForGrammarAnalysis::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_selectBranchList_4567, var_addedNonTerminalIndex_4481, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 118)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectInstruction analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GGS_bool constinArgument_inHasTranslateFeature,
                                                              const GGS_terminalMap constinArgument_inTerminalMap,
                                                              const GGS_string constinArgument_inLexiqueName,
                                                              const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                              const GGS_string constinArgument_inComponentName,
                                                              const GGS_stringset constinArgument_inIndexNameSet,
                                                              GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_uint & ioArgument_ioSelectMethodCount,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_choiceIndex_6066 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 144)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 146)) ;
  }
  GGS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_6216 = GGS_listOfSemanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_selectInstruction temp_0 = this ;
  UpEnumerator_listOfSyntaxInstructionList enumerator_6338 (temp_0.readProperty_mSelectBranchList ()) ;
  while (enumerator_6338.hasCurrentObject ()) {
    GGS_semanticInstructionListForGeneration var_instructionList_6790 ;
    {
    routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_6338.current_mSyntaxInstructionList (HERE), enumerator_6338.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_6790, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 150)) ;
    }
    var_listOfSemanticInstructionListForGeneration_6216.addAssignOperation (var_instructionList_6790, enumerator_6338.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 167)) ;
    enumerator_6338.gotoNextObject () ;
  }
  {
  const GGS_selectInstruction temp_1 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_1.readProperty_mEndOf_5F_select_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 170)) ;
  }
  const GGS_selectInstruction temp_2 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_selectInstructionForGeneration::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_6066, var_listOfSemanticInstructionListForGeneration_6216, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 171)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::method_appendSyntaxSignature (const GGS_string constinArgument_inPosfix,
                                                                        GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_8064 = GGS_listOfSemanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_selectInstructionForGeneration temp_0 = this ;
  UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_8180 (temp_0.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
  while (enumerator_8180.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_8064.addAssignOperation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_8180.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 199)), enumerator_8180.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 198)) ;
    enumerator_8180.gotoNextObject () ;
  }
  const GGS_selectInstructionForGeneration temp_1 = this ;
  const GGS_selectInstructionForGeneration temp_2 = this ;
  const GGS_selectInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_selectInstructionForGeneration::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mSyntaxComponentName (), temp_3.readProperty_mChoiceIndex (), var_listOfSemanticInstructionListForGeneration_8064, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 202)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_selectInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_selectInstructionForGeneration var_si_9020 (dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_9020.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_bool (true) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_selectInstructionForGeneration temp_2 = this ;
        test_1 = result_result.operator_and (GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 220)).objectCompare (var_si_9020.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 220)))) COMMA_SOURCE_FILE ("instruction-select.galgas", 220)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selectInstructionForGeneration temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_9020.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 223)).getter_string (SOURCE_FILE ("instruction-select.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 222)).add_operation (GGS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 223)).add_operation (var_si_9020.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 225)).getter_string (SOURCE_FILE ("instruction-select.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 224)), fixItArray4  COMMA_SOURCE_FILE ("instruction-select.galgas", 221)) ;
          result_result = GGS_bool (false) ;
        }
      }
      const GGS_selectInstructionForGeneration temp_5 = this ;
      UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_9608 (temp_5.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_9695 (var_si_9020.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      bool bool_6 = result_result.isValidAndTrue () ;
      if (enumerator_9608.hasCurrentObject () && enumerator_9695.hasCurrentObject () && bool_6) {
        while (enumerator_9608.hasCurrentObject () && enumerator_9695.hasCurrentObject () && bool_6) {
          result_result = function_compareSyntaxSignature (enumerator_9608.current_mInstructionList (HERE), enumerator_9695.current_mInstructionList (HERE), enumerator_9695.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 230)) ;
          enumerator_9608.gotoNextObject () ;
          enumerator_9695.gotoNextObject () ;
          if (enumerator_9608.hasCurrentObject () && enumerator_9695.hasCurrentObject ()) {
            bool_6 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_syntaxInstructionForGeneration var_si_9922 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_9922.ptr ()) {
        test_7 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_si_9922.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction"), fixItArray8  COMMA_SOURCE_FILE ("instruction-select.galgas", 233)) ;
        result_result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      const GGS_selectInstructionForGeneration temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray10  COMMA_SOURCE_FILE ("instruction-select.galgas", 237)) ;
      result_result = GGS_bool (false) ;
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = result_result.operator_not (SOURCE_FILE ("instruction-select.galgas", 240)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_selectInstructionForGeneration temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray13  COMMA_SOURCE_FILE ("instruction-select.galgas", 241)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 256)) COMMA_SOURCE_FILE ("instruction-select.galgas", 256)) ;
  }
  const GGS_selectInstructionForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (select_").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-select.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 257)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 257)) ;
  const GGS_selectInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_1.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (GGS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 258)) ;
  const GGS_selectInstructionForGeneration temp_2 = this ;
  UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_11206 (temp_2.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
  GGS_uint index_11184 (uint32_t (0)) ;
  while (enumerator_11206.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case ").add_operation (index_11184.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)).getter_string (SOURCE_FILE ("instruction-select.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)).add_operation (GGS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 260)) ;
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_11206.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 261)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 269)) ;
    enumerator_11206.gotoNextObject () ;
    index_11184.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 259)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 271)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 272)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 273)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@terminalCheckInstructionAST transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionAST::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                                      const GGS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                                      GGS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                                      GGS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_terminalSymbolIndex_7216 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_terminalCheckInstructionAST temp_1 = this ;
    const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element var_entry_7247 = ioArgument_ioActuallyUsedTerminalSymbolMap.readSubscript__3F_ (temp_1.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioActuallyUsedTerminalSymbolMap.readSubscript__3F_ (temp_1.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      var_terminalSymbolIndex_7216 = var_entry_7247.readProperty_mTerminalIndex () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_terminalSymbolIndex_7216 = ioArgument_ioActuallyUsedTerminalSymbolMap.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 158)) ;
    {
    const GGS_terminalCheckInstructionAST temp_2 = this ;
    ioArgument_ioActuallyUsedTerminalSymbolMap.setter_insertKey (temp_2.readProperty_mTerminalName (), var_terminalSymbolIndex_7216, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 159)) ;
    }
  }
  const GGS_terminalCheckInstructionAST temp_3 = this ;
  const GGS_terminalCheckInstructionAST temp_4 = this ;
  ioArgument_ioSyntaxInstructionList.addAssignOperation (GGS_terminalInstructionForGrammarAnalysis::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), temp_4.readProperty_mTerminalName (), var_terminalSymbolIndex_7216, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 161)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@terminalCheckInstructionAST analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionAST::method_analyzeSyntaxInstruction (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        const GGS_bool constinArgument_inHasTranslateFeature,
                                                                        const GGS_terminalMap constinArgument_inTerminalMap,
                                                                        const GGS_string constinArgument_inLexiqueName,
                                                                        const GGS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                        const GGS_string /* constinArgument_inComponentName */,
                                                                        const GGS_stringset constinArgument_inIndexNameSet,
                                                                        GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        GGS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalSentValueList var_sentAttributeList_8534 ;
  const GGS_terminalCheckInstructionAST temp_0 = this ;
  constinArgument_inTerminalMap.method_searchKey (temp_0.readProperty_mTerminalName (), var_sentAttributeList_8534, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 184)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_terminalCheckInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 186)).objectCompare (var_sentAttributeList_8534.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 186)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_terminalCheckInstructionAST temp_3 = this ;
      const GGS_terminalCheckInstructionAST temp_4 = this ;
      GGS_string temp_5 ;
      const GalgasBool test_6 = GGS_bool (ComparisonKind::greaterThan, var_sentAttributeList_8534.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 189)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        temp_5 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_6) {
        temp_5 = GGS_string::makeEmptyString () ;
      }
      const GGS_terminalCheckInstructionAST temp_7 = this ;
      const GGS_terminalCheckInstructionAST temp_8 = this ;
      GGS_string temp_9 ;
      const GalgasBool test_10 = GGS_bool (ComparisonKind::greaterThan, temp_8.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 192)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        temp_9 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_10) {
        temp_9 = GGS_string::makeEmptyString () ;
      }
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTerminalName ().readProperty_location (), GGS_string ("naming the '$").add_operation (temp_4.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 188)).add_operation (GGS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 188)).add_operation (var_sentAttributeList_8534.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 188)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 188)).add_operation (GGS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 188)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 189)).add_operation (GGS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 189)).add_operation (temp_7.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 191)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 190)).add_operation (GGS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 191)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 191)), fixItArray11  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 187)) ;
    }
  }
  GGS_terminalCheckAssignementList var_terminalCheckAssignementList_9063 = GGS_terminalCheckAssignementList::init (inCompiler COMMA_HERE) ;
  const GGS_terminalCheckInstructionAST temp_12 = this ;
  UpEnumerator_actualInputParameterListAST enumerator_9152 (temp_12.readProperty_mActualInputParameterList ()) ;
  UpEnumerator_lexicalSentValueList enumerator_9250 (var_sentAttributeList_8534) ;
  while (enumerator_9152.hasCurrentObject () && enumerator_9250.hasCurrentObject ()) {
    callExtensionMethod_analyzeInputParameter ((cPtr_abstractInputParameter *) enumerator_9152.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_9250.current_mLexicalType (HERE), enumerator_9250.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList_9063, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 197)) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::notEqual, enumerator_9250.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_9152.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        GGS_string temp_14 ;
        const GalgasBool test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_9250.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          temp_14 = GGS_string (":") ;
        }else if (GalgasBool::boolFalse == test_15) {
          temp_14 = GGS_string::makeEmptyString () ;
        }
        GenericArray <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_9152.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the actual selector should be '\?").add_operation (enumerator_9250.current_mLexicalFormalSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)), fixItArray16  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)) ;
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticWarning (enumerator_9250.current_mLexicalFormalSelector (HERE).readProperty_location (), GGS_string ("the formal selector is declared here"), fixItArray17  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 207)) ;
      }
    }
    enumerator_9152.gotoNextObject () ;
    enumerator_9250.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionAST temp_18 = this ;
  UpEnumerator__32_lstringlist enumerator_9857 (temp_18.readProperty_mIndexingKeyList ()) ;
  while (enumerator_9857.hasCurrentObject ()) {
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = constinArgument_inIndexNameSet.getter_hasKey (enumerator_9857.current_mValue_30_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-terminal.galgas", 212)).operator_not (SOURCE_FILE ("instruction-terminal.galgas", 212)).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        GenericArray <FixItDescription> fixItArray20 ;
        appendFixItActions (fixItArray20, EnumFixItKind::fixItReplace, constinArgument_inIndexNameSet) ;
        inCompiler->emitSemanticError (enumerator_9857.current_mValue_30_ (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_9857.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 213)).add_operation (GGS_string ("' indexing name is not declared by the lexique"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 213)), fixItArray20  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 213)) ;
      }
    }
    enumerator_9857.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionAST temp_21 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_21.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 217)) ;
  const GGS_terminalCheckInstructionAST temp_22 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_22.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 223)) ;
  const GGS_terminalCheckInstructionAST temp_23 = this ;
  const GGS_terminalCheckInstructionAST temp_24 = this ;
  const GGS_terminalCheckInstructionAST temp_25 = this ;
  const GGS_terminalCheckInstructionAST temp_26 = this ;
  const GGS_terminalCheckInstructionAST temp_27 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_terminalCheckInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_23.readProperty_mInstructionLocation (), temp_24.readProperty_mTerminalName (), constinArgument_inLexiqueName, var_terminalCheckAssignementList_9063, temp_25.readProperty_mIndexingKeyList (), temp_26.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (), temp_27.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 230)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@terminalInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GGS_rowList & ioArgument_ioRowList,
                                                                                      const GGS_uint constinArgument_inRow,
                                                                                      GGS_uint & ioArgument_ioColumn,
                                                                                      GGS_string & ioArgument_ioCurrentNode,
                                                                                      GGS_string & ioArgument_ioArrowShape,
                                                                                      GGS_string & ioArgument_ioArrows,
                                                                                      GGS_uint & /* ioArgument_ioMaxUsedRowIndex */,
                                                                                      const GGS_bool /* constinArgument_inDebug */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_nodeName_12311 ;
  {
  const GGS_terminalInstructionForGrammarAnalysis temp_0 = this ;
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[terminal] {").add_operation (function_escapeForTex (temp_0.readProperty_mTerminalSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 264)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 264)), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_12311, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 263)) ;
  }
  ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (var_nodeName_12311, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)) ;
  ioArgument_ioCurrentNode = var_nodeName_12311 ;
  ioArgument_ioArrowShape = GGS_string ("--") ;
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 272)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@terminalInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_terminalInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@terminalCheckInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::method_appendSyntaxSignature (const GGS_string /* constinArgument_inPosfix */,
                                                                               GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_terminalCheckInstructionForGeneration temp_0 = this ;
  const GGS_terminalCheckInstructionForGeneration temp_1 = this ;
  const GGS_terminalCheckInstructionForGeneration temp_2 = this ;
  const GGS_terminalCheckInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_terminalCheckInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTerminalName (), temp_2.readProperty_mLexiqueIdentifier (), GGS_terminalCheckAssignementList::init (inCompiler COMMA_HERE), temp_3.readProperty_mIndexingKeyList (), GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE), GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 306)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@terminalCheckInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_terminalCheckInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_terminalCheckInstructionForGeneration var_si_14732 (dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_14732.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_terminalCheckInstructionForGeneration temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTerminalName ().readProperty_string ().objectCompare (var_si_14732.readProperty_mTerminalName ().readProperty_string ())) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 325)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_terminalCheckInstructionForGeneration temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_14732.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 327)).add_operation (GGS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 327)), fixItArray4  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 326)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_syntaxInstructionForGeneration var_si_15072 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_15072.ptr ()) {
        test_5 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_5) {
        const GGS_terminalCheckInstructionForGeneration temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_15072.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_6.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 331)).add_operation (GGS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 331)), fixItArray7  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 330)) ;
        result_result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_terminalCheckInstructionForGeneration temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 334)) ;
      result_result = GGS_bool (false) ;
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = result_result.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 337)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_terminalCheckInstructionForGeneration temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 338)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@terminalCheckInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::method_generateInstruction (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GGS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_terminalCheckInstructionForGeneration temp_0 = this ;
  UpEnumerator_terminalCheckAssignementList enumerator_16082 (temp_0.readProperty_mTerminalCheckAssignementList ()) ;
  while (enumerator_16082.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_16082.current_mTypeName (HERE).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (enumerator_16082.current_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 356)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 356)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_16082.current_mTargetVarCppName (HERE).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)).add_operation (GGS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_16082.current_mSourceLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 360)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" () ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 361)) ;
    enumerator_16082.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionForGeneration temp_2 = this ;
  UpEnumerator__32_lstringlist enumerator_16515 (temp_2.readProperty_mIndexingKeyList ()) ;
  while (enumerator_16515.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 365)) ;
    const GGS_terminalCheckInstructionForGeneration temp_3 = this ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("->enterIndexing (Lexique_").add_operation (temp_3.readProperty_mLexiqueIdentifier (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 366)).add_operation (GGS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 366)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_16515.current_mValue_30_ (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 367)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (enumerator_16515.current_mValue_31_ (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-terminal.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 368)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 368)) ;
    enumerator_16515.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionForGeneration temp_4 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_4.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GGS_string ("inCompiler->separatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 371)) ;
  const GGS_terminalCheckInstructionForGeneration temp_5 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_5.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GGS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 377)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 384)) COMMA_SOURCE_FILE ("instruction-terminal.galgas", 384)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 385)).add_operation (GGS_string ("->acceptTerminal (Lexique_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 385)) ;
  const GGS_terminalCheckInstructionForGeneration temp_6 = this ;
  const GGS_terminalCheckInstructionForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_6.readProperty_mLexiqueIdentifier ().add_operation (GGS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 386)).add_operation (temp_7.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 386)) ;
  const GGS_terminalCheckInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 387)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 387)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@nonterminalCallInstruction transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalCallInstruction::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                                     const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                                     GGS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                                     GGS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_nonTerminalSymbolIndex_4840 ;
  const GGS_nonterminalCallInstruction temp_0 = this ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_4863 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_4840, joker_4863, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 94)) ;
  const GGS_nonterminalCallInstruction temp_1 = this ;
  const GGS_nonterminalCallInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssignOperation (GGS_nonTerminalInstructionForGrammarAnalysis::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_4840, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 95)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@nonterminalCallInstruction analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalCallInstruction::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       const GGS_bool constinArgument_inHasTranslateFeature,
                                                                       const GGS_terminalMap /* constinArgument_inTerminalMap */,
                                                                       const GGS_string /* constinArgument_inLexiqueName */,
                                                                       const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                                       const GGS_string /* constinArgument_inComponentName */,
                                                                       const GGS_stringset /* constinArgument_inIndexNameSet */,
                                                                       GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       GGS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonterminalLabelMap var_labelMap_6312 ;
  const GGS_nonterminalCallInstruction temp_0 = this ;
  constinArgument_inNonterminalMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_labelMap_6312, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 117)) ;
  GGS_formalParameterSignature var_signature_6356 ;
  GGS_formalParameterListForGeneration joker_6402 ; // Joker input parameter
  GGS_location joker_6416 ; // Joker input parameter
  var_labelMap_6312.method_searchKey (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-non-terminal.galgas", 119)), joker_6402, var_signature_6356, joker_6416, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 119)) ;
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_6862 ;
  const GGS_nonterminalCallInstruction temp_1 = this ;
  const GGS_nonterminalCallInstruction temp_2 = this ;
  const GGS_nonterminalCallInstruction temp_3 = this ;
  extensionMethod_analyzeRoutineArguments (temp_1.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_2.readProperty_mNonterminalName (), GGS_string ("'<").add_operation (temp_3.readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 127)).add_operation (GGS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 127)), var_signature_6356, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_6862, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 121)) ;
  const GGS_nonterminalCallInstruction temp_4 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_4.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 134)) ;
  const GGS_nonterminalCallInstruction temp_5 = this ;
  const GGS_nonterminalCallInstruction temp_6 = this ;
  const GGS_nonterminalCallInstruction temp_7 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_nonterminalInstructionForGeneration::init_21__21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), temp_6.readProperty_mNonterminalName ().readProperty_string (), GGS_string::makeEmptyString (), var_actualParameterListForGeneration_6862, temp_7.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 141)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@nonterminalInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::method_appendSyntaxSignature (const GGS_string constinArgument_inPosfix,
                                                                             GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_nonterminalInstructionForGeneration temp_0 = this ;
  const GGS_nonterminalInstructionForGeneration temp_1 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_nonterminalInstructionForGeneration::init_21__21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mNonterminalName (), constinArgument_inPosfix, GGS_actualParameterListForGeneration::init (inCompiler COMMA_HERE), GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 173)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@nonterminalInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_nonterminalInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_nonterminalInstructionForGeneration var_si_9178 (dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_9178.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nonterminalInstructionForGeneration temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mNonterminalName ().objectCompare (var_si_9178.readProperty_mNonterminalName ())) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 191)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_nonterminalInstructionForGeneration temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_9178.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_3.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 193)).add_operation (GGS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 193)), fixItArray4  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 192)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_syntaxInstructionForGeneration var_si_9519 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_9519.ptr ()) {
        test_5 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_5) {
        const GGS_nonterminalInstructionForGeneration temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_9519.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_6.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 197)).add_operation (GGS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 197)), fixItArray7  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 196)) ;
        result_result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_nonterminalInstructionForGeneration temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 200)) ;
      result_result = GGS_bool (false) ;
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 203)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_nonterminalInstructionForGeneration temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 204)) ;
    }
  }
//---
  return result_result ;
}


