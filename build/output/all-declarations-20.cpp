#include "all-declarations-20.h"
//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                             const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                             const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                             const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                             const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_uintType_3923 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("u32"), var_uintType_3923, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 71)) ;
  }
  GGS_unifiedTypeMapEntry var_elementType_4008 ;
  {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_elementTypeName (), var_elementType_4008, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 73)) ;
  }
  GGS_getterMap var_getterMap_4098 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_4098, inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 75)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4098, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 76)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_1 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4098, ioArgument_ioTypeMap, GGS_string ("first"), temp_1.readProperty_elementTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 83)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_2 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4098, ioArgument_ioTypeMap, GGS_string ("last"), temp_2.readProperty_elementTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 90)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_3 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4098, ioArgument_ioTypeMap, GGS_string ("removingFirst"), GGS_string::makeEmptyString (), GGS_string ("u32"), GGS_string ("inIndex"), temp_3.readProperty_arrayTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 97)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4098, ioArgument_ioTypeMap, GGS_string ("sublist"), GGS_string ("from"), GGS_string ("u32"), GGS_string ("inStartIndex"), GGS_string ("count"), GGS_string ("u32"), GGS_string ("inCount"), temp_4.readProperty_arrayTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 105)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_5342 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_5438 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_5 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 121)) ;
  var_setterMap_5438.setter_insertKey (GGS_string ("removeAll").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 119)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 120)), temp_5, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 123)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 118)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_6 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 129)) ;
  temp_6.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 129)), var_elementType_4008, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 129)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 129)) ;
  var_setterMap_5438.setter_insertKey (GGS_string ("append").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 127)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 128)), temp_6, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 131)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 126)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_7 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 137)) ;
  temp_7.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 137)), var_elementType_4008, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-array.galgas4", 137)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 137)) ;
  var_setterMap_5438.setter_insertKey (GGS_string ("removeFirst").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 135)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 136)), temp_7, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 139)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 134)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_8 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 145)) ;
  temp_8.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 145)), var_elementType_4008, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-array.galgas4", 145)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 145)) ;
  var_setterMap_5438.setter_insertKey (GGS_string ("removeLast").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 143)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 144)), temp_8, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 147)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 142)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_9 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 154)) ;
  temp_9.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 153)), var_elementType_4008, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-array.galgas4", 153)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 153)) ;
  temp_9.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("at").getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 154)), var_uintType_3923, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 154)), GGS_string ("inIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 154)) ;
  var_setterMap_5438.setter_insertKey (GGS_string ("remove").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 151)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 152)), temp_9, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 157)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 150)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_10 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 165)) ;
  temp_10.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 164)), var_elementType_4008, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 164)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 164)) ;
  temp_10.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("at").getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 165)), var_uintType_3923, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas4", 165)), GGS_string ("inInsertionIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 165)) ;
  var_setterMap_5438.setter_insertKey (GGS_string ("insert").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 162)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas4", 163)), temp_10, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas4", 168)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 161)) ;
  }
  GGS_initializerMap var_initializerMap_6779 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_6836 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_arrayTypeDeclarationAST temp_11 = this ;
  var_initializerMap_6779.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_6836, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 175)), temp_11.readProperty_arrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_6836, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 174)) ;
  }
  GGS_readSubscriptMap var_readSubscriptMap_7039 = GGS_readSubscriptMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ temp_12 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 180)) ;
  temp_12.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 180)), var_uintType_3923, GGS_string ("inIndex"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 180)) ;
  GGS__5B_functionSignatureElement_5D_ var_subscriptArgumentList_7098 = temp_12 ;
  {
  var_readSubscriptMap_7039.setter_insertKey (extensionGetter_subcriptSignature (var_subscriptArgumentList_7098, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 182)).getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 182)), var_subscriptArgumentList_7098, var_elementType_4008, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 181)) ;
  }
  GGS_writeSubscriptMap var_writeSubcriptMap_7358 = GGS_writeSubscriptMap::init (inCompiler COMMA_HERE) ;
  {
  var_writeSubcriptMap_7358.setter_insertKey (extensionGetter_subcriptSignature (var_subscriptArgumentList_7098, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 189)).getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas4", 189)), var_subscriptArgumentList_7098, var_elementType_4008, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 188)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_13 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_13.readProperty_arrayTypeName (), GGS_bool (false), var_initializerMap_6779, var_getterMap_4098, var_setterMap_5438, var_instanceMethodMap_5342, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 194)) ;
  }
  GGS_typeFeatures var_features_7998 = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-array.galgas4", 210)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-array.galgas4", 210)) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 210)) ;
  {
  const GGS_arrayTypeDeclarationAST temp_14 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_14.readProperty_arrayTypeName (), var_features_7998, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 211)) ;
  }
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptor_8325 = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE) ;
  var_enumerationDescriptor_8325.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_elementType_4008, GGS_string ("entry"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 220)) ;
  const GGS_arrayTypeDeclarationAST temp_15 = this ;
  const GGS_arrayTypeDeclarationAST temp_16 = this ;
  const GGS_arrayTypeDeclarationAST temp_17 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8441 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_15.readProperty_arrayTypeName (), temp_16.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas4", 227)), GGS_typeKindEnum::class_func_valueType (SOURCE_FILE ("declaration-type-array.galgas4", 228)), GGS_bool (true), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_6779, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_4098, var_setterMap_5438, var_instanceMethodMap_5342, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas4", 239)), var_readSubscriptMap_7039, var_writeSubcriptMap_7358, var_enumerationDescriptor_8325, var_features_7998, GGS_bool (false), var_elementType_4008, GGS_string ("array-").add_operation (temp_17.readProperty_arrayTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-array.galgas4", 246)), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 246)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-array.galgas4", 247)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8441.readProperty_typeName (), var_typeDefinition_8441, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 249)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                            const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                            const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                            const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                            GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_10351 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 267)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10351, var_nameForUsefulness_10351, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 268)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_arrayTypeDeclarationAST temp_2 = this ;
    GGS_bool test_3 = temp_2.readProperty_isUsefull () ;
    if (GalgasBool::boolTrue != test_3.boolEnum ()) {
      const GGS_arrayTypeDeclarationAST temp_4 = this ;
      test_3 = temp_4.readProperty_isPredefined () ;
    }
    test_1 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_10351  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 270)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_5 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_10615 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 272)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10351, var_elementTypeNameForUsefulness_10615 COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 273)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_arrayTypeDeclarationAST temp_7 = this ;
    GGS_bool test_8 = temp_7.readProperty_isUsefull () ;
    if (GalgasBool::boolTrue != test_8.boolEnum ()) {
      const GGS_arrayTypeDeclarationAST temp_9 = this ;
      test_8 = temp_9.readProperty_isPredefined () ;
    }
    test_6 = test_8.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_elementTypeNameForUsefulness_10615  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 275)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_10 = this ;
  GGS_lstring var_initializerNameForUsefulness_10993 = function_initializerNameForUsefulEntitiesGraph (temp_10.readProperty_arrayTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 280)), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 278)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_10993, var_initializerNameForUsefulness_10993, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 282)) ;
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_arrayTypeDeclarationAST temp_12 = this ;
    GGS_bool test_13 = temp_12.readProperty_isUsefull () ;
    if (GalgasBool::boolTrue != test_13.boolEnum ()) {
      const GGS_arrayTypeDeclarationAST temp_14 = this ;
      test_13 = temp_14.readProperty_isPredefined () ;
    }
    test_11 = test_13.boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_10993  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 284)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_15 = this ;
  GGS_unifiedTypeMapEntry var_selfType_11386 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_15.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 287)) ;
  const GGS_arrayTypeDeclarationAST temp_16 = this ;
  const GGS_arrayTypeDeclarationAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_arrayTypeForGeneration::init_21_infoMessage_21__21_ (GGS_string ("array type ").add_operation (temp_16.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 289)), var_selfType_11386, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_17.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 291)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 288)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                GGS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_12342 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 310)) ;
  const GGS_arrayTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_arrayTypeGenerationTemplate::class_func_arrayTypeHeader_31_ (var_selfTypeDefinition_12342.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 313)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_12342.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 314)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 311)) ;
  const GGS_arrayTypeForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_12342.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 318)), var_selfTypeDefinition_12342.readProperty_isConcrete (), var_selfTypeDefinition_12342.readProperty_initializerMap (), var_selfTypeDefinition_12342.readProperty_classFunctionMap (), var_selfTypeDefinition_12342.readProperty_getterMap (), var_selfTypeDefinition_12342.readProperty_setterMap (), var_selfTypeDefinition_12342.readProperty_instanceMethodMap (), var_selfTypeDefinition_12342.readProperty_classMethodMap (), var_selfTypeDefinition_12342.readProperty_readSubscriptMap (), var_selfTypeDefinition_12342.readProperty_writeSubscriptMap (), var_selfTypeDefinition_12342.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_12342.readProperty_features (), var_selfTypeDefinition_12342.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_12342.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 316)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 316)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_string & outArgument_outImplementation,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_elementType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 340)) ;
  const GGS_arrayTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 341)) ;
  const GGS_arrayTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_13804 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 342)) ;
  const GGS_arrayTypeForGeneration temp_3 = this ;
  outArgument_outImplementation = GGS_arrayTypeGenerationTemplate::class_func_arrayTypeSpecificImplementation (var_selfTypeDefinition_13804.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 345)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_13804.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 346)), var_selfTypeDefinition_13804.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-array.galgas4", 347)) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 347)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 343)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'makeDictionaryTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeDictionaryTypeName (const GGS_string & constinArgument_inKeyTypeName,
                                            const GGS_string & constinArgument_inValueTypeName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = GGS_string ("[").add_operation (constinArgument_inKeyTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 23)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 23)).add_operation (constinArgument_inValueTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 23)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 23)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'makeDictionaryTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeDictionaryTypeLName (const GGS_lstring & constinArgument_inKeyTypeName,
                                              const GGS_lstring & constinArgument_inValueTypeName,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (function_makeDictionaryTypeName (constinArgument_inKeyTypeName.readProperty_string (), constinArgument_inValueTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 30)), constinArgument_inKeyTypeName.readProperty_location ().getter_union (constinArgument_inValueTypeName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 31)), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@dictionaryDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_dictionaryDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_dictionaryDeclarationAST temp_0 = this ;
  result = GGS_string ("dictionary ").add_operation (temp_0.readProperty_dictionaryTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 49)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictionaryDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_dictionaryDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  GGS_lstring joker_2935 ; // Joker input parameter
  const GGS_dictionaryDeclarationAST temp_0 = this ;
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_2935, temp_0.readProperty_valueTypeName (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 58)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictionaryDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_dictionaryDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                    GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                    GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                    GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                    GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                    GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictionaryDeclarationAST temp_0 = this ;
  const GGS_dictionaryDeclarationAST temp_1 = this ;
  GGS_lstring var_key_3816 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_dictionaryTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 74)), temp_1.readProperty_dictionaryTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_dictionaryDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3816, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 75)) ;
  }
  {
  const GGS_dictionaryDeclarationAST temp_3 = this ;
  const GGS_dictionaryDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_keyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 76)), temp_4.readProperty_keyTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 76)) ;
  }
  {
  const GGS_dictionaryDeclarationAST temp_5 = this ;
  const GGS_dictionaryDeclarationAST temp_6 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_5.readProperty_valueTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 77)), temp_6.readProperty_valueTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 77)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictionaryDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_dictionaryDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                              const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                              const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                              const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                              const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_keyType_5003 ;
  {
  const GGS_dictionaryDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_0.readProperty_keyTypeName ().readProperty_string (), var_keyType_5003, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 93)) ;
  }
  GGS_unifiedTypeMapEntry var_valueType_5089 ;
  {
  const GGS_dictionaryDeclarationAST temp_1 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_1.readProperty_valueTypeName ().readProperty_string (), var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 95)) ;
  }
  GGS__5B_enumerationDescriptor_5D_ temp_2 = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 97)) ;
  temp_2.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_keyType_5003, GGS_string ("key"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 97)) ;
  temp_2.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_valueType_5089, GGS_string ("value"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 97)) ;
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptor_5136 = temp_2 ;
  GGS_getterMap var_getterMap_5293 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_5293, inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 99)) ;
  }
  {
  const GGS_dictionaryDeclarationAST temp_3 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5293, ioArgument_ioTypeMap, GGS_string ("contains"), GGS_string::makeEmptyString (), temp_3.readProperty_keyTypeName ().readProperty_string (), GGS_string ("inKey"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 101)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5293, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 109)) ;
  }
  GGS_setterMap var_setterMap_5764 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_dictionaryDeclarationAST temp_4 = this ;
  GGS__5B_formalParameterSignatureElement_5D_ temp_5 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 121)) ;
  temp_5.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("key").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 121)), var_keyType_5003, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dictionary.galgas4", 121)), GGS_string ("inKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 121)) ;
  var_setterMap_5764.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("remove"), temp_4.readProperty_dictionaryTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dictionary.galgas4", 120)), temp_5, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dictionary.galgas4", 123)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 118)) ;
  }
  GGS_initializerMap var_initializerMap_6065 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_6120 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_dictionaryDeclarationAST temp_6 = this ;
  var_initializerMap_6065.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_6120, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 130)), temp_6.readProperty_dictionaryTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_6120, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 129)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_6319 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_dictionaryDeclarationAST temp_7 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_7.readProperty_dictionaryTypeName (), GGS_bool (false), var_initializerMap_6065, var_getterMap_5293, var_setterMap_5764, var_instanceMethodMap_6319, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 135)) ;
  }
  GGS_typeFeatures var_features_6765 = GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-dictionary.galgas4", 151)).operator_or (GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("declaration-type-dictionary.galgas4", 151)) COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 151)) ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_dictionaryDeclarationAST temp_9 = this ;
    test_8 = temp_9.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      var_features_6765.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-dictionary.galgas4", 153)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 153)) ;
    }
  }
  {
  const GGS_dictionaryDeclarationAST temp_10 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_10.readProperty_dictionaryTypeName (), var_features_6765, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 155)) ;
  }
  const GGS_dictionaryDeclarationAST temp_11 = this ;
  GGS_lstring var_optionalElementTypeName_7143 = function_makeOptionalTypeLName (temp_11.readProperty_valueTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 163)) ;
  GGS_unifiedTypeMapEntry var_optionalElementType_7303 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_optionalElementTypeName_7143, var_optionalElementType_7303, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 164)) ;
  }
  GGS_readSubscriptMap var_readSubscriptMap_7369 = GGS_readSubscriptMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ temp_12 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 167)) ;
  temp_12.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 167)), var_keyType_5003, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 167)) ;
  GGS__5B_functionSignatureElement_5D_ var_firstArgumentTypeList_7426 = temp_12 ;
  {
  var_readSubscriptMap_7369.setter_insertKey (extensionGetter_subcriptSignature (var_firstArgumentTypeList_7426, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 169)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 169)), var_firstArgumentTypeList_7426, var_optionalElementType_7303, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 168)) ;
  }
  GGS__5B_functionSignatureElement_5D_ temp_13 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 175)) ;
  temp_13.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 174)), var_keyType_5003, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 174)) ;
  temp_13.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string ("default").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 175)), var_valueType_5089, GGS_string ("inDefaultValue"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 175)) ;
  GGS__5B_functionSignatureElement_5D_ var_secondArgumentTypeList_7665 = temp_13 ;
  {
  var_readSubscriptMap_7369.setter_insertKey (extensionGetter_subcriptSignature (var_secondArgumentTypeList_7665, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 178)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 178)), var_secondArgumentTypeList_7665, var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 177)) ;
  }
  GGS__5B_functionSignatureElement_5D_ temp_14 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 183)) ;
  temp_14.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string ("unwrap").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 183)), var_keyType_5003, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 183)) ;
  GGS__5B_functionSignatureElement_5D_ var_thirdArgumentTypeList_7968 = temp_14 ;
  {
  var_readSubscriptMap_7369.setter_insertKey (extensionGetter_subcriptSignature (var_thirdArgumentTypeList_7968, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 186)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 186)), var_thirdArgumentTypeList_7968, var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 185)) ;
  }
  GGS_writeSubscriptMap var_writeSubcriptMap_8224 = GGS_writeSubscriptMap::init (inCompiler COMMA_HERE) ;
  {
  var_writeSubcriptMap_8224.setter_insertKey (extensionGetter_subcriptSignature (var_firstArgumentTypeList_7426, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 193)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 193)), var_firstArgumentTypeList_7426, var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 192)) ;
  }
  GGS__5B_functionSignatureElement_5D_ temp_15 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 198)) ;
  temp_15.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string ("unique").getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 198)), var_keyType_5003, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 198)) ;
  GGS__5B_functionSignatureElement_5D_ var_writeUnique_5F_ArgumentTypeList_8412 = temp_15 ;
  {
  var_writeSubcriptMap_8224.setter_insertKey (extensionGetter_subcriptSignature (var_writeUnique_5F_ArgumentTypeList_8412, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 201)).getter_nowhere (SOURCE_FILE ("declaration-type-dictionary.galgas4", 201)), var_writeUnique_5F_ArgumentTypeList_8412, var_valueType_5089, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 200)) ;
  }
  const GGS_dictionaryDeclarationAST temp_16 = this ;
  const GGS_dictionaryDeclarationAST temp_17 = this ;
  GGS__5B_typedProperty_5D_ temp_18 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 216)) ;
  const GGS_dictionaryDeclarationAST temp_19 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8673 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_16.readProperty_dictionaryTypeName (), temp_17.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dictionary.galgas4", 211)), GGS_typeKindEnum::class_func_valueType (SOURCE_FILE ("declaration-type-dictionary.galgas4", 212)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), temp_18, var_initializerMap_6065, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_5293, var_setterMap_5764, var_instanceMethodMap_6319, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dictionary.galgas4", 223)), var_readSubscriptMap_7369, var_writeSubcriptMap_8224, var_enumerationDescriptor_5136, var_features_6765, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dictionary.galgas4", 229)), GGS_string ("dictionary-").add_operation (temp_19.readProperty_dictionaryTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-dictionary.galgas4", 230)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 230)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-dictionary.galgas4", 231)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8673.readProperty_typeName (), var_typeDefinition_8673, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 233)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictionaryDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_dictionaryDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                             const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                             GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictionaryDeclarationAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_keyType_10403 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_keyTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 250)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_keyType_10403, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 251)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-dictionary.galgas4", 251)) COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 251)).operator_not (SOURCE_FILE ("declaration-type-dictionary.galgas4", 251)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_dictionaryDeclarationAST temp_2 = this ;
      const GGS_dictionaryDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_keyTypeName ().readProperty_location (), GGS_string ("the @").add_operation (temp_3.readProperty_keyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 252)).add_operation (GGS_string (" type is not comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 252)), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 252)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_5 = this ;
  GGS_lstring var_nameForUsefulness_10651 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_dictionaryTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 255)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10651, var_nameForUsefulness_10651, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 256)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_dictionaryDeclarationAST temp_7 = this ;
    test_6 = temp_7.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_10651  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 258)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_8 = this ;
  GGS_lstring var_keyTypeNameForUsefulness_10892 = function_typeNameForUsefulEntitiesGraph (temp_8.readProperty_keyTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 260)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10651, var_keyTypeNameForUsefulness_10892 COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 261)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_dictionaryDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_keyTypeNameForUsefulness_10892  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 263)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_11 = this ;
  GGS_lstring var_valueTypeNameForUsefulness_11159 = function_typeNameForUsefulEntitiesGraph (temp_11.readProperty_valueTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 265)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10651, var_valueTypeNameForUsefulness_11159 COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 266)) ;
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_dictionaryDeclarationAST temp_13 = this ;
    test_12 = temp_13.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_valueTypeNameForUsefulness_11159  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 268)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_14 = this ;
  GGS_lstring var_initializerNameForUsefulness_11499 = function_initializerNameForUsefulEntitiesGraph (temp_14.readProperty_dictionaryTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 273)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 271)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_11499, var_initializerNameForUsefulness_11499, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 275)) ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    const GGS_dictionaryDeclarationAST temp_16 = this ;
    test_15 = temp_16.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_11499  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 277)) ;
    }
  }
  const GGS_dictionaryDeclarationAST temp_17 = this ;
  GGS_lstring var_optionalElementTypeName_11883 = function_makeOptionalTypeLName (temp_17.readProperty_valueTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 280)) ;
  GGS_unifiedTypeMapEntry var_optionalElementType_11973 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_optionalElementTypeName_11883, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 281)) ;
  const GGS_dictionaryDeclarationAST temp_18 = this ;
  const GGS_dictionaryDeclarationAST temp_19 = this ;
  const GGS_dictionaryDeclarationAST temp_20 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_dictionaryTypeForGeneration::init_21_infoMessage_21__21_valueType_21_keyType_21_optionalValueType (GGS_string ("dictionary ").add_operation (temp_18.readProperty_dictionaryTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 284)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_19.readProperty_dictionaryTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 285)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_20.readProperty_valueTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 286)), var_keyType_10403, var_optionalElementType_11973, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 283)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictionaryTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_dictionaryTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_string & outArgument_outHeader,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictionaryTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_0.readProperty_valueType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 305)) ;
  const GGS_dictionaryTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_1.readProperty_optionalValueType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 306)) ;
  const GGS_dictionaryTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_13254 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 307)) ;
  const GGS_dictionaryTypeForGeneration temp_3 = this ;
  const GGS_dictionaryTypeForGeneration temp_4 = this ;
  const GGS_dictionaryTypeForGeneration temp_5 = this ;
  outArgument_outHeader = GGS_dictionaryGenerationTemplate::class_func_dictTypeHeader_31_ (var_selfTypeDefinition_13254.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 310)), var_selfTypeDefinition_13254.readProperty_enumerationDescriptorList (), extensionGetter_identifierRepresentation (temp_4.readProperty_keyType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 312)), extensionGetter_identifierRepresentation (temp_5.readProperty_valueType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 313)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 308)) ;
  const GGS_dictionaryTypeForGeneration temp_6 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_13254.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 317)), var_selfTypeDefinition_13254.readProperty_isConcrete (), var_selfTypeDefinition_13254.readProperty_initializerMap (), var_selfTypeDefinition_13254.readProperty_classFunctionMap (), var_selfTypeDefinition_13254.readProperty_getterMap (), var_selfTypeDefinition_13254.readProperty_setterMap (), var_selfTypeDefinition_13254.readProperty_instanceMethodMap (), var_selfTypeDefinition_13254.readProperty_classMethodMap (), var_selfTypeDefinition_13254.readProperty_readSubscriptMap (), var_selfTypeDefinition_13254.readProperty_writeSubscriptMap (), var_selfTypeDefinition_13254.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_13254.readProperty_features (), var_selfTypeDefinition_13254.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_13254.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 315)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 315)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dictionaryTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_dictionaryTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                            GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_string & outArgument_outImplementation,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictionaryTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 339)) ;
  const GGS_dictionaryTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_14733 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 340)) ;
  const GGS_dictionaryTypeForGeneration temp_2 = this ;
  const GGS_dictionaryTypeForGeneration temp_3 = this ;
  const GGS_dictionaryTypeForGeneration temp_4 = this ;
  const GGS_dictionaryTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_dictionaryGenerationTemplate::class_func_dictTypeSpecificImplementation (extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 342)), var_selfTypeDefinition_14733.readProperty_enumerationDescriptorList (), extensionGetter_identifierRepresentation (temp_3.readProperty_keyType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 344)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_14733.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 345)), extensionGetter_identifierRepresentation (temp_4.readProperty_valueType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 346)), extensionGetter_identifierRepresentation (temp_5.readProperty_optionalValueType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 347)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dictionary.galgas4", 341)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'kForbiddenKeysForStruct'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_kForbiddenKeysForStruct (Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result ; // Returned variable
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 62)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("description")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 62)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("object")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 62)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("dynamicType")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 62)) ;
  result = temp_0 ;
