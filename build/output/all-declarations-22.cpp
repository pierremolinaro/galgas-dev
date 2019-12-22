#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-22.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@boolsetTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_boolsetTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetTypeForGeneration * object = (const cPtr_boolsetTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 239)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 240)), object->mProperty_mFlagList COMMA_SOURCE_FILE ("type-boolset.galgas", 238))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 244)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 245)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 246)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 247)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 248)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 249)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 250)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 251)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 252)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 253)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 254)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 255)) COMMA_SOURCE_FILE ("type-boolset.galgas", 243))), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 243)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_boolsetTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_boolsetTypeForGeneration.mSlotID,
                                              extensionMethod_boolsetTypeForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_boolsetTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_boolsetTypeForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@boolsetTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_boolsetTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetTypeForGeneration * object = (const cPtr_boolsetTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 266)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 268)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 269)), object->mProperty_mFlagList, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 271)).left_shift_operation (object->mProperty_mFlagList.getter_length (SOURCE_FILE ("type-boolset.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 271)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 271)) COMMA_SOURCE_FILE ("type-boolset.galgas", 267))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_boolsetTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_boolsetTypeForGeneration.mSlotID,
                                                     extensionMethod_boolsetTypeForGeneration_appendSpecificImplementation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_boolsetTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_boolsetTypeForGeneration_appendSpecificImplementation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@classDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_classDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_lstring var_key_3328 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mClassTypeName.getter_string (SOURCE_FILE ("type-class.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 99)), object->mProperty_mClassTypeName.getter_location (SOURCE_FILE ("type-class.galgas", 99))  COMMA_SOURCE_FILE ("type-class.galgas", 99)) ;
  {
  const GALGAS_classDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3328, temp_0, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 100)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mSuperClassName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3328, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 102)), object->mProperty_mSuperClassName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 102)) COMMA_SOURCE_FILE ("type-class.galgas", 102)) ;
      }
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_3636 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_3636.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3328, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3636.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 105)), object->mProperty_mSuperClassName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 105)) COMMA_SOURCE_FILE ("type-class.galgas", 105)) ;
    }
    enumerator_3636.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_classDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                                extensionMethod_classDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_classDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_classDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@classDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_classDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_getterMap var_getterMap_4506 ;
  GALGAS_setterMap var_setterMap_4529 ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4568 ;
  GALGAS_typedPropertyList var_inheritedTypedAttributeList_4617 ;
  GALGAS_propertyMap var_attributeMap_4645 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 123)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_superClassIndex_4714 ;
  GALGAS_bool var_generateHeaderInSeparateFile_4751 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 127)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_4714 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 128)) ;
      {
      routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4506, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 129)) ;
      }
      var_setterMap_4529 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 130)) ;
      var_instanceMethodMap_4568 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 131)) ;
      var_inheritedTypedAttributeList_4617 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 132)) ;
      var_attributeMap_4645 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 133)) ;
      var_generateHeaderInSeparateFile_4751 = GALGAS_bool (false) ;
      cEnumerator_lstringlist enumerator_5093 (object->mProperty_mClassFeatureList, kENUMERATION_UP) ;
      while (enumerator_5093.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsEqual, enumerator_5093.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 136)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_generateHeaderInSeparateFile_4751 = GALGAS_bool (true) ;
          }
        }
        enumerator_5093.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mSuperClassName, var_superClassIndex_4714 COMMA_SOURCE_FILE ("type-class.galgas", 141)) ;
    }
    GALGAS_typeKindEnum var_typeKindEnum_5356 ;
    GALGAS_getterMap var_inheritedGetterMap_5390 ;
    GALGAS_setterMap var_inheritedSetterMap_5424 ;
    GALGAS_instanceMethodMap var_inheritedMethodMap_5466 ;
    GALGAS_bool joker_5539_3 ; // Joker input parameter
    GALGAS_bool joker_5539_2 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_5539_1 ; // Joker input parameter
    GALGAS_bool joker_5569 ; // Joker input parameter
    GALGAS_typedPropertyList joker_5633_2 ; // Joker input parameter
    GALGAS_constructorMap joker_5633_1 ; // Joker input parameter
    GALGAS_classMethodMap joker_5721_8 ; // Joker input parameter
    GALGAS_enumerationDescriptorList joker_5721_7 ; // Joker input parameter
    GALGAS_operators joker_5721_6 ; // Joker input parameter
    GALGAS_functionSignature joker_5721_5 ; // Joker input parameter
    GALGAS_constantIndexMap joker_5721_4 ; // Joker input parameter
    GALGAS_enumConstantList joker_5721_3 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_5721_2 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_5721_1 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_5767_4 ; // Joker input parameter
    GALGAS_string joker_5767_3 ; // Joker input parameter
    GALGAS_string joker_5767_2 ; // Joker input parameter
    GALGAS_headerKind joker_5767_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mSuperClassName, joker_5539_3, joker_5539_2, joker_5539_1, var_typeKindEnum_5356, joker_5569, var_inheritedTypedAttributeList_4617, var_attributeMap_4645, joker_5633_2, joker_5633_1, var_inheritedGetterMap_5390, var_inheritedSetterMap_5424, var_inheritedMethodMap_5466, joker_5721_8, joker_5721_7, joker_5721_6, joker_5721_5, joker_5721_4, joker_5721_3, joker_5721_2, joker_5721_1, var_generateHeaderInSeparateFile_4751, joker_5767_4, joker_5767_3, joker_5767_2, joker_5767_1, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 146)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_typeKindEnum_5356.getter_isClassType (SOURCE_FILE ("type-class.galgas", 162)).operator_not (SOURCE_FILE ("type-class.galgas", 162)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mSuperClassName.getter_location (SOURCE_FILE ("type-class.galgas", 163)), GALGAS_string ("the @").add_operation (object->mProperty_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 163)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 163)), fixItArray3  COMMA_SOURCE_FILE ("type-class.galgas", 163)) ;
      }
    }
    var_setterMap_4529 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 166)) ;
    cEnumerator_setterMap enumerator_6006 (var_inheritedSetterMap_5424, kENUMERATION_UP) ;
    while (enumerator_6006.hasCurrentObject ()) {
      {
      var_setterMap_4529.setter_insertKey (enumerator_6006.current_lkey (HERE), enumerator_6006.current_mKind (HERE), enumerator_6006.current_mParameterList (HERE), enumerator_6006.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 173)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 168)) ;
      }
      enumerator_6006.gotoNextObject () ;
    }
    var_getterMap_4506 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 178)) ;
    cEnumerator_getterMap enumerator_6297 (var_inheritedGetterMap_5390, kENUMERATION_UP) ;
    while (enumerator_6297.hasCurrentObject ()) {
      {
      var_getterMap_4506.setter_insertKey (enumerator_6297.current_lkey (HERE), enumerator_6297.current_mKind (HERE), enumerator_6297.current_mArgumentTypeList (HERE), enumerator_6297.current_mDeclarationLocation (HERE), enumerator_6297.current_mHasCompilerArgument (HERE), enumerator_6297.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 187)), enumerator_6297.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 180)) ;
      }
      enumerator_6297.gotoNextObject () ;
    }
    var_instanceMethodMap_4568 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 192)) ;
    cEnumerator_instanceMethodMap enumerator_6627 (var_inheritedMethodMap_5466, kENUMERATION_UP) ;
    while (enumerator_6627.hasCurrentObject ()) {
      {
      var_instanceMethodMap_4568.setter_insertKey (enumerator_6627.current_lkey (HERE), enumerator_6627.current_mKind (HERE), enumerator_6627.current_mParameterList (HERE), enumerator_6627.current_mDeclarationLocation (HERE), enumerator_6627.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 200)), enumerator_6627.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 194)) ;
      }
      enumerator_6627.gotoNextObject () ;
    }
  }
  GALGAS_functionSignature var_constructorAttributeTypeList_6953 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 206)) ;
  cEnumerator_typedPropertyList enumerator_6998 (var_inheritedTypedAttributeList_4617, kENUMERATION_UP) ;
  while (enumerator_6998.hasCurrentObject ()) {
    GALGAS_lstring temp_4 ;
    const enumGalgasBool test_5 = enumerator_6998.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_5) {
      temp_4 = enumerator_6998.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_5) {
      temp_4 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 209)) ;
    }
    var_constructorAttributeTypeList_6953.addAssign_operation (temp_4, enumerator_6998.current_mPropertyTypeProxy (HERE), enumerator_6998.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 208)) ;
    enumerator_6998.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_7187 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_7187.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_7299 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7187.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7299 COMMA_SOURCE_FILE ("type-class.galgas", 214)) ;
    }
    GALGAS_bool var_hasSelector_7320 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7366 (enumerator_7187.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_7366.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsEqual, enumerator_7366.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = var_hasSelector_7320.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              fixItArray8.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_7366.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 219)), GALGAS_string ("duplicated attribute"), fixItArray8  COMMA_SOURCE_FILE ("type-class.galgas", 219)) ;
            }
          }
          var_hasSelector_7320 = GALGAS_bool (true) ;
        }
      }
      enumerator_7366.gotoNextObject () ;
    }
    GALGAS_lstring temp_9 ;
    const enumGalgasBool test_10 = var_hasSelector_7320.boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = enumerator_7187.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 225)) ;
    }
    var_constructorAttributeTypeList_6953.addAssign_operation (temp_9, var_attributeTypeIndex_7299, enumerator_7187.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 224)) ;
    {
    var_attributeMap_4645.setter_insertKey (enumerator_7187.current_mPropertyName (HERE), enumerator_7187.current_mIsPublic (HERE), var_attributeTypeIndex_7299, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 228)) ;
    }
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_getterMap_4506.getter_hasKey (enumerator_7187.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 233)) COMMA_SOURCE_FILE ("type-class.galgas", 233)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_7187.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 234)), GALGAS_string ("'").add_operation (enumerator_7187.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 234)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 234)), fixItArray12  COMMA_SOURCE_FILE ("type-class.galgas", 234)) ;
      }
    }
    enumerator_7187.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_classIndex_8154 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mClassTypeName, var_classIndex_8154 COMMA_SOURCE_FILE ("type-class.galgas", 238)) ;
  }
  GALGAS_constructorMap var_constructorMap_8209 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 244)) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = object->mProperty_mIsAbstract.operator_not (SOURCE_FILE ("type-class.galgas", 245)).boolEnum () ;
    if (kBoolTrue == test_13) {
      {
      var_constructorMap_8209.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 247))  COMMA_SOURCE_FILE ("type-class.galgas", 247)), var_constructorAttributeTypeList_6953, GALGAS_bool (false), var_classIndex_8154, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 246)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedAttributeList_8474 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 254)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList_8522 = var_inheritedTypedAttributeList_4617 ;
  cEnumerator_propertyInCollectionListAST enumerator_8578 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_8578.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_8690 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8578.current_mPropertyTypeName (HERE), var_attributeTypeIndex_8690 COMMA_SOURCE_FILE ("type-class.galgas", 257)) ;
    }
    GALGAS_bool var_hasSetter_8709 = enumerator_8578.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasGetter_8739 = enumerator_8578.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasSelector_8771 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_8808 (enumerator_8578.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_8808.hasCurrentObject ()) {
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = GALGAS_bool (kIsEqual, enumerator_8808.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 262)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_14) {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticWarning (enumerator_8808.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 263)), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray15  COMMA_SOURCE_FILE ("type-class.galgas", 263)) ;
        }
      }
      if (kBoolFalse == test_14) {
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GALGAS_bool (kIsEqual, enumerator_8808.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 265)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_16) {
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticWarning (enumerator_8808.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 266)), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray17  COMMA_SOURCE_FILE ("type-class.galgas", 266)) ;
          }
        }
        if (kBoolFalse == test_16) {
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            test_18 = GALGAS_bool (kIsEqual, enumerator_8808.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 268)).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_18) {
              var_hasSelector_8771 = GALGAS_bool (true) ;
            }
          }
        }
      }
      enumerator_8808.gotoNextObject () ;
    }
    var_currentClassTypedAttributeList_8474.addAssign_operation (var_attributeTypeIndex_8690, enumerator_8578.current_mPropertyName (HERE), var_hasSetter_8709, var_hasGetter_8739, var_hasSelector_8771  COMMA_SOURCE_FILE ("type-class.galgas", 272)) ;
    var_allTypedAttributeList_8522.addAssign_operation (var_attributeTypeIndex_8690, enumerator_8578.current_mPropertyName (HERE), var_hasSetter_8709, var_hasGetter_8739, var_hasSelector_8771  COMMA_SOURCE_FILE ("type-class.galgas", 273)) ;
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = var_hasGetter_8739.boolEnum () ;
      if (kBoolTrue == test_19) {
        {
        var_getterMap_4506.setter_insertKey (enumerator_8578.current_mPropertyName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 277)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 278)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 279)), GALGAS_bool (false), var_attributeTypeIndex_8690, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-class.galgas", 282)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 275)) ;
        }
      }
    }
    enumerator_8578.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_9843 (var_currentClassTypedAttributeList_8474, kENUMERATION_UP) ;
  while (enumerator_9843.hasCurrentObject ()) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = enumerator_9843.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_20) {
        {
        GALGAS_formalParameterSignature temp_21 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 293)) ;
        temp_21.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 293)), enumerator_9843.current_mPropertyTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-class.galgas", 293)), enumerator_9843.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 293)) ;
        var_setterMap_4529.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9843.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 291)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-class.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 291)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 291))  COMMA_SOURCE_FILE ("type-class.galgas", 291)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 292)), temp_21, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-class.galgas", 295)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 290)) ;
        }
      }
    }
    enumerator_9843.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mClassTypeName, var_getterMap_4506, var_setterMap_4529, var_instanceMethodMap_4568, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 301)) ;
  }
  GALGAS_string var_defaultConstructorName_10629 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_superClassIndex_4714.getter_isNull (SOURCE_FILE ("type-class.galgas", 313)).boolEnum () ;
    if (kBoolTrue == test_22) {
      var_defaultConstructorName_10629 = GALGAS_string ("default") ;
    }
  }
  if (kBoolFalse == test_22) {
    var_defaultConstructorName_10629 = var_superClassIndex_4714.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 316)) ;
  }
  cEnumerator_typedPropertyList enumerator_10830 (var_currentClassTypedAttributeList_8474, kENUMERATION_UP) ;
  bool bool_23 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_10629.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_10830.hasCurrentObject () && bool_23) {
    while (enumerator_10830.hasCurrentObject () && bool_23) {
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = GALGAS_bool (kIsEqual, enumerator_10830.current_mPropertyTypeProxy (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 319)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_10830.current_mPropertyTypeProxy (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 319)).operator_not (SOURCE_FILE ("type-class.galgas", 319)) COMMA_SOURCE_FILE ("type-class.galgas", 319)).boolEnum () ;
        if (kBoolTrue == test_24) {
          var_defaultConstructorName_10629 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_10830.gotoNextObject () ;
      if (enumerator_10830.hasCurrentObject ()) {
        bool_23 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_10629.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mClassTypeName, object->mProperty_mIsPredefined, object->mProperty_mIsAbstract.operator_not (SOURCE_FILE ("type-class.galgas", 327)), var_superClassIndex_4714, GALGAS_typeKindEnum::constructor_classType (object->mProperty_mIsShared  COMMA_SOURCE_FILE ("type-class.galgas", 329)), GALGAS_bool (false), var_allTypedAttributeList_8522, var_attributeMap_4645, var_currentClassTypedAttributeList_8474, var_constructorMap_8209, var_getterMap_4506, var_setterMap_4529, var_instanceMethodMap_4568, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 338)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 339)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-class.galgas", 340)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 341)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 342)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 343)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 344)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 345)), var_generateHeaderInSeparateFile_4751, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 347)), var_defaultConstructorName_10629, GALGAS_string ("class-").add_operation (object->mProperty_mClassTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-class.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 349)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-class.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 324)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_classDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                               extensionMethod_classDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_classDeclarationAST_enterInSemanticContext (defineExtensionMethod_classDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@classDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_classDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_lstring var_classTypeNameForUsefulness_12550 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mClassTypeName, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 367)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_12550, var_classTypeNameForUsefulness_12550, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 368)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 369)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_lstring var_superClassNameForUsefulness_12770 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mSuperClassName, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 370)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_12550, var_superClassNameForUsefulness_12770 COMMA_SOURCE_FILE ("type-class.galgas", 371)) ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_12978 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 374)) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mSuperClassName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 377)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mSuperClassName, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 378)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_superClassProxy_13102 = temp_1 ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, var_superClassProxy_13102.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 383)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_bool var_superClassIsShared_13535 ;
      var_superClassProxy_13102.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 384)).method_classType (var_superClassIsShared_13535, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 384)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_superClassIsShared_13535.operator_and (object->mProperty_mIsShared.operator_not (SOURCE_FILE ("type-class.galgas", 385)) COMMA_SOURCE_FILE ("type-class.galgas", 385)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mClassTypeName.getter_location (SOURCE_FILE ("type-class.galgas", 386)), GALGAS_string ("this class should be declared with 'shared' qualifier, as its super class"), fixItArray5  COMMA_SOURCE_FILE ("type-class.galgas", 386)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = var_superClassIsShared_13535.operator_not (SOURCE_FILE ("type-class.galgas", 387)).operator_and (object->mProperty_mIsShared COMMA_SOURCE_FILE ("type-class.galgas", 387)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (object->mProperty_mClassTypeName.getter_location (SOURCE_FILE ("type-class.galgas", 388)), GALGAS_string ("this class should be declared with no 'shared' qualifier, as its super class"), fixItArray7  COMMA_SOURCE_FILE ("type-class.galgas", 388)) ;
          }
        }
      }
    }
  }
  GALGAS_typedPropertyList var_allAttributeList_14066 ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsEqual, var_superClassProxy_13102.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 395)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_allAttributeList_14066 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 396)) ;
      GALGAS_bool var_generatedInSeparateFileFeature_14168 = GALGAS_bool (false) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsStrictSup, object->mProperty_mClassFeatureList.getter_length (SOURCE_FILE ("type-class.galgas", 398)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_9) {
          cEnumerator_lstringlist enumerator_14253 (object->mProperty_mClassFeatureList, kENUMERATION_UP) ;
          while (enumerator_14253.hasCurrentObject ()) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, enumerator_14253.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 400)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
              if (kBoolTrue == test_10) {
                enumGalgasBool test_11 = kBoolTrue ;
                if (kBoolTrue == test_11) {
                  test_11 = var_generatedInSeparateFileFeature_14168.boolEnum () ;
                  if (kBoolTrue == test_11) {
                    TC_Array <C_FixItDescription> fixItArray12 ;
                    inCompiler->emitSemanticError (enumerator_14253.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 402)), GALGAS_string ("the 'generatedInSeparateFile' is already named"), fixItArray12  COMMA_SOURCE_FILE ("type-class.galgas", 402)) ;
                  }
                }
                var_generatedInSeparateFileFeature_14168 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_10) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (enumerator_14253.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 406)), GALGAS_string ("only the 'generatedInSeparateFile' attribute is allowed here"), fixItArray13  COMMA_SOURCE_FILE ("type-class.galgas", 406)) ;
            }
            enumerator_14253.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_8) {
    var_allAttributeList_14066 = var_superClassProxy_13102.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 411)) ;
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (kIsStrictSup, object->mProperty_mClassFeatureList.getter_length (SOURCE_FILE ("type-class.galgas", 412)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_14) {
        cEnumerator_lstringlist enumerator_14779 (object->mProperty_mClassFeatureList, kENUMERATION_UP) ;
        while (enumerator_14779.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (enumerator_14779.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 414)), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray15  COMMA_SOURCE_FILE ("type-class.galgas", 414)) ;
          enumerator_14779.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_14953 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 419)) ;
  GALGAS_propertyIndexMap var_attributeMap_14991 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 420)) ;
  cEnumerator_propertyInCollectionListAST enumerator_15022 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_15022.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_15063 = function_typeNameForUsefulEntitiesGraph (enumerator_15022.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 422)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_12550, var_propertyTypeNameForUsefulness_15063 COMMA_SOURCE_FILE ("type-class.galgas", 423)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_15224 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_15022.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 424)) ;
    GALGAS_bool var_hasSetter_15325 = enumerator_15022.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasGetter_15355 = enumerator_15022.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasSelector_15387 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_15424 (enumerator_15022.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_15424.hasCurrentObject ()) {
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = GALGAS_bool (kIsEqual, enumerator_15424.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 429)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_16) {
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticWarning (enumerator_15424.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 430)), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray17  COMMA_SOURCE_FILE ("type-class.galgas", 430)) ;
        }
      }
      if (kBoolFalse == test_16) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsEqual, enumerator_15424.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 435)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_18) {
            TC_Array <C_FixItDescription> fixItArray19 ;
            inCompiler->emitSemanticWarning (enumerator_15424.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 436)), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray19  COMMA_SOURCE_FILE ("type-class.galgas", 436)) ;
          }
        }
        if (kBoolFalse == test_18) {
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            test_20 = GALGAS_bool (kIsEqual, enumerator_15424.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 441)).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_20) {
              enumGalgasBool test_21 = kBoolTrue ;
              if (kBoolTrue == test_21) {
                test_21 = var_hasSelector_15387.boolEnum () ;
                if (kBoolTrue == test_21) {
                  TC_Array <C_FixItDescription> fixItArray22 ;
                  inCompiler->emitSemanticError (enumerator_15424.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 443)), GALGAS_string ("the '%selector' attribute is already named"), fixItArray22  COMMA_SOURCE_FILE ("type-class.galgas", 443)) ;
                }
              }
              var_hasSelector_15387 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_20) {
            TC_Array <C_FixItDescription> fixItArray23 ;
            GALGAS_stringlist temp_24 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 449)) ;
            temp_24.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-class.galgas", 449)) ;
            appendFixItActions (fixItArray23, kFixItReplace, temp_24) ;
            inCompiler->emitSemanticError (enumerator_15424.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 447)), GALGAS_string ("only '%selector' is allowed here"), fixItArray23  COMMA_SOURCE_FILE ("type-class.galgas", 447)) ;
          }
        }
      }
      enumerator_15424.gotoNextObject () ;
    }
    var_typedAttributeList_14953.addAssign_operation (var_t_15224, enumerator_15022.current_mPropertyName (HERE), var_hasSetter_15325, var_hasGetter_15355, var_hasSelector_15387  COMMA_SOURCE_FILE ("type-class.galgas", 453)) ;
    var_allAttributeList_14066.addAssign_operation (var_t_15224, enumerator_15022.current_mPropertyName (HERE), var_hasSetter_15325, var_hasGetter_15355, var_hasSelector_15387  COMMA_SOURCE_FILE ("type-class.galgas", 459)) ;
    {
    var_attributeMap_14991.setter_insertKey (enumerator_15022.current_mPropertyName (HERE), var_t_15224, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 465)) ;
    }
    enumerator_15022.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (object->mProperty_mClassTypeName.getter_string (SOURCE_FILE ("type-class.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 469)), GALGAS_classTypeForGeneration::constructor_new (var_selfType_12978, object->mProperty_mIsAbstract, object->mProperty_mIsShared, var_superClassProxy_13102, var_allAttributeList_14066, var_typedAttributeList_14953, var_selfType_12978.getter_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 477))  COMMA_SOURCE_FILE ("type-class.galgas", 470))  COMMA_SOURCE_FILE ("type-class.galgas", 468)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_classDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                         extensionMethod_classDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_classDeclarationAST_semanticAnalysis (defineExtensionMethod_classDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@classTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_classTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 500)).operator_not (SOURCE_FILE ("type-class.galgas", 500)).boolEnum () ;
    if (kBoolTrue == test_0) {
      extensionMethod_addHeaderFileName (object->mProperty_mSuperClass, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 501)) ;
    }
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 507)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 507)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 505)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 506)), temp_1, object->mProperty_mIsAbstract, GALGAS_bool (kIsNotEqual, object->mProperty_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 509)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 504))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 512)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 513)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 514)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 515)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 516)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 517)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 518)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 519)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 520)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 521)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 522)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 523)) COMMA_SOURCE_FILE ("type-class.galgas", 511))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 511)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_classTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                              extensionMethod_classTypeForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_classTypeForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@classTypeForGeneration appendDeclaration2'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_classTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          const GALGAS_string constinArgument_inOutputDirectory,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_19011 (object->mProperty_mTypedAttributeList, kENUMERATION_UP) ;
  while (enumerator_19011.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_19011.current_mPropertyTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 535)) ;
    enumerator_19011.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mGenerateHeaderInSeparateFile.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string temp_1 ;
      const enumGalgasBool test_2 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 542)).boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_2) {
        temp_1 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 542)) ;
      }
      GALGAS_string var_part_31__19118 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 540)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 541)), temp_1, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 539))) ;
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 550)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_4) {
        temp_3 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 550)) ;
      }
      GALGAS_string var_part_32__19430 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 548)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 549)), temp_3, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 547))) ;
      GALGAS_string var_headerFileName_19751 = GALGAS_string ("separateHeaderFor_").add_operation (object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 555)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 555)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 557)), var_headerFileName_19751, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), var_part_31__19118, GALGAS_string ("\n"
        "\n"), var_part_32__19430, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 556)) ;
      }
      outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_19751, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 567)).add_operation (GALGAS_string ("\"\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 567)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string temp_5 ;
    const enumGalgasBool test_6 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 572)).boolEnum () ;
    if (kBoolTrue == test_6) {
      temp_5 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_6) {
      temp_5 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 572)) ;
    }
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 570)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 571)), temp_5, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 569))) ;
    GALGAS_string temp_7 ;
    const enumGalgasBool test_8 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 580)).boolEnum () ;
    if (kBoolTrue == test_8) {
      temp_7 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_8) {
      temp_7 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 580)) ;
    }
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 578)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 579)), temp_7, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 577))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 577)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_classTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                              extensionMethod_classTypeForGeneration_appendDeclaration_32_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_classTypeForGeneration_appendDeclaration_32_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@classTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_classTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 595)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 599)).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 599)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 597)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 598)), temp_0, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mAllTypedAttributeList.getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint ((uint32_t) 0U), object->mProperty_mAllTypedAttributeList.getter_length (SOURCE_FILE ("type-class.galgas", 602)).substract_operation (object->mProperty_mTypedAttributeList.getter_length (SOURCE_FILE ("type-class.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 602))  COMMA_SOURCE_FILE ("type-class.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 602)), object->mProperty_mIsAbstract, object->mProperty_mIsShared, GALGAS_bool (kIsNotEqual, object->mProperty_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 605)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 596))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_classTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                                     extensionMethod_classTypeForGeneration_appendSpecificImplementation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_classTypeForGeneration_appendSpecificImplementation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@enumDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_lstring var_key_2958 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mEnumTypeName.getter_string (SOURCE_FILE ("type-enum.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 74)), object->mProperty_mEnumTypeName.getter_location (SOURCE_FILE ("type-enum.galgas", 74))  COMMA_SOURCE_FILE ("type-enum.galgas", 74)) ;
  {
  const GALGAS_enumDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2958, temp_0, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 75)) ;
  }
  GALGAS_bool var_circularReference_3192 = GALGAS_bool (true) ;
  cEnumerator_enumConstantList enumerator_3225 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  bool bool_1 = var_circularReference_3192.isValidAndTrue () ;
  if (enumerator_3225.hasCurrentObject () && bool_1) {
    while (enumerator_3225.hasCurrentObject () && bool_1) {
      GALGAS_bool var_namesCurrentType_3277 = GALGAS_bool (false) ;
      cEnumerator__32_lstringlist enumerator_3330 (enumerator_3225.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
      bool bool_2 = var_namesCurrentType_3277.operator_not (SOURCE_FILE ("type-enum.galgas", 80)).isValidAndTrue () ;
      if (enumerator_3330.hasCurrentObject () && bool_2) {
        while (enumerator_3330.hasCurrentObject () && bool_2) {
          GALGAS_lstring var_propertyKey_3382 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3330.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("type-enum.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 81)), enumerator_3330.current_mValue_30_ (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 81))  COMMA_SOURCE_FILE ("type-enum.galgas", 81)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsEqual, var_propertyKey_3382.getter_string (HERE).objectCompare (var_key_2958.getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_3) {
              var_namesCurrentType_3277 = GALGAS_bool (true) ;
            }
          }
          enumerator_3330.gotoNextObject () ;
          if (enumerator_3330.hasCurrentObject ()) {
            bool_2 = var_namesCurrentType_3277.operator_not (SOURCE_FILE ("type-enum.galgas", 80)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_namesCurrentType_3277.operator_not (SOURCE_FILE ("type-enum.galgas", 86)).boolEnum () ;
        if (kBoolTrue == test_4) {
          var_circularReference_3192 = GALGAS_bool (false) ;
        }
      }
      enumerator_3225.gotoNextObject () ;
      if (enumerator_3225.hasCurrentObject ()) {
        bool_1 = var_circularReference_3192.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_circularReference_3192.boolEnum () ;
    if (kBoolTrue == test_5) {
      cEnumerator_enumConstantList enumerator_3732 (object->mProperty_mConstantList, kENUMERATION_UP) ;
      while (enumerator_3732.hasCurrentObject ()) {
        cEnumerator__32_lstringlist enumerator_3782 (enumerator_3732.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_3782.hasCurrentObject ()) {
          GALGAS_lstring var_propertyKey_3809 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3782.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("type-enum.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 94)), enumerator_3782.current_mValue_30_ (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 94))  COMMA_SOURCE_FILE ("type-enum.galgas", 94)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            GALGAS_bool test_7 = GALGAS_bool (kIsNotEqual, var_propertyKey_3809.getter_string (HERE).objectCompare (var_key_2958.getter_string (HERE))) ;
            if (kBoolTrue != test_7.boolEnum ()) {
              test_7 = var_circularReference_3192 ;
            }
            test_6 = test_7.boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2958, var_propertyKey_3809 COMMA_SOURCE_FILE ("type-enum.galgas", 96)) ;
              }
            }
          }
          enumerator_3782.gotoNextObject () ;
        }
        enumerator_3732.gotoNextObject () ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                                extensionMethod_enumDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_enumDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@enumDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_constructorMap var_constructorMap_4796 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 113)) ;
  GALGAS_setterMap var_setterMap_4824 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 114)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4868 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 115)) ;
  GALGAS_classMethodMap var_classMethodMap_4906 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 116)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_enumTypeProxy_5037 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mEnumTypeName, var_enumTypeProxy_5037 COMMA_SOURCE_FILE ("type-enum.galgas", 118)) ;
  }
  GALGAS_constantIndexMap var_constantMap_5088 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 120)) ;
  GALGAS_bool var_hasAssociatedValues_5121 = GALGAS_bool (false) ;
  cEnumerator_enumConstantList enumerator_5155 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  while (enumerator_5155.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList_5206 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 123)) ;
    GALGAS_functionSignature var_argumentTypeList_5251 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 124)) ;
    cEnumerator__32_lstringlist enumerator_5322 (enumerator_5155.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5322.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy_5428 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5322.current_mValue_30_ (HERE), var_associatedTypeProxy_5428 COMMA_SOURCE_FILE ("type-enum.galgas", 126)) ;
      }
      var_argumentTypeList_5251.addAssign_operation (enumerator_5322.current_mValue_31_ (HERE), var_associatedTypeProxy_5428, enumerator_5322.current_mValue_30_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 127)) ;
      var_associatedTypeList_5206.addAssign_operation (var_associatedTypeProxy_5428  COMMA_SOURCE_FILE ("type-enum.galgas", 128)) ;
      var_hasAssociatedValues_5121 = GALGAS_bool (true) ;
      enumerator_5322.gotoNextObject () ;
    }
    {
    var_constantMap_5088.setter_insertKey (enumerator_5155.current_mConstantName (HERE), var_constantMap_5088.getter_count (SOURCE_FILE ("type-enum.galgas", 131)), var_associatedTypeList_5206, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 131)) ;
    }
    {
    var_constructorMap_4796.setter_insertOrReplace (enumerator_5155.current_mConstantName (HERE), var_argumentTypeList_5251, GALGAS_bool (false), var_enumTypeProxy_5037 COMMA_SOURCE_FILE ("type-enum.galgas", 132)) ;
    }
    enumerator_5155.gotoNextObject () ;
  }
  cEnumerator_enumConstantList enumerator_5851 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  while (enumerator_5851.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictSup, enumerator_5851.current_mAssociatedValueDefinitionList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 141)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_unifiedTypeMapProxyList var_associatedTypeList_5960 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 142)) ;
        GALGAS_formalParameterSignature var_argumentTypeList_6014 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 143)) ;
        cEnumerator__32_lstringlist enumerator_6087 (enumerator_5851.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_6087.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy_6195 ;
          {
          GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_6087.current_mValue_30_ (HERE), var_associatedTypeProxy_6195 COMMA_SOURCE_FILE ("type-enum.galgas", 145)) ;
          }
          var_argumentTypeList_6014.addAssign_operation (enumerator_6087.current_mValue_31_ (HERE), var_associatedTypeProxy_6195, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-enum.galgas", 146)), enumerator_6087.current_mValue_30_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 146)) ;
          var_associatedTypeList_5960.addAssign_operation (var_associatedTypeProxy_6195  COMMA_SOURCE_FILE ("type-enum.galgas", 147)) ;
          var_hasAssociatedValues_5121 = GALGAS_bool (true) ;
          enumerator_6087.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_4868.setter_insertKey (enumerator_5851.current_mConstantName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-enum.galgas", 152)), var_argumentTypeList_6014, enumerator_5851.current_mConstantName (HERE).getter_location (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-enum.galgas", 156)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 150)) ;
        }
      }
    }
    enumerator_5851.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap_6699 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_6699, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 162)) ;
  }
  cEnumerator_enumConstantList enumerator_6726 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  while (enumerator_6726.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument (var_getterMap_6699, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("is").add_operation (enumerator_6726.current_mConstantName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-enum.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 167)), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 164)) ;
    }
    enumerator_6726.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mEnumTypeName, var_getterMap_6699, var_setterMap_4824, var_instanceMethodMap_4868, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 173)) ;
  }
  GALGAS_string var_defaultConstructorName_7283 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mDefaultConstantName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_unifiedTypeMapProxyList var_associatedTypeList_7432 ;
      GALGAS_uint joker_7407 ; // Joker input parameter
      var_constantMap_5088.method_searchKey (object->mProperty_mDefaultConstantName, joker_7407, var_associatedTypeList_7432, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 186)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_associatedTypeList_7432.getter_length (SOURCE_FILE ("type-enum.galgas", 187)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_defaultConstructorName_7283 = object->mProperty_mDefaultConstantName.getter_string (HERE) ;
        }
      }
      if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mDefaultConstantName.getter_location (SOURCE_FILE ("type-enum.galgas", 190)), GALGAS_string ("the default constant should have no associated values"), fixItArray3  COMMA_SOURCE_FILE ("type-enum.galgas", 190)) ;
      }
    }
  }
  {
  GALGAS_headerKind temp_4 ;
  const enumGalgasBool test_5 = var_hasAssociatedValues_5121.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-enum.galgas", 220)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-enum.galgas", 220)) ;
  }
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mEnumTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-enum.galgas", 198)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("type-enum.galgas", 199)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 201)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 202)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 203)), var_constructorMap_4796, var_getterMap_6699, var_setterMap_4824, var_instanceMethodMap_4868, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 208)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 209)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-enum.galgas", 210)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-enum.galgas", 210)) COMMA_SOURCE_FILE ("type-enum.galgas", 210)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 211)), var_constantMap_5088, object->mProperty_mConstantList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 214)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 215)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-enum.galgas", 217)), var_defaultConstructorName_7283, GALGAS_string ("enum-").add_operation (object->mProperty_mEnumTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-enum.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 219)), temp_4, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 194)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                               extensionMethod_enumDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumDeclarationAST_enterInSemanticContext (defineExtensionMethod_enumDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@enumDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_9219 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mEnumTypeName, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 237)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9219, var_nameForUsefulness_9219, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 238)) ;
  }
  GALGAS_stringlist var_constantList_9381 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 240)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration_9460 = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 241)) ;
  GALGAS_constantIndexMap var_constantMap_9483 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 242)) ;
  cEnumerator_enumConstantList enumerator_9539 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  while (enumerator_9539.hasCurrentObject ()) {
    var_constantList_9381.addAssign_operation (enumerator_9539.current_mConstantName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 244)) ;
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList_9632 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 245)) ;
    GALGAS_stringset var_associatedValueNameSet_9675 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-enum.galgas", 246)) ;
    cEnumerator__32_lstringlist enumerator_9725 (enumerator_9539.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_9725.hasCurrentObject ()) {
      GALGAS_lstring var_propertyTypeNameForUsefulness_9768 = function_typeNameForUsefulEntitiesGraph (enumerator_9725.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 248)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9219, var_propertyTypeNameForUsefulness_9768 COMMA_SOURCE_FILE ("type-enum.galgas", 249)) ;
      }
      GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy_9932 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_9725.current_mValue_30_ (HERE), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 250)) ;
      var_associatedTypeList_9632.addAssign_operation (var_associatedTypeProxy_9932  COMMA_SOURCE_FILE ("type-enum.galgas", 251)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = var_associatedValueNameSet_9675.getter_hasKey (enumerator_9725.current_mValue_31_ (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-enum.galgas", 252)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_9725.current_mValue_31_ (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 253)), GALGAS_string ("duplicated name"), fixItArray1  COMMA_SOURCE_FILE ("type-enum.galgas", 253)) ;
        }
      }
      var_associatedValueNameSet_9675.addAssign_operation (enumerator_9725.current_mValue_31_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 255)) ;
      enumerator_9725.gotoNextObject () ;
    }
    {
    var_constantMap_9483.setter_insertKey (enumerator_9539.current_mConstantName (HERE), var_constantMap_9483.getter_count (SOURCE_FILE ("type-enum.galgas", 257)), var_associatedTypeList_9632, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 257)) ;
    }
    var_enumConstantListForGeneration_9460.addAssign_operation (enumerator_9539.current_mConstantName (HERE).getter_string (HERE), var_associatedTypeList_9632  COMMA_SOURCE_FILE ("type-enum.galgas", 258)) ;
    enumerator_9539.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_10415 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mEnumTypeName, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 261)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (object->mProperty_mEnumTypeName.getter_string (SOURCE_FILE ("type-enum.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 263)), GALGAS_enumTypeForGeneration::constructor_new (var_selfType_10415, var_enumConstantListForGeneration_9460  COMMA_SOURCE_FILE ("type-enum.galgas", 264))  COMMA_SOURCE_FILE ("type-enum.galgas", 262)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                         extensionMethod_enumDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumDeclarationAST_semanticAnalysis (defineExtensionMethod_enumDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Filewrapper 'enumGenerationTemplate'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Filewrapper template 'enumGenerationTemplate enumTypeHeader1'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" enum"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Enumeration\n"
    "  public : typedef enum {\n"
    "    kNotBuilt" ;
  GALGAS_uint index_842_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_842 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_842.hasCurrentObject ()) {
      result << ",\n"
        "    kEnum_" ;
      result << enumerator_842.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 15)).stringValue () ;
      index_842_.increment () ;
      enumerator_842.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } enumeration ;\n"
    "  \n"
    "//--------------------------------- Private data member\n" ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;\n"
      "  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {\n"
      "    return mAssociatedValues.unsafePointer () ;\n"
      "  }\n"
      "\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "  private : enumeration mEnum ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }\n"
    "  public : inline enumeration enumValue (void) const { return mEnum ; }\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Filewrapper template 'enumGenerationTemplate enumTypeHeader2'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
      "//                                                                                                                     *\n"
      "//" ;
    result << GALGAS_string ("@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).add_operation (GALGAS_string (" enum, associated values"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).stringValue () ;
    result << "*\n"
      "//                                                                                                                     *\n" ;
    GALGAS_uint index_519_ (0) ;
    if (in_CONSTANT_5F_LIST.isValid ()) {
      cEnumerator_enumConstantListForGeneration enumerator_519 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_519.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_519.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 8)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
            "\n"
            "class cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_519.current_mConstantName (HERE).stringValue () ;
          result << " : public cEnumAssociatedValues {\n" ;
          GALGAS_uint index_855_idx (0) ;
          if (enumerator_519.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapProxyList enumerator_855 (enumerator_519.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_855.hasCurrentObject ()) {
              result << "  public : const GALGAS_" ;
              result << enumerator_855.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " mAssociatedValue" ;
              result << index_855_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " ;\n" ;
              index_855_idx.increment () ;
              enumerator_855.gotoNextObject () ;
            }
          }
          result << "\n"
            "//--- Constructor\n"
            "  public : cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_519.current_mConstantName (HERE).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_1137_idx (0) ;
          if (enumerator_519.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapProxyList enumerator_1137 (enumerator_519.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_1137.hasCurrentObject ()) {
              result << "const GALGAS_" ;
              result << enumerator_1137.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              result << " & inAssociatedValue" ;
              result << index_1137_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              if (enumerator_1137.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_1137_idx.increment () ;
              enumerator_1137.gotoNextObject () ;
            }
          }
          result << "\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS) ;\n"
            "\n"
            "  public : virtual void description (" ;
          columnMarker = result.currentColumn () ;
          result << "C_String & ioString,\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "const int32_t inIndentation) const ;\n"
            "  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;\n"
            "\n"
            "  public : virtual ~ cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_519.current_mConstantName (HERE).stringValue () ;
          result << " (void) {}\n"
            "} ;\n"
            "\n" ;
        }else if (kBoolFalse == test_1) {
        }
        index_519_.increment () ;
        enumerator_519.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
  }
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                                         const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  GALGAS_uint index_27_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_27 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_27.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_27.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 3)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
          "\n"
          "cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << "::cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_389_idx (0) ;
        if (enumerator_27.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_389 (enumerator_27.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_389.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << enumerator_389.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            result << " & inAssociatedValue" ;
            result << index_389_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            if (enumerator_389.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_389_idx.increment () ;
            enumerator_389.gotoNextObject () ;
          }
        }
        result << "\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) :\n"
          "cEnumAssociatedValues (THERE)" ;
        GALGAS_uint index_626_idx (0) ;
        if (enumerator_27.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_626 (enumerator_27.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_626.hasCurrentObject ()) {
            result << ",\n"
              "mAssociatedValue" ;
            result << index_626_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << " (inAssociatedValue" ;
            result << index_626_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << ")" ;
            index_626_idx.increment () ;
            enumerator_626.gotoNextObject () ;
          }
        }
        result << " {\n"
          "} ;\n"
          "\n"
          "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
          "\n"
          "void cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << "::description (" ;
        columnMarker = result.currentColumn () ;
        result << "C_String & ioString,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "const int32_t inIndentation) const {\n"
          "  ioString << \"(\\n\" ;\n" ;
        GALGAS_uint index_1128_idx (0) ;
        if (enumerator_27.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_1128 (enumerator_27.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1128.hasCurrentObject ()) {
            result << "  mAssociatedValue" ;
            result << index_1128_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue () ;
            result << ".description (ioString, inIndentation) ;\n" ;
            index_1128_idx.increment () ;
            enumerator_1128.gotoNextObject () ;
          }
        }
        result << "  ioString << \")\" ;\n"
          "}\n"
          "\n"
          "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
          "\n"
          "typeComparisonResult cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << "::compare (const cEnumAssociatedValues * inOperand) const {\n"
          "  const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = dynamic_cast<const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << " *> (inOperand) ;\n"
          "  macroValidPointer (ptr) ;\n"
          "  typeComparisonResult result = kOperandEqual ;\n" ;
        GALGAS_uint index_1857_idx (0) ;
        if (enumerator_27.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_1857 (enumerator_27.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1857.hasCurrentObject ()) {
            result << "  if (result == kOperandEqual) {\n"
              "    result = mAssociatedValue" ;
            result << index_1857_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ".objectCompare (ptr->mAssociatedValue" ;
            result << index_1857_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ") ;\n"
              "  }\n" ;
            index_1857_idx.increment () ;
            enumerator_1857.gotoNextObject () ;
          }
        }
        result << "  return result ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_27_.increment () ;
      enumerator_27.gotoNextObject () ;
    }
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  const enumGalgasBool test_1 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "mAssociatedValues (),\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "mEnum (kNotBuilt) {\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_2383_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_2383 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2383.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_2383.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 54)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2383.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 55)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "UNUSED_LOCATION_ARGS" ;
      }else if (kBoolFalse == test_2) {
        GALGAS_uint index_2768_idx (0) ;
        if (enumerator_2383.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_2768 (enumerator_2383.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_2768.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << enumerator_2768.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            result << " & inAssociatedValue" ;
            result << index_2768_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            if (enumerator_2768.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_2768_idx.increment () ;
            enumerator_2768.gotoNextObject () ;
          }
        }
        result << "\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS" ;
      }
      result << ") {\n"
        "  GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " result ;\n" ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2383.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  result.mEnum = kEnum_" ;
        result << enumerator_2383.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 67)).stringValue () ;
        result << " ;\n" ;
      }else if (kBoolFalse == test_3) {
        result << "  if (" ;
        GALGAS_uint index_3173_idx (0) ;
        if (enumerator_2383.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_3173 (enumerator_2383.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3173.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3173_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 71)).stringValue () ;
            result << ".isValid ()" ;
            if (enumerator_3173.hasNextObject ()) {
              result << " && " ;
            }
            index_3173_idx.increment () ;
            enumerator_3173.gotoNextObject () ;
          }
        }
        result << ") {\n"
          "    result.mEnum = kEnum_" ;
        result << enumerator_2383.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 75)).stringValue () ;
        result << " ;\n"
          "    cEnumAssociatedValues * ptr = NULL ;\n"
          "    macroMyNew (ptr, cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_2383.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        GALGAS_uint index_3529_idx (0) ;
        if (enumerator_2383.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_3529 (enumerator_2383.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3529.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3529_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).stringValue () ;
            if (enumerator_3529.hasNextObject ()) {
              result << ", " ;
            }
            index_3529_idx.increment () ;
            enumerator_3529.gotoNextObject () ;
          }
        }
        result << " COMMA_THERE)) ;\n"
          "    result.mAssociatedValues.setPointer (ptr) ;\n"
          "    macroDetachSharedObject (ptr) ;\n"
          "  }\n" ;
      }
      result << "  return result ;\n"
        "}\n"
        "\n" ;
      index_2383_.increment () ;
      enumerator_2383.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3796_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_3796 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3796.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, enumerator_3796.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 92)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::method_" ;
        result << enumerator_3796.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 94)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_4120_idx (0) ;
        if (enumerator_3796.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_4120 (enumerator_3796.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4120.hasCurrentObject ()) {
            result << "GALGAS_" ;
            result << enumerator_4120.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << " & outAssociatedValue" ;
            result << index_4120_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            index_4120_idx.increment () ;
            enumerator_4120.gotoNextObject () ;
          }
        }
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) const {\n"
          "  if (mEnum != kEnum_" ;
        result << enumerator_3796.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 100)).stringValue () ;
        result << ") {\n" ;
        GALGAS_uint index_4421_idx (0) ;
        if (enumerator_3796.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_4421 (enumerator_3796.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4421.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_4421_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 102)).stringValue () ;
            result << ".drop () ;\n" ;
            index_4421_idx.increment () ;
            enumerator_4421.gotoNextObject () ;
          }
        }
        result << "    C_String s ;\n"
          "    s << \"method @" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " " ;
        result << enumerator_3796.current_mConstantName (HERE).stringValue () ;
        result << " invoked with an invalid enum value\" ;\n"
          "    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n"
          "  }else{\n"
          "    const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3796.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3796.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n" ;
        GALGAS_uint index_4919_idx (0) ;
        if (enumerator_3796.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_4919 (enumerator_3796.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4919.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_4919_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " = ptr->mAssociatedValue" ;
            result << index_4919_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " ;\n" ;
            index_4919_idx.increment () ;
            enumerator_4919.gotoNextObject () ;
          }
        }
        result << "  }\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_4) {
      }
      index_3796_.increment () ;
      enumerator_3796.gotoNextObject () ;
    }
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "static const char * gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [" ;
  result << in_CONSTANT_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 119)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 119)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 119)).stringValue () ;
  result << "] = {\n"
    "  \"(not built)\"" ;
  GALGAS_uint index_5323_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5323 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5323.hasCurrentObject ()) {
      result << ",\n"
        "  " ;
      result << enumerator_5323.current_mConstantName (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 122)).stringValue () ;
      index_5323_.increment () ;
      enumerator_5323.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  GALGAS_uint index_5405_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5405 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5405.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "GALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_is" ;
      result << enumerator_5405.current_mConstantName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 130)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 130)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n"
        "  return GALGAS_bool (kNotBuilt != mEnum, kEnum_" ;
      result << enumerator_5405.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 131)).stringValue () ;
      result << " == mEnum) ;\n"
        "}\n"
        "\n" ;
      index_5405_.increment () ;
      enumerator_5405.gotoNextObject () ;
    }
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (" ;
  columnMarker = result.currentColumn () ;
  result << "C_String & ioString,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t " ;
  const enumGalgasBool test_5 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "inIndentation" ;
  }else if (kBoolFalse == test_5) {
    result << "/* inIndentation */" ;
  }
  result << ") const {\n"
    "  ioString << \"<enum @" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << ": \" << gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [mEnum] ;\n" ;
  const enumGalgasBool test_6 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "  mAssociatedValues.description (ioString, inIndentation) ;\n" ;
  }else if (kBoolFalse == test_6) {
  }
  result << "  ioString << \">\" ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "  typeComparisonResult result = kOperandNotValid ;\n"
    "  if (isValid () && inOperand.isValid ()) {\n"
    "    if (mEnum < inOperand.mEnum) {\n"
    "      result = kFirstOperandLowerThanSecond ;\n"
    "    }else if (mEnum > inOperand.mEnum) {\n"
    "      result = kFirstOperandGreaterThanSecond ;\n"
    "    }else{\n" ;
  const enumGalgasBool test_7 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;\n" ;
  }else if (kBoolFalse == test_7) {
    result << "      result = kOperandEqual ;\n" ;
  }
  result << "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@enumTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_12458 = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_12492 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  bool bool_0 = var_hasAssociatedValues_12458.operator_not (SOURCE_FILE ("type-enum.galgas", 316)).isValidAndTrue () ;
  if (enumerator_12492.hasCurrentObject () && bool_0) {
    while (enumerator_12492.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues_12458 = GALGAS_bool (kIsStrictSup, enumerator_12492.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 317)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_12492.gotoNextObject () ;
      if (enumerator_12492.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues_12458.operator_not (SOURCE_FILE ("type-enum.galgas", 316)).isValidAndTrue () ;
      }
    }
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 320)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 321)), object->mProperty_mConstantList, var_hasAssociatedValues_12458 COMMA_SOURCE_FILE ("type-enum.galgas", 319))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 326)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 327)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 328)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 329)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 330)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 331)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 332)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 333)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 334)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 335)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 336)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 337)) COMMA_SOURCE_FILE ("type-enum.galgas", 325))), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 325)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@enumTypeForGeneration appendDeclaration2'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_13587 = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_13621 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  bool bool_0 = var_hasAssociatedValues_13587.operator_not (SOURCE_FILE ("type-enum.galgas", 348)).isValidAndTrue () ;
  if (enumerator_13621.hasCurrentObject () && bool_0) {
    while (enumerator_13621.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues_13587 = GALGAS_bool (kIsStrictSup, enumerator_13621.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 349)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_13621.gotoNextObject () ;
      if (enumerator_13621.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues_13587.operator_not (SOURCE_FILE ("type-enum.galgas", 348)).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_enumConstantListForGeneration enumerator_13750 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  while (enumerator_13750.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapProxyList enumerator_13792 (enumerator_13750.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13792.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_13792.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 353)) ;
      enumerator_13792.gotoNextObject () ;
    }
    enumerator_13750.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 357)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 358)), object->mProperty_mConstantList, var_hasAssociatedValues_13587 COMMA_SOURCE_FILE ("type-enum.galgas", 356))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_32_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@enumTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_14360 = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_14394 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  bool bool_0 = var_hasAssociatedValues_14360.operator_not (SOURCE_FILE ("type-enum.galgas", 371)).isValidAndTrue () ;
  if (enumerator_14394.hasCurrentObject () && bool_0) {
    while (enumerator_14394.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues_14360 = GALGAS_bool (kIsStrictSup, enumerator_14394.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 372)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_14394.gotoNextObject () ;
      if (enumerator_14394.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues_14360.operator_not (SOURCE_FILE ("type-enum.galgas", 371)).isValidAndTrue () ;
      }
    }
  }
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 374)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 376)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 377)), object->mProperty_mConstantList, var_hasAssociatedValues_14360 COMMA_SOURCE_FILE ("type-enum.galgas", 375))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                                     extensionMethod_enumTypeForGeneration_appendSpecificImplementation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@externTypeDeclarationAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_externTypeDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_lstring var_key_7483 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mExternTypeName.getter_string (SOURCE_FILE ("type-extern.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 190)), object->mProperty_mExternTypeName.getter_location (SOURCE_FILE ("type-extern.galgas", 190))  COMMA_SOURCE_FILE ("type-extern.galgas", 190)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7483, temp_0, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 191)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_externTypeDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                                extensionMethod_externTypeDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_externTypeDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@externTypeDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_externTypeDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                             const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                             const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                             const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_getterMap var_getterMap_8443 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_8443, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 204)) ;
  }
  GALGAS_constructorMap var_constructorMap_8478 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 205)) ;
  GALGAS_setterMap var_setterMap_8506 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 206)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_8550 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 207)) ;
  GALGAS_classMethodMap var_classMethodMap_8588 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 208)) ;
  cEnumerator_externTypeConstructorList enumerator_8650 (object->mProperty_mExternTypeConstructorList, kENUMERATION_UP) ;
  while (enumerator_8650.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeProxy_8759 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8650.current_mResultTypeName (HERE), var_returnedTypeProxy_8759 COMMA_SOURCE_FILE ("type-extern.galgas", 211)) ;
    }
    GALGAS_functionSignature var_arguments_8800 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 213)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_8834 (enumerator_8650.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_8834.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeProxy_8954 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8834.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy_8954 COMMA_SOURCE_FILE ("type-extern.galgas", 215)) ;
      }
      var_arguments_8800.addAssign_operation (enumerator_8834.current_mFormalSelector (HERE), var_argumentTypeProxy_8954, enumerator_8834.current_mFormalParameterName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 216)) ;
      enumerator_8834.gotoNextObject () ;
    }
    {
    var_constructorMap_8478.setter_insertKey (enumerator_8650.current_mConstructorName (HERE), var_arguments_8800, GALGAS_bool (true), var_returnedTypeProxy_8759, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 219)) ;
    }
    enumerator_8650.gotoNextObject () ;
  }
  cEnumerator_externTypeGetterList enumerator_9257 (object->mProperty_mExternTypeGetterList, kENUMERATION_UP) ;
  while (enumerator_9257.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeProxy_9366 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9257.current_mResultTypeName (HERE), var_returnedTypeProxy_9366 COMMA_SOURCE_FILE ("type-extern.galgas", 228)) ;
    }
    GALGAS_functionSignature var_arguments_9407 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 230)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_9441 (enumerator_9257.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_9441.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeProxy_9561 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9441.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy_9561 COMMA_SOURCE_FILE ("type-extern.galgas", 232)) ;
      }
      var_arguments_9407.addAssign_operation (enumerator_9441.current_mFormalSelector (HERE), var_argumentTypeProxy_9561, enumerator_9441.current_mFormalParameterName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 233)) ;
      enumerator_9441.gotoNextObject () ;
    }
    {
    var_getterMap_8443.setter_insertKey (enumerator_9257.current_mGetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 238)), var_arguments_9407, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 240)), GALGAS_bool (true), var_returnedTypeProxy_9366, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 243)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 236)) ;
    }
    enumerator_9257.gotoNextObject () ;
  }
  cEnumerator_externTypeSetterList enumerator_9979 (object->mProperty_mExternTypeSetterList, kENUMERATION_UP) ;
  while (enumerator_9979.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_10029 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 249)) ;
    cEnumerator_formalParameterListAST enumerator_10069 (enumerator_9979.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_10069.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_10235 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10069.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_10235 COMMA_SOURCE_FILE ("type-extern.galgas", 251)) ;
      }
      var_routineSignature_10029.addAssign_operation (enumerator_10069.current_mFormalSelector (HERE), var_parameterTypeIndex_10235, enumerator_10069.current_mFormalArgumentPassingMode (HERE), enumerator_10069.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 256)) ;
      enumerator_10069.gotoNextObject () ;
    }
    {
    var_setterMap_8506.setter_insertKey (enumerator_9979.current_mSetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 261)), var_routineSignature_10029, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 264)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 259)) ;
    }
    enumerator_9979.gotoNextObject () ;
  }
  cEnumerator_externTypeMethodList enumerator_10653 (object->mProperty_mExternTypeMethodList, kENUMERATION_UP) ;
  while (enumerator_10653.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_10681 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 270)) ;
    cEnumerator_formalParameterListAST enumerator_10746 (enumerator_10653.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_10746.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_10796 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10746.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_10796 COMMA_SOURCE_FILE ("type-extern.galgas", 273)) ;
      }
      var_routineSignature_10681.addAssign_operation (enumerator_10746.current_mFormalSelector (HERE), var_parameterTypeIndex_10796, enumerator_10746.current_mFormalArgumentPassingMode (HERE), enumerator_10746.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 278)) ;
      enumerator_10746.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_8550.setter_insertKey (enumerator_10653.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 283)), var_routineSignature_10681, enumerator_10653.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 287)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 281)) ;
    }
    enumerator_10653.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mExternTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-extern.galgas", 296)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("type-extern.galgas", 297)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 299)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 300)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 301)), var_constructorMap_8478, var_getterMap_8443, var_setterMap_8506, var_instanceMethodMap_8550, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 306)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 307)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-extern.galgas", 308)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 309)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 310)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 311)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 312)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 313)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-extern.galgas", 315)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (object->mProperty_mExternTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-extern.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 317)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-extern.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 292)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_externTypeDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                               extensionMethod_externTypeDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterInSemanticContext (defineExtensionMethod_externTypeDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@externTypeDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_externTypeDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_12829 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mExternTypeName, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 335)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12829, var_nameForUsefulness_12829, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 336)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (object->mProperty_mExternTypeName.getter_string (SOURCE_FILE ("type-extern.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 339)), GALGAS_externTypeDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mExternTypeName, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 341)), object->mProperty_mExternTypeName.getter_string (HERE), object->mProperty_mCppPreDeclarationCode, object->mProperty_mCppClassCode  COMMA_SOURCE_FILE ("type-extern.galgas", 340))  COMMA_SOURCE_FILE ("type-extern.galgas", 338)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                         extensionMethod_externTypeDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_semanticAnalysis (defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@externTypeDeclarationForGeneration appendDeclaration1'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_string & outArgument_outHeader,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationForGeneration * object = (const cPtr_externTypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 364)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 365)), object->mProperty_mCppPreDeclarationCode, object->mProperty_mCppClassCode COMMA_SOURCE_FILE ("type-extern.galgas", 363))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 370)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 371)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 372)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 373)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 374)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 375)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 376)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 377)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 378)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 379)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 380)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 381)) COMMA_SOURCE_FILE ("type-extern.galgas", 369))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 369)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration.mSlotID,
                                              extensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@graphDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_graphDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_lstring var_key_2700 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mGraphTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 64)), object->mProperty_mGraphTypeName.getter_location (SOURCE_FILE ("type-graph.galgas", 64))  COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  {
  const GALGAS_graphDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2700, temp_0, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2700, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 66)), object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-graph.galgas", 66))  COMMA_SOURCE_FILE ("type-graph.galgas", 66)) COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_graphDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                                extensionMethod_graphDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_graphDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_graphDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@graphDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_graphDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeProxy_3827 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeProxy_3827 COMMA_SOURCE_FILE ("type-graph.galgas", 79)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeProxy_3996 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeProxy_3996 COMMA_SOURCE_FILE ("type-graph.galgas", 85)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_graphTypeProxy_4156 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mGraphTypeName, var_graphTypeProxy_4156 COMMA_SOURCE_FILE ("type-graph.galgas", 91)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeProxy_4344 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mAssociatedListTypeName, var_associatedListTypeProxy_4344 COMMA_SOURCE_FILE ("type-graph.galgas", 97)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringListTypeProxy_4526 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeProxy_4526 COMMA_SOURCE_FILE ("type-graph.galgas", 103)) ;
  }
  GALGAS_getterMap var_getterMap_4620 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4620, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 109)) ;
  }
  GALGAS_constructorMap var_constructorMap_4655 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 110)) ;
  GALGAS_setterMap var_setterMap_4683 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 111)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4727 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 112)) ;
  GALGAS_classMethodMap var_classMethodMap_4765 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 113)) ;
  GALGAS_formalParameterSignature var_formalParameterList_4856 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 115)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 117)), var_associatedListTypeProxy_4344, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 119)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 116)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 122)), var_lstringListTypeProxy_4526, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 124)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 121)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 127)), var_associatedListTypeProxy_4344, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 129)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 126)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 132)), var_lstringListTypeProxy_4526, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 134)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 131)) ;
  {
  var_instanceMethodMap_4727.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 137))  COMMA_SOURCE_FILE ("type-graph.galgas", 137)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 138)), var_formalParameterList_4856, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 140)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 142)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 136)) ;
  }
  {
  var_instanceMethodMap_4727.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 146))  COMMA_SOURCE_FILE ("type-graph.galgas", 146)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 147)), var_formalParameterList_4856, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 149)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 151)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 145)) ;
  }
  var_formalParameterList_4856 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 156)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 158)), var_associatedListTypeProxy_4344, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 160)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 157)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 163)), var_lstringListTypeProxy_4526, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 165)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 162)) ;
  {
  var_instanceMethodMap_4727.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("circularities"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 168))  COMMA_SOURCE_FILE ("type-graph.galgas", 168)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 169)), var_formalParameterList_4856, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 171)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 173)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 167)) ;
  }
  {
  var_instanceMethodMap_4727.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 177))  COMMA_SOURCE_FILE ("type-graph.galgas", 177)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 178)), var_formalParameterList_4856, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 180)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 182)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 176)) ;
  }
  {
  var_instanceMethodMap_4727.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 186))  COMMA_SOURCE_FILE ("type-graph.galgas", 186)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 187)), var_formalParameterList_4856, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 189)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 191)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 185)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("reversedGraph"), object->mProperty_mGraphTypeName.getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 196)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 204)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 212)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 220)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 228)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 236)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 246)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 256)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lkeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 264)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("edges"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 272)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), object->mProperty_mGraphTypeName.getter_string (HERE), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 280)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 292)) ;
  }
  {
  var_constructorMap_4655.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 303))  COMMA_SOURCE_FILE ("type-graph.galgas", 303)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 304)), GALGAS_bool (false), var_graphTypeProxy_4156, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 302)) ;
  }
  var_formalParameterList_4856 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 309)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 311)), var_lstringTypeProxy_3996, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 313)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 310)) ;
  cEnumerator_functionSignature enumerator_10816 (var_associatedListTypeProxy_4344.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 315)), kENUMERATION_UP) ;
  while (enumerator_10816.hasCurrentObject ()) {
    var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 317)), enumerator_10816.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 319)), enumerator_10816.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 316)) ;
    enumerator_10816.gotoNextObject () ;
  }
  cEnumerator_graphInsertModifierList enumerator_11006 (object->mProperty_mInsertModifierList, kENUMERATION_UP) ;
  while (enumerator_11006.hasCurrentObject ()) {
    {
    var_setterMap_4683.setter_insertOrReplace (enumerator_11006.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 325)), var_formalParameterList_4856, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 328)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 323)) ;
    }
    enumerator_11006.gotoNextObject () ;
  }
  {
  var_setterMap_4683.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 335))  COMMA_SOURCE_FILE ("type-graph.galgas", 335)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 336)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 337)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 339)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 334)) ;
  }
  var_formalParameterList_4856 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 343)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 344)), var_stringTypeProxy_3827, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 344)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 344)) ;
  {
  var_setterMap_4683.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 346))  COMMA_SOURCE_FILE ("type-graph.galgas", 346)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 347)), var_formalParameterList_4856, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 350)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 345)) ;
  }
  var_formalParameterList_4856 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 355)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 356)), var_lstringTypeProxy_3996, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 356)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 356)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 357)), var_lstringTypeProxy_3996, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 357)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 357)) ;
  {
  var_setterMap_4683.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 359))  COMMA_SOURCE_FILE ("type-graph.galgas", 359)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 360)), var_formalParameterList_4856, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 363)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 358)) ;
  }
  var_formalParameterList_4856 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 368)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 369)), var_lstringTypeProxy_3996, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 369)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 369)) ;
  {
  var_setterMap_4683.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 371))  COMMA_SOURCE_FILE ("type-graph.galgas", 371)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 372)), var_formalParameterList_4856, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 375)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 370)) ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mGraphTypeName, var_getterMap_4620, var_setterMap_4683, var_instanceMethodMap_4727, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 380)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mGraphTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-graph.galgas", 395)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("type-graph.galgas", 396)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 398)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 399)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 400)), var_constructorMap_4655, var_getterMap_4620, var_setterMap_4683, var_instanceMethodMap_4727, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 405)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 406)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-graph.galgas", 407)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 408)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 409)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 410)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 411)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 412)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-graph.galgas", 414)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (object->mProperty_mGraphTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-graph.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 416)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-graph.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 391)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_graphDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                               extensionMethod_graphDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_graphDeclarationAST_enterInSemanticContext (defineExtensionMethod_graphDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@graphDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_graphDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_14983 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mGraphTypeName, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 434)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14983, var_nameForUsefulness_14983, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 435)) ;
  }
  GALGAS_lstring var_associatedTypeNameForUsefulness_15146 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mAssociatedListTypeName, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 436)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14983, var_associatedTypeNameForUsefulness_15146 COMMA_SOURCE_FILE ("type-graph.galgas", 437)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_graphTypeProxy_15320 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mGraphTypeName, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 439)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeProxy_15430 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 440)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListElementTypeProxy_15556 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (object->mProperty_mAssociatedListTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 443)), object->mProperty_mAssociatedListTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 441)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_associatedListTypeProxy_15430.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 444)).objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-graph.galgas", 444)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-graph.galgas", 445)), GALGAS_string ("the '@").add_operation (object->mProperty_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 445)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 445)), fixItArray1  COMMA_SOURCE_FILE ("type-graph.galgas", 445)) ;
    }
  }
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-graph.galgas", 448)) ;
  temp_2.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("type-graph.galgas", 448)) ;
  temp_2.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("type-graph.galgas", 448)) ;
  GALGAS_stringset var_reservedModifierNames_15982 = temp_2 ;
  cEnumerator_graphInsertModifierList enumerator_16041 (object->mProperty_mInsertModifierList, kENUMERATION_UP) ;
  while (enumerator_16041.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_reservedModifierNames_15982.getter_hasKey (enumerator_16041.current_mInsertModifierName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 450)) COMMA_SOURCE_FILE ("type-graph.galgas", 450)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_16041.current_mInsertModifierName (HERE).getter_location (SOURCE_FILE ("type-graph.galgas", 451)), GALGAS_string ("the '").add_operation (enumerator_16041.current_mInsertModifierName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 451)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 451)), fixItArray4  COMMA_SOURCE_FILE ("type-graph.galgas", 451)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_16041.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 453)) ;
    }
    enumerator_16041.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (object->mProperty_mGraphTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 457)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeProxy_15320, var_associatedListTypeProxy_15430, var_associatedListElementTypeProxy_15556, object->mProperty_mInsertModifierList  COMMA_SOURCE_FILE ("type-graph.galgas", 458))  COMMA_SOURCE_FILE ("type-graph.galgas", 456)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_graphDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                         extensionMethod_graphDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_graphDeclarationAST_semanticAnalysis (defineExtensionMethod_graphDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@graphDeclarationForGeneration appendDeclaration1'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_graphDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_string & outArgument_outHeader,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 482)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 483)) COMMA_SOURCE_FILE ("type-graph.galgas", 481))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 486)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 487)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 488)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 489)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 490)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 491)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 492)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 493)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 494)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 495)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 496)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 497)) COMMA_SOURCE_FILE ("type-graph.galgas", 485))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 485)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                              extensionMethod_graphDeclarationForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@graphDeclarationForGeneration appendSpecificImplementation'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_graphDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_string & outArgument_outImplementation,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 507)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mAssociatedListTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 508)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mAssociatedListElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 509)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy, object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 512)), object->mProperty_mAssociatedListTypeProxy, object->mProperty_mInsertModifierList COMMA_SOURCE_FILE ("type-graph.galgas", 510))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                                     extensionMethod_graphDeclarationForGeneration_appendSpecificImplementation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@listDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_lstring var_key_2238 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 49)), object->mProperty_mListTypeName.getter_location (SOURCE_FILE ("type-list.galgas", 49))  COMMA_SOURCE_FILE ("type-list.galgas", 49)) ;
  {
  const GALGAS_listDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2238, temp_0, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 50)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2383 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_2383.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2383.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 52)), enumerator_2383.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 52))  COMMA_SOURCE_FILE ("type-list.galgas", 52)) COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
    }
    enumerator_2383.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                                extensionMethod_listDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_listDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@listDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList_3292 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 67)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3323 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_3323.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_3435 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_3323.current_mPropertyTypeName (HERE), var_attributeTypeIndex_3435 COMMA_SOURCE_FILE ("type-list.galgas", 69)) ;
    }
    GALGAS_bool var_hasSetter_3454 = enumerator_3323.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasGetter_3484 = enumerator_3323.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasSelector_3516 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_3553 (enumerator_3323.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_3553.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, enumerator_3553.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 74)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticWarning (enumerator_3553.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 75)), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray1  COMMA_SOURCE_FILE ("type-list.galgas", 75)) ;
        }
      }
      if (kBoolFalse == test_0) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, enumerator_3553.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 80)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (enumerator_3553.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 81)), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray3  COMMA_SOURCE_FILE ("type-list.galgas", 81)) ;
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsEqual, enumerator_3553.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 86)).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_4) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_hasSelector_3516.boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (enumerator_3553.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 88)), GALGAS_string ("the '%selector' attribute is already named"), fixItArray6  COMMA_SOURCE_FILE ("type-list.galgas", 88)) ;
                }
              }
              var_hasSelector_3516 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_4) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            GALGAS_stringlist temp_8 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 94)) ;
            temp_8.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 94)) ;
            appendFixItActions (fixItArray7, kFixItReplace, temp_8) ;
            inCompiler->emitSemanticError (enumerator_3553.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 92)), GALGAS_string ("only '%selector' attribute is allowed here"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 92)) ;
          }
        }
      }
      enumerator_3553.gotoNextObject () ;
    }
    var_typedAttributeList_3292.addAssign_operation (var_attributeTypeIndex_3435, enumerator_3323.current_mPropertyName (HERE), var_hasSetter_3454, var_hasGetter_3484, var_hasSelector_3516  COMMA_SOURCE_FILE ("type-list.galgas", 97)) ;
    enumerator_3323.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_uintType_4642 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("uint"), var_uintType_4642 COMMA_SOURCE_FILE ("type-list.galgas", 100)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listTypeIndex_4762 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mListTypeName, var_listTypeIndex_4762 COMMA_SOURCE_FILE ("type-list.galgas", 102)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex_5000 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (object->mProperty_mListTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 106)), object->mProperty_mListTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 106)), var_listElementTypeIndex_5000 COMMA_SOURCE_FILE ("type-list.galgas", 104)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5081 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 110)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_5136 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 111)) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_5200 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 112)) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_5263 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 113)) ;
  cEnumerator_typedPropertyList enumerator_5299 (var_typedAttributeList_3292, kENUMERATION_UP) ;
  while (enumerator_5299.hasCurrentObject ()) {
    GALGAS_string temp_9 ;
    const enumGalgasBool test_10 = enumerator_5299.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = enumerator_5299.current_mPropertyName (HERE).getter_string (HERE) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_selector_5319 = temp_9 ;
    var_enumerationDescriptor_5081.addAssign_operation (enumerator_5299.current_mPropertyTypeProxy (HERE), enumerator_5299.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 116)) ;
    var_constructorAttributeTypeList_5136.addAssign_operation (var_selector_5319.getter_nowhere (SOURCE_FILE ("type-list.galgas", 118)), enumerator_5299.current_mPropertyTypeProxy (HERE), enumerator_5299.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 117)) ;
    var_setterOutputFormalArgumentList_5200.addAssign_operation (var_selector_5319.getter_nowhere (SOURCE_FILE ("type-list.galgas", 122)), enumerator_5299.current_mPropertyTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-list.galgas", 124)), enumerator_5299.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 121)) ;
    var_setterInputFormalArgumentList_5263.addAssign_operation (var_selector_5319.getter_nowhere (SOURCE_FILE ("type-list.galgas", 127)), enumerator_5299.current_mPropertyTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 129)), enumerator_5299.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 126)) ;
    enumerator_5299.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_5901 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 133)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_5901, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyList"), object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 138)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 134)) ;
  }
  {
  var_constructorMap_5901.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 142))  COMMA_SOURCE_FILE ("type-list.galgas", 142)), var_constructorAttributeTypeList_5136, GALGAS_bool (false), var_listTypeIndex_4762, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 141)) ;
  }
  GALGAS_getterMap var_getterMap_6341 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_6341, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 148)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_6341, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 149)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_6341, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 156)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_6341, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 167)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 163)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_6341, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 174)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 170)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_6341, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 181)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 177)) ;
  }
  cEnumerator_typedPropertyList enumerator_7338 (var_typedAttributeList_3292, kENUMERATION_UP) ;
  while (enumerator_7338.hasCurrentObject ()) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = enumerator_7338.current_mHasGetter (HERE).boolEnum () ;
      if (kBoolTrue == test_11) {
        {
        GALGAS_functionSignature temp_12 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 189)) ;
        temp_12.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 189)), var_uintType_4642, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 189)) ;
        var_getterMap_6341.setter_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_7338.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 187)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 187)), enumerator_7338.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 187))  COMMA_SOURCE_FILE ("type-list.galgas", 187)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 188)), temp_12, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 190)), GALGAS_bool (true), enumerator_7338.current_mPropertyTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 193)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 186)) ;
        }
      }
    }
    enumerator_7338.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_7823 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 199)) ;
  {
  var_instanceMethodMap_7823.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 201))  COMMA_SOURCE_FILE ("type-list.galgas", 201)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 202)), var_setterOutputFormalArgumentList_5200, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 204)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 206)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 200)) ;
  }
  {
  var_instanceMethodMap_7823.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 210))  COMMA_SOURCE_FILE ("type-list.galgas", 210)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 211)), var_setterOutputFormalArgumentList_5200, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 213)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 215)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 209)) ;
  }
  GALGAS_setterMap var_setterMap_8341 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 219)) ;
  {
  GALGAS_formalParameterSignature temp_13 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 223)) ;
  temp_13.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 223)), var_listElementTypeIndex_5000, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-list.galgas", 223)), GALGAS_string ("inElement")  COMMA_SOURCE_FILE ("type-list.galgas", 223)) ;
  var_setterMap_8341.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("append"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 221))  COMMA_SOURCE_FILE ("type-list.galgas", 221)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 222)), temp_13, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 225)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 220)) ;
  }
  {
  var_setterMap_8341.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 229))  COMMA_SOURCE_FILE ("type-list.galgas", 229)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 230)), var_setterOutputFormalArgumentList_5200, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 233)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 228)) ;
  }
  {
  var_setterMap_8341.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 237))  COMMA_SOURCE_FILE ("type-list.galgas", 237)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 238)), var_setterOutputFormalArgumentList_5200, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 241)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 236)) ;
  }
  var_setterOutputFormalArgumentList_5200.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 244)), var_uintType_4642, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 244)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 244)) ;
  {
  var_setterMap_8341.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 246))  COMMA_SOURCE_FILE ("type-list.galgas", 246)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 247)), var_setterOutputFormalArgumentList_5200, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 250)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 245)) ;
  }
  cEnumerator_typedPropertyList enumerator_9400 (var_typedAttributeList_3292, kENUMERATION_UP) ;
  while (enumerator_9400.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = enumerator_9400.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_14) {
        GALGAS_formalParameterSignature var_setterFormalArgumentList_9461 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 256)) ;
        var_setterFormalArgumentList_9461.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 257)), enumerator_9400.current_mPropertyTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 257)), enumerator_9400.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 257)) ;
        var_setterFormalArgumentList_9461.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 258)), var_uintType_4642, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 258)), enumerator_9400.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 258)) ;
        {
        var_setterMap_8341.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9400.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 260)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 260)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 260)), enumerator_9400.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 260))  COMMA_SOURCE_FILE ("type-list.galgas", 260)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 261)), var_setterFormalArgumentList_9461, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 264)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 259)) ;
        }
      }
    }
    enumerator_9400.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_5263.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 270)), var_uintType_4642, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 270)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 270)) ;
  {
  var_setterMap_8341.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 272))  COMMA_SOURCE_FILE ("type-list.galgas", 272)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 273)), var_setterInputFormalArgumentList_5263, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 276)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 271)) ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mListTypeName, var_getterMap_6341, var_setterMap_8341, var_instanceMethodMap_7823, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 281)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mListTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-list.galgas", 296)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-list.galgas", 297)), GALGAS_bool (true), var_typedAttributeList_3292, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 300)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 301)), var_constructorMap_5901, var_getterMap_6341, var_setterMap_8341, var_instanceMethodMap_7823, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 306)), var_enumerationDescriptor_5081, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-list.galgas", 308)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-list.galgas", 308)) COMMA_SOURCE_FILE ("type-list.galgas", 308)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("type-list.galgas", 308)) COMMA_SOURCE_FILE ("type-list.galgas", 308)), var_constructorAttributeTypeList_5136, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 310)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 311)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 312)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 313)), GALGAS_bool (false), var_listElementTypeIndex_5000, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (object->mProperty_mListTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-list.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 317)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-list.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 292)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                               extensionMethod_listDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listDeclarationAST_enterInSemanticContext (defineExtensionMethod_listDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@listDeclarationAST addAssociatedElement'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_11930 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 327)) ;
  cEnumerator_propertyInCollectionListAST enumerator_11961 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_11961.hasCurrentObject ()) {
    var_structAttributeList_11930.addAssign_operation (enumerator_11961.current_mPropertyTypeName (HERE), enumerator_11961.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 333))  COMMA_SOURCE_FILE ("type-list.galgas", 329)) ;
    enumerator_11961.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mProperty_mIsPredefined, GALGAS_lstring::constructor_new (object->mProperty_mListTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 337)), object->mProperty_mListTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 337)), var_structAttributeList_11930, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 335))  COMMA_SOURCE_FILE ("type-list.galgas", 335)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                             extensionMethod_listDeclarationAST_addAssociatedElement) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listDeclarationAST_addAssociatedElement (defineExtensionMethod_listDeclarationAST_addAssociatedElement, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@listDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_13050 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mListTypeName, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 357)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_13050, var_nameForUsefulness_13050, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 358)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_13209 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mProperty_mListTypeName.getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 359)), object->mProperty_mListTypeName.getter_location (SOURCE_FILE ("type-list.galgas", 359))  COMMA_SOURCE_FILE ("type-list.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 359)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_13050, var_elementTypeNameForUsefulness_13209 COMMA_SOURCE_FILE ("type-list.galgas", 360)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_13431 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 362)) ;
  GALGAS_propertyIndexMap var_attributeMap_13469 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 363)) ;
  cEnumerator_propertyInCollectionListAST enumerator_13500 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_13500.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_13541 = function_typeNameForUsefulEntitiesGraph (enumerator_13500.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 365)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_13050, var_propertyTypeNameForUsefulness_13541 COMMA_SOURCE_FILE ("type-list.galgas", 366)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_13693 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_13500.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 367)) ;
    GALGAS_bool var_hasSetter_13794 = enumerator_13500.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasGetter_13824 = enumerator_13500.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasSelector_13856 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_13893 (enumerator_13500.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13893.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, enumerator_13893.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 372)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticWarning (enumerator_13893.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 373)), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray1  COMMA_SOURCE_FILE ("type-list.galgas", 373)) ;
        }
      }
      if (kBoolFalse == test_0) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, enumerator_13893.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 378)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (enumerator_13893.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 379)), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray3  COMMA_SOURCE_FILE ("type-list.galgas", 379)) ;
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsEqual, enumerator_13893.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 384)).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_4) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_hasSelector_13856.boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (enumerator_13893.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 386)), GALGAS_string ("the '%selector' attribute is already named"), fixItArray6  COMMA_SOURCE_FILE ("type-list.galgas", 386)) ;
                }
              }
              var_hasSelector_13856 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_4) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            GALGAS_stringlist temp_8 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 392)) ;
            temp_8.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 392)) ;
            appendFixItActions (fixItArray7, kFixItReplace, temp_8) ;
            inCompiler->emitSemanticError (enumerator_13893.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 390)), GALGAS_string ("only '%selector' attribut is allowed here"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 390)) ;
          }
        }
      }
      enumerator_13893.gotoNextObject () ;
    }
    var_typedAttributeList_13431.addAssign_operation (var_t_13693, enumerator_13500.current_mPropertyName (HERE), var_hasSetter_13794, var_hasGetter_13824, var_hasSelector_13856  COMMA_SOURCE_FILE ("type-list.galgas", 395)) ;
    {
    var_attributeMap_13469.setter_insertKey (enumerator_13500.current_mPropertyName (HERE), var_t_13693, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 401)) ;
    }
    enumerator_13500.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_14946 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 404)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 406)), GALGAS_listTypeForGeneration::constructor_new (var_selfType_14946, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (object->mProperty_mListTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 409)), object->mProperty_mListTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 409)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 409)), var_typedAttributeList_13431  COMMA_SOURCE_FILE ("type-list.galgas", 407))  COMMA_SOURCE_FILE ("type-list.galgas", 405)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                         extensionMethod_listDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listDeclarationAST_semanticAnalysis (defineExtensionMethod_listDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Filewrapper 'listGenerationTemplate'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Filewrapper template 'listGenerationTemplate listTypeHeader1'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & in_TYPE_5F_NAME,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_list {\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- List constructor used by listmap\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const capCollectionElementArray & inSharedArray) ;\n"
    "\n"
    "//--------------------------------- Element constructor\n"
    "  public : static void makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_1057_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1057 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1057.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const class GALGAS_" ;
      result << enumerator_1057.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1057.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      index_1057_.increment () ;
      enumerator_1057.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Filewrapper template 'listGenerationTemplate listTypeSpecificImplementation'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                         const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "class cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cCollectionElement {\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element mObject ;\n"
    "\n"
    "//--- Constructors\n"
    "  public : cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_824_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_824 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_824.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_824.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      result << " & in_" ;
      result << enumerator_824.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      if (enumerator_824.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_824_.increment () ;
      enumerator_824.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "  public : cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inElement COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public : virtual bool isValid (void) const ;\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public : virtual cCollectionElement * copy (void) ;\n"
    "\n"
    "//--- Description\n"
    "  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n"
    "} ;\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1839_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1839 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1839.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_1839.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1839.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      if (enumerator_1839.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1839_.increment () ;
      enumerator_1839.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mObject (" ;
  GALGAS_uint index_2076_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2076 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2076.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_2076.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 45)).stringValue () ;
      if (enumerator_2076.hasNextObject ()) {
        result << ", " ;
      }
      index_2076_.increment () ;
      enumerator_2076.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inElement COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mObject (" ;
  GALGAS_uint index_2494_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2494 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2494.hasCurrentObject ()) {
      result << "inElement.mProperty_" ;
      result << enumerator_2494.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 57)).stringValue () ;
      if (enumerator_2494.hasNextObject ()) {
        result << ", " ;
      }
      index_2494_.increment () ;
      enumerator_2494.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "bool cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mObject.isValid () ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "cCollectionElement * cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n"
    "  cCollectionElement * result = NULL ;\n"
    "  macroMyNew (result, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_3143_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3143 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3143.hasCurrentObject ()) {
      result << "mObject.mProperty_" ;
      result << enumerator_3143.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 75)).stringValue () ;
      if (enumerator_3143.hasNextObject ()) {
        result << ", " ;
      }
      index_3143_.increment () ;
      enumerator_3143.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
  GALGAS_uint index_3541_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3541 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3541.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n"
        "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
        "  ioString << " ;
      result << enumerator_3541.current_mPropertyName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 89)).stringValue () ;
      result << " \":\" ;\n"
        "  mObject.mProperty_" ;
      result << enumerator_3541.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 90)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_3541_.increment () ;
      enumerator_3541.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "typeComparisonResult cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compare (const cCollectionElement * inOperand) const {\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n"
    "  macroValidSharedObject (operand, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return mObject.objectCompare (operand->mObject) ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_list () {\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const capCollectionElementArray & inSharedArray) :\n"
    "AC_GALGAS_list (inSharedArray) {\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (UNUSED_LOCATION_ARGS) {\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "  (capCollectionElementArray ()) ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_listWithValue (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5308_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5308 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5308.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_5308.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      result << " & inOperand" ;
      result << index_5308_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      if (enumerator_5308.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5308_IDX.increment () ;
      enumerator_5308.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (" ;
  GALGAS_uint index_5540_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5540 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5540.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_5540_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 131)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_5540.hasNextObject ()) {
        result << " && " ;
      }
      index_5540_IDX.increment () ;
      enumerator_5540.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (capCollectionElementArray ()) ;\n"
    "    capCollectionElement attributes ;\n"
    "    GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (attributes" ;
  GALGAS_uint index_5834_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5834 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5834.hasCurrentObject ()) {
      result << ", inOperand" ;
      result << index_5834_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 139)).stringValue () ;
      index_5834_IDX.increment () ;
      enumerator_5834.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    result.appendObject (attributes) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_6211_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6211 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6211.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_6211.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      result << " & in_" ;
      result << enumerator_6211.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      index_6211_.increment () ;
      enumerator_6211.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6513_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6513 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6513.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_6513.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 158)).stringValue () ;
      if (enumerator_6513.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6513_.increment () ;
      enumerator_6513.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "  outAttributes.setPointer (p) ;\n"
    "  macroDetachSharedObject (p) ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6895_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6895 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6895.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_6895.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      result << " & inOperand" ;
      result << index_6895_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      if (enumerator_6895.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6895_IDX.increment () ;
      enumerator_6895.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()" ;
  GALGAS_uint index_7100_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7100 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7100.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_7100_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 176)).stringValue () ;
      result << ".isValid ()" ;
      index_7100_IDX.increment () ;
      enumerator_7100.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    cCollectionElement * p = NULL ;\n"
    "    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_7297_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7297 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7297.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7297_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 182)).stringValue () ;
      if (enumerator_7297.hasNextObject ()) {
        result << ", " ;
      }
      index_7297_IDX.increment () ;
      enumerator_7297.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "    capCollectionElement attributes ;\n"
    "    attributes.setPointer (p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "    appendObject (attributes) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_append (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inElement,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inElement.isValid ()) {\n"
    "    cCollectionElement * p = NULL ;\n"
    "    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inElement COMMA_THERE)) ;\n"
    "    capCollectionElement attributes ;\n"
    "    attributes.setPointer (p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "    appendObject (attributes) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_insertAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8328_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8328 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8328.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_8328.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 212)).stringValue () ;
      result << " inOperand" ;
      result << index_8328_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 212)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8328_IDX.increment () ;
      enumerator_8328.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inInsertionIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inInsertionIndex.isValid ()" ;
  GALGAS_uint index_8628_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8628 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8628.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_8628_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 219)).stringValue () ;
      result << ".isValid ()" ;
      index_8628_IDX.increment () ;
      enumerator_8628.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    cCollectionElement * p = NULL ;\n"
    "    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_8825_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8825 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8825.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_8825_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 225)).stringValue () ;
      if (enumerator_8825.hasNextObject ()) {
        result << ", " ;
      }
      index_8825_IDX.increment () ;
      enumerator_8825.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "    capCollectionElement attributes ;\n"
    "    attributes.setPointer (p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_removeAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9322_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9322 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9322.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_9322.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 240)).stringValue () ;
      result << " & outOperand" ;
      result << index_9322_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 240)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9322_IDX.increment () ;
      enumerator_9322.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inRemoveIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inRemoveIndex.isValid ()) {\n"
    "    capCollectionElement attributes ;\n"
    "    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;\n"
    "    cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "    if (NULL == p) {\n" ;
  GALGAS_uint index_9874_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9874 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9874.hasCurrentObject ()) {
      result << "      outOperand" ;
      result << index_9874_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 252)).stringValue () ;
      result << ".drop () ;\n" ;
      index_9874_IDX.increment () ;
      enumerator_9874.gotoNextObject () ;
    }
  }
  result << "    }else{\n"
    "      macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_10058_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10058 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10058.hasCurrentObject ()) {
      result << "      outOperand" ;
      result << index_10058_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 258)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_10058.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 258)).stringValue () ;
      result << " ;\n" ;
      index_10058_IDX.increment () ;
      enumerator_10058.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popFirst (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10405_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10405 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10405.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_10405.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 268)).stringValue () ;
      result << " & outOperand" ;
      result << index_10405_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 268)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10405_IDX.increment () ;
      enumerator_10405.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  capCollectionElement attributes ;\n"
    "  removeFirstObject (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_10822_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10822 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10822.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10822_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 278)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10822_IDX.increment () ;
      enumerator_10822.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_11000_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11000 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11000.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11000_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 284)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_11000.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 284)).stringValue () ;
      result << " ;\n" ;
      index_11000_IDX.increment () ;
      enumerator_11000.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popLast (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11338_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11338 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11338.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_11338.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 293)).stringValue () ;
      result << " & outOperand" ;
      result << index_11338_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 293)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11338_IDX.increment () ;
      enumerator_11338.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  capCollectionElement attributes ;\n"
    "  removeLastObject (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_11754_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11754 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11754.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11754_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 303)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11754_IDX.increment () ;
      enumerator_11754.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_11932_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11932 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11932.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11932_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 309)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_11932.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 309)).stringValue () ;
      result << " ;\n" ;
      index_11932_IDX.increment () ;
      enumerator_11932.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_first (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12268_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12268 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12268.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_12268.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 318)).stringValue () ;
      result << " & outOperand" ;
      result << index_12268_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 318)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_12268_IDX.increment () ;
      enumerator_12268.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElement attributes ;\n"
    "  readFirst (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_12683_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12683 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12683.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12683_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 328)).stringValue () ;
      result << ".drop () ;\n" ;
      index_12683_IDX.increment () ;
      enumerator_12683.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_12861_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12861 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12861.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12861_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 334)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_12861.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 334)).stringValue () ;
      result << " ;\n" ;
      index_12861_IDX.increment () ;
      enumerator_12861.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_last (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_13196_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13196 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13196.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_13196.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 343)).stringValue () ;
      result << " & outOperand" ;
      result << index_13196_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 343)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_13196_IDX.increment () ;
      enumerator_13196.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElement attributes ;\n"
    "  readLast (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_13610_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13610 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13610.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13610_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 353)).stringValue () ;
      result << ".drop () ;\n" ;
      index_13610_IDX.increment () ;
      enumerator_13610.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_13788_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13788 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13788.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13788_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 359)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_13788.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 359)).stringValue () ;
      result << " ;\n" ;
      index_13788_IDX.increment () ;
      enumerator_13788.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::add_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand,\n"
    "                                            " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "                                            " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (isValid () && inOperand.isValid ()) {\n"
    "    result = *this ;\n"
    "    result.appendList (inOperand) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListWithRange (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_range & inRange,\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n"
    "  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListFromIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inIndex,\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n"
    "  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListToIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inIndex,\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n"
    "  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "  appendList (inOperand) ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_16588_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16588 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16588.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_16588.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_16588.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 419)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 419)).stringValue () ;
        result << "AtIndex (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << enumerator_16588.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 419)).stringValue () ;
        result << " inOperand,\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "GALGAS_uint inIndex,\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) {\n"
          "  cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;\n"
          "  if (NULL != p) {\n"
          "    macroValidSharedObject (p, cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    macroUniqueSharedObject (p) ;\n"
          "    p->mObject.mProperty_" ;
        result << enumerator_16588.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 427)).stringValue () ;
        result << " = inOperand ;\n"
          "  }\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      const enumGalgasBool test_1 = enumerator_16588.current_mHasGetter (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
          "\n"
          "GALGAS_" ;
        result << enumerator_16588.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 434)).stringValue () ;
        result << " GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::getter_" ;
        result << enumerator_16588.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 434)).stringValue () ;
        result << "AtIndex (" ;
        columnMarker = result.currentColumn () ;
        result << "const GALGAS_uint & inIndex,\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) const {\n"
          "  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;\n"
          "  cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) attributes.ptr () ;\n"
          "  GALGAS_" ;
        result << enumerator_16588.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 439)).stringValue () ;
        result << " result ;\n"
          "  if (NULL != p) {\n"
          "    macroValidSharedObject (p, cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    result = p->mObject.mProperty_" ;
        result << enumerator_16588.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 442)).stringValue () ;
        result << " ;\n"
          "  }\n"
          "  return result ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_16588_IDX.increment () ;
      enumerator_16588.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current (LOCATION_ARGS) const {\n"
    "  const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return p->mObject ;\n"
    "}\n"
    "\n"
    "\n" ;
  GALGAS_uint index_19555_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19555 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19555.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_19555.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 469)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_19555.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 469)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n"
        "  const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n"
        "  macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  return p->mObject.mProperty_" ;
      result << enumerator_19555.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 472)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_19555_IDX.increment () ;
      enumerator_19555.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@listTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 447)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 448)), object->mProperty_mTypedAttributeList COMMA_SOURCE_FILE ("type-list.galgas", 446))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 452)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 453)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 454)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 455)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 456)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 457)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 458)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 459)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 460)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 461)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 462)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 463)) COMMA_SOURCE_FILE ("type-list.galgas", 451))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 451)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                              extensionMethod_listTypeForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@listTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_17637 (object->mProperty_mTypedAttributeList, kENUMERATION_UP) ;
  while (enumerator_17637.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_17637.current_mPropertyTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 474)) ;
    enumerator_17637.gotoNextObject () ;
  }
  extensionMethod_addHeaderFileName (object->mProperty_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 476)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 477)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 479)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 480)), object->mProperty_mTypedAttributeList, object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 482)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 482)) COMMA_SOURCE_FILE ("type-list.galgas", 478))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                                     extensionMethod_listTypeForGeneration_appendSpecificImplementation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@listmapDeclarationAST addAssociatedElement'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listmapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_1789 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 37)) ;
  var_structAttributeList_1789.addAssign_operation (GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 39)), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 40)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 42))  COMMA_SOURCE_FILE ("type-listmap.galgas", 38)) ;
  var_structAttributeList_1789.addAssign_operation (object->mProperty_mAssociatedListTypeName, GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 45)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 47))  COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mProperty_mIsPredefined, GALGAS_lstring::constructor_new (object->mProperty_mListmapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), object->mProperty_mListmapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), var_structAttributeList_1789, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 49))  COMMA_SOURCE_FILE ("type-listmap.galgas", 49)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listmapDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                             extensionMethod_listmapDeclarationAST_addAssociatedElement) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listmapDeclarationAST_addAssociatedElement (defineExtensionMethod_listmapDeclarationAST_addAssociatedElement, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@listmapDeclarationAST enterDeclarationInGraph'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listmapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                           GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                           GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                           GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                           GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_lstring var_key_3067 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 67)), object->mProperty_mListmapTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 67))  COMMA_SOURCE_FILE ("type-listmap.galgas", 67)) ;
  {
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3067, temp_0, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 68)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3067, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 69)), object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 69))  COMMA_SOURCE_FILE ("type-listmap.galgas", 69)) COMMA_SOURCE_FILE ("type-listmap.galgas", 69)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listmapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                                extensionMethod_listmapDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_listmapDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@listmapDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listmapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum_4202 ;
  GALGAS_typedPropertyList var_listTypedAttributeList_4260 ;
  GALGAS_bool joker_4164_3 ; // Joker input parameter
  GALGAS_bool joker_4164_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_4164_1 ; // Joker input parameter
  GALGAS_bool joker_4208 ; // Joker input parameter
  GALGAS_propertyMap joker_4266_19 ; // Joker input parameter
  GALGAS_typedPropertyList joker_4266_18 ; // Joker input parameter
  GALGAS_constructorMap joker_4266_17 ; // Joker input parameter
  GALGAS_getterMap joker_4266_16 ; // Joker input parameter
  GALGAS_setterMap joker_4266_15 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_4266_14 ; // Joker input parameter
  GALGAS_classMethodMap joker_4266_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_4266_12 ; // Joker input parameter
  GALGAS_operators joker_4266_11 ; // Joker input parameter
  GALGAS_functionSignature joker_4266_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_4266_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_4266_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_4266_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_4266_6 ; // Joker input parameter
  GALGAS_bool joker_4266_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_4266_4 ; // Joker input parameter
  GALGAS_string joker_4266_3 ; // Joker input parameter
  GALGAS_string joker_4266_2 ; // Joker input parameter
  GALGAS_headerKind joker_4266_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mAssociatedListTypeName, joker_4164_3, joker_4164_2, joker_4164_1, var_typeKindEnum_4202, joker_4208, var_listTypedAttributeList_4260, joker_4266_19, joker_4266_18, joker_4266_17, joker_4266_16, joker_4266_15, joker_4266_14, joker_4266_13, joker_4266_12, joker_4266_11, joker_4266_10, joker_4266_9, joker_4266_8, joker_4266_7, joker_4266_6, joker_4266_5, joker_4266_4, joker_4266_3, joker_4266_2, joker_4266_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 82)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_4202.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 90)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 91)), GALGAS_string ("the '@").add_operation (object->mProperty_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 91)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 91)), fixItArray1  COMMA_SOURCE_FILE ("type-listmap.galgas", 91)) ;
      var_listTypedAttributeList_4260 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 92)) ;
    }
  }
  GALGAS_constructorMap var_constructorMap_4529 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 95)) ;
  GALGAS_getterMap var_getterMap_4619 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4619, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 96)) ;
  }
  GALGAS_setterMap var_setterMap_4644 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 97)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4688 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 98)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeIndex_4842 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mAssociatedListTypeName, var_associatedListTypeIndex_4842 COMMA_SOURCE_FILE ("type-listmap.galgas", 100)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_4976 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_4976 COMMA_SOURCE_FILE ("type-listmap.galgas", 102)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4619, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 104)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4619, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 111)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4619, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 118)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_4619, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("listForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), object->mProperty_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 131)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 125)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_4529, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), object->mProperty_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 139)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 135)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor_6012 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 143)) ;
  var_enumeratorDescriptor_6012.addAssign_operation (var_stringTypeIndex_4976, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 144)) ;
  var_enumeratorDescriptor_6012.addAssign_operation (var_associatedListTypeIndex_4842, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 145)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription_6225 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 147)) ;
  var_addAssignOperatorDescription_6225.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 148)), var_stringTypeIndex_4976, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 148)) ;
  cEnumerator_typedPropertyList enumerator_6357 (var_listTypedAttributeList_4260, kENUMERATION_UP) ;
  while (enumerator_6357.hasCurrentObject ()) {
    var_addAssignOperatorDescription_6225.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 150)), enumerator_6357.current_mPropertyTypeProxy (HERE), enumerator_6357.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 150)) ;
    enumerator_6357.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mListmapTypeName, var_getterMap_4619, var_setterMap_4644, var_instanceMethodMap_4688, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 153)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex_6977 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (object->mProperty_mListmapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 166)), object->mProperty_mListmapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 166)), var_listElementTypeIndex_6977 COMMA_SOURCE_FILE ("type-listmap.galgas", 164)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mListmapTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-listmap.galgas", 174)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("type-listmap.galgas", 175)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 177)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 178)), var_listTypedAttributeList_4260, var_constructorMap_4529, var_getterMap_4619, var_setterMap_4644, var_instanceMethodMap_4688, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 184)), var_enumeratorDescriptor_6012, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-listmap.galgas", 186)), var_addAssignOperatorDescription_6225, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 188)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 189)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 190)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 191)), GALGAS_bool (false), var_listElementTypeIndex_6977, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (object->mProperty_mListmapTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-listmap.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 195)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-listmap.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 170)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                               extensionMethod_listmapDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterInSemanticContext (defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@listmapDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_nameForUsefulness_8604 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mListmapTypeName, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 213)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8604, var_nameForUsefulness_8604, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 214)) ;
  }
  GALGAS_lstring var_associatedTypeNameForUsefulness_8769 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mAssociatedListTypeName, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 215)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8604, var_associatedTypeNameForUsefulness_8769 COMMA_SOURCE_FILE ("type-listmap.galgas", 216)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_8952 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mProperty_mListmapTypeName.getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 217)), object->mProperty_mListmapTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 217))  COMMA_SOURCE_FILE ("type-listmap.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 217)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8604, var_elementTypeNameForUsefulness_8952 COMMA_SOURCE_FILE ("type-listmap.galgas", 218)) ;
  }
  GALGAS_typeKindEnum var_typeKindEnum_9294 ;
  GALGAS_typedPropertyList var_listTypeAttributeList_9351 ;
  GALGAS_bool joker_9256_3 ; // Joker input parameter
  GALGAS_bool joker_9256_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9256_1 ; // Joker input parameter
  GALGAS_bool joker_9300 ; // Joker input parameter
  GALGAS_propertyMap joker_9357_19 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9357_18 ; // Joker input parameter
  GALGAS_constructorMap joker_9357_17 ; // Joker input parameter
  GALGAS_getterMap joker_9357_16 ; // Joker input parameter
  GALGAS_setterMap joker_9357_15 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9357_14 ; // Joker input parameter
  GALGAS_classMethodMap joker_9357_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9357_12 ; // Joker input parameter
  GALGAS_operators joker_9357_11 ; // Joker input parameter
  GALGAS_functionSignature joker_9357_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9357_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_9357_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9357_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9357_6 ; // Joker input parameter
  GALGAS_bool joker_9357_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9357_4 ; // Joker input parameter
  GALGAS_string joker_9357_3 ; // Joker input parameter
  GALGAS_string joker_9357_2 ; // Joker input parameter
  GALGAS_headerKind joker_9357_1 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mAssociatedListTypeName, joker_9256_3, joker_9256_2, joker_9256_1, var_typeKindEnum_9294, joker_9300, var_listTypeAttributeList_9351, joker_9357_19, joker_9357_18, joker_9357_17, joker_9357_16, joker_9357_15, joker_9357_14, joker_9357_13, joker_9357_12, joker_9357_11, joker_9357_10, joker_9357_9, joker_9357_8, joker_9357_7, joker_9357_6, joker_9357_5, joker_9357_4, joker_9357_3, joker_9357_2, joker_9357_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 220)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_9294.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 229)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 230)), GALGAS_string ("associated type should be a list type"), fixItArray1  COMMA_SOURCE_FILE ("type-listmap.galgas", 230)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (object->mProperty_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 234)), GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mListmapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 236)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 237)), var_listTypeAttributeList_9351, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (object->mProperty_mListmapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 239)), object->mProperty_mListmapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 239))  COMMA_SOURCE_FILE ("type-listmap.galgas", 235))  COMMA_SOURCE_FILE ("type-listmap.galgas", 233)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listmapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                         extensionMethod_listmapDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listmapDeclarationAST_semanticAnalysis (defineExtensionMethod_listmapDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@listmapTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listmapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_10857 (object->mProperty_mAssociatedListTypedAttributeList, kENUMERATION_UP) ;
  while (enumerator_10857.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_10857.current_mPropertyTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 260)) ;
    enumerator_10857.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 264)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 265)) COMMA_SOURCE_FILE ("type-listmap.galgas", 263))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 268)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 269)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 270)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 271)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 272)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 273)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 274)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 275)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 276)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 277)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 278)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 279)) COMMA_SOURCE_FILE ("type-listmap.galgas", 267))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 267)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listmapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                              extensionMethod_listmapTypeForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_listmapTypeForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@listmapTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listmapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 289)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mAssociatedListMapElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 290)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 292)), object->mProperty_mAssociatedListTypeIndex.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 293)), object->mProperty_mAssociatedListTypedAttributeList COMMA_SOURCE_FILE ("type-listmap.galgas", 291))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listmapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                                     extensionMethod_listmapTypeForGeneration_appendSpecificImplementation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_listmapTypeForGeneration_appendSpecificImplementation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension getter '@dictDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_dictDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  result_outString = GALGAS_string ("dict @").add_operation (object->mProperty_mDictTypeName.getter_string (SOURCE_FILE ("type-dict.galgas", 15)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 15)) ;
