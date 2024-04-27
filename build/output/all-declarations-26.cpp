#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GALGAS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                 GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                 GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                 GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                 GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                 GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  const GALGAS_boolsetDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4744 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 127)), temp_1.readProperty_mBoolsetTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_boolsetDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4744, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 128)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolsetDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_boolsetDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("boolset @").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 136)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInSemanticContext (GALGAS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                           const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                           const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_slotNameSet_6030 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_6054 (temp_0.readProperty_mFlagList (), EnumerationOrder::up) ;
  while (enumerator_6054.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_slotNameSet_6030.getter_hasKey (enumerator_6054.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 154)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_6054.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated slot name"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 155)) ;
      }
    }
    var_slotNameSet_6030.addAssign_operation (enumerator_6054.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 157)) ;
    enumerator_6054.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_boolsetTypeIndex_6294 ;
  {
  const GALGAS_boolsetDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mBoolsetTypeName (), var_boolsetTypeIndex_6294, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 160)) ;
  }
  GALGAS_getterMap var_getterMap_6383 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6383, inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 162)) ;
  }
  {
  const GALGAS_boolsetDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6383, ioArgument_ioTypeMap, GALGAS_string ("contains"), GALGAS_string::makeEmptyString (), temp_4.readProperty_mBoolsetTypeName ().readProperty_string (), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 163)) ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_6680 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_boolsetDeclarationAST temp_5 = this ;
  cEnumerator_lstringlist enumerator_6709 (temp_5.readProperty_mFlagList (), EnumerationOrder::up) ;
  while (enumerator_6709.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_classFunctionMap_6680.getter_hasKey (enumerator_6709.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 176)).operator_not (SOURCE_FILE ("declaration-type-boolset.galgas", 176)).boolEnum () ;
      if (kBoolTrue == test_6) {
        {
        var_classFunctionMap_6680.setter_insertKey (enumerator_6709.current_mValue (HERE), GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_boolsetTypeIndex_6294, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 177)) ;
        }
      }
    }
    enumerator_6709.gotoNextObject () ;
  }
  GALGAS_initializerMap var_initializerMap_6942 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_emptyArgumentList_6987 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_boolsetDeclarationAST temp_7 = this ;
  var_initializerMap_6942.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_6987, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 184)), temp_7.readProperty_mBoolsetTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_6987, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 183)) ;
  }
  GALGAS_setterMap var_setterMap_7182 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_7222 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_boolsetDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mBoolsetTypeName (), GALGAS_bool (false), var_initializerMap_6942, var_getterMap_6383, var_setterMap_7182, var_instanceMethodMap_7222, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 190)) ;
  }
  GALGAS_typeFeatures var_features_7658 = GALGAS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-type-boolset.galgas", 206)).operator_or (GALGAS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-type-boolset.galgas", 206)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 206)).operator_or (GALGAS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-type-boolset.galgas", 206)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 206)).operator_or (GALGAS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-type-boolset.galgas", 207)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 206)).operator_or (GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-boolset.galgas", 208)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 207)).operator_or (GALGAS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-type-boolset.galgas", 208)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 208)).operator_or (GALGAS_typeFeatures::class_func_andAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-boolset.galgas", 209)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 208)).operator_or (GALGAS_typeFeatures::class_func_orAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-boolset.galgas", 210)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 209)).operator_or (GALGAS_typeFeatures::class_func_xorAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-boolset.galgas", 211)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 210)).operator_or (GALGAS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-boolset.galgas", 212)) COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 211)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_boolsetDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isEquatable ().boolEnum () ;
    if (kBoolTrue == test_9) {
      var_features_7658.orAssign_operation(GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-boolset.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 214)) ;
    }
  }
  {
  const GALGAS_boolsetDeclarationAST temp_11 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_11.readProperty_mBoolsetTypeName (), var_features_7658, GALGAS_bool (true), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 216)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_12 = this ;
  const GALGAS_boolsetDeclarationAST temp_13 = this ;
  const GALGAS_boolsetDeclarationAST temp_14 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_8300 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_12.readProperty_mBoolsetTypeName (), temp_13.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-boolset.galgas", 228)), GALGAS_typeKindEnum::class_func_boolsetType (SOURCE_FILE ("declaration-type-boolset.galgas", 229)), GALGAS_bool (false), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_6942, var_classFunctionMap_6680, var_getterMap_6383, var_setterMap_7182, var_instanceMethodMap_7222, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-boolset.galgas", 240)), GALGAS_subscriptMap::init (inCompiler COMMA_HERE), GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_7658, GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-boolset.galgas", 247)), GALGAS_string ("boolset-").add_operation (temp_14.readProperty_mBoolsetTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-boolset.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 248)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-boolset.galgas", 249)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8300.readProperty_typeName (), var_typeDefinition_8300, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 251)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                          const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                          GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_boolsetDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-boolset.galgas", 269)).objectCompare (GALGAS_uint (uint32_t (64U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_boolsetDeclarationAST temp_2 = this ;
      GALGAS_location var_s_10053 = temp_2.readProperty_mFlagList ().getter_mValueAtIndex (GALGAS_uint (uint32_t (64U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 270)).readProperty_location () ;
      const GALGAS_boolsetDeclarationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_10053, GALGAS_string ("max flags count is 64 (here: ").add_operation (temp_3.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-boolset.galgas", 271)).getter_string (SOURCE_FILE ("declaration-type-boolset.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 271)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 271)), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 271)) ;
    }
  }
  const GALGAS_boolsetDeclarationAST temp_5 = this ;
  GALGAS_lstring var_boolsetNameForUsefulness_10208 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 274)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_boolsetNameForUsefulness_10208, var_boolsetNameForUsefulness_10208, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 275)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = this ;
  const GALGAS_boolsetDeclarationAST temp_7 = this ;
  const GALGAS_boolsetDeclarationAST temp_8 = this ;
  const GALGAS_boolsetDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("boolset ").add_operation (temp_6.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 277)), GALGAS_boolsetTypeForGeneration::init_21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_7.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 279)), temp_8.readProperty_mFlagList (), temp_9.readProperty_isEquatable (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 276)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'structGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

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


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (Compiler * inCompiler,
                                                                                  const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const GALGAS_lstringlist & /* in_SLOT_5F_LIST */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" boolset"), inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Properties\n  private: uint64_t mFlags ;\n  private: bool mIsValid ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Private constructor\n  private: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const uint64_t inFlags) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (Compiler * /* inCompiler */,
                                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                              const GALGAS_lstringlist & in_SLOT_5F_LIST,
                                                                                              const GALGAS_bigint & in_FULL_5F_SET,
                                                                                              const GALGAS_bool & in_EQUATABLE
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmFlags (0),\nmIsValid (false) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const uint64_t inFlags) :\nAC_GALGAS_root (),\nmFlags (inFlags),\nmIsValid (true) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (0) ;\n}\n\n") ;
  GALGAS_uint index_734_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_734 (in_SLOT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_734.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_734.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" (uint64_t (1) << ") ;
      result.appendString (index_734_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (") ;\n}\n\n") ;
      index_734_idx.increment () ;
      enumerator_734.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_0 = in_EQUATABLE.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n   ComparisonResult result = ComparisonResult::invalid ;\n   if (mIsValid && inOperand.mIsValid) {\n     result = ComparisonResult::operandEqual ;\n     if (mFlags < inOperand.mFlags) {\n       result = ComparisonResult::firstOperandLowerThanSecond ;\n     }else if (mFlags > inOperand.mFlags) {\n       result = ComparisonResult::firstOperandGreaterThanSecond ;\n     }\n   }\n  return result ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mIsValid ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_contains (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = GALGAS_bool ((mFlags & inOperand.mFlags) != 0) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::andAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * /* inCompiler */\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags &= inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::orAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * /* inCompiler */\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags |= inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::xorAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * /* inCompiler */\n         ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags ^= inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::minusAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * /* inCompiler */\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mFlags &= ~ inOperand.mFlags ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_or (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags | inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_and (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags & inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_xor (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags ^ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::substract_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mFlags & ~ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator_tilde (UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mIsValid) {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (uint64_t (") ;
  result.appendString (in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 155)).stringValue ()) ;
  result.appendString (") ^ mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n                              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"<boolset @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (":\") ;\n  if (! isValid ()) {\n    ioString.appendCString (\" not built\") ;\n  }else{\n") ;
  GALGAS_uint index_6455_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_6455 (in_SLOT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6455.hasCurrentObject ()) {
      result.appendString ("    if ((mFlags & (uint64_t (1) << ") ;
      result.appendString (index_6455_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 170)).stringValue ()) ;
      result.appendString (")) != 0) {\n      ioString.appendCString (\" ") ;
      result.appendString (enumerator_6455.current_mValue (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") ;\n    }\n") ;
      index_6455_idx.increment () ;
      enumerator_6455.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n  ioString.appendCString (\">\") ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                  GALGAS_string & outArgument_outHeader,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_11793 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 318)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (inCompiler, var_typeDefinition_11793.readProperty_typeName ().readProperty_string (), var_typeDefinition_11793.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-boolset.galgas", 321)), temp_1.readProperty_mFlagList () COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 319))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typeDefinition_11793.readProperty_typeName ().readProperty_string (), var_typeDefinition_11793.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-boolset.galgas", 326)), var_typeDefinition_11793.readProperty_isConcrete (), var_typeDefinition_11793.readProperty_initializerMap (), var_typeDefinition_11793.readProperty_classFunctionMap (), var_typeDefinition_11793.readProperty_getterMap (), var_typeDefinition_11793.readProperty_setterMap (), var_typeDefinition_11793.readProperty_instanceMethodMap (), var_typeDefinition_11793.readProperty_classMethodMap (), var_typeDefinition_11793.readProperty_readSubscriptMap (), var_typeDefinition_11793.readProperty_enumerationDescriptorList (), var_typeDefinition_11793.readProperty_features (), var_typeDefinition_11793.readProperty_addAssignOperatorArguments (), var_typeDefinition_11793.readProperty_typeForEnumeratedElement (), var_typeDefinition_11793.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 324))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 324)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outImplementation,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 350)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  const GALGAS_boolsetTypeForGeneration temp_2 = this ;
  const GALGAS_boolsetTypeForGeneration temp_3 = this ;
  const GALGAS_boolsetTypeForGeneration temp_4 = this ;
  const GALGAS_boolsetTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (inCompiler, extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 352)).readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 353)), temp_3.readProperty_mFlagList (), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 355)).left_shift_operation (temp_4.readProperty_mFlagList ().getter_count (SOURCE_FILE ("declaration-type-boolset.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 355)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 355)), temp_5.readProperty_equatable () COMMA_SOURCE_FILE ("declaration-type-boolset.galgas", 351))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@classDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_classDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_classDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("class @").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 197)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                               GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classDeclarationAST temp_0 = this ;
  const GALGAS_classDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_6988 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 210)), temp_1.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_classDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6988, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 211)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_classDeclarationAST temp_4 = this ;
    test_3 = GALGAS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_classDeclarationAST temp_5 = this ;
      const GALGAS_classDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6988, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 216)), temp_6.readProperty_mSuperClassName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-class.galgas", 214)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_7 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_7415 (temp_7.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_7415.hasCurrentObject ()) {
    {
    const GALGAS_classDeclarationAST temp_8 = this ;
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6988, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_7415.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 223)), temp_8.readProperty_mSuperClassName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-class.galgas", 221)) ;
    }
    enumerator_7415.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInSemanticContext (GALGAS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                         const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                         const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_getterMap var_getterMap_8249 ;
  GALGAS_setterMap var_setterMap_8278 ;
  GALGAS_instanceMethodMap var_instanceMethodMap_8315 ;
  GALGAS_typedPropertyList var_inheritedTypedPropertyList_8360 ;
  GALGAS_propertyMap var_attributeMap_8408 = GALGAS_propertyMap::init (inCompiler COMMA_HERE) ;
  GALGAS_unifiedTypeMapEntry var_superClassIndex_8481 ;
  GALGAS_bool var_generateHeaderInSeparateFile_8511 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_8481 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas", 247)) ;
      {
      routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_8249, inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 248)) ;
      }
      var_setterMap_8278 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
      var_instanceMethodMap_8315 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
      var_inheritedTypedPropertyList_8360 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
      var_attributeMap_8408 = GALGAS_propertyMap::init (inCompiler COMMA_HERE) ;
      const GALGAS_classDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_8511 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_classDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperClassName (), var_superClassIndex_8481, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 255)) ;
    }
    const GALGAS_classDeclarationAST temp_4 = this ;
    GALGAS_unifiedTypeDefinition var_superTypeDefinition_8940 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_4.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 256)) ;
    var_inheritedTypedPropertyList_8360 = var_superTypeDefinition_8940.readProperty_allTypedPropertyList () ;
    var_attributeMap_8408 = var_superTypeDefinition_8940.readProperty_propertyMap () ;
    var_generateHeaderInSeparateFile_8511 = var_superTypeDefinition_8940.readProperty_generateHeaderInSeparateFile () ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_superTypeDefinition_8940.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("declaration-type-class.galgas", 261)).operator_not (SOURCE_FILE ("declaration-type-class.galgas", 261)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_classDeclarationAST temp_6 = this ;
        const GALGAS_classDeclarationAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mSuperClassName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_7.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 262)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 262)), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 262)) ;
      }
    }
    var_setterMap_8278 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
    cEnumerator_setterMap enumerator_9522 (var_superTypeDefinition_8940.readProperty_setterMap (), EnumerationOrder::up) ;
    while (enumerator_9522.hasCurrentObject ()) {
      {
      var_setterMap_8278.setter_insertKey (enumerator_9522.current_lkey (HERE), enumerator_9522.current_mKind (HERE), enumerator_9522.current_mParameterList (HERE), enumerator_9522.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-class.galgas", 272)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 267)) ;
      }
      enumerator_9522.gotoNextObject () ;
    }
    var_getterMap_8249 = GALGAS_getterMap::init (inCompiler COMMA_HERE) ;
    cEnumerator_getterMap enumerator_9863 (var_superTypeDefinition_8940.readProperty_getterMap (), EnumerationOrder::up) ;
    while (enumerator_9863.hasCurrentObject ()) {
      {
      var_getterMap_8249.setter_insertKey (enumerator_9863.current (HERE).readProperty_lkey (), enumerator_9863.current (HERE).readProperty_mKind (), enumerator_9863.current (HERE).readProperty_mArgumentTypeList (), enumerator_9863.current (HERE).readProperty_mDeclarationLocation (), enumerator_9863.current (HERE).readProperty_mHasCompilerArgument (), enumerator_9863.current (HERE).readProperty_mReturnedType (), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-class.galgas", 286)), enumerator_9863.current (HERE).readProperty_mGetterNameThatObsoletesInvokationName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 279)) ;
      }
      enumerator_9863.gotoNextObject () ;
    }
    var_instanceMethodMap_8315 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
    cEnumerator_instanceMethodMap enumerator_10338 (var_superTypeDefinition_8940.readProperty_instanceMethodMap (), EnumerationOrder::up) ;
    while (enumerator_10338.hasCurrentObject ()) {
      {
      var_instanceMethodMap_8315.setter_insertKey (enumerator_10338.current (HERE).readProperty_lkey (), enumerator_10338.current (HERE).readProperty_mKind (), enumerator_10338.current (HERE).readProperty_mParameterList (), enumerator_10338.current (HERE).readProperty_mDeclarationLocation (), enumerator_10338.current (HERE).readProperty_mHasCompilerArgument (), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-class.galgas", 299)), enumerator_10338.current (HERE).readProperty_mErrorMessage (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 293)) ;
      }
      enumerator_10338.gotoNextObject () ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_classIndex_10789 ;
  {
  const GALGAS_classDeclarationAST temp_9 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_9.readProperty_mClassTypeName (), var_classIndex_10789, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 305)) ;
  }
  GALGAS_functionSignature var_synthetizedInitializerArgumentList_10885 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  cEnumerator_typedPropertyList enumerator_10945 (var_inheritedTypedPropertyList_8360, EnumerationOrder::up) ;
  while (enumerator_10945.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (ComparisonKind::equal, enumerator_10945.current (HERE).readProperty_initialization ().objectCompare (GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas", 309)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_lstring temp_11 ;
        const enumGalgasBool test_12 = enumerator_10945.current (HERE).readProperty_hasSelector ().boolEnum () ;
        if (kBoolTrue == test_12) {
          temp_11 = enumerator_10945.current (HERE).readProperty_name () ;
        }else if (kBoolFalse == test_12) {
          temp_11 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas", 311)) ;
        }
        var_synthetizedInitializerArgumentList_10885.addAssign_operation (temp_11, enumerator_10945.current (HERE).readProperty_typeEntry (), enumerator_10945.current (HERE).readProperty_name ().readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 310)) ;
      }
    }
    enumerator_10945.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_13 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11265 (temp_13.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_11265.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_11335 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11265.current (HERE).readProperty_typeName (), var_attributeTypeIndex_11335, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 318)) ;
    }
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (ComparisonKind::equal, enumerator_11265.current (HERE).readProperty_initialization ().objectCompare (GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas", 319)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        GALGAS_lstring temp_15 ;
        const enumGalgasBool test_16 = enumerator_11265.current (HERE).readProperty_hasSelector ().boolEnum () ;
        if (kBoolTrue == test_16) {
          temp_15 = enumerator_11265.current (HERE).readProperty_name () ;
        }else if (kBoolFalse == test_16) {
          temp_15 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas", 321)) ;
        }
        var_synthetizedInitializerArgumentList_10885.addAssign_operation (temp_15, var_attributeTypeIndex_11335, enumerator_11265.current (HERE).readProperty_name ().readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 320)) ;
      }
    }
    {
    var_attributeMap_8408.setter_insertKey (enumerator_11265.current (HERE).readProperty_name (), extensionGetter_accessControl (enumerator_11265.current (HERE).readProperty_accessControl (), var_classIndex_10789, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 328)), enumerator_11265.current (HERE).readProperty_isConstant (), var_attributeTypeIndex_11335, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 326)) ;
    }
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = var_getterMap_8249.getter_hasKey (enumerator_11265.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-class.galgas", 332)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_11265.current (HERE).readProperty_name ().readProperty_location (), GALGAS_string ("'").add_operation (enumerator_11265.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 334)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 334)), fixItArray18  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 333)) ;
      }
    }
    enumerator_11265.gotoNextObject () ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_12049 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    const GALGAS_classDeclarationAST temp_20 = this ;
    test_19 = temp_20.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("declaration-type-class.galgas", 339)).boolEnum () ;
    if (kBoolTrue == test_19) {
      {
      var_classFunctionMap_12049.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("new"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 341)), inCompiler COMMA_HERE), var_synthetizedInitializerArgumentList_10885, GALGAS_bool (false), var_classIndex_10789, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 340)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedPropertyList_12333 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_typedPropertyList var_allTypedAttributeList_12395 = var_inheritedTypedPropertyList_8360 ;
  const GALGAS_classDeclarationAST temp_21 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_12471 (temp_21.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_12471.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_12541 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12471.current (HERE).readProperty_typeName (), var_attributeTypeIndex_12541, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 351)) ;
    }
    var_currentClassTypedPropertyList_12333.addAssign_operation (var_attributeTypeIndex_12541, enumerator_12471.current (HERE).readProperty_name (), enumerator_12471.current (HERE).readProperty_initialization (), enumerator_12471.current (HERE).readProperty_isConstant ().operator_not (SOURCE_FILE ("declaration-type-class.galgas", 356)), enumerator_12471.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 352)) ;
    var_allTypedAttributeList_12395.addAssign_operation (var_attributeTypeIndex_12541, enumerator_12471.current (HERE).readProperty_name (), enumerator_12471.current (HERE).readProperty_initialization (), enumerator_12471.current (HERE).readProperty_isConstant ().operator_not (SOURCE_FILE ("declaration-type-class.galgas", 362)), enumerator_12471.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 358)) ;
    enumerator_12471.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    const GALGAS_classDeclarationAST temp_23 = this ;
    test_22 = temp_23.readProperty_mIsReference ().operator_not (SOURCE_FILE ("declaration-type-class.galgas", 366)).boolEnum () ;
    if (kBoolTrue == test_22) {
      cEnumerator_typedPropertyList enumerator_13067 (var_currentClassTypedPropertyList_12333, EnumerationOrder::up) ;
      while (enumerator_13067.hasCurrentObject ()) {
        enumGalgasBool test_24 = kBoolTrue ;
        if (kBoolTrue == test_24) {
          test_24 = enumerator_13067.current (HERE).readProperty_hasSetter ().boolEnum () ;
          if (kBoolTrue == test_24) {
            {
            GALGAS_formalParameterSignature temp_25 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 372)) ;
            temp_25.enterElement (GALGAS_formalParameterSignature_2E_element::init_21__21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas", 372)), enumerator_13067.current (HERE).readProperty_typeEntry (), GALGAS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-class.galgas", 372)), enumerator_13067.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 372)) ;
            var_setterMap_8278.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("set").add_operation (enumerator_13067.current (HERE).readProperty_name ().readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("declaration-type-class.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 370)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 370)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-class.galgas", 371)), temp_25, GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-class.galgas", 374)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 369)) ;
            }
          }
        }
        enumerator_13067.gotoNextObject () ;
      }
    }
  }
  GALGAS_initializerMap var_initializerMap_13583 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_classDeclarationAST temp_26 = this ;
  GALGAS_typeFeatures temp_27 ;
  const enumGalgasBool test_28 = temp_26.readProperty_mIsReference ().boolEnum () ;
  if (kBoolTrue == test_28) {
    temp_27 = GALGAS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-class.galgas", 382)) ;
  }else if (kBoolFalse == test_28) {
    temp_27 = GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-class.galgas", 382)) ;
  }
  GALGAS_typeFeatures var_features_13625 = temp_27 ;
  enumGalgasBool test_29 = kBoolTrue ;
  if (kBoolTrue == test_29) {
    const GALGAS_classDeclarationAST temp_30 = this ;
    test_29 = temp_30.readProperty_clonable ().boolEnum () ;
    if (kBoolTrue == test_29) {
      var_features_13625.orAssign_operation(GALGAS_typeFeatures::class_func_clonable (SOURCE_FILE ("declaration-type-class.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 384)) ;
      GALGAS_functionSignature var_cloneInitializerArgumentList_13786 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
      var_cloneInitializerArgumentList_13786.addAssign_operation (GALGAS_string ("cloned").getter_nowhere (SOURCE_FILE ("declaration-type-class.galgas", 387)), var_classIndex_10789, GALGAS_string ("inObject"), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 386)) ;
      {
      const GALGAS_classDeclarationAST temp_31 = this ;
      var_initializerMap_13583.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_cloneInitializerArgumentList_13786, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 392)), temp_31.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_cloneInitializerArgumentList_13786, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 391)) ;
      }
    }
  }
  {
  const GALGAS_classDeclarationAST temp_32 = this ;
  const GALGAS_classDeclarationAST temp_33 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_32.readProperty_mClassTypeName (), GALGAS_bool (true), var_initializerMap_13583, var_getterMap_8249, var_setterMap_8278, var_instanceMethodMap_8315, temp_33.readProperty_mIsReference ().operator_not (SOURCE_FILE ("declaration-type-class.galgas", 410)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 397)) ;
  }
  enumGalgasBool test_34 = kBoolTrue ;
  if (kBoolTrue == test_34) {
    const GALGAS_classDeclarationAST temp_35 = this ;
    GALGAS_bigint temp_36 ;
    const enumGalgasBool test_37 = temp_35.readProperty_clonable ().boolEnum () ;
    if (kBoolTrue == test_37) {
      temp_36 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 413)) ;
    }else if (kBoolFalse == test_37) {
      temp_36 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 413)) ;
    }
    test_34 = GALGAS_bool (ComparisonKind::equal, var_initializerMap_13583.getter_count (SOURCE_FILE ("declaration-type-class.galgas", 413)).objectCompare (temp_36.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 413)))).boolEnum () ;
    if (kBoolTrue == test_34) {
      var_features_13625.orAssign_operation(GALGAS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-class.galgas", 414)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 414)) ;
      {
      const GALGAS_classDeclarationAST temp_38 = this ;
      var_initializerMap_13583.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_synthetizedInitializerArgumentList_10885, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 416)), temp_38.readProperty_mClassTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_synthetizedInitializerArgumentList_10885, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 415)) ;
      }
    }
  }
  {
  const GALGAS_classDeclarationAST temp_39 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_39.readProperty_mClassTypeName (), var_features_13625, GALGAS_bool (false), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 420)) ;
  }
  const GALGAS_classDeclarationAST temp_40 = this ;
  const GALGAS_classDeclarationAST temp_41 = this ;
  const GALGAS_classDeclarationAST temp_42 = this ;
  const GALGAS_classDeclarationAST temp_43 = this ;
  const GALGAS_classDeclarationAST temp_44 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_15172 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_40.readProperty_mClassTypeName (), temp_41.readProperty_isPredefined (), temp_42.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("declaration-type-class.galgas", 431)), var_superClassIndex_8481, GALGAS_typeKindEnum::class_func_classType (temp_43.readProperty_mIsReference ()  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 433)), GALGAS_bool (false), var_allTypedAttributeList_12395, var_attributeMap_8408, var_currentClassTypedPropertyList_12333, var_initializerMap_13583, var_classFunctionMap_12049, var_getterMap_8249, var_setterMap_8278, var_instanceMethodMap_8315, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas", 444)), GALGAS_subscriptMap::init (inCompiler COMMA_HERE), GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_13625, GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), var_generateHeaderInSeparateFile_8511, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas", 451)), GALGAS_string ("class-").add_operation (temp_44.readProperty_mClassTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-class.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 452)), GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("declaration-type-class.galgas", 453)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_15172.readProperty_typeName (), var_typeDefinition_15172, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 455)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                        const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classDeclarationAST temp_0 = this ;
  GALGAS_lstring var_classTypeNameForUsefulness_16940 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 468)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_16940, var_classTypeNameForUsefulness_16940, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 469)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_classDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_classDeclarationAST temp_3 = this ;
      GALGAS_lstring var_superClassNameForUsefulness_17173 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 471)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16940, var_superClassNameForUsefulness_17173 COMMA_SOURCE_FILE ("declaration-type-class.galgas", 472)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classDeclarationAST temp_5 = this ;
    test_4 = temp_5.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_classDeclarationAST temp_6 = this ;
      GALGAS_lstring var_weakRefTypeNameForUsefulness_17403 = function_typeNameForUsefulEntitiesGraph (function_makeWeakTypeLName (temp_6.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 475)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16940, var_weakRefTypeNameForUsefulness_17403 COMMA_SOURCE_FILE ("declaration-type-class.galgas", 476)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_7 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_17664 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_7.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 479)) ;
  const GALGAS_classDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeMapEntry temp_9 ;
  const enumGalgasBool test_10 = GALGAS_bool (ComparisonKind::equal, temp_8.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas", 482)) ;
  }else if (kBoolFalse == test_10) {
    const GALGAS_classDeclarationAST temp_11 = this ;
    temp_9 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 483)) ;
  }
  GALGAS_unifiedTypeMapEntry var_superClassEntry_17781 = temp_9 ;
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (ComparisonKind::notEqual, var_superClassEntry_17781.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas", 488)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_bool var_superClassIsReference_18222 ;
      extensionGetter_definition (var_superClassEntry_17781, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 489)).readProperty_typeKind ().method_extractClassType (var_superClassIsReference_18222, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 489)) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        const GALGAS_classDeclarationAST temp_14 = this ;
        test_13 = var_superClassIsReference_18222.operator_and (temp_14.readProperty_mIsReference ().operator_not (SOURCE_FILE ("declaration-type-class.galgas", 490)) COMMA_SOURCE_FILE ("declaration-type-class.galgas", 490)).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_classDeclarationAST temp_15 = this ;
          TC_Array <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'refClass', as its super class"), fixItArray16  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 491)) ;
        }
      }
      if (kBoolFalse == test_13) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          const GALGAS_classDeclarationAST temp_18 = this ;
          test_17 = var_superClassIsReference_18222.operator_not (SOURCE_FILE ("declaration-type-class.galgas", 492)).operator_and (temp_18.readProperty_mIsReference () COMMA_SOURCE_FILE ("declaration-type-class.galgas", 492)).boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_classDeclarationAST temp_19 = this ;
            TC_Array <FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (temp_19.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'valueclass', as its super class"), fixItArray20  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 493)) ;
          }
        }
      }
    }
  }
  GALGAS_typedPropertyList var_allAttributeList_18793 ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = GALGAS_bool (ComparisonKind::equal, var_superClassEntry_17781.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-class.galgas", 500)))).boolEnum () ;
    if (kBoolTrue == test_21) {
      var_allAttributeList_18793 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_21) {
    var_allAttributeList_18793 = extensionGetter_definition (var_superClassEntry_17781, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 503)).readProperty_allTypedPropertyList () ;
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      const GALGAS_classDeclarationAST temp_23 = this ;
      test_22 = temp_23.readProperty_mGenerateInSeparateFile ().boolEnum () ;
      if (kBoolTrue == test_22) {
        const GALGAS_classDeclarationAST temp_24 = this ;
        TC_Array <FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (temp_24.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray25  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 505)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_synthetizedInheritedInitializerArgumentList_19144 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  cEnumerator_typedPropertyList enumerator_19213 (var_allAttributeList_18793, EnumerationOrder::up) ;
  while (enumerator_19213.hasCurrentObject ()) {
    enumGalgasBool test_26 = kBoolTrue ;
    if (kBoolTrue == test_26) {
      test_26 = GALGAS_bool (ComparisonKind::equal, enumerator_19213.current (HERE).readProperty_initialization ().objectCompare (GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas", 510)))).boolEnum () ;
      if (kBoolTrue == test_26) {
        var_synthetizedInheritedInitializerArgumentList_19144.addAssign_operation (enumerator_19213.current (HERE).readProperty_typeEntry (), enumerator_19213.current (HERE).readProperty_name (), enumerator_19213.current (HERE).readProperty_initialization (), enumerator_19213.current (HERE).readProperty_hasSetter (), enumerator_19213.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 511)) ;
      }
    }
    enumerator_19213.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_19583 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_propertyIndexMap var_attributeMap_19633 = GALGAS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_classDeclarationAST temp_27 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_19676 (temp_27.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_19676.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_19703 = function_typeNameForUsefulEntitiesGraph (enumerator_19676.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 523)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16940, var_propertyTypeNameForUsefulness_19703 COMMA_SOURCE_FILE ("declaration-type-class.galgas", 524)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_19896 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_19676.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 525)) ;
    var_typedAttributeList_19583.addAssign_operation (var_t_19896, enumerator_19676.current (HERE).readProperty_name (), enumerator_19676.current (HERE).readProperty_initialization (), enumerator_19676.current (HERE).readProperty_isConstant ().operator_not (SOURCE_FILE ("declaration-type-class.galgas", 530)), enumerator_19676.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 526)) ;
    var_allAttributeList_18793.addAssign_operation (var_t_19896, enumerator_19676.current (HERE).readProperty_name (), enumerator_19676.current (HERE).readProperty_initialization (), enumerator_19676.current (HERE).readProperty_isConstant ().operator_not (SOURCE_FILE ("declaration-type-class.galgas", 536)), enumerator_19676.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 532)) ;
    {
    var_attributeMap_19633.setter_insertKey (enumerator_19676.current (HERE).readProperty_name (), var_t_19896, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 538)) ;
    }
    enumerator_19676.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_synthetizedInitialzerArgumentList_20441 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  cEnumerator_typedPropertyList enumerator_20522 (extensionGetter_definition (var_selfType_17664, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 542)).readProperty_allTypedPropertyList (), EnumerationOrder::up) ;
  while (enumerator_20522.hasCurrentObject ()) {
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      test_28 = GALGAS_bool (ComparisonKind::equal, enumerator_20522.current (HERE).readProperty_initialization ().objectCompare (GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-class.galgas", 543)))).boolEnum () ;
      if (kBoolTrue == test_28) {
        var_synthetizedInitialzerArgumentList_20441.addAssign_operation (enumerator_20522.current (HERE).readProperty_typeEntry (), enumerator_20522.current (HERE).readProperty_name (), enumerator_20522.current (HERE).readProperty_initialization (), enumerator_20522.current (HERE).readProperty_hasSetter (), enumerator_20522.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 544)) ;
      }
    }
    enumerator_20522.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedVariableCppNameSet_21014 ;
  GALGAS_string var_initializationCode_21050 ;
  const GALGAS_classDeclarationAST temp_29 = this ;
  extensionMethod_buildPropertyInitializationCode (temp_29.readProperty_mPropertyList (), var_classTypeNameForUsefulness_16940, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, ioArgument_ioUsefulEntitiesGraph, ioArgument_ioTypeMap, var_unusedVariableCppNameSet_21014, var_initializationCode_21050, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 552)) ;
  GALGAS_bool var_constructorNeedsCompilerVar_21093 = var_unusedVariableCppNameSet_21014.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 562)) COMMA_SOURCE_FILE ("declaration-type-class.galgas", 562)).operator_not (SOURCE_FILE ("declaration-type-class.galgas", 562)) ;
  const GALGAS_classDeclarationAST temp_30 = this ;
  const GALGAS_classDeclarationAST temp_31 = this ;
  const GALGAS_classDeclarationAST temp_32 = this ;
  const GALGAS_classDeclarationAST temp_33 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (temp_30.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 564)), GALGAS_classTypeForGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_selfType_17664, temp_31.readProperty_mIsAbstract (), temp_32.readProperty_mIsReference (), var_superClassEntry_17781, var_allAttributeList_18793, var_typedAttributeList_19583, extensionGetter_definition (var_selfType_17664, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 572)).readProperty_generateHeaderInSeparateFile (), var_constructorNeedsCompilerVar_21093, var_initializationCode_21050, var_synthetizedInitialzerArgumentList_20441, var_synthetizedInheritedInitializerArgumentList_19144, extensionGetter_definition (var_selfType_17664, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 577)).readProperty_initializerMap (), temp_33.readProperty_clonable (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 563)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas", 608)).operator_not (SOURCE_FILE ("declaration-type-class.galgas", 608)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_classTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 609)) ;
    }
  }
  const GALGAS_classTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_23189 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 611)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classTypeForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_classTypeForGeneration temp_6 = this ;
      const GALGAS_classTypeForGeneration temp_7 = this ;
      GALGAS_string temp_8 ;
      const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas", 616)).boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_9) {
        const GALGAS_classTypeForGeneration temp_10 = this ;
        temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 616)) ;
      }
      const GALGAS_classTypeForGeneration temp_11 = this ;
      const GALGAS_classTypeForGeneration temp_12 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_31_ (inCompiler, var_selfTypeDefinition_23189.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 615)), temp_8, temp_11.readProperty_mIsAbstract (), temp_12.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("declaration-type-class.galgas", 613))) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_classTypeForGeneration temp_13 = this ;
    const GALGAS_classTypeForGeneration temp_14 = this ;
    GALGAS_string temp_15 ;
    const enumGalgasBool test_16 = temp_14.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas", 624)).boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_16) {
      const GALGAS_classTypeForGeneration temp_17 = this ;
      temp_15 = extensionGetter_identifierRepresentation (temp_17.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 624)) ;
    }
    const GALGAS_classTypeForGeneration temp_18 = this ;
    const GALGAS_classTypeForGeneration temp_19 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_31_ (inCompiler, var_selfTypeDefinition_23189.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_13.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 623)), temp_15, temp_18.readProperty_mIsAbstract (), temp_19.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("declaration-type-class.galgas", 621))) ;
  }
  const GALGAS_classTypeForGeneration temp_20 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_23189.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_20.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 631)), var_selfTypeDefinition_23189.readProperty_isConcrete (), var_selfTypeDefinition_23189.readProperty_initializerMap (), var_selfTypeDefinition_23189.readProperty_classFunctionMap (), var_selfTypeDefinition_23189.readProperty_getterMap (), var_selfTypeDefinition_23189.readProperty_setterMap (), var_selfTypeDefinition_23189.readProperty_instanceMethodMap (), var_selfTypeDefinition_23189.readProperty_classMethodMap (), var_selfTypeDefinition_23189.readProperty_readSubscriptMap (), var_selfTypeDefinition_23189.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_23189.readProperty_features (), var_selfTypeDefinition_23189.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_23189.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_23189.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-class.galgas", 629))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 629)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration2'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_32_ (const GALGAS_string constinArgument_inOutputDirectory,
                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_25044 (temp_0.readProperty_mCurrentTypedAttributeList (), EnumerationOrder::up) ;
  while (enumerator_25044.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_25044.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 654)) ;
    enumerator_25044.gotoNextObject () ;
  }
  const GALGAS_classTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_25146 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 656)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_classTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_classTypeForGeneration temp_5 = this ;
        test_4 = temp_5.readProperty_generateHeaderInSeparateFile ().boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_classTypeForGeneration temp_6 = this ;
          const GALGAS_classTypeForGeneration temp_7 = this ;
          GALGAS_string temp_8 ;
          const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas", 662)).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_9) {
            const GALGAS_classTypeForGeneration temp_10 = this ;
            temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 662)) ;
          }
          const GALGAS_classTypeForGeneration temp_11 = this ;
          const GALGAS_classTypeForGeneration temp_12 = this ;
          const GALGAS_classTypeForGeneration temp_13 = this ;
          const GALGAS_classTypeForGeneration temp_14 = this ;
          const GALGAS_classTypeForGeneration temp_15 = this ;
          const GALGAS_classTypeForGeneration temp_16 = this ;
          GALGAS_string var_part_31__25298 = GALGAS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_selfTypeDefinition_25146.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 661)), temp_8, temp_11.readProperty_mCurrentTypedAttributeList (), temp_12.readProperty_mAllTypedAttributeList (), temp_13.readProperty_mIsAbstract (), extensionGetter_definition (temp_14.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 666)).readProperty_getterMap (), extensionGetter_definition (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 667)).readProperty_instanceMethodMap (), temp_16.readProperty_initializerMap () COMMA_SOURCE_FILE ("declaration-type-class.galgas", 659))) ;
          const GALGAS_classTypeForGeneration temp_17 = this ;
          const GALGAS_classTypeForGeneration temp_18 = this ;
          GALGAS_string temp_19 ;
          const enumGalgasBool test_20 = temp_18.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas", 673)).boolEnum () ;
          if (kBoolTrue == test_20) {
            temp_19 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_20) {
            const GALGAS_classTypeForGeneration temp_21 = this ;
            temp_19 = extensionGetter_identifierRepresentation (temp_21.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 673)) ;
          }
          const GALGAS_classTypeForGeneration temp_22 = this ;
          const GALGAS_classTypeForGeneration temp_23 = this ;
          const GALGAS_classTypeForGeneration temp_24 = this ;
          const GALGAS_classTypeForGeneration temp_25 = this ;
          GALGAS_string var_part_32__25866 = GALGAS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_selfTypeDefinition_25146.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_17.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 672)), temp_19, temp_22.readProperty_mCurrentTypedAttributeList (), temp_23.readProperty_mAllTypedAttributeList (), temp_24.readProperty_mIsAbstract (), temp_25.readProperty_synthetizedInitializerArgumentList () COMMA_SOURCE_FILE ("declaration-type-class.galgas", 670))) ;
          const GALGAS_classTypeForGeneration temp_26 = this ;
          GALGAS_string var_headerFileName_26338 = GALGAS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_26.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 679)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 679)) ;
          {
          GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 681)), var_headerFileName_26338, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_part_31__25298, GALGAS_string ("\n\n"), var_part_32__25866, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 680)) ;
          }
          outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_26338, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 691)).add_operation (GALGAS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 691)) ;
        }
      }
      if (kBoolFalse == test_4) {
        const GALGAS_classTypeForGeneration temp_27 = this ;
        const GALGAS_classTypeForGeneration temp_28 = this ;
        GALGAS_string temp_29 ;
        const enumGalgasBool test_30 = temp_28.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas", 696)).boolEnum () ;
        if (kBoolTrue == test_30) {
          temp_29 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_30) {
          const GALGAS_classTypeForGeneration temp_31 = this ;
          temp_29 = extensionGetter_identifierRepresentation (temp_31.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 696)) ;
        }
        const GALGAS_classTypeForGeneration temp_32 = this ;
        const GALGAS_classTypeForGeneration temp_33 = this ;
        const GALGAS_classTypeForGeneration temp_34 = this ;
        const GALGAS_classTypeForGeneration temp_35 = this ;
        const GALGAS_classTypeForGeneration temp_36 = this ;
        const GALGAS_classTypeForGeneration temp_37 = this ;
        outArgument_outHeader = GALGAS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_selfTypeDefinition_25146.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_27.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 695)), temp_29, temp_32.readProperty_mCurrentTypedAttributeList (), temp_33.readProperty_mAllTypedAttributeList (), temp_34.readProperty_mIsAbstract (), extensionGetter_definition (temp_35.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 700)).readProperty_getterMap (), extensionGetter_definition (temp_36.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 701)).readProperty_instanceMethodMap (), temp_37.readProperty_initializerMap () COMMA_SOURCE_FILE ("declaration-type-class.galgas", 693))) ;
        const GALGAS_classTypeForGeneration temp_38 = this ;
        const GALGAS_classTypeForGeneration temp_39 = this ;
        GALGAS_string temp_40 ;
        const enumGalgasBool test_41 = temp_39.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas", 707)).boolEnum () ;
        if (kBoolTrue == test_41) {
          temp_40 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_41) {
          const GALGAS_classTypeForGeneration temp_42 = this ;
          temp_40 = extensionGetter_identifierRepresentation (temp_42.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 707)) ;
        }
        const GALGAS_classTypeForGeneration temp_43 = this ;
        const GALGAS_classTypeForGeneration temp_44 = this ;
        const GALGAS_classTypeForGeneration temp_45 = this ;
        const GALGAS_classTypeForGeneration temp_46 = this ;
        outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_selfTypeDefinition_25146.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_38.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 706)), temp_40, temp_43.readProperty_mCurrentTypedAttributeList (), temp_44.readProperty_mAllTypedAttributeList (), temp_45.readProperty_mIsAbstract (), temp_46.readProperty_synthetizedInitializerArgumentList () COMMA_SOURCE_FILE ("declaration-type-class.galgas", 704))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 704)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_47 = kBoolTrue ;
    if (kBoolTrue == test_47) {
      const GALGAS_classTypeForGeneration temp_48 = this ;
      test_47 = temp_48.readProperty_generateHeaderInSeparateFile ().boolEnum () ;
      if (kBoolTrue == test_47) {
        const GALGAS_classTypeForGeneration temp_49 = this ;
        const GALGAS_classTypeForGeneration temp_50 = this ;
        GALGAS_string temp_51 ;
        const enumGalgasBool test_52 = temp_50.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas", 719)).boolEnum () ;
        if (kBoolTrue == test_52) {
          temp_51 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_52) {
          const GALGAS_classTypeForGeneration temp_53 = this ;
          temp_51 = extensionGetter_identifierRepresentation (temp_53.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 719)) ;
        }
        const GALGAS_classTypeForGeneration temp_54 = this ;
        const GALGAS_classTypeForGeneration temp_55 = this ;
        const GALGAS_classTypeForGeneration temp_56 = this ;
        const GALGAS_classTypeForGeneration temp_57 = this ;
        const GALGAS_classTypeForGeneration temp_58 = this ;
        GALGAS_string var_part_31__28019 = GALGAS_string (filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, var_selfTypeDefinition_25146.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_49.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 718)), temp_51, temp_54.readProperty_mCurrentTypedAttributeList (), temp_55.readProperty_mAllTypedAttributeList (), temp_56.readProperty_mIsAbstract (), extensionGetter_definition (temp_57.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 723)).readProperty_getterMap (), extensionGetter_definition (temp_58.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 724)).readProperty_instanceMethodMap () COMMA_SOURCE_FILE ("declaration-type-class.galgas", 716))) ;
        const GALGAS_classTypeForGeneration temp_59 = this ;
        const GALGAS_classTypeForGeneration temp_60 = this ;
        GALGAS_string temp_61 ;
        const enumGalgasBool test_62 = temp_60.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas", 729)).boolEnum () ;
        if (kBoolTrue == test_62) {
          temp_61 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_62) {
          const GALGAS_classTypeForGeneration temp_63 = this ;
          temp_61 = extensionGetter_identifierRepresentation (temp_63.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 729)) ;
        }
        const GALGAS_classTypeForGeneration temp_64 = this ;
        const GALGAS_classTypeForGeneration temp_65 = this ;
        const GALGAS_classTypeForGeneration temp_66 = this ;
        GALGAS_string var_part_32__28544 = GALGAS_string (filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, var_selfTypeDefinition_25146.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_59.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 728)), temp_61, temp_64.readProperty_mCurrentTypedAttributeList (), temp_65.readProperty_mAllTypedAttributeList (), temp_66.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("declaration-type-class.galgas", 726))) ;
        const GALGAS_classTypeForGeneration temp_67 = this ;
        GALGAS_string var_headerFileName_28961 = GALGAS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_67.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 734)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 734)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 734)) ;
        {
        GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 736)), var_headerFileName_28961, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_part_31__28019, GALGAS_string ("\n\n"), var_part_32__28544, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 735)) ;
        }
        outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_28961, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 746)).add_operation (GALGAS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 746)) ;
      }
    }
    if (kBoolFalse == test_47) {
      const GALGAS_classTypeForGeneration temp_68 = this ;
      const GALGAS_classTypeForGeneration temp_69 = this ;
      GALGAS_string temp_70 ;
      const enumGalgasBool test_71 = temp_69.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas", 751)).boolEnum () ;
      if (kBoolTrue == test_71) {
        temp_70 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_71) {
        const GALGAS_classTypeForGeneration temp_72 = this ;
        temp_70 = extensionGetter_identifierRepresentation (temp_72.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 751)) ;
      }
      const GALGAS_classTypeForGeneration temp_73 = this ;
      const GALGAS_classTypeForGeneration temp_74 = this ;
      const GALGAS_classTypeForGeneration temp_75 = this ;
      const GALGAS_classTypeForGeneration temp_76 = this ;
      const GALGAS_classTypeForGeneration temp_77 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, var_selfTypeDefinition_25146.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_68.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 750)), temp_70, temp_73.readProperty_mCurrentTypedAttributeList (), temp_74.readProperty_mAllTypedAttributeList (), temp_75.readProperty_mIsAbstract (), extensionGetter_definition (temp_76.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 755)).readProperty_getterMap (), extensionGetter_definition (temp_77.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 756)).readProperty_instanceMethodMap () COMMA_SOURCE_FILE ("declaration-type-class.galgas", 748))) ;
      const GALGAS_classTypeForGeneration temp_78 = this ;
      const GALGAS_classTypeForGeneration temp_79 = this ;
      GALGAS_string temp_80 ;
      const enumGalgasBool test_81 = temp_79.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas", 761)).boolEnum () ;
      if (kBoolTrue == test_81) {
        temp_80 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_81) {
        const GALGAS_classTypeForGeneration temp_82 = this ;
        temp_80 = extensionGetter_identifierRepresentation (temp_82.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 761)) ;
      }
      const GALGAS_classTypeForGeneration temp_83 = this ;
      const GALGAS_classTypeForGeneration temp_84 = this ;
      const GALGAS_classTypeForGeneration temp_85 = this ;
      outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, var_selfTypeDefinition_25146.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_78.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 760)), temp_80, temp_83.readProperty_mCurrentTypedAttributeList (), temp_84.readProperty_mAllTypedAttributeList (), temp_85.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("declaration-type-class.galgas", 758))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 758)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_string & outArgument_outImplementation,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 775)) ;
  const GALGAS_classTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_30901 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 776)) ;
  const GALGAS_classTypeForGeneration temp_2 = this ;
  const GALGAS_classTypeForGeneration temp_3 = this ;
  const GALGAS_classTypeForGeneration temp_4 = this ;
  GALGAS_typedPropertyList var_at_30963 = temp_2.readProperty_mAllTypedAttributeList ().getter_subListWithRange (GALGAS_range::init_21__21_ (GALGAS_uint (uint32_t (0U)), temp_3.readProperty_mAllTypedAttributeList ().getter_count (SOURCE_FILE ("declaration-type-class.galgas", 778)).substract_operation (temp_4.readProperty_mCurrentTypedAttributeList ().getter_count (SOURCE_FILE ("declaration-type-class.galgas", 778)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 778)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 777)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_classTypeForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_classTypeForGeneration temp_7 = this ;
      const GALGAS_classTypeForGeneration temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = temp_8.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas", 784)).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_10) {
        const GALGAS_classTypeForGeneration temp_11 = this ;
        temp_9 = extensionGetter_identifierRepresentation (temp_11.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 784)) ;
      }
      const GALGAS_classTypeForGeneration temp_12 = this ;
      const GALGAS_classTypeForGeneration temp_13 = this ;
      const GALGAS_classTypeForGeneration temp_14 = this ;
      const GALGAS_classTypeForGeneration temp_15 = this ;
      const GALGAS_classTypeForGeneration temp_16 = this ;
      const GALGAS_classTypeForGeneration temp_17 = this ;
      const GALGAS_classTypeForGeneration temp_18 = this ;
      const GALGAS_classTypeForGeneration temp_19 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_classGenerationTemplate_referenceClassTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_30901.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_7.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 783)), temp_9, temp_12.readProperty_mCurrentTypedAttributeList (), temp_13.readProperty_mAllTypedAttributeList (), var_at_30963, temp_14.readProperty_mIsAbstract (), temp_15.readProperty_initializerNeedsCompilerVariable (), temp_16.readProperty_propertyInitializationCode (), var_selfTypeDefinition_30901.readProperty_features ().getter_contains (GALGAS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-class.galgas", 791)) COMMA_SOURCE_FILE ("declaration-type-class.galgas", 791)), temp_17.readProperty_synthetizedInitializerArgumentList (), temp_18.readProperty_inheritedSynthetizedInitializerArgumentList (), var_selfTypeDefinition_30901.readProperty_initializerMap (), temp_19.readProperty_clonable () COMMA_SOURCE_FILE ("declaration-type-class.galgas", 781))) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_classTypeForGeneration temp_20 = this ;
    const GALGAS_classTypeForGeneration temp_21 = this ;
    GALGAS_string temp_22 ;
    const enumGalgasBool test_23 = temp_21.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-class.galgas", 801)).boolEnum () ;
    if (kBoolTrue == test_23) {
      temp_22 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_23) {
      const GALGAS_classTypeForGeneration temp_24 = this ;
      temp_22 = extensionGetter_identifierRepresentation (temp_24.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 801)) ;
    }
    const GALGAS_classTypeForGeneration temp_25 = this ;
    const GALGAS_classTypeForGeneration temp_26 = this ;
    const GALGAS_classTypeForGeneration temp_27 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_classGenerationTemplate_valueClassTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_30901.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_20.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 800)), temp_22, temp_25.readProperty_mCurrentTypedAttributeList (), temp_26.readProperty_mAllTypedAttributeList (), var_at_30963, temp_27.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("declaration-type-class.galgas", 798))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_generateClassGetterDeclaration (const GALGAS_lstring & constinArgument_inGetterName,
                                                       const GALGAS_functionSignature & constinArgument_inArgumentTypeList,
                                                       const GALGAS_bool & constinArgument_inHasCompilerArgument,
                                                       const GALGAS_unifiedTypeMapEntry & constinArgument_inReturnedType,
                                                       const GALGAS_methodQualifier & constinArgument_inQualifier,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  GALGAS_bool var_generateMethodDeclaration_33002 = GALGAS_bool (true) ;
  GALGAS_string var_suffix_33041 = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GALGAS_methodQualifier::Enumeration::invalid:
    break ;
  case GALGAS_methodQualifier::Enumeration::enum_isVirtualAbstract:
    {
      var_suffix_33041 = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::Enumeration::enum_isVirtual:
    break ;
  case GALGAS_methodQualifier::Enumeration::enum_isBasic:
  case GALGAS_methodQualifier::Enumeration::enum_isBasicFinal:
    {
      var_generateMethodDeclaration_33002 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::Enumeration::enum_isInherited:
    {
      var_generateMethodDeclaration_33002 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::Enumeration::enum_isVirtualOverriding:
    {
      var_suffix_33041 = GALGAS_string (" override") ;
    }
    break ;
  case GALGAS_methodQualifier::Enumeration::enum_isVirtualOverridingAbstract:
    {
      var_suffix_33041 = GALGAS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_33002.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("//--- Extension getter ").add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 840)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 840)) ;
      result_result.plusAssign_operation(GALGAS_string ("  public: virtual class GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inReturnedType, inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 841)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 841)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 841)) ;
      result_result.plusAssign_operation(GALGAS_string (" getter_").add_operation (constinArgument_inGetterName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-class.galgas", 842)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 842)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 842)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 842)) ;
      GALGAS_bool var_first_33689 = GALGAS_bool (true) ;
      cEnumerator_functionSignature enumerator_33728 (constinArgument_inArgumentTypeList, EnumerationOrder::up) ;
      while (enumerator_33728.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_first_33689.boolEnum () ;
          if (kBoolTrue == test_1) {
            var_first_33689 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 849)) ;
        }
        result_result.plusAssign_operation(GALGAS_string ("const class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_33728.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 851)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 851)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 851)) ;
        result_result.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_33728.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 852)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 852)) ;
        enumerator_33728.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_first_33689.operator_not (SOURCE_FILE ("declaration-type-class.galgas", 855)).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 856)) ;
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("Compiler *"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 858)) ;
          var_first_33689 = GALGAS_bool (false) ;
        }
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = var_first_33689.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("LOCATION_ARGS") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssign_operation(temp_4.add_operation (GALGAS_string (") const"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 861)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 861)) ;
      result_result.plusAssign_operation(var_suffix_33041.add_operation (GALGAS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 862)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 862)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateClassGetterDeclaration [6] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_functionSignature,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_unifiedTypeMapEntry,
  & kTypeDescriptor_GALGAS_methodQualifier,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateClassGetterDeclaration (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateClassGetterDeclaration ("generateClassGetterDeclaration",
                                                                                functionWithGenericHeader_generateClassGetterDeclaration,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                5,
                                                                                functionArgs_generateClassGetterDeclaration) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassInstanceMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_generateClassInstanceMethodDeclaration (const GALGAS_lstring & constinArgument_inMethodName,
                                                               const GALGAS_formalParameterSignature & constinArgument_inArgumentTypeList,
                                                               const GALGAS_bool & constinArgument_inHasCompilerArgument,
                                                               const GALGAS_methodQualifier & constinArgument_inQualifier,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  GALGAS_bool var_generateMethodDeclaration_34747 = GALGAS_bool (true) ;
  GALGAS_string var_suffix_34786 = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GALGAS_methodQualifier::Enumeration::invalid:
    break ;
  case GALGAS_methodQualifier::Enumeration::enum_isVirtualAbstract:
    {
      var_suffix_34786 = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::Enumeration::enum_isVirtual:
    break ;
  case GALGAS_methodQualifier::Enumeration::enum_isBasic:
  case GALGAS_methodQualifier::Enumeration::enum_isBasicFinal:
    {
      var_generateMethodDeclaration_34747 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::Enumeration::enum_isInherited:
    {
      var_generateMethodDeclaration_34747 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::Enumeration::enum_isVirtualOverriding:
    {
      var_suffix_34786 = GALGAS_string (" override") ;
    }
    break ;
  case GALGAS_methodQualifier::Enumeration::enum_isVirtualOverridingAbstract:
    {
      var_suffix_34786 = GALGAS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_34747.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("//--- Extension method ").add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 891)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 891)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 891)) ;
      result_result.plusAssign_operation(GALGAS_string ("  public: virtual void method_").add_operation (constinArgument_inMethodName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-class.galgas", 892)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 892)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 892)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 892)) ;
      GALGAS_bool var_first_35365 = GALGAS_bool (true) ;
      cEnumerator_formalParameterSignature enumerator_35404 (constinArgument_inArgumentTypeList, EnumerationOrder::up) ;
      while (enumerator_35404.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_first_35365.boolEnum () ;
          if (kBoolTrue == test_1) {
            var_first_35365 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 899)) ;
        }
        switch (enumerator_35404.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GALGAS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          {
            result_result.plusAssign_operation(GALGAS_string ("const class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_35404.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 903)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 903)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 903)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_35404.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 905)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 905)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 905)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 905)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_35404.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 907)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 907)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 907)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 907)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_35404.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 909)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 909)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 909)) ;
          }
          break ;
        }
        result_result.plusAssign_operation(GALGAS_string (" arg_").add_operation (enumerator_35404.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 911)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 911)) ;
        enumerator_35404.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_first_35365.operator_not (SOURCE_FILE ("declaration-type-class.galgas", 914)).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 915)) ;
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("Compiler *"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 917)) ;
          var_first_35365 = GALGAS_bool (false) ;
        }
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = var_first_35365.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("LOCATION_ARGS") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssign_operation(temp_4.add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 920)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 920)) ;
      result_result.plusAssign_operation(var_suffix_34786.add_operation (GALGAS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 921)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 921)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateClassInstanceMethodDeclaration [5] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_formalParameterSignature,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_methodQualifier,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateClassInstanceMethodDeclaration (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateClassInstanceMethodDeclaration ("generateClassInstanceMethodDeclaration",
                                                                                        functionWithGenericHeader_generateClassInstanceMethodDeclaration,
                                                                                        & kTypeDescriptor_GALGAS_string,
                                                                                        4,
                                                                                        functionArgs_generateClassInstanceMethodDeclaration) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'classGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- File '/galgas-predefined-types.ggs'

const char * gWrapperFileContent_0_classGenerationTemplate = 
  "\n"
  "extern proc %usefull println (let @string inString)\n"
  "\n"
  "extern proc %usefull print (let @string inString)\n"
  "\n"
  "list @2lstringlist %usefull {\n"
  "  public var @lstring mValue0\n"
  "  public var @lstring mValue1\n"
  "}\n"
   ;

const cRegularFileWrapper gWrapperFile_0_classGenerationTemplate (
  "galgas-predefined-types.ggs",
  "ggs",
  true, // Text file
 197, // Text length
  gWrapperFileContent_0_classGenerationTemplate
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_classGenerationTemplate_0 [2] = {
  & gWrapperFile_0_classGenerationTemplate,
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_classGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_classGenerationTemplate (
  "",
  1,
  gWrapperAllFiles_classGenerationTemplate_0,
  0,
  gWrapperAllDirectories_classGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate valueClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_31_ (Compiler * inCompiler,
                                                                                    const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                    const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                    const GALGAS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                    const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("  value class\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public ") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_value_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Embedded object pointer\n  public: inline const class cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr (void) const {\n    return (const cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) mObjectPtr ;\n  }\n\n//--------------------------------- Constructor from pointer\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSourcePtr) ;\n\n//--------------------------------- Property read access\n") ;
  GALGAS_uint index_1008_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1008 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1008.hasCurrentObject ()) {
      result.appendString ("  public: class GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1008.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" readProperty_") ;
      result.appendString (enumerator_1008.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" (void) const ;\n\n") ;
      index_1008_.increment () ;
      enumerator_1008.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate valueClassTypeHeader2part1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_32_part_31_ (Compiler * inCompiler,
                                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                                            const GALGAS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                            const GALGAS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                            const GALGAS_getterMap & in_GETTER_5F_MAP,
                                                                                            const GALGAS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 2: pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public ") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("acPtr_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" {\n\n") ;
  GALGAS_uint index_511_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_511 (in_GETTER_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_511.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_511.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString (function_generateClassGetterDeclaration (enumerator_511.current_lkey (HERE), enumerator_511.current_mArgumentTypeList (HERE), enumerator_511.current_mHasCompilerArgument (HERE), enumerator_511.current_mReturnedType (HERE), enumerator_511.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 12)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_511_.increment () ;
      enumerator_511.gotoNextObject () ;
    }
  }
  GALGAS_uint index_753_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_instanceMethodMap enumerator_753 (in_INSTANCE_5F_METHOD_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_753.hasCurrentObject ()) {
      result.appendString (function_generateClassInstanceMethodDeclaration (enumerator_753.current_lkey (HERE), enumerator_753.current_mParameterList (HERE), enumerator_753.current_mHasCompilerArgument (HERE), enumerator_753.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 16)).stringValue ()) ;
      index_753_.increment () ;
      enumerator_753.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate valueClassTypeHeader2part2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_32_part_32_ (Compiler * inCompiler,
                                                                                            const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_string & /* in_SUPER_5F_TYPE_5F_IDENTIFIER */,
                                                                                            const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                            const GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                            const GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--- Properties\n") ;
  GALGAS_uint index_111_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_111 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_111.hasCurrentObject ()) {
      result.appendString ("  public: GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_111.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.appendString (" mProperty_") ;
      result.appendString (enumerator_111.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_111_.increment () ;
      enumerator_111.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--- Constructor\n  public: cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_401_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_401 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_401.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_401.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_401.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 10)).stringValue ()) ;
      if (enumerator_401.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_401_.increment () ;
      enumerator_401.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 13)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("LOCATION_ARGS") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") ;\n\n") ;
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 20)).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("//--- Duplication\n  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("//--- Attribute accessors\n") ;
  GALGAS_uint index_898_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_898 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_898.hasCurrentObject ()) {
      result.appendString ("  public: VIRTUAL_IN_DEBUG GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_898.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 28)).stringValue ()) ;
      result.appendString (" getter_") ;
      result.appendString (enumerator_898.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 28)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n") ;
      const enumGalgasBool test_2 = enumerator_898.current_hasSetter (HERE).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString ("  public: VIRTUAL_IN_DEBUG void setter_set") ;
        result.appendString (enumerator_898.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).stringValue ()) ;
        result.appendString (" (GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_898.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).stringValue ()) ;
        result.appendString (" inValue COMMA_LOCATION_ARGS) ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_898_.increment () ;
      enumerator_898.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_3 = in_IS_5F_ABSTRACT.boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("//--- Description\n  public: virtual void description (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("String & ioString,\n                           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const int32_t inIndentation) const override = 0 ;\n\n  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;\n\n  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("//--- Description\n  public: virtual void description (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("String & ioString,\n                           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const int32_t inIndentation) const override ;\n\n  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;\n\n  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("\n} ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate valueClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_valueClassTypeSpecificImplementation (Compiler * inCompiler,
                                                                                                const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                                const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                                const GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                                const GALGAS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                                const GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   Object comparison                                                                           \n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).operator_and (GALGAS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("ComparisonResult cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {\n  return ComparisonResult::operandEqual ;\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).operator_and (GALGAS_bool (ComparisonKind::greaterThan, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("ComparisonResult cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {\n  ComparisonResult result = ComparisonResult::operandEqual ;\n  const cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * p = (const cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" *) inOperandPtr ;\n  macroValidSharedObject (p, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (") ;\n") ;
    GALGAS_uint index_1088_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1088 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_1088.hasCurrentObject ()) {
        result.appendString ("  if (ComparisonResult::operandEqual == result) {\n    result = mProperty_") ;
        result.appendString (enumerator_1088.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 21)).stringValue ()) ;
        result.appendString (".objectCompare (p->mProperty_") ;
        result.appendString (enumerator_1088.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 21)).stringValue ()) ;
        result.appendString (") ;\n  }\n") ;
        index_1088_.increment () ;
        enumerator_1088.gotoNextObject () ;
      }
    }
    result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n\nComparisonResult GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;\n    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;\n    if (mySlot < operandSlot) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (mySlot > operandSlot) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_value_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSourcePtr) :\n") ;
  const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_value_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" (inSourcePtr) {\n  macroNullOrValidSharedObject (inSourcePtr, cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n}\n") ;
  const enumGalgasBool test_4 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 65)).operator_and (GALGAS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 65)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 65)).boolEnum () ;
  switch (test_4) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::class_func_new (LOCATION_ARGS) {\n  GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  macroMyNew (result.mObjectPtr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (THERE)) ;\n  return result ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_5 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 74)).operator_and (GALGAS_bool (ComparisonKind::greaterThan, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 74)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 74)).boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::class_func_new (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_3568_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_3568 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_3568.hasCurrentObject ()) {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_3568.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (" & inAttribute_") ;
        result.appendString (enumerator_3568.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 78)).stringValue ()) ;
        if (enumerator_3568.hasNextObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_3568_.increment () ;
        enumerator_3568.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 81)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_6) {
    case kBoolTrue : {
      result.appendString ("LOCATION_ARGS") ;
      } break ;
    case kBoolFalse : {
      result.appendString ("\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS") ;
      } break ;
    default :
      break ;
    }
    result.appendString (") {\n  GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  if (") ;
    GALGAS_uint index_3973_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_3973 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_3973.hasCurrentObject ()) {
        result.appendString ("inAttribute_") ;
        result.appendString (enumerator_3973.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 90)).stringValue ()) ;
        result.appendString (".isValid ()") ;
        if (enumerator_3973.hasNextObject ()) {
          result.appendString (" && ") ;
        }
        index_3973_.increment () ;
        enumerator_3973.gotoNextObject () ;
      }
    }
    result.appendString (") {\n    macroMyNew (result.mObjectPtr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    GALGAS_uint index_4239_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4239 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_4239.hasCurrentObject ()) {
        result.appendString ("inAttribute_") ;
        result.appendString (enumerator_4239.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 96)).stringValue ()) ;
        if (enumerator_4239.hasNextObject ()) {
          result.appendString (", ") ;
        }
        index_4239_.increment () ;
        enumerator_4239.gotoNextObject () ;
      }
    }
    result.appendString (" COMMA_THERE)) ;\n  }\n  return result ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_4489_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4489 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4489.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4489.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 107)).stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::readProperty_") ;
      result.appendString (enumerator_4489.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 107)).stringValue ()) ;
      result.appendString (" (void) const {\n  if (nullptr == mObjectPtr) {\n    return GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4489.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 109)).stringValue ()) ;
      result.appendString (" () ;\n  }else{\n    const cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    return p->mProperty_") ;
      result.appendString (enumerator_4489.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (" ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4489.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 117)).stringValue ()) ;
      result.appendString (" cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_4489.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 117)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return mProperty_") ;
      result.appendString (enumerator_4489.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 118)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_4489_.increment () ;
      enumerator_4489.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5599_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5599 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5599.hasCurrentObject ()) {
      const enumGalgasBool test_7 = enumerator_5599.current_hasSetter (HERE).boolEnum () ;
      switch (test_7) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setter_set") ;
        result.appendString (enumerator_5599.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 125)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 125)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_5599.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 125)).stringValue ()) ;
        result.appendString (" inValue\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) {\n  if (nullptr != mObjectPtr) {\n    insulate (THERE) ;\n    cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" * p = (cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (") ;\n    p->mProperty_") ;
        result.appendString (enumerator_5599.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 131)).stringValue ()) ;
        result.appendString (" = inValue ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setter_set") ;
        result.appendString (enumerator_5599.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 135)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 135)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_5599.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 135)).stringValue ()) ;
        result.appendString (" inValue\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  mProperty_") ;
        result.appendString (enumerator_5599.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 137)).stringValue ()) ;
        result.appendString (" = inValue ;\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_5599_.increment () ;
      enumerator_5599.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 143)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 143)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\ncPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7175_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7175 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7175.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7175.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 148)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_7175.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 148)).stringValue ()) ;
      if (enumerator_7175.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7175_.increment () ;
      enumerator_7175.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_8 = GALGAS_bool (ComparisonKind::greaterThan, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 151)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_8) {
  case kBoolTrue : {
    result.appendString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("LOCATION_ARGS") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") :\n") ;
  const enumGalgasBool test_9 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_9) {
  case kBoolTrue : {
    result.appendString ("acPtr_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" (") ;
  GALGAS_uint index_7618_ (0) ;
  if (in_INHERITED_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7618 (in_INHERITED_5F_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7618.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_7618.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 159)).stringValue ()) ;
      if (enumerator_7618.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_7618_.increment () ;
      enumerator_7618.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_10 = GALGAS_bool (ComparisonKind::greaterThan, in_INHERITED_5F_ATTRIBUTE_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 162)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_10) {
  case kBoolTrue : {
    result.appendString (" COMMA_THERE") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("THERE") ;
    } break ;
  default :
    break ;
  }
  result.appendString (")") ;
  GALGAS_uint index_7882_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7882 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7882.hasCurrentObject ()) {
      result.appendString (",\nmProperty_") ;
      result.appendString (enumerator_7882.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 169)).stringValue ()) ;
      result.appendString (" (in_") ;
      result.appendString (enumerator_7882.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 169)).stringValue ()) ;
      result.appendString (")") ;
      index_7882_.increment () ;
      enumerator_7882.gotoNextObject () ;
    }
  }
  result.appendString (" {\n}\n\n") ;
  const enumGalgasBool test_11 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 175)).boolEnum () ;
  switch (test_11) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nconst C_galgas_type_descriptor * cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::classDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" ;\n}\n\n") ;
    const enumGalgasBool test_12 = GALGAS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 180)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_12) {
    case kBoolTrue : {
      result.appendString ("void cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::description (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("String & ioString,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"[@") ;
      result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("]\") ;\n}\n\n") ;
      } break ;
    case kBoolFalse : {
      result.appendString ("void cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::description (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("String & ioString,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"[@") ;
      result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (":\") ;\n") ;
      GALGAS_uint index_8878_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8878 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_8878.hasCurrentObject ()) {
          result.appendString ("  mProperty_") ;
          result.appendString (enumerator_8878.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 190)).stringValue ()) ;
          result.appendString (".description (ioString, inIndentation+1) ;\n") ;
          if (enumerator_8878.hasNextObject ()) {
            result.appendString ("  ioString.appendCString (\", \") ;\n") ;
          }
          index_8878_.increment () ;
          enumerator_8878.gotoNextObject () ;
        }
      }
      result.appendString ("  ioString.appendCString (\"]\") ;\n}\n\n") ;
      } break ;
    default :
      break ;
    }
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_13 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 198)).boolEnum () ;
  switch (test_13) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nacPtr_class * cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::duplicate (LOCATION_ARGS) const {\n  acPtr_class * ptr = nullptr ;\n  macroMyNew (ptr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    GALGAS_uint index_9475_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_9475 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      const bool nonEmpty_enumerator_9475 = enumerator_9475.hasCurrentObject () ;
      while (enumerator_9475.hasCurrentObject ()) {
        result.appendString ("mProperty_") ;
        result.appendString (enumerator_9475.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 205)).stringValue ()) ;
        if (enumerator_9475.hasNextObject ()) {
          result.appendString (", ") ;
        }
        index_9475_.increment () ;
        enumerator_9475.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_9475) {
        result.appendString (" COMMA_") ;
      }
    }
    result.appendString ("THERE)) ;\n  return ptr ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_31_ (Compiler * inCompiler,
                                                                                        const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                        const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                        const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                        const GALGAS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                        const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString (" reference class\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public ") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_reference_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Constructor from pointer\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSourcePtr) ;\n\n//--------------------------------- Property access\n") ;
  GALGAS_uint index_808_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_808 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_808.hasCurrentObject ()) {
      result.appendString ("  public: class GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_808.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 21)).stringValue ()) ;
      result.appendString (" readProperty_") ;
      result.appendString (enumerator_808.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 21)).stringValue ()) ;
      result.appendString (" (void) const ;\n") ;
      const enumGalgasBool test_1 = enumerator_808.current_hasSetter (HERE).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("  public: void setProperty_") ;
        result.appendString (enumerator_808.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 23)).stringValue ()) ;
        result.appendString (" (const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_808.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 23)).stringValue ()) ;
        result.appendString (" & inValue) ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("\n") ;
      index_808_.increment () ;
      enumerator_808.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeHeader2part1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_31_ (Compiler * inCompiler,
                                                                                                const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                                const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                                                const GALGAS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                                const GALGAS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                                const GALGAS_getterMap & in_GETTER_5F_MAP,
                                                                                                const GALGAS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                                                const GALGAS_initializerMap & in_INITIALIZER_5F_MAP
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 2: pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public ") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("acStrongPtr_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" {\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: virtual void printNonNullClassInstanceProperties (void) const override ;\n  #endif\n\n//--------------------------------- Initializers\n") ;
  GALGAS_uint index_639_ (0) ;
  if (in_INITIALIZER_5F_MAP.isValid ()) {
    cEnumerator_initializerMap enumerator_639 (in_INITIALIZER_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_639.hasCurrentObject ()) {
      result.appendString ("  public: void ") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_639.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 15)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_820_IDX (0) ;
      if (enumerator_639.current_mArgumentTypeList (HERE).isValid ()) {
        cEnumerator_functionSignature enumerator_820 (enumerator_639.current_mArgumentTypeList (HERE), EnumerationOrder::up) ;
        while (enumerator_820.hasCurrentObject ()) {
          const enumGalgasBool test_1 = enumerator_820.current_isConstant (HERE).boolEnum () ;
          switch (test_1) {
          case kBoolTrue : {
            result.appendString ("const ") ;
            } break ;
          case kBoolFalse : {
            } break ;
          default :
            break ;
          }
          result.appendString ("class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_820.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 18)).stringValue ()) ;
          result.appendString (" & inOperand") ;
          result.appendString (index_820_IDX.getter_string (SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 18)).stringValue ()) ;
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          index_820_IDX.increment () ;
          enumerator_820.gotoNextObject () ;
        }
      }
      result.appendString ("Compiler * inCompiler) ;\n") ;
      index_639_.increment () ;
      enumerator_639.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n") ;
  GALGAS_uint index_1127_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_1127 (in_GETTER_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_1127.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_1127.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString (function_generateClassGetterDeclaration (enumerator_1127.current_lkey (HERE), enumerator_1127.current_mArgumentTypeList (HERE), enumerator_1127.current_mHasCompilerArgument (HERE), enumerator_1127.current_mReturnedType (HERE), enumerator_1127.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 26)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_1127_.increment () ;
      enumerator_1127.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1369_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_instanceMethodMap enumerator_1369 (in_INSTANCE_5F_METHOD_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_1369.hasCurrentObject ()) {
      result.appendString (function_generateClassInstanceMethodDeclaration (enumerator_1369.current_lkey (HERE), enumerator_1369.current_mParameterList (HERE), enumerator_1369.current_mHasCompilerArgument (HERE), enumerator_1369.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 30)).stringValue ()) ;
      index_1369_.increment () ;
      enumerator_1369.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeHeader2part2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_32_ (Compiler * inCompiler,
                                                                                                const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                                const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                const GALGAS_string & /* in_SUPER_5F_TYPE_5F_IDENTIFIER */,
                                                                                                const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                                const GALGAS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                                const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                                const GALGAS_typedPropertyList & in_INITIALIZER_5F_ARGUMENT_5F_LIST
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--- Properties\n") ;
  GALGAS_uint index_111_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_111 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_111.hasCurrentObject ()) {
      result.appendString ("  public: GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_111.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.appendString (" mProperty_") ;
      result.appendString (enumerator_111.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_111_.increment () ;
      enumerator_111.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n//--- Default constructor\n  public: cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCompiler COMMA_LOCATION_ARGS) ;\n\n//--- Constructor\n  public: cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_517_ (0) ;
  if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_517 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_517.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_517.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_517.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 14)).stringValue ()) ;
      if (enumerator_517.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_517_.increment () ;
      enumerator_517.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, in_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 17)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("LOCATION_ARGS") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") ;\n\n") ;
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 24)).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("//--- Duplication\n  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("//--- Attribute accessors\n") ;
  const enumGalgasBool test_2 = in_IS_5F_ABSTRACT.boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("//--- Description\n  public: virtual void description (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("String & ioString,\n                           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const int32_t inIndentation) const override = 0 ;\n\n//--- Class descriptor\n  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("//--- Description\n  public: virtual void description (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("String & ioString,\n                           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const int32_t inIndentation) const override ;\n\n//--- Class descriptor\n  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("\n} ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeSpecificImplementation (Compiler * inCompiler,
                                                                                                    const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                    const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                    const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                                    const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                                    const GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                                    const GALGAS_typedPropertyList & /* in_INHERITED_5F_ATTRIBUTE_5F_LIST */,
                                                                                                    const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                                    const GALGAS_bool & in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR,
                                                                                                    const GALGAS_string & in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE,
                                                                                                    const GALGAS_bool & in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER,
                                                                                                    const GALGAS_typedPropertyList & in_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                                    const GALGAS_typedPropertyList & in_INHERITED_5F_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                                    const GALGAS_initializerMap & /* in_INITIALIZER_5F_MAP */,
                                                                                                    const GALGAS_bool & in_CLONABLE
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GALGAS_string (" @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString (" reference class\n//--------------------------------------------------------------------------------------------------\n\ncPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  const enumGalgasBool test_0 = in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("Compiler * inCompiler") ;
    } break ;
  case kBoolFalse : {
    const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::notEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
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
    } break ;
  default :
    break ;
  }
  result.appendString (" COMMA_LOCATION_ARGS) :\n") ;
  const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("acStrongPtr_class (THERE)") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (inCompiler COMMA_THERE)") ;
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_708_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_708 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_708.hasCurrentObject ()) {
      result.appendString (",\nmProperty_") ;
      result.appendString (enumerator_708.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 19)).stringValue ()) ;
      result.appendString (" ()") ;
      index_708_.increment () ;
      enumerator_708.gotoNextObject () ;
    }
  }
  result.appendString (" {\n") ;
  result.appendString (in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE.stringValue ()) ;
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifndef DO_NOT_GENERATE_CHECKINGS\n  void cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::printNonNullClassInstanceProperties (void) const {\n  ") ;
  const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("  acStrongPtr_class::printNonNullClassInstanceProperties () ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("  cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::printNonNullClassInstanceProperties () ;\n") ;
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_1295_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1295 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1295.hasCurrentObject ()) {
      result.appendString ("    mProperty_") ;
      result.appendString (enumerator_1295.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 34)).stringValue ()) ;
      result.appendString (".printNonNullClassInstanceProperties (\"") ;
      result.appendString (enumerator_1295.current_name (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") ;\n") ;
      index_1295_.increment () ;
      enumerator_1295.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    const size_t myObjectPtr = size_t (mObjectPtr) ;\n    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;\n    if (myObjectPtr < operandObjectPtr) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (myObjectPtr > operandObjectPtr) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_4) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_reference_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" () {\n}\n\n") ;
  const enumGalgasBool test_5 = in_CLONABLE.boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::init_21_cloned (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inObject,\n           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  if (inObject.isValid ()) {\n    macroMyNew (result.mObjectPtr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (inCompiler COMMA_HERE)) ;\n") ;
    GALGAS_uint index_2991_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_2991 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_2991.hasCurrentObject ()) {
        result.appendString ("    ((cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) result.mObjectPtr)->mProperty_") ;
        result.appendString (enumerator_2991.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (" = ((cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) inObject.mObjectPtr)->mProperty_") ;
        result.appendString (enumerator_2991.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (" ;\n") ;
        index_2991_.increment () ;
        enumerator_2991.gotoNextObject () ;
      }
    }
    result.appendString ("  }\n  return result ;\n}\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_6 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 85)).operator_and (in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 85)).boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    result.appendString ("//--- Synthetized initializer ----------------------------------------------------------------------\n\nGALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::\n") ;
    result.appendString (extensionGetter_initializerSignature (in_INITIALIZER_5F_ARGUMENT_5F_LIST, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 89)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 89)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_3594_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_3594 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_3594.hasCurrentObject ()) {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_3594.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 91)).stringValue ()) ;
        result.appendString (" & in_") ;
        result.appendString (enumerator_3594.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 91)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_3594_.increment () ;
        enumerator_3594.gotoNextObject () ;
      }
    }
    result.appendString ("Compiler * inCompiler\n          ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * object = nullptr ;\n  macroMyNew (object, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (inCompiler COMMA_THERE)) ;\n  object->") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_") ;
    result.appendString (extensionGetter_initializerSignature (in_INITIALIZER_5F_ARGUMENT_5F_LIST, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 97)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 97)).stringValue ()) ;
    result.appendString (" (") ;
    GALGAS_uint index_4056_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4056 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_4056.hasCurrentObject ()) {
        result.appendString ("in_") ;
        result.appendString (enumerator_4056.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 99)).stringValue ()) ;
        result.appendString (", ") ;
        index_4056_.increment () ;
        enumerator_4056.gotoNextObject () ;
      }
    }
    result.appendString ("inCompiler) ;\n  const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result (object) ;\n  macroDetachSharedObject (object) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::\n") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_") ;
    result.appendString (extensionGetter_initializerSignature (in_INITIALIZER_5F_ARGUMENT_5F_LIST, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 110)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 110)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4528_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4528 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_4528.hasCurrentObject ()) {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_4528.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 112)).stringValue ()) ;
        result.appendString (" & in_") ;
        result.appendString (enumerator_4528.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 112)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_4528_.increment () ;
        enumerator_4528.gotoNextObject () ;
      }
    }
    result.appendString ("Compiler * /* inCompiler */) {\n") ;
    GALGAS_uint index_4732_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4732 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_4732.hasCurrentObject ()) {
        result.appendString ("  mProperty_") ;
        result.appendString (enumerator_4732.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 117)).stringValue ()) ;
        result.appendString (" = in_") ;
        result.appendString (enumerator_4732.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 117)).stringValue ()) ;
        result.appendString (" ;\n") ;
        index_4732_.increment () ;
        enumerator_4732.gotoNextObject () ;
      }
    }
    result.appendString ("}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSourcePtr) :\n") ;
  const enumGalgasBool test_7 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_7) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_reference_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" (inSourcePtr) {\n  macroNullOrValidSharedObject (inSourcePtr, cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n}\n") ;
  const enumGalgasBool test_8 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 132)).operator_and (GALGAS_bool (ComparisonKind::equal, in_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 132)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 132)).boolEnum () ;
  switch (test_8) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::class_func_new (LOCATION_ARGS) {\n  GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  macroMyNew (result.mObjectPtr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (THERE)) ;\n  return result ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_9 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 141)).operator_and (GALGAS_bool (ComparisonKind::greaterThan, in_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 141)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 141)).boolEnum () ;
  switch (test_9) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::class_func_new (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_6036_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_6036 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_6036.hasCurrentObject ()) {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_6036.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 145)).stringValue ()) ;
        result.appendString (" & in_") ;
        result.appendString (enumerator_6036.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 145)).stringValue ()) ;
        if (enumerator_6036.hasNextObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_6036_.increment () ;
        enumerator_6036.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_10 = GALGAS_bool (ComparisonKind::equal, in_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 148)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_10) {
    case kBoolTrue : {
      result.appendString ("LOCATION_ARGS") ;
      } break ;
    case kBoolFalse : {
      result.appendString ("\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS") ;
      } break ;
    default :
      break ;
    }
    result.appendString (") {\n  GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  macroMyNew (result.mObjectPtr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    GALGAS_uint index_6500_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_6500 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_6500.hasCurrentObject ()) {
        result.appendString ("in_") ;
        result.appendString (enumerator_6500.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 157)).stringValue ()) ;
        if (enumerator_6500.hasNextObject ()) {
          result.appendString (", ") ;
        }
        index_6500_.increment () ;
        enumerator_6500.gotoNextObject () ;
      }
    }
    result.appendString (" COMMA_THERE)) ;\n  return result ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_6721_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6721 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6721.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6721.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 167)).stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::readProperty_") ;
      result.appendString (enumerator_6721.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 167)).stringValue ()) ;
      result.appendString (" (void) const {\n  if (nullptr == mObjectPtr) {\n    return GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6721.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 169)).stringValue ()) ;
      result.appendString (" () ;\n  }else{\n    cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    return p->mProperty_") ;
      result.appendString (enumerator_6721.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 173)).stringValue ()) ;
      result.appendString (" ;\n  }\n}\n\n") ;
      const enumGalgasBool test_11 = enumerator_6721.current_hasSetter (HERE).boolEnum () ;
      switch (test_11) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setProperty_") ;
        result.appendString (enumerator_6721.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 178)).stringValue ()) ;
        result.appendString (" (const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_6721.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 178)).stringValue ()) ;
        result.appendString (" & inValue) {\n  if (nullptr != mObjectPtr) {\n    cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" * p = (cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (") ;\n    p->mProperty_") ;
        result.appendString (enumerator_6721.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 182)).stringValue ()) ;
        result.appendString (" = inValue ;\n  }\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_6721_.increment () ;
      enumerator_6721.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 189)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 189)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\ncPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8393_ (0) ;
  if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8393 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8393.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_8393.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 194)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_8393.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 194)).stringValue ()) ;
      if (enumerator_8393.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_8393_.increment () ;
      enumerator_8393.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_12 = GALGAS_bool (ComparisonKind::greaterThan, in_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 197)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_12) {
  case kBoolTrue : {
    result.appendString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("LOCATION_ARGS") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") :\n") ;
  const enumGalgasBool test_13 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_13) {
  case kBoolTrue : {
    result.appendString ("acStrongPtr_class") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" (") ;
  GALGAS_uint index_8874_ (0) ;
  if (in_INHERITED_5F_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8874 (in_INHERITED_5F_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8874.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_8874.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 205)).stringValue ()) ;
      if (enumerator_8874.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_8874_.increment () ;
      enumerator_8874.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_14 = GALGAS_bool (ComparisonKind::greaterThan, in_INHERITED_5F_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 208)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_14) {
  case kBoolTrue : {
    result.appendString (" COMMA_THERE") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("THERE") ;
    } break ;
  default :
    break ;
  }
  result.appendString (")") ;
  GALGAS_uint index_9145_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9145 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9145.hasCurrentObject ()) {
      result.appendString (",\nmProperty_") ;
      result.appendString (enumerator_9145.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 215)).stringValue ()) ;
      result.appendString (" ()") ;
      index_9145_.increment () ;
      enumerator_9145.gotoNextObject () ;
    }
  }
  result.appendString (" {\n") ;
  result.appendString (in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE.stringValue ()) ;
  GALGAS_uint index_9317_ (0) ;
  if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9317 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9317.hasCurrentObject ()) {
      result.appendString ("  mProperty_") ;
      result.appendString (enumerator_9317.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 220)).stringValue ()) ;
      result.appendString (" = in_") ;
      result.appendString (enumerator_9317.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 220)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_9317_.increment () ;
      enumerator_9317.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n") ;
  const enumGalgasBool test_15 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 225)).boolEnum () ;
  switch (test_15) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nconst C_galgas_type_descriptor * cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::classDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" ;\n}\n\n") ;
    const enumGalgasBool test_16 = GALGAS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 230)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_16) {
    case kBoolTrue : {
      result.appendString ("void cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::description (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("String & ioString,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"[@") ;
      result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("]\") ;\n}\n\n") ;
      } break ;
    case kBoolFalse : {
      result.appendString ("void cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::description (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("String & ioString,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"[@") ;
      result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (":\") ;\n") ;
      GALGAS_uint index_10314_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_10314 (in_ALL_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_10314.hasCurrentObject ()) {
          result.appendString ("  mProperty_") ;
          result.appendString (enumerator_10314.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 240)).stringValue ()) ;
          result.appendString (".description (ioString, inIndentation+1) ;\n") ;
          if (enumerator_10314.hasNextObject ()) {
            result.appendString ("  ioString.appendCString (\", \") ;\n") ;
          }
          index_10314_.increment () ;
          enumerator_10314.gotoNextObject () ;
        }
      }
      result.appendString ("  ioString.appendCString (\"]\") ;\n}\n\n") ;
      } break ;
    default :
      break ;
    }
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_17 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 248)).boolEnum () ;
  switch (test_17) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nacPtr_class * cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::duplicate (LOCATION_ARGS) const {\n  acPtr_class * ptr = nullptr ;\n  macroMyNew (ptr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    GALGAS_uint index_10919_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_10919 (in_INITIALIZER_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      const bool nonEmpty_enumerator_10919 = enumerator_10919.hasCurrentObject () ;
      while (enumerator_10919.hasCurrentObject ()) {
        result.appendString ("mProperty_") ;
        result.appendString (enumerator_10919.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 255)).stringValue ()) ;
        if (enumerator_10919.hasNextObject ()) {
          result.appendString (", ") ;
        }
        index_10919_.increment () ;
        enumerator_10919.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_10919) {
        result.appendString (" COMMA_") ;
      }
    }
    result.appendString ("THERE)) ;\n  return ptr ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate weakReferenceClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_weakReferenceClassTypeHeader_31_ (Compiler * inCompiler,
                                                                                            const GALGAS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" weak reference class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public ") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_weak_reference") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Constructor and assignment from strong reference\n  public: GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GALGAS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n  public: GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const class GALGAS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--------------------------------- Bang operator\n  public: GALGAS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" bang_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate weakReferenceClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_classGenerationTemplate_weakReferenceClassTypeSpecificImplementation (Compiler * /* inCompiler */,
                                                                                                        const GALGAS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                                        const GALGAS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                        const GALGAS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                        const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                                                        const GALGAS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                                        const GALGAS_typedPropertyList & /* in_INHERITED_5F_ATTRIBUTE_5F_LIST */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    cPtr_weakReference_proxy * myPtr = mProxyPtr ;\n    const size_t myObjectPtr = size_t (myPtr) ;\n    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;\n    const size_t operandObjectPtr = size_t (operandPtr) ;\n    if (myObjectPtr < operandObjectPtr) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (myObjectPtr > operandObjectPtr) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_weak_reference") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GALGAS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n  cPtr_weakReference_proxy * proxyPtr = nullptr ;\n  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;\n  if (p != nullptr) {\n    proxyPtr = p->getProxy () ;\n  }\n  macroAssignSharedObject (mProxyPtr, proxyPtr) ;\n  return *this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("AC_GALGAS_weak_reference") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("GALGAS_") ;
    result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  default :
    break ;
  }
  result.appendString (" (inSource) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_nil (LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::bang_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCompiler COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mProxyPtr != nullptr) {\n    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;\n    if (strongPtr == nullptr) {\n      inCompiler->onTheFlySemanticError (\"weak reference is nil\" COMMA_THERE) ;\n    }else{\n      macroValidSharedObject (strongPtr, cPtr_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n      result = GALGAS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ((cPtr_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) strongPtr) ;\n    }\n  }\n  return result ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@weakReferenceDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_weakReferenceDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("weak reference @").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 35)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                       GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                       GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_2690 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 49)), temp_1.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2690, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 50)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
    test_3 = GALGAS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
      const GALGAS_weakReferenceDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2690, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 54)), temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 52)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInSemanticContext (GALGAS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                                 const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_superClassIndex_4041 ;
  GALGAS_bool var_generateHeaderInSeparateFile_4069 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_4041 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas", 80)) ;
      const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_4069 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_weakReferenceDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperWeakReferenceTypeName (), var_superClassIndex_4041, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 83)) ;
    }
    const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
    GALGAS_unifiedTypeDefinition var_superTypeDefinition_4360 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_4.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 84)) ;
    var_generateHeaderInSeparateFile_4069 = var_superTypeDefinition_4360.readProperty_generateHeaderInSeparateFile () ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_superTypeDefinition_4360.readProperty_typeKind ().getter_isWeakReferenceType (SOURCE_FILE ("declaration-type-weak-reference.galgas", 87)).operator_not (SOURCE_FILE ("declaration-type-weak-reference.galgas", 87)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_weakReferenceDeclarationAST temp_6 = this ;
        const GALGAS_weakReferenceDeclarationAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_7.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 88)).add_operation (GALGAS_string (" should be a weak reference type"), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 88)), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 88)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_weakReferenceIndex_4857 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_9 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_9.readProperty_mWeakReferenceTypeName (), var_weakReferenceIndex_4857, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 92)) ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_4925 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_10 = this ;
  var_classFunctionMap_4925.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("nil"), temp_10.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_weakReferenceIndex_4857, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 98)) ;
  }
  GALGAS_getterMap var_getterMap_5124 = GALGAS_getterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_setterMap var_setterMap_5156 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5196 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GALGAS_initializerMap var_initializerMap_5241 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_11 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_11.readProperty_mWeakReferenceTypeName (), GALGAS_bool (false), var_initializerMap_5241, var_getterMap_5124, var_setterMap_5156, var_instanceMethodMap_5196, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 109)) ;
  }
  cEnumerator_getterMap enumerator_5672 (var_getterMap_5124, EnumerationOrder::up) ;
  while (enumerator_5672.hasCurrentObject ()) {
    TC_Array <FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (enumerator_5672.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 125)) ;
    enumerator_5672.gotoNextObject () ;
  }
  cEnumerator_setterMap enumerator_5773 (var_setterMap_5156, EnumerationOrder::up) ;
  while (enumerator_5773.hasCurrentObject ()) {
    TC_Array <FixItDescription> fixItArray13 ;
    inCompiler->emitSemanticError (enumerator_5773.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray13  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 128)) ;
    enumerator_5773.gotoNextObject () ;
  }
  cEnumerator_instanceMethodMap enumerator_5874 (var_instanceMethodMap_5196, EnumerationOrder::up) ;
  while (enumerator_5874.hasCurrentObject ()) {
    TC_Array <FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (enumerator_5874.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray14  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 131)) ;
    enumerator_5874.gotoNextObject () ;
  }
  GALGAS_typeFeatures var_features_5976 = GALGAS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-weak-reference.galgas", 133)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_15 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_15.readProperty_mWeakReferenceTypeName (), var_features_5976, GALGAS_bool (false), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 134)) ;
  }
  GALGAS_unifiedTypeMapEntry var_classIndex_6273 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_16 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_16.readProperty_mClassTypeName (), var_classIndex_6273, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 142)) ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_17 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_18 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_19 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_6291 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_17.readProperty_mWeakReferenceTypeName (), temp_18.readProperty_isPredefined (), GALGAS_bool (true), var_superClassIndex_4041, GALGAS_typeKindEnum::class_func_weakReferenceType (var_classIndex_6273  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 148)), GALGAS_bool (false), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_5241, var_classFunctionMap_4925, GALGAS_getterMap::init (inCompiler COMMA_HERE), GALGAS_setterMap::init (inCompiler COMMA_HERE), GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE), GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas", 159)), GALGAS_subscriptMap::init (inCompiler COMMA_HERE), GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_5976, GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), var_generateHeaderInSeparateFile_4069, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas", 166)), GALGAS_string ("weak-reference-").add_operation (temp_19.readProperty_mWeakReferenceTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 167)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-weak-reference.galgas", 168)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_6291.readProperty_typeName (), var_typeDefinition_6291, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 170)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  GALGAS_lstring var_weakRefTypeNameForUsefulness_8050 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 187)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_weakRefTypeNameForUsefulness_8050, var_weakRefTypeNameForUsefulness_8050, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 188)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_weakReferenceDeclarationAST temp_3 = this ;
      GALGAS_lstring var_superWeakRefNameForUsefulness_8303 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 190)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_weakRefTypeNameForUsefulness_8050, var_superWeakRefNameForUsefulness_8303 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 191)) ;
      }
    }
  }
  const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_8552 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 194)) ;
  const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
  GALGAS_unifiedTypeMapEntry temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (ComparisonKind::equal, temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas", 197)) ;
  }else if (kBoolFalse == test_7) {
    const GALGAS_weakReferenceDeclarationAST temp_8 = this ;
    temp_6 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_8.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 198)) ;
  }
  GALGAS_unifiedTypeMapEntry var_superClassEntry_8673 = temp_6 ;
  GALGAS_typedPropertyList var_allAttributeList_9049 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (ComparisonKind::equal, var_superClassEntry_8673.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas", 204)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_allAttributeList_9049 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_9) {
    var_allAttributeList_9049 = extensionGetter_definition (var_superClassEntry_8673, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 220)).readProperty_allTypedPropertyList () ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GALGAS_weakReferenceDeclarationAST temp_11 = this ;
      test_10 = temp_11.readProperty_mGenerateInSeparateFile ().boolEnum () ;
      if (kBoolTrue == test_10) {
        const GALGAS_weakReferenceDeclarationAST temp_12 = this ;
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray13  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 222)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_9962 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_propertyIndexMap var_attributeMap_10010 = GALGAS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_weakReferenceDeclarationAST temp_14 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10110 (temp_14.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_10110.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_t_10159 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_10110.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 229)) ;
    var_typedAttributeList_9962.addAssign_operation (var_t_10159, enumerator_10110.current_name (HERE), enumerator_10110.current_initialization (HERE), enumerator_10110.current_isConstant (HERE).operator_not (SOURCE_FILE ("declaration-type-weak-reference.galgas", 234)), enumerator_10110.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 230)) ;
    var_allAttributeList_9049.addAssign_operation (var_t_10159, enumerator_10110.current_name (HERE), enumerator_10110.current_initialization (HERE), enumerator_10110.current_isConstant (HERE).operator_not (SOURCE_FILE ("declaration-type-weak-reference.galgas", 240)), enumerator_10110.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 236)) ;
    {
    var_attributeMap_10010.setter_insertKey (enumerator_10110.current_name (HERE), var_t_10159, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 242)) ;
    }
    enumerator_10110.gotoNextObject () ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_15 = this ;
  GALGAS_unifiedTypeMapEntry var_referenceClassType_10587 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_15.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 245)) ;
  const GALGAS_weakReferenceDeclarationAST temp_16 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("weak reference ").add_operation (temp_16.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 249)), GALGAS_weakReferenceTypeForGeneration::init_21__21__21__21__21__21_ (var_selfType_8552, var_referenceClassType_10587, var_superClassEntry_8673, var_allAttributeList_9049, var_typedAttributeList_9962, extensionGetter_definition (var_selfType_8552, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 256)).readProperty_generateHeaderInSeparateFile (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 248)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-weak-reference.galgas", 276)).operator_not (SOURCE_FILE ("declaration-type-weak-reference.galgas", 276)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_weakReferenceTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 277)) ;
    }
  }
  const GALGAS_weakReferenceTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReferenceClassType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 279)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_4 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_12107 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 280)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_5 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_6 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_7 = this ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-weak-reference.galgas", 284)).boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_9) {
    const GALGAS_weakReferenceTypeForGeneration temp_10 = this ;
    temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 284)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_classGenerationTemplate_weakReferenceClassTypeHeader_31_ (inCompiler, extensionGetter_identifierRepresentation (temp_5.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 282)), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 283)), temp_8 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 281))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typeDefinition_12107.readProperty_typeName ().readProperty_string (), var_typeDefinition_12107.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas", 288)), var_typeDefinition_12107.readProperty_isConcrete (), var_typeDefinition_12107.readProperty_initializerMap (), var_typeDefinition_12107.readProperty_classFunctionMap (), var_typeDefinition_12107.readProperty_getterMap (), var_typeDefinition_12107.readProperty_setterMap (), var_typeDefinition_12107.readProperty_instanceMethodMap (), var_typeDefinition_12107.readProperty_classMethodMap (), var_typeDefinition_12107.readProperty_readSubscriptMap (), var_typeDefinition_12107.readProperty_enumerationDescriptorList (), var_typeDefinition_12107.readProperty_features (), var_typeDefinition_12107.readProperty_addAssignOperatorArguments (), var_typeDefinition_12107.readProperty_typeForEnumeratedElement (), var_typeDefinition_12107.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 286))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 286)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_weakReferenceTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 312)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_13454 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 313)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_2 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_3 = this ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = temp_3.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-weak-reference.galgas", 317)).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_5) {
    const GALGAS_weakReferenceTypeForGeneration temp_6 = this ;
    temp_4 = extensionGetter_identifierRepresentation (temp_6.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 317)) ;
  }
  const GALGAS_weakReferenceTypeForGeneration temp_7 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_8 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_9 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_10 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_11 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_classGenerationTemplate_weakReferenceClassTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 315)), var_typeDefinition_13454.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas", 316)), temp_4, temp_7.readProperty_mTypedAttributeList (), temp_8.readProperty_allTypedPropertyList (), temp_9.readProperty_allTypedPropertyList ().getter_subListWithRange (GALGAS_range::init_21__21_ (GALGAS_uint (uint32_t (0U)), temp_10.readProperty_allTypedPropertyList ().getter_count (SOURCE_FILE ("declaration-type-weak-reference.galgas", 320)).substract_operation (temp_11.readProperty_mTypedAttributeList ().getter_count (SOURCE_FILE ("declaration-type-weak-reference.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 320)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 320)) COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 314))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_enumDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_enumDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("enum @").add_operation (temp_0.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 180)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_addAssociatedElement (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  cEnumerator_enumConstantList enumerator_6295 (temp_0.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_6295.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_6295.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 187)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_enumDeclarationAST temp_2 = this ;
        GALGAS_lstring var_associatedTypeName_6383 = GALGAS_lstring::init_21__21_ (function_makeEmbeddedTypeName (temp_2.readProperty_enumTypeName ().readProperty_string (), enumerator_6295.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 189)), enumerator_6295.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
        GALGAS_propertyInCollectionListAST var_propertyListAST_6572 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
        cEnumerator__32_lstringlist enumerator_6615 (enumerator_6295.current (HERE).readProperty_associatedValueTypeList (), EnumerationOrder::up) ;
        while (enumerator_6615.hasCurrentObject ()) {
          var_propertyListAST_6572.addAssign_operation (GALGAS_bool (true), enumerator_6615.current_mValue_30_ (HERE), enumerator_6615.current_mValue_31_ (HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-enum.galgas", 198)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-enum.galgas", 200))  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 194)) ;
          enumerator_6615.gotoNextObject () ;
        }
        const GALGAS_enumDeclarationAST temp_3 = this ;
        GALGAS_structDeclarationAST var_s_6893 = GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefull (GALGAS_bool (false), var_associatedTypeName_6383, var_propertyListAST_6572, GALGAS_string::makeEmptyString (), temp_3.readProperty_comparison (), GALGAS_bool (true), inCompiler COMMA_HERE) ;
        ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (var_s_6893  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 210)) ;
        {
        GALGAS_lstring joker_7221 ; // Joker input parameter
        extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_7221, var_associatedTypeName_6383, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 211)) ;
        }
      }
    }
    enumerator_6295.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                              GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_8047 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 226)), temp_1.readProperty_enumTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_enumDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_8047, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 227)) ;
  }
  GALGAS_bool var_circularReference_8276 = GALGAS_bool (true) ;
  const GALGAS_enumDeclarationAST temp_3 = this ;
  cEnumerator_enumConstantList enumerator_8326 (temp_3.readProperty_mConstantList (), EnumerationOrder::up) ;
  bool bool_4 = var_circularReference_8276.isValidAndTrue () ;
  if (enumerator_8326.hasCurrentObject () && bool_4) {
    while (enumerator_8326.hasCurrentObject () && bool_4) {
      GALGAS_bool var_namesCurrentType_8377 = GALGAS_bool (false) ;
      cEnumerator__32_lstringlist enumerator_8421 (enumerator_8326.current (HERE).readProperty_associatedValueTypeList (), EnumerationOrder::up) ;
      bool bool_5 = var_namesCurrentType_8377.operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 232)).isValidAndTrue () ;
      if (enumerator_8421.hasCurrentObject () && bool_5) {
        while (enumerator_8421.hasCurrentObject () && bool_5) {
          GALGAS_lstring var_propertyKey_8502 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_8421.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 233)), enumerator_8421.current_mValue_30_ (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (ComparisonKind::equal, var_propertyKey_8502.readProperty_string ().objectCompare (var_key_8047.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_namesCurrentType_8377 = GALGAS_bool (true) ;
            }
          }
          enumerator_8421.gotoNextObject () ;
          if (enumerator_8421.hasCurrentObject ()) {
            bool_5 = var_namesCurrentType_8377.operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 232)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_namesCurrentType_8377.operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 238)).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_circularReference_8276 = GALGAS_bool (false) ;
        }
      }
      enumerator_8326.gotoNextObject () ;
      if (enumerator_8326.hasCurrentObject ()) {
        bool_4 = var_circularReference_8276.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_circularReference_8276.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumDeclarationAST temp_9 = this ;
      cEnumerator_enumConstantList enumerator_8877 (temp_9.readProperty_mConstantList (), EnumerationOrder::up) ;
      while (enumerator_8877.hasCurrentObject ()) {
        cEnumerator__32_lstringlist enumerator_8915 (enumerator_8877.current (HERE).readProperty_associatedValueTypeList (), EnumerationOrder::up) ;
        while (enumerator_8915.hasCurrentObject ()) {
          GALGAS_lstring var_propertyKey_8971 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_8915.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 246)), enumerator_8915.current_mValue_30_ (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (ComparisonKind::notEqual, var_propertyKey_8971.readProperty_string ().objectCompare (var_key_8047.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_8047, var_propertyKey_8971 COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 248)) ;
              }
            }
          }
          enumerator_8915.gotoNextObject () ;
        }
        enumerator_8877.gotoNextObject () ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInSemanticContext (GALGAS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                        const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classFunctionMap var_classFunctionMap_9895 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_setterMap var_setterMap_9936 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_unifiedTypeMapEntry var_enumTypeEntry_10032 ;
  {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_enumTypeName (), var_enumTypeEntry_10032, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 269)) ;
  }
  GALGAS_constantIndexMap var_constantMap_10096 = GALGAS_constantIndexMap::init (inCompiler COMMA_HERE) ;
  GALGAS_bool var_hasAssociatedValues_10127 = GALGAS_bool (false) ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  cEnumerator_enumConstantList enumerator_10180 (temp_1.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_10180.hasCurrentObject ()) {
    GALGAS_associatedValueDescriptorList var_associatedTypeList_10238 = GALGAS_associatedValueDescriptorList::init (inCompiler COMMA_HERE) ;
    GALGAS_functionSignature var_argumentTypeList_10291 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
    cEnumerator__32_lstringlist enumerator_10333 (enumerator_10180.current (HERE).readProperty_associatedValueTypeList (), EnumerationOrder::up) ;
    while (enumerator_10333.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_10432 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_10333.current_mValue_30_ (HERE), var_associatedTypeEntry_10432, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 277)) ;
      }
      var_argumentTypeList_10291.addAssign_operation (enumerator_10333.current_mValue_31_ (HERE), var_associatedTypeEntry_10432, enumerator_10333.current_mValue_30_ (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 278)) ;
      var_associatedTypeList_10238.addAssign_operation (var_associatedTypeEntry_10432, enumerator_10333.current_mValue_31_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 279)) ;
      var_hasAssociatedValues_10127 = GALGAS_bool (true) ;
      enumerator_10333.gotoNextObject () ;
    }
    {
    var_constantMap_10096.setter_insertKey (enumerator_10180.current (HERE).readProperty_name (), var_constantMap_10096.getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 282)), var_associatedTypeList_10238, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 282)) ;
    }
    {
    var_classFunctionMap_9895.setter_insertOrReplace (enumerator_10180.current (HERE).readProperty_name (), var_argumentTypeList_10291, GALGAS_bool (false), var_enumTypeEntry_10032 COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 283)) ;
    }
    enumerator_10180.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_10924 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_enumDeclarationAST temp_2 = this ;
  cEnumerator_enumConstantList enumerator_10972 (temp_2.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_10972.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_10972.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 293)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_unifiedTypeMapEntryList var_associatedTypeList_11085 = GALGAS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
        GALGAS_formalParameterSignature var_argumentTypeList_11147 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        cEnumerator__32_lstringlist enumerator_11191 (enumerator_10972.current (HERE).readProperty_associatedValueTypeList (), EnumerationOrder::up) ;
        while (enumerator_11191.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_11293 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11191.current_mValue_30_ (HERE), var_associatedTypeEntry_11293, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 297)) ;
          }
          var_argumentTypeList_11147.addAssign_operation (enumerator_11191.current_mValue_31_ (HERE), var_associatedTypeEntry_11293, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-enum.galgas", 298)), enumerator_11191.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 298)) ;
          var_associatedTypeList_11085.addAssign_operation (var_associatedTypeEntry_11293  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 299)) ;
          var_hasAssociatedValues_10127 = GALGAS_bool (true) ;
          enumerator_11191.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_10924.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("extract").add_operation (enumerator_10972.current (HERE).readProperty_name ().readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 303)), enumerator_10972.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-enum.galgas", 304)), var_argumentTypeList_11147, enumerator_10972.current (HERE).readProperty_name ().readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-enum.galgas", 308)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 302)) ;
        }
      }
    }
    enumerator_10972.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap_11896 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_11896, inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 314)) ;
  }
  const GALGAS_enumDeclarationAST temp_4 = this ;
  cEnumerator_enumConstantList enumerator_11932 (temp_4.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_11932.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_11932.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 316)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_enumDeclarationAST temp_6 = this ;
        GALGAS_string var_associatedTypeName_12020 = function_makeEmbeddedTypeName (temp_6.readProperty_enumTypeName ().readProperty_string (), enumerator_11932.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 317)) ;
        GALGAS_string var_optionalTypeName_12124 = function_makeOptionalTypeName (var_associatedTypeName_12020, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 318)) ;
        {
        routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_11896, ioArgument_ioTypeMap, GALGAS_string ("get").add_operation (enumerator_11932.current (HERE).readProperty_name ().readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 322)), GALGAS_string::makeEmptyString (), var_optionalTypeName_12124, GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 319)) ;
        }
      }
    }
    enumerator_11932.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_7 = this ;
  cEnumerator_enumConstantList enumerator_12556 (temp_7.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_12556.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_11896, ioArgument_ioTypeMap, GALGAS_string ("is").add_operation (enumerator_12556.current (HERE).readProperty_name ().readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 334)), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 331)) ;
    }
    enumerator_12556.gotoNextObject () ;
  }
  GALGAS_initializerMap var_initializerMap_12888 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_enumDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_enumTypeName (), GALGAS_bool (false), var_initializerMap_12888, var_getterMap_11896, var_setterMap_9936, var_instanceMethodMap_10924, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 342)) ;
  }
  GALGAS_typeFeatures var_features_13350 = GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-enum.galgas", 358)) ;
  const GALGAS_enumDeclarationAST temp_9 = this ;
  switch (temp_9.readProperty_comparison ().enumValue ()) {
  case GALGAS_structComparison::Enumeration::invalid:
    break ;
  case GALGAS_structComparison::Enumeration::enum_none:
    break ;
  case GALGAS_structComparison::Enumeration::enum_equatable:
    {
      var_features_13350.orAssign_operation(GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas", 363)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 363)) ;
    }
    break ;
  case GALGAS_structComparison::Enumeration::enum_comparable:
    {
      var_features_13350.orAssign_operation(GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas", 365)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas", 365)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 365)) ;
    }
    break ;
  }
  {
  const GALGAS_enumDeclarationAST temp_10 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_10.readProperty_enumTypeName (), var_features_13350, GALGAS_bool (true), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 367)) ;
  }
  const GALGAS_enumDeclarationAST temp_11 = this ;
  const GALGAS_enumDeclarationAST temp_12 = this ;
  const GALGAS_enumDeclarationAST temp_13 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_13818 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_11.readProperty_enumTypeName (), temp_12.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas", 379)), GALGAS_typeKindEnum::class_func_enumType (var_constantMap_10096  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 380)), GALGAS_bool (false), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_12888, var_classFunctionMap_9895, var_getterMap_11896, var_setterMap_9936, var_instanceMethodMap_10924, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas", 391)), GALGAS_subscriptMap::init (inCompiler COMMA_HERE), GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_13350, GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas", 398)), GALGAS_string ("enum-").add_operation (temp_13.readProperty_enumTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-enum.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 399)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-enum.galgas", 400)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_13818.readProperty_typeName (), var_typeDefinition_13818, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 402)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_15552 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_enumTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 416)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15552, var_nameForUsefulness_15552, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 417)) ;
  }
  GALGAS__5B_unifiedTypeMapEntry_5D_ var_associatedValuesTypes_15752 = GALGAS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GALGAS_stringlist var_constantList_15787 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration_15856 = GALGAS_enumConstantListForGeneration::init (inCompiler COMMA_HERE) ;
  GALGAS_constantIndexMap var_constantMap_15899 = GALGAS_constantIndexMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  cEnumerator_enumConstantList enumerator_15959 (temp_1.readProperty_mConstantList (), EnumerationOrder::up) ;
  while (enumerator_15959.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_15959.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 424)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_enumDeclarationAST temp_3 = this ;
        GALGAS_string var_associatedTypeName_16047 = function_makeEmbeddedTypeName (temp_3.readProperty_enumTypeName ().readProperty_string (), enumerator_15959.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 425)) ;
        GALGAS_string var_optionalTypeName_16151 = function_makeOptionalTypeName (var_associatedTypeName_16047, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 426)) ;
        GALGAS_unifiedTypeMapEntry var_associatedType_16239 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (var_optionalTypeName_16151, enumerator_15959.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 427)) ;
        {
        var_associatedValuesTypes_15752.setter_append (var_associatedType_16239, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 428)) ;
        }
      }
    }
    var_constantList_15787.addAssign_operation (enumerator_15959.current (HERE).readProperty_name ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 430)) ;
    GALGAS_associatedValueDescriptorList var_associatedTypeList_16485 = GALGAS_associatedValueDescriptorList::init (inCompiler COMMA_HERE) ;
    GALGAS_stringset var_associatedValueNameSet_16530 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
    cEnumerator__32_lstringlist enumerator_16577 (enumerator_15959.current (HERE).readProperty_associatedValueTypeList (), EnumerationOrder::up) ;
    while (enumerator_16577.hasCurrentObject ()) {
      GALGAS_lstring var_propertyTypeNameForUsefulness_16637 = function_typeNameForUsefulEntitiesGraph (enumerator_16577.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 434)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15552, var_propertyTypeNameForUsefulness_16637 COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 435)) ;
      }
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_16815 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_16577.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 436)) ;
      var_associatedTypeList_16485.addAssign_operation (var_associatedTypeEntry_16815, enumerator_16577.current_mValue_31_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 437)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_associatedValueNameSet_16530.getter_hasKey (enumerator_16577.current_mValue_31_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 438)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_16577.current_mValue_31_ (HERE).readProperty_location (), GALGAS_string ("duplicated name"), fixItArray5  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 439)) ;
        }
      }
      var_associatedValueNameSet_16530.addAssign_operation (enumerator_16577.current_mValue_31_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 441)) ;
      const GALGAS_enumDeclarationAST temp_6 = this ;
      switch (temp_6.readProperty_comparison ().enumValue ()) {
      case GALGAS_structComparison::Enumeration::invalid:
        break ;
      case GALGAS_structComparison::Enumeration::enum_none:
        break ;
      case GALGAS_structComparison::Enumeration::enum_equatable:
        {
          GALGAS_unifiedTypeDefinition var_associatedType_17220 = extensionGetter_definition (var_associatedTypeEntry_16815, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 446)) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = var_associatedType_17220.readProperty_features ().getter_contains (GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas", 447)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 447)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 447)).operator_and (var_associatedType_17220.readProperty_features ().getter_contains (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas", 448)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 448)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 448)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 447)).operator_and (var_associatedType_17220.readProperty_features ().getter_contains (GALGAS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-enum.galgas", 449)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 449)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 449)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 448)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_16577.current_mValue_30_ (HERE).readProperty_location (), GALGAS_string ("the @").add_operation (enumerator_16577.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 450)).add_operation (GALGAS_string (" should be equatable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 450)), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 450)) ;
            }
          }
        }
        break ;
      case GALGAS_structComparison::Enumeration::enum_comparable:
        {
          GALGAS_unifiedTypeDefinition var_associatedType_17606 = extensionGetter_definition (var_associatedTypeEntry_16815, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 453)) ;
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = var_associatedType_17606.readProperty_features ().getter_contains (GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas", 454)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 454)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 454)).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_16577.current_mValue_30_ (HERE).readProperty_location (), GALGAS_string ("the @").add_operation (enumerator_16577.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 455)).add_operation (GALGAS_string (" should be comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 455)), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 455)) ;
            }
          }
        }
        break ;
      }
      enumerator_16577.gotoNextObject () ;
    }
    {
    var_constantMap_15899.setter_insertKey (enumerator_15959.current (HERE).readProperty_name (), var_constantMap_15899.getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 459)), var_associatedTypeList_16485, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 459)) ;
    }
    var_enumConstantListForGeneration_15856.addAssign_operation (enumerator_15959.current (HERE).readProperty_name ().readProperty_string (), var_associatedTypeList_16485  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 460)) ;
    enumerator_15959.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_11 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_18028 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_enumTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 463)) ;
  const GALGAS_enumDeclarationAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (temp_12.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 465)), GALGAS_enumTypeForGeneration::init_21__21__21_ (var_selfType_18028, var_enumConstantListForGeneration_15856, var_associatedValuesTypes_15752, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 464)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GALGAS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_hasAssociatedValues_19299 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_19352 (temp_0.readProperty_constantList (), EnumerationOrder::up) ;
  bool bool_1 = var_hasAssociatedValues_19299.operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 497)).isValidAndTrue () ;
  if (enumerator_19352.hasCurrentObject () && bool_1) {
    while (enumerator_19352.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_19299 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_19352.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 498)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_19352.gotoNextObject () ;
      if (enumerator_19352.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_19299.operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 497)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_19487 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 500)) ;
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, var_selfTypeDefinition_19487.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_19487.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas", 503)), temp_3.readProperty_constantList (), var_hasAssociatedValues_19299 COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 501))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_19487.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_19487.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas", 509)), var_selfTypeDefinition_19487.readProperty_isConcrete (), var_selfTypeDefinition_19487.readProperty_initializerMap (), var_selfTypeDefinition_19487.readProperty_classFunctionMap (), var_selfTypeDefinition_19487.readProperty_getterMap (), var_selfTypeDefinition_19487.readProperty_setterMap (), var_selfTypeDefinition_19487.readProperty_instanceMethodMap (), var_selfTypeDefinition_19487.readProperty_classMethodMap (), var_selfTypeDefinition_19487.readProperty_readSubscriptMap (), var_selfTypeDefinition_19487.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_19487.readProperty_features (), var_selfTypeDefinition_19487.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_19487.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_19487.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 507))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 507)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_20897 (temp_0.readProperty_associatedValuesTypes (), EnumerationOrder::up) ;
  while (enumerator_20897.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_20897.current (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 532)) ;
    enumerator_20897.gotoNextObject () ;
  }
  GALGAS_bool var_hasAssociatedValues_20992 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_1 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_21045 (temp_1.readProperty_constantList (), EnumerationOrder::up) ;
  bool bool_2 = var_hasAssociatedValues_20992.operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 535)).isValidAndTrue () ;
  if (enumerator_21045.hasCurrentObject () && bool_2) {
    while (enumerator_21045.hasCurrentObject () && bool_2) {
      var_hasAssociatedValues_20992 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_21045.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 536)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_21045.gotoNextObject () ;
      if (enumerator_21045.hasCurrentObject ()) {
        bool_2 = var_hasAssociatedValues_20992.operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 535)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 538)) ;
  const GALGAS_enumTypeForGeneration temp_4 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_21241 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 539)) ;
  const GALGAS_enumTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_21241.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_21241.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas", 542)), temp_5.readProperty_constantList (), var_hasAssociatedValues_20992, extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_21241.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 545)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 540))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

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


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   enum ") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Enumeration\n  public: enum class Enumeration {\n    invalid") ;
  GALGAS_uint index_531_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_531 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_531.hasCurrentObject ()) {
      result.appendString (",\n    enum_") ;
      result.appendString (enumerator_531.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 13)).stringValue ()) ;
      index_531_.increment () ;
      enumerator_531.gotoNextObject () ;
    }
  }
  result.appendString ("\n  } ;\n  \n//--------------------------------- Private properties\n") ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  private: Enumeration mEnum ;\n\n//--------------------------------- Associated value extraction\n") ;
  GALGAS_uint index_942_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_942 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_942.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_942.current_associatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 28)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_") ;
        result.appendString (enumerator_942.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 29)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_1163_idx (0) ;
        if (enumerator_942.current_associatedValueTypeList (HERE).isValid ()) {
          cEnumerator_associatedValueDescriptorList enumerator_1163 (enumerator_942.current_associatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_1163.hasCurrentObject ()) {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1163.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 31)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_1163.current_name (HERE).stringValue ()) ;
            if (enumerator_1163.hasNextObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_1163_idx.increment () ;
            enumerator_1163.gotoNextObject () ;
          }
        }
        result.appendString (") const ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_942_.increment () ;
      enumerator_942.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {\n    return Enumeration::invalid != mEnum ;\n  }\n\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override {\n    mEnum = Enumeration::invalid ;\n") ;
  const enumGalgasBool test_2 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("    mAssociatedValues.drop () ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  }\n\n  public: inline Enumeration enumValue (void) const {\n    return mEnum ;\n  }\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (Compiler * inCompiler,
                                                                                         const GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                                         const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES,
                                                                                         const GALGAS_bool & in_GENERATE_5F_COMPARISON
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  Enum ") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("mAssociatedValues (),\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("mEnum (Enumeration::invalid) {\n}\n\n\n") ;
  GALGAS_uint index_451_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_451 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_451.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_451.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 17)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_451.current_associatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 18)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("UNUSED_LOCATION_ARGS") ;
        } break ;
      case kBoolFalse : {
        GALGAS_uint index_815_idx (0) ;
        if (enumerator_451.current_associatedValueTypeList (HERE).isValid ()) {
          cEnumerator_associatedValueDescriptorList enumerator_815 (enumerator_451.current_associatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_815.hasCurrentObject ()) {
            result.appendString ("const GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_815.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue ()) ;
            result.appendString (" & inAssociatedValue") ;
            result.appendString (index_815_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue ()) ;
            if (enumerator_815.hasNextObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_815_idx.increment () ;
            enumerator_815.gotoNextObject () ;
          }
        }
        result.appendString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_UNUSED_LOCATION_ARGS") ;
        } break ;
      default :
        break ;
      }
      result.appendString (") {\n  GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" result ;\n  result.mEnum = Enumeration::enum_") ;
      result.appendString (enumerator_451.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 29)).stringValue ()) ;
      result.appendString (" ;\n") ;
      const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_451.current_associatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 30)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString ("  AC_GALGAS_root * p = nullptr ;\n  macroMyNew (p, GALGAS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_451.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 32)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 32)).stringValue ()) ;
        result.appendString (" (") ;
        GALGAS_uint index_1383_idx (0) ;
        if (enumerator_451.current_associatedValueTypeList (HERE).isValid ()) {
          cEnumerator_associatedValueDescriptorList enumerator_1383 (enumerator_451.current_associatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_1383.hasCurrentObject ()) {
            result.appendString ("inAssociatedValue") ;
            result.appendString (index_1383_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 34)).stringValue ()) ;
            if (enumerator_1383.hasNextObject ()) {
              result.appendString (", ") ;
            }
            index_1383_idx.increment () ;
            enumerator_1383.gotoNextObject () ;
          }
        }
        result.appendString (")) ;\n  EnumerationAssociatedValues * eav = nullptr ;\n  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;\n  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues\n  macroDetachSharedObject (eav) ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("  return result ;\n}\n\n") ;
      index_451_.increment () ;
      enumerator_451.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1842_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_1842 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1842.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_1842.current_associatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 48)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::method_extract") ;
        result.appendString (enumerator_1842.current_name (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 50)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 50)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_2189_ (0) ;
        if (enumerator_1842.current_associatedValueTypeList (HERE).isValid ()) {
          cEnumerator_associatedValueDescriptorList enumerator_2189 (enumerator_1842.current_associatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_2189.hasCurrentObject ()) {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2189.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 52)).stringValue ()) ;
            result.appendString (" & outAssociatedValue_") ;
            result.appendString (enumerator_2189.current_name (HERE).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            index_2189_.increment () ;
            enumerator_2189.gotoNextObject () ;
          }
        }
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("Compiler * inCompiler\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) const {\n  if (mEnum != Enumeration::enum_") ;
        result.appendString (enumerator_1842.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 56)).stringValue ()) ;
        result.appendString (") {\n") ;
        GALGAS_uint index_2497_idx (0) ;
        if (enumerator_1842.current_associatedValueTypeList (HERE).isValid ()) {
          cEnumerator_associatedValueDescriptorList enumerator_2497 (enumerator_1842.current_associatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_2497.hasCurrentObject ()) {
            result.appendString ("    outAssociatedValue_") ;
            result.appendString (enumerator_2497.current_name (HERE).stringValue ()) ;
            result.appendString (".drop () ;\n") ;
            index_2497_idx.increment () ;
            enumerator_2497.gotoNextObject () ;
          }
        }
        result.appendString ("    String s ;\n    s.appendCString (\"method @") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (".") ;
        result.appendString (enumerator_1842.current_name (HERE).stringValue ()) ;
        result.appendString (" invoked with an invalid enum value\") ;\n    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n  }else{\n    const auto ptr = (GALGAS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_1842.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 64)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 64)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n") ;
        GALGAS_uint index_3013_idx (0) ;
        if (enumerator_1842.current_associatedValueTypeList (HERE).isValid ()) {
          cEnumerator_associatedValueDescriptorList enumerator_3013 (enumerator_1842.current_associatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_3013.hasCurrentObject ()) {
            result.appendString ("    outAssociatedValue_") ;
            result.appendString (enumerator_3013.current_name (HERE).stringValue ()) ;
            result.appendString (" = ptr->mProperty_") ;
            result.appendString (enumerator_3013.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).stringValue ()) ;
            result.appendString (" ;\n") ;
            index_3013_idx.increment () ;
            enumerator_3013.gotoNextObject () ;
          }
        }
        result.appendString ("  }\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_1842_.increment () ;
      enumerator_1842.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3218_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_3218 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3218.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
      const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_3218.current_associatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 75)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_4) {
      case kBoolTrue : {
        result.appendString ("GALGAS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3218.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).stringValue ()) ;
        result.appendString ("_3F_ GALGAS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::getter_get") ;
        result.appendString (enumerator_3218.current_name (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).stringValue ()) ;
        result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3218.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 77)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 77)).stringValue ()) ;
        result.appendString ("_3F_ result ;\n  if (mEnum == Enumeration::enum_") ;
        result.appendString (enumerator_3218.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (") {\n    const auto ptr = (const GALGAS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3218.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n    result = GALGAS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3218.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 80)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 80)).stringValue ()) ;
        result.appendString (" (*ptr) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::getAssociatedValuesFor_") ;
        result.appendString (enumerator_3218.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 85)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_4489_idx (0) ;
        if (enumerator_3218.current_associatedValueTypeList (HERE).isValid ()) {
          cEnumerator_associatedValueDescriptorList enumerator_4489 (enumerator_3218.current_associatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_4489.hasCurrentObject ()) {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_4489.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 87)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_4489.current_name (HERE).stringValue ()) ;
            if (enumerator_4489.hasNextObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_4489_idx.increment () ;
            enumerator_4489.gotoNextObject () ;
          }
        }
        result.appendString (") const {\n  const auto ptr = (const GALGAS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3218.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 91)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 91)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n") ;
        GALGAS_uint index_4831_ (0) ;
        if (enumerator_3218.current_associatedValueTypeList (HERE).isValid ()) {
          cEnumerator_associatedValueDescriptorList enumerator_4831 (enumerator_3218.current_associatedValueTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_4831.hasCurrentObject ()) {
            result.appendString ("  out_") ;
            result.appendString (enumerator_4831.current_name (HERE).stringValue ()) ;
            result.appendString (" = ptr->mProperty_") ;
            result.appendString (enumerator_4831.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 93)).stringValue ()) ;
            result.appendString (" ;\n") ;
            index_4831_.increment () ;
            enumerator_4831.gotoNextObject () ;
          }
        }
        result.appendString ("}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_3218_.increment () ;
      enumerator_3218.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nstatic const char * gEnumNameArrayFor_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" [") ;
  result.appendString (in_CONSTANT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 101)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 101)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 101)).stringValue ()) ;
  result.appendString ("] = {\n  \"(not built)\"") ;
  GALGAS_uint index_5232_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5232 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5232.hasCurrentObject ()) {
      result.appendString (",\n  ") ;
      result.appendString (enumerator_5232.current_name (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 104)).stringValue ()) ;
      index_5232_.increment () ;
      enumerator_5232.gotoNextObject () ;
    }
  }
  result.appendString ("\n} ;\n\n") ;
  GALGAS_uint index_5373_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5373 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5373.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_is") ;
      result.appendString (enumerator_5373.current_name (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 113)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_") ;
      result.appendString (enumerator_5373.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 114)).stringValue ()) ;
      result.appendString (" == mEnum) ;\n}\n\n") ;
      index_5373_.increment () ;
      enumerator_5373.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t ") ;
  const enumGalgasBool test_5 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    result.appendString ("inIndentation") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("/* inIndentation */") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") const {\n  ioString.appendCString (\"<enum @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (": \") ;\n  ioString.appendCString (gEnumNameArrayFor_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" [size_t (mEnum)]) ;\n") ;
  const enumGalgasBool test_6 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    result.appendString ("  mAssociatedValues.description (ioString, inIndentation) ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  ioString.appendCString (\">\") ;\n}\n\n") ;
  const enumGalgasBool test_7 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_7) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (mEnum < inOperand.mEnum) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (mEnum > inOperand.mEnum) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n") ;
    const enumGalgasBool test_8 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
    switch (test_8) {
    case kBoolTrue : {
      result.appendString ("      switch (mEnum) {\n") ;
      GALGAS_uint index_7055_ (0) ;
      if (in_CONSTANT_5F_LIST.isValid ()) {
        cEnumerator_enumConstantListForGeneration enumerator_7055 (in_CONSTANT_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_7055.hasCurrentObject ()) {
          const enumGalgasBool test_9 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_7055.current_associatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 152)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          switch (test_9) {
          case kBoolTrue : {
            result.appendString ("      case Enumeration::enum_") ;
            result.appendString (enumerator_7055.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 153)).stringValue ()) ;
            result.appendString (": {\n        const auto left = (GALGAS_") ;
            result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_7055.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).stringValue ()) ;
            result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n        const auto right = (GALGAS_") ;
            result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_7055.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).stringValue ()) ;
            result.appendString (" *) inOperand.mAssociatedValues.associatedValuesPointer () ;\n        result = left->objectCompare (*right) ;\n        }break ;\n") ;
            } break ;
          case kBoolFalse : {
            } break ;
          default :
            break ;
          }
          index_7055_.increment () ;
          enumerator_7055.gotoNextObject () ;
        }
      }
      result.appendString ("      default:\n        result = ComparisonResult::operandEqual ;\n        break ;\n      }\n") ;
      } break ;
    case kBoolFalse : {
      result.appendString ("      result = ComparisonResult::operandEqual ;\n") ;
      } break ;
    default :
      break ;
    }
    result.appendString ("    }\n  }\n  return result ;\n}\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GALGAS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                    GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                    GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                    GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                    GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                    GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_14054 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 368)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_14054, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 369)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_externTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("extern @").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 375)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInSemanticContext (GALGAS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                              const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                              const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                              const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                              const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_getterMap var_getterMap_15125 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_15125, inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 389)) ;
  }
  GALGAS_setterMap var_setterMap_15205 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_15247 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GALGAS_initializerMap var_initializerMap_15317 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  cEnumerator_externTypeConstructorList enumerator_15365 (temp_0.readProperty_externTypeInitializerList (), EnumerationOrder::up) ;
  while (enumerator_15365.hasCurrentObject ()) {
    GALGAS_functionSignature var_arguments_15515 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_15582 (enumerator_15365.current (HERE).readProperty_mParameterList (), EnumerationOrder::up) ;
    while (enumerator_15582.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_15699 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_15582.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_15699, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 400)) ;
      }
      var_arguments_15515.addAssign_operation (enumerator_15582.current_mFormalSelector (HERE), var_argumentTypeEntry_15699, enumerator_15582.current_mFormalParameterName (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 401)) ;
      enumerator_15582.gotoNextObject () ;
    }
    const GALGAS_externTypeDeclarationAST temp_1 = this ;
    GALGAS_lstring var_initializerName_15839 = GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (enumerator_15365.current (HERE).readProperty_mParameterList (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 404)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    var_initializerMap_15317.setter_insertKey (var_initializerName_15839, var_arguments_15515, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 405)) ;
    }
    enumerator_15365.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  cEnumerator_externTypeGetterList enumerator_16064 (temp_2.readProperty_mExternTypeGetterList (), EnumerationOrder::up) ;
  while (enumerator_16064.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_returnedTypeEntry_16164 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16064.current_mResultTypeName (HERE), var_returnedTypeEntry_16164, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 409)) ;
    }
    GALGAS_functionSignature var_arguments_16221 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_16288 (enumerator_16064.current_mParameterList (HERE), EnumerationOrder::up) ;
    while (enumerator_16288.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_16393 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16288.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_16393, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 413)) ;
      }
      var_arguments_16221.addAssign_operation (enumerator_16288.current_mFormalSelector (HERE), var_argumentTypeEntry_16393, enumerator_16288.current_mFormalParameterName (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 414)) ;
      enumerator_16288.gotoNextObject () ;
    }
    {
    var_getterMap_15125.setter_insertKey (enumerator_16064.current_mGetterName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas", 419)), var_arguments_16221, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 421)), GALGAS_bool (true), var_returnedTypeEntry_16164, GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas", 424)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 417)) ;
    }
    enumerator_16064.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  cEnumerator_externTypeSetterList enumerator_16886 (temp_3.readProperty_mExternTypeSetterList (), EnumerationOrder::up) ;
  while (enumerator_16886.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_16977 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    cEnumerator_formalParameterListAST enumerator_17097 (enumerator_16886.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
    while (enumerator_17097.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_17229 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17097.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_17229, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 432)) ;
      }
      var_routineSignature_16977.addAssign_operation (enumerator_17097.current_mFormalSelector (HERE), var_parameterTypeIndex_17229, enumerator_17097.current_mFormalArgumentPassingMode (HERE), enumerator_17097.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 436)) ;
      enumerator_17097.gotoNextObject () ;
    }
    {
    var_setterMap_15205.setter_insertKey (enumerator_16886.current_mSetterName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas", 441)), var_routineSignature_16977, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas", 444)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 439)) ;
    }
    enumerator_16886.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  cEnumerator_externTypeMethodList enumerator_17702 (temp_4.readProperty_mExternTypeMethodList (), EnumerationOrder::up) ;
  while (enumerator_17702.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_17767 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    cEnumerator_formalParameterListAST enumerator_17913 (enumerator_17702.current_mFormalParameterList (HERE), EnumerationOrder::up) ;
    while (enumerator_17913.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_18024 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17913.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_18024, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 452)) ;
      }
      var_routineSignature_17767.addAssign_operation (enumerator_17913.current_mFormalSelector (HERE), var_parameterTypeIndex_18024, enumerator_17913.current_mFormalArgumentPassingMode (HERE), enumerator_17913.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 456)) ;
      enumerator_17913.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_15247.setter_insertKey (enumerator_17702.current_mMethodName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas", 461)), var_routineSignature_17767, enumerator_17702.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas", 465)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 459)) ;
    }
    enumerator_17702.gotoNextObject () ;
  }
  GALGAS_typeFeatures var_features_18486 = GALGAS_typeFeatures::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_5.readProperty_mExternTypeName (), var_features_18486, GALGAS_bool (false), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 470)) ;
  }
  const GALGAS_externTypeDeclarationAST temp_6 = this ;
  const GALGAS_externTypeDeclarationAST temp_7 = this ;
  const GALGAS_externTypeDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_18737 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_6.readProperty_mExternTypeName (), temp_7.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas", 482)), GALGAS_typeKindEnum::class_func_externType (SOURCE_FILE ("declaration-type-extern.galgas", 483)), GALGAS_bool (false), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_15317, GALGAS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_15125, var_setterMap_15205, var_instanceMethodMap_15247, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas", 494)), GALGAS_subscriptMap::init (inCompiler COMMA_HERE), GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_18486, GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas", 501)), GALGAS_string ("externtype-").add_operation (temp_8.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-extern.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 502)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-extern.galgas", 503)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_18737.readProperty_typeName (), var_typeDefinition_18737, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 505)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_string /* constinArgument_inProductDirectory */,
                                                             const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                             GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_20607 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 526)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_20607, var_nameForUsefulness_20607, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 527)) ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (temp_1.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 530)), GALGAS_externTypeDeclarationForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 532)), temp_3.readProperty_mExternTypeName ().readProperty_string (), temp_4.readProperty_mCppPreDeclarationCode (), temp_5.readProperty_mCppClassCode (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 529)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_externTypeDeclarationForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_21724 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 554)) ;
  const GALGAS_externTypeDeclarationForGeneration temp_1 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_2 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21724.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 557)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode () COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 555))) ;
  const GALGAS_externTypeDeclarationForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_21724.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 563)), var_selfTypeDefinition_21724.readProperty_isConcrete (), var_selfTypeDefinition_21724.readProperty_initializerMap (), var_selfTypeDefinition_21724.readProperty_classFunctionMap (), var_selfTypeDefinition_21724.readProperty_getterMap (), var_selfTypeDefinition_21724.readProperty_setterMap (), var_selfTypeDefinition_21724.readProperty_instanceMethodMap (), var_selfTypeDefinition_21724.readProperty_classMethodMap (), var_selfTypeDefinition_21724.readProperty_readSubscriptMap (), var_selfTypeDefinition_21724.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_21724.readProperty_features (), var_selfTypeDefinition_21724.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_21724.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_21724.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 561))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 561)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                               GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  const GALGAS_graphDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4794 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 120)), temp_1.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4794, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 121)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4794, GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 122)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 122)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInSemanticContext (GALGAS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                         const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                         const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeEntry_5917 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeEntry_5917, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 138)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringTypeEntry_6041 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstring"), var_lstringTypeEntry_6041, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 143)) ;
  }
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_6164 ;
  {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mGraphTypeName (), var_graphTypeEntry_6164, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 148)) ;
  }
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_6304 ;
  {
  const GALGAS_graphDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mAssociatedListTypeName (), var_associatedListTypeEntry_6304, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 153)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringListTypeEntry_6445 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeEntry_6445, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 158)) ;
  }
  GALGAS_getterMap var_getterMap_6533 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6533, inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 163)) ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_6569 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_setterMap var_setterMap_6608 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6648 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterSignature var_formalParameterList_6737 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6737.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 170)), var_associatedListTypeEntry_6304, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas", 172)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 169)) ;
  var_formalParameterList_6737.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 175)), var_lstringListTypeEntry_6445, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas", 177)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 174)) ;
  var_formalParameterList_6737.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 180)), var_associatedListTypeEntry_6304, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas", 182)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 179)) ;
  var_formalParameterList_6737.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 185)), var_lstringListTypeEntry_6445, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas", 187)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 184)) ;
  {
  var_instanceMethodMap_6648.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("topologicalSort"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 190)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 191)), var_formalParameterList_6737, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 193)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas", 195)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 189)) ;
  }
  {
  var_instanceMethodMap_6648.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 199)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 200)), var_formalParameterList_6737, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 202)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas", 204)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 198)) ;
  }
  var_formalParameterList_6737 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6737.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 211)), var_associatedListTypeEntry_6304, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas", 213)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 210)) ;
  var_formalParameterList_6737.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 216)), var_lstringListTypeEntry_6445, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas", 218)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 215)) ;
  {
  var_instanceMethodMap_6648.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("circularities"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 221)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 222)), var_formalParameterList_6737, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 224)), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas", 226)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 220)) ;
  }
  {
  var_instanceMethodMap_6648.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 230)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 231)), var_formalParameterList_6737, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 233)), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas", 235)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 229)) ;
  }
  {
  var_instanceMethodMap_6648.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 239)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 240)), var_formalParameterList_6737, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 242)), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas", 244)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 238)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6533, ioArgument_ioTypeMap, GALGAS_string ("nodeList"), GALGAS_string::makeEmptyString (), temp_2.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 249)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6533, ioArgument_ioTypeMap, GALGAS_string ("reversedGraph"), GALGAS_string::makeEmptyString (), temp_3.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 258)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6533, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 267)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6533, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 276)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6533, ioArgument_ioTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 285)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6533, ioArgument_ioTypeMap, GALGAS_string ("graphviz"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 294)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6533, ioArgument_ioTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 303)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6533, ioArgument_ioTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 313)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6533, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 323)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6533, ioArgument_ioTypeMap, GALGAS_string ("lkeyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 332)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6533, ioArgument_ioTypeMap, GALGAS_string ("edges"), GALGAS_string::makeEmptyString (), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 341)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6533, ioArgument_ioTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), temp_4.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 350)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6533, ioArgument_ioTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 364)) ;
  }
  {
  var_classFunctionMap_6569.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("emptyGraph"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 375)), inCompiler COMMA_HERE), GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_graphTypeEntry_6164, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 374)) ;
  }
  var_formalParameterList_6737 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6737.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 383)), var_lstringTypeEntry_6041, GALGAS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas", 385)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 382)) ;
  cEnumerator_functionSignature enumerator_13092 (extensionGetter_definition (var_associatedListTypeEntry_6304, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 387)).readProperty_addAssignOperatorArguments (), EnumerationOrder::up) ;
  while (enumerator_13092.hasCurrentObject ()) {
    var_formalParameterList_6737.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 389)), enumerator_13092.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas", 391)), enumerator_13092.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 388)) ;
    enumerator_13092.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_5 = this ;
  cEnumerator_graphInsertModifierList enumerator_13321 (temp_5.readProperty_mInsertModifierList (), EnumerationOrder::up) ;
  while (enumerator_13321.hasCurrentObject ()) {
    {
    var_setterMap_6608.setter_insertOrReplace (enumerator_13321.current_mInsertModifierName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 397)), var_formalParameterList_6737, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas", 400)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 395)) ;
    }
    enumerator_13321.gotoNextObject () ;
  }
  {
  var_setterMap_6608.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 407)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 408)), GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas", 411)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 406)) ;
  }
  var_formalParameterList_6737 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6737.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 416)), var_stringTypeEntry_5917, GALGAS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas", 416)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 416)) ;
  {
  var_setterMap_6608.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("removeEdgesToNode"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 418)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 419)), var_formalParameterList_6737, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas", 422)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 417)) ;
  }
  var_formalParameterList_6737 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6737.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 428)), var_lstringTypeEntry_6041, GALGAS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas", 428)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 428)) ;
  var_formalParameterList_6737.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 429)), var_lstringTypeEntry_6041, GALGAS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas", 429)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 429)) ;
  {
  var_setterMap_6608.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("addEdge"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 431)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 432)), var_formalParameterList_6737, GALGAS_bool (false), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas", 435)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 430)) ;
  }
  var_formalParameterList_6737 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6737.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 441)), var_lstringTypeEntry_6041, GALGAS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas", 441)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 441)) ;
  {
  var_setterMap_6608.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("noteNode"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 443)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 444)), var_formalParameterList_6737, GALGAS_bool (false), GALGAS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas", 447)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 442)) ;
  }
  GALGAS_initializerMap var_initializerMap_15301 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_constructorPropertyTypeList_15346 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_graphDeclarationAST temp_6 = this ;
  var_initializerMap_15301.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_15346, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 454)), temp_6.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_15346, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 453)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_7 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_7.readProperty_mGraphTypeName (), GALGAS_bool (false), var_initializerMap_15301, var_getterMap_6533, var_setterMap_6608, var_instanceMethodMap_6648, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 458)) ;
  }
  GALGAS_typeFeatures var_features_15948 = GALGAS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-graph.galgas", 473)) ;
  {
  const GALGAS_graphDeclarationAST temp_8 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_8.readProperty_mGraphTypeName (), var_features_15948, GALGAS_bool (false), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 474)) ;
  }
  const GALGAS_graphDeclarationAST temp_9 = this ;
  const GALGAS_graphDeclarationAST temp_10 = this ;
  const GALGAS_graphDeclarationAST temp_11 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_16206 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_9.readProperty_mGraphTypeName (), temp_10.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas", 486)), GALGAS_typeKindEnum::class_func_graphType (SOURCE_FILE ("declaration-type-graph.galgas", 487)), GALGAS_bool (false), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_15301, var_classFunctionMap_6569, var_getterMap_6533, var_setterMap_6608, var_instanceMethodMap_6648, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas", 498)), GALGAS_subscriptMap::init (inCompiler COMMA_HERE), GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_15948, GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas", 505)), GALGAS_string ("graph-").add_operation (temp_11.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-graph.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 506)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-graph.galgas", 507)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_16206.readProperty_typeName (), var_typeDefinition_16206, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 509)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                        const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                        const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_17970 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 526)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17970, var_nameForUsefulness_17970, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 527)) ;
  }
  const GALGAS_graphDeclarationAST temp_1 = this ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_18124 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 528)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17970, var_associatedTypeNameForUsefulness_18124 COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 529)) ;
  }
  const GALGAS_graphDeclarationAST temp_2 = this ;
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_18320 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 531)) ;
  const GALGAS_graphDeclarationAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_18396 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 532)) ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListElementTypeEntry_18490 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_4.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 533)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_associatedListTypeEntry_18396, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 536)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_listType (SOURCE_FILE ("declaration-type-graph.galgas", 536)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_graphDeclarationAST temp_6 = this ;
      const GALGAS_graphDeclarationAST temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_7.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 537)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 537)), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 537)) ;
    }
  }
  GALGAS_stringset temp_9 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 540)) ;
  temp_9.enterElement (GALGAS_string ("noteNode"), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 540)) ;
  temp_9.enterElement (GALGAS_string ("addArc"), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 540)) ;
  GALGAS_stringset var_reservedModifierNames_18852 = temp_9 ;
  const GALGAS_graphDeclarationAST temp_10 = this ;
  cEnumerator_graphInsertModifierList enumerator_18927 (temp_10.readProperty_mInsertModifierList (), EnumerationOrder::up) ;
  while (enumerator_18927.hasCurrentObject ()) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_reservedModifierNames_18852.getter_hasKey (enumerator_18927.current_mInsertModifierName (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 542)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_18927.current_mInsertModifierName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_18927.current_mInsertModifierName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 543)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 543)), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 543)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_18927.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 545)) ;
    }
    enumerator_18927.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_13 = this ;
  const GALGAS_graphDeclarationAST temp_14 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (temp_13.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 549)), GALGAS_graphDeclarationForGeneration::init_21__21__21__21_ (var_graphTypeEntry_18320, var_associatedListTypeEntry_18396, var_associatedListElementTypeEntry_18490, temp_14.readProperty_mInsertModifierList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 548)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                       GALGAS_string & outArgument_outHeader,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_20206 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 573)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, var_selfTypeDefinition_20206.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 576)) COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 574))) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_20206.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 580)), var_selfTypeDefinition_20206.readProperty_isConcrete (), var_selfTypeDefinition_20206.readProperty_initializerMap (), var_selfTypeDefinition_20206.readProperty_classFunctionMap (), var_selfTypeDefinition_20206.readProperty_getterMap (), var_selfTypeDefinition_20206.readProperty_setterMap (), var_selfTypeDefinition_20206.readProperty_instanceMethodMap (), var_selfTypeDefinition_20206.readProperty_classMethodMap (), var_selfTypeDefinition_20206.readProperty_readSubscriptMap (), var_selfTypeDefinition_20206.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_20206.readProperty_features (), var_selfTypeDefinition_20206.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_20206.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_20206.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 578))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 578)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outImplementation,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_graphDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 603)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 604)) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedListElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 605)) ;
  const GALGAS_graphDeclarationForGeneration temp_3 = this ;
  const GALGAS_graphDeclarationForGeneration temp_4 = this ;
  const GALGAS_graphDeclarationForGeneration temp_5 = this ;
  const GALGAS_graphDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 608)), temp_5.readProperty_mAssociatedListTypeEntry (), temp_6.readProperty_mInsertModifierList () COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 606))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@listDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_listDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_listDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("list @").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 134)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                              GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listDeclarationAST temp_0 = this ;
  const GALGAS_listDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_5458 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 147)), temp_1.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_listDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5458, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 148)) ;
  }
  const GALGAS_listDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5612 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_5612.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_5612.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 150)), enumerator_5612.current_typeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-list.galgas", 150)) ;
    }
    enumerator_5612.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInSemanticContext (GALGAS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                        const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typedPropertyList var_typedAttributeList_6563 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_6660 (temp_0.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_6660.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_6660.current_initialization (HERE).getter_isSome (SOURCE_FILE ("declaration-type-list.galgas", 170)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_6660.current_name (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a list"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 171)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_6875 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6660.current_typeName (HERE), var_attributeTypeIndex_6875, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 173)) ;
    }
    var_typedAttributeList_6563.addAssign_operation (var_attributeTypeIndex_6875, enumerator_6660.current_name (HERE), enumerator_6660.current_initialization (HERE), GALGAS_bool (true), enumerator_6660.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 174)) ;
    enumerator_6660.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_uintType_7090 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("uint"), var_uintType_7090, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 177)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listTypeIndex_7171 ;
  {
  const GALGAS_listDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mListTypeName (), var_listTypeIndex_7171, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 179)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_7321 ;
  {
  const GALGAS_listDeclarationAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_4.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 182)), var_listElementTypeIndex_7321, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 181)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_7405 = GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_7457 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_7523 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_7591 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  cEnumerator_typedPropertyList enumerator_7670 (var_typedAttributeList_6563, EnumerationOrder::up) ;
  while (enumerator_7670.hasCurrentObject ()) {
    GALGAS_string temp_5 ;
    const enumGalgasBool test_6 = enumerator_7670.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_6) {
      temp_5 = enumerator_7670.current_name (HERE).readProperty_string () ;
    }else if (kBoolFalse == test_6) {
      temp_5 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_selector_7717 = temp_5 ;
    var_enumerationDescriptor_7405.addAssign_operation (enumerator_7670.current_typeEntry (HERE), enumerator_7670.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 192)) ;
    var_constructorAttributeTypeList_7457.addAssign_operation (var_selector_7717.getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas", 194)), enumerator_7670.current_typeEntry (HERE), enumerator_7670.current_name (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 193)) ;
    var_setterOutputFormalArgumentList_7523.addAssign_operation (var_selector_7717.getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas", 199)), enumerator_7670.current_typeEntry (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-list.galgas", 201)), enumerator_7670.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 198)) ;
    var_setterInputFormalArgumentList_7591.addAssign_operation (var_selector_7717.getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas", 204)), enumerator_7670.current_typeEntry (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas", 206)), enumerator_7670.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 203)) ;
    enumerator_7670.gotoNextObject () ;
  }
  GALGAS_classFunctionMap var_classFunctionMap_8314 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_listDeclarationAST temp_7 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_8314, ioArgument_ioTypeMap, GALGAS_string ("emptyList"), temp_7.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 211)) ;
  }
  {
  var_classFunctionMap_8314.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("listWithValue"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 219)), inCompiler COMMA_HERE), var_constructorAttributeTypeList_7457, GALGAS_bool (false), var_listTypeIndex_7171, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 218)) ;
  }
  GALGAS_getterMap var_getterMap_8730 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_8730, inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 225)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8730, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 226)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8730, ioArgument_ioTypeMap, GALGAS_string ("range"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 234)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_8 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8730, ioArgument_ioTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_8.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 242)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_9 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8730, ioArgument_ioTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_9.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 250)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_10 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8730, ioArgument_ioTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_string ("inRange"), temp_10.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 258)) ;
  }
  cEnumerator_typedPropertyList enumerator_9873 (var_typedAttributeList_6563, EnumerationOrder::up) ;
  while (enumerator_9873.hasCurrentObject ()) {
    {
    GALGAS_functionSignature temp_11 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 270)) ;
    temp_11.enterElement (GALGAS_functionSignature_2E_element::init_21__21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas", 270)), var_uintType_7090, GALGAS_string ("inIndex"), GALGAS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 270)) ;
    var_getterMap_8730.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (enumerator_9873.current_name (HERE).readProperty_string ().add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 268)), enumerator_9873.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 269)), temp_11, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 271)), GALGAS_bool (true), enumerator_9873.current_typeEntry (HERE), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 274)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas", 267)) ;
    }
    enumerator_9873.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_10358 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_instanceMethodMap_10358.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("first"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 281)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 282)), var_setterOutputFormalArgumentList_7523, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 284)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 286)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 280)) ;
  }
  {
  var_instanceMethodMap_10358.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("last"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 290)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 291)), var_setterOutputFormalArgumentList_7523, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 293)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 295)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 289)) ;
  }
  GALGAS_setterMap var_setterMap_10880 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  var_setterMap_10880.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("append"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 301)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 302)), var_setterInputFormalArgumentList_7591, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 305)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas", 300)) ;
  }
  {
  var_setterMap_10880.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("popFirst"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 309)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 310)), var_setterOutputFormalArgumentList_7523, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 313)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas", 308)) ;
  }
  {
  var_setterMap_10880.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("popLast"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 317)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 318)), var_setterOutputFormalArgumentList_7523, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 321)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas", 316)) ;
  }
  var_setterOutputFormalArgumentList_7523.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas", 324)), var_uintType_7090, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas", 324)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 324)) ;
  {
  var_setterMap_10880.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("removeAtIndex"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 326)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 327)), var_setterOutputFormalArgumentList_7523, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 330)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas", 325)) ;
  }
  cEnumerator_typedPropertyList enumerator_11825 (var_typedAttributeList_6563, EnumerationOrder::up) ;
  while (enumerator_11825.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = enumerator_11825.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_formalParameterSignature var_setterFormalArgumentList_11886 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        var_setterFormalArgumentList_11886.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas", 336)), enumerator_11825.current_typeEntry (HERE), GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas", 336)), enumerator_11825.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 336)) ;
        var_setterFormalArgumentList_11886.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas", 337)), var_uintType_7090, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas", 337)), enumerator_11825.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 337)) ;
        {
        var_setterMap_10880.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("set").add_operation (enumerator_11825.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("declaration-type-list.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 339)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 339)), enumerator_11825.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 340)), var_setterFormalArgumentList_11886, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 343)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas", 338)) ;
        }
      }
    }
    enumerator_11825.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_7591.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas", 349)), var_uintType_7090, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas", 349)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 349)) ;
  {
  var_setterMap_10880.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("insertAtIndex"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 351)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 352)), var_setterInputFormalArgumentList_7591, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 355)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas", 350)) ;
  }
  GALGAS_initializerMap var_initializerMap_12920 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_emptyArgumentList_12965 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_listDeclarationAST temp_13 = this ;
  var_initializerMap_12920.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_12965, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 362)), temp_13.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_12965, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 361)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_14 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mListTypeName (), GALGAS_bool (false), var_initializerMap_12920, var_getterMap_8730, var_setterMap_10880, var_instanceMethodMap_10358, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 366)) ;
  }
  GALGAS_typeFeatures var_features_13549 = GALGAS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-list.galgas", 382)).operator_or (GALGAS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-list.galgas", 382)) COMMA_SOURCE_FILE ("declaration-type-list.galgas", 382)).operator_or (GALGAS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-list.galgas", 382)) COMMA_SOURCE_FILE ("declaration-type-list.galgas", 382)) ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    const GALGAS_listDeclarationAST temp_16 = this ;
    test_15 = temp_16.readProperty_equatable ().boolEnum () ;
    if (kBoolTrue == test_15) {
      var_features_13549.orAssign_operation(GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-list.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 384)) ;
    }
  }
  {
  const GALGAS_listDeclarationAST temp_17 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_17.readProperty_mListTypeName (), var_features_13549, GALGAS_bool (true), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 386)) ;
  }
  const GALGAS_listDeclarationAST temp_18 = this ;
  const GALGAS_listDeclarationAST temp_19 = this ;
  const GALGAS_listDeclarationAST temp_20 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_13914 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_18.readProperty_mListTypeName (), temp_19.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-list.galgas", 398)), GALGAS_typeKindEnum::class_func_listType (SOURCE_FILE ("declaration-type-list.galgas", 399)), GALGAS_bool (true), var_typedAttributeList_6563, GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_12920, var_classFunctionMap_8314, var_getterMap_8730, var_setterMap_10880, var_instanceMethodMap_10358, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-list.galgas", 410)), GALGAS_subscriptMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_7405, var_features_13549, var_constructorAttributeTypeList_7457, GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_listElementTypeIndex_7321, GALGAS_string ("list-").add_operation (temp_20.readProperty_mListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-list.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 418)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-list.galgas", 419)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_13914.readProperty_typeName (), var_typeDefinition_13914, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 421)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_addAssociatedElement (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_15217 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_15305 (temp_0.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_15305.hasCurrentObject ()) {
    var_structAttributeList_15217.addAssign_operation (enumerator_15305.current_isConstant (HERE), enumerator_15305.current_typeName (HERE), enumerator_15305.current_name (HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-list.galgas", 434)), enumerator_15305.current_hasSelector (HERE), enumerator_15305.current_initialization (HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 430)) ;
    enumerator_15305.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  const GALGAS_listDeclarationAST temp_2 = this ;
  const GALGAS_listDeclarationAST temp_3 = this ;
  GALGAS_structComparison temp_4 ;
  const enumGalgasBool test_5 = temp_3.readProperty_equatable ().boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-list.galgas", 443)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-list.galgas", 443)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefull (temp_1.readProperty_isPredefined (), function_makeEmbeddedElementTypeLName (temp_2.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 440)), var_structAttributeList_15217, GALGAS_string::makeEmptyString (), temp_4, GALGAS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 438)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_16542 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 463)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16542, var_nameForUsefulness_16542, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 464)) ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_16695 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_1.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 465)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16542, var_elementTypeNameForUsefulness_16695 COMMA_SOURCE_FILE ("declaration-type-list.galgas", 466)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_listDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_usefullList ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_16542  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 468)) ;
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_17010 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_propertyIndexMap var_attributeMap_17058 = GALGAS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_listDeclarationAST temp_4 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_17148 (temp_4.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_17148.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = enumerator_17148.current_initialization (HERE).getter_isSome (SOURCE_FILE ("declaration-type-list.galgas", 474)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_17148.current_name (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a list"), fixItArray6  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 475)) ;
      }
    }
    GALGAS_lstring var_propertyTypeNameForUsefulness_17320 = function_typeNameForUsefulEntitiesGraph (enumerator_17148.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 477)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16542, var_propertyTypeNameForUsefulness_17320 COMMA_SOURCE_FILE ("declaration-type-list.galgas", 478)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_17499 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_17148.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 479)) ;
    var_typedAttributeList_17010.addAssign_operation (var_t_17499, enumerator_17148.current_name (HERE), enumerator_17148.current_initialization (HERE), GALGAS_bool (true), enumerator_17148.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 480)) ;
    {
    var_attributeMap_17058.setter_insertKey (enumerator_17148.current_name (HERE), var_t_17499, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 486)) ;
    }
    enumerator_17148.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_7 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_17767 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_7.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 489)) ;
  const GALGAS_listDeclarationAST temp_8 = this ;
  const GALGAS_listDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (temp_8.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 491)), GALGAS_listTypeForGeneration::init_21__21__21_ (var_selfType_17767, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_9.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 494)), var_typedAttributeList_17010, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 490)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'listGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

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


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'listGenerationTemplate listTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (Compiler * inCompiler,
                                                                             const GALGAS_string & in_TYPE_5F_NAME,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_list {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- List constructor used by listmap\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const capCollectionElementArray & inSharedArray) ;\n\n//--------------------------------- Element constructor\n  public: static void makeAttributesFromObjects (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("capCollectionElement & outAttributes") ;
  GALGAS_uint index_781_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_781 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_781.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const class GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_781.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_781.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue ()) ;
      index_781_.increment () ;
      enumerator_781.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'listGenerationTemplate listTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (Compiler * inCompiler,
                                                                                         const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                         const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_bool & in_GENERATE_5F_COMPARISON
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cCollectionElement {\n  public: GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" mObject ;\n\n//--- Class functions\n  public: cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_537_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_537 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_537.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_537.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_537.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue ()) ;
      if (enumerator_537.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_537_.increment () ;
      enumerator_537.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n  public: cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method for comparing elements\n") ;
  const enumGalgasBool test_0 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cCollectionElement * copy (void) ;\n\n//--- Description\n  public: virtual void description (String & ioString, const int32_t inIndentation) const ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1587_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1587 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1587.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1587.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 38)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_1587.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 38)).stringValue ()) ;
      if (enumerator_1587.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1587_.increment () ;
      enumerator_1587.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (") ;
  GALGAS_uint index_1839_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1839 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1839.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1839.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 46)).stringValue ()) ;
      if (enumerator_1839.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_1839_.increment () ;
      enumerator_1839.gotoNextObject () ;
    }
  }
  result.appendString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (") ;
  GALGAS_uint index_2253_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2253 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2253.hasCurrentObject ()) {
      result.appendString ("inElement.mProperty_") ;
      result.appendString (enumerator_2253.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 58)).stringValue ()) ;
      if (enumerator_2253.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_2253_.increment () ;
      enumerator_2253.gotoNextObject () ;
    }
  }
  result.appendString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return true ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement * cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copy (void) {\n  cCollectionElement * result = nullptr ;\n  macroMyNew (result, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_2883_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2883 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2883.hasCurrentObject ()) {
      result.appendString ("mObject.mProperty_") ;
      result.appendString (enumerator_2883.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 76)).stringValue ()) ;
      if (enumerator_2883.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_2883_.increment () ;
      enumerator_2883.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_HERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString, const int32_t inIndentation) const {\n") ;
  GALGAS_uint index_3291_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3291 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3291.hasCurrentObject ()) {
      result.appendString ("  ioString.appendNewLine () ;\n  ioString.appendStringMultiple (\"| \", inIndentation) ;\n  ioString.appendCString (") ;
      result.appendString (enumerator_3291.current_name (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 90)).stringValue ()) ;
      result.appendString (" \":\") ;\n  mObject.mProperty_") ;
      result.appendString (enumerator_3291.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 91)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation) ;\n") ;
      index_3291_.increment () ;
      enumerator_3291.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n") ;
  const enumGalgasBool test_1 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult cCollectionElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::compare (const cCollectionElement * inOperand) const {\n  cCollectionElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * operand = (cCollectionElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" *) inOperand ;\n  macroValidSharedObject (operand, cCollectionElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (") ;\n  return mObject.objectCompare (operand->mObject) ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_list () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const capCollectionElementArray & inSharedArray) :\nAC_GALGAS_list (inSharedArray) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyList (UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (capCollectionElementArray ()) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (capCollectionElementArray ()) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::enterElement (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  cCollectionElement * p = nullptr ;\n  macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inValue COMMA_THERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  appendObject (attributes) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_listWithValue (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5850_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5850 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5850.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_5850.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 147)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_5850_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 147)).stringValue ()) ;
      if (enumerator_5850.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5850_IDX.increment () ;
      enumerator_5850.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (") ;
  GALGAS_uint index_6110_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6110 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6110.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_6110_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 154)).stringValue ()) ;
      result.appendString (".isValid ()") ;
      if (enumerator_6110.hasNextObject ()) {
        result.appendString (" && ") ;
      }
      index_6110_IDX.increment () ;
      enumerator_6110.gotoNextObject () ;
    }
  }
  result.appendString (") {\n    result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (capCollectionElementArray ()) ;\n    capCollectionElement attributes ;\n    GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::makeAttributesFromObjects (attributes") ;
  GALGAS_uint index_6433_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6433 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6433.hasCurrentObject ()) {
      result.appendString (", inOperand") ;
      result.appendString (index_6433_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 162)).stringValue ()) ;
      index_6433_IDX.increment () ;
      enumerator_6433.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE) ;\n    result.appendObject (attributes) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::makeAttributesFromObjects (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("capCollectionElement & outAttributes") ;
  GALGAS_uint index_6825_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6825 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6825.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6825.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 174)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_6825.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 174)).stringValue ()) ;
      index_6825_.increment () ;
      enumerator_6825.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n  macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7161_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7161 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7161.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_7161.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 181)).stringValue ()) ;
      if (enumerator_7161.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7161_.increment () ;
      enumerator_7161.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n  outAttributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7549_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7549 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7549.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7549.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_7549_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 193)).stringValue ()) ;
      if (enumerator_7549.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7549_IDX.increment () ;
      enumerator_7549.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cCollectionElement * p = nullptr ;\n    macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_7887_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7887 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7887.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_7887_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 201)).stringValue ()) ;
      if (enumerator_7887.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_7887_IDX.increment () ;
      enumerator_7887.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n    capCollectionElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_append (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8326_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8326 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8326.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_8326.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 216)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_8326_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 216)).stringValue ()) ;
      result.appendString (",") ;
      if (enumerator_8326.hasNextObject ()) {
        result.appendString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_8326_IDX.increment () ;
      enumerator_8326.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    cCollectionElement * p = nullptr ;\n    macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_8702_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8702 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8702.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_8702_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 225)).stringValue ()) ;
      if (enumerator_8702.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_8702_IDX.increment () ;
      enumerator_8702.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n    capCollectionElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    appendObject (attributes) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insertAtIndex (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9146_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9146 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9146.hasCurrentObject ()) {
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_9146.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 240)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_9146_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 240)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9146_IDX.increment () ;
      enumerator_9146.gotoNextObject () ;
    }
  }
  result.appendString ("const GALGAS_uint inInsertionIndex,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inInsertionIndex.isValid ()) {\n    cCollectionElement * p = nullptr ;\n    macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_9581_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9581 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9581.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_9581_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 249)).stringValue ()) ;
      if (enumerator_9581.hasNextObject ()) {
        result.appendString (", ") ;
      }
      index_9581_IDX.increment () ;
      enumerator_9581.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n    capCollectionElement attributes ;\n    attributes.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeAtIndex (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10093_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10093 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10093.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_10093.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 264)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_10093_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 264)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10093_IDX.increment () ;
      enumerator_10093.gotoNextObject () ;
    }
  }
  result.appendString ("const GALGAS_uint inRemoveIndex,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
  GALGAS_uint index_10363_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10363 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10363.hasCurrentObject ()) {
      result.appendString ("  outOperand") ;
      result.appendString (index_10363_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 271)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_10363_IDX.increment () ;
      enumerator_10363.gotoNextObject () ;
    }
  }
  result.appendString ("  if (isValid () && inRemoveIndex.isValid ()) {\n    capCollectionElement attributes ;\n    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;\n    cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n    if (nullptr == p) {\n      drop () ;\n    }else{\n      macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_10899_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10899 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10899.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_10899_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 283)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_10899.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 283)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_10899_IDX.increment () ;
      enumerator_10899.gotoNextObject () ;
    }
  }
  result.appendString ("    }\n  }else{\n    drop () ;    \n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popFirst (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11281_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11281 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11281.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_11281.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 295)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_11281_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 295)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11281_IDX.increment () ;
      enumerator_11281.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  removeFirstObject (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_11727_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11727 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11727.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_11727_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 305)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_11727_IDX.increment () ;
      enumerator_11727.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_11934_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11934 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11934.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_11934_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 311)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_11934.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 311)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_11934_IDX.increment () ;
      enumerator_11934.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popLast (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12280_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12280 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12280.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_12280.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 320)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_12280_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 320)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_12280_IDX.increment () ;
      enumerator_12280.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  capCollectionElement attributes ;\n  removeLastObject (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_12725_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12725 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12725.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12725_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 330)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_12725_IDX.increment () ;
      enumerator_12725.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_12932_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12932 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12932.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12932_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 336)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_12932.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 336)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_12932_IDX.increment () ;
      enumerator_12932.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_first (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_13276_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13276 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13276.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_13276.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 345)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_13276_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 345)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_13276_IDX.increment () ;
      enumerator_13276.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes ;\n  readFirst (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_13720_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13720 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13720.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_13720_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 355)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_13720_IDX.increment () ;
      enumerator_13720.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_13927_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13927 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13927.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_13927_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 361)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_13927.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 361)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_13927_IDX.increment () ;
      enumerator_13927.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_last (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_14270_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14270 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14270.hasCurrentObject ()) {
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_14270.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_14270_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_14270_IDX.increment () ;
      enumerator_14270.gotoNextObject () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes ;\n  readLast (attributes, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_14713_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14713 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14713.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_14713_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 380)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_14713_IDX.increment () ;
      enumerator_14713.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_14920_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14920 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14920.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_14920_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 386)).stringValue ()) ;
      result.appendString (" = p->mObject.mProperty_") ;
      result.appendString (enumerator_14920.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 386)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_14920_IDX.increment () ;
      enumerator_14920.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::add_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n                                            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                                            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = *this ;\n    result.appendList (inOperand) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subListWithRange (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_range & inRange,\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyList (THERE) ;\n  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subListFromIndex (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_uint & inIndex,\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyList (THERE) ;\n  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subListToIndex (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_uint & inIndex,\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                                               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyList (THERE) ;\n  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  appendList (inOperand) ;\n}\n\n") ;
  GALGAS_uint index_17646_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17646 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_17646.hasCurrentObject ()) {
      const enumGalgasBool test_2 = enumerator_17646.current_hasSetter (HERE).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setter_set") ;
        result.appendString (enumerator_17646.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).stringValue ()) ;
        result.appendString ("AtIndex (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_17646.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).stringValue ()) ;
        result.appendString (" inOperand,\n                                              ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("GALGAS_uint inIndex,\n                                              ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("Compiler * inCompiler\n                                              ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) {\n  cCollectionElement_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" * p = (cCollectionElement_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cCollectionElement_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (") ;\n    macroUniqueSharedObject (p) ;\n    p->mObject.mProperty_") ;
        result.appendString (enumerator_17646.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 454)).stringValue ()) ;
        result.appendString (" = inOperand ;\n  }\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_17646.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 460)).stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_17646.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 460)).stringValue ()) ;
      result.appendString ("AtIndex (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("const GALGAS_uint & inIndex,\n                                              ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n                                              ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;\n  cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) attributes.ptr () ;\n  GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_17646.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 465)).stringValue ()) ;
      result.appendString (" result ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    result = p->mObject.mProperty_") ;
      result.appendString (enumerator_17646.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 468)).stringValue ()) ;
      result.appendString (" ;\n  }\n  return result ;\n}\n\n") ;
      index_17646_IDX.increment () ;
      enumerator_17646.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_") ;
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
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  return p->mObject ;\n}\n\n\n") ;
  GALGAS_uint index_20496_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20496 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_20496.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_20496.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 494)).stringValue ()) ;
      result.appendString (" cEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_20496.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 494)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  return p->mObject.mProperty_") ;
      result.appendString (enumerator_20496.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 497)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_20496_IDX.increment () ;
      enumerator_20496.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GALGAS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_19335 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 532)) ;
  const GALGAS_listTypeForGeneration temp_1 = this ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, var_selfTypeDefinition_19335.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 535)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("declaration-type-list.galgas", 533))) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_19335.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 540)), var_selfTypeDefinition_19335.readProperty_isConcrete (), var_selfTypeDefinition_19335.readProperty_initializerMap (), var_selfTypeDefinition_19335.readProperty_classFunctionMap (), var_selfTypeDefinition_19335.readProperty_getterMap (), var_selfTypeDefinition_19335.readProperty_setterMap (), var_selfTypeDefinition_19335.readProperty_instanceMethodMap (), var_selfTypeDefinition_19335.readProperty_classMethodMap (), var_selfTypeDefinition_19335.readProperty_readSubscriptMap (), var_selfTypeDefinition_19335.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_19335.readProperty_features (), var_selfTypeDefinition_19335.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_19335.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_19335.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-list.galgas", 538))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 538)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_listTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_20705 (temp_0.readProperty_mTypedAttributeList (), EnumerationOrder::up) ;
  while (enumerator_20705.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_20705.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 564)) ;
    enumerator_20705.gotoNextObject () ;
  }
  const GALGAS_listTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 566)) ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 567)) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_20919 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 568)) ;
  const GALGAS_listTypeForGeneration temp_4 = this ;
  const GALGAS_listTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_20919.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 571)), temp_5.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (var_selfTypeDefinition_20919.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 573)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_20919.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 574)) COMMA_SOURCE_FILE ("declaration-type-list.galgas", 569))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dictDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_dictDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_dictDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("dict @").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 32)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_addAssociatedElement (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_4558 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  const GALGAS_dictDeclarationAST temp_0 = this ;
  var_structAttributeList_4558.addAssign_operation (GALGAS_bool (true), temp_0.readProperty_mKeyTypeName (), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 131)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-dict.galgas", 132)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-dict.galgas", 134))  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 128)) ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_4798 (temp_1.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_4798.hasCurrentObject ()) {
    var_structAttributeList_4558.addAssign_operation (GALGAS_bool (true), enumerator_4798.current_typeName (HERE), enumerator_4798.current_name (HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-dict.galgas", 140)), enumerator_4798.current_hasSelector (HERE), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-dict.galgas", 142))  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 136)) ;
    enumerator_4798.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeName_5016 = function_makeEmbeddedElementTypeLName (temp_2.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 144)) ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  GALGAS_structComparison temp_5 ;
  const enumGalgasBool test_6 = temp_4.readProperty_equatable ().boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-dict.galgas", 150)) ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-dict.galgas", 150)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefull (temp_3.readProperty_isPredefined (), var_elementTypeName_5016, var_structAttributeList_4558, GALGAS_string::makeEmptyString (), temp_5, GALGAS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 145)) ;
  {
  GALGAS_lstring joker_5424 ; // Joker input parameter
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_5424, var_elementTypeName_5016, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 154)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                              GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  GALGAS_lstring var_dictionary_6320 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 170)), temp_1.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_dictDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_dictionary_6320, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 171)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_3 = this ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 172)), temp_4.readProperty_mKeyTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 172)) ;
  }
  const GALGAS_dictDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_6581 (temp_5.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_6581.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_6581.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 174)), enumerator_6581.current_typeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 174)) ;
    }
    enumerator_6581.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_enterDeclarationInSemanticContext (GALGAS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                        const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_keyTypeIndex_7546 ;
  {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_0.readProperty_mKeyTypeName ().readProperty_string (), var_keyTypeIndex_7546, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 191)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_7595 = GALGAS_enumerationDescriptorList::class_func_listWithValue (var_keyTypeIndex_7546, GALGAS_string ("key")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 193)) ;
  GALGAS_classFunctionMap var_classFunctionMap_7712 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_getterMap var_getterMap_7792 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_7792, inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 196)) ;
  }
  GALGAS_setterMap var_setterMap_7821 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_7861 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_dictDeclarationAST temp_1 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_7712, ioArgument_ioTypeMap, GALGAS_string ("emptyDict"), temp_1.readProperty_mDictTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 200)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_2 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7792, ioArgument_ioTypeMap, GALGAS_string ("hasKey"), GALGAS_string::makeEmptyString (), temp_2.readProperty_mKeyTypeName ().readProperty_string (), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 208)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7792, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 216)) ;
  }
  GALGAS_formalParameterSignature var_insertSetterFormalArgumentList_8551 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_typedPropertyList var_typedPropertyList_8612 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_8660 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_8660.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 228)), var_keyTypeIndex_7546, GALGAS_string ("key"), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 228)) ;
  var_insertSetterFormalArgumentList_8551.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 230)), var_keyTypeIndex_7546, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dict.galgas", 232)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 229)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_8957 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_removeMethodFormalArgumentList_8957.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 236)), var_keyTypeIndex_7546, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dict.galgas", 238)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 235)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_9134 = GALGAS_optionalMethodSignature::init (inCompiler COMMA_HERE) ;
  var_optionalMethodSignature_9134.addAssign_operation (GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 243)), var_keyTypeIndex_7546, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 241)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_9257 = GALGAS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_9356 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_9356.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_9439 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_9356.current_typeName (HERE), var_attributeTypeIndex_9439, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 248)) ;
    }
    GALGAS_bool var_hasSetter_9467 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_9492 = GALGAS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_8660.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 251)), var_attributeTypeIndex_9439, enumerator_9356.current_name (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 251)) ;
    var_typedPropertyList_8612.addAssign_operation (var_attributeTypeIndex_9439, enumerator_9356.current_name (HERE), enumerator_9356.current_initialization (HERE), var_hasSetter_9467, var_hasSelector_9492  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 252)) ;
    var_typesToIncludeInHeaderCompilation_9257.addAssign_operation (var_attributeTypeIndex_9439  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 253)) ;
    var_enumerationDescriptor_7595.addAssign_operation (var_attributeTypeIndex_9439, enumerator_9356.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 254)) ;
    var_insertSetterFormalArgumentList_8551.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 256)), var_attributeTypeIndex_9439, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dict.galgas", 258)), enumerator_9356.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 255)) ;
    var_removeMethodFormalArgumentList_8957.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 261)), var_attributeTypeIndex_9439, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-dict.galgas", 263)), enumerator_9356.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 260)) ;
    var_optionalMethodSignature_9134.addAssign_operation (GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 267)), var_attributeTypeIndex_9439, enumerator_9356.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 265)) ;
    enumerator_9356.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_4 = this ;
  var_setterMap_7821.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("insert"), temp_4.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dict.galgas", 274)), var_insertSetterFormalArgumentList_8551, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dict.galgas", 277)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 272)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_5 = this ;
  var_setterMap_7821.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("removeKey"), temp_5.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dict.galgas", 283)), var_removeMethodFormalArgumentList_8957, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dict.galgas", 286)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 281)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_6 = this ;
  const GALGAS_dictDeclarationAST temp_7 = this ;
  var_instanceMethodMap_7861.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("searchKey"), temp_6.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dict.galgas", 292)), var_removeMethodFormalArgumentList_8957, temp_7.readProperty_mDictTypeName ().readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dict.galgas", 296)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 290)) ;
  }
  const GALGAS_dictDeclarationAST temp_8 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11195 (temp_8.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_11195.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_11231 = GALGAS_lstring::init_21__21_ (enumerator_11195.current_name (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 301)), enumerator_11195.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_11357 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11195.current_typeName (HERE), var_attributeTypeIndex_11357, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 302)) ;
    }
    {
    GALGAS_functionSignature temp_9 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 306)) ;
    temp_9.enterElement (GALGAS_functionSignature_2E_element::init_21__21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 306)), var_keyTypeIndex_7546, GALGAS_string ("inKey"), GALGAS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 306)) ;
    var_getterMap_7792.setter_insertOrReplace (var_accessorName_11231, GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dict.galgas", 305)), temp_9, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 307)), GALGAS_bool (true), var_attributeTypeIndex_11357, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dict.galgas", 310)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 303)) ;
    }
    enumerator_11195.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_10 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11782 (temp_10.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_11782.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_11818 = GALGAS_lstring::init_21__21_ (GALGAS_string ("set").add_operation (enumerator_11782.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("declaration-type-dict.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 317)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 317)), enumerator_11782.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_12039 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11782.current_typeName (HERE), var_attributeTypeIndex_12039, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 320)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_12072 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    var_accessorFormalArgumentList_12072.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 325)), var_attributeTypeIndex_12039, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dict.galgas", 325)), enumerator_11782.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 325)) ;
    var_accessorFormalArgumentList_12072.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 326)), var_keyTypeIndex_7546, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dict.galgas", 326)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 326)) ;
    {
    var_setterMap_7821.setter_insertOrReplace (var_accessorName_11818, GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dict.galgas", 329)), var_accessorFormalArgumentList_12072, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dict.galgas", 332)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 327)) ;
    }
    enumerator_11782.gotoNextObject () ;
  }
  GALGAS_initializerMap var_initializerMap_12598 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_emptyArgumentList_12643 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_dictDeclarationAST temp_11 = this ;
  var_initializerMap_12598.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_12643, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 340)), temp_11.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_12643, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 339)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_12 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_12.readProperty_mDictTypeName (), GALGAS_bool (false), var_initializerMap_12598, var_getterMap_7792, var_setterMap_7821, var_instanceMethodMap_7861, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 344)) ;
  }
  const GALGAS_dictDeclarationAST temp_13 = this ;
  GALGAS_lstring var_elementTypeName_13237 = function_makeEmbeddedElementTypeLName (temp_13.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 360)) ;
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_13382 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_elementTypeName_13237, var_elementTypeEntry_13382, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 361)) ;
  }
  GALGAS_typeFeatures var_features_13423 = GALGAS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-dict.galgas", 366)).operator_or (GALGAS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("declaration-type-dict.galgas", 366)) COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 366)) ;
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_dictDeclarationAST temp_15 = this ;
    test_14 = temp_15.readProperty_equatable ().boolEnum () ;
    if (kBoolTrue == test_14) {
      var_features_13423.orAssign_operation(GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-dict.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 368)) ;
    }
  }
  {
  const GALGAS_dictDeclarationAST temp_16 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_16.readProperty_mDictTypeName (), var_features_13423, GALGAS_bool (true), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 370)) ;
  }
  GALGAS_lstring var_optionalElementTypeName_13792 = function_makeOptionalTypeLName (var_elementTypeName_13237, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 378)) ;
  GALGAS_unifiedTypeMapEntry var_optionalElementTypeEntry_13957 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_optionalElementTypeName_13792, var_optionalElementTypeEntry_13957, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 379)) ;
  }
  GALGAS_subscriptMap var_readSubscriptMap_14027 = GALGAS_subscriptMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature temp_17 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 385)) ;
  temp_17.enterElement (GALGAS_functionSignature_2E_element::init_21__21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 385)), var_keyTypeIndex_7546, GALGAS_string ("inKey"), GALGAS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 385)) ;
  GALGAS_functionSignature var_argumentTypeList_14074 = temp_17 ;
  {
  var_readSubscriptMap_14027.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_argumentTypeList_14074, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 387)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 387)), inCompiler COMMA_HERE), var_argumentTypeList_14074, var_optionalElementTypeEntry_13957, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 386)) ;
  }
  const GALGAS_dictDeclarationAST temp_18 = this ;
  const GALGAS_dictDeclarationAST temp_19 = this ;
  const GALGAS_dictDeclarationAST temp_20 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_14323 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_18.readProperty_mDictTypeName (), temp_19.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dict.galgas", 396)), GALGAS_typeKindEnum::class_func_mapType (SOURCE_FILE ("declaration-type-dict.galgas", 397)), GALGAS_bool (true), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), var_typedPropertyList_8612, var_initializerMap_12598, var_classFunctionMap_7712, var_getterMap_7792, var_setterMap_7821, var_instanceMethodMap_7861, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dict.galgas", 408)), var_readSubscriptMap_14027, var_enumerationDescriptor_7595, var_features_13423, var_argumentTypeListForAddAssignWithFieldExpressionList_8660, GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_elementTypeEntry_13382, GALGAS_string ("dict-").add_operation (temp_20.readProperty_mDictTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-dict.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 416)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-dict.galgas", 417)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14323.readProperty_typeName (), var_typeDefinition_14323, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 419)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters_3F_ (const GALGAS_lstring constinArgument_inString,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_15806 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 427)), EnumerationOrder::up) ;
  while (enumerator_15806.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_15831 = enumerator_15806.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 428)) ;
    {
    GALGAS_string joker_15930 ; // Joker input parameter
    var_explodedArray_15831.setter_popFirst (joker_15930, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 429)) ;
    }
    cEnumerator_stringlist enumerator_15943 (var_explodedArray_15831, EnumerationOrder::up) ;
    while (enumerator_15943.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_15943.current_mValue (HERE).getter_count (SOURCE_FILE ("declaration-type-dict.galgas", 431)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_16022 = enumerator_15943.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 432)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (ComparisonKind::notEqual, var_c_16022.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 434)) ;
            }
          }
        }
      }
      enumerator_15943.gotoNextObject () ;
    }
    enumerator_15806.gotoNextObject () ;
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
  cEnumerator_stringlist enumerator_16494 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 444)), EnumerationOrder::up) ;
  while (enumerator_16494.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_16519 = enumerator_16494.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 445)) ;
    {
    GALGAS_string joker_16618 ; // Joker input parameter
    var_explodedArray_16519.setter_popFirst (joker_16618, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 446)) ;
    }
    cEnumerator_stringlist enumerator_16631 (var_explodedArray_16519, EnumerationOrder::up) ;
    while (enumerator_16631.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_16631.current_mValue (HERE).getter_count (SOURCE_FILE ("declaration-type-dict.galgas", 448)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_16710 = enumerator_16631.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 449)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (ComparisonKind::notEqual, var_c_16710.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_c_16710.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 450)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 451)) ;
            }
          }
        }
      }
      enumerator_16631.gotoNextObject () ;
    }
    enumerator_16494.gotoNextObject () ;
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
  result_result = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 462)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 463)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 464)) ;
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
  GALGAS_unifiedTypeMapEntry var_keyType_17735 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mKeyTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 479)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_keyType_17735, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 480)).readProperty_features ().getter_contains (GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-dict.galgas", 480)) COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 480)).operator_not (SOURCE_FILE ("declaration-type-dict.galgas", 480)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_dictDeclarationAST temp_2 = this ;
      const GALGAS_dictDeclarationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mKeyTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 481)).add_operation (GALGAS_string (" type is not comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 481)), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 481)) ;
    }
  }
  const GALGAS_dictDeclarationAST temp_5 = this ;
  GALGAS_lstring var_nameForUsefulness_17989 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 484)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17989, var_nameForUsefulness_17989, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 485)) ;
  }
  const GALGAS_dictDeclarationAST temp_6 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_18142 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_6.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 486)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17989, var_elementTypeNameForUsefulness_18142 COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 487)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_18393 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_propertyIndexMap var_attributeMap_18441 = GALGAS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_dictDeclarationAST temp_7 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_18505 (temp_7.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_18505.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_18554 = function_typeNameForUsefulEntitiesGraph (enumerator_18505.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 492)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17989, var_propertyTypeNameForUsefulness_18554 COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 493)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_18746 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_18505.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 494)) ;
    GALGAS_bool var_hasSetter_18800 = GALGAS_bool (true) ;
    var_typedAttributeList_18393.addAssign_operation (var_t_18746, enumerator_18505.current_name (HERE), enumerator_18505.current_initialization (HERE), var_hasSetter_18800, enumerator_18505.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 496)) ;
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 502)).getter_hasKey (enumerator_18505.current_name (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 502)).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_string var_m_19046 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_19123 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 504)), EnumerationOrder::up) ;
        while (enumerator_19123.hasCurrentObject ()) {
          var_m_19046.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_19123.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 505)) ;
          enumerator_19123.gotoNextObject () ;
        }
        var_m_19046.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 507)) ;
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_18505.current_name (HERE).readProperty_location (), var_m_19046, fixItArray9  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 508)) ;
      }
    }
    {
    var_attributeMap_18441.setter_insertKey (enumerator_18505.current_name (HERE), var_t_18746, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 510)) ;
    }
    enumerator_18505.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_10 = this ;
  GALGAS_lstring var_elementTypeName_19330 = function_makeEmbeddedElementTypeLName (temp_10.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 513)) ;
  GALGAS_lstring var_optionalElementTypeName_19405 = function_makeOptionalTypeLName (var_elementTypeName_19330, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 514)) ;
  GALGAS_unifiedTypeMapEntry var_optionalElementTypeEntry_19492 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_optionalElementTypeName_19405, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 515)) ;
  const GALGAS_dictDeclarationAST temp_11 = this ;
  const GALGAS_dictDeclarationAST temp_12 = this ;
  const GALGAS_dictDeclarationAST temp_13 = this ;
  const GALGAS_dictDeclarationAST temp_14 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("dict ").add_operation (temp_11.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 518)), GALGAS_dictTypeForGeneration::init_21__21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 520)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_elementTypeName_19330, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 521)), temp_13.readProperty_mDictTypeName (), var_typedAttributeList_18393, temp_14.readProperty_mKeyTypeName (), var_optionalElementTypeEntry_19492, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 517)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_20728 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 545)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_dictGenerationTemplate_dictTypeHeader_31_ (inCompiler, var_selfTypeDefinition_20728.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 548)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 546))) ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_20728.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 553)), var_selfTypeDefinition_20728.readProperty_isConcrete (), var_selfTypeDefinition_20728.readProperty_initializerMap (), var_selfTypeDefinition_20728.readProperty_classFunctionMap (), var_selfTypeDefinition_20728.readProperty_getterMap (), var_selfTypeDefinition_20728.readProperty_setterMap (), var_selfTypeDefinition_20728.readProperty_instanceMethodMap (), var_selfTypeDefinition_20728.readProperty_classMethodMap (), var_selfTypeDefinition_20728.readProperty_readSubscriptMap (), var_selfTypeDefinition_20728.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_20728.readProperty_features (), var_selfTypeDefinition_20728.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_20728.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_20728.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 551))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 551)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 576)) ;
  const GALGAS_dictTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mOptionalElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 577)) ;
  const GALGAS_dictTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 578)) ;
  const GALGAS_dictTypeForGeneration temp_3 = this ;
  const GALGAS_dictTypeForGeneration temp_4 = this ;
  const GALGAS_dictTypeForGeneration temp_5 = this ;
  const GALGAS_dictTypeForGeneration temp_6 = this ;
  const GALGAS_dictTypeForGeneration temp_7 = this ;
  const GALGAS_dictTypeForGeneration temp_8 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_dictGenerationTemplate_dictTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 580)), temp_4.readProperty_mTypedAttributeList (), temp_5.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-dict.galgas", 582)), extensionGetter_generateCppObjectComparison (extensionGetter_definition (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 583)).readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 583)), extensionGetter_identifierRepresentation (temp_7.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 584)), extensionGetter_identifierRepresentation (temp_8.readProperty_mOptionalElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 585)) COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 579))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'dictGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_dictGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_dictGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_dictGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_dictGenerationTemplate_0,
  0,
  gWrapperAllDirectories_dictGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'dictGenerationTemplate dictTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_dictGenerationTemplate_dictTypeHeader_31_ (Compiler * inCompiler,
                                                                             const GALGAS_string & in_TYPE_5F_NAME,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" dict"), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Attributes\n  private: cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mSharedDict ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--- isValid\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedDict != nullptr ; }\n\n//--- drop\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--- Implementation of reader 'description'\n  public: VIRTUAL_IN_DEBUG void description (String & ioString,\n                                             const int32_t inIndentation) const override ;\n\n//--- Insulate\n  private: void insulate (LOCATION_ARGS) ;\n\n//--- Object compare\n  public: VIRTUAL_IN_DEBUG ComparisonResult objectCompare (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const ;\n\n//--- Enumeration\n  public: void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'dictGenerationTemplate dictTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_dictGenerationTemplate_dictTypeSpecificImplementation (Compiler * inCompiler,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                         const GALGAS_string & in_KEY_5F_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_bool & in_GENERATE_5F_COMPARISON,
                                                                                         const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_string & in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nclass cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" {\n  public: cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mInfPtr ;\n  public: cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mSupPtr ;\n  public: int32_t mBalance ;\n\n  public: cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & in_key") ;
  GALGAS_uint index_455_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_455 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_455.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_455.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (" & inProperty_") ;
      result.appendString (enumerator_455.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 10)).stringValue ()) ;
      index_455_.increment () ;
      enumerator_455.gotoNextObject () ;
    }
  }
  result.appendString (") :\n  GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (in_key") ;
  GALGAS_uint index_687_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_687 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_687.hasCurrentObject ()) {
      result.appendString (", inProperty_") ;
      result.appendString (enumerator_687.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 15)).stringValue ()) ;
      index_687_.increment () ;
      enumerator_687.gotoNextObject () ;
    }
  }
  result.appendString ("),\n  mInfPtr (nullptr),\n  mSupPtr (nullptr),\n  mBalance (0) {\n  }\n\n  public: cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode) ;\n\n  public: cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n\n  public: cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("& operator = (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n\n  public: virtual ~ cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n    macroMyDelete (mInfPtr) ;\n    macroMyDelete (mSupPtr) ;\n  }\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public SharedObject {\n//--------------------------------- Attributes\n  private: cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * mRoot ;\n  private: uint32_t mCount ;\n\n//--------------------------------- Constructor\n  protected: cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (LOCATION_ARGS) :\n  SharedObject (THERE),\n  mRoot (nullptr),\n  mCount (0) {\n  }\n\n//--------------------------------- Virtual destructor\n  protected: virtual ~ cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n    macroMyDelete (mRoot) ;\n  }\n\n//--------------------------------- No copy\n  private: cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) ;\n  private: cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) ;\n\n//--------------------------------- Copy a map\n  protected: VIRTUAL_IN_DEBUG void copyFrom (const cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSource) ;\n\n//--------------------------------- Insert\n  protected: VIRTUAL_IN_DEBUG void performInsert (const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inNewNode,\n                                                  const bool inEntryOverrideAllowed) {\n    macroUniqueSharedObject (this) ;\n    bool extension = false ;\n    bool entryAlreadyInDict = false ;\n    recursiveAddEntry (mRoot, inNewNode, entryAlreadyInDict, extension, inEntryOverrideAllowed) ;\n    if (!entryAlreadyInDict) {\n      mCount ++ ;\n    }\n    #ifndef DO_NOT_GENERATE_CHECKINGS\n      checkDict (HERE) ;\n    #endif\n  }\n\n  protected: static void rotateLeft (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr) {\n    cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr = ioRootPtr->mSupPtr ;\n    ioRootPtr->mSupPtr = ptr->mInfPtr ;\n    ptr->mInfPtr = ioRootPtr;\n\n    if (ptr->mBalance >= 0) {\n      ioRootPtr->mBalance ++ ;\n    }else{\n      ioRootPtr->mBalance += 1 - ptr->mBalance ;\n    }\n\n    if (ioRootPtr->mBalance > 0) {\n      ptr->mBalance += ioRootPtr->mBalance + 1 ;\n    }else{\n      ptr->mBalance ++ ;\n    }\n    ioRootPtr = ptr ;\n  }\n\n  protected: static void rotateRight (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr) {\n    cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr = ioRootPtr->mInfPtr ;\n    ioRootPtr->mInfPtr = ptr->mSupPtr ;\n    ptr->mSupPtr = ioRootPtr ;\n   \n    if (ptr->mBalance > 0) {\n      ioRootPtr->mBalance += -ptr->mBalance - 1 ;\n    }else{\n      ioRootPtr->mBalance -- ;\n    }\n    if (ioRootPtr->mBalance >= 0) {\n      ptr->mBalance -- ;\n    }else{\n      ptr->mBalance += ioRootPtr->mBalance - 1 ;\n    }\n    ioRootPtr = ptr ;\n  }\n\n  protected: static void recursiveAddEntry (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRootPtr,\n                                            const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inNewNode,\n                                            bool & outEntryAlreadyPresent,\n                                            bool & ioExtension,\n                                            const bool inEntryOverrideAllowed) {\n    if (ioRootPtr == nullptr) {\n      macroMyNew (ioRootPtr, cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNewNode.mProperty_key") ;
  GALGAS_uint index_4309_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4309 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4309.hasCurrentObject ()) {
      result.appendString (", inNewNode.mProperty_") ;
      result.appendString (enumerator_4309.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 121)).stringValue ()) ;
      index_4309_.increment () ;
      enumerator_4309.gotoNextObject () ;
    }
  }
  result.appendString (")) ;\n      ioExtension = true ;\n      outEntryAlreadyPresent = false ;\n    }else{\n      macroValidPointer (ioRootPtr) ;\n      const ComparisonResult comparaison = ioRootPtr->mProperty_key.objectCompare (inNewNode.mProperty_key) ;\n      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {\n        recursiveAddEntry (ioRootPtr->mInfPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;\n        if (ioExtension) {\n          ioRootPtr->mBalance++;\n          if (ioRootPtr->mBalance == 0) {\n            ioExtension = false;\n          }else if (ioRootPtr->mBalance == 2) {\n            if (ioRootPtr->mInfPtr->mBalance == -1) {\n              rotateLeft (ioRootPtr->mInfPtr) ;\n            }\n            rotateRight (ioRootPtr) ;\n            ioExtension = false;\n          }\n        }\n      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {\n        recursiveAddEntry (ioRootPtr->mSupPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;\n        if (ioExtension) {\n          ioRootPtr->mBalance-- ;\n          if (ioRootPtr->mBalance == 0) {\n            ioExtension = false ;\n          }else if (ioRootPtr->mBalance == -2) {\n            if (ioRootPtr->mSupPtr->mBalance == 1) {\n              rotateRight (ioRootPtr->mSupPtr) ;\n            }\n            rotateLeft (ioRootPtr) ;\n            ioExtension = false;\n          }\n        }\n      }else{  // Found\n        ioExtension = false ;\n        outEntryAlreadyPresent = true ;\n        if (inEntryOverrideAllowed) {\n") ;
  GALGAS_uint index_5986_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5986 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5986.hasCurrentObject ()) {
      result.appendString ("          ioRootPtr->mProperty_") ;
      result.appendString (enumerator_5986.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 163)).stringValue ()) ;
      result.appendString (" = inNewNode.mProperty_") ;
      result.appendString (enumerator_5986.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 163)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_5986_.increment () ;
      enumerator_5986.gotoNextObject () ;
    }
  }
  result.appendString ("        }\n      }\n    }\n  }\n\n//--------------------------------- Search\n  private: VIRTUAL_IN_DEBUG cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * findEntryInDict (const GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey) const {\n    cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * result = nullptr ;\n    cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * currentNode = mRoot ;\n    while ((currentNode != nullptr) && (nullptr == result)) {\n      macroValidPointer (currentNode) ;\n      const ComparisonResult comparaison = currentNode->mProperty_key.objectCompare (inKey) ;\n      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {\n        currentNode = currentNode->mInfPtr ;\n      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {\n        currentNode = currentNode->mSupPtr ;\n      }else{ // Found\n        result = currentNode ;\n      }\n    }\n    return result ;\n  }\n\n//--------------------------------- Remove\n  protected: VIRTUAL_IN_DEBUG void performRemove (const GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey, cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & outRemovedNodePtr) {\n    bool branchHasBeenRemoved = false ; // Unused here\n    internalRemoveRecursively (mRoot, inKey, outRemovedNodePtr, branchHasBeenRemoved) ;\n    if (nullptr != outRemovedNodePtr) {\n      mCount -- ;\n    }\n  }\n\n  protected: static void supBranchDecreased (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRoot,\n                                              bool & ioBranchHasBeenRemoved) {\n    ioRoot->mBalance ++ ;\n    switch (ioRoot->mBalance) {\n    case 0:\n      break;\n    case 1:\n      ioBranchHasBeenRemoved = false;\n      break;\n    case 2:\n      switch (ioRoot->mInfPtr->mBalance) {\n      case -1:\n        rotateLeft (ioRoot->mInfPtr) ;\n        rotateRight (ioRoot) ;\n        break;\n      case 0:\n        rotateRight (ioRoot) ;\n        ioBranchHasBeenRemoved = false;\n        break;\n      case 1:\n        rotateRight (ioRoot) ;\n        break;\n      }\n      break;\n    }\n  }\n\n  protected: static void infBranchDecreased (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRoot,\n                                              bool & ioBranchHasBeenRemoved) {\n    ioRoot->mBalance -- ;\n    switch (ioRoot->mBalance) {\n    case 0:\n      break;\n    case -1:\n      ioBranchHasBeenRemoved = false;\n      break;\n    case -2:\n      switch (ioRoot->mSupPtr->mBalance) {\n      case 1:\n        rotateRight (ioRoot->mSupPtr) ;\n        rotateLeft (ioRoot) ;\n        break;\n      case 0:\n        rotateLeft (ioRoot) ;\n        ioBranchHasBeenRemoved = false;\n        break;\n      case -1:\n        rotateLeft (ioRoot) ;\n        break;\n      }\n      break;\n    }\n  }\n\n  protected: static void getPreviousElement (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRoot,\n                                             cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioElement,\n                                             bool & ioBranchHasBeenRemoved) {\n    if (ioRoot->mSupPtr == nullptr) {\n      ioElement = ioRoot ;\n      ioRoot = ioRoot->mInfPtr ;\n      ioBranchHasBeenRemoved = true ;\n    }else{\n      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;\n      if (ioBranchHasBeenRemoved) {\n        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n      }\n    }\n  }\n\n  protected: static void internalRemoveRecursively (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & ioRoot,\n                                                     const GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKeyToRemove,\n                                                     cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * & outRemovedNode,\n                                                     bool & ioBranchHasBeenRemoved) {\n    if (ioRoot != nullptr) {\n      const ComparisonResult comparaison = ioRoot->mProperty_key.objectCompare (inKeyToRemove) ;\n      if (comparaison == ComparisonResult::firstOperandGreaterThanSecond) {\n        internalRemoveRecursively (ioRoot->mInfPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);\n        if (ioBranchHasBeenRemoved) {\n          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n        }\n      }else if (comparaison == ComparisonResult::firstOperandLowerThanSecond) {\n        internalRemoveRecursively (ioRoot->mSupPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);\n        if (ioBranchHasBeenRemoved) {\n          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);\n        }\n      }else{\n        cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = ioRoot ;\n        if (p->mInfPtr == nullptr) {\n          ioRoot = p->mSupPtr;\n          p->mSupPtr = nullptr;\n          ioBranchHasBeenRemoved = true;\n        }else if (p->mSupPtr == nullptr) {\n          ioRoot = p->mInfPtr;\n          p->mInfPtr = nullptr;\n          ioBranchHasBeenRemoved = true;\n        }else{\n          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;\n          ioRoot->mSupPtr = p->mSupPtr;\n          p->mSupPtr = nullptr;\n          ioRoot->mInfPtr = p->mInfPtr;\n          p->mInfPtr = nullptr;\n          ioRoot->mBalance = p->mBalance;\n          p->mBalance = 0;\n          if (ioBranchHasBeenRemoved) {\n            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n          }\n        }\n        outRemovedNode = p ;\n      }\n    }\n  }\n\n//--------------------------------- Internal method for enumeration\n  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;\n\n//--------------------------------- Check Dictionary\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n      private: VIRTUAL_IN_DEBUG void checkDict (LOCATION_ARGS) const {\n      uint32_t n = 0 ;\n      checkNode (mRoot, n) ;\n      macroAssertThere (n == mCount, \"n (%lld) != mCount (%lld)\", n, mCount) ;\n    }\n  #endif\n\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    private: static void checkNode (const cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode,\n                                     uint32_t & ioCount) {\n      if (nullptr != inNode) {\n        checkNode (inNode->mInfPtr, ioCount) ;\n        ioCount ++ ;\n        checkNode (inNode->mSupPtr, ioCount) ;\n      }\n    }\n  #endif\n\n//--------------------------------- Compare Dictionaries\n  public: ComparisonResult compare (const cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inOperand) const {\n    ComparisonResult result = ComparisonResult::operandEqual ;\n    if (mCount < inOperand->mCount) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (mCount > inOperand->mCount) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      capCollectionElementArray enumerationArray ;\n      populateEnumerationArray (enumerationArray) ;\n      capCollectionElementArray operandEnumerationArray ;\n      inOperand->populateEnumerationArray (operandEnumerationArray) ;\n      result = enumerationArray.compareCollectionElementArray (operandEnumerationArray) ;\n    }\n    return result ;\n  }\n\n//--------------------------------- Friend\n  friend class GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n} ;\n\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmSharedDict (nullptr) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::~ GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n  macroDetachSharedObject (mSharedDict) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\nAC_GALGAS_root (),\nmSharedDict (nullptr) {\n  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;\n  return * this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n  macroDetachSharedObject (mSharedDict) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyDict (LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  macroMyNew (result.mSharedDict, cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (THERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  macroMyNew (result.mSharedDict, cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (THERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Description\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void internalDescription_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode,\n                                 String & ioString,\n                                 const int32_t inIndentation) {\n  if (nullptr != inNode) {\n    internalDescription_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mInfPtr, ioString, inIndentation) ;\n    ioString.appendNewLine () ;\n    inNode->description (ioString, inIndentation) ;\n    internalDescription_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mSupPtr, ioString, inIndentation) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString,\n                                             const int32_t inIndentation) const {\n  ioString.appendCString (\"<dict @\") ;\n  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;\n  ioString.appendCString (\":\") ;\n  if (isValid ()) {\n    internalDescription_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mSharedDict->mRoot, ioString, inIndentation) ;\n  }else{\n    ioString.appendCString (\" not built\") ;\n  }\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_uint GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GALGAS_uint result ;\n  if (isValid ()) {\n    result = GALGAS_uint (mSharedDict->mCount) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n::readSubscript__3F_ (const class GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey,\n                      Compiler * /* inCompiler */\n                      COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n    const cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = mSharedDict->findEntryInDict (inKey) ;\n    if (nullptr == p) {\n      result = GALGAS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init_nil () ;\n    }else{\n      result = *p ;\n    }  \n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Insulate\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\ncNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode) :\nGALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mProperty_key") ;
  GALGAS_uint index_17624_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17624 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_17624.hasCurrentObject ()) {
      result.appendString (", inNode->mProperty_") ;
      result.appendString (enumerator_17624.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 478)).stringValue ()) ;
      index_17624_.increment () ;
      enumerator_17624.gotoNextObject () ;
    }
  }
  result.appendString ("),\nmInfPtr (nullptr),\nmSupPtr (nullptr),\nmBalance (inNode->mBalance) {\n  if (inNode->mInfPtr != nullptr) {\n    macroMyNew (mInfPtr, cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mInfPtr)) ;\n  }\n  if (inNode->mSupPtr != nullptr) {\n    macroMyNew (mSupPtr, cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mSupPtr)) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copyFrom (const cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSource) {\n  macroUniqueSharedObject (this) ;\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    inSource->checkDict (HERE) ;\n  #endif\n  macroValidSharedObject (inSource, cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  mCount = inSource->mCount ;\n  if (nullptr != inSource->mRoot) {\n    macroMyNew (mRoot, cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inSource->mRoot)) ;\n  }\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    checkDict (HERE) ;\n  #endif\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::insulate (LOCATION_ARGS) {\n  if ((nullptr != mSharedDict) && !mSharedDict->isUniquelyReferenced ()) {\n    cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n    macroMyNew (p, cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (THERE)) ;\n    p->copyFrom (mSharedDict) ;\n    macroAssignSharedObject (mSharedDict, p) ;\n    macroDetachSharedObject (p) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Insert\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::enterElement (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inValue.isValid ()) {\n    insulate (THERE) ;\n    macroUniqueSharedObject (mSharedDict) ;\n    const bool entryOverrideAllowed = true ;\n    mSharedDict->performInsert (inValue, entryOverrideAllowed) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey") ;
  GALGAS_uint index_19993_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19993 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_19993.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_19993.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 544)).stringValue ()) ;
      result.appendString (" & inArgument") ;
      result.appendString (index_19993_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 544)).stringValue ()) ;
      index_19993_IDX.increment () ;
      enumerator_19993.gotoNextObject () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (inKey") ;
  GALGAS_uint index_20266_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20266 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_20266.hasCurrentObject ()) {
      result.appendString (", inArgument") ;
      result.appendString (index_20266_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 550)).stringValue ()) ;
      index_20266_IDX.increment () ;
      enumerator_20266.gotoNextObject () ;
    }
  }
  result.appendString (") ;\n  if (isValid () && newElement.isValid ()) {\n    insulate (THERE) ;\n    macroUniqueSharedObject (mSharedDict) ;\n    const bool entryOverrideAllowed = true ;\n    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey") ;
  GALGAS_uint index_20794_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20794 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_20794.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_20794.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 565)).stringValue ()) ;
      result.appendString (" inArgument") ;
      result.appendString (index_20794_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 565)).stringValue ()) ;
      index_20794_IDX.increment () ;
      enumerator_20794.gotoNextObject () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (inKey") ;
  GALGAS_uint index_21065_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_21065 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_21065.hasCurrentObject ()) {
      result.appendString (", inArgument") ;
      result.appendString (index_21065_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 571)).stringValue ()) ;
      index_21065_IDX.increment () ;
      enumerator_21065.gotoNextObject () ;
    }
  }
  result.appendString (") ;\n  if (isValid () && newElement.isValid ()) {\n    insulate (THERE) ;\n    macroUniqueSharedObject (mSharedDict) ;\n    const bool entryOverrideAllowed = true ;\n    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_hasKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (isValid () && inKey.isValid ()) {\n    const cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = mSharedDict->findEntryInDict (inKey) ;\n    result = GALGAS_bool (p != nullptr) ;\n   }\n   return result ;\n }\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_searchKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey") ;
  GALGAS_uint index_22052_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_22052 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_22052.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_22052.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 598)).stringValue ()) ;
      result.appendString (" & outArgument") ;
      result.appendString (index_22052_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 598)).stringValue ()) ;
      index_22052_IDX.increment () ;
      enumerator_22052.gotoNextObject () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  const cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n  if (isValid () && inKey.isValid ()) {\n    p = mSharedDict->findEntryInDict (inKey) ;\n    if (nullptr == p) {\n    //--- Build error message\n      String message = \"cannot search in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_22649_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_22649 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_22649.hasCurrentObject ()) {
      result.appendString ("    outArgument") ;
      result.appendString (index_22649_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 615)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_22649_IDX.increment () ;
      enumerator_22649.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_22829_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_22829 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_22829.hasCurrentObject ()) {
      result.appendString ("    outArgument") ;
      result.appendString (index_22829_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 621)).stringValue ()) ;
      result.appendString (" = p->mProperty_") ;
      result.appendString (enumerator_22829.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 621)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_22829_IDX.increment () ;
      enumerator_22829.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey") ;
  GALGAS_uint index_23199_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_23199 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_23199.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_23199.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 629)).stringValue ()) ;
      result.appendString (" & outArgument") ;
      result.appendString (index_23199_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 629)).stringValue ()) ;
      index_23199_IDX.increment () ;
      enumerator_23199.gotoNextObject () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n  if (isValid () && inKey.isValid ()) {\n    insulate (THERE) ;\n    macroUniqueSharedObject (mSharedDict) ;\n    mSharedDict->performRemove (inKey, p) ;\n    if (nullptr == p) {\n    //--- Build error message\n      String message = \"cannot remove in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (nullptr == p) {\n") ;
  GALGAS_uint index_23848_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_23848 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_23848.hasCurrentObject ()) {
      result.appendString ("    outArgument") ;
      result.appendString (index_23848_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 648)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      index_23848_IDX.increment () ;
      enumerator_23848.gotoNextObject () ;
    }
  }
  result.appendString ("  }else{\n    macroValidSharedObject (p, cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n") ;
  GALGAS_uint index_24028_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_24028 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_24028.hasCurrentObject ()) {
      result.appendString ("    outArgument") ;
      result.appendString (index_24028_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 654)).stringValue ()) ;
      result.appendString (" = p->mProperty_") ;
      result.appendString (enumerator_24028.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 654)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_24028_IDX.increment () ;
      enumerator_24028.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n}\n\n") ;
  GALGAS_uint index_24208_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_24208 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_24208.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_24208.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 661)).stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_24208.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 661)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("const GALGAS_") ;
      result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" & inKey,\n                                               ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n                                               ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_24208.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 664)).stringValue ()) ;
      result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n  const cNode_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = mSharedDict->findEntryInDict (inKey) ;\n   if (nullptr == p) {\n    //--- Build error message\n      String message = \"cannot get ") ;
      result.appendString (enumerator_24208.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 669)).stringValue ()) ;
      result.appendString (" ForKey in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      macroValidSharedObject (p, cNode_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n      result = p->mProperty_") ;
      result.appendString (enumerator_24208.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 674)).stringValue ()) ;
      result.appendString ("  ;\n    }\n  }\n  return result ;\n}\n\n") ;
      index_24208_.increment () ;
      enumerator_24208.gotoNextObject () ;
    }
  }
  GALGAS_uint index_25469_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_25469 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_25469.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_set") ;
      result.appendString (enumerator_25469.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 684)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 684)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_25469.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 684)).stringValue ()) ;
      result.appendString (" inPropertyValue,\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GALGAS_") ;
      result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" inKey,\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    insulate (THERE) ;\n    macroUniqueSharedObject (mSharedDict) ;\n    cNode_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = mSharedDict->findEntryInDict (inKey) ;\n    if (nullptr == p) {\n    //--- Build error message\n      String message = \"cannot set") ;
      result.appendString (enumerator_25469.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 694)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 694)).stringValue ()) ;
      result.appendString ("ForKey in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      p->mProperty_") ;
      result.appendString (enumerator_25469.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 698)).stringValue ()) ;
      result.appendString (" = inPropertyValue ;\n    }\n  }\n}\n\n") ;
      index_25469_.increment () ;
      enumerator_25469.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark Object compare\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    result = mSharedDict->compare (inOperand.mSharedDict) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n#ifdef PRAGMA_MARK_ALLOWED\n  #pragma mark map Enumeration\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\nclass cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cCollectionElement {\n  public: GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" mElement ;\n\n//--- Constructor\n  public: cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement) :\n  cCollectionElement (HERE),\n  mElement (inElement) {\n  }\n\n//--- No copy\n  private: cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) ;\n  private: cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const { return mElement.isValid () ; }\n\n//--- Virtual method for comparing elements\n") ;
  const enumGalgasBool test_0 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const {\n    const cCollectionElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * p = (const cCollectionElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" *) inOperand ;\n    return mElement.objectCompare (p->mElement) ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--- Virtual method that returns a copy of current object\n  public: virtual cCollectionElement * copy (void) {\n    cCollectionElement * p = nullptr ;\n    macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mElement)) ;\n    return p ;\n  }\n\n//--- Description\n  public: virtual void description (String & ioString, const int32_t inIndentation) const {\n    mElement.description (ioString, inIndentation) ;\n  }\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void enterAscendingEnumeration_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (cNode_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inNode,\n                                                       capCollectionElementArray & ioEnumerationArray) {\n  if (inNode != nullptr) {\n    enterAscendingEnumeration_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mInfPtr, ioEnumerationArray) ;\n    cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n    macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (*inNode)) ;\n    capCollectionElement element ;\n    element.setPointer (p) ;\n    macroDetachSharedObject (p) ;\n    ioEnumerationArray.appendObject (element) ;\n    enterAscendingEnumeration_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inNode->mSupPtr, ioEnumerationArray) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cSharedDictRoot_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    checkDict (HERE) ;\n  #endif\n  ioEnumerationArray.setCapacity (mCount) ;\n  enterAscendingEnumeration_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mRoot, ioEnumerationArray) ;\n  macroAssert (mCount == ioEnumerationArray.count (), \"mCount (%lld) != ioEnumerationArray.count () (%lld)\", mCount, ioEnumerationArray.count ()) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {\n  if (nullptr != mSharedDict) {\n    mSharedDict->populateEnumerationArray (ioEnumerationArray) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject,\n                                                        const EnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("* p = dynamic_cast  <const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("*> (currentObjectPtr (THERE)) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  return GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (p->mElement) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current_key (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("* p = dynamic_cast  <const cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("*> (currentObjectPtr (THERE)) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  return p->mElement.mProperty_key ;\n}\n\n") ;
  GALGAS_uint index_32019_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_32019 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_32019.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_32019.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 825)).stringValue ()) ;
      result.appendString (" cEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_32019.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 825)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  const cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("* p = dynamic_cast  <const cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("*> (currentObjectPtr (THERE)) ;\n  macroValidSharedObject (p, cCollectionElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  return p->mElement.mProperty_") ;
      result.appendString (enumerator_32019.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 828)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_32019_IDX.increment () ;
      enumerator_32019.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
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
  result_result = GALGAS_string ("map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 63)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_addAssociatedElement (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_structAttributeList_9977 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_structAttributeList_9977.addAssign_operation (GALGAS_bool (false), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 281)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 282)), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-map.galgas", 283)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-map.galgas", 285))  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 279)) ;
  const GALGAS_mapDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10250 (temp_0.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_10250.hasCurrentObject ()) {
    var_structAttributeList_9977.addAssign_operation (GALGAS_bool (false), enumerator_10250.current_typeName (HERE), enumerator_10250.current_name (HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-map.galgas", 291)), enumerator_10250.current_hasSelector (HERE), enumerator_10250.current_initialization (HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 287)) ;
    enumerator_10250.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_elementTypeName_10491 = function_makeEmbeddedElementTypeLName (temp_1.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 295)) ;
  const GALGAS_mapDeclarationAST temp_2 = this ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  GALGAS_structComparison temp_4 ;
  const enumGalgasBool test_5 = temp_3.readProperty_equatable ().boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-map.galgas", 301)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-map.galgas", 301)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefull (temp_2.readProperty_isPredefined (), var_elementTypeName_10491, var_structAttributeList_9977, GALGAS_string::makeEmptyString (), temp_4, GALGAS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 296)) ;
  {
  GALGAS_lstring joker_10898 ; // Joker input parameter
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_10898, var_elementTypeName_10491, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 305)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GALGAS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                             GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                             GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                             GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                             GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mapDeclarationAST temp_0 = this ;
  const GALGAS_mapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_11792 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 320)), temp_1.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_mapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11792, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 321)) ;
  }
  const GALGAS_mapDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11944 (temp_3.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_11944.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (enumerator_11944.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 323)), enumerator_11944.current_typeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-map.galgas", 323)) ;
    }
    enumerator_11944.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInSemanticContext (GALGAS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                       const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_12927 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("string"), var_stringTypeIndex_12927, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 341)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringTypeIndex_13019 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_13019, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 343)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 345)) ;
  temp_0.enterElement (GALGAS_enumerationDescriptorList_2E_element::init_21__21_ (var_lstringTypeIndex_13019, GALGAS_string ("lkey"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 345)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_13099 = temp_0 ;
  GALGAS_classFunctionMap var_classFunctionMap_13188 = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_getterMap var_getterMap_13268 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_13268, inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 348)) ;
  }
  GALGAS_setterMap var_setterMap_13296 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_13336 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_mapDeclarationAST temp_1 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_13188, ioArgument_ioTypeMap, GALGAS_string ("emptyMap"), temp_1.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 352)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_2 = this ;
  const GALGAS_mapDeclarationAST temp_3 = this ;
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_13188, ioArgument_ioTypeMap, GALGAS_string ("mapWithMapToOverride"), temp_2.readProperty_mMapTypeName ().readProperty_string (), GALGAS_string ("inMap"), temp_3.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 359)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13268, ioArgument_ioTypeMap, GALGAS_string ("levels"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 369)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13268, ioArgument_ioTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 377)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13268, ioArgument_ioTypeMap, GALGAS_string ("keySet"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 388)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13268, ioArgument_ioTypeMap, GALGAS_string ("keyList"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 396)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13268, ioArgument_ioTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 404)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13268, ioArgument_ioTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 413)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13268, ioArgument_ioTypeMap, GALGAS_string ("overriddenMap"), GALGAS_string::makeEmptyString (), temp_4.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 422)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13268, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 430)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_15436 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_typedPropertyList var_typedPropertyList_15504 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_15577 = GALGAS_optionalMethodSignature::init (inCompiler COMMA_HERE) ;
  var_optionalMethodSignature_15577.addAssign_operation (GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 444)), var_stringTypeIndex_12927, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 442)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_15721 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_15721.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 449)), var_lstringTypeIndex_13019, GALGAS_string ("lkey"), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 448)) ;
  var_insertMethodFormalArgumentList_15436.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 454)), var_lstringTypeIndex_13019, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas", 456)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 453)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_16073 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_removeMethodFormalArgumentList_16073.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 460)), var_lstringTypeIndex_13019, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas", 462)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 459)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_16284 = GALGAS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
  const GALGAS_mapDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_16377 (temp_5.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_16377.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = enumerator_16377.current_initialization (HERE).getter_isSome (SOURCE_FILE ("declaration-type-map.galgas", 466)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_16377.current_name (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a map"), fixItArray7  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 467)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_16591 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16377.current_typeName (HERE), var_attributeTypeIndex_16591, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 469)) ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_15721.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 470)), var_attributeTypeIndex_16591, enumerator_16377.current_name (HERE).readProperty_string (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 470)) ;
    var_typedPropertyList_15504.addAssign_operation (var_attributeTypeIndex_16591, enumerator_16377.current_name (HERE), enumerator_16377.current_initialization (HERE), GALGAS_bool (true), enumerator_16377.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 471)) ;
    var_typesToIncludeInHeaderCompilation_16284.addAssign_operation (var_attributeTypeIndex_16591  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 472)) ;
    var_enumerationDescriptor_13099.addAssign_operation (var_attributeTypeIndex_16591, enumerator_16377.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 473)) ;
    GALGAS_lstring temp_8 ;
    const enumGalgasBool test_9 = enumerator_16377.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_9) {
      temp_8 = enumerator_16377.current_name (HERE) ;
    }else if (kBoolFalse == test_9) {
      temp_8 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 475)) ;
    }
    var_insertMethodFormalArgumentList_15436.addAssign_operation (temp_8, var_attributeTypeIndex_16591, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas", 477)), enumerator_16377.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 474)) ;
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = enumerator_16377.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_16377.current_name (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 480)) ;
    }
    var_removeMethodFormalArgumentList_16073.addAssign_operation (temp_10, var_attributeTypeIndex_16591, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-map.galgas", 482)), enumerator_16377.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 479)) ;
    GALGAS_lstring temp_12 ;
    const enumGalgasBool test_13 = enumerator_16377.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_13) {
      temp_12 = enumerator_16377.current_name (HERE) ;
    }else if (kBoolFalse == test_13) {
      temp_12 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 486)) ;
    }
    var_optionalMethodSignature_15577.addAssign_operation (GALGAS_bool (false), temp_12, var_attributeTypeIndex_16591, enumerator_16377.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 484)) ;
    enumerator_16377.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_14 = this ;
  cEnumerator_insertMethodListAST enumerator_17561 (temp_14.readProperty_mInsertMethodList (), EnumerationOrder::up) ;
  while (enumerator_17561.hasCurrentObject ()) {
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = var_setterMap_13296.getter_hasKey (enumerator_17561.current_mInsertMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 492)).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_17561.current_mInsertMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17561.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 493)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 493)), fixItArray16  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 493)) ;
      }
    }
    if (kBoolFalse == test_15) {
      {
      var_setterMap_13296.setter_insertOrReplace (enumerator_17561.current_mInsertMethodName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 497)), var_insertMethodFormalArgumentList_15436, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 500)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 495)) ;
      }
    }
    enumerator_17561.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_17 = this ;
  cEnumerator_mapRemoveMethodListAST enumerator_18024 (temp_17.readProperty_mRemoveMethodList (), EnumerationOrder::up) ;
  while (enumerator_18024.hasCurrentObject ()) {
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_setterMap_13296.getter_hasKey (enumerator_18024.current_mMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 507)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_18024.current_mMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_18024.current_mMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 508)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 508)), fixItArray19  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 508)) ;
      }
    }
    if (kBoolFalse == test_18) {
      {
      var_setterMap_13296.setter_insertOrReplace (enumerator_18024.current_mMethodName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 512)), var_removeMethodFormalArgumentList_16073, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 515)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 510)) ;
      }
    }
    enumerator_18024.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_20 = this ;
  cEnumerator_mapSearchMethodListAST enumerator_18515 (temp_20.readProperty_mSearchMethodList (), EnumerationOrder::up) ;
  while (enumerator_18515.hasCurrentObject ()) {
    {
    var_instanceMethodMap_13336.setter_insertKey (enumerator_18515.current_mSearchMethodName (HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 524)), var_removeMethodFormalArgumentList_16073, enumerator_18515.current_mSearchMethodName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 528)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 522)) ;
    }
    enumerator_18515.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_21 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_18832 (temp_21.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_18832.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_18857 = GALGAS_lstring::init_21__21_ (enumerator_18832.current (HERE).readProperty_name ().readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 534)), enumerator_18832.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_18991 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18832.current (HERE).readProperty_typeName (), var_attributeTypeIndex_18991, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 535)) ;
    }
    {
    GALGAS_functionSignature temp_22 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 539)) ;
    temp_22.enterElement (GALGAS_functionSignature_2E_element::init_21__21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 539)), var_stringTypeIndex_12927, GALGAS_string ("inKey"), GALGAS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 539)) ;
    var_getterMap_13268.setter_insertOrReplace (var_accessorName_18857, GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 538)), temp_22, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 540)), GALGAS_bool (true), var_attributeTypeIndex_18991, GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 543)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 536)) ;
    }
    enumerator_18832.gotoNextObject () ;
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    const GALGAS_mapDeclarationAST temp_24 = this ;
    test_23 = GALGAS_bool (ComparisonKind::greaterOrEqual, temp_24.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("declaration-type-map.galgas", 548)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_location var_insertOrReplaceLocation_19475 ;
      const GALGAS_mapDeclarationAST temp_25 = this ;
      temp_25.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceLocation_19475, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 549)) ;
      {
      var_setterMap_13296.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation_19475, inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 552)), var_insertMethodFormalArgumentList_15436, GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 555)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 550)) ;
      }
    }
  }
  const GALGAS_mapDeclarationAST temp_26 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_19824 (temp_26.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_19824.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_19849 = GALGAS_lstring::init_21__21_ (GALGAS_string ("set").add_operation (enumerator_19824.current (HERE).readProperty_name ().readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("declaration-type-map.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 562)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 562)), enumerator_19824.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_20079 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_19824.current (HERE).readProperty_typeName (), var_attributeTypeIndex_20079, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 565)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_20138 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    var_accessorFormalArgumentList_20138.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 570)), var_attributeTypeIndex_20079, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas", 570)), enumerator_19824.current (HERE).readProperty_name ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 570)) ;
    var_accessorFormalArgumentList_20138.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 571)), var_stringTypeIndex_12927, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas", 571)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 571)) ;
    {
    var_setterMap_13296.setter_insertOrReplace (var_accessorName_19849, GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 574)), var_accessorFormalArgumentList_20138, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 577)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 572)) ;
    }
    enumerator_19824.gotoNextObject () ;
  }
  GALGAS_initializerMap var_initializerMap_20641 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_emptyArgumentList_20686 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_mapDeclarationAST temp_27 = this ;
  var_initializerMap_20641.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_20686, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 585)), temp_27.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_20686, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 584)) ;
  }
  GALGAS_typeFeatures var_features_20860 = GALGAS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("declaration-type-map.galgas", 589)).operator_or (GALGAS_typeFeatures::class_func_supportWithAccessor (SOURCE_FILE ("declaration-type-map.galgas", 590)) COMMA_SOURCE_FILE ("declaration-type-map.galgas", 589)).operator_or (GALGAS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-map.galgas", 590)) COMMA_SOURCE_FILE ("declaration-type-map.galgas", 590)).operator_or (GALGAS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-map.galgas", 590)) COMMA_SOURCE_FILE ("declaration-type-map.galgas", 590)) ;
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    const GALGAS_mapDeclarationAST temp_29 = this ;
    test_28 = temp_29.readProperty_equatable ().boolEnum () ;
    if (kBoolTrue == test_28) {
      var_features_20860.orAssign_operation(GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-map.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 592)) ;
    }
  }
  {
  const GALGAS_mapDeclarationAST temp_30 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_30.readProperty_mMapTypeName (), var_features_20860, GALGAS_bool (true), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 594)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_31 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_31.readProperty_mMapTypeName (), GALGAS_bool (false), var_initializerMap_20641, var_getterMap_13268, var_setterMap_13296, var_instanceMethodMap_13336, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 602)) ;
  }
  const GALGAS_mapDeclarationAST temp_32 = this ;
  GALGAS_lstring var_elementTypeName_21681 = function_makeEmbeddedElementTypeLName (temp_32.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 618)) ;
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_21825 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_elementTypeName_21681, var_elementTypeEntry_21825, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 619)) ;
  }
  GALGAS_lstring var_optionalElementTypeName_21885 = function_makeOptionalTypeLName (var_elementTypeName_21681, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 624)) ;
  GALGAS_unifiedTypeMapEntry var_optionalElementTypeEntry_22050 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_optionalElementTypeName_21885, var_optionalElementTypeEntry_22050, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 625)) ;
  }
  GALGAS_subscriptMap var_readSubscriptMap_22120 = GALGAS_subscriptMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature temp_33 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 631)) ;
  temp_33.enterElement (GALGAS_functionSignature_2E_element::init_21__21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 631)), var_stringTypeIndex_12927, GALGAS_string ("inKey"), GALGAS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 631)) ;
  GALGAS_functionSignature var_argumentTypeList_22167 = temp_33 ;
  {
  var_readSubscriptMap_22120.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_argumentTypeList_22167, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 633)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 633)), inCompiler COMMA_HERE), var_argumentTypeList_22167, var_optionalElementTypeEntry_22050, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 632)) ;
  }
  const GALGAS_mapDeclarationAST temp_34 = this ;
  const GALGAS_mapDeclarationAST temp_35 = this ;
  const GALGAS_mapDeclarationAST temp_36 = this ;
  const GALGAS_mapDeclarationAST temp_37 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_22419 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_34.readProperty_mMapTypeName (), temp_35.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-map.galgas", 642)), GALGAS_typeKindEnum::class_func_mapType (SOURCE_FILE ("declaration-type-map.galgas", 643)), GALGAS_bool (true), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), var_typedPropertyList_15504, var_initializerMap_20641, var_classFunctionMap_13188, var_getterMap_13268, var_setterMap_13296, var_instanceMethodMap_13336, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-map.galgas", 654)), var_readSubscriptMap_22120, var_enumerationDescriptor_13099, var_features_20860, var_argumentTypeListForAddAssignWithFieldExpressionList_15721, temp_36.readProperty_mSearchMethodList (), GALGAS_bool (false), var_elementTypeEntry_21825, GALGAS_string ("map-").add_operation (temp_37.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-map.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 662)), GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("declaration-type-map.galgas", 663)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_22419.readProperty_typeName (), var_typeDefinition_22419, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 665)) ;
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
  GALGAS_lstring var_nameForUsefulness_24701 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 694)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_24701, var_nameForUsefulness_24701, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 695)) ;
  }
  const GALGAS_mapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_24853 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_1.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 696)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 696)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_24701, var_elementTypeNameForUsefulness_24853 COMMA_SOURCE_FILE ("declaration-type-map.galgas", 697)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_25101 = GALGAS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GALGAS_propertyIndexMap var_attributeMap_25149 = GALGAS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_mapDeclarationAST temp_2 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_25210 (temp_2.readProperty_mPropertyList (), EnumerationOrder::up) ;
  while (enumerator_25210.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_25259 = function_typeNameForUsefulEntitiesGraph (enumerator_25210.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 702)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_24701, var_propertyTypeNameForUsefulness_25259 COMMA_SOURCE_FILE ("declaration-type-map.galgas", 703)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_25459 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_25210.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 704)) ;
    GALGAS_bool var_hasSelector_25521 = GALGAS_bool (false) ;
    var_typedAttributeList_25101.addAssign_operation (var_t_25459, enumerator_25210.current_name (HERE), enumerator_25210.current_initialization (HERE), GALGAS_bool (true), var_hasSelector_25521  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 706)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 712)).getter_hasKey (enumerator_25210.current_name (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 712)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_m_25765 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_25842 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 714)), EnumerationOrder::up) ;
        while (enumerator_25842.hasCurrentObject ()) {
          var_m_25765.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_25842.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 715)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 715)) ;
          enumerator_25842.gotoNextObject () ;
        }
        var_m_25765.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 717)) ;
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_25210.current_name (HERE).readProperty_location (), var_m_25765, fixItArray4  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 718)) ;
      }
    }
    {
    var_attributeMap_25149.setter_insertKey (enumerator_25210.current_name (HERE), var_t_25459, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 720)) ;
    }
    enumerator_25210.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_26059 = GALGAS_insertMethodMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_mapDeclarationAST temp_5 = this ;
  cEnumerator_insertMethodListAST enumerator_26119 (temp_5.readProperty_mInsertMethodList (), EnumerationOrder::up) ;
  while (enumerator_26119.hasCurrentObject ()) {
    {
    var_insertMethodMap_26059.setter_insertKey (enumerator_26119.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 725)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_26119.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 726)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_26119.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 727)) ;
    }
    enumerator_26119.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_26381 = GALGAS_searchMethodMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_mapDeclarationAST temp_6 = this ;
  cEnumerator_mapSearchMethodListAST enumerator_26427 (temp_6.readProperty_mSearchMethodList (), EnumerationOrder::up) ;
  while (enumerator_26427.hasCurrentObject ()) {
    {
    var_searchMethodMap_26381.setter_insertKey (enumerator_26427.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 732)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_26427.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 733)) ;
    }
    enumerator_26427.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_7 = this ;
  cEnumerator_mapRemoveMethodListAST enumerator_26622 (temp_7.readProperty_mRemoveMethodList (), EnumerationOrder::up) ;
  while (enumerator_26622.hasCurrentObject ()) {
    {
    var_insertMethodMap_26059.setter_insertKey (enumerator_26622.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 737)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_26622.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 738)) ;
    }
    enumerator_26622.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_8 = this ;
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_26839 (temp_8.readProperty_mInsertOrReplaceDeclarationListAST (), EnumerationOrder::up) ;
  GALGAS_uint index_26834 (uint32_t (0)) ;
  while (enumerator_26839.hasCurrentObject ()) {
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = GALGAS_bool (ComparisonKind::greaterThan, index_26834.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (enumerator_26839.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared"), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 743)) ;
      }
    }
    enumerator_26839.gotoNextObject () ;
    index_26834.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 741)) ;
  }
  const GALGAS_mapDeclarationAST temp_11 = this ;
  GALGAS_bool var_hasInsertOrReplaceModifier_27075 = GALGAS_bool (ComparisonKind::greaterThan, temp_11.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("declaration-type-map.galgas", 746)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = var_hasInsertOrReplaceModifier_27075.operator_and (var_insertMethodMap_26059.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("declaration-type-map.galgas", 747)) COMMA_SOURCE_FILE ("declaration-type-map.galgas", 747)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_location var_insertOrReplaceDeclarationLocation_27295 ;
      const GALGAS_mapDeclarationAST temp_13 = this ;
      temp_13.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceDeclarationLocation_27295, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 748)) ;
      TC_Array <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_27295, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray14  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 749)) ;
    }
  }
  const GALGAS_mapDeclarationAST temp_15 = this ;
  GALGAS_lstring var_elementTypeName_27549 = function_makeEmbeddedElementTypeLName (temp_15.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 753)) ;
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_27623 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_elementTypeName_27549, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 754)) ;
  GALGAS_lstring var_optionalElementTypeName_27697 = function_makeOptionalTypeLName (var_elementTypeName_27549, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 755)) ;
  GALGAS_unifiedTypeMapEntry var_optionalElementTypeEntry_27784 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_optionalElementTypeName_27697, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 756)) ;
  const GALGAS_mapDeclarationAST temp_16 = this ;
  const GALGAS_mapDeclarationAST temp_17 = this ;
  const GALGAS_mapDeclarationAST temp_18 = this ;
  const GALGAS_mapDeclarationAST temp_19 = this ;
  const GALGAS_mapDeclarationAST temp_20 = this ;
  const GALGAS_mapDeclarationAST temp_21 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (temp_16.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 759)), GALGAS_mapTypeForGeneration::init_21__21__21__21__21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_17.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 761)), var_elementTypeEntry_27623, temp_18.readProperty_mMapTypeName (), var_typedAttributeList_25101, temp_19.readProperty_mInsertMethodList (), temp_20.readProperty_mSearchMethodList (), temp_21.readProperty_mRemoveMethodList (), var_hasInsertOrReplaceModifier_27075, var_optionalElementTypeEntry_27784, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 758)) ;
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
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_29306 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 793)) ;
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_mapGenerationTemplate_mapTypeHeader_31_ (inCompiler, var_selfTypeDefinition_29306.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 796)), temp_2.readProperty_mTypedAttributeList (), temp_3.readProperty_mSearchMethodList () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 794))) ;
  const GALGAS_mapTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_29306.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 802)), var_selfTypeDefinition_29306.readProperty_isConcrete (), var_selfTypeDefinition_29306.readProperty_initializerMap (), var_selfTypeDefinition_29306.readProperty_classFunctionMap (), var_selfTypeDefinition_29306.readProperty_getterMap (), var_selfTypeDefinition_29306.readProperty_setterMap (), var_selfTypeDefinition_29306.readProperty_instanceMethodMap (), var_selfTypeDefinition_29306.readProperty_classMethodMap (), var_selfTypeDefinition_29306.readProperty_readSubscriptMap (), var_selfTypeDefinition_29306.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_29306.readProperty_features (), var_selfTypeDefinition_29306.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_29306.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_29306.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 800))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 800)) ;
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
  cEnumerator_typedPropertyList enumerator_30547 (temp_0.readProperty_mTypedAttributeList (), EnumerationOrder::up) ;
  while (enumerator_30547.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_30547.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 826)) ;
    enumerator_30547.gotoNextObject () ;
  }
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_30637 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 828)) ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  const GALGAS_mapTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_mapGenerationTemplate_mapTypeHeader_32_ (inCompiler, var_selfTypeDefinition_30637.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 831)), temp_3.readProperty_mTypedAttributeList (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_30637.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 833)), extensionGetter_identifierRepresentation (temp_4.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 834)) COMMA_SOURCE_FILE ("declaration-type-map.galgas", 829))) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 844)) ;
  const GALGAS_mapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mOptionalElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 845)) ;
  const GALGAS_mapTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 846)) ;
  const GALGAS_mapTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_31589 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 847)) ;
  const GALGAS_mapTypeForGeneration temp_4 = this ;
  const GALGAS_mapTypeForGeneration temp_5 = this ;
  const GALGAS_mapTypeForGeneration temp_6 = this ;
  const GALGAS_mapTypeForGeneration temp_7 = this ;
  const GALGAS_mapTypeForGeneration temp_8 = this ;
  const GALGAS_mapTypeForGeneration temp_9 = this ;
  const GALGAS_mapTypeForGeneration temp_10 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_mapGenerationTemplate_mapTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_31589.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-map.galgas", 849)), temp_4.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 851)), temp_6.readProperty_mInsertMethodList (), extensionGetter_identifierRepresentation (temp_7.readProperty_mOptionalElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 853)), temp_8.readProperty_mSearchMethodList (), temp_9.readProperty_mRemoveMethodList (), temp_10.readProperty_mHasInsertOrReplaceModifier (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_31589.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 857)) COMMA_SOURCE_FILE ("declaration-type-map.galgas", 848))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'mapGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_mapGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_mapGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_mapGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_mapGenerationTemplate_0,
  0,
  gWrapperAllDirectories_mapGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'mapGenerationTemplate mapTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_mapGenerationTemplate_mapTypeHeader_31_ (Compiler * inCompiler,
                                                                           const GALGAS_string & in_TYPE_5F_NAME,
                                                                           const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                           const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                           const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n") ;
  GALGAS_uint index_351_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_351 (in_SEARCH_5F_METHOD_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_351.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nextern const char * kSearchErrorMessage_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_351.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 12)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      index_351_.increment () ;
      enumerator_351.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_map {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n  \n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'mapGenerationTemplate mapTypeHeader2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_mapGenerationTemplate_mapTypeHeader_32_ (Compiler * inCompiler,
                                                                           const GALGAS_string & in_TYPE_5F_NAME,
                                                                           const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                           const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                           const GALGAS_bool & in_GENERATE_5F_COMPARISON,
                                                                           const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 2: class for element of '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cMapElement {\n//--- Map attributes\n") ;
  GALGAS_uint index_455_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_455 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_455.hasCurrentObject ()) {
      result.appendString ("  public: GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_455.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" mProperty_") ;
      result.appendString (enumerator_455.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_455_.increment () ;
      enumerator_455.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--- Constructors\n  public: cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue\n             ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n \n  public: cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_lstring & inKey") ;
  GALGAS_uint index_923_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_923 (in_CURRENT_5F_PROPERTY_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_923.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_923.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_923.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 20)).stringValue ()) ;
      index_923_.increment () ;
      enumerator_923.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method for comparing elements\n") ;
  const enumGalgasBool test_0 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cMapElement * copy (void) ;\n\n//--- Description\n public: virtual void description (String & ioString, const int32_t inIndentation) const ;\n} ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'mapGenerationTemplate mapTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_mapGenerationTemplate_mapTypeSpecificImplementation (Compiler * inCompiler,
                                                                                       const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                       const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                       const GALGAS_insertMethodListAST & in_INSERT_5F_METHOD_5F_LIST,
                                                                                       const GALGAS_string & in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                       const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                       const GALGAS_mapRemoveMethodListAST & in_REMOVE_5F_METHOD_5F_LIST,
                                                                                       const GALGAS_bool & in_HAS_5F_INSERT_5F_OR_5F_REPLACE,
                                                                                       const GALGAS_bool & in_GENERATE_5F_COMPARISON
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\ncMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\ncMapElement (inValue.mProperty_lkey COMMA_THERE)") ;
  GALGAS_uint index_351_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_351 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_351.hasCurrentObject ()) {
      result.appendString (",\nmProperty_") ;
      result.appendString (enumerator_351.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 7)).stringValue ()) ;
      result.appendString (" (inValue.mProperty_") ;
      result.appendString (enumerator_351.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 7)).stringValue ()) ;
      result.appendString (")") ;
      index_351_.increment () ;
      enumerator_351.gotoNextObject () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_lstring & inKey") ;
  GALGAS_uint index_781_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_781 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_781.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_781.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 16)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_781.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 16)).stringValue ()) ;
      index_781_.increment () ;
      enumerator_781.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\ncMapElement (inKey COMMA_THERE)") ;
  GALGAS_uint index_1057_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1057 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1057.hasCurrentObject ()) {
      result.appendString (",\nmProperty_") ;
      result.appendString (enumerator_1057.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.appendString (" (in_") ;
      result.appendString (enumerator_1057.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.appendString (")") ;
      index_1057_.increment () ;
      enumerator_1057.gotoNextObject () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mProperty_lkey.isValid () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncMapElement * cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copy (void) {\n  cMapElement * result = nullptr ;\n  macroMyNew (result, cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (mProperty_lkey") ;
  GALGAS_uint index_1705_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1705 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1705.hasCurrentObject ()) {
      result.appendString (", mProperty_") ;
      result.appendString (enumerator_1705.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 39)).stringValue ()) ;
      index_1705_.increment () ;
      enumerator_1705.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_HERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_ATTRIBUTE_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 47)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("void cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::description (String & /* ioString */, const int32_t /* inIndentation */) const {\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("void cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::description (String & ioString, const int32_t inIndentation) const {\n") ;
    GALGAS_uint index_2277_ (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_2277 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_2277.hasCurrentObject ()) {
        result.appendString ("  ioString.appendNewLine () ;\n  ioString.appendStringMultiple (\"| \", inIndentation) ;\n  ioString.appendCString (") ;
        result.appendString (enumerator_2277.current_name (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 54)).stringValue ()) ;
        result.appendString (" \":\") ;\n  mProperty_") ;
        result.appendString (enumerator_2277.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 55)).stringValue ()) ;
        result.appendString (".description (ioString, inIndentation) ;\n") ;
        index_2277_.increment () ;
        enumerator_2277.gotoNextObject () ;
      }
    }
    } break ;
  default :
    break ;
  }
  result.appendString ("}\n\n") ;
  const enumGalgasBool test_1 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::compare (const cCollectionElement * inOperand) const {\n  cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * operand = (cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" *) inOperand ;\n  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;\n") ;
    GALGAS_uint index_3098_ (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_3098 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_3098.hasCurrentObject ()) {
        result.appendString ("  if (ComparisonResult::operandEqual == result) {\n    result = mProperty_") ;
        result.appendString (enumerator_3098.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 68)).stringValue ()) ;
        result.appendString (".objectCompare (operand->mProperty_") ;
        result.appendString (enumerator_3098.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 68)).stringValue ()) ;
        result.appendString (") ;\n  }\n") ;
        index_3098_.increment () ;
        enumerator_3098.gotoNextObject () ;
      }
    }
    result.appendString ("  return result ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_map () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\nAC_GALGAS_map (inSource) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n  * ((AC_GALGAS_map *) this) = inSource ;\n  return * this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.makeNewEmptyMap (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyMap (LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.makeNewEmptyMap (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n::readSubscript__3F_ (const class GALGAS_string & inKey,\n                            Compiler * /* inCompiler */\n                            COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n    cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) searchForKey (inKey) ;\n    if (nullptr == p) {\n      result = GALGAS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init_nil () ;\n    }else{\n      GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" element ;\n      element.mProperty_lkey = p->mProperty_lkey ;\n") ;
  GALGAS_uint index_5433_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5433 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5433.hasCurrentObject ()) {
      result.appendString ("      element.mProperty_") ;
      result.appendString (enumerator_5433.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).stringValue ()) ;
      result.appendString (" = p->mProperty_") ;
      result.appendString (enumerator_5433.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 124)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_5433_.increment () ;
      enumerator_5433.gotoNextObject () ;
    }
  }
  result.appendString ("      result = element ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_mapWithMapToOverride (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inMapToOverride\n                                                   ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_overriddenMap (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  getOverridenMap (result, inCompiler COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::enterElement (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n  macroMyNew (p, cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inValue COMMA_HERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  const char * kInsertErrorMessage = \"@") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" insert error: '%K' already in map\" ;\n  const char * kShadowErrorMessage = \"\" ;\n  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssign_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_lstring & inKey") ;
  GALGAS_uint index_7450_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7450 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7450.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7450.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 169)).stringValue ()) ;
      result.appendString (" & inArgument") ;
      result.appendString (index_7450_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 169)).stringValue ()) ;
      index_7450_IDX.increment () ;
      enumerator_7450.gotoNextObject () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n  macroMyNew (p, cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inKey") ;
  GALGAS_uint index_7821_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7821 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7821.hasCurrentObject ()) {
      result.appendString (", inArgument") ;
      result.appendString (index_7821_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 176)).stringValue ()) ;
      index_7821_IDX.increment () ;
      enumerator_7821.gotoNextObject () ;
    }
  }
  result.appendString (" COMMA_HERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n") ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 182)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 182)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 182)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 182)).uintValue ())) ;
  }
  result.appendString ("const char * kInsertErrorMessage = \"@") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" insert error: '%K' already in map\" ;\nconst char * kShadowErrorMessage = \"\" ;\nperformInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n") ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 182)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 182)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 182)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 182)).uintValue ())) ;
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::add_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = *this ;\n  cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" enumerator (inOperand, EnumerationOrder::up) ;\n  while (enumerator.hasCurrentObject ()) {\n    result.addAssign_operation (enumerator.current_lkey (HERE)") ;
  GALGAS_uint index_8861_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8861 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8861.hasCurrentObject ()) {
      result.appendString (", enumerator.current_") ;
      result.appendString (enumerator_8861.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 199)).stringValue ()) ;
      result.appendString (" (HERE)") ;
      index_8861_.increment () ;
      enumerator_8861.gotoNextObject () ;
    }
  }
  result.appendString (", inCompiler COMMA_THERE) ;\n    enumerator.gotoNextObject () ;\n  }\n  return result ;\n}\n\n") ;
  GALGAS_uint index_9109_ (0) ;
  if (in_INSERT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_insertMethodListAST enumerator_9109 (in_INSERT_5F_METHOD_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9109.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_9109.current_mInsertMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 209)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GALGAS_lstring inKey") ;
      GALGAS_uint index_9396_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9396 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_9396.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_9396.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 211)).stringValue ()) ;
          result.appendString (" inArgument") ;
          result.appendString (index_9396_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 211)).stringValue ()) ;
          index_9396_IDX.increment () ;
          enumerator_9396.gotoNextObject () ;
        }
      }
      result.appendString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = nullptr ;\n  macroMyNew (p, cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" (inKey") ;
      GALGAS_uint index_9782_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9782 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_9782.hasCurrentObject ()) {
          result.appendString (", inArgument") ;
          result.appendString (index_9782_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 218)).stringValue ()) ;
          index_9782_IDX.increment () ;
          enumerator_9782.gotoNextObject () ;
        }
      }
      result.appendString (" COMMA_HERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n") ;
      if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 224)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 224)).isValid ()) {
        result.incIndentation (int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 224)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 224)).uintValue ())) ;
      }
      result.appendString ("const char * kInsertErrorMessage = ") ;
      result.appendString (enumerator_9109.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 225)).stringValue ()) ;
      result.appendString (" ;\nconst char * kShadowErrorMessage = ") ;
      result.appendString (enumerator_9109.current_mShadowErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 226)).stringValue ()) ;
      result.appendString (" ;\nperformInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n") ;
      if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 224)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 224)).isValid ()) {
        result.incIndentation (- int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 224)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 224)).uintValue ())) ;
      }
      result.appendString ("}\n\n") ;
      index_9109_.increment () ;
      enumerator_9109.gotoNextObject () ;
    }
  }
  GALGAS_uint index_10365_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_10365 (in_SEARCH_5F_METHOD_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10365.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nconst char * kSearchErrorMessage_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_10365.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 234)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_10365.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 234)).stringValue ()) ;
      result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::method_") ;
      result.appendString (enumerator_10365.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 236)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GALGAS_lstring inKey") ;
      GALGAS_uint index_10966_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_10966 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_10966.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_10966.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 238)).stringValue ()) ;
          result.appendString (" & outArgument") ;
          result.appendString (index_10966_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 238)).stringValue ()) ;
          index_10966_IDX.increment () ;
          enumerator_10966.gotoNextObject () ;
        }
      }
      result.appendString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  const cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) performSearch (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("inKey,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("inCompiler,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("kSearchErrorMessage_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_10365.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 244)).stringValue ()) ;
      result.appendString ("\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_THERE) ;\n  if (nullptr == p) {\n") ;
      GALGAS_uint index_11557_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_11557 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_11557.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_11557_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 248)).stringValue ()) ;
          result.appendString (".drop () ;\n") ;
          index_11557_IDX.increment () ;
          enumerator_11557.gotoNextObject () ;
        }
      }
      result.appendString ("  }else{\n    macroValidSharedObject (p, cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n") ;
      GALGAS_uint index_11792_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_11792 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_11792.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_11792_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 253)).stringValue ()) ;
          result.appendString (" = p->mProperty_") ;
          result.appendString (enumerator_11792.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 253)).stringValue ()) ;
          result.appendString (" ;\n") ;
          index_11792_IDX.increment () ;
          enumerator_11792.gotoNextObject () ;
        }
      }
      result.appendString ("  }\n}\n\n") ;
      index_10365_.increment () ;
      enumerator_10365.gotoNextObject () ;
    }
  }
  GALGAS_uint index_11983_ (0) ;
  if (in_REMOVE_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapRemoveMethodListAST enumerator_11983 (in_REMOVE_5F_METHOD_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11983.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_11983.current_mMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 262)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GALGAS_lstring inKey") ;
      GALGAS_uint index_12299_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_12299 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_12299.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_12299.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 264)).stringValue ()) ;
          result.appendString (" & outArgument") ;
          result.appendString (index_12299_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 264)).stringValue ()) ;
          index_12299_IDX.increment () ;
          enumerator_12299.gotoNextObject () ;
        }
      }
      result.appendString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  const char * kRemoveErrorMessage = ") ;
      result.appendString (enumerator_11983.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 268)).stringValue ()) ;
      result.appendString (" ;\n  capCollectionElement attributes ;\n  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;\n  cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) attributes.ptr () ;\n  if (nullptr == p) {\n") ;
      GALGAS_uint index_12923_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_12923 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_12923.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_12923_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 274)).stringValue ()) ;
          result.appendString (".drop () ;\n") ;
          index_12923_IDX.increment () ;
          enumerator_12923.gotoNextObject () ;
        }
      }
      result.appendString ("  }else{\n    macroValidSharedObject (p, cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n") ;
      GALGAS_uint index_13160_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_13160 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
        while (enumerator_13160.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_13160_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 279)).stringValue ()) ;
          result.appendString (" = p->mProperty_") ;
          result.appendString (enumerator_13160.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 279)).stringValue ()) ;
          result.appendString (" ;\n") ;
          index_13160_IDX.increment () ;
          enumerator_13160.gotoNextObject () ;
        }
      }
      result.appendString ("  }\n}\n\n") ;
      index_11983_.increment () ;
      enumerator_11983.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_2 = in_HAS_5F_INSERT_5F_OR_5F_REPLACE.boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::setter_insertOrReplace (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("GALGAS_lstring inKey") ;
    GALGAS_uint index_13614_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_13614 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_13614.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_13614.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 290)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_13614_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 290)).stringValue ()) ;
        index_13614_IDX.increment () ;
        enumerator_13614.gotoNextObject () ;
      }
    }
    result.appendString ("\n ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * p = nullptr ;\n  macroMyNew (p, cMapElement_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (inKey") ;
    GALGAS_uint index_13964_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_13964 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_13964.hasCurrentObject ()) {
        result.appendString (", inArgument") ;
        result.appendString (index_13964_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 296)).stringValue ()) ;
        index_13964_IDX.increment () ;
        enumerator_13964.gotoNextObject () ;
      }
    }
    result.appendString (" COMMA_HERE)) ;\n  capCollectionElement attributes ;\n  attributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n  performInsertOrReplace (attributes) ;\n}\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_14289_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14289 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14289.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_14289.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 308)).stringValue ()) ;
      result.appendString (" GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_14289.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 308)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("const GALGAS_string & inKey,\n                                               ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n                                               ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;\n  const cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) attributes ;\n  GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_14289.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 313)).stringValue ()) ;
      result.appendString (" result ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    result = p->mProperty_") ;
      result.appendString (enumerator_14289.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 316)).stringValue ()) ;
      result.appendString (" ;\n  }\n  return result ;\n}\n\n") ;
      index_14289_IDX.increment () ;
      enumerator_14289.gotoNextObject () ;
    }
  }
  GALGAS_uint index_15348_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15348 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_15348.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_set") ;
      result.appendString (enumerator_15348.current_name (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 324)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 324)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_15348.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 324)).stringValue ()) ;
      result.appendString (" inAttributeValue,\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GALGAS_string inKey,\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n                           ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;\n  cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) attributes ;\n  if (nullptr != p) {\n    macroValidSharedObject (p, cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    p->mProperty_") ;
      result.appendString (enumerator_15348.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 332)).stringValue ()) ;
      result.appendString (" = inAttributeValue ;\n  }\n}\n\n") ;
      index_15348_IDX.increment () ;
      enumerator_15348.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\ncMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::readWriteAccessForWithInstruction (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCompiler,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GALGAS_string & inKey\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * result = (cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;\n  macroNullOrValidSharedObject (result, cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject,\n                       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const EnumerationOrder inOrder) :\ncGenericAbstractEnumerator (inOrder) {\n  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  const cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (const cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cMapElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  return GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (p->mProperty_lkey") ;
  GALGAS_uint index_17747_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17747 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_17747.hasCurrentObject ()) {
      result.appendString (", p->mProperty_") ;
      result.appendString (enumerator_17747.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 364)).stringValue ()) ;
      index_17747_.increment () ;
      enumerator_17747.gotoNextObject () ;
    }
  }
  result.appendString (") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_lstring cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current_lkey (LOCATION_ARGS) const {\n  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cMapElement) ;\n  return p->mProperty_lkey ;\n}\n\n") ;
  GALGAS_uint index_18248_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18248 (in_ATTRIBUTE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_18248.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_18248.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 379)).stringValue ()) ;
      result.appendString (" cEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_18248.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 379)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  const cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentObjectPtr (THERE) ;\n  macroValidSharedObject (p, cMapElement_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  return p->mProperty_") ;
      result.appendString (enumerator_18248.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 382)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_18248_IDX.increment () ;
      enumerator_18248.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionalTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_optionalTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_optionalTypeDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("optional @").add_operation (temp_0.readProperty_optionalTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 29)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionalTypeDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                      GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                      GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_optionalTypeDeclarationAST temp_0 = this ;
  const GALGAS_optionalTypeDeclarationAST temp_1 = this ;
  GALGAS_lstring var_selfKey_2351 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_optionalTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 42)), temp_1.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_optionalTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_selfKey_2351, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 43)) ;
  }
  const GALGAS_optionalTypeDeclarationAST temp_3 = this ;
  const GALGAS_optionalTypeDeclarationAST temp_4 = this ;
  GALGAS_lstring var_unwrappedKey_2502 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_3.readProperty_unwrappedTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 44)), temp_4.readProperty_unwrappedTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_selfKey_2351, var_unwrappedKey_2502 COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 45)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionalTypeDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::method_enterDeclarationInSemanticContext (GALGAS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                                const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                                const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_getterMap var_getterMap_3371 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_3371, inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 59)) ;
  }
  GALGAS_unifiedTypeMapEntry var_boolTypeEntry_3450 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GALGAS_string ("bool").getter_nowhere (SOURCE_FILE ("declaration-type-optional.galgas", 61)), var_boolTypeEntry_3450, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 61)) ;
  }
  GALGAS_propertyMap var_propertyMap_3486 = GALGAS_propertyMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_optionalTypeDeclarationAST temp_0 = this ;
  var_propertyMap_3486.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("isSome"), temp_0.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_AccessControl::class_func_publicAccess (SOURCE_FILE ("declaration-type-optional.galgas", 65)), GALGAS_bool (true), var_boolTypeEntry_3450, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 63)) ;
  }
  {
  const GALGAS_optionalTypeDeclarationAST temp_1 = this ;
  var_propertyMap_3486.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("isNil"), temp_1.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_AccessControl::class_func_publicAccess (SOURCE_FILE ("declaration-type-optional.galgas", 71)), GALGAS_bool (true), var_boolTypeEntry_3450, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 69)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_3823 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GALGAS_setterMap var_setterMap_3865 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  GALGAS_initializerMap var_initializerMap_3904 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_optionalTypeDeclarationAST temp_2 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_2.readProperty_optionalTypeName (), GALGAS_bool (false), var_initializerMap_3904, var_getterMap_3371, var_setterMap_3865, var_instanceMethodMap_3823, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 79)) ;
  }
  GALGAS_typeFeatures var_features_4370 = GALGAS_typeFeatures::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_optionalTypeDeclarationAST temp_4 = this ;
    test_3 = temp_4.readProperty_equatable ().boolEnum () ;
    if (kBoolTrue == test_3) {
      var_features_4370.orAssign_operation(GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-optional.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 97)) ;
    }
  }
  {
  const GALGAS_optionalTypeDeclarationAST temp_5 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_5.readProperty_optionalTypeName (), var_features_4370, GALGAS_bool (true), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 99)) ;
  }
  GALGAS_unifiedTypeMapEntry var_unwrappedType_4731 ;
  {
  const GALGAS_optionalTypeDeclarationAST temp_6 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_6.readProperty_unwrappedTypeName (), var_unwrappedType_4731, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 107)) ;
  }
  const GALGAS_optionalTypeDeclarationAST temp_7 = this ;
  const GALGAS_optionalTypeDeclarationAST temp_8 = this ;
  const GALGAS_optionalTypeDeclarationAST temp_9 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_4779 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_7.readProperty_optionalTypeName (), temp_8.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optional.galgas", 113)), GALGAS_typeKindEnum::class_func_listType (SOURCE_FILE ("declaration-type-optional.galgas", 114)), GALGAS_bool (false), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_propertyMap_3486, GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_3904, GALGAS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_3371, var_setterMap_3865, var_instanceMethodMap_3823, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), var_unwrappedType_4731, GALGAS_subscriptMap::init (inCompiler COMMA_HERE), GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_4370, GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optional.galgas", 132)), GALGAS_string ("optional-").add_operation (temp_9.readProperty_optionalTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-optional.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 133)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-optional.galgas", 134)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_4779.readProperty_typeName (), var_typeDefinition_4779, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 136)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionalTypeDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::method_addAssociatedElement (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionalTypeDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_optionalTypeDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_6544 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_optionalTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 156)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6544, var_nameForUsefulness_6544, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 157)) ;
  }
  const GALGAS_optionalTypeDeclarationAST temp_1 = this ;
  GALGAS_lstring var_unwrappedTypeNameForUsefulness_6704 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_unwrappedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 158)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_6544, var_unwrappedTypeNameForUsefulness_6704 COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 159)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_optionalTypeDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_isUsefull ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_6544  COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 161)) ;
    }
  }
  const GALGAS_optionalTypeDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_optionalType_6986 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_optionalTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 164)) ;
  const GALGAS_optionalTypeDeclarationAST temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_unwrappedType_7064 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_unwrappedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 165)) ;
  const GALGAS_optionalTypeDeclarationAST temp_6 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("optional type ").add_operation (temp_6.readProperty_optionalTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 167)), GALGAS_optionalTypeForGeneration::init_21__21_ (var_optionalType_6986, var_unwrappedType_7064, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 166)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionalTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_string & outArgument_outHeader,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_optionalTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_0.readProperty_unwrappedType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 186)) ;
  const GALGAS_optionalTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_8043 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 187)) ;
  const GALGAS_optionalTypeForGeneration temp_2 = this ;
  const GALGAS_optionalTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_optionalTypeGenerationTemplate_optionalTypeHeader_31_ (inCompiler, var_selfTypeDefinition_8043.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 190)), extensionGetter_identifierRepresentation (temp_3.readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 191)) COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 188))) ;
  const GALGAS_optionalTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_8043.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 195)), var_selfTypeDefinition_8043.readProperty_isConcrete (), var_selfTypeDefinition_8043.readProperty_initializerMap (), var_selfTypeDefinition_8043.readProperty_classFunctionMap (), var_selfTypeDefinition_8043.readProperty_getterMap (), var_selfTypeDefinition_8043.readProperty_setterMap (), var_selfTypeDefinition_8043.readProperty_instanceMethodMap (), var_selfTypeDefinition_8043.readProperty_classMethodMap (), var_selfTypeDefinition_8043.readProperty_readSubscriptMap (), var_selfTypeDefinition_8043.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_8043.readProperty_features (), var_selfTypeDefinition_8043.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_8043.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_8043.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 193))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 193)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionalTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outImplementation,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_optionalTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_unwrappedType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 217)) ;
  const GALGAS_optionalTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 218)) ;
  const GALGAS_optionalTypeForGeneration temp_2 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_9533 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 219)) ;
  const GALGAS_optionalTypeForGeneration temp_3 = this ;
  const GALGAS_optionalTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_optionalTypeGenerationTemplate_optionalTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_9533.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 222)), extensionGetter_identifierRepresentation (temp_4.readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 223)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_9533.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 224)) COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 220))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'optionalTypeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_optionalTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_optionalTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_optionalTypeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_optionalTypeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_optionalTypeGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionalTypeGenerationTemplate optionalTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionalTypeGenerationTemplate_optionalTypeHeader_31_ (Compiler * inCompiler,
                                                                                         const GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_string & in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: ").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_optional.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" optional"), inCompiler COMMA_SOURCE_FILE ("GALGAS_optional.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Private property\n  private: GALGAS_") ;
  result.appendString (in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" mValue ;\n  private: OptionalState mState ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Dedicaced constructors\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue) ;\n  public: static GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" init_nil (void) ;\n\n  public: bool isValuated (void) const ;\n  public: inline GALGAS_") ;
  result.appendString (in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" unwrappedValue (void) const {\n    return mValue ;\n  }\n\n//--------------------------------- GALGAS read only properties\n  public: inline GALGAS_bool readProperty_isNil (void) const {\n    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;\n  }\n\n  public: inline GALGAS_bool readProperty_isSome (void) const {\n    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;\n  }\n\n  \n//--- Methods that every type should implement\n  public: virtual bool isValid (void) const override ;\n  \n  public: virtual void drop (void) override ;\n\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionalTypeGenerationTemplate optionalTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionalTypeGenerationTemplate_optionalTypeSpecificImplementation (Compiler * inCompiler,
                                                                                                     const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                                     const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                     const GALGAS_string & in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER,
                                                                                                     const GALGAS_bool & /* in_GENERATE_5F_COMPARISON */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Optional @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_optional.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmValue (),\nmState (OptionalState::invalid) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\nAC_GALGAS_root (),\nmValue (inSource),\nmState (OptionalState::valuated) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init_nil (void) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.mState = OptionalState::isNil ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  bool result = false ;\n  switch (mState) {\n  case OptionalState::invalid :\n    break ;\n  case OptionalState::isNil :\n    result = true ;\n    break ;\n  case OptionalState::valuated :\n    result = mValue.isValid () ;\n    break ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValuated (void) const {\n  return (mState == OptionalState::valuated) && mValue.isValid () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n  mState = OptionalState::invalid ;\n  mValue = GALGAS_") ;
  result.appendString (in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"<optional @\") ;\n  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;\n  ioString.appendCString (\": \") ;\n  switch (mState) {\n  case OptionalState::invalid :\n    ioString.appendCString (\"invalid\") ;\n    break ;\n  case OptionalState::isNil :\n    ioString.appendCString (\"nil\") ;\n    break ;\n  case OptionalState::valuated :\n    mValue.description (ioString, inIndentation) ;\n    break ;\n  }\n  ioString.appendCString (\">\") ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