//---
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_kForbiddenKeysForStruct = false ;
static GGS_stringset gOnceFunctionResult_kForbiddenKeysForStruct ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_kForbiddenKeysForStruct (Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_kForbiddenKeysForStruct) {
    gOnceFunctionResult_kForbiddenKeysForStruct = onceFunction_kForbiddenKeysForStruct (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_kForbiddenKeysForStruct = true ;
  }
  return gOnceFunctionResult_kForbiddenKeysForStruct ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_kForbiddenKeysForStruct (void) {
  gOnceFunctionResult_kForbiddenKeysForStruct.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_kForbiddenKeysForStruct (nullptr,
                                                                   releaseOnceFunctionResult_kForbiddenKeysForStruct) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structDeclarationAST temp_0 = this ;
  const GGS_structDeclarationAST temp_1 = this ;
  GGS_lstring var_key_3791 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 91)), temp_1.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_structDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3791, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 92)) ;
  }
  const GGS_structDeclarationAST temp_3 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_3945 (temp_3.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_3945.hasCurrentObject ()) {
    GGS_lstring var_propertyKey_3984 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_3945.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 94)), enumerator_3945.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3791, var_propertyKey_3984 COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 95)) ;
    }
    enumerator_3945.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@structDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_structDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_structDeclarationAST temp_0 = this ;
  result = GGS_string ("struct @").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 102)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                          const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                          const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_structTypeIndex_5069 ;
  {
  const GGS_structDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_structTypeName (), var_structTypeIndex_5069, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 116)) ;
  }
  GGS_propertyMap var_propertyMap_5148 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_constructorPropertyTypeList_5202 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_typedProperty_5D_ var_typedPropertyList_5261 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_structDeclarationAST temp_1 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_5310 (temp_1.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_5310.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_propertyTypeEntry_5392 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_5310.current (HERE).readProperty_typeName (), var_propertyTypeEntry_5392, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 122)) ;
    }
    GGS_string temp_2 ;
    const GalgasBool test_3 = enumerator_5310.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      temp_2 = enumerator_5310.current (HERE).readProperty_name ().readProperty_string () ;
    }else if (GalgasBool::boolFalse == test_3) {
      temp_2 = GGS_string::makeEmptyString () ;
    }
    GGS_lstring var_selector_5421 = temp_2.getter_nowhere (SOURCE_FILE ("declaration-type-struct.galgas4", 123)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = enumerator_5310.current (HERE).readProperty_initialization ().getter_isNone (SOURCE_FILE ("declaration-type-struct.galgas4", 124)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_constructorPropertyTypeList_5202.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (var_selector_5421, var_propertyTypeEntry_5392, enumerator_5310.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 125)) ;
      }
    }
    var_typedPropertyList_5261.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_propertyTypeEntry_5392, enumerator_5310.current (HERE).readProperty_name (), enumerator_5310.current (HERE).readProperty_initialization (), enumerator_5310.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 131)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 131)), enumerator_5310.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 127)) ;
    {
    var_propertyMap_5148.setter_insertKey (enumerator_5310.current (HERE).readProperty_name (), extensionGetter_accessControl (enumerator_5310.current (HERE).readProperty_accessControl (), var_structTypeIndex_5069, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 136)), enumerator_5310.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 137)), var_propertyTypeEntry_5392, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 134)) ;
    }
    enumerator_5310.gotoNextObject () ;
  }
  GGS_getterMap var_getterMap_6192 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6192, inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 142)) ;
  }
  GGS_setterMap var_setterMap_6245 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_6285 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_6333 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_structDeclarationAST temp_5 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_structTypeName (), GGS_bool (false), var_initializerMap_6285, var_getterMap_6192, var_setterMap_6245, var_instanceMethodMap_6333, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 147)) ;
  }
  GGS_typeFeatures var_features_6792 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-struct.galgas4", 162)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, var_initializerMap_6285.getter_count (SOURCE_FILE ("declaration-type-struct.galgas4", 164)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_features_6792.orAssignOperation(GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 165)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 165)) ;
      {
      const GGS_structDeclarationAST temp_7 = this ;
      var_initializerMap_6285.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_5202, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 167)), temp_7.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_5202, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 166)) ;
      }
    }
  }
  const GGS_structDeclarationAST temp_8 = this ;
  switch (temp_8.readProperty_comparison ().enumValue ()) {
  case GGS_structComparison::Enumeration::invalid:
    break ;
  case GGS_structComparison::Enumeration::enum_none:
    break ;
  case GGS_structComparison::Enumeration::enum_equatable:
    {
      var_features_6792.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 175)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 175)) ;
    }
    break ;
  case GGS_structComparison::Enumeration::enum_comparable:
    {
      var_features_6792.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 177)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 177)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 177)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 177)) ;
    }
    break ;
  }
  {
  const GGS_structDeclarationAST temp_9 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_9.readProperty_structTypeName (), var_features_6792, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 179)) ;
  }
  GGS_unifiedTypeMapEntry var_enumeratedType_7618 ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_structDeclarationAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_enumeratedElementTypeName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      var_enumeratedType_7618 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 189)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    {
    const GGS_structDeclarationAST temp_12 = this ;
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_12.readProperty_enumeratedElementTypeName (), var_enumeratedType_7618, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 191)) ;
    }
  }
  const GGS_structDeclarationAST temp_13 = this ;
  const GGS_structDeclarationAST temp_14 = this ;
  const GGS_structDeclarationAST temp_15 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_7849 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_13.readProperty_structTypeName (), temp_14.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 199)), GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("declaration-type-struct.galgas4", 200)), GGS_bool (false), var_typedPropertyList_5261, var_propertyMap_5148, var_typedPropertyList_5261, var_initializerMap_6285, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_6192, var_setterMap_6245, var_instanceMethodMap_6333, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas4", 211)), GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_6792, GGS_bool (false), var_enumeratedType_7618, GGS_string ("struct-").add_operation (temp_15.readProperty_structTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-struct.galgas4", 218)), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 218)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-struct.galgas4", 219)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_7849.readProperty_typeName (), var_typeDefinition_7849, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 221)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                         const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                         const GGS_semanticContext constinArgument_inSemanticContext,
                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                         const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                         GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structDeclarationAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_structType_9433 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 234)) ;
  const GGS_structDeclarationAST temp_1 = this ;
  GGS_lstring var_structNameForUsefulness_9506 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 235)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_structDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mStructurePropertyListAST ().getter_count (SOURCE_FILE ("declaration-type-struct.galgas4", 237)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_structDeclarationAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_structTypeName ().readProperty_location (), GGS_string ("a structure cannot be empty: it must have at least one property"), fixItArray5  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 238)) ;
    }
  }
  GGS__5B_typedProperty_5D_ var_typedPropertyList_9779 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_typedProperty_5D_ var_constructorArgumentList_9828 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_propertyMap_9884 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_structDeclarationAST temp_6 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_9927 (temp_6.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_9927.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_9966 = function_typeNameForUsefulEntitiesGraph (enumerator_9927.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 244)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_9506, var_propertyTypeNameForUsefulness_9966 COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 245)) ;
    }
    GGS_unifiedTypeMapEntry var_t_10166 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_9927.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 246)) ;
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = function_kForbiddenKeysForStruct (inCompiler COMMA_HERE).getter_contains (enumerator_9927.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 247)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GGS_string var_m_10310 = GGS_string ("an property cannot be named:") ;
        UpEnumerator_stringset enumerator_10362 (function_kForbiddenKeysForStruct (inCompiler COMMA_HERE)) ;
        while (enumerator_10362.hasCurrentObject ()) {
          var_m_10310.plusAssignOperation(GGS_string (" ").add_operation (enumerator_10362.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 250)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 250)) ;
          enumerator_10362.gotoNextObject () ;
        }
        var_m_10310.plusAssignOperation(GGS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 252)) ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_9927.current (HERE).readProperty_name ().readProperty_location (), var_m_10310, fixItArray8  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 253)) ;
      }
    }
    {
    var_propertyMap_9884.setter_insertKey (enumerator_9927.current (HERE).readProperty_name (), var_t_10166, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 266)) ;
    }
    switch (enumerator_9927.current (HERE).readProperty_initialization ().enumValue ()) {
    case GGS_propertyInCollectionInitializationAST::Enumeration::invalid:
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_none:
      {
        var_constructorArgumentList_9828.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_t_10166, enumerator_9927.current (HERE).readProperty_name (), enumerator_9927.current (HERE).readProperty_initialization (), enumerator_9927.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 273)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 273)), enumerator_9927.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 269)) ;
      }
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_some:
      break ;
    }
    var_typedPropertyList_9779.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_t_10166, enumerator_9927.current (HERE).readProperty_name (), enumerator_9927.current (HERE).readProperty_initialization (), enumerator_9927.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas4", 281)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 281)), enumerator_9927.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 277)) ;
    const GGS_structDeclarationAST temp_9 = this ;
    switch (temp_9.readProperty_comparison ().enumValue ()) {
    case GGS_structComparison::Enumeration::invalid:
      break ;
    case GGS_structComparison::Enumeration::enum_none:
      break ;
    case GGS_structComparison::Enumeration::enum_equatable:
      {
        GGS_typeFeatures var_propertyFeatures_11663 = extensionGetter_definition (var_t_10166, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 288)).readProperty_features () ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = var_propertyFeatures_11663.getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas4", 289)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 289)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 289)).operator_and (var_propertyFeatures_11663.getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 290)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 290)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 290)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 289)).operator_and (var_propertyFeatures_11663.getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-struct.galgas4", 291)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 291)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 291)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 290)).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GenericArray <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_9927.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not equatable, because '").add_operation (enumerator_9927.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 293)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 293)), fixItArray11  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 292)) ;
          }
        }
      }
      break ;
    case GGS_structComparison::Enumeration::enum_comparable:
      {
        GalgasBool test_12 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_12) {
          test_12 = extensionGetter_definition (var_t_10166, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 296)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas4", 296)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 296)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 296)).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            GenericArray <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_9927.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not comparable, because '").add_operation (enumerator_9927.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 298)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 298)), fixItArray13  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 297)) ;
          }
        }
      }
      break ;
    }
    enumerator_9927.gotoNextObject () ;
  }
  GGS_stringset var_unusedVariableCppNameSet_12503 ;
  GGS_string var_initializationCode_12540 ;
  const GGS_structDeclarationAST temp_14 = this ;
  extensionMethod_buildPropertyInitializationCode (temp_14.readProperty_mStructurePropertyListAST (), var_structNameForUsefulness_9506, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, ioArgument_ioUsefulEntitiesGraph, ioArgument_ioTypeMap, var_unusedVariableCppNameSet_12503, var_initializationCode_12540, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 303)) ;
  GGS_bool var_constructorNeedsCompilerVar_12581 = var_unusedVariableCppNameSet_12503.getter_contains (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 313)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas4", 313)) ;
  const GGS_structDeclarationAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_structTypeForGeneration::init_21_infoMessage_21__21__21__21__21__21_ (GGS_string ("struct ").add_operation (temp_15.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 315)), var_structType_9433, var_typedPropertyList_9779, var_constructorArgumentList_9828, var_initializationCode_12540, var_constructorNeedsCompilerVar_12581, extensionGetter_definition (var_structType_9433, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 321)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 321)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 321)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 314)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_9506, var_structNameForUsefulness_9506, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 324)) ;
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    const GGS_structDeclarationAST temp_17 = this ;
    GGS_bool test_18 = temp_17.readProperty_isUsefullStruct () ;
    if (GalgasBool::boolTrue != test_18.boolEnum ()) {
      const GGS_structDeclarationAST temp_19 = this ;
      test_18 = temp_19.readProperty_isPredefined () ;
    }
    test_16 = test_18.boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_structNameForUsefulness_9506  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 326)) ;
    }
  }
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = extensionGetter_definition (var_structType_9433, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 329)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas4", 329)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 329)).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      const GGS_structDeclarationAST temp_21 = this ;
      GGS_lstring var_initializerForUsefulness_13388 = function_initializerNameForUsefulEntitiesGraph (temp_21.readProperty_structTypeName (), extensionGetter_initializerSignature (var_constructorArgumentList_9828, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 332)), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 330)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerForUsefulness_13388, var_initializerForUsefulness_13388, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 334)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerForUsefulness_13388, var_structNameForUsefulness_9506 COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 335)) ;
      }
      GalgasBool test_22 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_22) {
        const GGS_structDeclarationAST temp_23 = this ;
        GGS_bool test_24 = temp_23.readProperty_isUsefullStruct () ;
        if (GalgasBool::boolTrue != test_24.boolEnum ()) {
          const GGS_structDeclarationAST temp_25 = this ;
          test_24 = temp_25.readProperty_isPredefined () ;
        }
        test_22 = test_24.boolEnum () ;
        if (GalgasBool::boolTrue == test_22) {
          ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerForUsefulness_13388  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 337)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_structTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                 GGS_string & outArgument_outHeader,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structTypeForGeneration temp_0 = this ;
  UpEnumerator__5B_typedProperty_5D_ enumerator_14743 (temp_0.readProperty_mTypedPropertyList ()) ;
  while (enumerator_14743.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_14743.current (HERE).readProperty_typeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 361)) ;
    enumerator_14743.gotoNextObject () ;
  }
  const GGS_structTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_14844 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 363)) ;
  const GGS_structTypeForGeneration temp_2 = this ;
  const GGS_structTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_structureGenerationTemplate::class_func_structTypeHeader_31_ (var_selfTypeDefinition_14844.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 366)), temp_3.readProperty_mTypedPropertyList (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 364)) ;
  const GGS_structTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_14844.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 371)), var_selfTypeDefinition_14844.readProperty_isConcrete (), var_selfTypeDefinition_14844.readProperty_initializerMap (), var_selfTypeDefinition_14844.readProperty_classFunctionMap (), var_selfTypeDefinition_14844.readProperty_getterMap (), var_selfTypeDefinition_14844.readProperty_setterMap (), var_selfTypeDefinition_14844.readProperty_instanceMethodMap (), var_selfTypeDefinition_14844.readProperty_classMethodMap (), var_selfTypeDefinition_14844.readProperty_readSubscriptMap (), var_selfTypeDefinition_14844.readProperty_writeSubscriptMap (), var_selfTypeDefinition_14844.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_14844.readProperty_features (), var_selfTypeDefinition_14844.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_14844.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 369)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 369)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_structTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_string & outArgument_outImplementation,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 394)) ;
  const GGS_structTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_16131 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 395)) ;
  const GGS_structTypeForGeneration temp_2 = this ;
  const GGS_structTypeForGeneration temp_3 = this ;
  const GGS_structTypeForGeneration temp_4 = this ;
  const GGS_structTypeForGeneration temp_5 = this ;
  const GGS_structTypeForGeneration temp_6 = this ;
  const GGS_structTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_structureGenerationTemplate::class_func_structTypeSpecificImplementation (var_selfTypeDefinition_16131.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 398)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), temp_5.readProperty_mConstructorInitializationCode (), temp_6.readProperty_mConstructorNeedsCompilerVar (), temp_7.readProperty_synthetizeAnInitializer (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_16131.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 404)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas4", 396)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@enumDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_enumDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_enumDeclarationAST temp_0 = this ;
  result = GGS_string ("enum @").add_operation (temp_0.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 117)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumDeclarationAST temp_0 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_4492 (temp_0.readProperty_mConstantList ()) ;
  while (enumerator_4492.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_4492.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 124)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_enumDeclarationAST temp_2 = this ;
        GGS_lstring var_associatedTypeName_4578 = GGS_lstring::init_21__21_ (function_makeEmbeddedTypeName (temp_2.readProperty_enumTypeName ().readProperty_string (), enumerator_4492.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 126)), enumerator_4492.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
        GGS__5B_propertyInCollectionAST_5D_ var_propertyListAST_4766 = GGS__5B_propertyInCollectionAST_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_associatedValue_5D_ enumerator_4828 (enumerator_4492.current (HERE).readProperty_associatedValueTypeList ()) ;
        while (enumerator_4828.hasCurrentObject ()) {
          GGS_lstring var_associatedValueTypeName_4869 = enumerator_4828.current (HERE).readProperty_typeName () ;
          var_propertyListAST_4766.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-type-enum.galgas4", 133)), var_associatedValueTypeName_4869, enumerator_4828.current (HERE).readProperty_valueName (), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-enum.galgas4", 136)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-enum.galgas4", 138)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 132)) ;
          enumerator_4828.gotoNextObject () ;
        }
        const GGS_enumDeclarationAST temp_3 = this ;
        GGS_structDeclarationAST var_s_5212 = GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (false), var_associatedTypeName_4578, var_propertyListAST_4766, GGS_string::makeEmptyString (), temp_3.readProperty_comparison (), GGS_bool (true), inCompiler COMMA_HERE) ;
        ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (var_s_5212  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 148)) ;
        {
        GGS_lstring joker_5556 ; // Joker input parameter
        extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_5556, var_associatedTypeName_4578, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 149)) ;
        }
      }
    }
    enumerator_4492.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                              GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                              GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                              GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumDeclarationAST temp_0 = this ;
  const GGS_enumDeclarationAST temp_1 = this ;
  GGS_lstring var_key_6384 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 168)), temp_1.readProperty_enumTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_enumDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6384, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 169)) ;
  }
  GGS_bool var_circularReference_6612 = GGS_bool (true) ;
  const GGS_enumDeclarationAST temp_3 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_6662 (temp_3.readProperty_mConstantList ()) ;
  bool bool_4 = var_circularReference_6612.isValidAndTrue () ;
  if (enumerator_6662.hasCurrentObject () && bool_4) {
    while (enumerator_6662.hasCurrentObject () && bool_4) {
      GGS_bool var_namesCurrentType_6713 = GGS_bool (false) ;
      UpEnumerator__5B_associatedValue_5D_ enumerator_6776 (enumerator_6662.current (HERE).readProperty_associatedValueTypeList ()) ;
      bool bool_5 = var_namesCurrentType_6713.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 174)).isValidAndTrue () ;
      if (enumerator_6776.hasCurrentObject () && bool_5) {
        while (enumerator_6776.hasCurrentObject () && bool_5) {
          GGS_lstring var_propertyKey_6842 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_6776.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 175)), enumerator_6776.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::equal, var_propertyKey_6842.readProperty_string ().objectCompare (var_key_6384.readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              var_namesCurrentType_6713 = GGS_bool (true) ;
            }
          }
          enumerator_6776.gotoNextObject () ;
          if (enumerator_6776.hasCurrentObject ()) {
            bool_5 = var_namesCurrentType_6713.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 174)).isValidAndTrue () ;
          }
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = var_namesCurrentType_6713.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 180)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          var_circularReference_6612 = GGS_bool (false) ;
        }
      }
      enumerator_6662.gotoNextObject () ;
      if (enumerator_6662.hasCurrentObject ()) {
        bool_4 = var_circularReference_6612.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = var_circularReference_6612.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_enumDeclarationAST temp_9 = this ;
      UpEnumerator__5B_enumConstant_5D_ enumerator_7242 (temp_9.readProperty_mConstantList ()) ;
      while (enumerator_7242.hasCurrentObject ()) {
        UpEnumerator__5B_associatedValue_5D_ enumerator_7299 (enumerator_7242.current (HERE).readProperty_associatedValueTypeList ()) ;
        while (enumerator_7299.hasCurrentObject ()) {
          GGS_lstring var_propertyKey_7340 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_7299.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 188)), enumerator_7299.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
          GalgasBool test_10 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_10) {
            test_10 = GGS_bool (ComparisonKind::notEqual, var_propertyKey_7340.readProperty_string ().objectCompare (var_key_6384.readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6384, var_propertyKey_7340 COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 190)) ;
              }
            }
          }
          enumerator_7299.gotoNextObject () ;
        }
        enumerator_7242.gotoNextObject () ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                        const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                        const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classFunctionMap var_classFunctionMap_8305 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_8347 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_enumTypeEntry_8445 ;
  {
  const GGS_enumDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_enumTypeName (), var_enumTypeEntry_8445, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 211)) ;
  }
  GGS_constantIndexMap var_constantMap_8510 = GGS_constantIndexMap::init (inCompiler COMMA_HERE) ;
  GGS_bool var_hasAssociatedValues_8542 = GGS_bool (false) ;
  const GGS_enumDeclarationAST temp_1 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_8595 (temp_1.readProperty_mConstantList ()) ;
  while (enumerator_8595.hasCurrentObject ()) {
    GGS__5B_associatedValueDescriptor_5D_ var_associatedTypeList_8651 = GGS__5B_associatedValueDescriptor_5D_::init (inCompiler COMMA_HERE) ;
    GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_8714 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_associatedValue_5D_ enumerator_8775 (enumerator_8595.current (HERE).readProperty_associatedValueTypeList ()) ;
    while (enumerator_8775.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_associatedTypeEntry_8864 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8775.current (HERE).readProperty_typeName (), var_associatedTypeEntry_8864, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 219)) ;
      }
      var_argumentTypeList_8714.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_8775.current (HERE).readProperty_valueName (), var_associatedTypeEntry_8864, enumerator_8775.current (HERE).readProperty_typeName ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 220)) ;
      var_associatedTypeList_8651.plusPlusAssignOperation (GGS_associatedValueDescriptor::init_21__21_ (var_associatedTypeEntry_8864, enumerator_8775.current (HERE).readProperty_valueName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 221)) ;
      var_hasAssociatedValues_8542 = GGS_bool (true) ;
      enumerator_8775.gotoNextObject () ;
    }
    {
    var_constantMap_8510.setter_insertKey (enumerator_8595.current (HERE).readProperty_name (), var_constantMap_8510.getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 224)), var_associatedTypeList_8651, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 224)) ;
    }
    {
    var_classFunctionMap_8305.setter_insertOrReplace (enumerator_8595.current (HERE).readProperty_name (), var_argumentTypeList_8714, GGS_bool (false), var_enumTypeEntry_8445 COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 225)) ;
    }
    enumerator_8595.gotoNextObject () ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_9458 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  const GGS_enumDeclarationAST temp_2 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_9507 (temp_2.readProperty_mConstantList ()) ;
  while (enumerator_9507.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_9507.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 235)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS__5B_unifiedTypeMapEntry_5D_ var_associatedTypeList_9616 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
        GGS__5B_formalParameterSignatureElement_5D_ var_argumentTypeList_9688 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_associatedValue_5D_ enumerator_9751 (enumerator_9507.current (HERE).readProperty_associatedValueTypeList ()) ;
        while (enumerator_9751.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_associatedTypeEntry_9842 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_9751.current (HERE).readProperty_typeName (), var_associatedTypeEntry_9842, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 239)) ;
          }
          var_argumentTypeList_9688.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_9751.current (HERE).readProperty_valueName (), var_associatedTypeEntry_9842, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-enum.galgas4", 240)), enumerator_9751.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 240)) ;
          var_associatedTypeList_9616.plusPlusAssignOperation (var_associatedTypeEntry_9842  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 241)) ;
          var_hasAssociatedValues_8542 = GGS_bool (true) ;
          enumerator_9751.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_9458.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("extract").add_operation (enumerator_9507.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas4", 245)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 245)), enumerator_9507.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-enum.galgas4", 246)), var_argumentTypeList_9688, enumerator_9507.current (HERE).readProperty_name ().readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-enum.galgas4", 250)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 244)) ;
        }
      }
    }
    enumerator_9507.gotoNextObject () ;
  }
  GGS_getterMap var_getterMap_10470 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_10470, inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 256)) ;
  }
  const GGS_enumDeclarationAST temp_4 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_10506 (temp_4.readProperty_mConstantList ()) ;
  while (enumerator_10506.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_10506.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 258)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_enumDeclarationAST temp_6 = this ;
        GGS_string var_associatedTypeName_10592 = function_makeEmbeddedTypeName (temp_6.readProperty_enumTypeName ().readProperty_string (), enumerator_10506.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 259)) ;
        GGS_string var_optionalTypeName_10697 = function_makeOptionalTypeName (var_associatedTypeName_10592, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 260)) ;
        {
        routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10470, ioArgument_ioTypeMap, GGS_string ("get").add_operation (enumerator_10506.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas4", 264)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 264)), var_optionalTypeName_10697, GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 261)) ;
        }
      }
    }
    enumerator_10506.gotoNextObject () ;
  }
  const GGS_enumDeclarationAST temp_7 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_11103 (temp_7.readProperty_mConstantList ()) ;
  while (enumerator_11103.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10470, ioArgument_ioTypeMap, GGS_string ("is").add_operation (enumerator_11103.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas4", 275)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 275)), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 272)) ;
    }
    enumerator_11103.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_11411 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_enumDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_enumTypeName (), GGS_bool (false), var_initializerMap_11411, var_getterMap_10470, var_setterMap_8347, var_instanceMethodMap_9458, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 282)) ;
  }
  GGS_typeFeatures var_features_11882 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-enum.galgas4", 298)) ;
  const GGS_enumDeclarationAST temp_9 = this ;
  switch (temp_9.readProperty_comparison ().enumValue ()) {
  case GGS_structComparison::Enumeration::invalid:
    break ;
  case GGS_structComparison::Enumeration::enum_none:
    break ;
  case GGS_structComparison::Enumeration::enum_equatable:
    {
      var_features_11882.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas4", 303)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 303)) ;
    }
    break ;
  case GGS_structComparison::Enumeration::enum_comparable:
    {
      var_features_11882.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas4", 305)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas4", 305)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 305)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 305)) ;
    }
    break ;
  }
  {
  const GGS_enumDeclarationAST temp_10 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_10.readProperty_enumTypeName (), var_features_11882, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 307)) ;
  }
  const GGS_enumDeclarationAST temp_11 = this ;
  const GGS_enumDeclarationAST temp_12 = this ;
  const GGS_enumDeclarationAST temp_13 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_12353 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_11.readProperty_enumTypeName (), temp_12.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas4", 320)), GGS_typeKindEnum::class_func_enumType (var_constantMap_8510  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 321)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_11411, var_classFunctionMap_8305, var_getterMap_10470, var_setterMap_8347, var_instanceMethodMap_9458, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas4", 332)), GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_11882, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas4", 338)), GGS_string ("enum-").add_operation (temp_13.readProperty_enumTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-enum.galgas4", 339)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 339)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-enum.galgas4", 340)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_12353.readProperty_typeName (), var_typeDefinition_12353, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 342)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                       const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                       GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_14000 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_enumTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 356)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14000, var_nameForUsefulness_14000, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 357)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_enumDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_14000  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 359)) ;
    }
  }
  GGS__5B_unifiedTypeMapEntry_5D_ var_associatedValuesTypes_14291 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_constantList_14327 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_enumConstantForGeneration_5D_ var_enumConstantListForGeneration_14392 = GGS__5B_enumConstantForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  GGS_constantIndexMap var_constantMap_14436 = GGS_constantIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_enumDeclarationAST temp_3 = this ;
  UpEnumerator__5B_enumConstant_5D_ enumerator_14496 (temp_3.readProperty_mConstantList ()) ;
  while (enumerator_14496.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_14496.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 367)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_enumDeclarationAST temp_5 = this ;
        GGS_string var_associatedTypeName_14582 = function_makeEmbeddedTypeName (temp_5.readProperty_enumTypeName ().readProperty_string (), enumerator_14496.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 368)) ;
        GGS_string var_optionalTypeName_14687 = function_makeOptionalTypeName (var_associatedTypeName_14582, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 369)) ;
        GGS_unifiedTypeMapEntry var_associatedType_14775 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (var_optionalTypeName_14687, enumerator_14496.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 370)) ;
        {
        var_associatedValuesTypes_14291.setter_append (var_associatedType_14775, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 371)) ;
        }
      }
    }
    var_constantList_14327.plusPlusAssignOperation (enumerator_14496.current (HERE).readProperty_name ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 373)) ;
    GGS__5B_associatedValueDescriptor_5D_ var_associatedTypeList_15008 = GGS__5B_associatedValueDescriptor_5D_::init (inCompiler COMMA_HERE) ;
    GGS_stringset var_associatedValueNameSet_15054 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_associatedValue_5D_ enumerator_15121 (enumerator_14496.current (HERE).readProperty_associatedValueTypeList ()) ;
    while (enumerator_15121.hasCurrentObject ()) {
      GGS_lstring var_propertyTypeNameForUsefulness_15160 = function_typeNameForUsefulEntitiesGraph (enumerator_15121.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 377)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14000, var_propertyTypeNameForUsefulness_15160 COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 378)) ;
      }
      GGS_unifiedTypeMapEntry var_associatedTypeEntry_15365 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_15121.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 379)) ;
      var_associatedTypeList_15008.plusPlusAssignOperation (GGS_associatedValueDescriptor::init_21__21_ (var_associatedTypeEntry_15365, enumerator_15121.current (HERE).readProperty_valueName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 380)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_associatedValueNameSet_15054.getter_contains (enumerator_15121.current (HERE).readProperty_valueName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 381)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_15121.current (HERE).readProperty_valueName ().readProperty_location (), GGS_string ("duplicated name"), fixItArray7  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 382)) ;
        }
      }
      var_associatedValueNameSet_15054.plusPlusAssignOperation (enumerator_15121.current (HERE).readProperty_valueName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 384)) ;
      const GGS_enumDeclarationAST temp_8 = this ;
      switch (temp_8.readProperty_comparison ().enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GGS_unifiedTypeDefinition var_associatedType_15863 = extensionGetter_definition (var_associatedTypeEntry_15365, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 389)) ;
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = var_associatedType_15863.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas4", 390)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 390)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 390)).operator_and (var_associatedType_15863.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas4", 391)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 391)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 391)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 390)).operator_and (var_associatedType_15863.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-enum.galgas4", 392)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 392)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 392)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 391)).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_15121.current (HERE).readProperty_typeName ().readProperty_location (), GGS_string ("the @").add_operation (enumerator_15121.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 393)).add_operation (GGS_string (" should be equatable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 393)), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 393)) ;
            }
          }
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GGS_unifiedTypeDefinition var_associatedType_16278 = extensionGetter_definition (var_associatedTypeEntry_15365, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 396)) ;
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = var_associatedType_16278.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas4", 397)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 397)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 397)).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              GenericArray <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_15121.current (HERE).readProperty_typeName ().readProperty_location (), GGS_string ("the @").add_operation (enumerator_15121.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 398)).add_operation (GGS_string (" should be comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 398)), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 398)) ;
            }
          }
        }
        break ;
      }
      enumerator_15121.gotoNextObject () ;
    }
    {
    var_constantMap_14436.setter_insertKey (enumerator_14496.current (HERE).readProperty_name (), var_constantMap_14436.getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 402)), var_associatedTypeList_15008, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 402)) ;
    }
    var_enumConstantListForGeneration_14392.plusPlusAssignOperation (GGS_enumConstantForGeneration::init_21__21_ (enumerator_14496.current (HERE).readProperty_name ().readProperty_string (), var_associatedTypeList_15008, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 403)) ;
    enumerator_14496.gotoNextObject () ;
  }
  const GGS_enumDeclarationAST temp_13 = this ;
  GGS_unifiedTypeMapEntry var_selfType_16730 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_13.readProperty_enumTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 406)) ;
  const GGS_enumDeclarationAST temp_14 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_enumTypeForGeneration::init_21_infoMessage_21__21__21_ (GGS_string ("enum ").add_operation (temp_14.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 408)), var_selfType_16730, var_enumConstantListForGeneration_14392, var_associatedValuesTypes_14291, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 407)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                               GGS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_hasAssociatedValues_17990 = GGS_bool (false) ;
  const GGS_enumTypeForGeneration temp_0 = this ;
  UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_18043 (temp_0.readProperty_constantList ()) ;
  bool bool_1 = var_hasAssociatedValues_17990.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 439)).isValidAndTrue () ;
  if (enumerator_18043.hasCurrentObject () && bool_1) {
    while (enumerator_18043.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_17990 = GGS_bool (ComparisonKind::greaterThan, enumerator_18043.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 440)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) ;
      enumerator_18043.gotoNextObject () ;
      if (enumerator_18043.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_17990.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 439)).isValidAndTrue () ;
      }
    }
  }
  const GGS_enumTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_18176 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 442)) ;
  const GGS_enumTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_enumGenerationTemplate::class_func_enumTypeHeader_31_ (var_selfTypeDefinition_18176.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_18176.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas4", 445)), temp_3.readProperty_constantList (), var_hasAssociatedValues_17990, inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 443)) ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_18176.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_18176.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas4", 451)), var_selfTypeDefinition_18176.readProperty_isConcrete (), var_selfTypeDefinition_18176.readProperty_initializerMap (), var_selfTypeDefinition_18176.readProperty_classFunctionMap (), var_selfTypeDefinition_18176.readProperty_getterMap (), var_selfTypeDefinition_18176.readProperty_setterMap (), var_selfTypeDefinition_18176.readProperty_instanceMethodMap (), var_selfTypeDefinition_18176.readProperty_classMethodMap (), var_selfTypeDefinition_18176.readProperty_readSubscriptMap (), var_selfTypeDefinition_18176.readProperty_writeSubscriptMap (), var_selfTypeDefinition_18176.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_18176.readProperty_features (), var_selfTypeDefinition_18176.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_18176.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 449)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 449)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumTypeForGeneration temp_0 = this ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_19544 (temp_0.readProperty_associatedValuesTypes ()) ;
  while (enumerator_19544.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_19544.current (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 474)) ;
    enumerator_19544.gotoNextObject () ;
  }
  GGS_bool var_hasAssociatedValues_19639 = GGS_bool (false) ;
  const GGS_enumTypeForGeneration temp_1 = this ;
  UpEnumerator__5B_enumConstantForGeneration_5D_ enumerator_19692 (temp_1.readProperty_constantList ()) ;
  bool bool_2 = var_hasAssociatedValues_19639.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 477)).isValidAndTrue () ;
  if (enumerator_19692.hasCurrentObject () && bool_2) {
    while (enumerator_19692.hasCurrentObject () && bool_2) {
      var_hasAssociatedValues_19639 = GGS_bool (ComparisonKind::greaterThan, enumerator_19692.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas4", 478)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) ;
      enumerator_19692.gotoNextObject () ;
      if (enumerator_19692.hasCurrentObject ()) {
        bool_2 = var_hasAssociatedValues_19639.operator_not (SOURCE_FILE ("declaration-type-enum.galgas4", 477)).isValidAndTrue () ;
      }
    }
  }
  const GGS_enumTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 480)) ;
  const GGS_enumTypeForGeneration temp_4 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_19886 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 481)) ;
  const GGS_enumTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_enumGenerationTemplate::class_func_enumTypeSpecificImplementation (var_selfTypeDefinition_19886.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_19886.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas4", 484)), temp_5.readProperty_constantList (), var_hasAssociatedValues_19639, extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_19886.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 487)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas4", 482)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionSetDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_optionSetDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                   GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                   GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                   GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                   GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                   GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                   GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionSetDeclarationAST temp_0 = this ;
  const GGS_optionSetDeclarationAST temp_1 = this ;
  GGS_lstring var_key_3454 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mOptionSetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 81)), temp_1.readProperty_mOptionSetTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_optionSetDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3454, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 82)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@optionSetDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_optionSetDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_optionSetDeclarationAST temp_0 = this ;
  result = GGS_string ("optionset @").add_operation (temp_0.readProperty_mOptionSetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 88)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionSetDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_optionSetDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                             const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                             const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                             const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                             const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_slotNameSet_4498 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  const GGS_optionSetDeclarationAST temp_0 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_4541 (temp_0.readProperty_mFlagList ()) ;
  while (enumerator_4541.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_slotNameSet_4498.getter_contains (enumerator_4541.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 104)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4541.current (HERE).readProperty_location (), GGS_string ("duplicated slot name"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 105)) ;
      }
    }
    var_slotNameSet_4498.plusPlusAssignOperation (enumerator_4541.current (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 107)) ;
    enumerator_4541.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_optionSetType_4777 ;
  {
  const GGS_optionSetDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mOptionSetTypeName (), var_optionSetType_4777, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 110)) ;
  }
  GGS_getterMap var_getterMap_4869 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_4869, inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 112)) ;
  }
  {
  const GGS_optionSetDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4869, ioArgument_ioTypeMap, GGS_string ("contains"), GGS_string::makeEmptyString (), temp_4.readProperty_mOptionSetTypeName ().readProperty_string (), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 113)) ;
  }
  GGS_classFunctionMap var_classFunctionMap_5200 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  const GGS_optionSetDeclarationAST temp_5 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_5248 (temp_5.readProperty_mFlagList ()) ;
  while (enumerator_5248.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = var_classFunctionMap_5200.getter_contains (enumerator_5248.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 126)).operator_not (SOURCE_FILE ("declaration-type-optionset.galgas4", 126)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        {
        var_classFunctionMap_5200.setter_insertKey (enumerator_5248.current (HERE), GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE), GGS_bool (false), var_optionSetType_4777, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 127)) ;
        }
      }
    }
    enumerator_5248.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_5580 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_5637 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionSetDeclarationAST temp_7 = this ;
  var_initializerMap_5580.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_5637, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 139)), temp_7.readProperty_mOptionSetTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_5637, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 138)) ;
  }
  GGS_setterMap var_setterMap_5839 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_5882 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionSetDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mOptionSetTypeName (), GGS_bool (false), var_initializerMap_5580, var_getterMap_4869, var_setterMap_5839, var_instanceMethodMap_5882, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 145)) ;
  }
  GGS_typeFeatures var_features_6363 = GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 161)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 161)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 161)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 161)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 161)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 162)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 161)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-optionset.galgas4", 163)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 162)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-type-optionset.galgas4", 163)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 163)).operator_or (GGS_typeFeatures::class_func_andAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-optionset.galgas4", 164)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 163)).operator_or (GGS_typeFeatures::class_func_orAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-optionset.galgas4", 165)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 164)).operator_or (GGS_typeFeatures::class_func_xorAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-optionset.galgas4", 166)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 165)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-optionset.galgas4", 167)) COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 166)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_optionSetDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isEquatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      var_features_6363.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-optionset.galgas4", 169)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 169)) ;
    }
  }
  {
  const GGS_optionSetDeclarationAST temp_11 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_11.readProperty_mOptionSetTypeName (), var_features_6363, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 171)) ;
  }
  const GGS_optionSetDeclarationAST temp_12 = this ;
  const GGS_optionSetDeclarationAST temp_13 = this ;
  const GGS_optionSetDeclarationAST temp_14 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_7051 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_12.readProperty_mOptionSetTypeName (), temp_13.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optionset.galgas4", 184)), GGS_typeKindEnum::class_func_valueType (SOURCE_FILE ("declaration-type-optionset.galgas4", 185)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_5580, var_classFunctionMap_5200, var_getterMap_4869, var_setterMap_5839, var_instanceMethodMap_5882, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optionset.galgas4", 196)), GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_6363, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optionset.galgas4", 202)), GGS_string ("optionset-").add_operation (temp_14.readProperty_mOptionSetTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-optionset.galgas4", 203)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 203)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-optionset.galgas4", 204)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_7051.readProperty_typeName (), var_typeDefinition_7051, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 206)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionSetDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_optionSetDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                            const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                            const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                            const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                            GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionSetDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-optionset.galgas4", 219)).objectCompare (GGS_u_33__32_ (uint32_t (64U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionSetDeclarationAST temp_2 = this ;
      GGS_location var_s_8797 = temp_2.readProperty_mFlagList ().readSubscript__3F_ (GGS_u_33__32_ (uint32_t (64U)), inCompiler COMMA_HERE).readProperty_location () ;
      const GGS_optionSetDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_8797, GGS_string ("max flags count is 64 (here: ").add_operation (temp_3.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-optionset.galgas4", 221)).getter_string (SOURCE_FILE ("declaration-type-optionset.galgas4", 221)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 221)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 221)), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 221)) ;
    }
  }
  const GGS_optionSetDeclarationAST temp_5 = this ;
  GGS_lstring var_optionSetNameForUsefulness_8944 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mOptionSetTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 224)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_optionSetNameForUsefulness_8944, var_optionSetNameForUsefulness_8944, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 225)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_optionSetDeclarationAST temp_7 = this ;
    test_6 = temp_7.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_optionSetNameForUsefulness_8944  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 227)) ;
    }
  }
  const GGS_optionSetDeclarationAST temp_8 = this ;
  GGS_lstring var_initializerNameForUsefulness_9299 = function_initializerNameForUsefulEntitiesGraph (temp_8.readProperty_mOptionSetTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 232)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 230)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_9299, var_initializerNameForUsefulness_9299, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 234)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_optionSetDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_9299  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 236)) ;
    }
  }
  const GGS_optionSetDeclarationAST temp_11 = this ;
  const GGS_optionSetDeclarationAST temp_12 = this ;
  const GGS_optionSetDeclarationAST temp_13 = this ;
  const GGS_optionSetDeclarationAST temp_14 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_optionSetTypeForGeneration::init_21_infoMessage_21__21__21_ (GGS_string ("optionset ").add_operation (temp_11.readProperty_mOptionSetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 240)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mOptionSetTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 241)), temp_13.readProperty_mFlagList (), temp_14.readProperty_isEquatable (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 239)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionSetTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_optionSetTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                    GGS_string & outArgument_outHeader,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionSetTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_10628 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 263)) ;
  const GGS_optionSetTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_structGenerationTemplate::class_func_optionSetTypeHeader_31_ (var_selfTypeDefinition_10628.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_10628.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-optionset.galgas4", 266)), temp_1.readProperty_mFlagList (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 264)) ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_10628.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_10628.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-optionset.galgas4", 271)), var_selfTypeDefinition_10628.readProperty_isConcrete (), var_selfTypeDefinition_10628.readProperty_initializerMap (), var_selfTypeDefinition_10628.readProperty_classFunctionMap (), var_selfTypeDefinition_10628.readProperty_getterMap (), var_selfTypeDefinition_10628.readProperty_setterMap (), var_selfTypeDefinition_10628.readProperty_instanceMethodMap (), var_selfTypeDefinition_10628.readProperty_classMethodMap (), var_selfTypeDefinition_10628.readProperty_readSubscriptMap (), var_selfTypeDefinition_10628.readProperty_writeSubscriptMap (), var_selfTypeDefinition_10628.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_10628.readProperty_features (), var_selfTypeDefinition_10628.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_10628.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 269)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 269)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionSetTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_optionSetTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                           GGS_stringset & ioArgument_ioInclusionSet,
                                                                           GGS_string & outArgument_outImplementation,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionSetTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 293)) ;
  const GGS_optionSetTypeForGeneration temp_1 = this ;
  const GGS_optionSetTypeForGeneration temp_2 = this ;
  const GGS_optionSetTypeForGeneration temp_3 = this ;
  const GGS_optionSetTypeForGeneration temp_4 = this ;
  const GGS_optionSetTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_structGenerationTemplate::class_func_optionSetTypeSpecificImplementation (extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 295)).readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 296)), temp_3.readProperty_mFlagList (), GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 298)).left_shift_operation (temp_4.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-optionset.galgas4", 298)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 298)).subtract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 298)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 298)), temp_5.readProperty_equatable (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optionset.galgas4", 294)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@graphDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_graphDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_graphDeclarationAST temp_0 = this ;
  result = GGS_string ("graph @").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 96)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@graphDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                               GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                               GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                               GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                               GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                               GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_graphDeclarationAST temp_0 = this ;
  const GGS_graphDeclarationAST temp_1 = this ;
  GGS_lstring var_key_4779 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 109)), temp_1.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_graphDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4779, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 110)) ;
  }
  const GGS_graphDeclarationAST temp_3 = this ;
  const GGS_graphDeclarationAST temp_4 = this ;
  GGS_lstring var_arrayTypeKey_4916 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mAssociatedArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 111)), temp_4.readProperty_mAssociatedArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4779, var_arrayTypeKey_4916 COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 112)) ;
  }
  GGS_lstring var_lstringArrayTypeName_5102 = function_makeArrayTypeLName (GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 113)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 113)) ;
  GGS_lstring var_lstringArrayTypeKey_5172 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (var_lstringArrayTypeName_5102.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 114)), var_lstringArrayTypeName_5102.readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4779, var_lstringArrayTypeKey_5172 COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 115)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@graphDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                         const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                         const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringTypeEntry_6159 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("string"), var_stringTypeEntry_6159, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 128)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringTypeEntry_6277 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("lstring"), var_lstringTypeEntry_6277, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 130)) ;
  }
  {
  const GGS_graphDeclarationAST temp_0 = this ;
  GGS_unifiedTypeMapEntry joker_6368 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mGraphTypeName (), joker_6368, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 132)) ;
  }
  GGS_unifiedTypeMapEntry var_associatedArrayType_6492 ;
  {
  const GGS_graphDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mAssociatedArrayTypeName (), var_associatedArrayType_6492, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 134)) ;
  }
  GGS_unifiedTypeMapEntry var_associatedElementType_6637 ;
  {
  const GGS_graphDeclarationAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mAssociatedElementTypeName (), var_associatedElementType_6637, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 136)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringArrayTypeEntry_6793 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, function_makeArrayTypeLName (GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 138)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 138)).readProperty_string (), var_lstringArrayTypeEntry_6793, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 138)) ;
  }
  GGS_getterMap var_getterMap_6885 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6885, inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 140)) ;
  }
  GGS_setterMap var_setterMap_6916 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_6959 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_formalParameterSignatureElement_5D_ var_formalParameterList_7054 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 146)), var_associatedArrayType_6492, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 148)), GGS_string ("outSortedInformationList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 145)) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 152)), var_lstringArrayTypeEntry_6793, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 154)), GGS_string ("outSortedLKeyList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 151)) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 158)), var_associatedArrayType_6492, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 160)), GGS_string ("outUnsortedInformationList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 157)) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 164)), var_lstringArrayTypeEntry_6793, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 166)), GGS_string ("outUnsortedLKeyList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 163)) ;
  {
  var_instanceMethodMap_6959.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("topologicalSort"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 170)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 171)), var_formalParameterList_7054, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 173)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 175)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 169)) ;
  }
  {
  var_instanceMethodMap_6959.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("depthFirstTopologicalSort"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 179)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 180)), var_formalParameterList_7054, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 182)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 184)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 178)) ;
  }
  var_formalParameterList_7054 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 190)), var_associatedArrayType_6492, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 192)), GGS_string ("outInformationList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 189)) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 196)), var_lstringArrayTypeEntry_6793, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas4", 198)), GGS_string ("outLKeyList"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 195)) ;
  {
  var_instanceMethodMap_6959.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("circularities"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 202)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 203)), var_formalParameterList_7054, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 205)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 207)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 201)) ;
  }
  {
  var_instanceMethodMap_6959.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("nodesWithNoSuccessor"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 211)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 212)), var_formalParameterList_7054, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 214)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 216)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 210)) ;
  }
  {
  var_instanceMethodMap_6959.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("nodesWithNoPredecessor"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 220)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 221)), var_formalParameterList_7054, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 223)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 225)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 219)) ;
  }
  {
  const GGS_graphDeclarationAST temp_3 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("nodeList"), temp_3.readProperty_mAssociatedArrayTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 229)) ;
  }
  {
  const GGS_graphDeclarationAST temp_4 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("reversedGraph"), temp_4.readProperty_mGraphTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 237)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("undefinedNodeCount"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 245)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("undefinedNodeKeyList"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 253)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("undefinedNodeReferenceList"), GGS_string ("[lstring]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 261)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("graphviz"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 269)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("isNodeDefined"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 277)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("locationForKey"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 287)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("keyList"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 297)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("lkeyList"), GGS_string ("[lstring]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 305)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("edges"), GGS_string ("[stringString]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 313)) ;
  }
  {
  const GGS_graphDeclarationAST temp_5 = this ;
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("subgraphFromNodes"), GGS_string::makeEmptyString (), GGS_string ("[lstring]"), GGS_string ("inStartNodeLStringList"), GGS_string::makeEmptyString (), GGS_string ("stringset"), GGS_string ("inNodesToExclude"), temp_5.readProperty_mGraphTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 321)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6885, ioArgument_ioTypeMap, GGS_string ("accessibleNodesFrom"), GGS_string::makeEmptyString (), GGS_string ("[lstring]"), GGS_string ("inStartNodeStringList"), GGS_string::makeEmptyString (), GGS_string ("stringset"), GGS_string ("inNodesToExclude"), GGS_string ("[lstring]"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 335)) ;
  }
  var_formalParameterList_7054 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 347)), var_lstringTypeEntry_6277, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 349)), GGS_string ("inLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 346)) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 353)), var_associatedElementType_6637, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 355)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 352)) ;
  const GGS_graphDeclarationAST temp_6 = this ;
  UpEnumerator__5B_graphInsertModifier_5D_ enumerator_13222 (temp_6.readProperty_mInsertModifierList ()) ;
  while (enumerator_13222.hasCurrentObject ()) {
    {
    var_setterMap_6916.setter_insertOrReplace (enumerator_13222.current (HERE).readProperty_mInsertModifierName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 361)), var_formalParameterList_7054, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas4", 364)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 359)) ;
    }
    enumerator_13222.gotoNextObject () ;
  }
  {
  var_setterMap_6916.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeEdgesToDominators"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 370)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 371)), GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas4", 374)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 369)) ;
  }
  var_formalParameterList_7054 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 379)), var_stringTypeEntry_6159, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 379)), GGS_string ("inNodeName"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 379)) ;
  {
  var_setterMap_6916.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeEdgesToNode"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 381)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 382)), var_formalParameterList_7054, GGS_bool (true), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas4", 385)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 380)) ;
  }
  var_formalParameterList_7054 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("from").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 390)), var_lstringTypeEntry_6277, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 390)), GGS_string ("inSourceNodeLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 390)) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("to").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 391)), var_lstringTypeEntry_6277, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 391)), GGS_string ("inTargetNodeLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 391)) ;
  {
  var_setterMap_6916.setter_insertKey (GGS_string ("addEdge").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 393)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 394)), var_formalParameterList_7054, GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas4", 397)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 392)) ;
  }
  var_formalParameterList_7054 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_7054.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 403)), var_lstringTypeEntry_6277, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas4", 405)), GGS_string ("inNodeLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 402)) ;
  {
  var_setterMap_6916.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("noteNode"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 408)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas4", 409)), var_formalParameterList_7054, GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas4", 412)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 407)) ;
  }
  GGS_initializerMap var_initializerMap_15091 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_constructorPropertyTypeList_15148 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_graphDeclarationAST temp_7 = this ;
  var_initializerMap_15091.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_15148, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 419)), temp_7.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_15148, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 418)) ;
  }
  {
  const GGS_graphDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mGraphTypeName (), GGS_bool (false), var_initializerMap_15091, var_getterMap_6885, var_setterMap_6916, var_instanceMethodMap_6959, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 423)) ;
  }
  GGS_typeFeatures var_features_15792 = GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-graph.galgas4", 438)) ;
  {
  const GGS_graphDeclarationAST temp_9 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_9.readProperty_mGraphTypeName (), var_features_15792, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 439)) ;
  }
  const GGS_graphDeclarationAST temp_10 = this ;
  const GGS_graphDeclarationAST temp_11 = this ;
  const GGS_graphDeclarationAST temp_12 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_16072 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_10.readProperty_mGraphTypeName (), temp_11.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas4", 452)), GGS_typeKindEnum::class_func_valueType (SOURCE_FILE ("declaration-type-graph.galgas4", 453)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_15091, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_6885, var_setterMap_6916, var_instanceMethodMap_6959, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas4", 464)), GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_15792, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas4", 470)), GGS_string ("graph-").add_operation (temp_12.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-graph.galgas4", 471)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 471)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-graph.galgas4", 472)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_16072.readProperty_typeName (), var_typeDefinition_16072, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 474)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@graphDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                        const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                        const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                        GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_graphDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_17747 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 487)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17747, var_nameForUsefulness_17747, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 488)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_graphDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_17747  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 490)) ;
    }
  }
  const GGS_graphDeclarationAST temp_3 = this ;
  GGS_lstring var_associatedTypeNameForUsefulness_17995 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mAssociatedArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 492)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17747, var_associatedTypeNameForUsefulness_17995 COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 493)) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_graphDeclarationAST temp_5 = this ;
    test_4 = temp_5.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_associatedTypeNameForUsefulness_17995  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 495)) ;
    }
  }
  const GGS_graphDeclarationAST temp_6 = this ;
  GGS_lstring var_initializerNameForUsefulness_18374 = function_initializerNameForUsefulEntitiesGraph (temp_6.readProperty_mGraphTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 500)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 498)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_18374, var_initializerNameForUsefulness_18374, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 502)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_graphDeclarationAST temp_8 = this ;
    test_7 = temp_8.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_18374  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 504)) ;
    }
  }
  const GGS_graphDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_graphTypeEntry_18751 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 507)) ;
  const GGS_graphDeclarationAST temp_10 = this ;
  GGS_unifiedTypeMapEntry var_associatedArrayType_18828 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mAssociatedArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 508)) ;
  const GGS_graphDeclarationAST temp_11 = this ;
  GGS_unifiedTypeMapEntry var_associatedListElementTypeEntry_18920 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mAssociatedElementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 509)) ;
  GGS_unifiedTypeMapEntry var_lstringArrayTypeEntry_19025 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeArrayTypeLName (GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 510)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 510)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 510)) ;
  GGS_unifiedTypeMapEntry var_stringArrayTypeEntry_19128 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeArrayTypeLName (GGS_string ("string").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas4", 511)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 511)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 511)) ;
  GGS_stringset temp_12 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 513)) ;
  temp_12.plusPlusAssignOperation (GGS_string ("noteNode")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 513)) ;
  temp_12.plusPlusAssignOperation (GGS_string ("addArc")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 513)) ;
  GGS_stringset var_reservedModifierNames_19271 = temp_12 ;
  const GGS_graphDeclarationAST temp_13 = this ;
  UpEnumerator__5B_graphInsertModifier_5D_ enumerator_19347 (temp_13.readProperty_mInsertModifierList ()) ;
  while (enumerator_19347.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = var_reservedModifierNames_19271.getter_contains (enumerator_19347.current (HERE).readProperty_mInsertModifierName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 515)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_19347.current (HERE).readProperty_mInsertModifierName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_19347.current (HERE).readProperty_mInsertModifierName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 517)).add_operation (GGS_string ("' mutating proc name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 517)), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 516)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_19347.current (HERE).readProperty_mInsertErrorMessage (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 519)) ;
    }
    enumerator_19347.gotoNextObject () ;
  }
  const GGS_graphDeclarationAST temp_16 = this ;
  const GGS_graphDeclarationAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_graphDeclarationForGeneration::init_21_infoMessage_21__21__21__21__21__21_ (GGS_string ("graph ").add_operation (temp_16.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 523)), var_graphTypeEntry_18751, var_associatedArrayType_18828, var_associatedListElementTypeEntry_18920, var_lstringArrayTypeEntry_19025, var_stringArrayTypeEntry_19128, temp_17.readProperty_mInsertModifierList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 522)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@graphDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_string & outArgument_outHeader,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_graphDeclarationForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_20947 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 552)) ;
  const GGS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_1.readProperty_mAssociatedArrayTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 553)) ;
  const GGS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_2.readProperty_mLStringArrayType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 554)) ;
  const GGS_graphDeclarationForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_3.readProperty_mStringArrayType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 555)) ;
  const GGS_graphDeclarationForGeneration temp_4 = this ;
  const GGS_graphDeclarationForGeneration temp_5 = this ;
  const GGS_graphDeclarationForGeneration temp_6 = this ;
  const GGS_graphDeclarationForGeneration temp_7 = this ;
  const GGS_graphDeclarationForGeneration temp_8 = this ;
  outArgument_outHeader = GGS_graphGenerationTemplate::class_func_graphTypeHeader_31_ (var_selfTypeDefinition_20947.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 558)), temp_5.readProperty_mAssociatedArrayTypeEntry (), temp_6.readProperty_mAssociatedElementTypeEntry (), temp_7.readProperty_mLStringArrayType (), temp_8.readProperty_mStringArrayType (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 556)) ;
  const GGS_graphDeclarationForGeneration temp_9 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_20947.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_9.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 566)), var_selfTypeDefinition_20947.readProperty_isConcrete (), var_selfTypeDefinition_20947.readProperty_initializerMap (), var_selfTypeDefinition_20947.readProperty_classFunctionMap (), var_selfTypeDefinition_20947.readProperty_getterMap (), var_selfTypeDefinition_20947.readProperty_setterMap (), var_selfTypeDefinition_20947.readProperty_instanceMethodMap (), var_selfTypeDefinition_20947.readProperty_classMethodMap (), var_selfTypeDefinition_20947.readProperty_readSubscriptMap (), var_selfTypeDefinition_20947.readProperty_writeSubscriptMap (), var_selfTypeDefinition_20947.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_20947.readProperty_features (), var_selfTypeDefinition_20947.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_20947.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 564)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 564)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@graphDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                              GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_string & outArgument_outImplementation,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_graphDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 588)) ;
  const GGS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedArrayTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 589)) ;
  const GGS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 590)) ;
  const GGS_graphDeclarationForGeneration temp_3 = this ;
  const GGS_graphDeclarationForGeneration temp_4 = this ;
  const GGS_graphDeclarationForGeneration temp_5 = this ;
  const GGS_graphDeclarationForGeneration temp_6 = this ;
  const GGS_graphDeclarationForGeneration temp_7 = this ;
  const GGS_graphDeclarationForGeneration temp_8 = this ;
  const GGS_graphDeclarationForGeneration temp_9 = this ;
  outArgument_outImplementation = GGS_graphGenerationTemplate::class_func_graphTypeSpecificImplementation (temp_3.readProperty_mSelfTypeEntry (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 593)), temp_5.readProperty_mAssociatedArrayTypeEntry (), temp_6.readProperty_mAssociatedElementTypeEntry (), temp_7.readProperty_mInsertModifierList (), temp_8.readProperty_mLStringArrayType (), temp_9.readProperty_mStringArrayType (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas4", 591)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@optionalTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_optionalTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_optionalTypeDeclarationAST temp_0 = this ;
  result = GGS_string ("optional @").add_operation (temp_0.readProperty_optionalTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 28)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                      GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                      GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                      GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionalTypeDeclarationAST temp_0 = this ;
  const GGS_optionalTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_selfKey_2302 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_optionalTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 41)), temp_1.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_optionalTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_selfKey_2302, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 42)) ;
  }
  const GGS_optionalTypeDeclarationAST temp_3 = this ;
  const GGS_optionalTypeDeclarationAST temp_4 = this ;
  GGS_lstring var_unwrappedKey_2451 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_unwrappedTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 43)), temp_4.readProperty_unwrappedTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_selfKey_2302, var_unwrappedKey_2451 COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 44)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                                const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                                const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_getterMap var_getterMap_3336 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_3336, inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 58)) ;
  }
  GGS_unifiedTypeMapEntry var_boolTypeEntry_3414 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GGS_string ("bool").getter_nowhere (SOURCE_FILE ("declaration-type-optional.galgas4", 60)), var_boolTypeEntry_3414, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 60)) ;
  }
  GGS_propertyMap var_propertyMap_3450 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionalTypeDeclarationAST temp_0 = this ;
  var_propertyMap_3450.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("isSome"), temp_0.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_AccessControl::class_func_publicAccess (SOURCE_FILE ("declaration-type-optional.galgas4", 64)), GGS_bool (true), var_boolTypeEntry_3414, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 62)) ;
  }
  {
  const GGS_optionalTypeDeclarationAST temp_1 = this ;
  var_propertyMap_3450.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("isNil"), temp_1.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_AccessControl::class_func_publicAccess (SOURCE_FILE ("declaration-type-optional.galgas4", 70)), GGS_bool (true), var_boolTypeEntry_3414, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 68)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_3777 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_3820 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_3860 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionalTypeDeclarationAST temp_2 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_2.readProperty_optionalTypeName (), GGS_bool (false), var_initializerMap_3860, var_getterMap_3336, var_setterMap_3820, var_instanceMethodMap_3777, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 78)) ;
  }
  GGS_unifiedTypeMapEntry var_unwrappedType_4395 ;
  {
  const GGS_optionalTypeDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_unwrappedTypeName (), var_unwrappedType_4395, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 94)) ;
  }
  GGS_typeFeatures var_features_4435 = GGS_typeFeatures::init (inCompiler COMMA_HERE) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_unwrappedType_4395, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-optional.galgas4", 97)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-optional.galgas4", 97)) COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 97)).operator_or (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-optional.galgas4", 97)) COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 97)) COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_features_4435.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-optional.galgas4", 98)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 98)) ;
    }
  }
  {
  const GGS_optionalTypeDeclarationAST temp_5 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_5.readProperty_optionalTypeName (), var_features_4435, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 100)) ;
  }
  const GGS_optionalTypeDeclarationAST temp_6 = this ;
  const GGS_optionalTypeDeclarationAST temp_7 = this ;
  const GGS_optionalTypeDeclarationAST temp_8 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_4828 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_6.readProperty_optionalTypeName (), temp_7.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optional.galgas4", 113)), GGS_typeKindEnum::class_func_valueType (SOURCE_FILE ("declaration-type-optional.galgas4", 114)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_propertyMap_3450, GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_3860, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_3336, var_setterMap_3820, var_instanceMethodMap_3777, GGS_classMethodMap::init (inCompiler COMMA_HERE), var_unwrappedType_4395, GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_4435, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optional.galgas4", 131)), GGS_string ("optional-").add_operation (temp_8.readProperty_optionalTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-optional.galgas4", 132)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 132)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-optional.galgas4", 133)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_4828.readProperty_typeName (), var_typeDefinition_4828, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 135)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                               const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                               GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionalTypeDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_6568 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_optionalTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 154)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6568, var_nameForUsefulness_6568, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 155)) ;
  }
  const GGS_optionalTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_unwrappedTypeNameForUsefulness_6726 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_unwrappedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 156)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_6568, var_unwrappedTypeNameForUsefulness_6726 COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 157)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_optionalTypeDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_isUsefull ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_6568  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 159)) ;
    }
  }
  const GGS_optionalTypeDeclarationAST temp_4 = this ;
  GGS_unifiedTypeMapEntry var_optionalType_7019 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_optionalTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 162)) ;
  const GGS_optionalTypeDeclarationAST temp_5 = this ;
  GGS_unifiedTypeMapEntry var_unwrappedType_7096 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_unwrappedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 163)) ;
  const GGS_optionalTypeDeclarationAST temp_6 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_optionalTypeForGeneration::init_21_infoMessage_21__21__21_ (GGS_string ("optional type ").add_operation (temp_6.readProperty_optionalTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 167)), var_optionalType_7019, var_unwrappedType_7096, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optional.galgas4", 170)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 166)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_string & outArgument_outHeader,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionalTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_0.readProperty_unwrappedType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 190)) ;
  const GGS_optionalTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_8411 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 191)) ;
  const GGS_optionalTypeForGeneration temp_2 = this ;
  const GGS_optionalTypeForGeneration temp_3 = this ;
  const GGS_optionalTypeForGeneration temp_4 = this ;
  GGS_string temp_5 ;
  const GalgasBool test_6 = temp_4.readProperty_weakType ().getter_isNull (SOURCE_FILE ("declaration-type-optional.galgas4", 196)).boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_6) {
    const GGS_optionalTypeForGeneration temp_7 = this ;
    temp_5 = extensionGetter_identifierRepresentation (temp_7.readProperty_weakType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 196)) ;
  }
  outArgument_outHeader = GGS_optionalTypeGenerationTemplate::class_func_optionalTypeHeader_31_ (var_selfTypeDefinition_8411.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 194)), extensionGetter_identifierRepresentation (temp_3.readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 195)), temp_5, inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 192)) ;
  const GGS_optionalTypeForGeneration temp_8 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_8411.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_8.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 200)), var_selfTypeDefinition_8411.readProperty_isConcrete (), var_selfTypeDefinition_8411.readProperty_initializerMap (), var_selfTypeDefinition_8411.readProperty_classFunctionMap (), var_selfTypeDefinition_8411.readProperty_getterMap (), var_selfTypeDefinition_8411.readProperty_setterMap (), var_selfTypeDefinition_8411.readProperty_instanceMethodMap (), var_selfTypeDefinition_8411.readProperty_classMethodMap (), var_selfTypeDefinition_8411.readProperty_readSubscriptMap (), var_selfTypeDefinition_8411.readProperty_writeSubscriptMap (), var_selfTypeDefinition_8411.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_8411.readProperty_features (), var_selfTypeDefinition_8411.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_8411.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 198)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 198)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@optionalTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_string & outArgument_outImplementation,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionalTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_unwrappedType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 222)) ;
  const GGS_optionalTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 223)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_optionalTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_weakType ().getter_isNull (SOURCE_FILE ("declaration-type-optional.galgas4", 224)).operator_not (SOURCE_FILE ("declaration-type-optional.galgas4", 224)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_optionalTypeForGeneration temp_4 = this ;
      extensionMethod_addHeaderFileName (temp_4.readProperty_weakType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 225)) ;
    }
  }
  const GGS_optionalTypeForGeneration temp_5 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_10052 = extensionGetter_definition (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 227)) ;
  const GGS_optionalTypeForGeneration temp_6 = this ;
  const GGS_optionalTypeForGeneration temp_7 = this ;
  const GGS_optionalTypeForGeneration temp_8 = this ;
  GGS_string temp_9 ;
  const GalgasBool test_10 = temp_8.readProperty_weakType ().getter_isNull (SOURCE_FILE ("declaration-type-optional.galgas4", 233)).boolEnum () ;
  if (GalgasBool::boolTrue == test_10) {
    temp_9 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_10) {
    const GGS_optionalTypeForGeneration temp_11 = this ;
    temp_9 = extensionGetter_identifierRepresentation (temp_11.readProperty_weakType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 233)) ;
  }
  outArgument_outImplementation = GGS_optionalTypeGenerationTemplate::class_func_optionalTypeSpecificImplementation (var_selfTypeDefinition_10052.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 230)), extensionGetter_identifierRepresentation (temp_7.readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 231)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_10052.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 232)), temp_9, inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas4", 228)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeEmbeddedTypeLName (const GGS_lstring & constinArgument_inOuterTypeName,
                                            const GGS_lstring & constinArgument_inInnerTypeName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (function_makeEmbeddedTypeName (constinArgument_inOuterTypeName.readProperty_string (), constinArgument_inInnerTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 24)), constinArgument_inOuterTypeName.readProperty_location ().getter_union (constinArgument_inInnerTypeName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 25)), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeEmbeddedTypeName (const GGS_string & constinArgument_inOuterTypeName,
                                          const GGS_string & constinArgument_inInnerTypeName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = constinArgument_inOuterTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 32)).add_operation (constinArgument_inInnerTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 32)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'makeOptionalTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeOptionalTypeName (const GGS_string & constinArgument_inTypeName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = constinArgument_inTypeName.add_operation (GGS_string ("\?"), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 40)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'makeOptionalTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeOptionalTypeLName (const GGS_lstring & constinArgument_inTypeName,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = constinArgument_inTypeName ;
  result.mProperty_string.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 47)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedElementTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeEmbeddedElementTypeName (const GGS_string & constinArgument_inTypeName,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = function_makeEmbeddedTypeName (constinArgument_inTypeName, GGS_string ("element"), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 55)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedElementTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeEmbeddedElementTypeLName (const GGS_lstring & constinArgument_inTypeName,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (function_makeEmbeddedElementTypeName (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas4", 61)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@mapDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_mapDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_mapDeclarationAST temp_0 = this ;
  result = GGS_string ("map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 193)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_propertyInCollectionAST_5D_ var_structAttributeList_7543 = GGS__5B_propertyInCollectionAST_5D_::init (inCompiler COMMA_HERE) ;
  var_structAttributeList_7543.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-type-map.galgas4", 201)), GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 202)), GGS_string ("lkey").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 203)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-map.galgas4", 204)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-map.galgas4", 206)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 200)) ;
  const GGS_mapDeclarationAST temp_0 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_7837 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_7837.hasCurrentObject ()) {
    var_structAttributeList_7543.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-type-map.galgas4", 210)), enumerator_7837.current (HERE).readProperty_typeName (), enumerator_7837.current (HERE).readProperty_name (), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-map.galgas4", 213)), enumerator_7837.current (HERE).readProperty_hasSelector (), enumerator_7837.current (HERE).readProperty_initialization (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 209)) ;
    enumerator_7837.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_1 = this ;
  GGS_lstring var_elementTypeName_8134 = function_makeEmbeddedElementTypeLName (temp_1.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 218)) ;
  const GGS_mapDeclarationAST temp_2 = this ;
  const GGS_mapDeclarationAST temp_3 = this ;
  GGS_structComparison temp_4 ;
  const GalgasBool test_5 = temp_3.readProperty_equatable ().boolEnum () ;
  if (GalgasBool::boolTrue == test_5) {
    temp_4 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-map.galgas4", 224)) ;
  }else if (GalgasBool::boolFalse == test_5) {
    temp_4 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-map.galgas4", 224)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (temp_2.readProperty_isPredefined (), var_elementTypeName_8134, var_structAttributeList_7543, GGS_string::makeEmptyString (), temp_4, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 219)) ;
  {
  GGS_lstring joker_8568 ; // Joker input parameter
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_8568, var_elementTypeName_8134, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 228)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                             GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                             GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                             GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                             GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                             GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_mapDeclarationAST temp_0 = this ;
  const GGS_mapDeclarationAST temp_1 = this ;
  GGS_lstring var_key_9317 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 241)), temp_1.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_9317, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 242)) ;
  }
  const GGS_mapDeclarationAST temp_3 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_9467 (temp_3.readProperty_mPropertyList ()) ;
  while (enumerator_9467.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_9467.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 244)), enumerator_9467.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 244)) ;
    }
    enumerator_9467.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                       const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                       const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringTypeIndex_10322 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("string"), var_stringTypeIndex_10322, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 259)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringTypeIndex_10419 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("lstring"), var_lstringTypeIndex_10419, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 261)) ;
  }
  GGS__5B_enumerationDescriptor_5D_ temp_0 = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 263)) ;
  temp_0.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_lstringTypeIndex_10419, GGS_string ("lkey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 263)) ;
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptor_10502 = temp_0 ;
  GGS_classFunctionMap var_classFunctionMap_10590 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_getterMap var_getterMap_10674 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_10674, inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 266)) ;
  }
  GGS_setterMap var_setterMap_10704 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_10747 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_1 = this ;
  const GGS_mapDeclarationAST temp_2 = this ;
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_10590, ioArgument_ioTypeMap, GGS_string ("mapWithMapToOverride"), temp_1.readProperty_mMapTypeName ().readProperty_string (), GGS_string ("inMap"), temp_2.readProperty_mMapTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 270)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10674, ioArgument_ioTypeMap, GGS_string ("levels"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 280)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10674, ioArgument_ioTypeMap, GGS_string ("hasKeyAtLevel"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("u32"), GGS_string ("inLevel"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 287)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10674, ioArgument_ioTypeMap, GGS_string ("keySet"), GGS_string ("stringset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 298)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10674, ioArgument_ioTypeMap, GGS_string ("keyList"), GGS_string ("[lstring]"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 305)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10674, ioArgument_ioTypeMap, GGS_string ("contains"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 312)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10674, ioArgument_ioTypeMap, GGS_string ("locationForKey"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 321)) ;
  }
  {
  const GGS_mapDeclarationAST temp_3 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10674, ioArgument_ioTypeMap, GGS_string ("overriddenMap"), temp_3.readProperty_mMapTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 330)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_10674, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 337)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_insertMethodFormalArgumentList_12746 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_typedProperty_5D_ var_typedPropertyList_12825 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_optionalMethodSignatureElement_5D_ var_optionalMethodSignature_12907 = GGS__5B_optionalMethodSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_optionalMethodSignature_12907.plusPlusAssignOperation (GGS_optionalMethodSignatureElement::init_21__21__21__21_ (GGS_bool (true), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 350)), var_stringTypeIndex_10322, GGS_string ("inKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 348)) ;
  GGS__5B_functionSignatureElement_5D_ var_argumentTypeListForAddAssignWithFieldExpressionList_13076 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_13076.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 355)), var_lstringTypeIndex_10419, GGS_string ("lkey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 354)) ;
  var_insertMethodFormalArgumentList_12746.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 360)), var_lstringTypeIndex_10419, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 362)), GGS_string ("inLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 359)) ;
  GGS__5B_formalParameterSignatureElement_5D_ var_removeMethodFormalArgumentList_13464 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_removeMethodFormalArgumentList_13464.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 366)), var_lstringTypeIndex_10419, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 368)), GGS_string ("inLKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 365)) ;
  GGS__5B_unifiedTypeMapEntry_5D_ var_typesToIncludeInHeaderCompilation_13688 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_4 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_13753 (temp_4.readProperty_mPropertyList ()) ;
  while (enumerator_13753.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = enumerator_13753.current (HERE).readProperty_initialization ().getter_isSome (SOURCE_FILE ("declaration-type-map.galgas4", 372)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_13753.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("property initialization is not handled for a map"), fixItArray6  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 373)) ;
      }
    }
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_13959 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_13753.current (HERE).readProperty_typeName (), var_attributeTypeIndex_13959, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 375)) ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_13076.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 376)), var_attributeTypeIndex_13959, enumerator_13753.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 376)) ;
    var_typedPropertyList_12825.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_attributeTypeIndex_13959, enumerator_13753.current (HERE).readProperty_name (), enumerator_13753.current (HERE).readProperty_initialization (), GGS_bool (true), enumerator_13753.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 377)) ;
    var_typesToIncludeInHeaderCompilation_13688.plusPlusAssignOperation (var_attributeTypeIndex_13959  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 378)) ;
    var_enumerationDescriptor_10502.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_attributeTypeIndex_13959, enumerator_13753.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 379)) ;
    GGS_lstring temp_7 ;
    const GalgasBool test_8 = enumerator_13753.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      temp_7 = enumerator_13753.current (HERE).readProperty_name () ;
    }else if (GalgasBool::boolFalse == test_8) {
      temp_7 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 381)) ;
    }
    var_insertMethodFormalArgumentList_12746.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (temp_7, var_attributeTypeIndex_13959, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 383)), enumerator_13753.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 380)) ;
    GGS_lstring temp_9 ;
    const GalgasBool test_10 = enumerator_13753.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      temp_9 = enumerator_13753.current (HERE).readProperty_name () ;
    }else if (GalgasBool::boolFalse == test_10) {
      temp_9 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 387)) ;
    }
    var_removeMethodFormalArgumentList_13464.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (temp_9, var_attributeTypeIndex_13959, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-map.galgas4", 389)), enumerator_13753.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 386)) ;
    GGS_lstring temp_11 ;
    const GalgasBool test_12 = enumerator_13753.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      temp_11 = enumerator_13753.current (HERE).readProperty_name () ;
    }else if (GalgasBool::boolFalse == test_12) {
      temp_11 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 394)) ;
    }
    var_optionalMethodSignature_12907.plusPlusAssignOperation (GGS_optionalMethodSignatureElement::init_21__21__21__21_ (GGS_bool (false), temp_11, var_attributeTypeIndex_13959, enumerator_13753.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 392)) ;
    enumerator_13753.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_13 = this ;
  UpEnumerator__5B_insertSetterAST_5D_ enumerator_15055 (temp_13.readProperty_mInsertSetterList ()) ;
  while (enumerator_15055.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = var_setterMap_10704.getter_contains (enumerator_15055.current (HERE).readProperty_mInsertMethodName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 401)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_15055.current (HERE).readProperty_mInsertMethodName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_15055.current (HERE).readProperty_mInsertMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 402)).add_operation (GGS_string ("' insert proc is already declared"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 402)), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 402)) ;
      }
    }
    if (GalgasBool::boolFalse == test_14) {
      {
      var_setterMap_10704.setter_insertOrReplace (enumerator_15055.current (HERE).readProperty_mInsertMethodName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 406)), var_insertMethodFormalArgumentList_12746, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 409)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 404)) ;
      }
    }
    enumerator_15055.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_16 = this ;
  GGS_lstring var_elementTypeName_15546 = function_makeEmbeddedElementTypeLName (temp_16.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 415)) ;
  GGS_unifiedTypeMapEntry var_elementTypeEntry_15695 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_elementTypeName_15546, var_elementTypeEntry_15695, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 416)) ;
  }
  const GGS_mapDeclarationAST temp_17 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_15771 (temp_17.readProperty_mReplaceSetterList ()) ;
  while (enumerator_15771.hasCurrentObject ()) {
    GGS__5B_formalParameterSignatureElement_5D_ temp_18 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 423)) ;
    temp_18.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("with").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 423)), var_elementTypeEntry_15695, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 423)), GGS_string ("inEntry"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 423)) ;
    GGS__5B_formalParameterSignatureElement_5D_ var_replaceSetterFormalArgumentList_15838 = temp_18 ;
    {
    var_setterMap_10704.setter_insertOrReplace (enumerator_15771.current (HERE).readProperty_mName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 427)), var_replaceSetterFormalArgumentList_15838, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 430)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 425)) ;
    }
    enumerator_15771.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_19 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_16192 (temp_19.readProperty_mRemoveSetterList ()) ;
  while (enumerator_16192.hasCurrentObject ()) {
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      test_20 = var_setterMap_10704.getter_contains (enumerator_16192.current (HERE).readProperty_mName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 436)).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        GenericArray <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_16192.current (HERE).readProperty_mName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_16192.current (HERE).readProperty_mName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 438)).add_operation (GGS_string ("' proc is already declared as an insert mutating proc or a remove mutating proc"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 438)), fixItArray21  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 437)) ;
      }
    }
    if (GalgasBool::boolFalse == test_20) {
      {
      var_setterMap_10704.setter_insertOrReplace (enumerator_16192.current (HERE).readProperty_mName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 443)), var_removeMethodFormalArgumentList_13464, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 446)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 441)) ;
      }
    }
    enumerator_16192.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_22 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_16745 (temp_22.readProperty_mSearchMethodList ()) ;
  while (enumerator_16745.hasCurrentObject ()) {
    {
    var_instanceMethodMap_10747.setter_insertKey (enumerator_16745.current (HERE).readProperty_mName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 455)), var_removeMethodFormalArgumentList_13464, enumerator_16745.current (HERE).readProperty_mName ().readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 459)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 453)) ;
    }
    enumerator_16745.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_23 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_17079 (temp_23.readProperty_mPropertyList ()) ;
  while (enumerator_17079.hasCurrentObject ()) {
    GGS_lstring var_accessorName_17106 = GGS_lstring::init_21__21_ (enumerator_17079.current (HERE).readProperty_name ().readProperty_string ().add_operation (GGS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 465)), enumerator_17079.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_17241 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17079.current (HERE).readProperty_typeName (), var_attributeTypeIndex_17241, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 466)) ;
    }
    {
    GGS__5B_functionSignatureElement_5D_ temp_24 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 470)) ;
    temp_24.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 470)), var_stringTypeIndex_10322, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 470)) ;
    var_getterMap_10674.setter_insertOrReplace (var_accessorName_17106, GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 469)), temp_24, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 471)), GGS_bool (true), var_attributeTypeIndex_17241, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 474)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 467)) ;
    }
    enumerator_17079.gotoNextObject () ;
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    const GGS_mapDeclarationAST temp_26 = this ;
    test_25 = GGS_bool (ComparisonKind::greaterOrEqual, temp_26.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("declaration-type-map.galgas4", 479)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      const GGS_mapDeclarationAST temp_27 = this ;
      GGS_location var_insertOrReplaceLocation_17707 = temp_27.readProperty_mInsertOrReplaceDeclarationListAST ().getter_first (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 480)) ;
      {
      var_setterMap_10704.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("insertOrReplace"), var_insertOrReplaceLocation_17707, inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 483)), var_insertMethodFormalArgumentList_12746, GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 486)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 481)) ;
      }
    }
  }
  const GGS_mapDeclarationAST temp_28 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_18124 (temp_28.readProperty_mPropertyList ()) ;
  while (enumerator_18124.hasCurrentObject ()) {
    GGS_lstring var_accessorName_18151 = GGS_lstring::init_21__21_ (GGS_string ("set").add_operation (enumerator_18124.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-map.galgas4", 493)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 493)).add_operation (GGS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 493)), enumerator_18124.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_18382 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18124.current (HERE).readProperty_typeName (), var_attributeTypeIndex_18382, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 496)) ;
    }
    GGS__5B_formalParameterSignatureElement_5D_ var_accessorFormalArgumentList_18454 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    var_accessorFormalArgumentList_18454.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 501)), var_attributeTypeIndex_18382, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 501)), enumerator_18124.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 501)) ;
    var_accessorFormalArgumentList_18454.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 502)), var_stringTypeIndex_10322, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas4", 502)), GGS_string ("key"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 502)) ;
    {
    var_setterMap_10704.setter_insertOrReplace (var_accessorName_18151, GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas4", 505)), var_accessorFormalArgumentList_18454, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas4", 508)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 503)) ;
    }
    enumerator_18124.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_18987 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_19044 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_29 = this ;
  var_initializerMap_18987.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_19044, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 516)), temp_29.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_19044, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 515)) ;
  }
  GGS_typeFeatures var_features_19223 = GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("declaration-type-map.galgas4", 520)).operator_or (GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-map.galgas4", 521)) COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 520)) ;
  GalgasBool test_30 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_30) {
    const GGS_mapDeclarationAST temp_31 = this ;
    test_30 = temp_31.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_30) {
      var_features_19223.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-map.galgas4", 523)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 523)) ;
    }
  }
  {
  const GGS_mapDeclarationAST temp_32 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_32.readProperty_mMapTypeName (), var_features_19223, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 525)) ;
  }
  {
  const GGS_mapDeclarationAST temp_33 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_33.readProperty_mMapTypeName (), GGS_bool (false), var_initializerMap_18987, var_getterMap_10674, var_setterMap_10704, var_instanceMethodMap_10747, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 533)) ;
  }
  GGS_lstring var_optionalElementTypeName_20080 = function_makeOptionalTypeLName (var_elementTypeName_15546, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 549)) ;
  GGS_unifiedTypeMapEntry var_optionalElementTypeEntry_20251 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_optionalElementTypeName_20080, var_optionalElementTypeEntry_20251, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 550)) ;
  }
  GGS_readSubscriptMap var_readSubcriptMap_20331 = GGS_readSubscriptMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ temp_34 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 556)) ;
  temp_34.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 556)), var_stringTypeIndex_10322, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 556)) ;
  GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_20389 = temp_34 ;
  {
  var_readSubcriptMap_20331.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_argumentTypeList_20389, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 558)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 558)), inCompiler COMMA_HERE), var_argumentTypeList_20389, var_optionalElementTypeEntry_20251, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 557)) ;
  }
  const GGS_mapDeclarationAST temp_35 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_20636 (temp_35.readProperty_mSearchSubcriptList ()) ;
  while (enumerator_20636.hasCurrentObject ()) {
    GGS__5B_functionSignatureElement_5D_ temp_36 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 563)) ;
    temp_36.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_20636.current (HERE).readProperty_mName (), var_lstringTypeIndex_10419, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 563)) ;
    GGS__5B_functionSignatureElement_5D_ var_subcriptArgumentTypeList_20698 = temp_36 ;
    {
    var_readSubcriptMap_20331.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_subcriptArgumentTypeList_20698, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 565)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-map.galgas4", 565)), inCompiler COMMA_HERE), var_subcriptArgumentTypeList_20698, var_elementTypeEntry_15695, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 564)) ;
    }
    enumerator_20636.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_37 = this ;
  const GGS_mapDeclarationAST temp_38 = this ;
  const GGS_mapDeclarationAST temp_39 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_20994 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_37.readProperty_mMapTypeName (), temp_38.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-map.galgas4", 576)), GGS_typeKindEnum::class_func_valueType (SOURCE_FILE ("declaration-type-map.galgas4", 577)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), var_typedPropertyList_12825, var_initializerMap_18987, var_classFunctionMap_10590, var_getterMap_10674, var_setterMap_10704, var_instanceMethodMap_10747, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-map.galgas4", 588)), var_readSubcriptMap_20331, GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_10502, var_features_19223, GGS_bool (false), var_elementTypeEntry_15695, GGS_string ("map-").add_operation (temp_39.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-map.galgas4", 595)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 595)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-map.galgas4", 596)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_20994.readProperty_typeName (), var_typeDefinition_20994, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 598)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                      const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                      const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                      GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_mapDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_22588 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 613)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_22588, var_nameForUsefulness_22588, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 614)) ;
  }
  const GGS_mapDeclarationAST temp_1 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_22742 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_1.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 616)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 615)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_22588, var_elementTypeNameForUsefulness_22742 COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 618)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_mapDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_22588  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 620)) ;
    }
  }
  const GGS_mapDeclarationAST temp_4 = this ;
  GGS_lstring var_initializerNameForUsefulness_23131 = function_initializerNameForUsefulEntitiesGraph (temp_4.readProperty_mMapTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 625)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 623)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_23131, var_initializerNameForUsefulness_23131, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 627)) ;
  }
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_23131, var_nameForUsefulness_22588 COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 628)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_mapDeclarationAST temp_6 = this ;
    test_5 = temp_6.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_23131  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 630)) ;
    }
  }
  GGS__5B_typedProperty_5D_ var_typedAttributeList_23637 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_23688 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_7 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_23732 (temp_7.readProperty_mPropertyList ()) ;
  while (enumerator_23732.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_23759 = function_typeNameForUsefulEntitiesGraph (enumerator_23732.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 636)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_22588, var_propertyTypeNameForUsefulness_23759 COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 637)) ;
    }
    GGS_unifiedTypeMapEntry var_t_23974 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_23732.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 638)) ;
    GGS_bool var_hasSelector_24038 = GGS_bool (false) ;
    var_typedAttributeList_23637.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_t_23974, enumerator_23732.current (HERE).readProperty_name (), enumerator_23732.current (HERE).readProperty_initialization (), GGS_bool (true), var_hasSelector_24038, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 640)) ;
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = function_kForbiddenKeysForMap (inCompiler COMMA_HERE).getter_contains (enumerator_23732.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 646)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GGS_string var_m_24305 = GGS_string ("a property cannot be named:") ;
        UpEnumerator_stringset enumerator_24356 (function_kForbiddenKeysForMap (inCompiler COMMA_HERE)) ;
        while (enumerator_24356.hasCurrentObject ()) {
          var_m_24305.plusAssignOperation(GGS_string (" ").add_operation (enumerator_24356.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 649)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 649)) ;
          enumerator_24356.gotoNextObject () ;
        }
        var_m_24305.plusAssignOperation(GGS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 651)) ;
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_23732.current (HERE).readProperty_name ().readProperty_location (), var_m_24305, fixItArray9  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 652)) ;
      }
    }
    {
    var_attributeMap_23688.setter_insertKey (enumerator_23732.current (HERE).readProperty_name (), var_t_23974, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 654)) ;
    }
    enumerator_23732.gotoNextObject () ;
  }
  GGS_insertMethodMap var_insertMethodMap_24611 = GGS_insertMethodMap::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_10 = this ;
  UpEnumerator__5B_insertSetterAST_5D_ enumerator_24662 (temp_10.readProperty_mInsertSetterList ()) ;
  while (enumerator_24662.hasCurrentObject ()) {
    {
    var_insertMethodMap_24611.setter_insertKey (enumerator_24662.current (HERE).readProperty_mInsertMethodName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 659)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_24662.current (HERE).readProperty_mErrorMessage (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 660)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_24662.current (HERE).readProperty_mShadowErrorMessage (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 661)) ;
    }
    enumerator_24662.gotoNextObject () ;
  }
  GGS_searchMethodMap var_searchMethodMap_24944 = GGS_searchMethodMap::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_11 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_24995 (temp_11.readProperty_mSearchMethodList ()) ;
  while (enumerator_24995.hasCurrentObject ()) {
    {
    var_searchMethodMap_24944.setter_insertKey (enumerator_24995.current (HERE).readProperty_mName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 666)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_24995.current (HERE).readProperty_mErrorMessage (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 667)) ;
    }
    enumerator_24995.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_12 = this ;
  UpEnumerator__5B_mapAccessorAST_5D_ enumerator_25198 (temp_12.readProperty_mRemoveSetterList ()) ;
  while (enumerator_25198.hasCurrentObject ()) {
    {
    var_insertMethodMap_24611.setter_insertKey (enumerator_25198.current (HERE).readProperty_mName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 671)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_25198.current (HERE).readProperty_mErrorMessage (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 672)) ;
    }
    enumerator_25198.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_13 = this ;
  UpEnumerator__5B_location_5D_ enumerator_25470 (temp_13.readProperty_mInsertOrReplaceDeclarationListAST ()) ;
  GGS_u_33__32_ index_25423 (uint32_t (0)) ;
  while (enumerator_25470.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = GGS_bool (ComparisonKind::greaterThan, index_25423.objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticWarning (enumerator_25470.current (HERE), GGS_string ("the 'insertOrReplace' mutating proc is already declared"), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 677)) ;
      }
    }
    enumerator_25470.gotoNextObject () ;
    index_25423.plusAssignOperation (GGS_u_33__32_ (1), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 675)) ;
  }
  const GGS_mapDeclarationAST temp_16 = this ;
  GGS_bool var_hasInsertOrReplaceModifier_25677 = GGS_bool (ComparisonKind::greaterThan, temp_16.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("declaration-type-map.galgas4", 680)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = var_hasInsertOrReplaceModifier_25677.operator_and (var_insertMethodMap_24611.getter_contains (GGS_string ("insertOrReplace") COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 681)) COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 681)).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      const GGS_mapDeclarationAST temp_18 = this ;
      GGS_location var_insertOrReplaceDeclarationLocation_25852 = temp_18.readProperty_mInsertOrReplaceDeclarationListAST ().getter_first (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 682)) ;
      GenericArray <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_25852, GGS_string ("the insertOrReplace' mutating proc cannot be declared : an insert mutating proc or a remove mutating proc has been declared with this name"), fixItArray19  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 683)) ;
    }
  }
  const GGS_mapDeclarationAST temp_20 = this ;
  GGS_lstring var_elementTypeName_26183 = function_makeEmbeddedElementTypeLName (temp_20.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 687)) ;
  GGS_unifiedTypeMapEntry var_elementTypeEntry_26258 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_elementTypeName_26183, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 688)) ;
  GGS_lstring var_optionalElementTypeName_26333 = function_makeOptionalTypeLName (var_elementTypeName_26183, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 689)) ;
  GGS_unifiedTypeMapEntry var_optionalElementTypeEntry_26422 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_optionalElementTypeName_26333, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 690)) ;
  const GGS_mapDeclarationAST temp_21 = this ;
  const GGS_mapDeclarationAST temp_22 = this ;
  const GGS_mapDeclarationAST temp_23 = this ;
  const GGS_mapDeclarationAST temp_24 = this ;
  const GGS_mapDeclarationAST temp_25 = this ;
  const GGS_mapDeclarationAST temp_26 = this ;
  const GGS_mapDeclarationAST temp_27 = this ;
  const GGS_mapDeclarationAST temp_28 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_mapTypeForGeneration::init_21_infoMessage_21__21__21__21__21__21__21__21__21__21__21_ (GGS_string ("map ").add_operation (temp_21.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 693)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_22.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 694)), var_elementTypeEntry_26258, temp_23.readProperty_mMapTypeName (), var_typedAttributeList_23637, temp_24.readProperty_mInsertSetterList (), temp_25.readProperty_mSearchMethodList (), temp_26.readProperty_mSearchSubcriptList (), temp_27.readProperty_mRemoveSetterList (), temp_28.readProperty_mReplaceSetterList (), var_hasInsertOrReplaceModifier_25677, var_optionalElementTypeEntry_26422, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 692)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters_3F_ (const GGS_lstring constinArgument_inString,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_string_5D_ enumerator_27394 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GGS_string ("%%") COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 715))) ;
  while (enumerator_27394.hasCurrentObject ()) {
    GGS__5B_string_5D_ var_explodedArray_27417 = enumerator_27394.current (HERE).getter_componentsSeparatedByString (GGS_string ("%") COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 716)) ;
    {
    GGS_string joker_27511 ; // Joker input parameter
    var_explodedArray_27417.setter_removeFirst (joker_27511, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 717)) ;
    }
    UpEnumerator__5B_string_5D_ enumerator_27532 (var_explodedArray_27417) ;
    while (enumerator_27532.hasCurrentObject ()) {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_27532.current (HERE).getter_count (SOURCE_FILE ("declaration-type-map.galgas4", 719)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_char var_c_27597 = enumerator_27532.current (HERE).getter_characterAtIndex (GGS_u_33__32_ (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 720)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = GGS_bool (ComparisonKind::notEqual, var_c_27597.objectCompare (GGS_char (utf32 (75)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GGS_string ("only '%K' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 722)) ;
            }
          }
        }
      }
      enumerator_27532.gotoNextObject () ;
    }
    enumerator_27394.gotoNextObject () ;
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
  UpEnumerator__5B_string_5D_ enumerator_28071 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GGS_string ("%%") COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 732))) ;
  while (enumerator_28071.hasCurrentObject ()) {
    GGS__5B_string_5D_ var_explodedArray_28094 = enumerator_28071.current (HERE).getter_componentsSeparatedByString (GGS_string ("%") COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 733)) ;
    {
    GGS_string joker_28188 ; // Joker input parameter
    var_explodedArray_28094.setter_removeFirst (joker_28188, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 734)) ;
    }
    UpEnumerator__5B_string_5D_ enumerator_28209 (var_explodedArray_28094) ;
    while (enumerator_28209.hasCurrentObject ()) {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_28209.current (HERE).getter_count (SOURCE_FILE ("declaration-type-map.galgas4", 736)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_char var_c_28274 = enumerator_28209.current (HERE).getter_characterAtIndex (GGS_u_33__32_ (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 737)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = GGS_bool (ComparisonKind::notEqual, var_c_28274.objectCompare (GGS_char (utf32 (75)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_c_28274.objectCompare (GGS_char (utf32 (76)))) COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 738)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GGS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 739)) ;
            }
          }
        }
      }
      enumerator_28209.gotoNextObject () ;
    }
    enumerator_28071.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'kForbiddenKeysForMap'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_kForbiddenKeysForMap (Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result ; // Returned variable
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 748)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("lkey")  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 748)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("description")  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 748)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("object")  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 748)) ;
  result = temp_0 ;