//---
  return result_outString ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_dictDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                          extensionGetter_dictDeclarationAST_keyRepresentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_dictDeclarationAST_keyRepresentation (defineExtensionGetter_dictDeclarationAST_keyRepresentation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@dictDeclarationAST addAssociatedElement'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dictDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_2757 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 68)) ;
  var_structAttributeList_2757.addAssign_operation (object->mProperty_mKeyTypeName, GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 69)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 69))  COMMA_SOURCE_FILE ("type-dict.galgas", 69)) ;
  cEnumerator_propertyInCollectionListAST enumerator_2854 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_2854.hasCurrentObject ()) {
    var_structAttributeList_2757.addAssign_operation (enumerator_2854.current_mPropertyTypeName (HERE), enumerator_2854.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 71))  COMMA_SOURCE_FILE ("type-dict.galgas", 71)) ;
    enumerator_2854.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mProperty_mIsPredefined, GALGAS_lstring::constructor_new (object->mProperty_mDictTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 75)), object->mProperty_mDictTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 75)), var_structAttributeList_2757, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-dict.galgas", 73))  COMMA_SOURCE_FILE ("type-dict.galgas", 73)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dictDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                             extensionMethod_dictDeclarationAST_addAssociatedElement) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dictDeclarationAST_addAssociatedElement (defineExtensionMethod_dictDeclarationAST_addAssociatedElement, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@dictDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_dictionary_3982 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mDictTypeName.getter_string (SOURCE_FILE ("type-dict.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 92)), object->mProperty_mDictTypeName.getter_location (SOURCE_FILE ("type-dict.galgas", 92))  COMMA_SOURCE_FILE ("type-dict.galgas", 92)) ;
  {
  const GALGAS_dictDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_dictionary_3982, temp_0, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 93)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mKeyTypeName.getter_string (SOURCE_FILE ("type-dict.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 94)), object->mProperty_mKeyTypeName.getter_location (SOURCE_FILE ("type-dict.galgas", 94))  COMMA_SOURCE_FILE ("type-dict.galgas", 94)) COMMA_SOURCE_FILE ("type-dict.galgas", 94)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_4229 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_4229.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_4229.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 96)), enumerator_4229.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 96))  COMMA_SOURCE_FILE ("type-dict.galgas", 96)) COMMA_SOURCE_FILE ("type-dict.galgas", 96)) ;
    }
    enumerator_4229.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dictDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                                extensionMethod_dictDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dictDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_dictDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@dictDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dictDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_keyTypeIndex_5190 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mKeyTypeName.getter_string (SOURCE_FILE ("type-dict.galgas", 110)), var_keyTypeIndex_5190 COMMA_SOURCE_FILE ("type-dict.galgas", 110)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5248 = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_keyTypeIndex_5190, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 112)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_5369 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_5405 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_5405.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_5405.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_usesSelectorsInInsertAndSearch_5369.boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_5405.current_mValue (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 118)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 118)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_5369 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_5405.current_mValue (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 122)), GALGAS_string ("unknown attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-dict.galgas", 122)) ;
    }
    enumerator_5405.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_5681 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 126)) ;
  GALGAS_getterMap var_getterMap_5772 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5772, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 127)) ;
  }
  GALGAS_setterMap var_setterMap_5797 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 128)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5841 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 129)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_5681, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyDict"), object->mProperty_mDictTypeName.getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 131)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_5772, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), object->mProperty_mKeyTypeName.getter_string (HERE), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 139)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5772, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 146)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_6507 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 154)) ;
  GALGAS_typedPropertyList var_typedPropertyList_6551 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 155)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_6629 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 156)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_6629.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 157)), var_keyTypeIndex_5190, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 157)) ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = var_usesSelectorsInInsertAndSearch_5369.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_6507.addAssign_operation (temp_4.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 159)), var_keyTypeIndex_5190, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 161)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 158)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_6978 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 163)) ;
  GALGAS_string temp_6 ;
  const enumGalgasBool test_7 = var_usesSelectorsInInsertAndSearch_5369.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_6978.addAssign_operation (temp_6.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 165)), var_keyTypeIndex_5190, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 167)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 164)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation_7216 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 169)) ;
  cEnumerator_propertyInCollectionListAST enumerator_7279 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_7279.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_7391 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7279.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7391 COMMA_SOURCE_FILE ("type-dict.galgas", 171)) ;
    }
    GALGAS_bool var_hasGetter_7410 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_7435 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_7462 = GALGAS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_6629.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 175)), var_attributeTypeIndex_7391, enumerator_7279.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 175)) ;
    var_typedPropertyList_6551.addAssign_operation (var_attributeTypeIndex_7391, enumerator_7279.current_mPropertyName (HERE), var_hasSetter_7435, var_hasGetter_7410, var_hasSelector_7462  COMMA_SOURCE_FILE ("type-dict.galgas", 176)) ;
    var_typesToIncludeInHeaderCompilation_7216.addAssign_operation (var_attributeTypeIndex_7391  COMMA_SOURCE_FILE ("type-dict.galgas", 177)) ;
    var_enumerationDescriptor_5248.addAssign_operation (var_attributeTypeIndex_7391, enumerator_7279.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 178))  COMMA_SOURCE_FILE ("type-dict.galgas", 178)) ;
    GALGAS_lstring temp_8 ;
    const enumGalgasBool test_9 = var_usesSelectorsInInsertAndSearch_5369.boolEnum () ;
    if (kBoolTrue == test_9) {
      temp_8 = enumerator_7279.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_9) {
      temp_8 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 180)) ;
    }
    var_insertMethodFormalArgumentList_6507.addAssign_operation (temp_8, var_attributeTypeIndex_7391, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 182)), enumerator_7279.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 179)) ;
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = var_usesSelectorsInInsertAndSearch_5369.boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_7279.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 185)) ;
    }
    var_removeMethodFormalArgumentList_6978.addAssign_operation (temp_10, var_attributeTypeIndex_7391, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-dict.galgas", 187)), enumerator_7279.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 184)) ;
    enumerator_7279.gotoNextObject () ;
  }
  {
  var_setterMap_5797.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), object->mProperty_mDictTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 192)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 193)), var_removeMethodFormalArgumentList_6978, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 196)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 191)) ;
  }
  {
  var_instanceMethodMap_5841.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("searchKey"), object->mProperty_mDictTypeName.getter_location (SOURCE_FILE ("type-dict.galgas", 201))  COMMA_SOURCE_FILE ("type-dict.galgas", 201)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 202)), var_removeMethodFormalArgumentList_6978, object->mProperty_mDictTypeName.getter_location (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 206)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 200)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_8872 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_8872.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_8896 = GALGAS_lstring::constructor_new (enumerator_8872.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 211)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 211)), enumerator_8872.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 211))  COMMA_SOURCE_FILE ("type-dict.galgas", 211)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_9083 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8872.current_mPropertyTypeName (HERE), var_attributeTypeIndex_9083 COMMA_SOURCE_FILE ("type-dict.galgas", 212)) ;
    }
    {
    GALGAS_functionSignature temp_12 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 216)) ;
    temp_12.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 216)), var_keyTypeIndex_5190, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 216)) ;
    var_getterMap_5772.setter_insertOrReplace (var_accessorName_8896, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 215)), temp_12, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 217)), GALGAS_bool (true), var_attributeTypeIndex_9083, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 220)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 213)) ;
    }
    enumerator_8872.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_9470 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_9470.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_9494 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9470.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 227)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-dict.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 227)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 227)), enumerator_9470.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 228))  COMMA_SOURCE_FILE ("type-dict.galgas", 226)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_9784 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9470.current_mPropertyTypeName (HERE), var_attributeTypeIndex_9784 COMMA_SOURCE_FILE ("type-dict.galgas", 230)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_9825 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 235)) ;
    var_accessorFormalArgumentList_9825.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 236)), var_attributeTypeIndex_9784, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 236)), enumerator_9470.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 236)) ;
    var_accessorFormalArgumentList_9825.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 237)), var_keyTypeIndex_5190, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 237)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 237)) ;
    {
    var_setterMap_5797.setter_insertOrReplace (var_accessorName_9494, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 240)), var_accessorFormalArgumentList_9825, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 243)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 238)) ;
    }
    enumerator_9470.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mDictTypeName, var_getterMap_5772, var_setterMap_5797, var_instanceMethodMap_5841, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 248)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy_10769 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (object->mProperty_mDictTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 261)), object->mProperty_mDictTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 261)), var_elementTypeProxy_10769 COMMA_SOURCE_FILE ("type-dict.galgas", 259)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mDictTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dict.galgas", 269)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-dict.galgas", 270)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 272)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 273)), var_typedPropertyList_6551, var_constructorMap_5681, var_getterMap_5772, var_setterMap_5797, var_instanceMethodMap_5841, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 279)), var_enumerationDescriptor_5248, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-dict.galgas", 281)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-dict.galgas", 281)) COMMA_SOURCE_FILE ("type-dict.galgas", 281)), var_argumentTypeListForAddAssignWithFieldExpressionList_6629, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 283)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 284)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 285)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 286)), GALGAS_bool (false), var_elementTypeProxy_10769, GALGAS_string ("emptyDict"), GALGAS_string ("dict-").add_operation (object->mProperty_mDictTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-dict.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 290)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-dict.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 265)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dictDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                               extensionMethod_dictDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dictDeclarationAST_enterInSemanticContext (defineExtensionMethod_dictDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'check_K_escapeCharacters'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_check_5F_K_5F_escapeCharacters (GALGAS_lstring inArgument_inString,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_12111 (inArgument_inString.getter_string (SOURCE_FILE ("type-dict.galgas", 300)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 300)), kENUMERATION_UP) ;
  while (enumerator_12111.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_12144 = enumerator_12111.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 301)) ;
    {
    GALGAS_string joker_12231 ; // Joker input parameter
    var_explodedArray_12144.setter_popFirst (joker_12231, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 302)) ;
    }
    cEnumerator_stringlist enumerator_12261 (var_explodedArray_12144, kENUMERATION_UP) ;
    while (enumerator_12261.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_12261.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 304)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_12318 = enumerator_12261.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 305)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_12318.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (inArgument_inString.getter_location (SOURCE_FILE ("type-dict.galgas", 307)), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 307)) ;
            }
          }
        }
      }
      enumerator_12261.gotoNextObject () ;
    }
    enumerator_12111.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'check_K_L_escapeCharacters'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_check_5F_K_5F_L_5F_escapeCharacters (GALGAS_lstring inArgument_inString,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_12809 (inArgument_inString.getter_string (SOURCE_FILE ("type-dict.galgas", 317)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 317)), kENUMERATION_UP) ;
  while (enumerator_12809.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_12842 = enumerator_12809.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 318)) ;
    {
    GALGAS_string joker_12929 ; // Joker input parameter
    var_explodedArray_12842.setter_popFirst (joker_12929, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 319)) ;
    }
    cEnumerator_stringlist enumerator_12959 (var_explodedArray_12842, kENUMERATION_UP) ;
    while (enumerator_12959.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_12959.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 321)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_13016 = enumerator_12959.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 322)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_13016.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_13016.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-dict.galgas", 323)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (inArgument_inString.getter_location (SOURCE_FILE ("type-dict.galgas", 324)), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 324)) ;
            }
          }
        }
      }
      enumerator_12959.gotoNextObject () ;
    }
    enumerator_12809.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Once function 'forbiddenKeysForMapAndDict'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_stringset onceFunction_forbiddenKeysForMapAndDict (C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dict.galgas", 334)) ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 335)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-dict.galgas", 336)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-dict.galgas", 337)) ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForMapAndDict ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset function_forbiddenKeysForMapAndDict (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict) {
    gOnceFunctionResult_forbiddenKeysForMapAndDict = onceFunction_forbiddenKeysForMapAndDict (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForMapAndDict ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_forbiddenKeysForMapAndDict (void) {
  gOnceFunctionResult_forbiddenKeysForMapAndDict.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForMapAndDict (NULL,
                                                                        releaseOnceFunctionResult_forbiddenKeysForMapAndDict) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForMapAndDict [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_forbiddenKeysForMapAndDict (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForMapAndDict (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForMapAndDict ("forbiddenKeysForMapAndDict",
                                                                            functionWithGenericHeader_forbiddenKeysForMapAndDict,
                                                                            & kTypeDescriptor_GALGAS_stringset,
                                                                            0,
                                                                            functionArgs_forbiddenKeysForMapAndDict) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@dictDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_nameForUsefulness_14029 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mDictTypeName, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 351)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14029, var_nameForUsefulness_14029, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 352)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_14188 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mProperty_mDictTypeName.getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 353)), object->mProperty_mDictTypeName.getter_location (SOURCE_FILE ("type-dict.galgas", 353))  COMMA_SOURCE_FILE ("type-dict.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 353)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14029, var_elementTypeNameForUsefulness_14188 COMMA_SOURCE_FILE ("type-dict.galgas", 354)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_14430 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 356)) ;
  GALGAS_propertyIndexMap var_attributeMap_14468 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 357)) ;
  cEnumerator_propertyInCollectionListAST enumerator_14499 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_14499.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_14540 = function_typeNameForUsefulEntitiesGraph (enumerator_14499.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 359)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14029, var_propertyTypeNameForUsefulness_14540 COMMA_SOURCE_FILE ("type-dict.galgas", 360)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_14710 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_14499.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 361)) ;
    GALGAS_bool var_hasSetter_14789 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_14814 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_14841 = GALGAS_bool (false) ;
    var_typedAttributeList_14430.addAssign_operation (var_t_14710, enumerator_14499.current_mPropertyName (HERE), var_hasSetter_14789, var_hasGetter_14814, var_hasSelector_14841  COMMA_SOURCE_FILE ("type-dict.galgas", 365)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 371)).getter_hasKey (enumerator_14499.current_mPropertyName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-dict.galgas", 371)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_m_15047 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_15124 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 373)), kENUMERATION_UP) ;
        while (enumerator_15124.hasCurrentObject ()) {
          var_m_15047.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_15124.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 374)) ;
          enumerator_15124.gotoNextObject () ;
        }
        var_m_15047.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 376)) ;
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_14499.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 377)), var_m_15047, fixItArray1  COMMA_SOURCE_FILE ("type-dict.galgas", 377)) ;
      }
    }
    {
    var_attributeMap_14468.setter_insertKey (enumerator_14499.current_mPropertyName (HERE), var_t_14710, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 379)) ;
    }
    enumerator_14499.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("dict ").add_operation (object->mProperty_mDictTypeName.getter_string (SOURCE_FILE ("type-dict.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 383)), GALGAS_dictTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mDictTypeName, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 385)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (object->mProperty_mDictTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 386)), object->mProperty_mDictTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 386)), object->mProperty_mDictTypeName, var_typedAttributeList_14430, object->mProperty_mKeyTypeName  COMMA_SOURCE_FILE ("type-dict.galgas", 384))  COMMA_SOURCE_FILE ("type-dict.galgas", 382)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dictDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                         extensionMethod_dictDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dictDeclarationAST_semanticAnalysis (defineExtensionMethod_dictDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@dictTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dictTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictTypeForGeneration * object = (const cPtr_dictTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_dictTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 411)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 412)), object->mProperty_mTypedAttributeList COMMA_SOURCE_FILE ("type-dict.galgas", 410))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 416)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 417)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 418)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 419)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 420)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 421)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 422)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 423)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 424)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 425)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 426)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 427)) COMMA_SOURCE_FILE ("type-dict.galgas", 415))), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 415)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dictTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_dictTypeForGeneration.mSlotID,
                                              extensionMethod_dictTypeForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dictTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_dictTypeForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@dictTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dictTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictTypeForGeneration * object = (const cPtr_dictTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_dictTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 455)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 456)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 458)), object->mProperty_mTypedAttributeList, object->mProperty_mKeyTypeName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("type-dict.galgas", 460)) COMMA_SOURCE_FILE ("type-dict.galgas", 457))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dictTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_dictTypeForGeneration.mSlotID,
                                                     extensionMethod_dictTypeForGeneration_appendSpecificImplementation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dictTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_dictTypeForGeneration_appendSpecificImplementation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension getter '@mapDeclarationAST keyRepresentation'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_mapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  result_outString = GALGAS_string ("map @").add_operation (object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 49)) ;
//---
  return result_outString ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_mapDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                          extensionGetter_mapDeclarationAST_keyRepresentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_mapDeclarationAST_keyRepresentation (defineExtensionGetter_mapDeclarationAST_keyRepresentation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@mapDeclarationAST addAssociatedElement'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_mapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_6639 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 186)) ;
  var_structAttributeList_6639.addAssign_operation (GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("type-map.galgas", 188)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 189)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 191))  COMMA_SOURCE_FILE ("type-map.galgas", 187)) ;
  cEnumerator_propertyInCollectionListAST enumerator_6788 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_6788.hasCurrentObject ()) {
    var_structAttributeList_6639.addAssign_operation (enumerator_6788.current_mPropertyTypeName (HERE), enumerator_6788.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 197))  COMMA_SOURCE_FILE ("type-map.galgas", 193)) ;
    enumerator_6788.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mProperty_mIsPredefined, GALGAS_lstring::constructor_new (object->mProperty_mMapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 201)), object->mProperty_mMapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 201)), var_structAttributeList_6639, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map.galgas", 199))  COMMA_SOURCE_FILE ("type-map.galgas", 199)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_mapDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                             extensionMethod_mapDeclarationAST_addAssociatedElement) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_mapDeclarationAST_addAssociatedElement (defineExtensionMethod_mapDeclarationAST_addAssociatedElement, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@mapDeclarationAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_key_7937 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 217)), object->mProperty_mMapTypeName.getter_location (SOURCE_FILE ("type-map.galgas", 217))  COMMA_SOURCE_FILE ("type-map.galgas", 217)) ;
  {
  const GALGAS_mapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7937, temp_0, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 218)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_8080 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_8080.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_8080.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 220)), enumerator_8080.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 220))  COMMA_SOURCE_FILE ("type-map.galgas", 220)) COMMA_SOURCE_FILE ("type-map.galgas", 220)) ;
    }
    enumerator_8080.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_mapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                                extensionMethod_mapDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_mapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_mapDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@mapDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_mapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                      const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                      const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_9053 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_9053 COMMA_SOURCE_FILE ("type-map.galgas", 234)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_locationTypeProxy_9188 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("location"), var_locationTypeProxy_9188 COMMA_SOURCE_FILE ("type-map.galgas", 236)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex_9320 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_9320 COMMA_SOURCE_FILE ("type-map.galgas", 238)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 240)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_9320, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 240)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_9401 = temp_0 ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_9484 = GALGAS_bool (false) ;
  GALGAS_bool var_activateSuggestion_9517 = GALGAS_bool (true) ;
  cEnumerator_lstringlist enumerator_9552 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_9552.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, enumerator_9552.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_usesSelectorsInInsertAndSearch_9484.boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_9552.current_mValue (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 247)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-map.galgas", 247)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_9484 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_9552.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("noSuggestion"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_activateSuggestion_9517.operator_not (SOURCE_FILE ("type-map.galgas", 251)).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_9552.current_mValue (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 252)), GALGAS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("type-map.galgas", 252)) ;
            }
          }
          var_activateSuggestion_9517 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_4) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_9552.current_mValue (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 256)), GALGAS_string ("unknown attribute"), fixItArray7  COMMA_SOURCE_FILE ("type-map.galgas", 256)) ;
      }
    }
    enumerator_9552.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_9991 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 260)) ;
  GALGAS_getterMap var_getterMap_10082 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_10082, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 261)) ;
  }
  GALGAS_setterMap var_setterMap_10106 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 262)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_10150 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 263)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_9991, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 269)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 265)) ;
  }
  {
  routine_enterConstructorWithArgument (var_constructorMap_9991, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("mapWithMapToOverride"), object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 276)), GALGAS_string ("inMap"), object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 278)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 272)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10082, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("levels"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 282)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments (var_getterMap_10082, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 289)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10082, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 300)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10082, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 307)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_10082, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 314)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_10082, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 323)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (var_getterMap_10082, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("overriddenMap"), object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 336)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 332)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10082, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 339)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_12290 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 347)) ;
  GALGAS_typedPropertyList var_typedPropertyList_12345 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 348)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_12442 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 349)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_12442.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 350)), var_lstringTypeIndex_9320, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 350)) ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = var_usesSelectorsInInsertAndSearch_9484.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_12290.addAssign_operation (temp_8.getter_nowhere (SOURCE_FILE ("type-map.galgas", 352)), var_lstringTypeIndex_9320, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 354)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 351)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_12802 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 356)) ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = var_usesSelectorsInInsertAndSearch_9484.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_12802.addAssign_operation (temp_10.getter_nowhere (SOURCE_FILE ("type-map.galgas", 358)), var_lstringTypeIndex_9320, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 360)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 357)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation_13067 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 362)) ;
  cEnumerator_propertyInCollectionListAST enumerator_13098 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_13098.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_13210 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13098.current_mPropertyTypeName (HERE), var_attributeTypeIndex_13210 COMMA_SOURCE_FILE ("type-map.galgas", 364)) ;
    }
    GALGAS_bool var_hasGetter_13229 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_13254 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_13281 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_13327 (enumerator_13098.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13327.hasCurrentObject ()) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsEqual, enumerator_13327.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_12) {
          var_hasSelector_13281 = GALGAS_bool (true) ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            GALGAS_bool test_14 = var_hasSelector_13281 ;
            if (kBoolTrue == test_14.boolEnum ()) {
              test_14 = var_usesSelectorsInInsertAndSearch_9484 ;
            }
            test_13 = test_14.boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticWarning (enumerator_13327.current_mValue (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 372)), GALGAS_string ("%selector useless, map has %selectors attributes"), fixItArray15  COMMA_SOURCE_FILE ("type-map.galgas", 372)) ;
            }
          }
        }
      }
      enumerator_13327.gotoNextObject () ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_12442.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 376)), var_attributeTypeIndex_13210, enumerator_13098.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 376)) ;
    var_typedPropertyList_12345.addAssign_operation (var_attributeTypeIndex_13210, enumerator_13098.current_mPropertyName (HERE), var_hasSetter_13254, var_hasGetter_13229, var_hasSelector_13281  COMMA_SOURCE_FILE ("type-map.galgas", 377)) ;
    var_typesToIncludeInHeaderCompilation_13067.addAssign_operation (var_attributeTypeIndex_13210  COMMA_SOURCE_FILE ("type-map.galgas", 378)) ;
    var_enumerationDescriptor_9401.addAssign_operation (var_attributeTypeIndex_13210, enumerator_13098.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 379))  COMMA_SOURCE_FILE ("type-map.galgas", 379)) ;
    GALGAS_bool test_16 = var_usesSelectorsInInsertAndSearch_9484 ;
    if (kBoolTrue != test_16.boolEnum ()) {
      test_16 = var_hasSelector_13281 ;
    }
    GALGAS_lstring temp_17 ;
    const enumGalgasBool test_18 = test_16.boolEnum () ;
    if (kBoolTrue == test_18) {
      temp_17 = enumerator_13098.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_18) {
      temp_17 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 381)) ;
    }
    var_insertMethodFormalArgumentList_12290.addAssign_operation (temp_17, var_attributeTypeIndex_13210, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 383)), enumerator_13098.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 380)) ;
    GALGAS_bool test_19 = var_usesSelectorsInInsertAndSearch_9484 ;
    if (kBoolTrue != test_19.boolEnum ()) {
      test_19 = var_hasSelector_13281 ;
    }
    GALGAS_lstring temp_20 ;
    const enumGalgasBool test_21 = test_19.boolEnum () ;
    if (kBoolTrue == test_21) {
      temp_20 = enumerator_13098.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_21) {
      temp_20 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 386)) ;
    }
    var_removeMethodFormalArgumentList_12802.addAssign_operation (temp_20, var_attributeTypeIndex_13210, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 388)), enumerator_13098.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 385)) ;
    enumerator_13098.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_14407 (object->mProperty_mInsertMethodList, kENUMERATION_UP) ;
  while (enumerator_14407.hasCurrentObject ()) {
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = var_setterMap_10106.getter_hasKey (enumerator_14407.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 393)) COMMA_SOURCE_FILE ("type-map.galgas", 393)).boolEnum () ;
      if (kBoolTrue == test_22) {
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (enumerator_14407.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 394)), GALGAS_string ("the '").add_operation (enumerator_14407.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 394)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 394)), fixItArray23  COMMA_SOURCE_FILE ("type-map.galgas", 394)) ;
      }
    }
    if (kBoolFalse == test_22) {
      {
      var_setterMap_10106.setter_insertOrReplace (enumerator_14407.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 398)), var_insertMethodFormalArgumentList_12290, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 401)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 396)) ;
      }
    }
    enumerator_14407.gotoNextObject () ;
  }
  cEnumerator_mapRemoveMethodListAST enumerator_14854 (object->mProperty_mRemoveMethodList, kENUMERATION_UP) ;
  while (enumerator_14854.hasCurrentObject ()) {
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      test_24 = var_setterMap_10106.getter_hasKey (enumerator_14854.current_mMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 408)) COMMA_SOURCE_FILE ("type-map.galgas", 408)).boolEnum () ;
      if (kBoolTrue == test_24) {
        TC_Array <C_FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (enumerator_14854.current_mMethodName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 409)), GALGAS_string ("the '").add_operation (enumerator_14854.current_mMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 409)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 409)), fixItArray25  COMMA_SOURCE_FILE ("type-map.galgas", 409)) ;
      }
    }
    if (kBoolFalse == test_24) {
      {
      var_setterMap_10106.setter_insertOrReplace (enumerator_14854.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 413)), var_removeMethodFormalArgumentList_12802, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 416)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 411)) ;
      }
    }
    enumerator_14854.gotoNextObject () ;
  }
  cEnumerator_mapSearchMethodListAST enumerator_15350 (object->mProperty_mSearchMethodList, kENUMERATION_UP) ;
  while (enumerator_15350.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_searchMethodFormalArgumentList_15392 = var_removeMethodFormalArgumentList_12802 ;
    enumGalgasBool test_26 = kBoolTrue ;
    if (kBoolTrue == test_26) {
      test_26 = enumerator_15350.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_26) {
        GALGAS_lstring temp_27 ;
        const enumGalgasBool test_28 = var_usesSelectorsInInsertAndSearch_9484.boolEnum () ;
        if (kBoolTrue == test_28) {
          temp_27 = GALGAS_string ("keyLocation").getter_nowhere (SOURCE_FILE ("type-map.galgas", 426)) ;
        }else if (kBoolFalse == test_28) {
          temp_27 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 426)) ;
        }
        var_searchMethodFormalArgumentList_15392.addAssign_operation (temp_27, var_locationTypeProxy_9188, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 428)), GALGAS_string ("outKeyLocation")  COMMA_SOURCE_FILE ("type-map.galgas", 425)) ;
      }
    }
    {
    var_instanceMethodMap_10150.setter_insertKey (enumerator_15350.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 433)), var_searchMethodFormalArgumentList_15392, enumerator_15350.current_mSearchMethodName (HERE).getter_location (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 437)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 431)) ;
    }
    enumerator_15350.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_15988 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_15988.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_16012 = GALGAS_lstring::constructor_new (enumerator_15988.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 443)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 443)), enumerator_15988.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 443))  COMMA_SOURCE_FILE ("type-map.galgas", 443)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_16199 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_15988.current_mPropertyTypeName (HERE), var_attributeTypeIndex_16199 COMMA_SOURCE_FILE ("type-map.galgas", 444)) ;
    }
    {
    GALGAS_functionSignature temp_29 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 448)) ;
    temp_29.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 448)), var_stringTypeIndex_9053, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 448)) ;
    var_getterMap_10082.setter_insertOrReplace (var_accessorName_16012, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 447)), temp_29, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 449)), GALGAS_bool (true), var_attributeTypeIndex_16199, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 452)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 445)) ;
    }
    enumerator_15988.gotoNextObject () ;
  }
  enumGalgasBool test_30 = kBoolTrue ;
  if (kBoolTrue == test_30) {
    test_30 = GALGAS_bool (kIsSupOrEqual, object->mProperty_mInsertOrReplaceDeclarationListAST.getter_length (SOURCE_FILE ("type-map.galgas", 457)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_30) {
      GALGAS_location var_insertOrReplaceLocation_16630 ;
      object->mProperty_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceLocation_16630, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 459)) ;
      {
      var_setterMap_10106.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation_16630  COMMA_SOURCE_FILE ("type-map.galgas", 461)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 462)), var_insertMethodFormalArgumentList_12290, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 465)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 460)) ;
      }
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_17060 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_17060.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_17084 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_17060.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 472)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-map.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 472)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 472)), enumerator_17060.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 473))  COMMA_SOURCE_FILE ("type-map.galgas", 471)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_17374 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_17060.current_mPropertyTypeName (HERE), var_attributeTypeIndex_17374 COMMA_SOURCE_FILE ("type-map.galgas", 475)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_17437 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 480)) ;
    var_accessorFormalArgumentList_17437.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 481)), var_attributeTypeIndex_17374, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 481)), enumerator_17060.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 481)) ;
    var_accessorFormalArgumentList_17437.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 482)), var_stringTypeIndex_9053, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 482)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-map.galgas", 482)) ;
    {
    var_setterMap_10106.setter_insertOrReplace (var_accessorName_17084, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 485)), var_accessorFormalArgumentList_17437, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 488)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 483)) ;
    }
    enumerator_17060.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mMapTypeName, var_getterMap_10082, var_setterMap_10106, var_instanceMethodMap_10150, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 493)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy_18356 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (object->mProperty_mMapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 506)), object->mProperty_mMapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 506)), var_elementTypeProxy_18356 COMMA_SOURCE_FILE ("type-map.galgas", 504)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mMapTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-map.galgas", 514)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-map.galgas", 515)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 517)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 518)), var_typedPropertyList_12345, var_constructorMap_9991, var_getterMap_10082, var_setterMap_10106, var_instanceMethodMap_10150, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 524)), var_enumerationDescriptor_9401, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map.galgas", 526)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-map.galgas", 526)) COMMA_SOURCE_FILE ("type-map.galgas", 526)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-map.galgas", 526)) COMMA_SOURCE_FILE ("type-map.galgas", 526)), var_argumentTypeListForAddAssignWithFieldExpressionList_12442, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 528)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 529)), object->mProperty_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 531)), GALGAS_bool (false), var_elementTypeProxy_18356, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (object->mProperty_mMapTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-map.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 535)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-map.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 510)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_mapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                               extensionMethod_mapDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_mapDeclarationAST_enterInSemanticContext (defineExtensionMethod_mapDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension method '@mapDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_nameForUsefulness_20370 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mMapTypeName, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 565)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_20370, var_nameForUsefulness_20370, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 566)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_20528 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mProperty_mMapTypeName.getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 567)), object->mProperty_mMapTypeName.getter_location (SOURCE_FILE ("type-map.galgas", 567))  COMMA_SOURCE_FILE ("type-map.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 567)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_20370, var_elementTypeNameForUsefulness_20528 COMMA_SOURCE_FILE ("type-map.galgas", 568)) ;
  }
  GALGAS_bool var_usesSelectorsInInsertAndSearch_20756 = GALGAS_bool (false) ;
  GALGAS_bool var_activateSuggestion_20789 = GALGAS_bool (true) ;
  cEnumerator_lstringlist enumerator_20824 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_20824.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_20824.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_usesSelectorsInInsertAndSearch_20756 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, enumerator_20824.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("noSuggestion"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_activateSuggestion_20789 = GALGAS_bool (false) ;
        }
      }
    }
    enumerator_20824.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_21059 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 580)) ;
  GALGAS_propertyIndexMap var_attributeMap_21097 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 581)) ;
  cEnumerator_propertyInCollectionListAST enumerator_21128 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_21128.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_21169 = function_typeNameForUsefulEntitiesGraph (enumerator_21128.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 583)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_20370, var_propertyTypeNameForUsefulness_21169 COMMA_SOURCE_FILE ("type-map.galgas", 584)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_21339 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_21128.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 585)) ;
    GALGAS_bool var_hasSetter_21418 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_21443 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_21470 = GALGAS_bool (false) ;
    var_typedAttributeList_21059.addAssign_operation (var_t_21339, enumerator_21128.current_mPropertyName (HERE), var_hasSetter_21418, var_hasGetter_21443, var_hasSelector_21470  COMMA_SOURCE_FILE ("type-map.galgas", 589)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 595)).getter_hasKey (enumerator_21128.current_mPropertyName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-map.galgas", 595)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_m_21676 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_21753 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 597)), kENUMERATION_UP) ;
        while (enumerator_21753.hasCurrentObject ()) {
          var_m_21676.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_21753.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 598)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 598)) ;
          enumerator_21753.gotoNextObject () ;
        }
        var_m_21676.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 600)) ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_21128.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 601)), var_m_21676, fixItArray3  COMMA_SOURCE_FILE ("type-map.galgas", 601)) ;
      }
    }
    {
    var_attributeMap_21097.setter_insertKey (enumerator_21128.current_mPropertyName (HERE), var_t_21339, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 603)) ;
    }
    enumerator_21128.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_21980 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 606)) ;
  cEnumerator_insertMethodListAST enumerator_22015 (object->mProperty_mInsertMethodList, kENUMERATION_UP) ;
  while (enumerator_22015.hasCurrentObject ()) {
    {
    var_insertMethodMap_21980.setter_insertKey (enumerator_22015.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 608)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_22015.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 609)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_22015.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 610)) ;
    }
    enumerator_22015.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_22244 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 613)) ;
  cEnumerator_mapSearchMethodListAST enumerator_22279 (object->mProperty_mSearchMethodList, kENUMERATION_UP) ;
  while (enumerator_22279.hasCurrentObject ()) {
    {
    var_searchMethodMap_22244.setter_insertKey (enumerator_22279.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 615)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_22279.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 616)) ;
    }
    enumerator_22279.gotoNextObject () ;
  }
  cEnumerator_mapRemoveMethodListAST enumerator_22445 (object->mProperty_mRemoveMethodList, kENUMERATION_UP) ;
  while (enumerator_22445.hasCurrentObject ()) {
    {
    var_insertMethodMap_21980.setter_insertKey (enumerator_22445.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 620)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_22445.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 621)) ;
    }
    enumerator_22445.gotoNextObject () ;
  }
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_22662 (object->mProperty_mInsertOrReplaceDeclarationListAST, kENUMERATION_UP) ;
  GALGAS_uint index_22621 ((uint32_t) 0) ;
  while (enumerator_22662.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, index_22621.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticWarning (enumerator_22662.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared"), fixItArray5  COMMA_SOURCE_FILE ("type-map.galgas", 626)) ;
      }
    }
    enumerator_22662.gotoNextObject () ;
    index_22621.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 624)) ;
  }
  GALGAS_bool var_hasInsertOrReplaceModifier_22845 = GALGAS_bool (kIsStrictSup, object->mProperty_mInsertOrReplaceDeclarationListAST.getter_length (SOURCE_FILE ("type-map.galgas", 629)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_hasInsertOrReplaceModifier_22845.operator_and (var_insertMethodMap_21980.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("type-map.galgas", 630)) COMMA_SOURCE_FILE ("type-map.galgas", 630)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location var_insertOrReplaceDeclarationLocation_23027 ;
      object->mProperty_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceDeclarationLocation_23027, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 632)) ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_23027, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray7  COMMA_SOURCE_FILE ("type-map.galgas", 633)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 637)), GALGAS_mapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 639)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (object->mProperty_mMapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 640)), object->mProperty_mMapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 640)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 640)), object->mProperty_mMapTypeName, var_typedAttributeList_21059, object->mProperty_mInsertMethodList, object->mProperty_mSearchMethodList, object->mProperty_mRemoveMethodList, var_hasInsertOrReplaceModifier_22845, var_activateSuggestion_20789  COMMA_SOURCE_FILE ("type-map.galgas", 638))  COMMA_SOURCE_FILE ("type-map.galgas", 636)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_mapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                         extensionMethod_mapDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_mapDeclarationAST_semanticAnalysis (defineExtensionMethod_mapDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@mapTypeForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_mapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 673)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 674)), object->mProperty_mTypedAttributeList, object->mProperty_mSearchMethodList COMMA_SOURCE_FILE ("type-map.galgas", 672))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 679)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 680)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 681)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 682)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 683)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 684)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 685)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 686)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 687)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 688)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 689)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 690)) COMMA_SOURCE_FILE ("type-map.galgas", 678))), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 678)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_mapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                              extensionMethod_mapTypeForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_mapTypeForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@mapTypeForGeneration appendDeclaration2'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_mapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_25813 (object->mProperty_mTypedAttributeList, kENUMERATION_UP) ;
  while (enumerator_25813.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_25813.current_mPropertyTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 701)) ;
    enumerator_25813.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 705)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 706)), object->mProperty_mTypedAttributeList COMMA_SOURCE_FILE ("type-map.galgas", 704))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_mapTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                              extensionMethod_mapTypeForGeneration_appendDeclaration_32_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_mapTypeForGeneration_appendDeclaration_32_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@mapTypeForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_mapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 717)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 718)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 720)), object->mProperty_mTypedAttributeList, object->mProperty_mInsertMethodList, object->mProperty_mSearchMethodList, object->mProperty_mRemoveMethodList, object->mProperty_mHasInsertOrReplaceModifier, object->mProperty_mActivateSuggestions COMMA_SOURCE_FILE ("type-map.galgas", 719))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_mapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                                     extensionMethod_mapTypeForGeneration_appendSpecificImplementation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_mapTypeForGeneration_appendSpecificImplementation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@mapProxyDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_key_1326 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mMapProxyTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 20)), object->mProperty_mMapProxyTypeName.getter_location (SOURCE_FILE ("type-map-proxy.galgas", 20))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 20)) ;
  {
  const GALGAS_mapProxyDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_1326, temp_0, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 21)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_1326, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mAssociatedMapTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 22)), object->mProperty_mAssociatedMapTypeName.getter_location (SOURCE_FILE ("type-map-proxy.galgas", 22))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 22)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 22)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_mapProxyDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                                extensionMethod_mapProxyDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_mapProxyDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@mapProxyDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_propertyMap joker_2466_1 ; // Joker input parameter
  GALGAS_constructorMap joker_2524_10 ; // Joker input parameter
  GALGAS_getterMap joker_2524_9 ; // Joker input parameter
  GALGAS_setterMap joker_2524_8 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_2524_7 ; // Joker input parameter
  GALGAS_classMethodMap joker_2524_6 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_2524_5 ; // Joker input parameter
  GALGAS_operators joker_2524_4 ; // Joker input parameter
  GALGAS_functionSignature joker_2524_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_2524_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_2524_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_2583_6 ; // Joker input parameter
  GALGAS_bool joker_2583_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_2583_4 ; // Joker input parameter
  GALGAS_string joker_2583_3 ; // Joker input parameter
  GALGAS_string joker_2583_2 ; // Joker input parameter
  GALGAS_headerKind joker_2583_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mAssociatedMapTypeName, joker_2422_3, joker_2422_2, joker_2422_1, var_typeKindEnum_2460, joker_2466_3, joker_2466_2, joker_2466_1, var_mapTypedAttributeList_2518, joker_2524_10, joker_2524_9, joker_2524_8, joker_2524_7, joker_2524_6, joker_2524_5, joker_2524_4, joker_2524_3, joker_2524_2, joker_2524_1, var_searchMethodList_2577, joker_2583_6, joker_2583_5, joker_2583_4, joker_2583_3, joker_2583_2, joker_2583_1, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 35)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_2460.objectCompare (GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("type-map-proxy.galgas", 45)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mAssociatedMapTypeName.getter_location (SOURCE_FILE ("type-map-proxy.galgas", 46)), GALGAS_string ("the @").add_operation (object->mProperty_mAssociatedMapTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 46)).add_operation (GALGAS_string (" should be an unique map type"), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 46)), fixItArray1  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 46)) ;
      var_mapTypedAttributeList_2518 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 47)) ;
    }
  }
  GALGAS_constructorMap var_constructorMap_2821 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 50)) ;
  GALGAS_getterMap var_getterMap_2912 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_2912, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 51)) ;
  }
  GALGAS_setterMap var_setterMap_2937 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 52)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_2981 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 53)) ;
  GALGAS_classMethodMap var_classMethodMap_3018 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 54)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedMapTypeIndex_3170 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mAssociatedMapTypeName, var_associatedMapTypeIndex_3170 COMMA_SOURCE_FILE ("type-map-proxy.galgas", 56)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_3299 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_3299 COMMA_SOURCE_FILE ("type-map-proxy.galgas", 58)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex_3431 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_3431 COMMA_SOURCE_FILE ("type-map-proxy.galgas", 60)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_mapProxyTypeProxy_3564 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mMapProxyTypeName, var_mapProxyTypeProxy_3564 COMMA_SOURCE_FILE ("type-map-proxy.galgas", 62)) ;
  }
  GALGAS_formalParameterSignature var_argList_3651 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 64)) ;
  var_argList_3651.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 65)), var_associatedMapTypeIndex_3170, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("type-map-proxy.galgas", 65)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 65)) ;
  var_argList_3651.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 66)), var_lstringTypeIndex_3431, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map-proxy.galgas", 66)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 66)) ;
  var_argList_3651.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 67)), var_mapProxyTypeProxy_3564, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map-proxy.galgas", 67)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 67)) ;
  {
  var_classMethodMap_3018.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 69))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 69)), var_argList_3651, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 68)) ;
  }
  {
  var_classMethodMap_3018.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeOptionalProxy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 74))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 74)), var_argList_3651, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 73)) ;
  }
  var_argList_3651 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 79)) ;
  var_argList_3651.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 80)), var_associatedMapTypeIndex_3170, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("type-map-proxy.galgas", 80)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 80)) ;
  var_argList_3651.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 81)), var_stringTypeIndex_3299, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map-proxy.galgas", 81)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 81)) ;
  var_argList_3651.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 82)), var_mapProxyTypeProxy_3564, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map-proxy.galgas", 82)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 82)) ;
  {
  var_classMethodMap_3018.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxyFromString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 84))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 84)), var_argList_3651, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 83)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_2821, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("null"), object->mProperty_mMapProxyTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 93)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 89)) ;
  }
  GALGAS_functionSignature var_constructorAttributeTypeList_4938 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 97)) ;
  var_constructorAttributeTypeList_4938.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 98)), var_associatedMapTypeIndex_3170, GALGAS_string ("inMap")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 98)) ;
  var_constructorAttributeTypeList_4938.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 99)), var_lstringTypeIndex_3431, GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 99)) ;
  cEnumerator_mapSearchMethodListAST enumerator_5147 (var_searchMethodList_2577, kENUMERATION_UP) ;
  while (enumerator_5147.hasCurrentObject ()) {
    {
    var_constructorMap_2821.setter_insertKey (enumerator_5147.current_mSearchMethodName (HERE), var_constructorAttributeTypeList_4938, GALGAS_bool (true), var_mapProxyTypeProxy_3564, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 101)) ;
    }
    enumerator_5147.gotoNextObject () ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2912, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isSolved"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 109)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2912, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isNull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 116)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2912, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isRegular"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 123)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2912, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lkey"), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 130)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2912, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("key"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 137)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2912, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 144)) ;
  }
  GALGAS_getterMap var_inheritedGetterMap_6483 = var_getterMap_2912 ;
  cEnumerator_typedPropertyList enumerator_6529 (var_mapTypedAttributeList_2518, kENUMERATION_UP) ;
  while (enumerator_6529.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_inheritedGetterMap_6483.getter_hasKey (enumerator_6529.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map-proxy.galgas", 154)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 154)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s_6612 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_6661 (var_inheritedGetterMap_6483.getter_keySet (SOURCE_FILE ("type-map-proxy.galgas", 156)), kENUMERATION_UP) ;
        while (enumerator_6661.hasCurrentObject ()) {
          var_s_6612.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_6661.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 157)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 157)) ;
          if (enumerator_6661.hasNextObject ()) {
            var_s_6612.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 158)) ;
          }
          enumerator_6661.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_6529.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map-proxy.galgas", 160)), GALGAS_string ("the map has a associated map proxy, which has predefined getters: ").add_operation (var_s_6612, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 160)).add_operation (GALGAS_string ("; you cannot use theses names for naming an attribute of this map"), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 160)), fixItArray3  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 160)) ;
      }
    }
    if (kBoolFalse == test_2) {
      {
      var_getterMap_2912.setter_insertKey (enumerator_6529.current_mPropertyName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map-proxy.galgas", 165)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 166)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 167)), GALGAS_bool (true), enumerator_6529.current_mPropertyTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map-proxy.galgas", 170)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 163)) ;
      }
    }
    enumerator_6529.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mMapProxyTypeName, var_getterMap_2912, var_setterMap_2937, var_instanceMethodMap_2981, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 176)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mMapProxyTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-map-proxy.galgas", 191)), GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("type-map-proxy.galgas", 192)), GALGAS_bool (false), var_mapTypedAttributeList_2518, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 195)), var_mapTypedAttributeList_2518, var_constructorMap_2821, var_getterMap_2912, var_setterMap_2937, var_instanceMethodMap_2981, var_classMethodMap_3018, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 202)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map-proxy.galgas", 203)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 204)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 205)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 206)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 207)), var_searchMethodList_2577, GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-map-proxy.galgas", 210)), GALGAS_string ("null"), GALGAS_string ("mapproxy-").add_operation (object->mProperty_mMapProxyTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-map-proxy.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 212)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-map-proxy.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 187)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_mapProxyDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                               extensionMethod_mapProxyDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_enterInSemanticContext (defineExtensionMethod_mapProxyDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@mapProxyDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_mapProxyDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                     GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_9019 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mMapProxyTypeName, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 230)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9019, var_nameForUsefulness_9019, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 231)) ;
  }
  GALGAS_typedPropertyList var_listTypeAttributeList_9315 ;
  GALGAS_mapSearchMethodListAST var_searchMethodList_9374 ;
  GALGAS_bool joker_9263_7 ; // Joker input parameter
  GALGAS_bool joker_9263_6 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9263_5 ; // Joker input parameter
  GALGAS_typeKindEnum joker_9263_4 ; // Joker input parameter
  GALGAS_bool joker_9263_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9263_2 ; // Joker input parameter
  GALGAS_propertyMap joker_9263_1 ; // Joker input parameter
  GALGAS_constructorMap joker_9321_10 ; // Joker input parameter
  GALGAS_getterMap joker_9321_9 ; // Joker input parameter
  GALGAS_setterMap joker_9321_8 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9321_7 ; // Joker input parameter
  GALGAS_classMethodMap joker_9321_6 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9321_5 ; // Joker input parameter
  GALGAS_operators joker_9321_4 ; // Joker input parameter
  GALGAS_functionSignature joker_9321_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9321_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_9321_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9380_6 ; // Joker input parameter
  GALGAS_bool joker_9380_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9380_4 ; // Joker input parameter
  GALGAS_string joker_9380_3 ; // Joker input parameter
  GALGAS_string joker_9380_2 ; // Joker input parameter
  GALGAS_headerKind joker_9380_1 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mAssociatedMapTypeName, joker_9263_7, joker_9263_6, joker_9263_5, joker_9263_4, joker_9263_3, joker_9263_2, joker_9263_1, var_listTypeAttributeList_9315, joker_9321_10, joker_9321_9, joker_9321_8, joker_9321_7, joker_9321_6, joker_9321_5, joker_9321_4, joker_9321_3, joker_9321_2, joker_9321_1, var_searchMethodList_9374, joker_9380_6, joker_9380_5, joker_9380_4, joker_9380_3, joker_9380_2, joker_9380_1, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 233)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map proxy ").add_operation (object->mProperty_mMapProxyTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 243)), GALGAS_mapProxyTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mMapProxyTypeName, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 245)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mAssociatedMapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 246)), var_listTypeAttributeList_9315, var_searchMethodList_9374  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 244))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 242)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_mapProxyDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                         extensionMethod_mapProxyDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_semanticAnalysis (defineExtensionMethod_mapProxyDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Filewrapper 'mapProxyGenerationTemplate'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_mapProxyGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_mapProxyGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_mapProxyGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_mapProxyGenerationTemplate_0,
  0,
  gWrapperAllDirectories_mapProxyGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Filewrapper template 'mapProxyGenerationTemplate mapProxyTypeHeader1'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                     const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_mapproxy.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" map proxy"), inCompiler COMMA_SOURCE_FILE ("GALGAS_mapproxy.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_mapproxy.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_uniqueMapProxy {\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Filewrapper template 'mapProxyGenerationTemplate mapProxyTypeSpecificImplementation'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                                 const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                 const GALGAS_string & in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER,
                                                                                                 const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                 const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_uniqueMapProxy () {\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_null (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNullProxy (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::class_method_makeOptionalProxy (" ;
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
  result << " & outProxy\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  outProxy.internalMakeOptionalProxy (ioMap, inKey COMMA_THERE) ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::class_method_makeProxy (" ;
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
  result << " & outProxy\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  outProxy.internalMakeProxy (ioMap, inKey COMMA_THERE) ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::class_method_makeProxyFromString (" ;
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
  result << " & outProxy\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  outProxy.internalMakeProxyFromString (ioMap, inKey COMMA_THERE) ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_2102_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2102 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2102.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_2102.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_mapproxy.cpp.galgasTemplate", 44)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_2102.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapproxy.cpp.galgasTemplate", 44)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "C_Compiler * inCompiler\n"
        "                                       " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  GALGAS_" ;
      result << enumerator_2102.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_mapproxy.cpp.galgasTemplate", 46)).stringValue () ;
      result << " result ;\n"
        "  const cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) getAttributeListPointer (inCompiler, " ;
      result << enumerator_2102.current_mPropertyName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_mapproxy.cpp.galgasTemplate", 47)).stringValue () ;
      result << " COMMA_THERE) ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mProperty_" ;
      result << enumerator_2102.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapproxy.cpp.galgasTemplate", 50)).stringValue () ;
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
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_3042.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapproxy.cpp.galgasTemplate", 58)).stringValue () ;
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
        "  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_3042.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapproxy.cpp.galgasTemplate", 63)).stringValue () ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@mapProxyTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 287)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 288)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 286))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 291)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 292)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 293)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 294)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 295)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 296)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 297)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 298)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 299)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 300)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 301)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 302)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 290))), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 290)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                              extensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@mapProxyTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                    const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 312)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mAssociatedMapTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 313)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 315)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 316)), object->mProperty_mAssociatedMapTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 317)), object->mProperty_mAssociatedMapTypedAttributeList, object->mProperty_mSearchMethodList COMMA_SOURCE_FILE ("type-map-proxy.galgas", 314))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                                     extensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@sharedMapDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_key_12263 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 322)), object->mProperty_mMapTypeName.getter_location (SOURCE_FILE ("type-shared-map.galgas", 322))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 322)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_12263, temp_0, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 323)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_12406 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_12406.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_12406.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 325)), enumerator_12406.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 325))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 325)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 325)) ;
    }
    enumerator_12406.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                                extensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension getter '@sharedMapDeclarationAST keyRepresentation'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_sharedMapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  result_outString = GALGAS_string ("shared map @").add_operation (object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 332)) ;