//---
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_kForbiddenKeysForMap = false ;
static GGS_stringset gOnceFunctionResult_kForbiddenKeysForMap ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_kForbiddenKeysForMap (Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_kForbiddenKeysForMap) {
    gOnceFunctionResult_kForbiddenKeysForMap = onceFunction_kForbiddenKeysForMap (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_kForbiddenKeysForMap = true ;
  }
  return gOnceFunctionResult_kForbiddenKeysForMap ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_kForbiddenKeysForMap (void) {
  gOnceFunctionResult_kForbiddenKeysForMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_kForbiddenKeysForMap (nullptr,
                                                                releaseOnceFunctionResult_kForbiddenKeysForMap) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                              GGS_string & outArgument_outHeader,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_mapTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_29700 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 770)) ;
  const GGS_mapTypeForGeneration temp_1 = this ;
  const GGS_mapTypeForGeneration temp_2 = this ;
  const GGS_mapTypeForGeneration temp_3 = this ;
  const GGS_mapTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GGS_mapGenerationTemplate::class_func_mapTypeHeader_31_ (var_selfTypeDefinition_29700.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 773)), temp_2.readProperty_mTypedAttributeList (), temp_3.readProperty_mSearchMethodList (), var_selfTypeDefinition_29700.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_29700.readProperty_typeForEnumeratedElement (), extensionGetter_identifierRepresentation (temp_4.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 778)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_29700.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 779)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 771)) ;
  const GGS_mapTypeForGeneration temp_5 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_29700.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 783)), var_selfTypeDefinition_29700.readProperty_isConcrete (), var_selfTypeDefinition_29700.readProperty_initializerMap (), var_selfTypeDefinition_29700.readProperty_classFunctionMap (), var_selfTypeDefinition_29700.readProperty_getterMap (), var_selfTypeDefinition_29700.readProperty_setterMap (), var_selfTypeDefinition_29700.readProperty_instanceMethodMap (), var_selfTypeDefinition_29700.readProperty_classMethodMap (), var_selfTypeDefinition_29700.readProperty_readSubscriptMap (), var_selfTypeDefinition_29700.readProperty_writeSubscriptMap (), var_selfTypeDefinition_29700.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_29700.readProperty_features (), var_selfTypeDefinition_29700.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_29700.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 781)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 781)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@mapTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_string & outArgument_outImplementation,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_mapTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 805)) ;
  const GGS_mapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mOptionalElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 806)) ;
  const GGS_mapTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 807)) ;
  const GGS_mapTypeForGeneration temp_3 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_31449 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 808)) ;
  const GGS_mapTypeForGeneration temp_4 = this ;
  const GGS_mapTypeForGeneration temp_5 = this ;
  const GGS_mapTypeForGeneration temp_6 = this ;
  const GGS_mapTypeForGeneration temp_7 = this ;
  const GGS_mapTypeForGeneration temp_8 = this ;
  const GGS_mapTypeForGeneration temp_9 = this ;
  const GGS_mapTypeForGeneration temp_10 = this ;
  const GGS_mapTypeForGeneration temp_11 = this ;
  const GGS_mapTypeForGeneration temp_12 = this ;
  outArgument_outImplementation = GGS_mapGenerationTemplate::class_func_mapTypeSpecificImplementation (var_selfTypeDefinition_31449.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-map.galgas4", 810)), temp_4.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 812)), temp_6.readProperty_mInsertSetterList (), extensionGetter_identifierRepresentation (temp_7.readProperty_mOptionalElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 814)), temp_8.readProperty_mSearchMethodList (), temp_9.readProperty_mSearchSubcriptList (), temp_10.readProperty_mRemoveSetterList (), temp_11.readProperty_mReplaceSetterList (), temp_12.readProperty_mHasInsertOrReplaceModifier (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_31449.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 820)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas4", 809)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@filewrapperDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_filewrapperDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  result = GGS_string ("filewrapper @").add_operation (temp_0.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 206)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                     GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                     GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                     GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                     GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                     GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                     GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  const GGS_filewrapperDeclarationAST temp_1 = this ;
  GGS_lstring var_key_8784 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 219)), temp_1.readProperty_mFilewrapperName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_filewrapperDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_8784, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 220)) ;
  }
  const GGS_filewrapperDeclarationAST temp_3 = this ;
  UpEnumerator__5B_filewrapperTemplateAST_5D_ enumerator_8939 (temp_3.readProperty_mFilewrapperTemplateListEX ()) ;
  while (enumerator_8939.hasCurrentObject ()) {
    UpEnumerator__5B_formalTemplateInputParameterAST_5D_ enumerator_8995 (enumerator_8939.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
    while (enumerator_8995.hasCurrentObject ()) {
      GGS_lstring var_argKey_9052 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_8995.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 223)), enumerator_8995.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
      {
      ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (var_argKey_9052 COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 224)) ;
      }
      enumerator_8995.gotoNextObject () ;
    }
    enumerator_8939.gotoNextObject () ;
  }
  const GGS_filewrapperDeclarationAST temp_4 = this ;
  UpEnumerator__5B_filewrapperTemplateAST_5D_ enumerator_9248 (temp_4.readProperty_mFilewrapperTemplateList ()) ;
  while (enumerator_9248.hasCurrentObject ()) {
    UpEnumerator__5B_formalTemplateInputParameterAST_5D_ enumerator_9302 (enumerator_9248.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
    while (enumerator_9302.hasCurrentObject ()) {
      GGS_lstring var_argKey_9359 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_9302.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 229)), enumerator_9302.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
      {
      ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (var_argKey_9359 COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 230)) ;
      }
      enumerator_9302.gotoNextObject () ;
    }
    enumerator_9248.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                               const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                               const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                               const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                               const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_wrapperExtensionMap var_textExtensionMap_10417 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_10462 (temp_0.readProperty_mFilewrapperTextFileExtensionList ()) ;
  while (enumerator_10462.hasCurrentObject ()) {
    {
    var_textExtensionMap_10417.setter_insertKey (enumerator_10462.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 247)) ;
    }
    enumerator_10462.gotoNextObject () ;
  }
  GGS_wrapperExtensionMap var_binaryFileExtensionMap_10619 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_1 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_10670 (temp_1.readProperty_mFilewrapperBinaryFileExtensionList ()) ;
  while (enumerator_10670.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_textExtensionMap_10417.getter_contains (enumerator_10670.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 252)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_10670.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_10670.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 253)).add_operation (GGS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 253)), fixItArray3  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 253)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      {
      var_binaryFileExtensionMap_10619.setter_insertKey (enumerator_10670.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 255)) ;
      }
    }
    enumerator_10670.gotoNextObject () ;
  }
  GGS_wrapperFileMap var_regularRootFileMap_10986 ;
  GGS_wrapperDirectoryMap var_wrapperDirectoryMap_11034 ;
  const GGS_filewrapperDeclarationAST temp_4 = this ;
  const GGS_filewrapperDeclarationAST temp_5 = this ;
  GGS_string var_absoluteSourcePath_11062 = temp_4.readProperty_mSourceFileAbsolutePath ().getter_deletingLastPathComponent (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 261)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 261)).add_operation (temp_5.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 261)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_absoluteSourcePath_11062.getter_directoryExists (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 262)).operator_not (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 262)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_filewrapperDeclarationAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_11062, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 263)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 263)), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 263)) ;
      var_regularRootFileMap_10986.drop () ; // Release error dropped variable
      var_wrapperDirectoryMap_11034.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    GGS_u_33__32_ var_wrapperFileIndex_11423 = GGS_u_33__32_ (uint32_t (0U)) ;
    GGS_u_33__32_ var_wrapperDirectoryIndex_11459 = GGS_u_33__32_ (uint32_t (0U)) ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (var_absoluteSourcePath_11062, GGS_string ("/"), var_textExtensionMap_10417, var_binaryFileExtensionMap_10619, var_regularRootFileMap_10986, var_wrapperDirectoryMap_11034, var_wrapperFileIndex_11423, var_wrapperDirectoryIndex_11459, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 269)) ;
    }
  }
  {
  const GGS_filewrapperDeclarationAST temp_9 = this ;
  const GGS_filewrapperDeclarationAST temp_10 = this ;
  const GGS_filewrapperDeclarationAST temp_11 = this ;
  const GGS_filewrapperDeclarationAST temp_12 = this ;
  ioArgument_ioSemanticContext.mProperty_mFilewrapperMap.setter_insertKey (temp_9.readProperty_mFilewrapperName (), temp_10.readProperty_mFilewrapperPath (), temp_11.readProperty_mFilewrapperTextFileExtensionList (), var_regularRootFileMap_10986, var_wrapperDirectoryMap_11034, temp_12.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 281)) ;
  }
  GGS_getterMap var_getterMap_12092 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_12092, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 290)) ;
  }
  GGS_classFunctionMap var_classFunctionMap_12196 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_filewrapperType_12276 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("filewrapper"), var_filewrapperType_12276, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 293)) ;
  }
  {
  const GGS_filewrapperDeclarationAST temp_13 = this ;
  GGS__5B_functionSignatureElement_5D_ temp_14 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 296)) ;
  var_classFunctionMap_12196.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("contents"), temp_13.readProperty_mFilewrapperName ().readProperty_location (), inCompiler COMMA_HERE), temp_14, GGS_bool (false), var_filewrapperType_12276, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 294)) ;
  }
  GGS_unifiedTypeMapEntry var_stringType_12582 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("string"), var_stringType_12582, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 301)) ;
  }
  const GGS_filewrapperDeclarationAST temp_15 = this ;
  UpEnumerator__5B_filewrapperTemplateAST_5D_ enumerator_12620 (temp_15.readProperty_mFilewrapperTemplateListEX ()) ;
  while (enumerator_12620.hasCurrentObject ()) {
    GGS__5B_functionSignatureElement_5D_ var_formalArgumentList_12660 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalTemplateInputParameterAST_5D_ enumerator_12755 (enumerator_12620.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
    while (enumerator_12755.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_typeIndex_12881 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12755.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_12881, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 305)) ;
      }
      var_formalArgumentList_12660.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_12755.current (HERE).readProperty_mFormalTemplateSelector (), var_typeIndex_12881, enumerator_12755.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 306)) ;
      enumerator_12755.gotoNextObject () ;
    }
    {
    var_classFunctionMap_12196.setter_insertKey (enumerator_12620.current (HERE).readProperty_mFilewrapperTemplateName (), var_formalArgumentList_12660, GGS_bool (true), var_stringType_12582, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 313)) ;
    }
    enumerator_12620.gotoNextObject () ;
  }
  const GGS_filewrapperDeclarationAST temp_16 = this ;
  UpEnumerator__5B_filewrapperTemplateAST_5D_ enumerator_13339 (temp_16.readProperty_mFilewrapperTemplateList ()) ;
  while (enumerator_13339.hasCurrentObject ()) {
    GGS__5B_functionSignatureElement_5D_ var_formalArgumentList_13377 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalTemplateInputParameterAST_5D_ enumerator_13472 (enumerator_13339.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
    while (enumerator_13472.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_typeIndex_13598 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_13472.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_13598, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 323)) ;
      }
      var_formalArgumentList_13377.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_13472.current (HERE).readProperty_mFormalTemplateSelector (), var_typeIndex_13598, enumerator_13472.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 324)) ;
      enumerator_13472.gotoNextObject () ;
    }
    {
    var_classFunctionMap_12196.setter_insertKey (enumerator_13339.current (HERE).readProperty_mFilewrapperTemplateName (), var_formalArgumentList_13377, GGS_bool (true), var_stringType_12582, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 331)) ;
    }
    enumerator_13339.gotoNextObject () ;
  }
  GGS_setterMap var_setterMap_14072 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_14115 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_14163 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_filewrapperDeclarationAST temp_17 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_17.readProperty_mFilewrapperName (), GGS_bool (false), var_initializerMap_14163, var_getterMap_12092, var_setterMap_14072, var_instanceMethodMap_14115, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 342)) ;
  }
  GGS_typeFeatures var_features_14621 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 357)) ;
  const GGS_filewrapperDeclarationAST temp_18 = this ;
  GGS__5B_typedProperty_5D_ temp_19 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 367)) ;
  GGS__5B_typedProperty_5D_ temp_20 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 369)) ;
  const GGS_filewrapperDeclarationAST temp_21 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_14719 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_18.readProperty_mFilewrapperName (), GGS_bool (false), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 364)), GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 365)), GGS_bool (false), temp_19, GGS_propertyMap::init (inCompiler COMMA_HERE), temp_20, GGS_initializerMap::init (inCompiler COMMA_HERE), var_classFunctionMap_12196, var_getterMap_12092, var_setterMap_14072, var_instanceMethodMap_14115, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 376)), GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_14621, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 382)), GGS_string ("filewrapper-").add_operation (temp_21.readProperty_mFilewrapperName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 383)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 383)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 384)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14719.readProperty_typeName (), var_typeDefinition_14719, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 386)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                              GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  GGS_lstring var_filewrapperNameForUsefulness_16393 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 399)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperNameForUsefulness_16393, var_filewrapperNameForUsefulness_16393, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 400)) ;
  }
  const GGS_filewrapperDeclarationAST temp_1 = this ;
  const GGS_filewrapperDeclarationAST temp_2 = this ;
  GGS_string var_absoluteSourcePath_16612 = temp_1.readProperty_mSourceFileAbsolutePath ().getter_deletingLastPathComponent (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 402)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 402)).add_operation (temp_2.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 402)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_absoluteSourcePath_16612.getter_directoryExists (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 403)).operator_not (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 403)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_filewrapperDeclarationAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_16612, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 404)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 404)), fixItArray5  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 404)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GGS_wrapperExtensionMap var_textExtensionMap_16951 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
    const GGS_filewrapperDeclarationAST temp_6 = this ;
    UpEnumerator__5B_lstring_5D_ enumerator_16998 (temp_6.readProperty_mFilewrapperTextFileExtensionList ()) ;
    while (enumerator_16998.hasCurrentObject ()) {
      {
      var_textExtensionMap_16951.setter_insertKey (enumerator_16998.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 409)) ;
      }
      enumerator_16998.gotoNextObject () ;
    }
    GGS_wrapperExtensionMap var_binaryFileExtensionMap_17163 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
    const GGS_filewrapperDeclarationAST temp_7 = this ;
    UpEnumerator__5B_lstring_5D_ enumerator_17216 (temp_7.readProperty_mFilewrapperBinaryFileExtensionList ()) ;
    while (enumerator_17216.hasCurrentObject ()) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = var_textExtensionMap_16951.getter_contains (enumerator_17216.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 414)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_17216.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_17216.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 415)).add_operation (GGS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 415)), fixItArray9  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 415)) ;
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        {
        var_binaryFileExtensionMap_17163.setter_insertKey (enumerator_17216.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 417)) ;
        }
      }
      enumerator_17216.gotoNextObject () ;
    }
    GGS_wrapperFileMap var_regularRootFileMap_17548 ;
    GGS_wrapperDirectoryMap var_wrapperDirectoryMap_17598 ;
    const GGS_filewrapperDeclarationAST temp_10 = this ;
    const GGS_filewrapperDeclarationAST temp_11 = this ;
    GGS_string var_absoluteSourcePath_17628 = temp_10.readProperty_mSourceFileAbsolutePath ().getter_deletingLastPathComponent (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 423)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 423)).add_operation (temp_11.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 423)) ;
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = var_absoluteSourcePath_17628.getter_directoryExists (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 424)).operator_not (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 424)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_filewrapperDeclarationAST temp_13 = this ;
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_17628, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 425)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 425)), fixItArray14  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 425)) ;
        var_regularRootFileMap_17548.drop () ; // Release error dropped variable
        var_wrapperDirectoryMap_17598.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      GGS_u_33__32_ var_wrapperFileIndex_18001 = GGS_u_33__32_ (uint32_t (0U)) ;
      GGS_u_33__32_ var_wrapperDirectoryIndex_18039 = GGS_u_33__32_ (uint32_t (0U)) ;
      {
      routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (var_absoluteSourcePath_17628, GGS_string ("/"), var_textExtensionMap_16951, var_binaryFileExtensionMap_17163, var_regularRootFileMap_17548, var_wrapperDirectoryMap_17598, var_wrapperFileIndex_18001, var_wrapperDirectoryIndex_18039, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 431)) ;
      }
    }
    GGS__5B_filewrapperTemplateForGeneration_5D_ temp_15 = GGS__5B_filewrapperTemplateForGeneration_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 443)) ;
    GGS__5B_filewrapperTemplateForGeneration_5D_ var_filewrapperTemplateListForGeneration_18467 = temp_15 ;
    const GGS_filewrapperDeclarationAST temp_16 = this ;
    UpEnumerator__5B_filewrapperTemplateAST_5D_ enumerator_18547 (temp_16.readProperty_mFilewrapperTemplateListEX ()) ;
    while (enumerator_18547.hasCurrentObject ()) {
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        test_17 = GGS_bool (ComparisonKind::equal, enumerator_18547.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 445)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (enumerator_18547.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), GGS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_17628, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 447)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 447)), fixItArray18  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 446)) ;
        }
      }
      GGS_string var_absoluteTemplatePath_18874 = var_absoluteSourcePath_17628.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 449)).add_operation (enumerator_18547.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 449)) ;
      GGS__5B_templateInstructionAST_5D_ var_resultingInstructionList_19060 ;
      var_resultingInstructionList_19060.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GGS_lstring::init_21__21_ (var_absoluteTemplatePath_18874, enumerator_18547.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), inCompiler COMMA_HERE), var_resultingInstructionList_19060  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 451)) ;
      GGS_templateVariableMap var_templateVariableMap_19260 = GGS_templateVariableMap::init (inCompiler COMMA_HERE) ;
      GGS__5B_formalInputParameterForGeneration_5D_ var_filewrapperTemplateFormalInputParameters_19335 = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_formalTemplateInputParameterAST_5D_ enumerator_19424 (enumerator_18547.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
      while (enumerator_19424.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_19483 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_19424.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 457)) ;
        GGS_string var_cppVarName_19575 = GGS_string ("in_").add_operation (enumerator_19424.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 458)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 458)) ;
        {
        var_templateVariableMap_19260.setter_insertKey (enumerator_19424.current (HERE).readProperty_mFormalArgumentName (), var_type_19483, var_cppVarName_19575, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 459)) ;
        }
        var_filewrapperTemplateFormalInputParameters_19335.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_19424.current (HERE).readProperty_mFormalTemplateSelector (), var_type_19483, var_cppVarName_19575, enumerator_19424.current (HERE).readProperty_mFormalArgumentName (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 460)) ;
        enumerator_19424.gotoNextObject () ;
      }
      GGS__5B_templateInstructionForGeneration_5D_ var_templateInstructionListForGeneration_19938 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      GGS_templateAnalysisContext var_templateAnalysisContext_20028 = GGS_templateAnalysisContext::init_21__21__21_ (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_19260, inCompiler COMMA_HERE) ;
      {
      routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (var_filewrapperNameForUsefulness_16393, ioArgument_ioUsefulEntitiesGraph, var_templateAnalysisContext_20028, ioArgument_ioTypeMap, var_resultingInstructionList_19060, var_templateInstructionListForGeneration_19938, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 469)) ;
      }
      var_filewrapperTemplateListForGeneration_18467.plusPlusAssignOperation (GGS_filewrapperTemplateForGeneration::init_21__21__21_ (enumerator_18547.current (HERE).readProperty_mFilewrapperTemplateName ().readProperty_string (), var_filewrapperTemplateFormalInputParameters_19335, var_templateInstructionListForGeneration_19938, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 478)) ;
      enumerator_18547.gotoNextObject () ;
    }
    const GGS_filewrapperDeclarationAST temp_19 = this ;
    UpEnumerator__5B_filewrapperTemplateAST_5D_ enumerator_20827 (temp_19.readProperty_mFilewrapperTemplateList ()) ;
    while (enumerator_20827.hasCurrentObject ()) {
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = GGS_bool (ComparisonKind::equal, enumerator_20827.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 486)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (enumerator_20827.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), GGS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_17628, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 488)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 488)), fixItArray21  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 487)) ;
        }
      }
      GGS_string var_absoluteTemplatePath_21152 = var_absoluteSourcePath_17628.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 490)).add_operation (enumerator_20827.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 490)) ;
      GGS__5B_templateInstructionAST_5D_ var_resultingInstructionList_21338 ;
      var_resultingInstructionList_21338.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GGS_lstring::init_21__21_ (var_absoluteTemplatePath_21152, enumerator_20827.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), inCompiler COMMA_HERE), var_resultingInstructionList_21338  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 492)) ;
      GGS_templateVariableMap var_templateVariableMap_21538 = GGS_templateVariableMap::init (inCompiler COMMA_HERE) ;
      GGS__5B_formalInputParameterForGeneration_5D_ var_filewrapperTemplateFormalInputParameters_21613 = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_formalTemplateInputParameterAST_5D_ enumerator_21702 (enumerator_20827.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
      while (enumerator_21702.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_21761 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_21702.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 498)) ;
        GGS_string var_cppVarName_21853 = GGS_string ("in_").add_operation (enumerator_21702.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 499)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 499)) ;
        {
        var_templateVariableMap_21538.setter_insertKey (enumerator_21702.current (HERE).readProperty_mFormalArgumentName (), var_type_21761, var_cppVarName_21853, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 500)) ;
        }
        var_filewrapperTemplateFormalInputParameters_21613.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_21702.current (HERE).readProperty_mFormalTemplateSelector (), var_type_21761, var_cppVarName_21853, enumerator_21702.current (HERE).readProperty_mFormalArgumentName (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 501)) ;
        enumerator_21702.gotoNextObject () ;
      }
      GGS__5B_templateInstructionForGeneration_5D_ var_templateInstructionListForGeneration_22216 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      GGS_templateAnalysisContext var_templateAnalysisContext_22306 = GGS_templateAnalysisContext::init_21__21__21_ (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_21538, inCompiler COMMA_HERE) ;
      {
      routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (var_filewrapperNameForUsefulness_16393, ioArgument_ioUsefulEntitiesGraph, var_templateAnalysisContext_22306, ioArgument_ioTypeMap, var_resultingInstructionList_21338, var_templateInstructionListForGeneration_22216, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 510)) ;
      }
      var_filewrapperTemplateListForGeneration_18467.plusPlusAssignOperation (GGS_filewrapperTemplateForGeneration::init_21__21__21_ (enumerator_20827.current (HERE).readProperty_mFilewrapperTemplateName ().readProperty_string (), var_filewrapperTemplateFormalInputParameters_21613, var_templateInstructionListForGeneration_22216, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 519)) ;
      enumerator_20827.gotoNextObject () ;
    }
    const GGS_filewrapperDeclarationAST temp_22 = this ;
    const GGS_filewrapperDeclarationAST temp_23 = this ;
    ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_filewrapperTypeForGeneration::init_21_infoMessage_21__21__21__21_ (GGS_string ("filewrapper ").add_operation (temp_22.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 527)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_23.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 528)), var_filewrapperTemplateListForGeneration_18467, var_regularRootFileMap_17548, var_wrapperDirectoryMap_17598, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 526)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_24165 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 553)) ;
  GGS__5B_string_5D_ var_regularFileIndexStringList_24225 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_regularBinaryContentIndexStringList_24275 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_regularTextContentIndexStringList_24334 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_directoryIndexStringList_24391 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_filewrapperTypeForGeneration temp_1 = this ;
  const GGS_filewrapperTypeForGeneration temp_2 = this ;
  routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (temp_1.readProperty_regularRootFileMap (), temp_2.readProperty_wrapperDirectoryMap (), var_regularFileIndexStringList_24225, var_directoryIndexStringList_24391, var_regularTextContentIndexStringList_24334, var_regularBinaryContentIndexStringList_24275, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 558)) ;
  }
  outArgument_outHeader = GGS_filewrapperGenerationTemplate::class_func_filewrapperDeclaration (var_regularFileIndexStringList_24225, var_directoryIndexStringList_24391, var_regularTextContentIndexStringList_24334, var_regularBinaryContentIndexStringList_24275, var_selfTypeDefinition_24165.readProperty_typeName ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 566)) ;
  outArgument_outHeader.plusAssignOperation(GGS_filewrapperGenerationTemplate::class_func_filewrapperTypeHeader_31_ (var_selfTypeDefinition_24165.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_24165.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 575)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 573)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 573)) ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForPackage (var_selfTypeDefinition_24165.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_24165.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 579)), var_selfTypeDefinition_24165.readProperty_classFunctionMap (), var_selfTypeDefinition_24165.readProperty_classMethodMap (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 577)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 577)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 590)) ;
  outArgument_outImplementation = GGS_string::makeEmptyString () ;
  GGS_string var_filewrapperImplementation_25881 = GGS_string::makeEmptyString () ;
  {
  const GGS_filewrapperTypeForGeneration temp_1 = this ;
  const GGS_filewrapperTypeForGeneration temp_2 = this ;
  const GGS_filewrapperTypeForGeneration temp_3 = this ;
  routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 595)).readProperty_typeName ().readProperty_string (), GGS_string::makeEmptyString (), GGS_u_33__32_ (uint32_t (0U)), temp_2.readProperty_regularRootFileMap (), temp_3.readProperty_wrapperDirectoryMap (), var_filewrapperImplementation_25881, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 594)) ;
  }
  const GGS_filewrapperTypeForGeneration temp_4 = this ;
  outArgument_outImplementation.plusAssignOperation(GGS_filewrapperGenerationTemplate::class_func_filewrapperImplementation (extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 603)).readProperty_typeName ().readProperty_string (), var_filewrapperImplementation_25881, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 602)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 602)) ;
  const GGS_filewrapperTypeForGeneration temp_5 = this ;
  const GGS_filewrapperTypeForGeneration temp_6 = this ;
  outArgument_outImplementation.plusAssignOperation(GGS_filewrapperGenerationTemplate::class_func_filewrapperTypeSpecificImplementation (extensionGetter_definition (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 608)).readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 609)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 607)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 607)) ;
  const GGS_filewrapperTypeForGeneration temp_7 = this ;
  UpEnumerator__5B_filewrapperTemplateForGeneration_5D_ enumerator_26578 (temp_7.readProperty_filewrapperTemplateListForGeneration ()) ;
  while (enumerator_26578.hasCurrentObject ()) {
    GGS_string var_generatedCodeForInstructionList_26688 = GGS_string::makeEmptyString () ;
    GGS_u_33__32_ var_temporaryVariableIndex_26740 = GGS_u_33__32_ (uint32_t (0U)) ;
    GGS_stringset var_unusedVariableCppNameSet_26788 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    var_unusedVariableCppNameSet_26788.plusPlusAssignOperation (function_gCompilerCppName (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 617)) ;
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_26910 (enumerator_26578.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
    while (enumerator_26910.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_26788.plusPlusAssignOperation (enumerator_26910.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 619)) ;
      enumerator_26910.gotoNextObject () ;
    }
    GGS_bool var_useColumnMarker_27047 = GGS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_26578.current (HERE).readProperty_mTemplateInstructionListForGeneration (), var_generatedCodeForInstructionList_26688, ioArgument_ioInclusionSet, var_temporaryVariableIndex_26740, var_unusedVariableCppNameSet_26788, var_useColumnMarker_27047, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 622)) ;
    }
    const GGS_filewrapperTypeForGeneration temp_8 = this ;
    outArgument_outImplementation.plusAssignOperation(GGS_filewrapperGenerationTemplate::class_func_filewrapperTemplateImplementation (extensionGetter_definition (temp_8.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 632)).readProperty_typeName ().readProperty_string (), enumerator_26578.current (HERE).readProperty_mFilewrapperTemplateName (), enumerator_26578.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters (), var_unusedVariableCppNameSet_26788, var_useColumnMarker_27047, var_generatedCodeForInstructionList_26688, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 631)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 631)) ;
    enumerator_26578.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateWrapperContents?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (const GGS_string constinArgument_inFilewrapperName,
                                                              const GGS_string constinArgument_inFilewrapperDirectory,
                                                              const GGS_u_33__32_ constinArgument_inFilewrapperDirectoryIndex,
                                                              const GGS_wrapperFileMap constinArgument_inFilewrapperRegularFileMap,
                                                              const GGS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                              GGS_string & ioArgument_ioImplementation,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_wrapperFileMap enumerator_30629 (constinArgument_inFilewrapperRegularFileMap) ;
  while (enumerator_30629.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_30629.current (HERE).readProperty_mIsTextFile ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_contents_30717 = GGS_string::class_func_stringWithContentsOfFile (enumerator_30629.current (HERE).readProperty_mAbsoluteFilePath (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 715)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 716)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 716)).add_operation (enumerator_30629.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 716)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 716)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 716)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("const char * gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 717)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_30629.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 718)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 718)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 719)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 720)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 720)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" = "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 721)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, var_contents_30717.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 722)).objectCompare (GGS_u_33__32_ (uint32_t (100U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS__5B_string_5D_ var_components_31231 = var_contents_30717.getter_componentsSeparatedByString (GGS_string ("\n") COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 723)) ;
            GGS_string var_lastLine_31326 ;
            {
            var_components_31231.setter_removeLast (var_lastLine_31326, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 724)) ;
            }
            UpEnumerator__5B_string_5D_ enumerator_31357 (var_components_31231) ;
            const bool bool_2 = true ;
            if (enumerator_31357.hasCurrentObject () && bool_2) {
              ioArgument_ioImplementation.plusAssignOperation(GGS_string ("\n  "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 727)) ;
              while (enumerator_31357.hasCurrentObject () && bool_2) {
                GGS_string var_s_31445 = enumerator_31357.current (HERE).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 729)) ;
                ioArgument_ioImplementation.plusAssignOperation(var_s_31445.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 730)).add_operation (GGS_string ("\n  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 730)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 730)) ;
                enumerator_31357.gotoNextObject () ;
              }
            }
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::greaterThan, var_lastLine_31326.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 732)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                ioArgument_ioImplementation.plusAssignOperation(var_lastLine_31326.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 733)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 733)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          ioArgument_ioImplementation.plusAssignOperation(var_contents_30717.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 736)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 736)) ;
        }
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" ;\n\nconst RegularFileWrapper gWrapperFile_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 738)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_30629.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 739)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 739)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 740)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 741)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 741)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" (\n  "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 742)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_30629.current (HERE).readProperty_lkey ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 743)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 743)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (",\n  "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 744)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_30629.current (HERE).readProperty_lkey ().readProperty_string ().getter_pathExtension (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 745)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 745)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 745)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (",\n  true, // Text file\n "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 746)) ;
        ioArgument_ioImplementation.plusAssignOperation(var_contents_30717.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 747)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 747)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 747)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (", // Text length\n  gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 748)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_30629.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 749)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 749)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 750)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 751)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 751)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("\n) ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 752)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_data var_contents_32706 = GGS_data::class_func_dataWithContentsOfFile (enumerator_30629.current (HERE).readProperty_mAbsoluteFilePath (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 754)) ;
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 755)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 755)).add_operation (enumerator_30629.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 755)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 755)).add_operation (GGS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 755)).add_operation (enumerator_30629.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 757)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 756)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 757)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 758)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 757)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 758)).add_operation (var_contents_32706.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 758)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 758)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 758)).add_operation (GGS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 758)).add_operation (var_contents_32706.getter_cStringRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 759)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 758)).add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 759)).add_operation (GGS_string ("const RegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 759)).add_operation (enumerator_30629.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 760)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 760)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 760)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 761)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 760)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 761)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 761)).add_operation (enumerator_30629.current (HERE).readProperty_lkey ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 762)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 762)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 762)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 762)).add_operation (enumerator_30629.current (HERE).readProperty_lkey ().readProperty_string ().getter_pathExtension (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 763)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 763)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 763)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 763)).add_operation (GGS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 763)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 764)).add_operation (var_contents_32706.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 765)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 765)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 765)).add_operation (GGS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 765)).add_operation (GGS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 765)).add_operation (enumerator_30629.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 766)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 766)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 766)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 766)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 766)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 766)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 766)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 755)) ;
    }
    enumerator_30629.gotoNextObject () ;
  }
  UpEnumerator_wrapperDirectoryMap enumerator_33849 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_33849.hasCurrentObject ()) {
    {
    routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (constinArgument_inFilewrapperName, enumerator_33849.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_33849.current (HERE).readProperty_mWrapperDirectoryIndex (), enumerator_33849.current (HERE).readProperty_mRegularFileMap (), enumerator_33849.current (HERE).readProperty_mDirectoryMap (), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 772)) ;
    }
    enumerator_33849.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 782)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 782)).add_operation (GGS_string ("static const RegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 782)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 784)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 783)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 784)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 784)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 784)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 784)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 785)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 785)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 785)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 785)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 785)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 782)) ;
  UpEnumerator_wrapperFileMap enumerator_34523 (constinArgument_inFilewrapperRegularFileMap) ;
  while (enumerator_34523.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  & gWrapperFile_").add_operation (enumerator_34523.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 787)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 787)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 787)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 787)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 787)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 787)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 787)) ;
    enumerator_34523.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 789)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 789)) ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 792)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 792)).add_operation (GGS_string ("static const DirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 792)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 794)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 793)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 794)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 794)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 794)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 794)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 795)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 795)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 795)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 795)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 795)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 792)) ;
  UpEnumerator_wrapperDirectoryMap enumerator_35139 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_35139.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  & gWrapperDirectory_").add_operation (enumerator_35139.current (HERE).readProperty_mWrapperDirectoryIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 797)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 797)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 797)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 797)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 797)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 797)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 797)) ;
    enumerator_35139.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 799)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 799)) ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 802)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 802)).add_operation (GGS_string ("const DirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 802)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 803)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 803)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 803)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 804)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 803)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 804)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 804)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 805)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 805)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 805)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 805)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 806)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 806)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 806)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 806)).add_operation (GGS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 806)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 807)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 807)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 807)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 807)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 807)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 807)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 807)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 808)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 808)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 808)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 808)).add_operation (GGS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 808)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 809)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 809)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 809)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 809)), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 809)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 809)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 809)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 802)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivelyEnumerateDirectories????!!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (const GGS_string constinArgument_inAbsoluteSourcePath,
                                                                              const GGS_string constinArgument_inPathInWrapper,
                                                                              const GGS_wrapperExtensionMap constinArgument_inTextFileExtensionMap,
                                                                              const GGS_wrapperExtensionMap constinArgument_inBinaryFileExtensionMap,
                                                                              GGS_wrapperFileMap & outArgument_outWrapperFileMap,
                                                                              GGS_wrapperDirectoryMap & outArgument_outWrapperDirectoryMap,
                                                                              GGS_u_33__32_ & ioArgument_ioWrapperFileIndex,
                                                                              GGS_u_33__32_ & ioArgument_ioWrapperDirectoryIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outWrapperFileMap.drop () ; // Release 'out' argument
  outArgument_outWrapperDirectoryMap.drop () ; // Release 'out' argument
  GGS_u_33__32_ var_currentDirectoryIndex_36879 = ioArgument_ioWrapperDirectoryIndex ;
  ioArgument_ioWrapperDirectoryIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 824)) ;
  GGS__5B_string_5D_ var_files_37005 = constinArgument_inAbsoluteSourcePath.getter_regularFiles (GGS_bool (false) COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 826)) ;
  outArgument_outWrapperFileMap = GGS_wrapperFileMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_37096 (var_files_37005) ;
  while (enumerator_37096.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inTextFileExtensionMap.getter_contains (enumerator_37096.current (HERE).getter_pathExtension (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 829)) COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 829)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_absoluteFilePath_37189 = constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 830)).add_operation (enumerator_37096.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 830)) ;
        {
        outArgument_outWrapperFileMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_37096.current (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 832)), inCompiler COMMA_HERE), var_absoluteFilePath_37189, GGS_bool (true), var_currentDirectoryIndex_36879, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 831)) ;
        }
        ioArgument_ioWrapperFileIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 838)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = constinArgument_inBinaryFileExtensionMap.getter_contains (enumerator_37096.current (HERE).getter_pathExtension (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 839)) COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 839)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string var_absoluteFilePath_37560 = constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 840)).add_operation (enumerator_37096.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 840)) ;
          {
          outArgument_outWrapperFileMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_37096.current (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 842)), inCompiler COMMA_HERE), var_absoluteFilePath_37560, GGS_bool (false), var_currentDirectoryIndex_36879, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 841)) ;
          }
          ioArgument_ioWrapperFileIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 848)) ;
        }
      }
    }
    enumerator_37096.gotoNextObject () ;
  }
  GGS__5B_string_5D_ var_directories_37912 = constinArgument_inAbsoluteSourcePath.getter_directories (GGS_bool (false) COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 852)) ;
  outArgument_outWrapperDirectoryMap = GGS_wrapperDirectoryMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_38013 (var_directories_37912) ;
  while (enumerator_38013.hasCurrentObject ()) {
    GGS_u_33__32_ var_theDirectoryIndex_38041 = ioArgument_ioWrapperDirectoryIndex ;
    GGS_wrapperFileMap var_internalWrapperFileMap_38275 ;
    GGS_wrapperDirectoryMap var_internalWrapperDirectoryMap_38310 ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 857)).add_operation (enumerator_38013.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 857)), constinArgument_inPathInWrapper.add_operation (enumerator_38013.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 858)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 858)), constinArgument_inTextFileExtensionMap, constinArgument_inBinaryFileExtensionMap, var_internalWrapperFileMap_38275, var_internalWrapperDirectoryMap_38310, ioArgument_ioWrapperFileIndex, ioArgument_ioWrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 856)) ;
    }
    {
    outArgument_outWrapperDirectoryMap.setter_insertKey (enumerator_38013.current (HERE).getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 867)), var_internalWrapperFileMap_38275, var_internalWrapperDirectoryMap_38310, var_theDirectoryIndex_38041, inCompiler COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 866)) ;
    }
    enumerator_38013.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivlyEnumerateRegularFile??&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (const GGS_wrapperFileMap constinArgument_inFilewrapperFileMap,
                                                                     const GGS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                                     GGS__5B_string_5D_ & ioArgument_ioRegularFileIndexStringList,
                                                                     GGS__5B_string_5D_ & ioArgument_ioDirectoryIndexStringList,
                                                                     GGS__5B_string_5D_ & ioArgument_ioRegularTextContentIndexStringList,
                                                                     GGS__5B_string_5D_ & ioArgument_ioRegularBinaryContentIndexStringList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDirectoryIndexStringList.plusPlusAssignOperation (ioArgument_ioDirectoryIndexStringList.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 883)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 883))  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 883)) ;
  UpEnumerator_wrapperFileMap enumerator_39316 (constinArgument_inFilewrapperFileMap) ;
  while (enumerator_39316.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.plusPlusAssignOperation (ioArgument_ioRegularFileIndexStringList.getter_count (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 885)).getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 885))  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 885)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_39316.current (HERE).readProperty_mIsTextFile ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        ioArgument_ioRegularTextContentIndexStringList.plusPlusAssignOperation (enumerator_39316.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 887))  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 887)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.plusPlusAssignOperation (enumerator_39316.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("declaration-type-filewrapper.galgas4", 889))  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 889)) ;
    }
    enumerator_39316.gotoNextObject () ;
  }
  UpEnumerator_wrapperDirectoryMap enumerator_39688 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_39688.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (enumerator_39688.current (HERE).readProperty_mRegularFileMap (), enumerator_39688.current (HERE).readProperty_mDirectoryMap (), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("declaration-type-filewrapper.galgas4", 893)) ;
    }
    enumerator_39688.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@sortedArrayTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_sortedArrayTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_sortedArrayTypeDeclarationAST temp_0 = this ;
  result = GGS_string ("sorted array [@").add_operation (temp_0.readProperty_sortedArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 70)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 70)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedArrayTypeDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedArrayTypeDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                         GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                         GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                         GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                         GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                         GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedArrayTypeDeclarationAST temp_0 = this ;
  const GGS_sortedArrayTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_key_3355 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_sortedArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 83)), temp_1.readProperty_sortedArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_sortedArrayTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3355, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 84)) ;
  }
  const GGS_sortedArrayTypeDeclarationAST temp_3 = this ;
  const GGS_sortedArrayTypeDeclarationAST temp_4 = this ;
  GGS_lstring var_elementKey_3502 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_elementTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 85)), temp_4.readProperty_elementTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_sortedArrayTypeDeclarationAST temp_5 = this ;
  const GGS_sortedArrayTypeDeclarationAST temp_6 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_5.readProperty_elementTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 86)), temp_6.readProperty_elementTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 86)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3355, var_elementKey_3502 COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 87)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedArrayTypeDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedArrayTypeDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                                   const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                                   const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                   const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                   const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_uintType_4479 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("u32"), var_uintType_4479, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 101)) ;
  }
  GGS_unifiedTypeMapEntry var_elementType_4564 ;
  {
  const GGS_sortedArrayTypeDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_elementTypeName (), var_elementType_4564, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 103)) ;
  }
  GGS_getterMap var_getterMap_4654 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_4654, inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 105)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4654, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 106)) ;
  }
  {
  const GGS_sortedArrayTypeDeclarationAST temp_1 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4654, ioArgument_ioTypeMap, GGS_string ("first"), temp_1.readProperty_elementTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 113)) ;
  }
  {
  const GGS_sortedArrayTypeDeclarationAST temp_2 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4654, ioArgument_ioTypeMap, GGS_string ("last"), temp_2.readProperty_elementTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 120)) ;
  }
  {
  const GGS_sortedArrayTypeDeclarationAST temp_3 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4654, ioArgument_ioTypeMap, GGS_string ("removingFirst"), GGS_string::makeEmptyString (), GGS_string ("u32"), GGS_string ("inIndex"), temp_3.readProperty_sortedArrayTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 127)) ;
  }
  {
  const GGS_sortedArrayTypeDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_4654, ioArgument_ioTypeMap, GGS_string ("sublist"), GGS_string ("from"), GGS_string ("u32"), GGS_string ("inStartIndex"), GGS_string ("count"), GGS_string ("u32"), GGS_string ("inCount"), temp_4.readProperty_sortedArrayTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 135)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_5910 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_6006 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_5 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 151)) ;
  var_setterMap_6006.setter_insertKey (GGS_string ("removeAll").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 149)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 150)), temp_5, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 153)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 148)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_6 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 159)) ;
  temp_6.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 159)), var_elementType_4564, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 159)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 159)) ;
  var_setterMap_6006.setter_insertKey (GGS_string ("append").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 157)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 158)), temp_6, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 161)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 156)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_7 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 167)) ;
  temp_7.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 167)), var_elementType_4564, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 167)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 167)) ;
  var_setterMap_6006.setter_insertKey (GGS_string ("removeFirst").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 165)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 166)), temp_7, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 169)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 164)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_8 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 175)) ;
  temp_8.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 175)), var_elementType_4564, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 175)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 175)) ;
  var_setterMap_6006.setter_insertKey (GGS_string ("removeLast").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 173)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 174)), temp_8, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 177)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 172)) ;
  }
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_9 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 184)) ;
  temp_9.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 183)), var_elementType_4564, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 183)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 183)) ;
  temp_9.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("at").getter_nowhere (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 184)), var_uintType_4479, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 184)), GGS_string ("inIndex"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 184)) ;
  var_setterMap_6006.setter_insertKey (GGS_string ("remove").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 181)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 182)), temp_9, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 187)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 180)) ;
  }
  GGS_initializerMap var_initializerMap_7026 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_7083 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_sortedArrayTypeDeclarationAST temp_10 = this ;
  var_initializerMap_7026.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_7083, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 194)), temp_10.readProperty_sortedArrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_7083, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 193)) ;
  }
  GGS_readSubscriptMap var_readSubscriptMap_7293 = GGS_readSubscriptMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_functionSignatureElement_5D_ temp_11 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 199)) ;
  temp_11.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 199)), var_uintType_4479, GGS_string ("inIndex"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 199)) ;
  GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_7352 = temp_11 ;
  {
  var_readSubscriptMap_7293.setter_insertKey (extensionGetter_subcriptSignature (var_argumentTypeList_7352, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 201)).getter_nowhere (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 201)), var_argumentTypeList_7352, var_elementType_4564, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 200)) ;
  }
  {
  const GGS_sortedArrayTypeDeclarationAST temp_12 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_12.readProperty_sortedArrayTypeName (), GGS_bool (false), var_initializerMap_7026, var_getterMap_4654, var_setterMap_6006, var_instanceMethodMap_5910, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 206)) ;
  }
  GGS_typeFeatures var_features_8027 = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 222)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 222)) COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 222)) ;
  {
  const GGS_sortedArrayTypeDeclarationAST temp_13 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_13.readProperty_sortedArrayTypeName (), var_features_8027, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 223)) ;
  }
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptor_8360 = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE) ;
  var_enumerationDescriptor_8360.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_elementType_4564, GGS_string ("entry"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 232)) ;
  const GGS_sortedArrayTypeDeclarationAST temp_14 = this ;
  const GGS_sortedArrayTypeDeclarationAST temp_15 = this ;
  const GGS_sortedArrayTypeDeclarationAST temp_16 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8476 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_14.readProperty_sortedArrayTypeName (), temp_15.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 239)), GGS_typeKindEnum::class_func_valueType (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 240)), GGS_bool (true), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_7026, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_4654, var_setterMap_6006, var_instanceMethodMap_5910, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 251)), var_readSubscriptMap_7293, GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_8360, var_features_8027, GGS_bool (false), var_elementType_4564, GGS_string ("array-").add_operation (temp_16.readProperty_sortedArrayTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 258)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 258)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 259)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8476.readProperty_typeName (), var_typeDefinition_8476, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 261)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedArrayTypeDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedArrayTypeDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedArrayTypeDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedArrayTypeDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                  const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                  GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedArrayTypeDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_10385 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_sortedArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 279)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10385, var_nameForUsefulness_10385, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 280)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_sortedArrayTypeDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_10385  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 282)) ;
    }
  }
  const GGS_sortedArrayTypeDeclarationAST temp_3 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_10637 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 284)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10385, var_elementTypeNameForUsefulness_10637 COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 285)) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_sortedArrayTypeDeclarationAST temp_5 = this ;
    test_4 = temp_5.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_elementTypeNameForUsefulness_10637  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 287)) ;
    }
  }
  const GGS_sortedArrayTypeDeclarationAST temp_6 = this ;
  GGS_lstring var_initializerNameForUsefulness_10997 = function_initializerNameForUsefulEntitiesGraph (temp_6.readProperty_sortedArrayTypeName (), extensionGetter_initializerSignature (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 292)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 290)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_10997, var_initializerNameForUsefulness_10997, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 294)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_sortedArrayTypeDeclarationAST temp_8 = this ;
    test_7 = temp_8.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_10997  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 296)) ;
    }
  }
  const GGS_sortedArrayTypeDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_elementType_11395 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 299)) ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_elementType_11395, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 301)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 301)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_sortedArrayTypeDeclarationAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_elementTypeName ().readProperty_location (), GGS_string ("this type should be a struct"), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 302)) ;
    }
  }
  GGS__5B_sortedArraySortProperty_5D_ var_typedSortPropertyList_11701 = GGS__5B_sortedArraySortProperty_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_sortedArrayTypeDeclarationAST temp_13 = this ;
  UpEnumerator__5B_sortedArraySortDescriptorAST_5D_ enumerator_11754 (temp_13.readProperty_sortDescriptorList ()) ;
  while (enumerator_11754.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_propertyType_11893 ;
    GGS_AccessControl joker_11859 ; // Joker input parameter
    GGS_bool joker_11863 ; // Joker input parameter
    extensionGetter_definition (var_elementType_11395, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 307)).readProperty_propertyMap ().method_searchKey (enumerator_11754.current (HERE).readProperty_mSortedAttributeName (), joker_11859, joker_11863, var_propertyType_11893, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 307)) ;
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = extensionGetter_definition (var_propertyType_11893, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 308)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 308)) COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 308)).operator_not (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 308)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_11754.current (HERE).readProperty_mSortedAttributeName ().readProperty_location (), GGS_string ("this property should be comparable"), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 309)) ;
      }
    }
    var_typedSortPropertyList_11701.plusPlusAssignOperation (GGS_sortedArraySortProperty::init_21__21__21_ (enumerator_11754.current (HERE).readProperty_mAscending (), enumerator_11754.current (HERE).readProperty_mSortedAttributeName ().readProperty_string (), var_propertyType_11893, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 311)) ;
    enumerator_11754.gotoNextObject () ;
  }
  const GGS_sortedArrayTypeDeclarationAST temp_16 = this ;
  GGS_unifiedTypeMapEntry var_selfType_12201 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_16.readProperty_sortedArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 314)) ;
  const GGS_sortedArrayTypeDeclarationAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_sortedArrayTypeForGeneration::init_21_infoMessage_21__21__21_ (GGS_string ("sorted array type ").add_operation (temp_17.readProperty_sortedArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 316)), var_selfType_12201, var_elementType_11395, var_typedSortPropertyList_11701, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 315)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedArrayTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedArrayTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedArrayTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_13449 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 347)) ;
  const GGS_sortedArrayTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_1.readProperty_elementType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 348)) ;
  const GGS_sortedArrayTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_sortedArrayTypeGenerationTemplate::class_func_arrayTypeHeader_31_ (var_selfTypeDefinition_13449.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 351)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_13449.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 352)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 349)) ;
  const GGS_sortedArrayTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_13449.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 356)), var_selfTypeDefinition_13449.readProperty_isConcrete (), var_selfTypeDefinition_13449.readProperty_initializerMap (), var_selfTypeDefinition_13449.readProperty_classFunctionMap (), var_selfTypeDefinition_13449.readProperty_getterMap (), var_selfTypeDefinition_13449.readProperty_setterMap (), var_selfTypeDefinition_13449.readProperty_instanceMethodMap (), var_selfTypeDefinition_13449.readProperty_classMethodMap (), var_selfTypeDefinition_13449.readProperty_readSubscriptMap (), var_selfTypeDefinition_13449.readProperty_writeSubscriptMap (), var_selfTypeDefinition_13449.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_13449.readProperty_features (), var_selfTypeDefinition_13449.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_13449.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 354)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 354)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@sortedArrayTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedArrayTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedArrayTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_elementType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 378)) ;
  const GGS_sortedArrayTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 379)) ;
  const GGS_sortedArrayTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_14983 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 380)) ;
  const GGS_sortedArrayTypeForGeneration temp_3 = this ;
  const GGS_sortedArrayTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GGS_sortedArrayTypeGenerationTemplate::class_func_arrayTypeSpecificImplementation (var_selfTypeDefinition_14983.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 383)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_14983.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 384)), var_selfTypeDefinition_14983.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-sorted-array.galgas4", 385)) COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 385)), temp_4.readProperty_typedSortPropertyList (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-array.galgas4", 381)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@classDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_classDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_classDeclarationAST temp_0 = this ;
  result = GGS_string ("class @").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 119)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                               GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                               GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                               GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                               GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                               GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classDeclarationAST temp_0 = this ;
  const GGS_classDeclarationAST temp_1 = this ;
  GGS_lstring var_key_4904 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 132)), temp_1.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_classDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4904, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 133)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_classDeclarationAST temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      const GGS_classDeclarationAST temp_5 = this ;
      const GGS_classDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4904, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_5.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 138)), temp_6.readProperty_mSuperClassName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 136)) ;
      }
    }
  }
  const GGS_classDeclarationAST temp_7 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_5361 (temp_7.readProperty_mPropertyList ()) ;
  while (enumerator_5361.hasCurrentObject ()) {
    const GGS_classDeclarationAST temp_8 = this ;
    GGS_lstring var_propertyKey_5388 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_5361.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 143)), temp_8.readProperty_mSuperClassName ().readProperty_location (), inCompiler COMMA_HERE) ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = GGS_bool (ComparisonKind::equal, enumerator_5361.current (HERE).readProperty_typeName ().readProperty_string ().getter_lastCharacter (inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 144)).objectCompare (GGS_char (utf32 (63)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        {
        ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (var_propertyKey_5388 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 145)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      {
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4904, var_propertyKey_5388 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 147)) ;
      }
    }
    enumerator_5361.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                         const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                         const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_getterMap var_getterMap_6354 ;
  GGS_setterMap var_setterMap_6383 ;
  GGS_instanceMethodMap var_instanceMethodMap_6420 ;
  GGS__5B_typedProperty_5D_ var_inheritedTypedPropertyList_6463 ;
  GGS_propertyMap var_attributeMap_6511 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_superClassType_6586 ;
  GGS_bool var_generateHeaderInSeparateFile_6615 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_classDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_superClassType_6586 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas4", 171)) ;
      {
      routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6354, inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 172)) ;
      }
      var_setterMap_6383 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
      var_instanceMethodMap_6420 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
      var_inheritedTypedPropertyList_6463 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
      var_attributeMap_6511 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
      const GGS_classDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_6615 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_classDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperClassName (), var_superClassType_6586, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 179)) ;
    }
    const GGS_classDeclarationAST temp_4 = this ;
    GGS_unifiedTypeDefinition var_superTypeDefinition_7047 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_4.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 180)) ;
    var_inheritedTypedPropertyList_6463 = var_superTypeDefinition_7047.readProperty_allTypedPropertyList () ;
    var_attributeMap_6511 = var_superTypeDefinition_7047.readProperty_propertyMap () ;
    var_generateHeaderInSeparateFile_6615 = var_superTypeDefinition_7047.readProperty_generateHeaderInSeparateFile () ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_superTypeDefinition_7047.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("declaration-type-class.galgas4", 185)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 185)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_classDeclarationAST temp_6 = this ;
        const GGS_classDeclarationAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mSuperClassName ().readProperty_location (), GGS_string ("the @").add_operation (temp_7.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 186)).add_operation (GGS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 186)), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 186)) ;
      }
    }
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = var_superTypeDefinition_7047.readProperty_isFinal ().boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_classDeclarationAST temp_10 = this ;
        const GGS_classDeclarationAST temp_11 = this ;
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mSuperClassName ().readProperty_location (), GGS_string ("cannot inherit from the @").add_operation (temp_11.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 189)).add_operation (GGS_string (" final class"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 189)), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 189)) ;
      }
    }
    var_setterMap_6383 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_setterMap enumerator_7771 (var_superTypeDefinition_7047.readProperty_setterMap ()) ;
    while (enumerator_7771.hasCurrentObject ()) {
      {
      var_setterMap_6383.setter_insertKey (enumerator_7771.current (HERE).readProperty_lkey (), enumerator_7771.current (HERE).readProperty_mKind (), enumerator_7771.current (HERE).readProperty_mParameterList (), enumerator_7771.current (HERE).readProperty_mHasCompilerArgument (), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-class.galgas4", 199)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 194)) ;
      }
      enumerator_7771.gotoNextObject () ;
    }
    var_getterMap_6354 = GGS_getterMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_getterMap enumerator_8137 (var_superTypeDefinition_7047.readProperty_getterMap ()) ;
    while (enumerator_8137.hasCurrentObject ()) {
      {
      var_getterMap_6354.setter_insertKey (enumerator_8137.current (HERE).readProperty_lkey (), enumerator_8137.current (HERE).readProperty_mKind (), enumerator_8137.current (HERE).readProperty_mArgumentTypeList (), enumerator_8137.current (HERE).readProperty_mDeclarationLocation (), enumerator_8137.current (HERE).readProperty_mHasCompilerArgument (), enumerator_8137.current (HERE).readProperty_mReturnedType (), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-class.galgas4", 213)), enumerator_8137.current (HERE).readProperty_mGetterNameThatObsoletesInvokationName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 206)) ;
      }
      enumerator_8137.gotoNextObject () ;
    }
    var_instanceMethodMap_6420 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_instanceMethodMap enumerator_8613 (var_superTypeDefinition_7047.readProperty_instanceMethodMap ()) ;
    while (enumerator_8613.hasCurrentObject ()) {
      {
      var_instanceMethodMap_6420.setter_insertKey (enumerator_8613.current (HERE).readProperty_lkey (), enumerator_8613.current (HERE).readProperty_mKind (), enumerator_8613.current (HERE).readProperty_mParameterList (), enumerator_8613.current (HERE).readProperty_mDeclarationLocation (), enumerator_8613.current (HERE).readProperty_mHasCompilerArgument (), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-class.galgas4", 226)), enumerator_8613.current (HERE).readProperty_mErrorMessage (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 220)) ;
      }
      enumerator_8613.gotoNextObject () ;
    }
  }
  GGS_unifiedTypeMapEntry var_classType_9064 ;
  {
  const GGS_classDeclarationAST temp_13 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_13.readProperty_mClassTypeName (), var_classType_9064, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 232)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_synthetizedInitializerArgumentList_9169 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_typedProperty_5D_ enumerator_9230 (var_inheritedTypedPropertyList_6463) ;
  while (enumerator_9230.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = GGS_bool (ComparisonKind::equal, enumerator_9230.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas4", 236)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GGS_lstring temp_15 ;
        const GalgasBool test_16 = enumerator_9230.current (HERE).readProperty_hasSelector ().boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          temp_15 = enumerator_9230.current (HERE).readProperty_name () ;
        }else if (GalgasBool::boolFalse == test_16) {
          temp_15 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas4", 238)) ;
        }
        var_synthetizedInitializerArgumentList_9169.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (temp_15, enumerator_9230.current (HERE).readProperty_typeEntry (), enumerator_9230.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 237)) ;
      }
    }
    enumerator_9230.gotoNextObject () ;
  }
  const GGS_classDeclarationAST temp_17 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_9552 (temp_17.readProperty_mPropertyList ()) ;
  while (enumerator_9552.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_9622 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_9552.current (HERE).readProperty_typeName (), var_attributeTypeIndex_9622, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 245)) ;
    }
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = GGS_bool (ComparisonKind::equal, enumerator_9552.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas4", 246)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        GGS_lstring temp_19 ;
        const GalgasBool test_20 = enumerator_9552.current (HERE).readProperty_hasSelector ().boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          temp_19 = enumerator_9552.current (HERE).readProperty_name () ;
        }else if (GalgasBool::boolFalse == test_20) {
          temp_19 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas4", 248)) ;
        }
        var_synthetizedInitializerArgumentList_9169.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (temp_19, var_attributeTypeIndex_9622, enumerator_9552.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 247)) ;
      }
    }
    {
    var_attributeMap_6511.setter_insertKey (enumerator_9552.current (HERE).readProperty_name (), extensionGetter_accessControl (enumerator_9552.current (HERE).readProperty_accessControl (), var_classType_9064, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 255)), enumerator_9552.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas4", 256)), var_attributeTypeIndex_9622, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 253)) ;
    }
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = var_getterMap_6354.getter_contains (enumerator_9552.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 259)).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_9552.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("'").add_operation (enumerator_9552.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 261)).add_operation (GGS_string ("' is the name of a prefefined or a user defined func"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 261)), fixItArray22  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 260)) ;
      }
    }
    enumerator_9552.gotoNextObject () ;
  }
  GGS__5B_typedProperty_5D_ var_currentClassTypedPropertyList_10359 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_typedProperty_5D_ var_allTypedAttributeList_10420 = var_inheritedTypedPropertyList_6463 ;
  const GGS_classDeclarationAST temp_23 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_10496 (temp_23.readProperty_mPropertyList ()) ;
  while (enumerator_10496.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_10566 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_10496.current (HERE).readProperty_typeName (), var_attributeTypeIndex_10566, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 268)) ;
    }
    var_currentClassTypedPropertyList_10359.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_attributeTypeIndex_10566, enumerator_10496.current (HERE).readProperty_name (), enumerator_10496.current (HERE).readProperty_initialization (), enumerator_10496.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas4", 273)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 273)), enumerator_10496.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 269)) ;
    var_allTypedAttributeList_10420.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_attributeTypeIndex_10566, enumerator_10496.current (HERE).readProperty_name (), enumerator_10496.current (HERE).readProperty_initialization (), enumerator_10496.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas4", 279)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 279)), enumerator_10496.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 275)) ;
    enumerator_10496.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_11099 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_typeFeatures var_features_11142 = GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-class.galgas4", 284)) ;
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    const GGS_classDeclarationAST temp_25 = this ;
    test_24 = temp_25.readProperty_clonable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      var_features_11142.orAssignOperation(GGS_typeFeatures::class_func_clonable (SOURCE_FILE ("declaration-type-class.galgas4", 286)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 286)) ;
      GGS__5B_functionSignatureElement_5D_ var_cloneInitializerArgumentList_11265 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
      var_cloneInitializerArgumentList_11265.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string ("cloned").getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas4", 289)), var_classType_9064, GGS_string ("inObject"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 288)) ;
      {
      const GGS_classDeclarationAST temp_26 = this ;
      var_initializerMap_11099.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_cloneInitializerArgumentList_11265, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 294)), temp_26.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_cloneInitializerArgumentList_11265, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 293)) ;
      }
    }
  }
  {
  const GGS_classDeclarationAST temp_27 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_27.readProperty_mClassTypeName (), GGS_bool (true), var_initializerMap_11099, var_getterMap_6354, var_setterMap_6383, var_instanceMethodMap_6420, GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 299)) ;
  }
  GalgasBool test_28 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_28) {
    const GGS_classDeclarationAST temp_29 = this ;
    GGS_bigint temp_30 ;
    const GalgasBool test_31 = temp_29.readProperty_clonable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_31) {
      temp_30 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 315)) ;
    }else if (GalgasBool::boolFalse == test_31) {
      temp_30 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 315)) ;
    }
    test_28 = GGS_bool (ComparisonKind::equal, var_initializerMap_11099.getter_count (SOURCE_FILE ("declaration-type-class.galgas4", 315)).objectCompare (temp_30.getter_u_33__32_ (inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 315)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_28) {
      var_features_11142.orAssignOperation(GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-class.galgas4", 316)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 316)) ;
      {
      const GGS_classDeclarationAST temp_32 = this ;
      var_initializerMap_11099.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_synthetizedInitializerArgumentList_9169, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 318)), temp_32.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_synthetizedInitializerArgumentList_9169, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 317)) ;
      }
    }
  }
  {
  const GGS_classDeclarationAST temp_33 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_33.readProperty_mClassTypeName (), var_features_11142, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 322)) ;
  }
  const GGS_classDeclarationAST temp_34 = this ;
  const GGS_classDeclarationAST temp_35 = this ;
  const GGS_classDeclarationAST temp_36 = this ;
  const GGS_classDeclarationAST temp_37 = this ;
  const GGS_classDeclarationAST temp_38 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_12632 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_34.readProperty_mClassTypeName (), temp_35.readProperty_isPredefined (), temp_36.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 333)), temp_37.readProperty_mIsFinal (), var_superClassType_6586, GGS_typeKindEnum::class_func_classType (SOURCE_FILE ("declaration-type-class.galgas4", 336)), GGS_bool (false), var_allTypedAttributeList_10420, var_attributeMap_6511, var_currentClassTypedPropertyList_10359, var_initializerMap_11099, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_6354, var_setterMap_6383, var_instanceMethodMap_6420, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas4", 347)), GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_11142, var_generateHeaderInSeparateFile_6615, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas4", 353)), GGS_string ("class-").add_operation (temp_38.readProperty_mClassTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-class.galgas4", 354)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 354)), GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("declaration-type-class.galgas4", 355)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_12632.readProperty_typeName (), var_typeDefinition_12632, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 357)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                        const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                        GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classDeclarationAST temp_0 = this ;
  GGS_lstring var_classTypeNameForUsefulness_14308 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 370)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_14308, var_classTypeNameForUsefulness_14308, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 371)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_classDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_classTypeNameForUsefulness_14308  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 373)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_classDeclarationAST temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_classDeclarationAST temp_5 = this ;
      GGS_lstring var_superClassNameForUsefulness_14640 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 376)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_14308, var_superClassNameForUsefulness_14640 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 377)) ;
      }
    }
  }
  const GGS_classDeclarationAST temp_6 = this ;
  GGS_unifiedTypeMapEntry var_selfType_15221 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_6.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 385)) ;
  const GGS_classDeclarationAST temp_7 = this ;
  GGS_unifiedTypeMapEntry temp_8 ;
  const GalgasBool test_9 = GGS_bool (ComparisonKind::equal, temp_7.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_9) {
    temp_8 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas4", 388)) ;
  }else if (GalgasBool::boolFalse == test_9) {
    const GGS_classDeclarationAST temp_10 = this ;
    temp_8 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 389)) ;
  }
  GGS_unifiedTypeMapEntry var_superClassEntry_15338 = temp_8 ;
  GGS__5B_typedProperty_5D_ var_allAttributeList_15703 ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_superClassEntry_15338.objectCompare (GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas4", 395)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      var_allAttributeList_15703 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_11) {
    var_allAttributeList_15703 = extensionGetter_definition (var_superClassEntry_15338, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 398)).readProperty_allTypedPropertyList () ;
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_classDeclarationAST temp_13 = this ;
      test_12 = temp_13.readProperty_mGenerateInSeparateFile ().boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_classDeclarationAST temp_14 = this ;
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mClassTypeName ().readProperty_location (), GGS_string ("a class that has a super class does not accept any feature"), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 400)) ;
      }
    }
  }
  GGS__5B_typedProperty_5D_ var_synthetizedInheritedInitializerArgumentList_16051 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_typedProperty_5D_ enumerator_16121 (var_allAttributeList_15703) ;
  while (enumerator_16121.hasCurrentObject ()) {
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = GGS_bool (ComparisonKind::equal, enumerator_16121.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas4", 405)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        var_synthetizedInheritedInitializerArgumentList_16051.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (enumerator_16121.current (HERE).readProperty_typeEntry (), enumerator_16121.current (HERE).readProperty_name (), enumerator_16121.current (HERE).readProperty_initialization (), enumerator_16121.current (HERE).readProperty_hasSetter (), enumerator_16121.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 406)) ;
      }
    }
    enumerator_16121.gotoNextObject () ;
  }
  GGS__5B_typedProperty_5D_ var_typedAttributeList_16495 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_16546 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_classDeclarationAST temp_17 = this ;
  UpEnumerator__5B_propertyInCollectionAST_5D_ enumerator_16590 (temp_17.readProperty_mPropertyList ()) ;
  while (enumerator_16590.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_16617 = function_typeNameForUsefulEntitiesGraph (enumerator_16590.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 418)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_14308, var_propertyTypeNameForUsefulness_16617 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 419)) ;
    }
    GGS_unifiedTypeMapEntry var_t_16820 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_16590.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 420)) ;
    var_typedAttributeList_16495.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_t_16820, enumerator_16590.current (HERE).readProperty_name (), enumerator_16590.current (HERE).readProperty_initialization (), enumerator_16590.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas4", 425)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 425)), enumerator_16590.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 421)) ;
    var_allAttributeList_15703.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (var_t_16820, enumerator_16590.current (HERE).readProperty_name (), enumerator_16590.current (HERE).readProperty_initialization (), enumerator_16590.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-class.galgas4", 431)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 431)), enumerator_16590.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 427)) ;
    {
    var_attributeMap_16546.setter_insertKey (enumerator_16590.current (HERE).readProperty_name (), var_t_16820, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 433)) ;
    }
    enumerator_16590.gotoNextObject () ;
  }
  GGS__5B_typedProperty_5D_ var_synthetizedInitialzerArgumentList_17412 = GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_typedProperty_5D_ enumerator_17492 (extensionGetter_definition (var_selfType_15221, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 437)).readProperty_allTypedPropertyList ()) ;
  while (enumerator_17492.hasCurrentObject ()) {
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = GGS_bool (ComparisonKind::equal, enumerator_17492.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas4", 438)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        var_synthetizedInitialzerArgumentList_17412.plusPlusAssignOperation (GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (enumerator_17492.current (HERE).readProperty_typeEntry (), enumerator_17492.current (HERE).readProperty_name (), enumerator_17492.current (HERE).readProperty_initialization (), enumerator_17492.current (HERE).readProperty_hasSetter (), enumerator_17492.current (HERE).readProperty_hasSelector (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 439)) ;
      }
    }
    enumerator_17492.gotoNextObject () ;
  }
  GGS_stringset var_unusedVariableCppNameSet_17992 ;
  GGS_string var_initializationCode_18029 ;
  const GGS_classDeclarationAST temp_19 = this ;
  extensionMethod_buildPropertyInitializationCode (temp_19.readProperty_mPropertyList (), var_classTypeNameForUsefulness_14308, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, ioArgument_ioUsefulEntitiesGraph, ioArgument_ioTypeMap, var_unusedVariableCppNameSet_17992, var_initializationCode_18029, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 447)) ;
  GGS_bool var_constructorNeedsCompilerVar_18072 = var_unusedVariableCppNameSet_17992.getter_contains (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 457)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 457)) ;
  const GGS_classDeclarationAST temp_20 = this ;
  const GGS_classDeclarationAST temp_21 = this ;
  const GGS_classDeclarationAST temp_22 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_classTypeForGeneration::init_21_infoMessage_21__21__21__21__21__21__21__21__21__21__21__21_ (GGS_string ("class ").add_operation (temp_20.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 459)), var_selfType_15221, temp_21.readProperty_mIsAbstract (), var_superClassEntry_15338, var_allAttributeList_15703, var_typedAttributeList_16495, extensionGetter_definition (var_selfType_15221, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 465)).readProperty_generateHeaderInSeparateFile (), var_constructorNeedsCompilerVar_18072, var_initializationCode_18029, var_synthetizedInitialzerArgumentList_17412, var_synthetizedInheritedInitializerArgumentList_16051, extensionGetter_definition (var_selfType_15221, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 470)).readProperty_initializerMap (), temp_22.readProperty_clonable (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 458)) ;
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    test_23 = extensionGetter_definition (var_selfType_15221, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 474)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-class.galgas4", 474)) COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 474)).boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      const GGS_classDeclarationAST temp_24 = this ;
      GGS_lstring var_initializerForUsefulness_18806 = function_initializerNameForUsefulEntitiesGraph (temp_24.readProperty_mClassTypeName (), extensionGetter_initializerSignature (var_synthetizedInitialzerArgumentList_17412, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 475)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerForUsefulness_18806, var_initializerForUsefulness_18806, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 479)) ;
      }
      GalgasBool test_25 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_25) {
        const GGS_classDeclarationAST temp_26 = this ;
        test_25 = temp_26.readProperty_isPredefined ().boolEnum () ;
        if (GalgasBool::boolTrue == test_25) {
          ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerForUsefulness_18806  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 481)) ;
          {
          ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerForUsefulness_18806, var_classTypeNameForUsefulness_14308 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 482)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_25) {
        GalgasBool test_27 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_27) {
          const GGS_classDeclarationAST temp_28 = this ;
          test_27 = temp_28.readProperty_mIsAbstract ().boolEnum () ;
          if (GalgasBool::boolTrue == test_27) {
            ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerForUsefulness_18806  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 484)) ;
          }
        }
        if (GalgasBool::boolFalse == test_27) {
          {
          ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerForUsefulness_18806, var_classTypeNameForUsefulness_14308 COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 486)) ;
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                GGS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_classTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 516)).operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 516)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_classTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 517)) ;
    }
  }
  const GGS_classTypeForGeneration temp_3 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_20907 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 519)) ;
  const GGS_classTypeForGeneration temp_4 = this ;
  const GGS_classTypeForGeneration temp_5 = this ;
  GGS_string temp_6 ;
  const GalgasBool test_7 = temp_5.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 523)).boolEnum () ;
  if (GalgasBool::boolTrue == test_7) {
    temp_6 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_7) {
    const GGS_classTypeForGeneration temp_8 = this ;
    temp_6 = extensionGetter_identifierRepresentation (temp_8.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 523)) ;
  }
  const GGS_classTypeForGeneration temp_9 = this ;
  const GGS_classTypeForGeneration temp_10 = this ;
  outArgument_outHeader = GGS_classGenerationTemplate::class_func_referenceClassTypeHeader_31_ (var_selfTypeDefinition_20907.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 522)), temp_6, temp_9.readProperty_mIsAbstract (), temp_10.readProperty_mCurrentTypedAttributeList (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 520)) ;
  const GGS_classTypeForGeneration temp_11 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_20907.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_11.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 529)), var_selfTypeDefinition_20907.readProperty_isConcrete (), var_selfTypeDefinition_20907.readProperty_initializerMap (), var_selfTypeDefinition_20907.readProperty_classFunctionMap (), var_selfTypeDefinition_20907.readProperty_getterMap (), var_selfTypeDefinition_20907.readProperty_setterMap (), var_selfTypeDefinition_20907.readProperty_instanceMethodMap (), var_selfTypeDefinition_20907.readProperty_classMethodMap (), var_selfTypeDefinition_20907.readProperty_readSubscriptMap (), var_selfTypeDefinition_20907.readProperty_writeSubscriptMap (), var_selfTypeDefinition_20907.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_20907.readProperty_features (), var_selfTypeDefinition_20907.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_20907.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 527)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 527)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classTypeForGeneration appendDeclaration2'
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                GGS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classTypeForGeneration temp_0 = this ;
  UpEnumerator__5B_typedProperty_5D_ enumerator_22322 (temp_0.readProperty_mCurrentTypedAttributeList ()) ;
  while (enumerator_22322.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_22322.current (HERE).readProperty_typeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 552)) ;
    enumerator_22322.gotoNextObject () ;
  }
  const GGS_classTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_22430 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 554)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_classTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_generateHeaderInSeparateFile ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_classTypeForGeneration temp_4 = this ;
      const GGS_classTypeForGeneration temp_5 = this ;
      GGS_string temp_6 ;
      const GalgasBool test_7 = temp_5.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 559)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        temp_6 = GGS_string::makeEmptyString () ;
      }else if (GalgasBool::boolFalse == test_7) {
        const GGS_classTypeForGeneration temp_8 = this ;
        temp_6 = extensionGetter_identifierRepresentation (temp_8.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 559)) ;
      }
      const GGS_classTypeForGeneration temp_9 = this ;
      const GGS_classTypeForGeneration temp_10 = this ;
      const GGS_classTypeForGeneration temp_11 = this ;
      const GGS_classTypeForGeneration temp_12 = this ;
      const GGS_classTypeForGeneration temp_13 = this ;
      const GGS_classTypeForGeneration temp_14 = this ;
      GGS_string var_part_31__22550 = GGS_classGenerationTemplate::class_func_referenceClassTypeHeader_32_part_31_ (var_selfTypeDefinition_22430.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 558)), temp_6, temp_9.readProperty_mCurrentTypedAttributeList (), temp_10.readProperty_mAllTypedAttributeList (), temp_11.readProperty_mIsAbstract (), extensionGetter_definition (temp_12.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 563)).readProperty_getterMap (), extensionGetter_definition (temp_13.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 564)).readProperty_instanceMethodMap (), temp_14.readProperty_initializerMap (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 556)) ;
      const GGS_classTypeForGeneration temp_15 = this ;
      const GGS_classTypeForGeneration temp_16 = this ;
      GGS_string temp_17 ;
      const GalgasBool test_18 = temp_16.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 570)).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        temp_17 = GGS_string::makeEmptyString () ;
      }else if (GalgasBool::boolFalse == test_18) {
        const GGS_classTypeForGeneration temp_19 = this ;
        temp_17 = extensionGetter_identifierRepresentation (temp_19.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 570)) ;
      }
      const GGS_classTypeForGeneration temp_20 = this ;
      const GGS_classTypeForGeneration temp_21 = this ;
      const GGS_classTypeForGeneration temp_22 = this ;
      const GGS_classTypeForGeneration temp_23 = this ;
      GGS_string var_part_32__23097 = GGS_classGenerationTemplate::class_func_referenceClassTypeHeader_32_part_32_ (var_selfTypeDefinition_22430.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 569)), temp_17, temp_20.readProperty_mCurrentTypedAttributeList (), temp_21.readProperty_mAllTypedAttributeList (), temp_22.readProperty_mIsAbstract (), temp_23.readProperty_synthetizedInitializerArgumentList (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 567)) ;
      const GGS_classTypeForGeneration temp_24 = this ;
      GGS_string var_headerFileName_23552 = GGS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_24.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 576)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 576)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 576)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GGS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 578)), var_headerFileName_23552, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_part_31__22550, GGS_string ("\n\n"), var_part_32__23097, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 577)) ;
      }
      outArgument_outHeader = GGS_string ("#include \"").add_operation (var_headerFileName_23552, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 588)).add_operation (GGS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 588)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_classTypeForGeneration temp_25 = this ;
    const GGS_classTypeForGeneration temp_26 = this ;
    GGS_string temp_27 ;
    const GalgasBool test_28 = temp_26.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 593)).boolEnum () ;
    if (GalgasBool::boolTrue == test_28) {
      temp_27 = GGS_string::makeEmptyString () ;
    }else if (GalgasBool::boolFalse == test_28) {
      const GGS_classTypeForGeneration temp_29 = this ;
      temp_27 = extensionGetter_identifierRepresentation (temp_29.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 593)) ;
    }
    const GGS_classTypeForGeneration temp_30 = this ;
    const GGS_classTypeForGeneration temp_31 = this ;
    const GGS_classTypeForGeneration temp_32 = this ;
    const GGS_classTypeForGeneration temp_33 = this ;
    const GGS_classTypeForGeneration temp_34 = this ;
    const GGS_classTypeForGeneration temp_35 = this ;
    outArgument_outHeader = GGS_classGenerationTemplate::class_func_referenceClassTypeHeader_32_part_31_ (var_selfTypeDefinition_22430.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_25.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 592)), temp_27, temp_30.readProperty_mCurrentTypedAttributeList (), temp_31.readProperty_mAllTypedAttributeList (), temp_32.readProperty_mIsAbstract (), extensionGetter_definition (temp_33.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 597)).readProperty_getterMap (), extensionGetter_definition (temp_34.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 598)).readProperty_instanceMethodMap (), temp_35.readProperty_initializerMap (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 590)) ;
    const GGS_classTypeForGeneration temp_36 = this ;
    const GGS_classTypeForGeneration temp_37 = this ;
    GGS_string temp_38 ;
    const GalgasBool test_39 = temp_37.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 604)).boolEnum () ;
    if (GalgasBool::boolTrue == test_39) {
      temp_38 = GGS_string::makeEmptyString () ;
    }else if (GalgasBool::boolFalse == test_39) {
      const GGS_classTypeForGeneration temp_40 = this ;
      temp_38 = extensionGetter_identifierRepresentation (temp_40.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 604)) ;
    }
    const GGS_classTypeForGeneration temp_41 = this ;
    const GGS_classTypeForGeneration temp_42 = this ;
    const GGS_classTypeForGeneration temp_43 = this ;
    const GGS_classTypeForGeneration temp_44 = this ;
    outArgument_outHeader.plusAssignOperation(GGS_classGenerationTemplate::class_func_referenceClassTypeHeader_32_part_32_ (var_selfTypeDefinition_22430.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_36.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 603)), temp_38, temp_41.readProperty_mCurrentTypedAttributeList (), temp_42.readProperty_mAllTypedAttributeList (), temp_43.readProperty_mIsAbstract (), temp_44.readProperty_synthetizedInitializerArgumentList (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 601)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 601)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_string & outArgument_outImplementation,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 618)) ;
  const GGS_classTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_25491 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 619)) ;
  const GGS_classTypeForGeneration temp_2 = this ;
  const GGS_classTypeForGeneration temp_3 = this ;
  const GGS_classTypeForGeneration temp_4 = this ;
  GGS__5B_typedProperty_5D_ var_at_25709 = temp_2.readProperty_mAllTypedAttributeList ().getter_sublist (GGS_u_33__32_ (uint32_t (0U)), temp_3.readProperty_mAllTypedAttributeList ().getter_count (SOURCE_FILE ("declaration-type-class.galgas4", 625)).subtract_operation (temp_4.readProperty_mCurrentTypedAttributeList ().getter_count (SOURCE_FILE ("declaration-type-class.galgas4", 625)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 625)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 623)) ;
  const GGS_classTypeForGeneration temp_5 = this ;
  const GGS_classTypeForGeneration temp_6 = this ;
  GGS_string temp_7 ;
  const GalgasBool test_8 = temp_6.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas4", 630)).boolEnum () ;
  if (GalgasBool::boolTrue == test_8) {
    temp_7 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_8) {
    const GGS_classTypeForGeneration temp_9 = this ;
    temp_7 = extensionGetter_identifierRepresentation (temp_9.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 630)) ;
  }
  const GGS_classTypeForGeneration temp_10 = this ;
  const GGS_classTypeForGeneration temp_11 = this ;
  const GGS_classTypeForGeneration temp_12 = this ;
  const GGS_classTypeForGeneration temp_13 = this ;
  const GGS_classTypeForGeneration temp_14 = this ;
  const GGS_classTypeForGeneration temp_15 = this ;
  const GGS_classTypeForGeneration temp_16 = this ;
  const GGS_classTypeForGeneration temp_17 = this ;
  outArgument_outImplementation = GGS_classGenerationTemplate::class_func_referenceClassTypeSpecificImplementation (var_selfTypeDefinition_25491.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 629)), temp_7, temp_10.readProperty_mCurrentTypedAttributeList (), temp_11.readProperty_mAllTypedAttributeList (), var_at_25709, temp_12.readProperty_mIsAbstract (), temp_13.readProperty_initializerNeedsCompilerVariable (), temp_14.readProperty_propertyInitializationCode (), var_selfTypeDefinition_25491.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-class.galgas4", 637)) COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 637)), temp_15.readProperty_synthetizedInitializerArgumentList (), temp_16.readProperty_inheritedSynthetizedInitializerArgumentList (), var_selfTypeDefinition_25491.readProperty_initializerMap (), temp_17.readProperty_clonable (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 627)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_generateClassGetterDeclaration (const GGS_lstring & constinArgument_inGetterName,
                                                    const GGS__5B_functionSignatureElement_5D_ & constinArgument_inArgumentTypeList,
                                                    const GGS_bool & constinArgument_inHasCompilerArgument,
                                                    const GGS_unifiedTypeMapEntry & constinArgument_inReturnedType,
                                                    const GGS_methodQualifier & constinArgument_inQualifier,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  GGS_bool var_generateMethodDeclaration_27250 = GGS_bool (true) ;
  GGS_string var_suffix_27289 = GGS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GGS_methodQualifier::Enumeration::invalid:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualAbstract:
    {
      var_suffix_27289 = GGS_string (" = 0") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtual:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isBasic:
  case GGS_methodQualifier::Enumeration::enum_isBasicFinal:
    {
      var_generateMethodDeclaration_27250 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isInherited:
    {
      var_generateMethodDeclaration_27250 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverriding:
    {
      var_suffix_27289 = GGS_string (" override") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverridingAbstract:
    {
      var_suffix_27289 = GGS_string (" override = 0") ;
    }
    break ;
  }
  result = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_27250.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result = GGS_string ("//--- Extension func ").add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 675)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 675)) ;
      result.plusAssignOperation(GGS_string ("  public: virtual class GGS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inReturnedType, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 676)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 676)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 676)) ;
      result.plusAssignOperation(GGS_string (" getter_").add_operation (constinArgument_inGetterName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-class.galgas4", 677)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 677)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 677)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 677)) ;
      GGS_bool var_first_27937 = GGS_bool (true) ;
      UpEnumerator__5B_functionSignatureElement_5D_ enumerator_27976 (constinArgument_inArgumentTypeList) ;
      while (enumerator_27976.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_first_27937.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_first_27937 = GGS_bool (false) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 684)) ;
        }
        result.plusAssignOperation(GGS_string ("const class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_27976.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 686)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 686)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 686)) ;
        result.plusAssignOperation(GGS_string (" ").add_operation (enumerator_27976.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 687)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 687)) ;
        enumerator_27976.gotoNextObject () ;
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_first_27937.operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 690)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 691)) ;
            }
          }
          result.plusAssignOperation(GGS_string ("Compiler *"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 693)) ;
          var_first_27937 = GGS_bool (false) ;
        }
      }
      GGS_string temp_4 ;
      const GalgasBool test_5 = var_first_27937.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        temp_4 = GGS_string ("LOCATION_ARGS") ;
      }else if (GalgasBool::boolFalse == test_5) {
        temp_4 = GGS_string (" COMMA_LOCATION_ARGS") ;
      }
      result.plusAssignOperation(temp_4.add_operation (GGS_string (") const"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 696)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 696)) ;
      result.plusAssignOperation(var_suffix_27289.add_operation (GGS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 697)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 697)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassInstanceMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_generateClassInstanceMethodDeclaration (const GGS_lstring & constinArgument_inMethodName,
                                                            const GGS__5B_formalParameterSignatureElement_5D_ & constinArgument_inArgumentTypeList,
                                                            const GGS_bool & constinArgument_inHasCompilerArgument,
                                                            const GGS_methodQualifier & constinArgument_inQualifier,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  GGS_bool var_generateMethodDeclaration_29007 = GGS_bool (true) ;
  GGS_string var_suffix_29046 = GGS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GGS_methodQualifier::Enumeration::invalid:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualAbstract:
    {
      var_suffix_29046 = GGS_string (" = 0") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtual:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isBasic:
  case GGS_methodQualifier::Enumeration::enum_isBasicFinal:
    {
      var_generateMethodDeclaration_29007 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isInherited:
    {
      var_generateMethodDeclaration_29007 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverriding:
    {
      var_suffix_29046 = GGS_string (" override") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverridingAbstract:
    {
      var_suffix_29046 = GGS_string (" override = 0") ;
    }
    break ;
  }
  result = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_29007.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result.plusAssignOperation(GGS_string ("//--- Extension proc ").add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 726)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 726)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 726)) ;
      result.plusAssignOperation(GGS_string ("  public: virtual void method_").add_operation (constinArgument_inMethodName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-class.galgas4", 727)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 727)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 727)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 727)) ;
      GGS_bool var_first_29630 = GGS_bool (true) ;
      UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_29669 (constinArgument_inArgumentTypeList) ;
      while (enumerator_29669.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_first_29630.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_first_29630 = GGS_bool (false) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 734)) ;
        }
        switch (enumerator_29669.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          {
            result.plusAssignOperation(GGS_string ("const class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_29669.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 738)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 738)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 738)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
          {
            result.plusAssignOperation(GGS_string ("class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_29669.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 740)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 740)).add_operation (GGS_string (" &"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 740)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 740)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          {
            result.plusAssignOperation(GGS_string ("class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_29669.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 742)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 742)).add_operation (GGS_string (" &"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 742)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 742)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            result.plusAssignOperation(GGS_string ("class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_29669.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 744)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 744)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 744)) ;
          }
          break ;
        }
        result.plusAssignOperation(GGS_string (" arg_").add_operation (enumerator_29669.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 746)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 746)) ;
        enumerator_29669.gotoNextObject () ;
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_first_29630.operator_not (SOURCE_FILE ("declaration-type-class.galgas4", 749)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 750)) ;
            }
          }
          result.plusAssignOperation(GGS_string ("Compiler *"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 752)) ;
          var_first_29630 = GGS_bool (false) ;
        }
      }
      GGS_string temp_4 ;
      const GalgasBool test_5 = var_first_29630.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        temp_4 = GGS_string ("LOCATION_ARGS") ;
      }else if (GalgasBool::boolFalse == test_5) {
        temp_4 = GGS_string (" COMMA_LOCATION_ARGS") ;
      }
      result.plusAssignOperation(temp_4.add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 755)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 755)) ;
      result.plusAssignOperation(var_suffix_29046.add_operation (GGS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 756)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas4", 756)) ;
    }
  }
//---
  return result ;
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
                                                                    GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externTypeDeclarationAST temp_0 = this ;
  const GGS_externTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_key_9579 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 244)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_externTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_9579, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 245)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@externTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_externTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_externTypeDeclarationAST temp_0 = this ;
  result = GGS_string ("extern @").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 251)) ;
//---
  return result ;
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
  GGS_getterMap var_getterMap_10627 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_10627, inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 265)) ;
  }
  GGS_setterMap var_setterMap_10709 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_10752 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_10821 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  const GGS_externTypeDeclarationAST temp_0 = this ;
  UpEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ enumerator_10870 (temp_0.readProperty_externTypeInitializerList ()) ;
  while (enumerator_10870.hasCurrentObject ()) {
    GGS__5B_functionSignatureElement_5D_ var_arguments_11030 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_typeNameFormalParameterName_5D_ enumerator_11069 (enumerator_10870.current (HERE)) ;
    while (enumerator_11069.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentTypeEntry_11156 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11069.current (HERE).readProperty_mFormalParameterTypeName (), var_argumentTypeEntry_11156, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 276)) ;
      }
      var_arguments_11030.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_11069.current (HERE).readProperty_mFormalSelector (), var_argumentTypeEntry_11156, enumerator_11069.current (HERE).readProperty_mFormalParameterName ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 277)) ;
      enumerator_11069.gotoNextObject () ;
    }
    const GGS_externTypeDeclarationAST temp_1 = this ;
    GGS_lstring var_initializerName_11320 = GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (enumerator_10870.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 280)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    var_initializerMap_10821.setter_insertKey (var_initializerName_11320, var_arguments_11030, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 281)) ;
    }
    enumerator_10870.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_2 = this ;
  UpEnumerator__5B_externTypeGetter_5D_ enumerator_11514 (temp_2.readProperty_mExternTypeGetterList ()) ;
  while (enumerator_11514.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_returnedTypeEntry_11598 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11514.current (HERE).readProperty_mResultTypeName (), var_returnedTypeEntry_11598, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 285)) ;
    }
    GGS__5B_functionSignatureElement_5D_ var_arguments_11665 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_typeNameFormalParameterName_5D_ enumerator_11712 (enumerator_11514.current (HERE).readProperty_mParameterList ()) ;
    while (enumerator_11712.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentTypeEntry_11802 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11712.current (HERE).readProperty_mFormalParameterTypeName (), var_argumentTypeEntry_11802, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 289)) ;
      }
      var_arguments_11665.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_11712.current (HERE).readProperty_mFormalSelector (), var_argumentTypeEntry_11802, enumerator_11712.current (HERE).readProperty_mFormalParameterName ().readProperty_string (), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 290)) ;
      enumerator_11712.gotoNextObject () ;
    }
    {
    var_getterMap_10627.setter_insertKey (enumerator_11514.current (HERE).readProperty_mGetterName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas4", 295)), var_arguments_11665, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 297)), GGS_bool (true), var_returnedTypeEntry_11598, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas4", 300)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 293)) ;
    }
    enumerator_11514.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_3 = this ;
  UpEnumerator__5B_externTypeSetter_5D_ enumerator_12329 (temp_3.readProperty_mExternTypeSetterList ()) ;
  while (enumerator_12329.hasCurrentObject ()) {
    GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_12399 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalParameterAST_5D_ enumerator_12453 (enumerator_12329.current (HERE).readProperty_mFormalParameterList ()) ;
    while (enumerator_12453.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_parameterTypeIndex_12590 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12453.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_12590, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 308)) ;
      }
      var_routineSignature_12399.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_12453.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_12590, enumerator_12453.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_12453.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 312)) ;
      enumerator_12453.gotoNextObject () ;
    }
    {
    var_setterMap_10709.setter_insertKey (enumerator_12329.current (HERE).readProperty_mSetterName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas4", 317)), var_routineSignature_12399, GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas4", 320)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 315)) ;
    }
    enumerator_12329.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_4 = this ;
  UpEnumerator__5B_externTypeMethod_5D_ enumerator_13090 (temp_4.readProperty_mExternTypeMethodList ()) ;
  while (enumerator_13090.hasCurrentObject ()) {
    GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_13125 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalParameterAST_5D_ enumerator_13213 (enumerator_13090.current (HERE).readProperty_mFormalParameterList ()) ;
    while (enumerator_13213.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_parameterTypeIndex_13329 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_13213.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_13329, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 328)) ;
      }
      var_routineSignature_13125.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_13213.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_13329, enumerator_13213.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_13213.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 332)) ;
      enumerator_13213.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_10752.setter_insertKey (enumerator_13090.current (HERE).readProperty_mMethodName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas4", 337)), var_routineSignature_13125, enumerator_13090.current (HERE).readProperty_mDeclarationLocation (), GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas4", 341)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 335)) ;
    }
    enumerator_13090.gotoNextObject () ;
  }
  GGS_typeFeatures var_features_13843 = GGS_typeFeatures::init (inCompiler COMMA_HERE) ;
  {
  const GGS_externTypeDeclarationAST temp_5 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_5.readProperty_mExternTypeName (), var_features_13843, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 346)) ;
  }
  const GGS_externTypeDeclarationAST temp_6 = this ;
  const GGS_externTypeDeclarationAST temp_7 = this ;
  const GGS_externTypeDeclarationAST temp_8 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_14098 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_6.readProperty_mExternTypeName (), temp_7.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas4", 359)), GGS_typeKindEnum::class_func_valueType (SOURCE_FILE ("declaration-type-extern.galgas4", 360)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_10821, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_10627, var_setterMap_10709, var_instanceMethodMap_10752, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas4", 371)), GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_13843, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas4", 377)), GGS_string ("externtype-").add_operation (temp_8.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-extern.galgas4", 378)), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 378)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-extern.galgas4", 379)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14098.readProperty_typeName (), var_typeDefinition_14098, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 381)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externTypeDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                             const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                             GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externTypeDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_15871 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 402)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15871, var_nameForUsefulness_15871, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 403)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_externTypeDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_15871  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 405)) ;
    }
  }
  const GGS_externTypeDeclarationAST temp_3 = this ;
  UpEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ enumerator_16149 (temp_3.readProperty_externTypeInitializerList ()) ;
  while (enumerator_16149.hasCurrentObject ()) {
    const GGS_externTypeDeclarationAST temp_4 = this ;
    GGS_lstring var_initializerNameForUsefulness_16186 = function_initializerNameForUsefulEntitiesGraph (temp_4.readProperty_mExternTypeName (), extensionGetter_initializerSignature (enumerator_16149.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 411)), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 409)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_16186, var_initializerNameForUsefulness_16186, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 413)) ;
    }
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_16186, var_nameForUsefulness_15871 COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 414)) ;
    }
    enumerator_16149.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_5 = this ;
  const GGS_externTypeDeclarationAST temp_6 = this ;
  const GGS_externTypeDeclarationAST temp_7 = this ;
  const GGS_externTypeDeclarationAST temp_8 = this ;
  const GGS_externTypeDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_externTypeDeclarationForGeneration::init_21_infoMessage_21__21__21__21_ (GGS_string ("extern type ").add_operation (temp_5.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 418)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_6.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 419)), temp_7.readProperty_mExternTypeName ().readProperty_string (), temp_8.readProperty_mCppPreDeclarationCode (), temp_9.readProperty_mCppClassCode (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 417)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externTypeDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                            GGS_string & outArgument_outHeader,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externTypeDeclarationForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_17490 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 441)) ;
  const GGS_externTypeDeclarationForGeneration temp_1 = this ;
  const GGS_externTypeDeclarationForGeneration temp_2 = this ;
  const GGS_externTypeDeclarationForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_typeGenerationTemplate::class_func_externTypeHeader_31_ (var_selfTypeDefinition_17490.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 444)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 442)) ;
  const GGS_externTypeDeclarationForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_17490.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 450)), var_selfTypeDefinition_17490.readProperty_isConcrete (), var_selfTypeDefinition_17490.readProperty_initializerMap (), var_selfTypeDefinition_17490.readProperty_classFunctionMap (), var_selfTypeDefinition_17490.readProperty_getterMap (), var_selfTypeDefinition_17490.readProperty_setterMap (), var_selfTypeDefinition_17490.readProperty_instanceMethodMap (), var_selfTypeDefinition_17490.readProperty_classMethodMap (), var_selfTypeDefinition_17490.readProperty_readSubscriptMap (), var_selfTypeDefinition_17490.readProperty_writeSubscriptMap (), var_selfTypeDefinition_17490.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_17490.readProperty_features (), var_selfTypeDefinition_17490.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_17490.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 448)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 448)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'gGenerateFewHeaderFiles'