//---
  return result_outString ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_sharedMapDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                          extensionGetter_sharedMapDeclarationAST_keyRepresentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_sharedMapDeclarationAST_keyRepresentation (defineExtensionGetter_sharedMapDeclarationAST_keyRepresentation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@sharedMapDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_sharedMapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                            const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                            const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                            const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_13636 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_13636 COMMA_SOURCE_FILE ("type-shared-map.galgas", 346)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex_13768 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_13768 COMMA_SOURCE_FILE ("type-shared-map.galgas", 348)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringlistTypeIndex_13912 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstringlist"), var_lstringlistTypeIndex_13912 COMMA_SOURCE_FILE ("type-shared-map.galgas", 350)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 352)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_13768, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 352)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_13993 = temp_0 ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_14078 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_14114 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_14114.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, enumerator_14114.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_usesSelectorsInInsertAndSearch_14078.boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_14114.current_mValue (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 358)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-shared-map.galgas", 358)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_14078 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (enumerator_14114.current_mValue (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 362)), GALGAS_string ("unknown attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-shared-map.galgas", 362)) ;
    }
    enumerator_14114.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_14390 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 366)) ;
  GALGAS_getterMap var_getterMap_14480 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_14480, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 367)) ;
  }
  GALGAS_setterMap var_setterMap_14505 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 368)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_14549 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 369)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_14390, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 375)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 371)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14480, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 379)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14480, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 386)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_14480, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 393)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_14480, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 402)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14480, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 411)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14480, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("unsolvedProxyCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 418)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14480, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("unsolvedProxyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 425)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14480, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("edgeGraphvizRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 432)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_16442 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 440)) ;
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_16506 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 441)) ;
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = var_usesSelectorsInInsertAndSearch_14078.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_16506.addAssign_operation (temp_5.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 443)), var_lstringTypeIndex_13768, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 445)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 442)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_16740 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 447)) ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = var_usesSelectorsInInsertAndSearch_14078.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_16740.addAssign_operation (temp_7.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 449)), var_lstringTypeIndex_13768, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 451)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 448)) ;
  cEnumerator_propertyInCollectionListAST enumerator_16941 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_16941.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_17053 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_16941.current_mPropertyTypeName (HERE), var_attributeTypeIndex_17053 COMMA_SOURCE_FILE ("type-shared-map.galgas", 454)) ;
    }
    GALGAS_bool var_hasGetter_17072 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_17097 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_17124 = GALGAS_bool (false) ;
    var_typedAttributeList_16442.addAssign_operation (var_attributeTypeIndex_17053, enumerator_16941.current_mPropertyName (HERE), var_hasSetter_17097, var_hasGetter_17072, var_hasSelector_17124  COMMA_SOURCE_FILE ("type-shared-map.galgas", 458)) ;
    var_enumerationDescriptor_13993.addAssign_operation (var_attributeTypeIndex_17053, enumerator_16941.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 459))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 459)) ;
    GALGAS_lstring temp_9 ;
    const enumGalgasBool test_10 = var_usesSelectorsInInsertAndSearch_14078.boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = enumerator_16941.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 461)) ;
    }
    var_insertMethodFormalArgumentList_16506.addAssign_operation (temp_9, var_attributeTypeIndex_17053, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 463)), enumerator_16941.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 460)) ;
    GALGAS_lstring temp_11 ;
    const enumGalgasBool test_12 = var_usesSelectorsInInsertAndSearch_14078.boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = enumerator_16941.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_12) {
      temp_11 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 466)) ;
    }
    var_removeMethodFormalArgumentList_16740.addAssign_operation (temp_11, var_attributeTypeIndex_17053, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 468)), enumerator_16941.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 465)) ;
    enumerator_16941.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_17778 (object->mProperty_mInsertMethodList, kENUMERATION_UP) ;
  while (enumerator_17778.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = var_setterMap_14505.getter_hasKey (enumerator_17778.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 473)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 473)).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (enumerator_17778.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 474)), GALGAS_string ("the '").add_operation (enumerator_17778.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 474)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 474)), fixItArray14  COMMA_SOURCE_FILE ("type-shared-map.galgas", 474)) ;
      }
    }
    if (kBoolFalse == test_13) {
      {
      var_setterMap_14505.setter_insertOrReplace (enumerator_17778.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 478)), var_insertMethodFormalArgumentList_16506, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 481)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 476)) ;
      }
    }
    enumerator_17778.gotoNextObject () ;
  }
  GALGAS_formalParameterSignature var_enterEdgeFormalArgumentList_18267 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 487)) ;
  var_enterEdgeFormalArgumentList_18267.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 488)), var_lstringTypeIndex_13768, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 488)), GALGAS_string ("inSource")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 488)) ;
  var_enterEdgeFormalArgumentList_18267.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 489)), var_lstringTypeIndex_13768, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 489)), GALGAS_string ("inTarget")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 489)) ;
  {
  var_setterMap_14505.setter_insertOrReplace (GALGAS_string ("enterEdge").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 491)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 492)), var_enterEdgeFormalArgumentList_18267, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 495)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 490)) ;
  }
  GALGAS_formalParameterSignature var_topologicalSortFormalArgumentList_18786 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 499)) ;
  var_topologicalSortFormalArgumentList_18786.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 500)), var_lstringlistTypeIndex_13912, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 500)), GALGAS_string ("outSortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 500)) ;
  var_topologicalSortFormalArgumentList_18786.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 501)), var_lstringlistTypeIndex_13912, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 501)), GALGAS_string ("outUnsortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 501)) ;
  {
  var_instanceMethodMap_14549.setter_insertKey (GALGAS_string ("topologicalSort").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 503)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 504)), var_topologicalSortFormalArgumentList_18786, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 506)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 508)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 502)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsEqual, object->mProperty_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 512)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_15) {
      cEnumerator_mapSearchMethodListAST enumerator_19404 (object->mProperty_mSearchMethodList, kENUMERATION_UP) ;
      while (enumerator_19404.hasCurrentObject ()) {
        {
        var_instanceMethodMap_14549.setter_insertKey (enumerator_19404.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 516)), var_removeMethodFormalArgumentList_16740, enumerator_19404.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 518)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 520)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 514)) ;
        }
        enumerator_19404.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_19720 (object->mProperty_mSearchMethodList, kENUMERATION_UP) ;
    while (enumerator_19720.hasCurrentObject ()) {
      {
      var_setterMap_14505.setter_insertKey (enumerator_19720.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 528)), var_removeMethodFormalArgumentList_16740, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 531)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 526)) ;
      }
      enumerator_19720.gotoNextObject () ;
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (kIsStrictSup, object->mProperty_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 537)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_unifiedTypeMap_2D_proxy var_locationTypeIndex_20182 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("location"), var_locationTypeIndex_20182 COMMA_SOURCE_FILE ("type-shared-map.galgas", 538)) ;
      }
      {
      var_setterMap_14505.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 540))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 540)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 541)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 542)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 544)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 539)) ;
      }
      {
      var_setterMap_14505.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 548))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 548)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 549)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 550)), var_locationTypeIndex_20182, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 550)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 550)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 552)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 547)) ;
      }
      {
      var_setterMap_14505.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeOverride"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 556))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 556)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 557)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 558)), var_locationTypeIndex_20182, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 558)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 558)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 560)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 555)) ;
      }
      {
      var_instanceMethodMap_14549.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("checkAutomatonStates"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 564))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 564)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 565)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 566)), var_locationTypeIndex_20182, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 566)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 566)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 567)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 569)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 563)) ;
      }
      cEnumerator_mapOverrideBlockListAST enumerator_21403 (object->mProperty_mMapOverrideBlockListAST, kENUMERATION_UP) ;
      while (enumerator_21403.hasCurrentObject ()) {
        {
        var_setterMap_14505.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openOverrideFor").add_operation (enumerator_21403.current_mOverrideBlockName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 574)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 574)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 574))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 574)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 575)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 576)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 578)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 573)) ;
        }
        enumerator_21403.gotoNextObject () ;
      }
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_21765 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_21765.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_21789 = GALGAS_lstring::constructor_new (enumerator_21765.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 585)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 585)), enumerator_21765.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 585))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 585)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_21976 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_21765.current_mPropertyTypeName (HERE), var_attributeTypeIndex_21976 COMMA_SOURCE_FILE ("type-shared-map.galgas", 586)) ;
    }
    {
    GALGAS_functionSignature temp_17 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 590)) ;
    temp_17.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 590)), var_stringTypeIndex_13636, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 590)) ;
    var_getterMap_14480.setter_insertOrReplace (var_accessorName_21789, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 589)), temp_17, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 591)), GALGAS_bool (true), var_attributeTypeIndex_21976, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 594)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 587)) ;
    }
    enumerator_21765.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_22376 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_22376.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_22400 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_22376.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 600)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 600)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 600)), enumerator_22376.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 600))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 600)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_22632 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_22376.current_mPropertyTypeName (HERE), var_attributeTypeIndex_22632 COMMA_SOURCE_FILE ("type-shared-map.galgas", 601)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_22690 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 602)) ;
    var_accessorFormalArgumentList_22690.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 603)), var_attributeTypeIndex_22632, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 603)), enumerator_22376.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 603)) ;
    var_accessorFormalArgumentList_22690.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 604)), var_stringTypeIndex_13636, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 604)), enumerator_22376.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 604)) ;
    {
    var_setterMap_14505.setter_insertOrReplace (var_accessorName_22400, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 607)), var_accessorFormalArgumentList_22690, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 610)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 605)) ;
    }
    enumerator_22376.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mMapTypeName, var_getterMap_14480, var_setterMap_14505, var_instanceMethodMap_14549, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 615)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mMapTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 630)), GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("type-shared-map.galgas", 631)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 633)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 634)), var_typedAttributeList_16442, var_constructorMap_14390, var_getterMap_14480, var_setterMap_14505, var_instanceMethodMap_14549, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 640)), var_enumerationDescriptor_13993, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-shared-map.galgas", 642)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-shared-map.galgas", 642)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 642)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 643)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 644)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 645)), object->mProperty_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 647)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 649)), GALGAS_string ("emptyMap"), GALGAS_string ("sharedmap-").add_operation (object->mProperty_mMapTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-shared-map.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 651)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-shared-map.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 626)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_sharedMapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                               extensionMethod_sharedMapDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterInSemanticContext (defineExtensionMethod_sharedMapDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@sharedMapDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_nameForUsefulness_27105 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mMapTypeName, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 734)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_27105, var_nameForUsefulness_27105, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 735)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_27263 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mProperty_mMapTypeName.getter_string (HERE).add_operation (GALGAS_string ("-proxy"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 736)), object->mProperty_mMapTypeName.getter_location (SOURCE_FILE ("type-shared-map.galgas", 736))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 736)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 736)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_27105, var_elementTypeNameForUsefulness_27263 COMMA_SOURCE_FILE ("type-shared-map.galgas", 737)) ;
  }
  GALGAS_mapAutomatonMessageKind var_shadowBehaviour_27484 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 739)) ;
  GALGAS_string var_shadowMessage_27517 = GALGAS_string::makeEmptyString () ;
  cEnumerator_sharedMapAttributeListAST enumerator_27594 (object->mProperty_mSharedMapAttributeListAST, kENUMERATION_UP) ;
  while (enumerator_27594.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, enumerator_27594.current_mAttributeName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("shadow"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_27594.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 743)), GALGAS_string ("only %shadow attribute is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("type-shared-map.galgas", 743)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, var_shadowBehaviour_27484.objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 744)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_27594.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 745)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-shared-map.galgas", 745)) ;
        }
      }
      if (kBoolFalse == test_2) {
        GALGAS_mapAutomatonMessageKind temp_4 ;
        const enumGalgasBool test_5 = enumerator_27594.current_mIsError (HERE).boolEnum () ;
        if (kBoolTrue == test_5) {
          temp_4 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 747)) ;
        }else if (kBoolFalse == test_5) {
          temp_4 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 747)) ;
        }
        var_shadowBehaviour_27484 = temp_4 ;
        {
        routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_27594.current_mMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 748)) ;
        }
        var_shadowMessage_27517 = enumerator_27594.current_mMessage (HERE).getter_string (HERE) ;
      }
    }
    enumerator_27594.gotoNextObject () ;
  }
  GALGAS_stringset var_initialStateSet_28058 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 753)) ;
  cEnumerator_insertMethodListAST enumerator_28093 (object->mProperty_mInsertMethodList, kENUMERATION_UP) ;
  while (enumerator_28093.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsStrictSup, object->mProperty_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 755)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = GALGAS_bool (kIsEqual, enumerator_28093.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 756)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_28093.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 757)), GALGAS_string ("the '").add_operation (enumerator_28093.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 757)).add_operation (GALGAS_string ("' insert method should name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 757)), fixItArray8  COMMA_SOURCE_FILE ("type-shared-map.galgas", 757)) ;
          }
        }
        if (kBoolFalse == test_7) {
          var_initialStateSet_28058.addAssign_operation (enumerator_28093.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 759))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 759)) ;
        }
      }
    }
    if (kBoolFalse == test_6) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsNotEqual, enumerator_28093.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 761)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_28093.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 762)), GALGAS_string ("the '").add_operation (enumerator_28093.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 762)).add_operation (GALGAS_string ("' insert method should not name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 762)), fixItArray10  COMMA_SOURCE_FILE ("type-shared-map.galgas", 762)) ;
        }
      }
    }
    enumerator_28093.gotoNextObject () ;
  }
  GALGAS_mapAutomatonActionMap var_mapAutomatonActionMap_28629 = GALGAS_mapAutomatonActionMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 766)) ;
  cEnumerator_mapSearchMethodListAST enumerator_28664 (object->mProperty_mSearchMethodList, kENUMERATION_UP) ;
  while (enumerator_28664.hasCurrentObject ()) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = GALGAS_bool (kIsStrictSup, object->mProperty_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 768)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_11) {
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GALGAS_bool (kIsEqual, enumerator_28664.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 769)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_28664.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 770)), GALGAS_string ("the '").add_operation (enumerator_28664.current_mSearchMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 770)).add_operation (GALGAS_string ("' search method should name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 770)), fixItArray13  COMMA_SOURCE_FILE ("type-shared-map.galgas", 770)) ;
          }
        }
        if (kBoolFalse == test_12) {
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = var_mapAutomatonActionMap_28629.getter_hasKey (enumerator_28664.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 771)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 771)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 771)).boolEnum () ;
            if (kBoolTrue == test_14) {
              {
              var_mapAutomatonActionMap_28629.setter_insertKey (enumerator_28664.current_mActionName (HERE), var_mapAutomatonActionMap_28629.getter_count (SOURCE_FILE ("type-shared-map.galgas", 772)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 772)) ;
              }
            }
          }
        }
      }
    }
    if (kBoolFalse == test_11) {
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, enumerator_28664.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 774)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (enumerator_28664.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 775)), GALGAS_string ("the '").add_operation (enumerator_28664.current_mSearchMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 775)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 775)).add_operation (GALGAS_string ("' search method should not name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 775)), fixItArray16  COMMA_SOURCE_FILE ("type-shared-map.galgas", 775)) ;
        }
      }
    }
    enumerator_28664.gotoNextObject () ;
  }
  GALGAS_mapAutomatonStateMap var_mapAutomatonStateMap_29275 = GALGAS_mapAutomatonStateMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 779)) ;
  cEnumerator_mapStateList enumerator_29306 (object->mProperty_mMapStateList, kENUMERATION_UP) ;
  while (enumerator_29306.hasCurrentObject ()) {
    {
    var_mapAutomatonStateMap_29275.setter_insertKey (enumerator_29306.current_mStateName (HERE), var_mapAutomatonStateMap_29275.getter_count (SOURCE_FILE ("type-shared-map.galgas", 781)), enumerator_29306.current_mStateMessageKind (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 781)) ;
    }
    enumerator_29306.gotoNextObject () ;
  }
  cEnumerator_mapStateList enumerator_29441 (object->mProperty_mMapStateList, kENUMERATION_UP) ;
  while (enumerator_29441.hasCurrentObject ()) {
    cEnumerator_mapStateTransitionList enumerator_29474 (enumerator_29441.current_mTransitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_29474.hasCurrentObject ()) {
      GALGAS_uint joker_29535_2 ; // Joker input parameter
      GALGAS_mapAutomatonMessageKind joker_29535_1 ; // Joker input parameter
      var_mapAutomatonStateMap_29275.method_searchKey (enumerator_29474.current_mTargetStateName (HERE), joker_29535_2, joker_29535_1, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 785)) ;
      enumerator_29474.gotoNextObject () ;
    }
    enumerator_29441.gotoNextObject () ;
  }
  GALGAS_stringset var_allActions_29625 = var_mapAutomatonActionMap_28629.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 789)) ;
  GALGAS_mapStateSortedList var_mapStateSortedList_29699 = GALGAS_mapStateSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 790)) ;
  cEnumerator_mapStateList enumerator_29730 (object->mProperty_mMapStateList, kENUMERATION_UP) ;
  while (enumerator_29730.hasCurrentObject ()) {
    GALGAS_stringset var_actionsForCurrentState_29771 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 792)) ;
    GALGAS_mapStateTransitionSortedList var_mapStateTransitionSortedList_29839 = GALGAS_mapStateTransitionSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 793)) ;
    cEnumerator_mapStateTransitionList enumerator_29874 (enumerator_29730.current_mTransitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_29874.hasCurrentObject ()) {
      GALGAS_uint var_actionIndex_29952 ;
      var_mapAutomatonActionMap_28629.method_searchKey (enumerator_29874.current_mActionName (HERE), var_actionIndex_29952, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 795)) ;
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = var_actionsForCurrentState_29771.getter_hasKey (enumerator_29874.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 796)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 796)).boolEnum () ;
        if (kBoolTrue == test_17) {
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (enumerator_29874.current_mActionName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 797)), GALGAS_string ("the '").add_operation (enumerator_29874.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 797)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 797)).add_operation (GALGAS_string ("' action is already used for this state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 797)), fixItArray18  COMMA_SOURCE_FILE ("type-shared-map.galgas", 797)) ;
        }
      }
      var_actionsForCurrentState_29771.addAssign_operation (enumerator_29874.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 799))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 799)) ;
      GALGAS_uint var_targetStateIndex_30263 ;
      GALGAS_mapAutomatonMessageKind joker_30265 ; // Joker input parameter
      var_mapAutomatonStateMap_29275.method_searchKey (enumerator_29874.current_mTargetStateName (HERE), var_targetStateIndex_30263, joker_30265, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 800)) ;
      var_mapStateTransitionSortedList_29839.addAssign_operation (var_actionIndex_29952, enumerator_29874.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 803)), var_targetStateIndex_30263, enumerator_29874.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 805)), enumerator_29874.current_mTransitionMessageKind (HERE), enumerator_29874.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 807))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 801)) ;
      enumerator_29874.gotoNextObject () ;
    }
    GALGAS_uint var_stateIndex_30564 ;
    GALGAS_mapAutomatonMessageKind joker_30566 ; // Joker input parameter
    var_mapAutomatonStateMap_29275.method_searchKey (enumerator_29730.current_mStateName (HERE), var_stateIndex_30564, joker_30566, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 809)) ;
    var_mapStateSortedList_29699.addAssign_operation (var_stateIndex_30564, enumerator_29730.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 812)), enumerator_29730.current_mStateMessageKind (HERE), enumerator_29730.current_mStateMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 814)), var_mapStateTransitionSortedList_29839  COMMA_SOURCE_FILE ("type-shared-map.galgas", 810)) ;
    GALGAS_stringset var_missingActions_30764 = var_allActions_29625.substract_operation (var_actionsForCurrentState_29771, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 816)) ;
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = GALGAS_bool (kIsStrictSup, var_missingActions_30764.getter_count (SOURCE_FILE ("type-shared-map.galgas", 817)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_19) {
        GALGAS_string var_s_30857 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_30893 (var_missingActions_30764, kENUMERATION_UP) ;
        while (enumerator_30893.hasCurrentObject ()) {
          var_s_30857.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_30893.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 820)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 820)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 820)) ;
          if (enumerator_30893.hasNextObject ()) {
            var_s_30857.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 821)) ;
          }
          enumerator_30893.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_29730.current_mStateName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 823)), GALGAS_string ("the following actions are not named in a transition from this state: ").add_operation (var_s_30857, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 823)), fixItArray20  COMMA_SOURCE_FILE ("type-shared-map.galgas", 823)) ;
      }
    }
    enumerator_29730.gotoNextObject () ;
  }
  GALGAS_stringset var_accessibleStates_31138 = var_initialStateSet_28058 ;
  GALGAS_bool var_progress_31173 = GALGAS_bool (true) ;
  if (object->mProperty_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 829)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 829)).isValid ()) {
    uint32_t variant_31187 = object->mProperty_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 829)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 829)).uintValue () ;
    bool loop_31187 = true ;
    while (loop_31187) {
      loop_31187 = var_progress_31173.isValid () ;
      if (loop_31187) {
        loop_31187 = var_progress_31173.boolValue () ;
      }
      if (loop_31187 && (0 == variant_31187)) {
        loop_31187 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 829)) ;
      }
      if (loop_31187) {
        variant_31187 -- ;
        var_progress_31173 = GALGAS_bool (false) ;
        cEnumerator_mapStateList enumerator_31283 (object->mProperty_mMapStateList, kENUMERATION_UP) ;
        while (enumerator_31283.hasCurrentObject ()) {
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            test_21 = var_accessibleStates_31138.getter_hasKey (enumerator_31283.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 832)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 832)).boolEnum () ;
            if (kBoolTrue == test_21) {
              cEnumerator_mapStateTransitionList enumerator_31381 (enumerator_31283.current_mTransitionList (HERE), kENUMERATION_UP) ;
              while (enumerator_31381.hasCurrentObject ()) {
                enumGalgasBool test_22 = kBoolTrue ;
                if (kBoolTrue == test_22) {
                  test_22 = var_accessibleStates_31138.getter_hasKey (enumerator_31381.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 834)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 834)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 834)).boolEnum () ;
                  if (kBoolTrue == test_22) {
                    var_accessibleStates_31138.addAssign_operation (enumerator_31381.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 835))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 835)) ;
                    var_progress_31173 = GALGAS_bool (true) ;
                  }
                }
                enumerator_31381.gotoNextObject () ;
              }
            }
          }
          enumerator_31283.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_stringset var_uselessStates_31627 = var_mapAutomatonStateMap_29275.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 842)).substract_operation (var_accessibleStates_31138, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 842)) ;
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = GALGAS_bool (kIsStrictSup, var_uselessStates_31627.getter_count (SOURCE_FILE ("type-shared-map.galgas", 843)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_string var_s_31724 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_31757 (var_uselessStates_31627, kENUMERATION_UP) ;
      while (enumerator_31757.hasCurrentObject ()) {
        var_s_31724.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_31757.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 846)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 846)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 846)) ;
        if (enumerator_31757.hasNextObject ()) {
          var_s_31724.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 847)) ;
        }
        enumerator_31757.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 849)), GALGAS_string ("the following map automaton states are useless: ").add_operation (var_s_31724, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 849)), fixItArray24  COMMA_SOURCE_FILE ("type-shared-map.galgas", 849)) ;
    }
  }
  GALGAS_stringset var_neededAssociations_32027 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 853)) ;
  GALGAS_stringset var_accessibilityGraph_32064 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 854)) ;
  cEnumerator_mapAutomatonStateMap enumerator_32117 (var_mapAutomatonStateMap_29275, kENUMERATION_UP) ;
  while (enumerator_32117.hasCurrentObject ()) {
    GALGAS_stringset var_reachableStates_32151 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 856)) ;
    var_reachableStates_32151.addAssign_operation (enumerator_32117.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 857))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 857)) ;
    var_progress_31173 = GALGAS_bool (true) ;
    if (var_mapAutomatonStateMap_29275.getter_count (SOURCE_FILE ("type-shared-map.galgas", 859)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 859)).isValid ()) {
      uint32_t variant_32241 = var_mapAutomatonStateMap_29275.getter_count (SOURCE_FILE ("type-shared-map.galgas", 859)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 859)).uintValue () ;
      bool loop_32241 = true ;
      while (loop_32241) {
        loop_32241 = var_progress_31173.isValid () ;
        if (loop_32241) {
          loop_32241 = var_progress_31173.boolValue () ;
        }
        if (loop_32241 && (0 == variant_32241)) {
          loop_32241 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 859)) ;
        }
        if (loop_32241) {
          variant_32241 -- ;
          var_progress_31173 = GALGAS_bool (false) ;
          cEnumerator_mapStateList enumerator_32347 (object->mProperty_mMapStateList, kENUMERATION_UP) ;
          while (enumerator_32347.hasCurrentObject ()) {
            enumGalgasBool test_25 = kBoolTrue ;
            if (kBoolTrue == test_25) {
              test_25 = var_reachableStates_32151.getter_hasKey (enumerator_32347.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 862)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 862)).boolEnum () ;
              if (kBoolTrue == test_25) {
                cEnumerator_mapStateTransitionList enumerator_32448 (enumerator_32347.current_mTransitionList (HERE), kENUMERATION_UP) ;
                while (enumerator_32448.hasCurrentObject ()) {
                  enumGalgasBool test_26 = kBoolTrue ;
                  if (kBoolTrue == test_26) {
                    test_26 = var_reachableStates_32151.getter_hasKey (enumerator_32448.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 864)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 864)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 864)).boolEnum () ;
                    if (kBoolTrue == test_26) {
                      var_reachableStates_32151.addAssign_operation (enumerator_32448.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 865))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 865)) ;
                      var_accessibilityGraph_32064.addAssign_operation (enumerator_32117.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 866)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 866)).add_operation (enumerator_32448.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 866)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 866))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 866)) ;
                      var_progress_31173 = GALGAS_bool (true) ;
                    }
                  }
                  enumerator_32448.gotoNextObject () ;
                }
              }
            }
            enumerator_32347.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_stringset enumerator_32810 (var_reachableStates_32151, kENUMERATION_UP) ;
    while (enumerator_32810.hasCurrentObject ()) {
      enumGalgasBool test_27 = kBoolTrue ;
      if (kBoolTrue == test_27) {
        test_27 = GALGAS_bool (kIsNotEqual, enumerator_32117.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 874)).objectCompare (enumerator_32810.current_key (HERE))).boolEnum () ;
        if (kBoolTrue == test_27) {
          var_neededAssociations_32027.addAssign_operation (enumerator_32117.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 875)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 875)).add_operation (enumerator_32810.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 875))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 875)) ;
        }
      }
      enumerator_32810.gotoNextObject () ;
    }
    enumerator_32117.gotoNextObject () ;
  }
  GALGAS_mapOverrideList var_mapOverrideList_33005 = GALGAS_mapOverrideList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 880)) ;
  cEnumerator_mapOverrideBlockListAST enumerator_33047 (object->mProperty_mMapOverrideBlockListAST, kENUMERATION_UP) ;
  while (enumerator_33047.hasCurrentObject ()) {
    GALGAS_stringset var_handledAssociations_33085 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 882)) ;
    GALGAS_stringset var_neededCombinaisons_33124 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 883)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_31__33215 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 884)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_33266 (enumerator_33047.current_mMapOverrideBlockDescriptor_31_AST (HERE), kENUMERATION_UP) ;
    while (enumerator_33266.hasCurrentObject ()) {
      GALGAS_uint var_startStateNameIndex_33344 ;
      GALGAS_mapAutomatonMessageKind joker_33346 ; // Joker input parameter
      var_mapAutomatonStateMap_29275.method_searchKey (enumerator_33266.current_mLeftState (HERE), var_startStateNameIndex_33344, joker_33346, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 886)) ;
      GALGAS_uint var_currentStateNameIndex_33426 ;
      GALGAS_mapAutomatonMessageKind joker_33428 ; // Joker input parameter
      var_mapAutomatonStateMap_29275.method_searchKey (enumerator_33266.current_mRightState (HERE), var_currentStateNameIndex_33426, joker_33428, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 887)) ;
      GALGAS_string var_association_33460 = enumerator_33266.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 888)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 888)).add_operation (enumerator_33266.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 888)) ;
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = var_neededAssociations_32027.getter_hasKey (var_association_33460 COMMA_SOURCE_FILE ("type-shared-map.galgas", 889)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 889)).boolEnum () ;
        if (kBoolTrue == test_28) {
          TC_Array <C_FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticWarning (enumerator_33266.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 890)), GALGAS_string ("the '").add_operation (var_association_33460, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 890)).add_operation (GALGAS_string ("' association is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 890)), fixItArray29  COMMA_SOURCE_FILE ("type-shared-map.galgas", 890)) ;
        }
      }
      enumGalgasBool test_30 = kBoolTrue ;
      if (kBoolTrue == test_30) {
        test_30 = var_handledAssociations_33085.getter_hasKey (var_association_33460 COMMA_SOURCE_FILE ("type-shared-map.galgas", 892)).boolEnum () ;
        if (kBoolTrue == test_30) {
          TC_Array <C_FixItDescription> fixItArray31 ;
          inCompiler->emitSemanticError (enumerator_33266.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 893)), GALGAS_string ("the '").add_operation (var_association_33460, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 894)).add_operation (GALGAS_string ("' association is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 894)), fixItArray31  COMMA_SOURCE_FILE ("type-shared-map.galgas", 893)) ;
        }
      }
      var_handledAssociations_33085.addAssign_operation (var_association_33460  COMMA_SOURCE_FILE ("type-shared-map.galgas", 896)) ;
      GALGAS_uint var_finalStateNameIndex_33942 ;
      GALGAS_mapAutomatonMessageKind joker_33944 ; // Joker input parameter
      var_mapAutomatonStateMap_29275.method_searchKey (enumerator_33266.current_mResultingState (HERE), var_finalStateNameIndex_33942, joker_33944, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 897)) ;
      enumGalgasBool test_32 = kBoolTrue ;
      if (kBoolTrue == test_32) {
        test_32 = GALGAS_bool (kIsNotEqual, enumerator_33266.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 898)).objectCompare (enumerator_33266.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 898)))).boolEnum () ;
        if (kBoolTrue == test_32) {
          var_neededCombinaisons_33124.addAssign_operation (enumerator_33266.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 899)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 899)).add_operation (enumerator_33266.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 899)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 899))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 899)) ;
          var_neededCombinaisons_33124.addAssign_operation (enumerator_33266.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 900)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 900)).add_operation (enumerator_33266.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 900)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 900))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 900)) ;
          enumGalgasBool test_33 = kBoolTrue ;
          if (kBoolTrue == test_33) {
            test_33 = var_accessibilityGraph_32064.getter_hasKey (enumerator_33266.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 901)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 901)).add_operation (enumerator_33266.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 901)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 901)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 901)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 901)).boolEnum () ;
            if (kBoolTrue == test_33) {
              TC_Array <C_FixItDescription> fixItArray34 ;
              inCompiler->emitSemanticError (enumerator_33266.current_mResultingState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 902)), GALGAS_string ("the '").add_operation (enumerator_33266.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 903)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 903)).add_operation (GALGAS_string ("' state is not reachable from '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 903)).add_operation (enumerator_33266.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 903)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 903)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 903)), fixItArray34  COMMA_SOURCE_FILE ("type-shared-map.galgas", 902)) ;
            }
          }
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_33266.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 906)) ;
      }
      var_branchBehaviourSortedListForMapOverride_31__33215.addAssign_operation (var_startStateNameIndex_33344, enumerator_33266.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 909)), var_currentStateNameIndex_33426, enumerator_33266.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 911)), var_finalStateNameIndex_33942, enumerator_33266.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 913)), enumerator_33266.current_mMessageKind (HERE), enumerator_33266.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 915))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 907)) ;
      enumerator_33266.gotoNextObject () ;
    }
    GALGAS_stringset var_forgottenAssociations_34817 = var_neededAssociations_32027.substract_operation (var_handledAssociations_33085, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 917)) ;
    enumGalgasBool test_35 = kBoolTrue ;
    if (kBoolTrue == test_35) {
      test_35 = GALGAS_bool (kIsStrictSup, var_forgottenAssociations_34817.getter_count (SOURCE_FILE ("type-shared-map.galgas", 918)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_35) {
        GALGAS_string var_s_34922 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_34965 (var_forgottenAssociations_34817, kENUMERATION_UP) ;
        while (enumerator_34965.hasCurrentObject ()) {
          var_s_34922.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_34965.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 921)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 921)) ;
          enumerator_34965.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray36 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 923)), var_forgottenAssociations_34817.getter_count (SOURCE_FILE ("type-shared-map.galgas", 923)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 923)).add_operation (GALGAS_string (" associations should be defined:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 923)).add_operation (var_s_34922, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 923)), fixItArray36  COMMA_SOURCE_FILE ("type-shared-map.galgas", 923)) ;
      }
    }
    GALGAS_stringset var_definedCombinaisons_35157 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 925)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_32__35248 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 926)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_35299 (enumerator_33047.current_mMapOverrideBlockDescriptor_32_AST (HERE), kENUMERATION_UP) ;
    while (enumerator_35299.hasCurrentObject ()) {
      GALGAS_uint var_leftStateIndex_35372 ;
      GALGAS_mapAutomatonMessageKind joker_35374 ; // Joker input parameter
      var_mapAutomatonStateMap_29275.method_searchKey (enumerator_35299.current_mLeftState (HERE), var_leftStateIndex_35372, joker_35374, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 928)) ;
      GALGAS_uint var_rightStateIndex_35448 ;
      GALGAS_mapAutomatonMessageKind joker_35450 ; // Joker input parameter
      var_mapAutomatonStateMap_29275.method_searchKey (enumerator_35299.current_mRightState (HERE), var_rightStateIndex_35448, joker_35450, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 929)) ;
      GALGAS_string var_combinaison_35482 = enumerator_35299.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 930)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 930)).add_operation (enumerator_35299.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 930)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 930)) ;
      enumGalgasBool test_37 = kBoolTrue ;
      if (kBoolTrue == test_37) {
        test_37 = var_neededCombinaisons_33124.getter_hasKey (var_combinaison_35482 COMMA_SOURCE_FILE ("type-shared-map.galgas", 931)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 931)).boolEnum () ;
        if (kBoolTrue == test_37) {
          TC_Array <C_FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (enumerator_35299.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 932)), GALGAS_string ("the '").add_operation (enumerator_35299.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 933)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 933)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 933)).add_operation (enumerator_35299.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 933)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 933)).add_operation (GALGAS_string ("' combinaison is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 933)), fixItArray38  COMMA_SOURCE_FILE ("type-shared-map.galgas", 932)) ;
        }
      }
      enumGalgasBool test_39 = kBoolTrue ;
      if (kBoolTrue == test_39) {
        test_39 = var_definedCombinaisons_35157.getter_hasKey (var_combinaison_35482 COMMA_SOURCE_FILE ("type-shared-map.galgas", 935)).boolEnum () ;
        if (kBoolTrue == test_39) {
          TC_Array <C_FixItDescription> fixItArray40 ;
          inCompiler->emitSemanticError (enumerator_35299.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 936)), GALGAS_string ("the '").add_operation (enumerator_35299.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 937)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 937)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 937)).add_operation (enumerator_35299.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 937)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 937)).add_operation (GALGAS_string ("' combinaison is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 937)), fixItArray40  COMMA_SOURCE_FILE ("type-shared-map.galgas", 936)) ;
        }
      }
      var_definedCombinaisons_35157.addAssign_operation (var_combinaison_35482  COMMA_SOURCE_FILE ("type-shared-map.galgas", 939)) ;
      GALGAS_uint var_resultingStateNameIndex_36012 ;
      GALGAS_mapAutomatonMessageKind joker_36014 ; // Joker input parameter
      var_mapAutomatonStateMap_29275.method_searchKey (enumerator_35299.current_mResultingState (HERE), var_resultingStateNameIndex_36012, joker_36014, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 940)) ;
      enumGalgasBool test_41 = kBoolTrue ;
      if (kBoolTrue == test_41) {
        test_41 = GALGAS_bool (kIsNotEqual, enumerator_35299.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 941)).objectCompare (enumerator_35299.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 941)))).operator_and (GALGAS_bool (kIsNotEqual, enumerator_35299.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 942)).objectCompare (enumerator_35299.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 942)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 941)).operator_and (var_accessibilityGraph_32064.getter_hasKey (enumerator_35299.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 943)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 943)).add_operation (enumerator_35299.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 943)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 943)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 943)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 943)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 942)).boolEnum () ;
        if (kBoolTrue == test_41) {
          TC_Array <C_FixItDescription> fixItArray42 ;
          inCompiler->emitSemanticError (enumerator_35299.current_mResultingState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 944)), GALGAS_string ("the '").add_operation (enumerator_35299.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 945)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 945)).add_operation (GALGAS_string ("' state cannot be reached from the '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 945)).add_operation (enumerator_35299.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 945)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 945)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 945)), fixItArray42  COMMA_SOURCE_FILE ("type-shared-map.galgas", 944)) ;
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_35299.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 947)) ;
      }
      enumGalgasBool test_43 = kBoolTrue ;
      if (kBoolTrue == test_43) {
        test_43 = GALGAS_bool (kIsEqual, enumerator_35299.current_mMessageKind (HERE).objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 948)))).boolEnum () ;
        if (kBoolTrue == test_43) {
          var_definedCombinaisons_35157.addAssign_operation (enumerator_35299.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 949)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 949)).add_operation (enumerator_35299.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 949)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 949))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 949)) ;
          var_branchBehaviourSortedListForMapOverride_32__35248.addAssign_operation (var_rightStateIndex_35448, enumerator_35299.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 952)), var_leftStateIndex_35372, enumerator_35299.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 954)), var_resultingStateNameIndex_36012, enumerator_35299.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 956)), enumerator_35299.current_mMessageKind (HERE), enumerator_35299.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 958))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 950)) ;
        }
      }
      var_branchBehaviourSortedListForMapOverride_32__35248.addAssign_operation (var_leftStateIndex_35372, enumerator_35299.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 962)), var_rightStateIndex_35448, enumerator_35299.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 964)), var_resultingStateNameIndex_36012, enumerator_35299.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 966)), enumerator_35299.current_mMessageKind (HERE), enumerator_35299.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 968))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 960)) ;
      enumerator_35299.gotoNextObject () ;
    }
    enumGalgasBool test_44 = kBoolTrue ;
    if (kBoolTrue == test_44) {
      test_44 = GALGAS_bool (kIsEqual, var_forgottenAssociations_34817.getter_count (SOURCE_FILE ("type-shared-map.galgas", 970)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_44) {
        GALGAS_stringset var_forgottenCombinaisons_37317 = var_neededCombinaisons_33124.substract_operation (var_definedCombinaisons_35157, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 971)) ;
        enumGalgasBool test_45 = kBoolTrue ;
        if (kBoolTrue == test_45) {
          test_45 = GALGAS_bool (kIsStrictSup, var_forgottenCombinaisons_37317.getter_count (SOURCE_FILE ("type-shared-map.galgas", 972)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_45) {
            GALGAS_string var_s_37426 = GALGAS_string::makeEmptyString () ;
            cEnumerator_stringset enumerator_37471 (var_forgottenCombinaisons_37317, kENUMERATION_UP) ;
            while (enumerator_37471.hasCurrentObject ()) {
              var_s_37426.plusAssign_operation(GALGAS_string ("\n"
                "  - ").add_operation (enumerator_37471.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 975)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 975)) ;
              enumerator_37471.gotoNextObject () ;
            }
            TC_Array <C_FixItDescription> fixItArray46 ;
            inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 977)), var_forgottenCombinaisons_37317.getter_count (SOURCE_FILE ("type-shared-map.galgas", 977)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 977)).add_operation (GALGAS_string (" combinaisons are forgotten:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 977)).add_operation (var_s_37426, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 977)), fixItArray46  COMMA_SOURCE_FILE ("type-shared-map.galgas", 977)) ;
          }
        }
      }
    }
    var_mapOverrideList_33005.addAssign_operation (enumerator_33047.current_mOverrideBlockName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 981)), var_branchBehaviourSortedListForMapOverride_31__33215, var_branchBehaviourSortedListForMapOverride_32__35248  COMMA_SOURCE_FILE ("type-shared-map.galgas", 980)) ;
    enumerator_33047.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_37865 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 986)) ;
  GALGAS_propertyIndexMap var_attributeMap_37903 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 987)) ;
  cEnumerator_propertyInCollectionListAST enumerator_37934 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_37934.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_37975 = function_typeNameForUsefulEntitiesGraph (enumerator_37934.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 989)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_27105, var_propertyTypeNameForUsefulness_37975 COMMA_SOURCE_FILE ("type-shared-map.galgas", 990)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_38127 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_37934.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 991)) ;
    GALGAS_bool var_hasSetter_38228 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_38253 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_38280 = GALGAS_bool (false) ;
    var_typedAttributeList_37865.addAssign_operation (var_t_38127, enumerator_37934.current_mPropertyName (HERE), var_hasSetter_38228, var_hasGetter_38253, var_hasSelector_38280  COMMA_SOURCE_FILE ("type-shared-map.galgas", 995)) ;
    {
    var_attributeMap_37903.setter_insertKey (enumerator_37934.current_mPropertyName (HERE), var_t_38127, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1001)) ;
    }
    enumerator_37934.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_38513 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 1004)) ;
  cEnumerator_insertMethodListAST enumerator_38558 (object->mProperty_mInsertMethodList, kENUMERATION_UP) ;
  while (enumerator_38558.hasCurrentObject ()) {
    {
    var_insertMethodMap_38513.setter_insertKey (enumerator_38558.current (HERE).getter_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1006)) ;
    }
    cEnumerator_stringlist enumerator_38791 (enumerator_38558.current (HERE).getter_mErrorMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1008)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1008)), kENUMERATION_UP) ;
    while (enumerator_38791.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_38826 = enumerator_38791.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1009)) ;
      {
      GALGAS_string joker_38921 ; // Joker input parameter
      var_explodedArray_38826.setter_popFirst (joker_38921, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1010)) ;
      }
      cEnumerator_stringlist enumerator_38953 (var_explodedArray_38826, kENUMERATION_UP) ;
      while (enumerator_38953.hasCurrentObject ()) {
        enumGalgasBool test_47 = kBoolTrue ;
        if (kBoolTrue == test_47) {
          test_47 = GALGAS_bool (kIsStrictSup, enumerator_38953.current_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 1012)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_47) {
            GALGAS_char var_c_39014 = enumerator_38953.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1013)) ;
            enumGalgasBool test_48 = kBoolTrue ;
            if (kBoolTrue == test_48) {
              test_48 = GALGAS_bool (kIsNotEqual, var_c_39014.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_39014.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1014)).boolEnum () ;
              if (kBoolTrue == test_48) {
                TC_Array <C_FixItDescription> fixItArray49 ;
                inCompiler->emitSemanticError (enumerator_38558.current (HERE).getter_mErrorMessage (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 1015)), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in an insert error message"), fixItArray49  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1015)) ;
              }
            }
          }
        }
        enumerator_38953.gotoNextObject () ;
      }
      enumerator_38791.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_39443 (enumerator_38558.current (HERE).getter_mShadowErrorMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1021)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1021)), kENUMERATION_UP) ;
    while (enumerator_39443.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_39478 = enumerator_39443.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1022)) ;
      {
      GALGAS_string joker_39579 ; // Joker input parameter
      var_explodedArray_39478.setter_popFirst (joker_39579, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1023)) ;
      }
      cEnumerator_stringlist enumerator_39618 (var_explodedArray_39478, kENUMERATION_UP) ;
      while (enumerator_39618.hasCurrentObject ()) {
        enumGalgasBool test_50 = kBoolTrue ;
        if (kBoolTrue == test_50) {
          test_50 = GALGAS_bool (kIsStrictSup, enumerator_39618.current (HERE).getter_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 1025)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_50) {
            GALGAS_char var_c_39689 = enumerator_39618.current (HERE).getter_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1026)) ;
            enumGalgasBool test_51 = kBoolTrue ;
            if (kBoolTrue == test_51) {
              test_51 = GALGAS_bool (kIsNotEqual, var_c_39689.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_39689.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1027)).boolEnum () ;
              if (kBoolTrue == test_51) {
                TC_Array <C_FixItDescription> fixItArray52 ;
                inCompiler->emitSemanticError (enumerator_38558.current (HERE).getter_mErrorMessage (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 1028)), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in a shadow error message"), fixItArray52  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1028)) ;
              }
            }
          }
        }
        enumerator_39618.gotoNextObject () ;
      }
      enumerator_39443.gotoNextObject () ;
    }
    enumerator_38558.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_40011 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 1035)) ;
  cEnumerator_mapSearchMethodListAST enumerator_40056 (object->mProperty_mSearchMethodList, kENUMERATION_UP) ;
  while (enumerator_40056.hasCurrentObject ()) {
    enumGalgasBool test_53 = kBoolTrue ;
    if (kBoolTrue == test_53) {
      test_53 = GALGAS_bool (kIsEqual, object->mProperty_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 1037)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_53) {
        {
        var_searchMethodMap_40011.setter_insertKey (enumerator_40056.current (HERE).getter_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1038)) ;
        }
      }
    }
    if (kBoolFalse == test_53) {
      {
      var_searchMethodMap_40011.setter_insertKey (enumerator_40056.current (HERE).getter_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1040)) ;
      }
    }
    cEnumerator_stringlist enumerator_40417 (enumerator_40056.current (HERE).getter_mErrorMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1043)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1043)), kENUMERATION_UP) ;
    while (enumerator_40417.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_40452 = enumerator_40417.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1044)) ;
      {
      GALGAS_string joker_40552 ; // Joker input parameter
      var_explodedArray_40452.setter_popFirst (joker_40552, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1045)) ;
      }
      cEnumerator_stringlist enumerator_40591 (var_explodedArray_40452, kENUMERATION_UP) ;
      while (enumerator_40591.hasCurrentObject ()) {
        enumGalgasBool test_54 = kBoolTrue ;
        if (kBoolTrue == test_54) {
          test_54 = GALGAS_bool (kIsStrictSup, enumerator_40591.current (HERE).getter_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 1047)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_54) {
            GALGAS_char var_c_40662 = enumerator_40591.current (HERE).getter_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1048)) ;
            enumGalgasBool test_55 = kBoolTrue ;
            if (kBoolTrue == test_55) {
              test_55 = GALGAS_bool (kIsNotEqual, var_c_40662.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
              if (kBoolTrue == test_55) {
                TC_Array <C_FixItDescription> fixItArray56 ;
                inCompiler->emitSemanticError (enumerator_40056.current (HERE).getter_mErrorMessage (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 1050)), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in a search error message"), fixItArray56  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1050)) ;
              }
            }
          }
        }
        enumerator_40591.gotoNextObject () ;
      }
      enumerator_40417.gotoNextObject () ;
    }
    enumerator_40056.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("shared map ").add_operation (object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1058)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1058)), GALGAS_sharedMapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1060)), object->mProperty_mMapTypeName, var_typedAttributeList_37865, object->mProperty_mInsertMethodList, object->mProperty_mSearchMethodList, var_mapAutomatonStateMap_29275, var_mapAutomatonActionMap_28629, var_mapStateSortedList_29699, var_mapOverrideList_33005, var_shadowBehaviour_27484, var_shadowMessage_27517  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1059))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1057)) ;
  GALGAS_string var_graphFile_41428 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/shared-map-"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1073)).add_operation (object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1073)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1073)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1073)) ;
  enumGalgasBool test_57 = kBoolTrue ;
  if (kBoolTrue == test_57) {
    test_57 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_57) {
      GALGAS_string var_theGraph_41597 = GALGAS_string ("digraph G {\n") ;
      cEnumerator_mapAutomatonStateMap enumerator_41650 (var_mapAutomatonStateMap_29275, kENUMERATION_UP) ;
      while (enumerator_41650.hasCurrentObject ()) {
        var_theGraph_41597.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_41650.current_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1077)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1077)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1077)).add_operation (enumerator_41650.current_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1077)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1077)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1077)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1077)) ;
        enumGalgasBool test_58 = kBoolTrue ;
        if (kBoolTrue == test_58) {
          test_58 = var_initialStateSet_28058.getter_hasKey (enumerator_41650.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1078)).boolEnum () ;
          if (kBoolTrue == test_58) {
            var_theGraph_41597.plusAssign_operation(GALGAS_string (" shape=box color=blue"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1079)) ;
          }
        }
        if (kBoolFalse == test_58) {
          var_theGraph_41597.plusAssign_operation(GALGAS_string (" shape=box"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1081)) ;
        }
        switch (enumerator_41650.current_mStateMessageKind (HERE).enumValue ()) {
        case GALGAS_mapAutomatonMessageKind::kNotBuilt:
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
          {
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
          {
            var_theGraph_41597.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1086)) ;
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
          {
            var_theGraph_41597.plusAssign_operation(GALGAS_string (" fontcolor=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1088)) ;
          }
          break ;
        }
        var_theGraph_41597.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1090)) ;
        enumerator_41650.gotoNextObject () ;
      }
      cEnumerator_mapStateList enumerator_42128 (object->mProperty_mMapStateList, kENUMERATION_UP) ;
      while (enumerator_42128.hasCurrentObject ()) {
        cEnumerator_mapStateTransitionList enumerator_42163 (enumerator_42128.current_mTransitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_42163.hasCurrentObject ()) {
          var_theGraph_41597.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_42128.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1094)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1094)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1094)).add_operation (enumerator_42163.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1094)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1094)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1094)).add_operation (enumerator_42163.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1094)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1094)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1094)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1094)) ;
          switch (enumerator_42163.current_mTransitionMessageKind (HERE).enumValue ()) {
          case GALGAS_mapAutomatonMessageKind::kNotBuilt:
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
            {
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
            {
              var_theGraph_41597.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\" color=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1098)) ;
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
            {
              var_theGraph_41597.plusAssign_operation(GALGAS_string (" fontcolor=\"red\" color=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1100)) ;
            }
            break ;
          }
          var_theGraph_41597.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1102)) ;
          enumerator_42163.gotoNextObject () ;
        }
        enumerator_42128.gotoNextObject () ;
      }
      var_theGraph_41597.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1105)) ;
      GALGAS_bool joker_42658 ; // Joker input parameter
      var_theGraph_41597.method_writeToFileWhenDifferentContents (var_graphFile_41428, joker_42658, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1106)) ;
    }
  }
  if (kBoolFalse == test_57) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_graphFile_41428, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1108)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_sharedMapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                         extensionMethod_sharedMapDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_semanticAnalysis (defineExtensionMethod_sharedMapDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Filewrapper 'sharedMapGenerationTemplate'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Filewrapper template 'sharedMapGenerationTemplate uniqueMapTypeHeader1'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & in_TYPE_5F_NAME,
                                                                                       const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const GALGAS_typedPropertyList & /* in_ATTRIBUTE_5F_LIST */,
                                                                                       const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" unique map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "class cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n" ;
  GALGAS_uint index_635_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_635 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_635.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "extern const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_635.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.h1.galgasTemplate", 12)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_635_.increment () ;
      enumerator_635.gotoNextObject () ;
    }
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_uniqueMap {\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Filewrapper template 'sharedMapGenerationTemplate uniqueMapTypeHeader2'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_32_ (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & in_TYPE_5F_NAME,
                                                                                       const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 3)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "class cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cMapElement {\n"
    "//--- Map attributes\n" ;
  GALGAS_uint index_698_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_698 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_698.hasCurrentObject ()) {
      result << "  public : GALGAS_" ;
      result << enumerator_698.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 11)).stringValue () ;
      result << " mProperty_" ;
      result << enumerator_698.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 11)).stringValue () ;
      result << " ;\n" ;
      index_698_.increment () ;
      enumerator_698.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public : cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_964_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_964 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_964.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_964.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_964.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 17)).stringValue () ;
      index_964_.increment () ;
      enumerator_964.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public : virtual bool isValid (void) const ;\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public : virtual cMapElement * copy (void) ;\n"
    "\n"
    "//--- Description\n"
    " public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Filewrapper template 'sharedMapGenerationTemplate uniqueMapTypeSpecificImplementation'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
      result << enumerator_252.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 5)).stringValue () ;
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyMap (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNewEmptyMap (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//  Map automaton states                                                                                               *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  GALGAS_uint index_4638_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP.isValid ()) {
    cEnumerator_mapAutomatonStateMap enumerator_4638 (in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_4638 = enumerator_4638.hasCurrentObject () ;
    if (nonEmpty_enumerator_4638) {
      result << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
        "  static const uint32_t kMapStateCount_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " = " ;
      result << in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP.getter_count (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 107)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 107)).stringValue () ;
      result << " ;\n"
        "#endif\n" ;
    }
    while (enumerator_4638.hasCurrentObject ()) {
      result << "static const uint32_t kMapState_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_4638.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 110)).stringValue () ;
      result << " = " ;
      result << enumerator_4638.current_mStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 110)).stringValue () ;
      result << " ;\n" ;
      index_4638_.increment () ;
      enumerator_4638.gotoNextObject () ;
    }
  }
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//  Map automaton state names                                                                                          *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  GALGAS_uint index_5311_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP_5F_ORDERED_5F_LIST.isValid ()) {
    cEnumerator_keySortedList enumerator_5311 (in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP_5F_ORDERED_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_5311 = enumerator_5311.hasCurrentObject () ;
    if (nonEmpty_enumerator_5311) {
      result << "static const char * kMapStateNames_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " [" ;
      result << in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP_5F_ORDERED_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 120)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 120)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_5311.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_5311.current_mKey (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 122)).stringValue () ;
      if (enumerator_5311.hasNextObject ()) {
        result << ",\n" ;
      }
      index_5311_.increment () ;
      enumerator_5311.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_5311) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//  Map automaton actions                                                                                              *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  GALGAS_uint index_5907_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP.isValid ()) {
    cEnumerator_mapAutomatonActionMap enumerator_5907 (in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_5907 = enumerator_5907.hasCurrentObject () ;
    if (nonEmpty_enumerator_5907) {
      result << "static const uint32_t kMapActionCount_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " = " ;
      result << in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP.getter_count (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 136)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 136)).stringValue () ;
      result << " ;\n" ;
    }
    while (enumerator_5907.hasCurrentObject ()) {
      result << "static const uint32_t kMapAction_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5907.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 138)).stringValue () ;
      result << " = " ;
      result << enumerator_5907.current_mActionIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 138)).stringValue () ;
      result << " ;\n" ;
      index_5907_.increment () ;
      enumerator_5907.gotoNextObject () ;
    }
  }
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//  Map automaton transitions                                                                                          *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  GALGAS_uint index_6657_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.isValid ()) {
    cEnumerator_mapStateSortedList enumerator_6657 (in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_6657 = enumerator_6657.hasCurrentObject () ;
    if (nonEmpty_enumerator_6657) {
      result << "static const cMapAutomatonTransition kMapTransitions_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " [" ;
      result << in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 149)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 149)).stringValue () ;
      result << " * " ;
      result << in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP.getter_count (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 151)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 151)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_6657.hasCurrentObject ()) {
      result << "// State '" ;
      result << enumerator_6657.current_mStateName (HERE).stringValue () ;
      result << "', index " ;
      result << enumerator_6657.current_mStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 154)).stringValue () ;
      result << " \n" ;
      GALGAS_uint index_6751_ (0) ;
      if (enumerator_6657.current_mTransitionList (HERE).isValid ()) {
        cEnumerator_mapStateTransitionSortedList enumerator_6751 (enumerator_6657.current_mTransitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_6751.hasCurrentObject ()) {
          result << "  {kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_6751.current_mTargetStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 156)).stringValue () ;
          result << " /* " ;
          result << enumerator_6751.current_mTargetStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 156)).stringValue () ;
          result << " */, " ;
          switch (enumerator_6751.current_mTransitionMessageKind (HERE).enumValue ()) {
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
          result << enumerator_6751.current_mTransitionMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 166)).stringValue () ;
          result << "}, // for action '" ;
          result << enumerator_6751.current_mActionName (HERE).stringValue () ;
          result << "', (index " ;
          result << enumerator_6751.current_mActionIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 167)).stringValue () ;
          result << ")\n" ;
          index_6751_.increment () ;
          enumerator_6751.gotoNextObject () ;
        }
      }
      index_6657_.increment () ;
      enumerator_6657.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_6657) {
      result << "} ;\n" ;
    }
  }
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//  Map automaton final state issues                                                                                   *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  GALGAS_uint index_7810_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.isValid ()) {
    cEnumerator_mapStateSortedList enumerator_7810 (in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_7810 = enumerator_7810.hasCurrentObject () ;
    if (nonEmpty_enumerator_7810) {
      result << "static const cMapAutomatonFinalIssue kMapAutomatonFinalIssue_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " [" ;
      result << in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 180)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 180)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_7810.hasCurrentObject ()) {
      result << "  {" ;
      switch (enumerator_7810.current_mStateMessageKind (HERE).enumValue ()) {
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
      result << enumerator_7810.current_mStateMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 192)).stringValue () ;
      result << "},// state '" ;
      result << enumerator_7810.current_mStateName (HERE).stringValue () ;
      result << "' (index " ;
      result << enumerator_7810.current_mStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 193)).stringValue () ;
      result << ")\n" ;
      index_7810_.increment () ;
      enumerator_7810.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_7810) {
      result << "} ;\n" ;
    }
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 198)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
  GALGAS_uint index_9412_ (0) ;
  if (in_MAP_5F_OVERRIDE_5F_LIST.isValid ()) {
    cEnumerator_mapOverrideList enumerator_9412 (in_MAP_5F_OVERRIDE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9412.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "//" ;
      result << GALGAS_string ("map override '").add_operation (enumerator_9412.current_mOverrideName (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 223)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 223)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 223)).stringValue () ;
      result << "*\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "static const cBranchOverrideTransformationDescriptor kBranchBehaviourForOverride_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9412.current_mOverrideName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 228)).stringValue () ;
      result << " [" ;
      result << enumerator_9412.current_mBranchBehaviourSortedListForMapOverride (HERE).getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 229)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 229)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_10045_ (0) ;
      if (enumerator_9412.current_mBranchBehaviourSortedListForMapOverride (HERE).isValid ()) {
        cEnumerator_branchBehaviourSortedListForMapOverride enumerator_10045 (enumerator_9412.current_mBranchBehaviourSortedListForMapOverride (HERE), kENUMERATION_UP) ;
        while (enumerator_10045.hasCurrentObject ()) {
          result << "  {kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_10045.current_mStartStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 231)).stringValue () ;
          result << " /* " ;
          result << enumerator_10045.current_mStartStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 231)).stringValue () ;
          result << " */, kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_10045.current_mCurrentStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 232)).stringValue () ;
          result << " /* " ;
          result << enumerator_10045.current_mCurrentStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 232)).stringValue () ;
          result << " */, kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_10045.current_mFinalStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 233)).stringValue () ;
          result << " /* " ;
          result << enumerator_10045.current_mFinalStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 233)).stringValue () ;
          result << " */, " ;
          switch (enumerator_10045.current_mBehaviourMessageKind (HERE).enumValue ()) {
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
          result << enumerator_10045.current_mBehaviourMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 244)).stringValue () ;
          result << "},\n" ;
          index_10045_.increment () ;
          enumerator_10045.gotoNextObject () ;
        }
      }
      result << "} ;\n"
        "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "static const cBranchOverrideCompatibilityDescriptor kBranchCombinationForOverride_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9412.current_mOverrideName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 252)).stringValue () ;
      result << " [" ;
      result << enumerator_9412.current_mBranchCombinationSortedListForMapOverride (HERE).getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 253)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 253)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_11124_ (0) ;
      if (enumerator_9412.current_mBranchCombinationSortedListForMapOverride (HERE).isValid ()) {
        cEnumerator_branchBehaviourSortedListForMapOverride enumerator_11124 (enumerator_9412.current_mBranchCombinationSortedListForMapOverride (HERE), kENUMERATION_UP) ;
        while (enumerator_11124.hasCurrentObject ()) {
          result << "  {kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_11124.current_mStartStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 255)).stringValue () ;
          result << " /* " ;
          result << enumerator_11124.current_mStartStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 255)).stringValue () ;
          result << " */, kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_11124.current_mCurrentStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 256)).stringValue () ;
          result << " /* " ;
          result << enumerator_11124.current_mCurrentStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 256)).stringValue () ;
          result << " */, kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_11124.current_mFinalStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 257)).stringValue () ;
          result << " /* " ;
          result << enumerator_11124.current_mFinalStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 257)).stringValue () ;
          result << " */, " ;
          switch (enumerator_11124.current_mBehaviourMessageKind (HERE).enumValue ()) {
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
          result << enumerator_11124.current_mBehaviourMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 268)).stringValue () ;
          result << "},\n" ;
          index_11124_.increment () ;
          enumerator_11124.gotoNextObject () ;
        }
      }
      result << "} ;\n"
        "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_openOverrideFor" ;
      result << enumerator_9412.current_mOverrideName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 273)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 273)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "C_Compiler * inCompiler\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  openOverride (kBranchBehaviourForOverride_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9412.current_mOverrideName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 275)).stringValue () ;
      result << ", " ;
      result << enumerator_9412.current_mBranchBehaviourSortedListForMapOverride (HERE).getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 275)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 275)).stringValue () ;
      result << ",\n"
        "                kBranchCombinationForOverride_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9412.current_mOverrideName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 276)).stringValue () ;
      result << ", " ;
      result << enumerator_9412.current_mBranchCombinationSortedListForMapOverride (HERE).getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 276)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 276)).stringValue () ;
      result << ",\n"
        "                " ;
      result << enumerator_9412.current_mOverrideName (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 277)).stringValue () ;
      result << ",\n"
        "                inCompiler\n"
        "                COMMA_THERE) ;\n"
        "}\n"
        "\n" ;
      index_9412_.increment () ;
      enumerator_9412.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_12682_ (0) ;
  if (in_INSERT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_insertMethodListAST enumerator_12682 (in_INSERT_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12682.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_" ;
      result << enumerator_12682.current_mInsertMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 286)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_12976_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_12976 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_12976.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_12976.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 288)).stringValue () ;
          result << " inArgument" ;
          result << index_12976_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 288)).stringValue () ;
          index_12976_IDX.increment () ;
          enumerator_12976.gotoNextObject () ;
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
      GALGAS_uint index_13308_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_13308 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_13308.hasCurrentObject ()) {
          result << ", inArgument" ;
          result << index_13308_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 295)).stringValue () ;
          index_13308_IDX.increment () ;
          enumerator_13308.gotoNextObject () ;
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
      result << enumerator_12682.current_mErrorMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 302)).stringValue () ;
      result << " ;\n" ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_12682.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 303)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
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
        result << enumerator_12682.current_mInitialStateName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 313)).stringValue () ;
        result << ",\n"
          "                   kMapStateNames_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " [kMapState_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_12682.current_mInitialStateName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 314)).stringValue () ;
        result << "],\n"
          "                   kInsertErrorMessage\n"
          "                   COMMA_THERE) ;\n" ;
      }
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_12682_.increment () ;
      enumerator_12682.gotoNextObject () ;
    }
  }
  GALGAS_uint index_14245_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_14245 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14245.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_14245.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 324)).stringValue () ;
      result << " = " ;
      result << enumerator_14245.current_mErrorMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 324)).stringValue () ;
      result << " ;\n"
        "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::" ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_14245.current_mActionName (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 327)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "method_" ;
      }else if (kBoolFalse == test_4) {
        result << "setter_" ;
      }
      result << enumerator_14245.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 332)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_14904_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_14904 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_14904.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_14904.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 334)).stringValue () ;
          result << " & outArgument" ;
          result << index_14904_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 334)).stringValue () ;
          index_14904_IDX.increment () ;
          enumerator_14904.gotoNextObject () ;
        }
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) " ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_14245.current_mActionName (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 338)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
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
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_14245.current_mActionName (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 345)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "kMapAction_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_14245.current_mActionName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 346)).stringValue () ;
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
      result << enumerator_14245.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 353)).stringValue () ;
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_THERE) ;\n"
        "if (NULL == p) {\n" ;
      GALGAS_uint index_15832_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_15832 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_15832.hasCurrentObject ()) {
          result << "  outArgument" ;
          result << index_15832_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 357)).stringValue () ;
          result << ".drop () ;\n" ;
          index_15832_IDX.increment () ;
          enumerator_15832.gotoNextObject () ;
        }
      }
      result << "}else{\n"
        "  macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n" ;
      GALGAS_uint index_16017_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_16017 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_16017.hasCurrentObject ()) {
          result << "  outArgument" ;
          result << index_16017_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 362)).stringValue () ;
          result << " = p->mProperty_" ;
          result << enumerator_16017.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 362)).stringValue () ;
          result << " ;\n" ;
          index_16017_IDX.increment () ;
          enumerator_16017.gotoNextObject () ;
        }
      }
      result << "}\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_14245_.increment () ;
      enumerator_14245.gotoNextObject () ;
    }
  }
  GALGAS_uint index_16194_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16194 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16194.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_16194.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 371)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_16194.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 371)).stringValue () ;
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
      result << enumerator_16194.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 376)).stringValue () ;
      result << " result ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mProperty_" ;
      result << enumerator_16194.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 379)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_16194_IDX.increment () ;
      enumerator_16194.gotoNextObject () ;
    }
  }
  GALGAS_uint index_17218_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17218 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17218.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_set" ;
      result << enumerator_17218.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 387)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 387)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_" ;
      result << enumerator_17218.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 387)).stringValue () ;
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
      result << enumerator_17218.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 395)).stringValue () ;
      result << " = inAttributeValue ;\n"
        "  }\n"
        "}\n"
        "\n" ;
      index_17218_IDX.increment () ;
      enumerator_17218.gotoNextObject () ;
    }
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "GALGAS_lstring cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_lkey (LOCATION_ARGS) const {\n"
    "  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cMapElement) ;\n"
    "  return p->mProperty_lkey ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_19534_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19534 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19534.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_19534.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 428)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_19534.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 428)).stringValue () ;
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
      result << enumerator_19534.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 431)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_19534_IDX.increment () ;
      enumerator_19534.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