//
//--------------------------------------------------------------------------------------------------

static GGS_bool onceFunction_gGenerateFewHeaderFiles (Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result ; // Returned variable
  result = GGS_bool (true) ;
//---
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_gGenerateFewHeaderFiles = false ;
static GGS_bool gOnceFunctionResult_gGenerateFewHeaderFiles ;

//--------------------------------------------------------------------------------------------------

GGS_bool function_gGenerateFewHeaderFiles (Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_gGenerateFewHeaderFiles) {
    gOnceFunctionResult_gGenerateFewHeaderFiles = onceFunction_gGenerateFewHeaderFiles (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_gGenerateFewHeaderFiles = true ;
  }
  return gOnceFunctionResult_gGenerateFewHeaderFiles ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_gGenerateFewHeaderFiles (void) {
  gOnceFunctionResult_gGenerateFewHeaderFiles.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_gGenerateFewHeaderFiles (nullptr,
                                                                   releaseOnceFunctionResult_gGenerateFewHeaderFiles) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'gLexicalTypeMap'
//
//--------------------------------------------------------------------------------------------------

static GGS_lexicalTypeMap onceFunction_gLexicalTypeMap (Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeMap result ; // Returned variable
  result = GGS_lexicalTypeMap::init (inCompiler COMMA_HERE) ;
  {
  result.setter_insertKey (GGS_string ("string").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 341)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 341)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 341)) ;
  }
  {
  result.setter_insertKey (GGS_string ("char").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 342)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 342)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 342)) ;
  }
  {
  result.setter_insertKey (GGS_string ("u32").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 343)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 343)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 343)) ;
  }
  {
  result.setter_insertKey (GGS_string ("u64").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 344)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 344)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 344)) ;
  }
  {
  result.setter_insertKey (GGS_string ("s32").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 345)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 345)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 345)) ;
  }
  {
  result.setter_insertKey (GGS_string ("s64").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 346)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 346)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 346)) ;
  }
  {
  result.setter_insertKey (GGS_string ("f64").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 347)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_double (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 347)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 347)) ;
  }
  {
  result.setter_insertKey (GGS_string ("bigint").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 348)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 348)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 348)) ;
  }
//---
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_gLexicalTypeMap = false ;
static GGS_lexicalTypeMap gOnceFunctionResult_gLexicalTypeMap ;

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap function_gLexicalTypeMap (Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_gLexicalTypeMap) {
    gOnceFunctionResult_gLexicalTypeMap = onceFunction_gLexicalTypeMap (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_gLexicalTypeMap = true ;
  }
  return gOnceFunctionResult_gLexicalTypeMap ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_gLexicalTypeMap (void) {
  gOnceFunctionResult_gLexicalTypeMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_gLexicalTypeMap (nullptr,
                                                           releaseOnceFunctionResult_gLexicalTypeMap) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalAttributeMap??&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalAttributeMap_3F__3F__26_ (const GGS_lexicalTypeMap constinArgument_inLexicalTypeMap,
                                                   const GGS__5B_lexicalAttributeAST_5D_ constinArgument_inLexicalAttributeList,
                                                   GGS_lexicalAttributeMap & ioArgument_ioLexicalAttributeMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_lexicalAttributeAST_5D_ enumerator_13633 (constinArgument_inLexicalAttributeList) ;
  while (enumerator_13633.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inLexicalTypeMap.getter_contains (enumerator_13633.current (HERE).readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 368)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_lexicalTypeEnum var_lexicalType_13817 ;
        constinArgument_inLexicalTypeMap.method_searchKey (enumerator_13633.current (HERE).readProperty_mTypeName (), var_lexicalType_13817, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 369)) ;
        {
        ioArgument_ioLexicalAttributeMap.setter_insertKey (enumerator_13633.current (HERE).readProperty_mName (), var_lexicalType_13817, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 370)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_m_13935 = GGS_string::makeEmptyString () ;
      var_m_13935.plusAssignOperation(GGS_string ("the @").add_operation (enumerator_13633.current (HERE).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 373)).add_operation (GGS_string (" type is not a valid lexical attribute type; are allowed:"), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 373)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 373)) ;
      UpEnumerator_lexicalTypeMap enumerator_14071 (constinArgument_inLexicalTypeMap) ;
      while (enumerator_14071.hasCurrentObject ()) {
        var_m_13935.plusAssignOperation(GGS_string (" @").add_operation (enumerator_14071.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 375)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 375)) ;
        enumerator_14071.gotoNextObject () ;
        if (enumerator_14071.hasCurrentObject ()) {
          var_m_13935.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 377)) ;
        }
      }
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_13633.current (HERE).readProperty_mTypeName ().readProperty_location (), var_m_13935, fixItArray1  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 379)) ;
    }
    enumerator_13633.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'groupSyntaxComponentsGalgas3??&'
//
//--------------------------------------------------------------------------------------------------

void routine_groupSyntaxComponentsGalgas_33__3F__3F__26_ (const GGS__5B_syntaxComponentAST_5D_ constinArgument_inAllSyntaxComponents,
                                                          const GGS_syntaxExtensions constinArgument_inSyntaxExtensions,
                                                          GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioDeclarationList,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_componentNameSet_1613 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_syntaxComponentAST_5D_ enumerator_1655 (constinArgument_inAllSyntaxComponents) ;
  while (enumerator_1655.hasCurrentObject ()) {
    var_componentNameSet_1613.plusPlusAssignOperation (enumerator_1655.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string ()  COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 33)) ;
    GGS__5B_nonterminalDeclarationAST_5D_ var_nonterminalDeclarationList_1751 = enumerator_1655.current (HERE).readProperty_mNonterminalDeclarationList () ;
    GGS__5B_syntaxRuleAST_5D_ var_ruleList_1826 = enumerator_1655.current (HERE).readProperty_mRuleList () ;
    UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ enumerator_1952 (extensionGetter_listForKey (constinArgument_inSyntaxExtensions, enumerator_1655.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 36))) ;
    while (enumerator_1952.hasCurrentObject ()) {
      var_nonterminalDeclarationList_1751.plusAssignOperation(enumerator_1952.current (HERE).readProperty_mNonterminalDeclarationList (), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 37)) ;
      var_ruleList_1826.plusAssignOperation(enumerator_1952.current (HERE).readProperty_mRuleList (), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 38)) ;
      enumerator_1952.gotoNextObject () ;
    }
    ioArgument_ioDeclarationList.plusPlusAssignOperation (GGS_galgas_33_SyntaxComponentAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), enumerator_1655.current (HERE).readProperty_mSyntaxComponentName (), enumerator_1655.current (HERE).readProperty_mImportedLexiqueFilePath (), var_nonterminalDeclarationList_1751, var_ruleList_1826, enumerator_1655.current (HERE).readProperty_mHasTranslateFeature (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 40)) ;
    enumerator_1655.gotoNextObject () ;
  }
  UpEnumerator__5B_string_3A__5B_galgas_33_SyntaxExtensionAST_5D__5D_ enumerator_2402 (constinArgument_inSyntaxExtensions.readProperty_dictionary ()) ;
  while (enumerator_2402.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = var_componentNameSet_1613.getter_contains (enumerator_2402.current_key (HERE) COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 51)).operator_not (SOURCE_FILE ("syntaxCompilation.galgas4", 51)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        UpEnumerator__5B_galgas_33_SyntaxExtensionAST_5D_ enumerator_2520 (enumerator_2402.current_value (HERE)) ;
        while (enumerator_2520.hasCurrentObject ()) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_2520.current (HERE).readProperty_mSyntaxComponentName ().readProperty_location (), GGS_string ("there is no '").add_operation (enumerator_2520.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 53)).add_operation (GGS_string ("' syntax component"), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 53)), fixItArray1  COMMA_SOURCE_FILE ("syntaxCompilation.galgas4", 53)) ;
          enumerator_2520.gotoNextObject () ;
        }
      }
    }
    enumerator_2402.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWithoutArgument&&?name?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                   GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                   const GGS_string constinArgument_inClassFunctionName,
                                                                                                   const GGS_string constinArgument_inReturnedTypeName,
                                                                                                   const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_1721 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1721, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 30)) ;
  }
  {
  GGS__5B_functionSignatureElement_5D_ temp_0 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 36)) ;
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 35)), inCompiler COMMA_HERE), temp_0, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_1721 COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 34)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWithArgument&&?name?argTypeName?argName?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                          GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                          const GGS_string constinArgument_inClassFunctionName,
                                                                                                                          const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                          const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                          const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                          const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_2471 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_2471, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 52)) ;
  }
  GGS_unifiedTypeMapEntry var_t_2558 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_2558, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 53)) ;
  }
  {
  GGS__5B_functionSignatureElement_5D_ temp_0 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 56)) ;
  temp_0.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 56)), var_t_2558, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 56)) ;
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 55)), inCompiler COMMA_HERE), temp_0, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_2471 COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 54)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith2Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                                                                         GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                         const GGS_string constinArgument_inClassFunctionName,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                         const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                         const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                                                                         Compiler * inCompiler
                                                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_3447 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3447, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 73)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_3472 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_3549 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_3549, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 76)) ;
  }
  var_argumentTypeList_3472.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 77)), var_t_3549, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 77)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_3549, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 78)) ;
  }
  var_argumentTypeList_3472.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 79)), var_t_3549, constinArgument_inArgument_32_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 79)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 81)), inCompiler COMMA_HERE), var_argumentTypeList_3472, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_3447 COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 80)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith3Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?argTypeName3?argName3?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                                                                                                           GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                                                           const GGS_string constinArgument_inClassFunctionName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_33_TypeName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_33_Name,
                                                                                                                                                                                                           const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                                                           const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_4734 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4734, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 101)) ;
  }
  GGS_unifiedTypeMapEntry var_t_4821 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4821, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 102)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_4858 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argumentTypeList_4858.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 104)), var_t_4821, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 104)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_4821, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 105)) ;
  }
  var_argumentTypeList_4858.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 106)), var_t_4821, constinArgument_inArgument_32_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 106)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_4821, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 107)) ;
  }
  var_argumentTypeList_4858.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas4", 108)), var_t_4821, constinArgument_inArgument_33_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 108)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (constinArgument_inClassFunctionName.getter_here (inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 110)), var_argumentTypeList_4858, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_4734 COMMA_SOURCE_FILE ("semanticsConstructors.galgas4", 109)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxSignatureOfInstructionList'
//
//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionForGeneration_5D_ function_syntaxSignatureOfInstructionList (const GGS_string & constinArgument_inPosfix,
                                                                                        const GGS__5B_semanticInstructionForGeneration_5D_ & constinArgument_inInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_semanticInstructionForGeneration_5D_ result ; // Returned variable
  result = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticInstructionForGeneration_5D_ enumerator_2041 (constinArgument_inInstructionList) ;
  while (enumerator_2041.hasCurrentObject ()) {
    callExtensionMethod_appendSyntaxSignature ((cPtr_semanticInstructionForGeneration *) enumerator_2041.current (HERE).ptr (), constinArgument_inPosfix, result, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 43)) ;
    enumerator_2041.gotoNextObject () ;
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'compareSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool function_compareSyntaxSignature (const GGS__5B_semanticInstructionForGeneration_5D_ & constinArgument_inReferenceSignature,
                                          const GGS__5B_semanticInstructionForGeneration_5D_ & constinArgument_inTestedSignature,
                                          const GGS_location & constinArgument_inErrorLocation,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result ; // Returned variable
  result = GGS_bool (true) ;
  UpEnumerator__5B_semanticInstructionForGeneration_5D_ enumerator_2903 (constinArgument_inReferenceSignature) ;
  UpEnumerator__5B_semanticInstructionForGeneration_5D_ enumerator_2933 (constinArgument_inTestedSignature) ;
  bool bool_0 = result.isValidAndTrue () ;
  if (enumerator_2903.hasCurrentObject () && enumerator_2933.hasCurrentObject () && bool_0) {
    while (enumerator_2903.hasCurrentObject () && enumerator_2933.hasCurrentObject () && bool_0) {
      result = callExtensionGetter_compareInstructionSyntaxSignature ((const cPtr_semanticInstructionForGeneration *) enumerator_2903.current (HERE).ptr (), enumerator_2933.current (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 70)) ;
      enumerator_2903.gotoNextObject () ;
      enumerator_2933.gotoNextObject () ;
      if (enumerator_2903.hasCurrentObject () && enumerator_2933.hasCurrentObject ()) {
        bool_0 = result.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = result.operator_and (GGS_bool (ComparisonKind::lowerThan, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 72)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 72)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 72)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_semanticInstructionForGeneration var_instruction_3148 = constinArgument_inTestedSignature.readSubscript__3F_ (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 73)), inCompiler COMMA_HERE) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_syntaxInstructionForGeneration var_si_3220 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3148.ptr ())) ;
        if (nullptr == var_si_3220.ptr ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_si_3220.readProperty_mInstructionLocation (), GGS_string ("syntax signature error, exceeding instruction; this branch has more syntax instructions than reference branch"), fixItArray3  COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 75)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 78)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = result.operator_and (GGS_bool (ComparisonKind::greaterThan, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 80)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 80)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 80)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("syntax signature error, missing instruction; this branch has less syntax instructions than reference branch"), fixItArray6  COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 81)) ;
        GGS_semanticInstructionForGeneration var_instruction_3756 = constinArgument_inReferenceSignature.readSubscript__3F_ (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 83)), inCompiler COMMA_HERE) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_syntaxInstructionForGeneration var_si_3828 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3756.ptr ())) ;
          if (nullptr == var_si_3828.ptr ()) {
            test_7 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_7) {
            GenericArray <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (var_si_3828.readProperty_mInstructionLocation (), GGS_string ("this is the syntax instruction in reference branch that corresponds to the first missing instruction"), fixItArray8  COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 85)) ;
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("syntaxSignature.galgas4", 88)) ;
        }
      }
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'performProjectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_performProjectCreation_3F_ (const GGS_string constinArgument_inProjectPath,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_projectName_2451 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas4", 44)) ;
  GGS_string var_s_31__2503 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_project (var_projectName_2451, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 45)) ;
  var_s_31__2503.method_writeToFile (constinArgument_inProjectPath.add_operation (GGS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 46)).add_operation (var_projectName_2451, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 46)).add_operation (GGS_string (".galgas4project"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 46)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 46)) ;
  GGS_string var_galgas_5F_sources_5F_DIR_2672 = constinArgument_inProjectPath.add_operation (GGS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 48)) ;
  var_galgas_5F_sources_5F_DIR_2672.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 49)) ;
  GGS_string var_s_32__2764 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_cocoa (var_projectName_2451, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 50)) ;
  var_s_32__2764.method_writeToFile (var_galgas_5F_sources_5F_DIR_2672.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 51)).add_operation (var_projectName_2451, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 51)).add_operation (GGS_string ("-cocoa.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 51)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 51)) ;
  GGS_string var_s_33__2905 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_grammar (var_projectName_2451, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 52)) ;
  var_s_33__2905.method_writeToFile (var_galgas_5F_sources_5F_DIR_2672.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 53)).add_operation (var_projectName_2451, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 53)).add_operation (GGS_string ("-grammar.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 53)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 53)) ;
  GGS_string var_s_34__3050 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_lexique (var_projectName_2451, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 54)) ;
  var_s_34__3050.method_writeToFile (var_galgas_5F_sources_5F_DIR_2672.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 55)).add_operation (var_projectName_2451, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 55)).add_operation (GGS_string ("-lexique.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 55)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 55)) ;
  GGS_string var_s_36__3195 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_program (var_projectName_2451, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 56)) ;
  var_s_36__3195.method_writeToFile (var_galgas_5F_sources_5F_DIR_2672.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 57)).add_operation (var_projectName_2451, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 57)).add_operation (GGS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 57)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 57)) ;
  GGS_string var_s_37__3339 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_semantics (var_projectName_2451, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 58)) ;
  var_s_37__3339.method_writeToFile (var_galgas_5F_sources_5F_DIR_2672.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 59)).add_operation (var_projectName_2451, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 59)).add_operation (GGS_string ("-semantics.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 59)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 59)) ;
  GGS_string var_s_38__3488 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_syntax (var_projectName_2451, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 60)) ;
  var_s_38__3488.method_writeToFile (var_galgas_5F_sources_5F_DIR_2672.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 61)).add_operation (var_projectName_2451, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 61)).add_operation (GGS_string ("-syntax.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 61)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 61)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_buildOptionValue::class_func_quiet (SOURCE_FILE ("projectCreation.galgas4", 63)).operator_not (SOURCE_FILE ("projectCreation.galgas4", 63)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_println_3F_ (GGS_string ("*** DONE ***"), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 64)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'projectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_projectCreation_3F_ (const GGS_string constinArgument_inProjectPath,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inProjectPath.getter_count (SOURCE_FILE ("projectCreation.galgas4", 71)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_buildOptionValue::class_func_quiet (SOURCE_FILE ("projectCreation.galgas4", 72)).operator_not (SOURCE_FILE ("projectCreation.galgas4", 72)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          routine_println_3F_ (GGS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 73)).add_operation (GGS_string (" option) ***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 73)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 73)) ;
          }
        }
      }
      GGS_string var_projectName_4147 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas4", 76)) ;
      GGS_bool var_ok_4207 = var_projectName_4147.getter_characterAtIndex (GGS_u_33__32_ (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 77)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas4", 77)) ;
      GGS_u_33__32_ var_idx_4266 = GGS_u_33__32_ (uint32_t (1U)) ;
      if (var_projectName_4147.getter_count (SOURCE_FILE ("projectCreation.galgas4", 79)).isValid ()) {
        uint32_t variant_4278 = var_projectName_4147.getter_count (SOURCE_FILE ("projectCreation.galgas4", 79)).uintValue () ;
        bool loop_4278 = true ;
        while (loop_4278) {
          loop_4278 = GGS_bool (ComparisonKind::lowerThan, var_idx_4266.objectCompare (var_projectName_4147.getter_count (SOURCE_FILE ("projectCreation.galgas4", 80)))).operator_and (var_ok_4207 COMMA_SOURCE_FILE ("projectCreation.galgas4", 80)).isValid () ;
          if (loop_4278) {
            loop_4278 = GGS_bool (ComparisonKind::lowerThan, var_idx_4266.objectCompare (var_projectName_4147.getter_count (SOURCE_FILE ("projectCreation.galgas4", 80)))).operator_and (var_ok_4207 COMMA_SOURCE_FILE ("projectCreation.galgas4", 80)).boolValue () ;
          }
          if (loop_4278 && (0 == variant_4278)) {
            loop_4278 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas4", 79)) ;
          }
          if (loop_4278) {
            variant_4278 -= 1 ;
            GGS_char var_c_4363 = var_projectName_4147.getter_characterAtIndex (var_idx_4266, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 81)) ;
            var_ok_4207 = var_c_4363.getter_isalnum (SOURCE_FILE ("projectCreation.galgas4", 82)).operator_or (GGS_bool (ComparisonKind::equal, var_c_4363.objectCompare (GGS_char (utf32 (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas4", 82)) ;
            var_idx_4266.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 83)) ;
          }
        }
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_ok_4207.operator_not (SOURCE_FILE ("projectCreation.galgas4", 85)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          routine_println_3F_ (GGS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName_4147, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 86)).add_operation (GGS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character."), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 87)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 86)) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_ok_4207.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_ok_4207 = constinArgument_inProjectPath.getter_directoryExists (SOURCE_FILE ("projectCreation.galgas4", 91)).operator_not (SOURCE_FILE ("projectCreation.galgas4", 91)) ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = var_ok_4207.operator_not (SOURCE_FILE ("projectCreation.galgas4", 92)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              {
              routine_println_3F_ (GGS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 93)).add_operation (GGS_string ("' directory already exists.***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 93)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 93)) ;
              }
            }
          }
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_ok_4207.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          {
          routine_performProjectCreation_3F_ (constinArgument_inProjectPath, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 97)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'gCompilerCppName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_gCompilerCppName (Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = GGS_string ("inCompiler") ;
//---
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_gCompilerCppName = false ;
static GGS_string gOnceFunctionResult_gCompilerCppName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_gCompilerCppName (Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_gCompilerCppName) {
    gOnceFunctionResult_gCompilerCppName = onceFunction_gCompilerCppName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_gCompilerCppName = true ;
  }
  return gOnceFunctionResult_gCompilerCppName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_gCompilerCppName (void) {
  gOnceFunctionResult_gCompilerCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_gCompilerCppName (nullptr,
                                                            releaseOnceFunctionResult_gCompilerCppName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'gSyntaxDirectedTranslationResultVarName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_gSyntaxDirectedTranslationResultVarName (Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = GGS_string ("ioSyntaxDirectedTranslationResult") ;
//---
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_gSyntaxDirectedTranslationResultVarName = false ;
static GGS_string gOnceFunctionResult_gSyntaxDirectedTranslationResultVarName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_gSyntaxDirectedTranslationResultVarName (Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_gSyntaxDirectedTranslationResultVarName) {
    gOnceFunctionResult_gSyntaxDirectedTranslationResultVarName = onceFunction_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_gSyntaxDirectedTranslationResultVarName = true ;
  }
  return gOnceFunctionResult_gSyntaxDirectedTranslationResultVarName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_gSyntaxDirectedTranslationResultVarName (void) {
  gOnceFunctionResult_gSyntaxDirectedTranslationResultVarName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_gSyntaxDirectedTranslationResultVarName (nullptr,
                                                                                   releaseOnceFunctionResult_gSyntaxDirectedTranslationResultVarName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@galgas3SyntaxComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_galgas_33_SyntaxComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  result = GGS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 256)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@predefinedTypeAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_predefinedTypeAST::getter_keyRepresentation (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_predefinedTypeAST temp_0 = this ;
  result = GGS_string ("predefined type @").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 262)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@externFunctionDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_externFunctionDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  result = GGS_string ("extern function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 268)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'addExtensions????&&??isClass&&&&?acceptSetters'
//
//--------------------------------------------------------------------------------------------------

void routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                                                    const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                                    const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                                    const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                                    GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    const GGS_lstring constinArgument_inTypeName,
                                                                                                    const GGS_bool constinArgument_inIsClass,
                                                                                                    GGS_initializerMap & ioArgument_ioInitializerMap,
                                                                                                    GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                    GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                    GGS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                                                                    const GGS_bool constinArgument_inAcceptSetters,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inExtensionGetterMapForBuildingContext.getter_contains (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 291)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_extensionGetterMapForType var_extensionGetterMapForType_12488 ;
      constinArgument_inExtensionGetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionGetterMapForType_12488, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 292)) ;
      UpEnumerator_extensionGetterMapForType enumerator_12542 (var_extensionGetterMapForType_12488) ;
      while (enumerator_12542.hasCurrentObject ()) {
        GGS__5B_functionSignatureElement_5D_ var_formalArgumentList_12609 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_12683 (enumerator_12542.current (HERE).readProperty_mInputFormalParameterList ()) ;
        while (enumerator_12683.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_12793 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12683.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_12793, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 296)) ;
          }
          var_formalArgumentList_12609.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_12683.current (HERE).readProperty_mFormalSelector (), var_typeIndex_12793, enumerator_12683.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_12683.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 297)) ;
          enumerator_12683.gotoNextObject () ;
        }
        GGS_unifiedTypeMapEntry var_returnedType_13084 ;
        {
        extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12542.current (HERE).readProperty_mResultTypeName (), var_returnedType_13084, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 303)) ;
        }
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::equal, enumerator_12542.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas4", 304)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              test_2 = ioArgument_ioGetterMap.getter_contains (enumerator_12542.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 305)).boolEnum () ;
              if (GalgasBool::boolTrue == test_2) {
                {
                ioArgument_ioGetterMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas4", 306)), enumerator_12542.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 306)) ;
                }
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, enumerator_12542.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas4", 308)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = ioArgument_ioGetterMap.getter_contains (enumerator_12542.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 309)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  {
                  ioArgument_ioGetterMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas4", 310)), enumerator_12542.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 310)) ;
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = constinArgument_inIsClass.operator_and (GGS_bool (ComparisonKind::equal, enumerator_12542.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas4", 312)))) COMMA_SOURCE_FILE ("semanticContext.galgas4", 312)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                ioArgument_ioGetterMap.setter_insertKey (enumerator_12542.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 315)), var_formalArgumentList_12609, enumerator_12542.current (HERE).readProperty_lkey ().readProperty_location (), GGS_bool (true), var_returnedType_13084, GGS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas4", 320)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 313)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_5) {
              {
              ioArgument_ioGetterMap.setter_insertKey (enumerator_12542.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 326)), var_formalArgumentList_12609, enumerator_12542.current (HERE).readProperty_lkey ().readProperty_location (), GGS_bool (true), var_returnedType_13084, enumerator_12542.current (HERE).readProperty_mQualifier (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 324)) ;
              }
            }
          }
        }
        enumerator_12542.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = constinArgument_inExtensionMethodMapForBuildingContext.getter_contains (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 338)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_extensionMethodMapForType var_extensionMethodMapForType_14490 ;
      constinArgument_inExtensionMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionMethodMapForType_14490, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 339)) ;
      UpEnumerator_extensionMethodMapForType enumerator_14544 (var_extensionMethodMapForType_14490) ;
      while (enumerator_14544.hasCurrentObject ()) {
        GGS__5B_formalParameterSignatureElement_5D_ var_formalArgumentList_14583 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_formalParameterAST_5D_ enumerator_14681 (enumerator_14544.current (HERE).readProperty_mFormalParameterList ()) ;
        while (enumerator_14681.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_14818 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_14681.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_14818, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 343)) ;
          }
          var_formalArgumentList_14583.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_14681.current (HERE).readProperty_mFormalSelector (), var_typeIndex_14818, enumerator_14681.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_14681.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 347)) ;
          enumerator_14681.gotoNextObject () ;
        }
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = GGS_bool (ComparisonKind::equal, enumerator_14544.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas4", 353)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GalgasBool test_8 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_8) {
              test_8 = ioArgument_ioInstanceMethodMap.getter_contains (enumerator_14544.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 354)).boolEnum () ;
              if (GalgasBool::boolTrue == test_8) {
                {
                ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas4", 355)), enumerator_14544.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 355)) ;
                }
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, enumerator_14544.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas4", 357)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = ioArgument_ioInstanceMethodMap.getter_contains (enumerator_14544.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 358)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  {
                  ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas4", 359)), enumerator_14544.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 359)) ;
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = constinArgument_inIsClass.operator_and (GGS_bool (ComparisonKind::equal, enumerator_14544.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas4", 361)))) COMMA_SOURCE_FILE ("semanticContext.galgas4", 361)).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                {
                ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_14544.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 364)), var_formalArgumentList_14583, enumerator_14544.current (HERE).readProperty_lkey ().readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas4", 368)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 362)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              {
              ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_14544.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 374)), var_formalArgumentList_14583, enumerator_14544.current (HERE).readProperty_lkey ().readProperty_location (), GGS_bool (true), enumerator_14544.current (HERE).readProperty_mQualifier (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 372)) ;
              }
            }
          }
        }
        enumerator_14544.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = constinArgument_inExtensionSetterMapForBuildingContext.getter_contains (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 385)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GGS_extensionSetterMapForType var_extensionSetterMapForType_16379 ;
      constinArgument_inExtensionSetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionSetterMapForType_16379, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 386)) ;
      UpEnumerator_extensionSetterMapForType enumerator_16433 (var_extensionSetterMapForType_16379) ;
      while (enumerator_16433.hasCurrentObject ()) {
        GGS__5B_formalParameterSignatureElement_5D_ var_formalArgumentList_16507 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_formalParameterAST_5D_ enumerator_16571 (enumerator_16433.current (HERE).readProperty_mFormalParameterList ()) ;
        while (enumerator_16571.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_16666 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16571.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_16666, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 390)) ;
          }
          var_formalArgumentList_16507.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_16571.current (HERE).readProperty_mFormalSelector (), var_typeIndex_16666, enumerator_16571.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_16571.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 391)) ;
          enumerator_16571.gotoNextObject () ;
        }
        {
        ioArgument_ioSetterMap.setter_insertKey (enumerator_16433.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 399)), var_formalArgumentList_16507, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas4", 402)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 397)) ;
        }
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          test_13 = constinArgument_inAcceptSetters.operator_not (SOURCE_FILE ("semanticContext.galgas4", 405)).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            GenericArray <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_16433.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a class does not accept any mutating proc; use proc instead"), fixItArray14  COMMA_SOURCE_FILE ("semanticContext.galgas4", 406)) ;
          }
        }
        enumerator_16433.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = constinArgument_inExtensionInitializerMapForBuildingContext.getter_contains (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 411)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GGS_extensionInitializerMapForType var_initializerMapForType_17458 ;
      constinArgument_inExtensionInitializerMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_initializerMapForType_17458, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 412)) ;
      UpEnumerator_extensionInitializerMapForType enumerator_17504 (var_initializerMapForType_17458) ;
      while (enumerator_17504.hasCurrentObject ()) {
        GGS__5B_functionSignatureElement_5D_ var_formalArgumentList_17567 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_17624 (enumerator_17504.current (HERE).readProperty_mFormalParameterList ()) ;
        while (enumerator_17624.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_17716 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17624.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_17716, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 416)) ;
          }
          var_formalArgumentList_17567.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_17624.current (HERE).readProperty_mFormalSelector (), var_typeIndex_17716, enumerator_17624.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_17624.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 417)) ;
          enumerator_17624.gotoNextObject () ;
        }
        {
        ioArgument_ioInitializerMap.setter_insertKey (enumerator_17504.current (HERE).readProperty_lkey (), var_formalArgumentList_17567, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 419)) ;
        }
        enumerator_17504.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externFunctionDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_functionSignatureElement_5D_ var_functionSignature_18829 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_18901 (temp_0.readProperty_mFormalArgumentList ()) ;
  while (enumerator_18901.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterTypeIndex_18988 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18901.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_18988, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 439)) ;
    }
    var_functionSignature_18829.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_18901.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_18988, enumerator_18901.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), enumerator_18901.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 440)) ;
    enumerator_18901.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_resultTypeIndex_19216 ;
  {
  const GGS_externFunctionDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mResultTypeName (), var_resultTypeIndex_19216, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 443)) ;
  }
  {
  const GGS_externFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_2.readProperty_mFunctionName (), var_functionSignature_18829, var_resultTypeIndex_19216, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 445)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3SyntaxComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                  GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_1 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_2 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticContext.mProperty_mSyntaxComponentMapForSemanticAnalysis.setter_insertKey (temp_0.readProperty_mSyntaxComponentName (), temp_1.readProperty_mLexiqueName (), temp_2.readProperty_mNonterminalDeclarationList (), temp_3.readProperty_mRuleList (), temp_4.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 464)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3GrammarComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                   const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                   const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                   const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                   const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_grammarLabelMap var_grammarLabelMap_21063 = GGS_grammarLabelMap::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  UpEnumerator__5B_nonTerminalLabelAST_5D_ enumerator_21116 (temp_0.readProperty_mStartSymbolLabelList ()) ;
  while (enumerator_21116.hasCurrentObject ()) {
    GGS__5B_formalParameterSignatureElement_5D_ var_formalArgumentList_21210 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalParameterAST_5D_ enumerator_21270 (enumerator_21116.current (HERE).readProperty_mFormalArgumentList ()) ;
    while (enumerator_21270.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentType_21359 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_21270.current (HERE).readProperty_mFormalArgumentTypeName (), var_argumentType_21359, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 490)) ;
      }
      var_formalArgumentList_21210.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_21270.current (HERE).readProperty_mFormalSelector (), var_argumentType_21359, enumerator_21270.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_21270.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 491)) ;
      enumerator_21270.gotoNextObject () ;
    }
    {
    var_grammarLabelMap_21063.setter_insertKey (enumerator_21116.current (HERE).readProperty_mLabelName (), var_formalArgumentList_21210, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 497)) ;
    }
    enumerator_21116.gotoNextObject () ;
  }
  {
  const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  ioArgument_ioSemanticContext.mProperty_mGrammarMap.setter_insertGrammar (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_21063, temp_2.readProperty_mHasIndexing ().readProperty_bool (), temp_3.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 503)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externFunctionDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument__5F_ioSemanticTypePrecedenceGraph */,
                                                                        GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                        GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas4", 535)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithInputArgument&&?argTypeName?argName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                            GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                            const GGS_string constinArgument_inInputArgumentTypeName,
                                                                                                            const GGS_string constinArgument_inInputArgumentName,
                                                                                                            const GGS_string constinArgument_inSetterName,
                                                                                                            const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_1754 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_1754, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 31)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_1814 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argList_1814.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas4", 33)), var_argumentTypeIndex_1754, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas4", 33)), constinArgument_inInputArgumentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 33)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 35)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas4", 36)), var_argList_1814, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas4", 39)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 34)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithOutputAndInputArguments&&?outputArgTypeName?outputArgName?inputArgTypeName?inputArgName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                                                                                      GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                      const GGS_string constinArgument_inOutputArgumentTypeName,
                                                                                                                                                                      const GGS_string constinArgument_inOutputArgumentName,
                                                                                                                                                                      const GGS_string constinArgument_inInputArgumentTypeName,
                                                                                                                                                                      const GGS_string constinArgument_inInputArgumentName,
                                                                                                                                                                      const GGS_string constinArgument_inSetterName,
                                                                                                                                                                      const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_outputArgumentTypeIndex_2706 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inOutputArgumentTypeName, var_outputArgumentTypeIndex_2706, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 54)) ;
  }
  GGS_unifiedTypeMapEntry var_inputArgumentTypeIndex_2803 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_inputArgumentTypeIndex_2803, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 55)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_2868 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argList_2868.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas4", 57)), var_outputArgumentTypeIndex_2706, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("semanticsSetters.galgas4", 57)), constinArgument_inOutputArgumentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 57)) ;
  var_argList_2868.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas4", 58)), var_inputArgumentTypeIndex_2803, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas4", 58)), constinArgument_inInputArgumentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 58)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 60)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas4", 61)), var_argList_2868, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas4", 64)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 59)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWith2InputArguments&&?arg1TypeName?arg1Name?arg2TypeName?arg2Name?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                                                                           GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_31_TypeName,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_31_Name,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_32_TypeName,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_32_Name,
                                                                                                                                                           const GGS_string constinArgument_inSetterName,
                                                                                                                                                           const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_3796 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_3900 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_31_TypeName, var_argumentTypeIndex_3900, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 80)) ;
  }
  var_argList_3796.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas4", 81)), var_argumentTypeIndex_3900, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas4", 81)), constinArgument_inInputArgument_31_Name, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 81)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_32_TypeName, var_argumentTypeIndex_3900, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 82)) ;
  }
  var_argList_3796.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas4", 83)), var_argumentTypeIndex_3900, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas4", 83)), constinArgument_inInputArgument_32_Name, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 83)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 85)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas4", 86)), var_argList_3796, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas4", 89)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 84)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithoutArgument&??compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                  const GGS_string constinArgument_inSetterName,
                                                                  const GGS_bool constinArgument_inHasCompilerArgument,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 100)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas4", 101)), GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas4", 104)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas4", 99)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'lexicalUnicodeTestFunctionAnalysis!'
//
//--------------------------------------------------------------------------------------------------

void routine_lexicalUnicodeTestFunctionAnalysis_21_ (GGS_stringset & outArgument_outUnicodeTestFunctions,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnicodeTestFunctions.drop () ; // Release 'out' argument
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas4", 31)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas4", 31)) ;
  outArgument_outUnicodeTestFunctions = temp_0 ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_routineMangledName (const GGS_lstring & constinArgument_inRoutineName,
                                         const GGS__5B_formalParameterSignatureElement_5D_ & constinArgument_inRoutineFormalParameters,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  GGS_string var_str_1483 = constinArgument_inRoutineName.readProperty_string () ;
  UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_1529 (constinArgument_inRoutineFormalParameters) ;
  while (enumerator_1529.hasCurrentObject ()) {
    switch (enumerator_1529.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        var_str_1483.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 29)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        var_str_1483.plusAssignOperation(GGS_string ("&"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 31)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        var_str_1483.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 33)) ;
      }
      break ;
    }
    var_str_1483.plusAssignOperation(enumerator_1529.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 35)) ;
    enumerator_1529.gotoNextObject () ;
  }
  result = GGS_lstring::init_21__21_ (var_str_1483, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'routineArgumentFromFormalParameters'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_routineArgumentFromFormalParameters (const GGS__5B_formalParameterSignatureElement_5D_ & constinArgument_inRoutineFormalParameters,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = GGS_string ("(") ;
  UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_2110 (constinArgument_inRoutineFormalParameters) ;
  while (enumerator_2110.hasCurrentObject ()) {
    switch (enumerator_2110.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        result.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 48)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        result.plusAssignOperation(GGS_string ("!\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 50)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        result.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 52)) ;
      }
      break ;
    }
    result.plusAssignOperation(enumerator_2110.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 54)), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 54)) ;
    enumerator_2110.gotoNextObject () ;
    if (enumerator_2110.hasCurrentObject ()) {
      result.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 56)) ;
    }
  }
  result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 58)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3SyntaxComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                        GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_1 = this ;
  GGS_lstring var_key_14674 = GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 346)), temp_1.readProperty_mSyntaxComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_galgas_33_SyntaxComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_14674, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 347)) ;
  }
  {
  const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_14674, GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 348)), temp_4.readProperty_mLexiqueName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 348)) ;
  }
  const GGS_galgas_33_SyntaxComponentAST temp_5 = this ;
  UpEnumerator__5B_syntaxRuleAST_5D_ enumerator_14968 (temp_5.readProperty_mRuleList ()) ;
  while (enumerator_14968.hasCurrentObject ()) {
    UpEnumerator__5B_syntaxRuleLabelAST_5D_ enumerator_15007 (enumerator_14968.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_15007.hasCurrentObject ()) {
      UpEnumerator__5B_formalParameterAST_5D_ enumerator_15050 (enumerator_15007.current (HERE).readProperty_mFormalArguments ()) ;
      while (enumerator_15050.hasCurrentObject ()) {
        switch (enumerator_15050.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_14674, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_15050.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 353)), enumerator_15050.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 353)) ;
            }
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          break ;
        }
        enumerator_15050.gotoNextObject () ;
      }
      enumerator_15007.gotoNextObject () ;
    }
    enumerator_14968.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                              GGS_string & outArgument_outHeader,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarForGeneration temp_0 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_2319 (temp_0.readProperty_mSyntaxComponents ()) ;
  while (enumerator_2319.hasCurrentObject ()) {
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("syntax-").add_operation (enumerator_2319.current (HERE).readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 44)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 44))  COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 44)) ;
    enumerator_2319.gotoNextObject () ;
  }
  const GGS_grammarForGeneration temp_1 = this ;
  const GGS_grammarForGeneration temp_2 = this ;
  const GGS_grammarForGeneration temp_3 = this ;
  const GGS_grammarForGeneration temp_4 = this ;
  const GGS_grammarForGeneration temp_5 = this ;
  const GGS_grammarForGeneration temp_6 = this ;
  const GGS_grammarForGeneration temp_7 = this ;
  outArgument_outHeader = GGS_grammarGenerationTemplate::class_func_grammarZone_33_HeaderGalgas_33_ (temp_1.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 47)), temp_2.readProperty_mNonTerminalMapForGrammarAnalysis (), temp_3.readProperty_mNonTerminalToAddList (), temp_4.readProperty_mStartSymbolName (), temp_5.readProperty_mHasTranslateFeature (), temp_6.readProperty_mGrammarName (), temp_7.readProperty_mSyntaxComponents (), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 46)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_string & outArgument_outImplementation,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 62)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 62))  COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 62)) ;
  const GGS_grammarForGeneration temp_1 = this ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_3191 (temp_1.readProperty_mNonTerminalMapForGrammarAnalysis ()) ;
  while (enumerator_3191.hasCurrentObject ()) {
    UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_3280 (enumerator_3191.current (HERE).readProperty_mNonterminalSymbolParametersMap ()) ;
    while (enumerator_3280.hasCurrentObject ()) {
      UpEnumerator__5B_signatureElementForGrammarAnalysis_5D_ enumerator_3364 (enumerator_3280.current (HERE).readProperty_mFormalParametersList ()) ;
      while (enumerator_3364.hasCurrentObject ()) {
        switch (enumerator_3364.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            GGS_unifiedTypeMapEntry var_t_3525 = extensionGetter_typeMapEntryForLKey (constinArgument_inUnifiedTypeMap, enumerator_3364.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 68)) ;
            extensionMethod_addHeaderFileName (var_t_3525, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 69)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          break ;
        }
        enumerator_3364.gotoNextObject () ;
      }
      enumerator_3280.gotoNextObject () ;
    }
    enumerator_3191.gotoNextObject () ;
  }
  const GGS_grammarForGeneration temp_2 = this ;
  const GGS_grammarForGeneration temp_3 = this ;
  const GGS_grammarForGeneration temp_4 = this ;
  const GGS_grammarForGeneration temp_5 = this ;
  const GGS_grammarForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_grammarGenerationTemplate::class_func_grammarImplementation (temp_2.readProperty_mGrammarName (), temp_3.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 79)), temp_4.readProperty_mTemplateUnicodeStringToGenerate (), temp_5.readProperty_mTemplateReplacementList (), temp_6.readProperty_mCppFileContents (), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 77)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@grammarForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_grammarForGeneration::getter_getImplementationCppFileName (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_grammarForGeneration temp_0 = this ;
  result = GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 89)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 89)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@grammarForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_grammarForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@grammarForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_grammarForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("galgas-grammar-component-generation.galgas4", 101)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@grammarForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_grammarForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalOrExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalOrExpressionAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  result = callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 37)) ;
  result.plusAssignOperation(GGS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 38)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 39)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 39)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterIntervalMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string::makeEmptyString () ;
  result = GGS_string ("self.testForInputFromChar (") ;
  const GGS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result.plusAssignOperation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_u_33__32_ (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 49)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 49)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 49)) ;
  result.plusAssignOperation(GGS_string (", toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 50)) ;
  const GGS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result.plusAssignOperation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_u_33__32_ (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 51)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 51)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 51)) ;
  result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 52)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStringMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalStringMatchAST temp_0 = this ;
  result = GGS_string ("self.testForInputString (").add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 60)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 60)) ;
  result.plusAssignOperation(GGS_string (", advance: true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 61)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStringNotMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringNotMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("self.notTestForInputString (") ;
  const GGS_lexicalStringNotMatchAST temp_0 = this ;
  result.plusAssignOperation(temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 70)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 70)) ;
  result.plusAssignOperation(GGS_string (", error: &scanningOk)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 71)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("self.testForInputChar (") ;
  const GGS_lexicalCharacterMatchAST temp_0 = this ;
  result.plusAssignOperation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_u_33__32_ (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 80)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 80)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 80)) ;
  result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 81)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterSetMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterSetMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalCharacterSetMatchAST temp_0 = this ;
  result = GGS_string ("self.testForChar_").add_operation (temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 88)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 88)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalAttributeInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result = GGS_string ("mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 101)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result = temp_0.readProperty_mCharacter ().readProperty_char ().getter_u_33__32_ (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 108)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 108)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalUnsignedInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 114)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCurrentCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("self.previousChar") ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalFunctionInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result = GGS_string ("scanner_cocoa_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 128)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 128)) ;
  const GGS_lexicalFunctionInputArgumentAST temp_1 = this ;
  UpEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ enumerator_5644 (temp_1.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_5644.hasCurrentObject ()) {
    result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_5644.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 130)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 130)) ;
    enumerator_5644.gotoNextObject () ;
    if (enumerator_5644.hasCurrentObject ()) {
      result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 131)) ;
    }
  }
  result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 133)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalSendTerminalByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GGS_string constinArgument_inScannerClassName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result = GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 147)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 147)).add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 147)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 147)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 147)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalErrorByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GGS_string /* constinArgument__5F_inScannerClassName */,
                                                                                    Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("scanningOk = false\n") ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalImplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalImplicitRuleAST::getter_generateSwiftCocoaCode (const GGS_string constinArgument_inScannerClassName,
                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  GGS_sortedTokenArray var_tokenSortedList_7531 ;
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_7522 ; // Joker input parameter
  GGS_bool joker_7548 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_7522, var_tokenSortedList_7531, joker_7548, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 173)) ;
  result = GGS_string::makeEmptyString () ;
  DownEnumerator_sortedTokenArray enumerator_7583 (var_tokenSortedList_7531) ;
  while (enumerator_7583.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string ("if scanningOk && self.testForInputString ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 176)) ;
    result.plusAssignOperation(enumerator_7583.current (HERE).readProperty_mName ().getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 177)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 177)) ;
    result.plusAssignOperation(GGS_string (", advance: true) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 178)) ;
    result.plusAssignOperation(GGS_string ("  tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 179)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 179)).add_operation (enumerator_7583.current (HERE).readProperty_mTerminalName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 179)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 179)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 179)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 179)) ;
    result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 180)) ;
    enumerator_7583.gotoNextObject () ;
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalExplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalExplicitRuleAST::getter_generateSwiftCocoaCode (const GGS_string constinArgument_inScannerClassName,
                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("if scanningOk && (") ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 191)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 191)) ;
  result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 192)) ;
  {
  result.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 193)) ;
  }
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_8368 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_8368.hasCurrentObject ()) {
    result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8368.current (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 195)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 195)) ;
    enumerator_8368.gotoNextObject () ;
  }
  {
  result.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 197)) ;
  }
  result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 198)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'templateCodeGenerationForListInstruction?&&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (const GGS__5B_templateInstructionForGeneration_5D_ constinArgument_inInstructionList,
                                                                               GGS_string & ioArgument_ioGeneratedCode,
                                                                               GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GGS_bool & ioArgument_ioUseColumnMarker,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_templateInstructionForGeneration_5D_ enumerator_1918 (constinArgument_inInstructionList) ;
  while (enumerator_1918.hasCurrentObject ()) {
    callExtensionMethod_templateCodeGeneration ((cPtr_templateInstructionForGeneration *) enumerator_1918.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 33)) ;
    enumerator_1918.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionStringForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                 GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                 GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                 GGS_bool & /* ioArgument__5F_ioUseColumnMarker */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionStringForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendString (").add_operation (temp_0.readProperty_mTemplateString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("templateCodeGeneration.galgas4", 51)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 51)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 51)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 51)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionExpressionForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GGS_bool & /* ioArgument__5F_ioUseColumnMarker */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_cppName_3125 ;
  const GGS_templateInstructionExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName_3125, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 63)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendString (").add_operation (var_cppName_3125, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 64)).add_operation (GGS_string (".stringValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 64)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 64)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateBlockInstructionForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_indendationVarCppName_3722 ;
  const GGS_templateBlockInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_3722, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 76)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_indendationVarCppName_3722, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 77)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 77)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 77)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  result.incIndentation (int32_t (").add_operation (var_indendationVarCppName_3722, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 78)).add_operation (GGS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 78)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 78)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 79)) ;
  {
  const GGS_templateBlockInstructionForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mBlockInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 80)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_indendationVarCppName_3722, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 88)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 88)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 88)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  result.incIndentation (- int32_t (").add_operation (var_indendationVarCppName_3722, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 89)).add_operation (GGS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 89)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 89)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 90)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                            GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                            GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                            GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                            GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GGS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("columnMarker = result.currentColumn () ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 102)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                             GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                             GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                             GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                             GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GGS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendSpacesUntilColumn (columnMarker) ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 114)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionIfForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GGS_bool & ioArgument_ioUseColumnMarker,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionIfForGeneration temp_0 = this ;
  UpEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ enumerator_5964 (temp_0.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_5964.hasCurrentObject ()) {
    GGS_string var_ifVarCppName_6217 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_5964.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_6217, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 127)) ;
    GGS_string var_testVar_6244 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas4", 134)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 134)) ;
    ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 135)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GalgasBool ").add_operation (var_testVar_6244, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 136)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 136)).add_operation (var_ifVarCppName_6217, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 136)).add_operation (GGS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 136)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 136)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_testVar_6244, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 137)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 137)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 137)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolTrue : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 138)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 139)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_5964.current (HERE).readProperty_mInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 140)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 148)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 149)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolFalse : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 150)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 151)) ;
    }
    enumerator_5964.gotoNextObject () ;
  }
  {
  const GGS_templateInstructionIfForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 154)) ;
  }
  const GGS_templateInstructionIfForGeneration temp_2 = this ;
  UpEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ enumerator_7267 (temp_2.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_7267.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 163)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  } break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 164)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolNotValid :\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 165)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 166)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 167)) ;
    enumerator_7267.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionForeachAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_6506 ;
  const GGS_templateInstructionForeachAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_6506, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 190)) ;
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptor_6626 = extensionGetter_definition (var_expression_6506.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 198)).readProperty_enumerationDescriptorList () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_enumerationDescriptor_6626.getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 199)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_expression_6506.readProperty_mLocation (), GGS_string ("expression of '@").add_operation (extensionGetter_definition (var_expression_6506.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 200)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 200)).add_operation (GGS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 200)), fixItArray2  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 200)) ;
    }
  }
  GGS__5B_templateInstructionForGeneration_5D_ var_beforeInstructionList_6922 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_3 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mBeforeInstructionList (), var_beforeInstructionList_6922, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 204)) ;
  }
  const GGS_templateInstructionForeachAST temp_4 = this ;
  GGS_string var_enumeratorCppName_7217 = GGS_string ("enumerator_").add_operation (temp_4.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 213)).getter_string (SOURCE_FILE ("template-for-instruction.galgas4", 213)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 213)) ;
  GGS_templateVariableMap var_doVariableMap_7316 = constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap () ;
  const GGS_templateInstructionForeachAST temp_5 = this ;
  const GGS_templateInstructionForeachAST temp_6 = this ;
  GGS_string var_cppIndexVarName_7377 = GGS_string ("index_").add_operation (temp_5.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 215)).getter_string (SOURCE_FILE ("template-for-instruction.galgas4", 215)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 215)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 215)).add_operation (temp_6.readProperty_mIndexIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas4", 216)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 216)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_templateInstructionForeachAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mIndexIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      {
      const GGS_templateInstructionForeachAST temp_9 = this ;
      var_doVariableMap_7316.setter_insertKey (temp_9.readProperty_mIndexIdentifier (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_cppIndexVarName_7377, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 218)) ;
      }
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_templateInstructionForeachAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mEnumeration ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 220)).objectCompare (var_enumerationDescriptor_6626.getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 220)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_templateInstructionForeachAST temp_12 = this ;
      const GGS_templateInstructionForeachAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfProperties (), var_enumerationDescriptor_6626.getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 222)).getter_string (SOURCE_FILE ("template-for-instruction.galgas4", 222)).add_operation (GGS_string (" variables are required here ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 222)).add_operation (temp_13.readProperty_mEnumeration ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 223)).getter_string (SOURCE_FILE ("template-for-instruction.galgas4", 222)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 222)).add_operation (GGS_string (" provided)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 223)), fixItArray14  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 221)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    const GGS_templateInstructionForeachAST temp_15 = this ;
    UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_7939 (var_enumerationDescriptor_6626) ;
    UpEnumerator__5B_lstring_5D_ enumerator_7976 (temp_15.readProperty_mEnumeration ()) ;
    while (enumerator_7939.hasCurrentObject () && enumerator_7976.hasCurrentObject ()) {
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        test_16 = GGS_bool (ComparisonKind::notEqual, enumerator_7976.current (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          {
          var_doVariableMap_7316.setter_insertKey (enumerator_7976.current (HERE), enumerator_7939.current (HERE).readProperty_mEnumeratedType (), var_enumeratorCppName_7217.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 230)).add_operation (enumerator_7939.current (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas4", 230)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 230)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 230)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 227)) ;
          }
        }
      }
      enumerator_7939.gotoNextObject () ;
      enumerator_7976.gotoNextObject () ;
    }
  }
  GGS_templateAnalysisContext var_doAnalysisContext_8280 = GGS_templateAnalysisContext::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes (), var_doVariableMap_7316, inCompiler COMMA_HERE) ;
  GGS__5B_templateInstructionForGeneration_5D_ var_doInstructionList_8432 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_17 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_doAnalysisContext_8280, ioArgument_ioTypeMap, temp_17.readProperty_mDoInstructionList (), var_doInstructionList_8432, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 240)) ;
  }
  GGS__5B_templateInstructionForGeneration_5D_ var_betweenInstructionList_8720 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_18 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_18.readProperty_mBetweenInstructionList (), var_betweenInstructionList_8720, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 250)) ;
  }
  GGS__5B_templateInstructionForGeneration_5D_ var_afterInstructionList_9021 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_19 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_19.readProperty_mAfterInstructionList (), var_afterInstructionList_9021, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 260)) ;
  }
  const GGS_templateInstructionForeachAST temp_20 = this ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionForeachForGeneration::init_21__21__21__21__21__21__21__21_ (temp_20.readProperty_mIsAscending (), var_expression_6506, var_enumeratorCppName_7217, var_beforeInstructionList_6922, var_doInstructionList_8432, var_cppIndexVarName_7377, var_betweenInstructionList_8720, var_afterInstructionList_9021, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 269)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionForeachForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_foreachVarCppName_10820 ;
  const GGS_templateInstructionForeachForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_10820, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 305)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_templateInstructionForeachForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 307)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateInstructionForeachForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_u_33__32_ ").add_operation (temp_3.readProperty_mIndexCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 308)).add_operation (GGS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 308)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 308)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_foreachVarCppName_10820, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 311)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 311)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 311)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 312)) ;
  }
  const GGS_templateInstructionForeachForGeneration temp_4 = this ;
  GGS_string temp_5 ;
  const GalgasBool test_6 = temp_4.readProperty_mIsAscending ().boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_string ("Up") ;
  }else if (GalgasBool::boolFalse == test_6) {
    temp_5 = GGS_string ("Down") ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_5, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 313)) ;
  const GGS_templateInstructionForeachForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("Enumerator_").add_operation (extensionGetter_identifierRepresentation (temp_7.readProperty_mExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 314)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 314)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 314)) ;
  const GGS_templateInstructionForeachForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (temp_8.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 315)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 315)).add_operation (var_foreachVarCppName_10820, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 315)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 315)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 315)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_templateInstructionForeachForGeneration temp_10 = this ;
    const GGS_templateInstructionForeachForGeneration temp_11 = this ;
    test_9 = GGS_bool (ComparisonKind::greaterThan, temp_10.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 317)).add_operation (temp_11.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 317)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 317)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_templateInstructionForeachForGeneration temp_12 = this ;
      const GGS_templateInstructionForeachForGeneration temp_13 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const bool nonEmpty_").add_operation (temp_12.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 318)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 318)).add_operation (temp_13.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 318)).add_operation (GGS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 318)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 318)) ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    const GGS_templateInstructionForeachForGeneration temp_15 = this ;
    test_14 = GGS_bool (ComparisonKind::greaterThan, temp_15.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 320)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_templateInstructionForeachForGeneration temp_16 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nonEmpty_").add_operation (temp_16.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 321)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 321)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 321)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 322)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_17 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_17.readProperty_mBeforeInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 323)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 331)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 332)) ;
    }
  }
  const GGS_templateInstructionForeachForGeneration temp_18 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (temp_18.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 334)).add_operation (GGS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 334)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 334)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 335)) ;
  }
  {
  const GGS_templateInstructionForeachForGeneration temp_19 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_19.readProperty_mDoInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 337)) ;
  }
  const GGS_templateInstructionForeachForGeneration temp_20 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_20.readProperty_mEnumeratorCppName ().add_operation (GGS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 346)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 346)) ;
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    const GGS_templateInstructionForeachForGeneration temp_22 = this ;
    test_21 = GGS_bool (ComparisonKind::greaterThan, temp_22.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 348)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_templateInstructionForeachForGeneration temp_23 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (temp_23.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 349)).add_operation (GGS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 349)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 349)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 350)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_24 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_24.readProperty_mBetweenInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 351)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 359)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 360)) ;
    }
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    const GGS_templateInstructionForeachForGeneration temp_26 = this ;
    test_25 = GGS_bool (ComparisonKind::greaterThan, temp_26.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 363)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      const GGS_templateInstructionForeachForGeneration temp_27 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_27.readProperty_mIndexCppName ().add_operation (GGS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 364)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 364)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 366)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 367)) ;
  GalgasBool test_28 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_28) {
    const GGS_templateInstructionForeachForGeneration temp_29 = this ;
    test_28 = GGS_bool (ComparisonKind::greaterThan, temp_29.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 369)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_28) {
      const GGS_templateInstructionForeachForGeneration temp_30 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nonEmpty_").add_operation (temp_30.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 370)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 370)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 370)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 371)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_31 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_31.readProperty_mAfterInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 372)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 380)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 381)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 384)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 385)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterTemplateString&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterTemplateString_26_ (GGS__5B_templateInstructionAST_5D_ & ioArgument_outResultingInstructionList,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_21197 = GGS_string::class_func_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 575)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_s_21197.getter_count (SOURCE_FILE ("templateSyntax.galgas4", 576)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_outResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionStringAST::init_21_ (var_s_21197, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 577)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateGetterCallInExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateGetterCallInExpressionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_receiverExpression_3357 ;
  const GGS_templateGetterCallInExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_receiverExpression_3357, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 66)) ;
  GGS_unifiedTypeMapEntry var_receiverType_3407 = var_receiverExpression_3357.readProperty_mResultType () ;
  GGS_string var_receiverTypeName_3459 = extensionGetter_definition (var_receiverType_3407, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 74)).readProperty_typeName ().readProperty_string () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_bool test_2 = extensionGetter_definition (var_receiverType_3407, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 76)).readProperty_typeKind ().getter_isStructType (SOURCE_FILE ("templateAnalysis.galgas4", 76)) ;
    if (GalgasBool::boolTrue != test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_receiverType_3407, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 76)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas4", 76)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateGetterCallInExpressionAST temp_3 = this ;
      test_1 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 77)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_templateGetterCallInExpressionAST temp_4 = this ;
        test_1 = extensionGetter_definition (var_receiverType_3407, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 78)).readProperty_propertyMap ().getter_contains (temp_4.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 78)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_templateGetterCallInExpressionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mExpressionLocation (), GGS_string ("use dot notation, instead of func call"), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 79)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_getterMap var_getterMap_3929 = extensionGetter_definition (var_receiverType_3407, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 82)).readProperty_getterMap () ;
    GGS__5B_functionSignatureElement_5D_ var_getterFormalArgumentTypeList_4037 ;
    GGS_methodKind var_kind_4086 ;
    GGS_bool var_hasCompilerArgument_4105 ;
    GGS_unifiedTypeMapEntry var_returnedType_4154 ;
    GGS__5B_string_5D_ var_fieldList_4175 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
    const GGS_templateGetterCallInExpressionAST temp_7 = this ;
    GGS_string var_actualGetterName_4208 = temp_7.readProperty_mGetterName ().readProperty_string () ;
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_templateGetterCallInExpressionAST temp_9 = this ;
      test_8 = var_getterMap_3929.getter_contains (temp_9.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 90)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GGS_string var_actualGetterNameString_4497 ;
        const GGS_templateGetterCallInExpressionAST temp_10 = this ;
        GGS_location joker_4415 ; // Joker input parameter
        GGS_methodQualifier joker_4480 ; // Joker input parameter
        var_getterMap_3929.method_searchKey (temp_10.readProperty_mGetterName (), var_kind_4086, var_getterFormalArgumentTypeList_4037, joker_4415, var_hasCompilerArgument_4105, var_returnedType_4154, joker_4480, var_actualGetterNameString_4497, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 91)) ;
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, var_actualGetterNameString_4497.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_templateGetterCallInExpressionAST temp_12 = this ;
            GenericArray <FixItDescription> fixItArray13 ;
            appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, var_actualGetterName_4208) ;
            inCompiler->emitSemanticError (temp_12.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete func"), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 101)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GGS_u_33__32_ var_matchingReaderCount_4688 = GGS_u_33__32_ (uint32_t (0U)) ;
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3407, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 105)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("templateAnalysis.galgas4", 105)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          var_getterFormalArgumentTypeList_4037 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
          var_hasCompilerArgument_4105 = GGS_bool (true) ;
          var_returnedType_4154 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("templateAnalysis.galgas4", 108)) ;
          var_kind_4086 = GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas4", 109)) ;
          UpEnumerator__5B_typedProperty_5D_ enumerator_5006 (extensionGetter_definition (var_receiverType_3407, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 110)).readProperty_currentTypedPropertyList ()) ;
          while (enumerator_5006.hasCurrentObject ()) {
            GGS_getterMap var_aMap_5059 = extensionGetter_definition (enumerator_5006.current (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 111)).readProperty_getterMap () ;
            GalgasBool test_15 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_15) {
              const GGS_templateGetterCallInExpressionAST temp_16 = this ;
              const GGS_getterMap_2E_element var_entry_5123 = var_aMap_5059.readSubscript__3F_ (temp_16.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
              if (!var_aMap_5059.readSubscript__3F_ (temp_16.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
                test_15 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_15) {
                var_matchingReaderCount_4688.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 113)) ;
                var_getterFormalArgumentTypeList_4037 = var_entry_5123.readProperty_mArgumentTypeList () ;
                var_hasCompilerArgument_4105 = var_entry_5123.readProperty_mHasCompilerArgument () ;
                var_returnedType_4154 = var_entry_5123.readProperty_mReturnedType () ;
                var_kind_4086 = var_entry_5123.readProperty_mKind () ;
                GalgasBool test_17 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_17) {
                  test_17 = GGS_bool (ComparisonKind::notEqual, var_entry_5123.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_17) {
                    var_actualGetterName_4208 = var_entry_5123.readProperty_mGetterNameThatObsoletesInvokationName () ;
                  }
                }
                var_fieldList_4175.plusPlusAssignOperation (enumerator_5006.current (HERE).readProperty_name ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 121)) ;
              }
            }
            enumerator_5006.gotoNextObject () ;
          }
          GalgasBool test_18 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_18) {
            test_18 = GGS_bool (ComparisonKind::equal, var_matchingReaderCount_4688.objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_18) {
              const GGS_templateGetterCallInExpressionAST temp_19 = this ;
              const GGS_templateGetterCallInExpressionAST temp_20 = this ;
              GenericArray <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (temp_19.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3459, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 126)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 126)).add_operation (temp_20.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 126)).add_operation (GGS_string ("' func, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 126)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 125)) ;
              var_getterFormalArgumentTypeList_4037.drop () ; // Release error dropped variable
              var_hasCompilerArgument_4105.drop () ; // Release error dropped variable
              var_returnedType_4154.drop () ; // Release error dropped variable
              var_kind_4086.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_18) {
            GalgasBool test_22 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_22) {
              test_22 = GGS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_4688.objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_22) {
                GGS_string var_s_6035 = GGS_string::makeEmptyString () ;
                UpEnumerator__5B_string_5D_ enumerator_6065 (var_fieldList_4175) ;
                while (enumerator_6065.hasCurrentObject ()) {
                  var_s_6035.plusAssignOperation(enumerator_6065.current (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 132)) ;
                  enumerator_6065.gotoNextObject () ;
                  if (enumerator_6065.hasCurrentObject ()) {
                    var_s_6035.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 133)) ;
                  }
                }
                const GGS_templateGetterCallInExpressionAST temp_23 = this ;
                const GGS_templateGetterCallInExpressionAST temp_24 = this ;
                GenericArray <FixItDescription> fixItArray25 ;
                inCompiler->emitSemanticError (temp_23.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3459, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 136)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 136)).add_operation (temp_24.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 136)).add_operation (GGS_string ("' func, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 136)).add_operation (var_s_6035, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 137)).add_operation (GGS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 137)), fixItArray25  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 135)) ;
                var_getterFormalArgumentTypeList_4037.drop () ; // Release error dropped variable
                var_hasCompilerArgument_4105.drop () ; // Release error dropped variable
                var_returnedType_4154.drop () ; // Release error dropped variable
                var_kind_4086.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        GalgasBool test_26 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_26) {
          test_26 = GGS_bool (ComparisonKind::equal, var_getterMap_3929.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 140)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_26) {
            const GGS_templateGetterCallInExpressionAST temp_27 = this ;
            GenericArray <FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (temp_27.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3459, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 142)).add_operation (GGS_string ("' type does not define any func"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 142)), fixItArray28  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 141)) ;
            var_getterFormalArgumentTypeList_4037.drop () ; // Release error dropped variable
            var_hasCompilerArgument_4105.drop () ; // Release error dropped variable
            var_returnedType_4154.drop () ; // Release error dropped variable
            var_kind_4086.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_26) {
          const GGS_templateGetterCallInExpressionAST temp_29 = this ;
          const GGS_templateGetterCallInExpressionAST temp_30 = this ;
          GenericArray <FixItDescription> fixItArray31 ;
          appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, var_getterMap_3929.getter_keyList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 148))) ;
          inCompiler->emitSemanticError (temp_29.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3459, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 146)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 146)).add_operation (temp_30.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 146)).add_operation (GGS_string ("' func"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 146)), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 145)) ;
          var_getterFormalArgumentTypeList_4037.drop () ; // Release error dropped variable
          var_hasCompilerArgument_4105.drop () ; // Release error dropped variable
          var_returnedType_4154.drop () ; // Release error dropped variable
          var_kind_4086.drop () ; // Release error dropped variable
        }
      }
    }
    GalgasBool test_32 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_32) {
      const GGS_templateGetterCallInExpressionAST temp_33 = this ;
      test_32 = GGS_bool (ComparisonKind::notEqual, temp_33.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 152)).objectCompare (var_getterFormalArgumentTypeList_4037.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 152)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_32) {
        const GGS_templateGetterCallInExpressionAST temp_34 = this ;
        const GGS_templateGetterCallInExpressionAST temp_35 = this ;
        const GGS_templateGetterCallInExpressionAST temp_36 = this ;
        GenericArray <FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (temp_34.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_35.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 153)).add_operation (GGS_string ("' func of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 153)).add_operation (var_receiverTypeName_3459, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 153)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 153)).add_operation (var_getterFormalArgumentTypeList_4037.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 154)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 154)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 153)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 154)).add_operation (temp_36.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 155)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 155)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 154)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 155)), fixItArray37  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 153)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_32) {
      GGS__5B_semanticExpressionForGeneration_5D_ var_constructorEffectiveParameterList_7445 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_templateGetterCallInExpressionAST temp_38 = this ;
      UpEnumerator__5B_templateExpressionElementAST_5D_ enumerator_7510 (temp_38.readProperty_mExpressionList ()) ;
      UpEnumerator__5B_functionSignatureElement_5D_ enumerator_7537 (var_getterFormalArgumentTypeList_4037) ;
      while (enumerator_7510.hasCurrentObject () && enumerator_7537.hasCurrentObject ()) {
        GalgasBool test_39 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_39) {
          test_39 = GGS_bool (ComparisonKind::notEqual, enumerator_7537.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_7510.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_39) {
            GGS_string temp_40 ;
            const GalgasBool test_41 = GGS_bool (ComparisonKind::notEqual, enumerator_7537.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_41) {
              temp_40 = enumerator_7537.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 160)) ;
            }else if (GalgasBool::boolFalse == test_41) {
              temp_40 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_7670 = GGS_string ("!").add_operation (temp_40, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 160)) ;
            GenericArray <FixItDescription> fixItArray42 ;
            appendFixItActions (fixItArray42, EnumFixItKind::fixItReplace, var_s_7670) ;
            inCompiler->emitSemanticError (enumerator_7510.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_7670, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 161)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 161)), fixItArray42  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 161)) ;
          }
        }
        GGS_semanticExpressionForGeneration var_exp_8108 ;
        callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_7510.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_8108, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 163)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_7537.current (HERE).readProperty_mFormalArgumentType (), var_exp_8108.readProperty_mResultType (), enumerator_7510.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_8108, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 170)) ;
        }
        var_constructorEffectiveParameterList_7445.plusPlusAssignOperation (var_exp_8108  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 171)) ;
        enumerator_7510.gotoNextObject () ;
        enumerator_7537.gotoNextObject () ;
      }
      GalgasBool test_43 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_43) {
        const GGS_templateGetterCallInExpressionAST temp_44 = this ;
        test_43 = GGS_bool (ComparisonKind::notEqual, var_actualGetterName_4208.objectCompare (temp_44.readProperty_mGetterName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_43) {
          const GGS_templateGetterCallInExpressionAST temp_45 = this ;
          GenericArray <FixItDescription> fixItArray46 ;
          appendFixItActions (fixItArray46, EnumFixItKind::fixItReplace, var_actualGetterName_4208) ;
          inCompiler->emitSemanticError (temp_45.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete func"), fixItArray46  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 174)) ;
        }
      }
      const GGS_templateGetterCallInExpressionAST temp_47 = this ;
      outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_4154, temp_47.readProperty_mGetterName ().readProperty_location (), var_kind_4086, var_receiverExpression_3357, var_fieldList_4175, var_actualGetterName_4208, var_constructorEffectiveParameterList_7445, var_hasCompilerArgument_4105, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateClassFunctionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateClassFunctionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateClassFunctionAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_constructorType_9321 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 201)) ;
  GGS_classFunctionMap var_classFunctionMap_9453 = extensionGetter_definition (var_constructorType_9321, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 203)).readProperty_classFunctionMap () ;
  GGS_unifiedTypeMapEntry var_returnedType_9571 ;
  GGS_bool var_hasCompilerArgument_9596 ;
  GGS__5B_functionSignatureElement_5D_ var_classFuncFormalArgumentTypeList_9650 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_templateClassFunctionAST temp_2 = this ;
    const GGS_classFunctionMap_2E_element var_entry_9691 = var_classFunctionMap_9453.readSubscript__3F_ (temp_2.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_classFunctionMap_9453.readSubscript__3F_ (temp_2.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      var_classFuncFormalArgumentTypeList_9650 = var_entry_9691.readProperty_argumentTypeList () ;
      var_hasCompilerArgument_9596 = var_entry_9691.readProperty_hasCompilerArgument () ;
      var_returnedType_9571 = var_entry_9691.readProperty_returnedType () ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, var_classFunctionMap_9453.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 213)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_templateClassFunctionAST temp_4 = this ;
        const GGS_templateClassFunctionAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 215)).add_operation (GGS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 215)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 214)) ;
        var_classFuncFormalArgumentTypeList_9650.drop () ; // Release error dropped variable
        var_hasCompilerArgument_9596.drop () ; // Release error dropped variable
        var_returnedType_9571.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      const GGS_templateClassFunctionAST temp_7 = this ;
      const GGS_templateClassFunctionAST temp_8 = this ;
      const GGS_templateClassFunctionAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      appendFixItActions (fixItArray10, EnumFixItKind::fixItReplace, var_classFunctionMap_9453.getter_keyList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 221))) ;
      inCompiler->emitSemanticError (temp_7.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_8.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 219)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 219)).add_operation (temp_9.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 219)).add_operation (GGS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 219)), fixItArray10  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 218)) ;
      var_classFuncFormalArgumentTypeList_9650.drop () ; // Release error dropped variable
      var_hasCompilerArgument_9596.drop () ; // Release error dropped variable
      var_returnedType_9571.drop () ; // Release error dropped variable
    }
  }
  GGS__5B_unifiedTypeMapEntry_5D_ var_requiredTypes_10493 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_semanticExpressionForGeneration_5D_ var_classFunctionEffectiveParameterList_10554 ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_templateClassFunctionAST temp_12 = this ;
    test_11 = GGS_bool (ComparisonKind::notEqual, temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 227)).objectCompare (var_classFuncFormalArgumentTypeList_9650.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 227)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_templateClassFunctionAST temp_13 = this ;
      const GGS_templateClassFunctionAST temp_14 = this ;
      const GGS_templateClassFunctionAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_14.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).add_operation (GGS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).add_operation (extensionGetter_definition (var_constructorType_9321, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).add_operation (var_classFuncFormalArgumentTypeList_9650.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 230)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 230)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 230)).add_operation (temp_15.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 231)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 231)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 230)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 231)), fixItArray16  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 228)) ;
      var_classFunctionEffectiveParameterList_10554.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_11) {
    var_classFunctionEffectiveParameterList_10554 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
    const GGS_templateClassFunctionAST temp_17 = this ;
    UpEnumerator__5B_templateExpressionElementAST_5D_ enumerator_11140 (temp_17.readProperty_mExpressionList ()) ;
    UpEnumerator__5B_functionSignatureElement_5D_ enumerator_11167 (var_classFuncFormalArgumentTypeList_9650) ;
    while (enumerator_11140.hasCurrentObject () && enumerator_11167.hasCurrentObject ()) {
      {
      var_requiredTypes_10493.setter_append (enumerator_11167.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 236)) ;
      }
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::notEqual, enumerator_11167.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_11140.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GGS_string temp_19 ;
          const GalgasBool test_20 = GGS_bool (ComparisonKind::notEqual, enumerator_11167.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            temp_19 = enumerator_11167.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 238)) ;
          }else if (GalgasBool::boolFalse == test_20) {
            temp_19 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_11357 = GGS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 238)) ;
          GenericArray <FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, EnumFixItKind::fixItReplace, var_s_11357) ;
          inCompiler->emitSemanticError (enumerator_11140.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11357, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 239)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 239)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 239)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_exp_11778 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_11140.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_11778, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 241)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11167.current (HERE).readProperty_mFormalArgumentType (), var_exp_11778.readProperty_mResultType (), enumerator_11140.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_11778, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 248)) ;
      }
      var_classFunctionEffectiveParameterList_10554.plusPlusAssignOperation (var_exp_11778  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 249)) ;
      enumerator_11140.gotoNextObject () ;
      enumerator_11167.gotoNextObject () ;
    }
  }
  const GGS_templateClassFunctionAST temp_22 = this ;
  const GGS_templateClassFunctionAST temp_23 = this ;
  outArgument_outExpression = GGS_classFuncExpressionForGeneration::init_21__21__21__21__21__21__21_ (var_returnedType_9571, temp_22.readProperty_mClassFunctionName ().readProperty_location (), var_constructorType_9321, temp_23.readProperty_mClassFunctionName ().readProperty_string (), var_classFunctionEffectiveParameterList_10554, var_hasCompilerArgument_9596, var_requiredTypes_10493, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateFileWrapperTemplateCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFileWrapperTemplateCallAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFileWrapperTemplateCallAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mFileWrapperName ().readProperty_location (), GGS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 275)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateAndOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateAndOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_13718 ;
  const GGS_templateAndOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_13718, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 290)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_13962 ;
  const GGS_templateAndOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_13962, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 298)) ;
  {
  const GGS_templateAndOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_13718.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 307)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("templateAnalysis.galgas4", 307)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 307)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_13718, var_rightExpression_13962, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 306)) ;
  }
  const GGS_templateAndOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_13718.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_13718, GGS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("templateAnalysis.galgas4", 318)), var_rightExpression_13962, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateOrOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateOrOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_15061 ;
  const GGS_templateOrOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_15061, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 333)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_15305 ;
  const GGS_templateOrOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_15305, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 341)) ;
  {
  const GGS_templateOrOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_15061.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 350)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("templateAnalysis.galgas4", 350)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 350)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_15061, var_rightExpression_15305, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 349)) ;
  }
  const GGS_templateOrOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_15061.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_15061, GGS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("templateAnalysis.galgas4", 361)), var_rightExpression_15305, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateXorOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateXorOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_16404 ;
  const GGS_templateXorOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_16404, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 376)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_16649 ;
  const GGS_templateXorOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_16649, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 384)) ;
  {
  const GGS_templateXorOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16404.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 393)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("templateAnalysis.galgas4", 393)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 393)), GGS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16404, var_rightExpression_16649, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 392)) ;
  }
  const GGS_templateXorOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_16404.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_16404, GGS_binaryOperator::class_func_operator_5F_xor (SOURCE_FILE ("templateAnalysis.galgas4", 404)), var_rightExpression_16649, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateTrueBoolAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateTrueBoolAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                  GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                  const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                  GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                  GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateTrueBoolAST temp_0 = this ;
  outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateFalseBoolAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFalseBoolAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                   GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                   const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFalseBoolAST temp_0 = this ;
  outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLiteralStringExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralStringExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_18570 = GGS_string::makeEmptyString () ;
  const GGS_templateLiteralStringExpressionAST temp_0 = this ;
  UpEnumerator__5B_string_5D_ enumerator_18597 (temp_0.readProperty_mLiteralStringList ()) ;
  while (enumerator_18597.hasCurrentObject ()) {
    var_s_18570.plusAssignOperation(enumerator_18597.current (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 444)) ;
    enumerator_18597.gotoNextObject () ;
  }
  const GGS_templateLiteralStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalStringExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_18570, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLiteralUIntExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralUIntExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralUIntExpressionAST temp_0 = this ;
  const GGS_templateLiteralUIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_bigint (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLiteralCharExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralCharExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralCharExpressionAST temp_0 = this ;
  const GGS_templateLiteralCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalCharExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mLiteralChar ().readProperty_location (), temp_1.readProperty_mLiteralChar ().readProperty_char (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLiteralDoubleExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralDoubleExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralDoubleExpressionAST temp_0 = this ;
  const GGS_templateLiteralDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalDoubleExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mLiteralDouble ().readProperty_location (), temp_1.readProperty_mLiteralDouble ().readProperty_f_36__34_ (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateNotOperatorAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateNotOperatorAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_21101 ;
  const GGS_templateNotOperatorAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_21101, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 505)) ;
  GGS_unifiedTypeMapEntry var_type_21177 = var_expression_21101.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_21177, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 514)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("templateAnalysis.galgas4", 514)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 514)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 514)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateNotOperatorAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_21177, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 516)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 516)).add_operation (GGS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 516)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 515)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateNotOperatorAST temp_4 = this ;
    outArgument_outExpression = GGS_notExpressionForGeneration::init_21__21__21_ (var_type_21177, temp_4.readProperty_mOperatorLocation (), var_expression_21101, inCompiler COMMA_HERE) ;
  }
}

