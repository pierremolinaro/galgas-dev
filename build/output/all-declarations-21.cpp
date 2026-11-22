#include "all-declarations-21.h"
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
  GGS_lstring var_nameForUsefulness_15881 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 402)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15881, var_nameForUsefulness_15881, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 403)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_externTypeDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_15881  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 405)) ;
    }
  }
  const GGS_externTypeDeclarationAST temp_3 = this ;
  UpEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ enumerator_16159 (temp_3.readProperty_externTypeInitializerList ()) ;
  while (enumerator_16159.hasCurrentObject ()) {
    const GGS_externTypeDeclarationAST temp_4 = this ;
    GGS_lstring var_initializerNameForUsefulness_16196 = function_initializerNameForUsefulEntitiesGraph (temp_4.readProperty_mExternTypeName (), extensionGetter_initializerSignature (enumerator_16159.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 411)), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 409)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_16196, var_initializerNameForUsefulness_16196, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 413)) ;
    }
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_16196, var_nameForUsefulness_15881 COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 414)) ;
    }
    enumerator_16159.gotoNextObject () ;
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
  GGS_unifiedTypeDefinition var_selfTypeDefinition_17501 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 441)) ;
  const GGS_externTypeDeclarationForGeneration temp_1 = this ;
  const GGS_externTypeDeclarationForGeneration temp_2 = this ;
  const GGS_externTypeDeclarationForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_typeGenerationTemplate::class_func_externTypeHeader_31_ (var_selfTypeDefinition_17501.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 444)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 442)) ;
  const GGS_externTypeDeclarationForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForType (var_selfTypeDefinition_17501.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 450)), var_selfTypeDefinition_17501.readProperty_isConcrete (), var_selfTypeDefinition_17501.readProperty_initializerMap (), var_selfTypeDefinition_17501.readProperty_classFunctionMap (), var_selfTypeDefinition_17501.readProperty_getterMap (), var_selfTypeDefinition_17501.readProperty_setterMap (), var_selfTypeDefinition_17501.readProperty_instanceMethodMap (), var_selfTypeDefinition_17501.readProperty_classMethodMap (), var_selfTypeDefinition_17501.readProperty_readSubscriptMap (), var_selfTypeDefinition_17501.readProperty_writeSubscriptMap (), var_selfTypeDefinition_17501.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_17501.readProperty_features (), var_selfTypeDefinition_17501.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_17501.readProperty_supportArrayLiteral (), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 448)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 448)) ;
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
  result.setter_insertKey (GGS_string ("string").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 350)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 350)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 350)) ;
  }
  {
  result.setter_insertKey (GGS_string ("char").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 351)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 351)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 351)) ;
  }
  {
  result.setter_insertKey (GGS_string ("uint").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 352)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 352)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 352)) ;
  }
  {
  result.setter_insertKey (GGS_string ("u64").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 353)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 353)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 353)) ;
  }
  {
  result.setter_insertKey (GGS_string ("sint").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 354)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 354)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 354)) ;
  }
  {
  result.setter_insertKey (GGS_string ("s64").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 355)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 355)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 355)) ;
  }
  {
  result.setter_insertKey (GGS_string ("f64").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 356)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_double (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 356)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 356)) ;
  }
  {
  result.setter_insertKey (GGS_string ("bigint").getter_here (inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 357)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 357)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 357)) ;
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
  UpEnumerator__5B_lexicalAttributeAST_5D_ enumerator_13944 (constinArgument_inLexicalAttributeList) ;
  while (enumerator_13944.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inLexicalTypeMap.getter_contains (enumerator_13944.current (HERE).readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 377)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_lexicalTypeEnum var_lexicalType_14128 ;
        constinArgument_inLexicalTypeMap.method_searchKey (enumerator_13944.current (HERE).readProperty_mTypeName (), var_lexicalType_14128, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 378)) ;
        {
        ioArgument_ioLexicalAttributeMap.setter_insertKey (enumerator_13944.current (HERE).readProperty_mName (), var_lexicalType_14128, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 379)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_m_14246 = GGS_string::makeEmptyString () ;
      var_m_14246.plusAssignOperation(GGS_string ("the @").add_operation (enumerator_13944.current (HERE).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 382)).add_operation (GGS_string (" type is not a valid lexical attribute type; are allowed:"), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 382)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 382)) ;
      UpEnumerator_lexicalTypeMap enumerator_14382 (constinArgument_inLexicalTypeMap) ;
      while (enumerator_14382.hasCurrentObject ()) {
        var_m_14246.plusAssignOperation(GGS_string (" @").add_operation (enumerator_14382.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 384)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 384)) ;
        enumerator_14382.gotoNextObject () ;
        if (enumerator_14382.hasCurrentObject ()) {
          var_m_14246.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 386)) ;
        }
      }
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_13944.current (HERE).readProperty_mTypeName ().readProperty_location (), var_m_14246, fixItArray1  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 388)) ;
    }
    enumerator_13944.gotoNextObject () ;
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
      GGS_semanticInstructionForGeneration var_instruction_3148 = constinArgument_inTestedSignature.readSubcript__3F_ (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 73)), inCompiler COMMA_HERE) ;
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
        GGS_semanticInstructionForGeneration var_instruction_3756 = constinArgument_inReferenceSignature.readSubcript__3F_ (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas4", 83)), inCompiler COMMA_HERE) ;
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
  GGS_string var_projectName_2457 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas4", 46)) ;
  GGS_string var_s_31__2509 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_project (var_projectName_2457, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 47)) ;
  var_s_31__2509.method_writeToFile (constinArgument_inProjectPath.add_operation (GGS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 48)).add_operation (var_projectName_2457, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 48)).add_operation (GGS_string (".galgas4project"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 48)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 48)) ;
  GGS_string var_galgas_5F_sources_5F_DIR_2678 = constinArgument_inProjectPath.add_operation (GGS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 50)) ;
  var_galgas_5F_sources_5F_DIR_2678.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 51)) ;
  GGS_string var_s_32__2770 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_cocoa (var_projectName_2457, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 52)) ;
  var_s_32__2770.method_writeToFile (var_galgas_5F_sources_5F_DIR_2678.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 53)).add_operation (var_projectName_2457, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 53)).add_operation (GGS_string ("-cocoa.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 53)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 53)) ;
  GGS_string var_s_33__2911 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_grammar (var_projectName_2457, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 54)) ;
  var_s_33__2911.method_writeToFile (var_galgas_5F_sources_5F_DIR_2678.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 55)).add_operation (var_projectName_2457, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 55)).add_operation (GGS_string ("-grammar.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 55)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 55)) ;
  GGS_string var_s_34__3056 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_lexique (var_projectName_2457, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 56)) ;
  var_s_34__3056.method_writeToFile (var_galgas_5F_sources_5F_DIR_2678.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 57)).add_operation (var_projectName_2457, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 57)).add_operation (GGS_string ("-lexique.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 57)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 57)) ;
  GGS_string var_s_36__3201 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_program (var_projectName_2457, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 58)) ;
  var_s_36__3201.method_writeToFile (var_galgas_5F_sources_5F_DIR_2678.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 59)).add_operation (var_projectName_2457, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 59)).add_operation (GGS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 59)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 59)) ;
  GGS_string var_s_37__3345 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_semantics (var_projectName_2457, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 60)) ;
  var_s_37__3345.method_writeToFile (var_galgas_5F_sources_5F_DIR_2678.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 61)).add_operation (var_projectName_2457, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 61)).add_operation (GGS_string ("-semantics.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 61)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 61)) ;
  GGS_string var_s_38__3494 = GGS_projectCreationFileWrapper::class_func_PROJECT_5F_syntax (var_projectName_2457, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 62)) ;
  var_s_38__3494.method_writeToFile (var_galgas_5F_sources_5F_DIR_2678.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 63)).add_operation (var_projectName_2457, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 63)).add_operation (GGS_string ("-syntax.galgas4"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 63)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 63)) ;
  {
  routine_println_3F_ (GGS_string ("*** DONE ***"), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 65)) ;
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
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inProjectPath.getter_count (SOURCE_FILE ("projectCreation.galgas4", 71)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_println_3F_ (GGS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 72)).add_operation (GGS_string (" option) ***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 72)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 72)) ;
      }
      GGS_string var_projectName_4058 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas4", 74)) ;
      GGS_bool var_ok_4118 = var_projectName_4058.getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 75)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas4", 75)) ;
      GGS_uint var_idx_4178 = GGS_uint (uint32_t (1U)) ;
      if (var_projectName_4058.getter_count (SOURCE_FILE ("projectCreation.galgas4", 77)).isValid ()) {
        uint32_t variant_4190 = var_projectName_4058.getter_count (SOURCE_FILE ("projectCreation.galgas4", 77)).uintValue () ;
        bool loop_4190 = true ;
        while (loop_4190) {
          loop_4190 = GGS_bool (ComparisonKind::lowerThan, var_idx_4178.objectCompare (var_projectName_4058.getter_count (SOURCE_FILE ("projectCreation.galgas4", 78)))).operator_and (var_ok_4118 COMMA_SOURCE_FILE ("projectCreation.galgas4", 78)).isValid () ;
          if (loop_4190) {
            loop_4190 = GGS_bool (ComparisonKind::lowerThan, var_idx_4178.objectCompare (var_projectName_4058.getter_count (SOURCE_FILE ("projectCreation.galgas4", 78)))).operator_and (var_ok_4118 COMMA_SOURCE_FILE ("projectCreation.galgas4", 78)).boolValue () ;
          }
          if (loop_4190 && (0 == variant_4190)) {
            loop_4190 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas4", 77)) ;
          }
          if (loop_4190) {
            variant_4190 -= 1 ;
            GGS_char var_c_4275 = var_projectName_4058.getter_characterAtIndex (var_idx_4178, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 79)) ;
            var_ok_4118 = var_c_4275.getter_isalnum (SOURCE_FILE ("projectCreation.galgas4", 80)).operator_or (GGS_bool (ComparisonKind::equal, var_c_4275.objectCompare (GGS_char (utf32 (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas4", 80)) ;
            var_idx_4178.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 81)) ;
          }
        }
      }
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_ok_4118.operator_not (SOURCE_FILE ("projectCreation.galgas4", 83)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          routine_println_3F_ (GGS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName_4058, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 84)).add_operation (GGS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character."), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 85)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 84)) ;
          }
        }
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_ok_4118.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          var_ok_4118 = constinArgument_inProjectPath.getter_directoryExists (SOURCE_FILE ("projectCreation.galgas4", 89)).operator_not (SOURCE_FILE ("projectCreation.galgas4", 89)) ;
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_ok_4118.operator_not (SOURCE_FILE ("projectCreation.galgas4", 90)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              {
              routine_println_3F_ (GGS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 91)).add_operation (GGS_string ("' directory already exists.***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas4", 91)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 91)) ;
              }
            }
          }
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_ok_4118.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          {
          routine_performProjectCreation_3F_ (constinArgument_inProjectPath, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas4", 95)) ;
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
//Overriding extension func '@galgas3GrammarComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_galgas_33_GrammarComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  result = GGS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 242)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@galgas3SyntaxComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_galgas_33_SyntaxComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  result = GGS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 248)) ;
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
  result = GGS_string ("predefined type @").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 254)) ;
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
  result = GGS_string ("extern function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 260)) ;
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
    test_0 = constinArgument_inExtensionGetterMapForBuildingContext.getter_contains (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 283)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_extensionGetterMapForType var_extensionGetterMapForType_12250 ;
      constinArgument_inExtensionGetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionGetterMapForType_12250, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 284)) ;
      UpEnumerator_extensionGetterMapForType enumerator_12304 (var_extensionGetterMapForType_12250) ;
      while (enumerator_12304.hasCurrentObject ()) {
        GGS__5B_functionSignatureElement_5D_ var_formalArgumentList_12371 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_12445 (enumerator_12304.current (HERE).readProperty_mInputFormalParameterList ()) ;
        while (enumerator_12445.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_12555 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12445.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_12555, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 288)) ;
          }
          var_formalArgumentList_12371.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_12445.current (HERE).readProperty_mFormalSelector (), var_typeIndex_12555, enumerator_12445.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_12445.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 289)) ;
          enumerator_12445.gotoNextObject () ;
        }
        GGS_unifiedTypeMapEntry var_returnedType_12846 ;
        {
        extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12304.current (HERE).readProperty_mResultTypeName (), var_returnedType_12846, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 295)) ;
        }
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::equal, enumerator_12304.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas4", 296)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              test_2 = ioArgument_ioGetterMap.getter_contains (enumerator_12304.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 297)).boolEnum () ;
              if (GalgasBool::boolTrue == test_2) {
                {
                ioArgument_ioGetterMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas4", 298)), enumerator_12304.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 298)) ;
                }
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, enumerator_12304.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas4", 300)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = ioArgument_ioGetterMap.getter_contains (enumerator_12304.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 301)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  {
                  ioArgument_ioGetterMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas4", 302)), enumerator_12304.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 302)) ;
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = constinArgument_inIsClass.operator_and (GGS_bool (ComparisonKind::equal, enumerator_12304.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas4", 304)))) COMMA_SOURCE_FILE ("semanticContext.galgas4", 304)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                ioArgument_ioGetterMap.setter_insertKey (enumerator_12304.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 307)), var_formalArgumentList_12371, enumerator_12304.current (HERE).readProperty_lkey ().readProperty_location (), GGS_bool (true), var_returnedType_12846, GGS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas4", 312)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 305)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_5) {
              {
              ioArgument_ioGetterMap.setter_insertKey (enumerator_12304.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 318)), var_formalArgumentList_12371, enumerator_12304.current (HERE).readProperty_lkey ().readProperty_location (), GGS_bool (true), var_returnedType_12846, enumerator_12304.current (HERE).readProperty_mQualifier (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 316)) ;
              }
            }
          }
        }
        enumerator_12304.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = constinArgument_inExtensionMethodMapForBuildingContext.getter_contains (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 330)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_extensionMethodMapForType var_extensionMethodMapForType_14252 ;
      constinArgument_inExtensionMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionMethodMapForType_14252, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 331)) ;
      UpEnumerator_extensionMethodMapForType enumerator_14306 (var_extensionMethodMapForType_14252) ;
      while (enumerator_14306.hasCurrentObject ()) {
        GGS__5B_formalParameterSignatureElement_5D_ var_formalArgumentList_14345 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_formalParameterAST_5D_ enumerator_14443 (enumerator_14306.current (HERE).readProperty_mFormalParameterList ()) ;
        while (enumerator_14443.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_14580 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_14443.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_14580, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 335)) ;
          }
          var_formalArgumentList_14345.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_14443.current (HERE).readProperty_mFormalSelector (), var_typeIndex_14580, enumerator_14443.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_14443.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 339)) ;
          enumerator_14443.gotoNextObject () ;
        }
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = GGS_bool (ComparisonKind::equal, enumerator_14306.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas4", 345)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GalgasBool test_8 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_8) {
              test_8 = ioArgument_ioInstanceMethodMap.getter_contains (enumerator_14306.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 346)).boolEnum () ;
              if (GalgasBool::boolTrue == test_8) {
                {
                ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas4", 347)), enumerator_14306.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 347)) ;
                }
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, enumerator_14306.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas4", 349)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = ioArgument_ioInstanceMethodMap.getter_contains (enumerator_14306.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 350)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  {
                  ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas4", 351)), enumerator_14306.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 351)) ;
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = constinArgument_inIsClass.operator_and (GGS_bool (ComparisonKind::equal, enumerator_14306.current (HERE).readProperty_mQualifier ().objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas4", 353)))) COMMA_SOURCE_FILE ("semanticContext.galgas4", 353)).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                {
                ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_14306.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 356)), var_formalArgumentList_14345, enumerator_14306.current (HERE).readProperty_lkey ().readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas4", 360)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 354)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              {
              ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_14306.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 366)), var_formalArgumentList_14345, enumerator_14306.current (HERE).readProperty_lkey ().readProperty_location (), GGS_bool (true), enumerator_14306.current (HERE).readProperty_mQualifier (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 364)) ;
              }
            }
          }
        }
        enumerator_14306.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = constinArgument_inExtensionSetterMapForBuildingContext.getter_contains (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 377)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GGS_extensionSetterMapForType var_extensionSetterMapForType_16141 ;
      constinArgument_inExtensionSetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionSetterMapForType_16141, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 378)) ;
      UpEnumerator_extensionSetterMapForType enumerator_16195 (var_extensionSetterMapForType_16141) ;
      while (enumerator_16195.hasCurrentObject ()) {
        GGS__5B_formalParameterSignatureElement_5D_ var_formalArgumentList_16269 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_formalParameterAST_5D_ enumerator_16333 (enumerator_16195.current (HERE).readProperty_mFormalParameterList ()) ;
        while (enumerator_16333.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_16428 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16333.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_16428, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 382)) ;
          }
          var_formalArgumentList_16269.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_16333.current (HERE).readProperty_mFormalSelector (), var_typeIndex_16428, enumerator_16333.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_16333.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 383)) ;
          enumerator_16333.gotoNextObject () ;
        }
        {
        ioArgument_ioSetterMap.setter_insertKey (enumerator_16195.current (HERE).readProperty_lkey (), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas4", 391)), var_formalArgumentList_16269, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas4", 394)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 389)) ;
        }
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          test_13 = constinArgument_inAcceptSetters.operator_not (SOURCE_FILE ("semanticContext.galgas4", 397)).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            GenericArray <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_16195.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a class does not accept any mutating proc; use proc instead"), fixItArray14  COMMA_SOURCE_FILE ("semanticContext.galgas4", 398)) ;
          }
        }
        enumerator_16195.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = constinArgument_inExtensionInitializerMapForBuildingContext.getter_contains (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas4", 403)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GGS_extensionInitializerMapForType var_initializerMapForType_17220 ;
      constinArgument_inExtensionInitializerMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_initializerMapForType_17220, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 404)) ;
      UpEnumerator_extensionInitializerMapForType enumerator_17266 (var_initializerMapForType_17220) ;
      while (enumerator_17266.hasCurrentObject ()) {
        GGS__5B_functionSignatureElement_5D_ var_formalArgumentList_17329 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_17386 (enumerator_17266.current (HERE).readProperty_mFormalParameterList ()) ;
        while (enumerator_17386.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_17478 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17386.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_17478, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 408)) ;
          }
          var_formalArgumentList_17329.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_17386.current (HERE).readProperty_mFormalSelector (), var_typeIndex_17478, enumerator_17386.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_17386.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 409)) ;
          enumerator_17386.gotoNextObject () ;
        }
        {
        ioArgument_ioInitializerMap.setter_insertKey (enumerator_17266.current (HERE).readProperty_lkey (), var_formalArgumentList_17329, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 411)) ;
        }
        enumerator_17266.gotoNextObject () ;
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
  GGS__5B_functionSignatureElement_5D_ var_functionSignature_18591 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_18663 (temp_0.readProperty_mFormalArgumentList ()) ;
  while (enumerator_18663.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterTypeIndex_18750 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18663.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_18750, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 431)) ;
    }
    var_functionSignature_18591.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_18663.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_18750, enumerator_18663.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), enumerator_18663.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 432)) ;
    enumerator_18663.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_resultTypeIndex_18978 ;
  {
  const GGS_externFunctionDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mResultTypeName (), var_resultTypeIndex_18978, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 435)) ;
  }
  {
  const GGS_externFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_2.readProperty_mFunctionName (), var_functionSignature_18591, var_resultTypeIndex_18978, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 437)) ;
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
  ioArgument_ioSemanticContext.mProperty_mSyntaxComponentMapForSemanticAnalysis.setter_insertKey (temp_0.readProperty_mSyntaxComponentName (), temp_1.readProperty_mLexiqueName (), temp_2.readProperty_mNonterminalDeclarationList (), temp_3.readProperty_mRuleList (), temp_4.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 456)) ;
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
  GGS_grammarLabelMap var_grammarLabelMap_20825 = GGS_grammarLabelMap::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  UpEnumerator__5B_nonTerminalLabelAST_5D_ enumerator_20878 (temp_0.readProperty_mStartSymbolLabelList ()) ;
  while (enumerator_20878.hasCurrentObject ()) {
    GGS__5B_formalParameterSignatureElement_5D_ var_formalArgumentList_20972 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalParameterAST_5D_ enumerator_21032 (enumerator_20878.current (HERE).readProperty_mFormalArgumentList ()) ;
    while (enumerator_21032.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentType_21121 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_21032.current (HERE).readProperty_mFormalArgumentTypeName (), var_argumentType_21121, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 482)) ;
      }
      var_formalArgumentList_20972.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_21032.current (HERE).readProperty_mFormalSelector (), var_argumentType_21121, enumerator_21032.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_21032.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas4", 483)) ;
      enumerator_21032.gotoNextObject () ;
    }
    {
    var_grammarLabelMap_20825.setter_insertKey (enumerator_20878.current (HERE).readProperty_mLabelName (), var_formalArgumentList_20972, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 489)) ;
    }
    enumerator_20878.gotoNextObject () ;
  }
  {
  const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  ioArgument_ioSemanticContext.mProperty_grammarMap.setter_insertGrammar (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_20825, temp_2.readProperty_mHasIndexing ().readProperty_bool (), temp_3.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 495)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3GrammarComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                         GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                         GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                         GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                         GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                         GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
  GGS_lstring var_key_22871 = GGS_lstring::init_21__21_ (GGS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 527)), temp_1.readProperty_mGrammarComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_22871, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 528)) ;
  }
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_23039 (temp_3.readProperty_mSyntaxComponents ()) ;
  while (enumerator_23039.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_22871, GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (enumerator_23039.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 530)), enumerator_23039.current (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas4", 530)) ;
    }
    enumerator_23039.gotoNextObject () ;
  }
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
  GGS_lstring var_key_23865 = GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 544)), temp_1.readProperty_mSyntaxComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_galgas_33_SyntaxComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_23865, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 545)) ;
  }
  {
  const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_23865, GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 546)), temp_4.readProperty_mLexiqueName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas4", 546)) ;
  }
  const GGS_galgas_33_SyntaxComponentAST temp_5 = this ;
  UpEnumerator__5B_syntaxRuleAST_5D_ enumerator_24153 (temp_5.readProperty_mRuleList ()) ;
  while (enumerator_24153.hasCurrentObject ()) {
    UpEnumerator__5B_syntaxRuleLabelAST_5D_ enumerator_24190 (enumerator_24153.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_24190.hasCurrentObject ()) {
      UpEnumerator__5B_formalParameterAST_5D_ enumerator_24231 (enumerator_24190.current (HERE).readProperty_mFormalArguments ()) ;
      while (enumerator_24231.hasCurrentObject ()) {
        switch (enumerator_24231.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_23865, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_24231.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas4", 551)), enumerator_24231.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas4", 551)) ;
            }
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          break ;
        }
        enumerator_24231.gotoNextObject () ;
      }
      enumerator_24190.gotoNextObject () ;
    }
    enumerator_24153.gotoNextObject () ;
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
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas4", 569)) ;
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
  result.plusAssignOperation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 49)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 49)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 49)) ;
  result.plusAssignOperation(GGS_string (", toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 50)) ;
  const GGS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result.plusAssignOperation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 51)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 51)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 51)) ;
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
  result.plusAssignOperation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 80)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 80)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 80)) ;
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
  result = temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 108)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 108)) ;
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
  UpEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ enumerator_5648 (temp_1.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_5648.hasCurrentObject ()) {
    result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_5648.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 130)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 130)) ;
    enumerator_5648.gotoNextObject () ;
    if (enumerator_5648.hasCurrentObject ()) {
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
  GGS_sortedTokenArray var_tokenSortedList_7877 ;
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_7868 ; // Joker input parameter
  GGS_bool joker_7894 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_7868, var_tokenSortedList_7877, joker_7894, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 181)) ;
  result = GGS_string::makeEmptyString () ;
  DownEnumerator_sortedTokenArray enumerator_7929 (var_tokenSortedList_7877) ;
  while (enumerator_7929.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string ("if scanningOk && self.testForInputString ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 184)) ;
    result.plusAssignOperation(enumerator_7929.current (HERE).readProperty_mName ().getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 185)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 185)) ;
    result.plusAssignOperation(GGS_string (", advance: true) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 186)) ;
    result.plusAssignOperation(GGS_string ("  tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 187)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 187)).add_operation (enumerator_7929.current (HERE).readProperty_mTerminalName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 187)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 187)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 187)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 187)) ;
    result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 188)) ;
    enumerator_7929.gotoNextObject () ;
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
  result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 199)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 199)) ;
  result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 200)) ;
  {
  result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 201)) ;
  }
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_8714 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_8714.hasCurrentObject ()) {
    result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8714.current (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 203)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 203)) ;
    enumerator_8714.gotoNextObject () ;
  }
  {
  result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 205)) ;
  }
  result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas4", 206)) ;
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
                                                                               GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GGS_bool & ioArgument_ioUseColumnMarker,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_templateInstructionForGeneration_5D_ enumerator_1919 (constinArgument_inInstructionList) ;
  while (enumerator_1919.hasCurrentObject ()) {
    callExtensionMethod_templateCodeGeneration ((cPtr_templateInstructionForGeneration *) enumerator_1919.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 33)) ;
    enumerator_1919.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionStringForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                 GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                 GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
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
                                                                                     GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GGS_bool & /* ioArgument__5F_ioUseColumnMarker */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_cppName_3127 ;
  const GGS_templateInstructionExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName_3127, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 63)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendString (").add_operation (var_cppName_3127, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 64)).add_operation (GGS_string (".stringValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 64)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 64)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateBlockInstructionForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_indendationVarCppName_3725 ;
  const GGS_templateBlockInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_3725, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 76)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_indendationVarCppName_3725, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 77)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 77)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 77)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  result.incIndentation (int32_t (").add_operation (var_indendationVarCppName_3725, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 78)).add_operation (GGS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 78)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 78)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 79)) ;
  {
  const GGS_templateBlockInstructionForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mBlockInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 80)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_indendationVarCppName_3725, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 88)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 88)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 88)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  result.incIndentation (- int32_t (").add_operation (var_indendationVarCppName_3725, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 89)).add_operation (GGS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 89)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 89)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 90)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                            GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                            GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
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
                                                                                             GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
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
                                                                             GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GGS_bool & ioArgument_ioUseColumnMarker,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionIfForGeneration temp_0 = this ;
  UpEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ enumerator_5970 (temp_0.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_5970.hasCurrentObject ()) {
    GGS_string var_ifVarCppName_6223 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_5970.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_6223, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 127)) ;
    GGS_string var_testVar_6250 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas4", 134)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 134)) ;
    ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 135)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GalgasBool ").add_operation (var_testVar_6250, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 136)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 136)).add_operation (var_ifVarCppName_6223, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 136)).add_operation (GGS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 136)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 136)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_testVar_6250, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 137)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 137)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 137)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolTrue : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 138)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 139)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_5970.current (HERE).readProperty_mInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 140)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 148)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 149)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolFalse : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 150)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 151)) ;
    }
    enumerator_5970.gotoNextObject () ;
  }
  {
  const GGS_templateInstructionIfForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 154)) ;
  }
  const GGS_templateInstructionIfForGeneration temp_2 = this ;
  UpEnumerator__5B_templateInstructionIfBranchForGeneration_5D_ enumerator_7273 (temp_2.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_7273.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 163)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  } break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 164)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolNotValid :\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 165)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 166)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas4", 167)) ;
    enumerator_7273.gotoNextObject () ;
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
  GGS_semanticExpressionForGeneration var_expression_6507 ;
  const GGS_templateInstructionForeachAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_6507, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 190)) ;
  GGS__5B_enumerationDescriptor_5D_ var_enumerationDescriptor_6627 = extensionGetter_definition (var_expression_6507.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 198)).readProperty_enumerationDescriptorList () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_enumerationDescriptor_6627.getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 199)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_expression_6507.readProperty_mLocation (), GGS_string ("expression of '@").add_operation (extensionGetter_definition (var_expression_6507.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 200)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 200)).add_operation (GGS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 200)), fixItArray2  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 200)) ;
    }
  }
  GGS__5B_templateInstructionForGeneration_5D_ var_beforeInstructionList_6923 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_3 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mBeforeInstructionList (), var_beforeInstructionList_6923, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 204)) ;
  }
  const GGS_templateInstructionForeachAST temp_4 = this ;
  GGS_string var_enumeratorCppName_7218 = GGS_string ("enumerator_").add_operation (temp_4.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 213)).getter_string (SOURCE_FILE ("template-for-instruction.galgas4", 213)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 213)) ;
  GGS_templateVariableMap var_doVariableMap_7317 = constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap () ;
  const GGS_templateInstructionForeachAST temp_5 = this ;
  const GGS_templateInstructionForeachAST temp_6 = this ;
  GGS_string var_cppIndexVarName_7378 = GGS_string ("index_").add_operation (temp_5.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 215)).getter_string (SOURCE_FILE ("template-for-instruction.galgas4", 215)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 215)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 215)).add_operation (temp_6.readProperty_mIndexIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas4", 216)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 216)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_templateInstructionForeachAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mIndexIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      {
      const GGS_templateInstructionForeachAST temp_9 = this ;
      var_doVariableMap_7317.setter_insertKey (temp_9.readProperty_mIndexIdentifier (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_cppIndexVarName_7378, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 218)) ;
      }
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_templateInstructionForeachAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mEnumeration ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 220)).objectCompare (var_enumerationDescriptor_6627.getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 220)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_templateInstructionForeachAST temp_12 = this ;
      const GGS_templateInstructionForeachAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfProperties (), var_enumerationDescriptor_6627.getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 222)).getter_string (SOURCE_FILE ("template-for-instruction.galgas4", 222)).add_operation (GGS_string (" variables are required here ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 222)).add_operation (temp_13.readProperty_mEnumeration ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 223)).getter_string (SOURCE_FILE ("template-for-instruction.galgas4", 222)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 222)).add_operation (GGS_string (" provided)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 223)), fixItArray14  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 221)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    const GGS_templateInstructionForeachAST temp_15 = this ;
    UpEnumerator__5B_enumerationDescriptor_5D_ enumerator_7940 (var_enumerationDescriptor_6627) ;
    UpEnumerator__5B_lstring_5D_ enumerator_7977 (temp_15.readProperty_mEnumeration ()) ;
    while (enumerator_7940.hasCurrentObject () && enumerator_7977.hasCurrentObject ()) {
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        test_16 = GGS_bool (ComparisonKind::notEqual, enumerator_7977.current (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          {
          var_doVariableMap_7317.setter_insertKey (enumerator_7977.current (HERE), enumerator_7940.current (HERE).readProperty_mEnumeratedType (), var_enumeratorCppName_7218.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 230)).add_operation (enumerator_7940.current (HERE).readProperty_mEnumerationName ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas4", 230)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 230)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 230)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 227)) ;
          }
        }
      }
      enumerator_7940.gotoNextObject () ;
      enumerator_7977.gotoNextObject () ;
    }
  }
  GGS_templateAnalysisContext var_doAnalysisContext_8281 = GGS_templateAnalysisContext::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes (), var_doVariableMap_7317, inCompiler COMMA_HERE) ;
  GGS__5B_templateInstructionForGeneration_5D_ var_doInstructionList_8433 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_17 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_doAnalysisContext_8281, ioArgument_ioTypeMap, temp_17.readProperty_mDoInstructionList (), var_doInstructionList_8433, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 240)) ;
  }
  GGS__5B_templateInstructionForGeneration_5D_ var_betweenInstructionList_8721 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_18 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_18.readProperty_mBetweenInstructionList (), var_betweenInstructionList_8721, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 250)) ;
  }
  GGS__5B_templateInstructionForGeneration_5D_ var_afterInstructionList_9022 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_19 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_19.readProperty_mAfterInstructionList (), var_afterInstructionList_9022, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 260)) ;
  }
  const GGS_templateInstructionForeachAST temp_20 = this ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionForeachForGeneration::init_21__21__21__21__21__21__21__21_ (temp_20.readProperty_mIsAscending (), var_expression_6507, var_enumeratorCppName_7218, var_beforeInstructionList_6923, var_doInstructionList_8433, var_cppIndexVarName_7378, var_betweenInstructionList_8721, var_afterInstructionList_9022, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 269)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionForeachForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_foreachVarCppName_10821 ;
  const GGS_templateInstructionForeachForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_10821, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 305)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_templateInstructionForeachForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 307)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateInstructionForeachForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_uint ").add_operation (temp_3.readProperty_mIndexCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 308)).add_operation (GGS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 308)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 308)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_foreachVarCppName_10821, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 311)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 311)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 311)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 312)) ;
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
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (temp_8.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 315)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 315)).add_operation (var_foreachVarCppName_10821, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 315)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 315)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 315)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_templateInstructionForeachForGeneration temp_10 = this ;
    const GGS_templateInstructionForeachForGeneration temp_11 = this ;
    test_9 = GGS_bool (ComparisonKind::greaterThan, temp_10.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 317)).add_operation (temp_11.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 317)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 317)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_templateInstructionForeachForGeneration temp_12 = this ;
      const GGS_templateInstructionForeachForGeneration temp_13 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const bool nonEmpty_").add_operation (temp_12.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 318)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 318)).add_operation (temp_13.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 318)).add_operation (GGS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 318)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 318)) ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    const GGS_templateInstructionForeachForGeneration temp_15 = this ;
    test_14 = GGS_bool (ComparisonKind::greaterThan, temp_15.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 320)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_templateInstructionForeachForGeneration temp_16 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nonEmpty_").add_operation (temp_16.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 321)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 321)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 321)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 322)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_17 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_17.readProperty_mBeforeInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 323)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 331)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 332)) ;
    }
  }
  const GGS_templateInstructionForeachForGeneration temp_18 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (temp_18.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 334)).add_operation (GGS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 334)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 334)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 335)) ;
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
    test_21 = GGS_bool (ComparisonKind::greaterThan, temp_22.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 348)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_templateInstructionForeachForGeneration temp_23 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (temp_23.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 349)).add_operation (GGS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 349)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 349)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 350)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_24 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_24.readProperty_mBetweenInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 351)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 359)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 360)) ;
    }
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    const GGS_templateInstructionForeachForGeneration temp_26 = this ;
    test_25 = GGS_bool (ComparisonKind::greaterThan, temp_26.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 363)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      const GGS_templateInstructionForeachForGeneration temp_27 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_27.readProperty_mIndexCppName ().add_operation (GGS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 364)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 364)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 366)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 367)) ;
  GalgasBool test_28 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_28) {
    const GGS_templateInstructionForeachForGeneration temp_29 = this ;
    test_28 = GGS_bool (ComparisonKind::greaterThan, temp_29.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas4", 369)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_28) {
      const GGS_templateInstructionForeachForGeneration temp_30 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nonEmpty_").add_operation (temp_30.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 370)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 370)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 370)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 371)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_31 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_31.readProperty_mAfterInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 372)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 380)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 381)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 384)) ;
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
  GGS_string var_s_21225 = GGS_string::class_func_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 575)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_s_21225.getter_count (SOURCE_FILE ("templateSyntax.galgas4", 576)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_outResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionStringAST::init_21_ (var_s_21225, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 577)) ;
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
      test_1 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 77)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
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
      GGS_uint var_matchingReaderCount_4689 = GGS_uint (uint32_t (0U)) ;
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3407, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 105)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("templateAnalysis.galgas4", 105)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          var_getterFormalArgumentTypeList_4037 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
          var_hasCompilerArgument_4105 = GGS_bool (true) ;
          var_returnedType_4154 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("templateAnalysis.galgas4", 108)) ;
          var_kind_4086 = GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas4", 109)) ;
          UpEnumerator__5B_typedProperty_5D_ enumerator_5007 (extensionGetter_definition (var_receiverType_3407, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 110)).readProperty_currentTypedPropertyList ()) ;
          while (enumerator_5007.hasCurrentObject ()) {
            GGS_getterMap var_aMap_5060 = extensionGetter_definition (enumerator_5007.current (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 111)).readProperty_getterMap () ;
            GalgasBool test_15 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_15) {
              const GGS_templateGetterCallInExpressionAST temp_16 = this ;
              const GGS_getterMap_2E_element var_entry_5124 = var_aMap_5060.readSubcript__3F_ (temp_16.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
              if (!var_aMap_5060.readSubcript__3F_ (temp_16.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
                test_15 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_15) {
                var_matchingReaderCount_4689.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 113)) ;
                var_getterFormalArgumentTypeList_4037 = var_entry_5124.readProperty_mArgumentTypeList () ;
                var_hasCompilerArgument_4105 = var_entry_5124.readProperty_mHasCompilerArgument () ;
                var_returnedType_4154 = var_entry_5124.readProperty_mReturnedType () ;
                var_kind_4086 = var_entry_5124.readProperty_mKind () ;
                GalgasBool test_17 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_17) {
                  test_17 = GGS_bool (ComparisonKind::notEqual, var_entry_5124.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_17) {
                    var_actualGetterName_4208 = var_entry_5124.readProperty_mGetterNameThatObsoletesInvokationName () ;
                  }
                }
                var_fieldList_4175.plusPlusAssignOperation (enumerator_5007.current (HERE).readProperty_name ().readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 121)) ;
              }
            }
            enumerator_5007.gotoNextObject () ;
          }
          GalgasBool test_18 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_18) {
            test_18 = GGS_bool (ComparisonKind::equal, var_matchingReaderCount_4689.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
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
              test_22 = GGS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_4689.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_22) {
                GGS_string var_s_6036 = GGS_string::makeEmptyString () ;
                UpEnumerator__5B_string_5D_ enumerator_6066 (var_fieldList_4175) ;
                while (enumerator_6066.hasCurrentObject ()) {
                  var_s_6036.plusAssignOperation(enumerator_6066.current (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 132)) ;
                  enumerator_6066.gotoNextObject () ;
                  if (enumerator_6066.hasCurrentObject ()) {
                    var_s_6036.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 133)) ;
                  }
                }
                const GGS_templateGetterCallInExpressionAST temp_23 = this ;
                const GGS_templateGetterCallInExpressionAST temp_24 = this ;
                GenericArray <FixItDescription> fixItArray25 ;
                inCompiler->emitSemanticError (temp_23.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3459, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 136)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 136)).add_operation (temp_24.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 136)).add_operation (GGS_string ("' func, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 136)).add_operation (var_s_6036, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 137)).add_operation (GGS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 137)), fixItArray25  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 135)) ;
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
          test_26 = GGS_bool (ComparisonKind::equal, var_getterMap_3929.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 140)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
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
      GGS__5B_semanticExpressionForGeneration_5D_ var_constructorEffectiveParameterList_7446 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_templateGetterCallInExpressionAST temp_38 = this ;
      UpEnumerator__5B_templateExpressionElementAST_5D_ enumerator_7511 (temp_38.readProperty_mExpressionList ()) ;
      UpEnumerator__5B_functionSignatureElement_5D_ enumerator_7538 (var_getterFormalArgumentTypeList_4037) ;
      while (enumerator_7511.hasCurrentObject () && enumerator_7538.hasCurrentObject ()) {
        GalgasBool test_39 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_39) {
          test_39 = GGS_bool (ComparisonKind::notEqual, enumerator_7538.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_7511.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_39) {
            GGS_string temp_40 ;
            const GalgasBool test_41 = GGS_bool (ComparisonKind::notEqual, enumerator_7538.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_41) {
              temp_40 = enumerator_7538.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 160)) ;
            }else if (GalgasBool::boolFalse == test_41) {
              temp_40 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_7671 = GGS_string ("!").add_operation (temp_40, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 160)) ;
            GenericArray <FixItDescription> fixItArray42 ;
            appendFixItActions (fixItArray42, EnumFixItKind::fixItReplace, var_s_7671) ;
            inCompiler->emitSemanticError (enumerator_7511.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_7671, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 161)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 161)), fixItArray42  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 161)) ;
          }
        }
        GGS_semanticExpressionForGeneration var_exp_8109 ;
        callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_7511.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_8109, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 163)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_7538.current (HERE).readProperty_mFormalArgumentType (), var_exp_8109.readProperty_mResultType (), enumerator_7511.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_8109, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 170)) ;
        }
        var_constructorEffectiveParameterList_7446.plusPlusAssignOperation (var_exp_8109  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 171)) ;
        enumerator_7511.gotoNextObject () ;
        enumerator_7538.gotoNextObject () ;
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
      outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_4154, temp_47.readProperty_mGetterName ().readProperty_location (), var_kind_4086, var_receiverExpression_3357, var_fieldList_4175, var_actualGetterName_4208, var_constructorEffectiveParameterList_7446, var_hasCompilerArgument_4105, inCompiler COMMA_HERE) ;
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
  GGS_unifiedTypeMapEntry var_constructorType_9322 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 201)) ;
  GGS_classFunctionMap var_classFunctionMap_9454 = extensionGetter_definition (var_constructorType_9322, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 203)).readProperty_classFunctionMap () ;
  GGS_unifiedTypeMapEntry var_returnedType_9572 ;
  GGS_bool var_hasCompilerArgument_9597 ;
  GGS__5B_functionSignatureElement_5D_ var_classFuncFormalArgumentTypeList_9651 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_templateClassFunctionAST temp_2 = this ;
    const GGS_classFunctionMap_2E_element var_entry_9692 = var_classFunctionMap_9454.readSubcript__3F_ (temp_2.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_classFunctionMap_9454.readSubcript__3F_ (temp_2.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      var_classFuncFormalArgumentTypeList_9651 = var_entry_9692.readProperty_argumentTypeList () ;
      var_hasCompilerArgument_9597 = var_entry_9692.readProperty_hasCompilerArgument () ;
      var_returnedType_9572 = var_entry_9692.readProperty_returnedType () ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, var_classFunctionMap_9454.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 213)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_templateClassFunctionAST temp_4 = this ;
        const GGS_templateClassFunctionAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 215)).add_operation (GGS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 215)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 214)) ;
        var_classFuncFormalArgumentTypeList_9651.drop () ; // Release error dropped variable
        var_hasCompilerArgument_9597.drop () ; // Release error dropped variable
        var_returnedType_9572.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      const GGS_templateClassFunctionAST temp_7 = this ;
      const GGS_templateClassFunctionAST temp_8 = this ;
      const GGS_templateClassFunctionAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      appendFixItActions (fixItArray10, EnumFixItKind::fixItReplace, var_classFunctionMap_9454.getter_keyList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 221))) ;
      inCompiler->emitSemanticError (temp_7.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_8.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 219)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 219)).add_operation (temp_9.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 219)).add_operation (GGS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 219)), fixItArray10  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 218)) ;
      var_classFuncFormalArgumentTypeList_9651.drop () ; // Release error dropped variable
      var_hasCompilerArgument_9597.drop () ; // Release error dropped variable
      var_returnedType_9572.drop () ; // Release error dropped variable
    }
  }
  GGS__5B_unifiedTypeMapEntry_5D_ var_requiredTypes_10494 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_semanticExpressionForGeneration_5D_ var_classFunctionEffectiveParameterList_10555 ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_templateClassFunctionAST temp_12 = this ;
    test_11 = GGS_bool (ComparisonKind::notEqual, temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 227)).objectCompare (var_classFuncFormalArgumentTypeList_9651.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 227)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_templateClassFunctionAST temp_13 = this ;
      const GGS_templateClassFunctionAST temp_14 = this ;
      const GGS_templateClassFunctionAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_14.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).add_operation (GGS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).add_operation (extensionGetter_definition (var_constructorType_9322, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).add_operation (var_classFuncFormalArgumentTypeList_9651.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 230)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 230)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 229)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 230)).add_operation (temp_15.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 231)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 231)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 230)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 231)), fixItArray16  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 228)) ;
      var_classFunctionEffectiveParameterList_10555.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_11) {
    var_classFunctionEffectiveParameterList_10555 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
    const GGS_templateClassFunctionAST temp_17 = this ;
    UpEnumerator__5B_templateExpressionElementAST_5D_ enumerator_11141 (temp_17.readProperty_mExpressionList ()) ;
    UpEnumerator__5B_functionSignatureElement_5D_ enumerator_11168 (var_classFuncFormalArgumentTypeList_9651) ;
    while (enumerator_11141.hasCurrentObject () && enumerator_11168.hasCurrentObject ()) {
      {
      var_requiredTypes_10494.setter_append (enumerator_11168.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 236)) ;
      }
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::notEqual, enumerator_11168.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_11141.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GGS_string temp_19 ;
          const GalgasBool test_20 = GGS_bool (ComparisonKind::notEqual, enumerator_11168.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            temp_19 = enumerator_11168.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 238)) ;
          }else if (GalgasBool::boolFalse == test_20) {
            temp_19 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_11358 = GGS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 238)) ;
          GenericArray <FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, EnumFixItKind::fixItReplace, var_s_11358) ;
          inCompiler->emitSemanticError (enumerator_11141.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11358, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 239)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 239)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 239)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_exp_11779 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_11141.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_11779, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 241)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11168.current (HERE).readProperty_mFormalArgumentType (), var_exp_11779.readProperty_mResultType (), enumerator_11141.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_11779, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 248)) ;
      }
      var_classFunctionEffectiveParameterList_10555.plusPlusAssignOperation (var_exp_11779  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 249)) ;
      enumerator_11141.gotoNextObject () ;
      enumerator_11168.gotoNextObject () ;
    }
  }
  const GGS_templateClassFunctionAST temp_22 = this ;
  const GGS_templateClassFunctionAST temp_23 = this ;
  outArgument_outExpression = GGS_classFuncExpressionForGeneration::init_21__21__21__21__21__21__21_ (var_returnedType_9572, temp_22.readProperty_mClassFunctionName ().readProperty_location (), var_constructorType_9322, temp_23.readProperty_mClassFunctionName ().readProperty_string (), var_classFunctionEffectiveParameterList_10555, var_hasCompilerArgument_9597, var_requiredTypes_10494, inCompiler COMMA_HERE) ;
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
  GGS_semanticExpressionForGeneration var_leftExpression_13719 ;
  const GGS_templateAndOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_13719, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 290)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_13963 ;
  const GGS_templateAndOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_13963, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 298)) ;
  {
  const GGS_templateAndOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_13719.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 307)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("templateAnalysis.galgas4", 307)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 307)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_13719, var_rightExpression_13963, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 306)) ;
  }
  const GGS_templateAndOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_13719.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_13719, GGS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("templateAnalysis.galgas4", 318)), var_rightExpression_13963, inCompiler COMMA_HERE) ;
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
  GGS_semanticExpressionForGeneration var_leftExpression_15062 ;
  const GGS_templateOrOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_15062, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 333)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_15306 ;
  const GGS_templateOrOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_15306, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 341)) ;
  {
  const GGS_templateOrOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_15062.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 350)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("templateAnalysis.galgas4", 350)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 350)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_15062, var_rightExpression_15306, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 349)) ;
  }
  const GGS_templateOrOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_15062.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_15062, GGS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("templateAnalysis.galgas4", 361)), var_rightExpression_15306, inCompiler COMMA_HERE) ;
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
  GGS_semanticExpressionForGeneration var_rightExpression_16648 ;
  const GGS_templateXorOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_16648, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 384)) ;
  {
  const GGS_templateXorOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16404.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 393)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("templateAnalysis.galgas4", 393)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 393)), GGS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16404, var_rightExpression_16648, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 392)) ;
  }
  const GGS_templateXorOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_16404.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_16404, GGS_binaryOperator::class_func_operator_5F_xor (SOURCE_FILE ("templateAnalysis.galgas4", 404)), var_rightExpression_16648, inCompiler COMMA_HERE) ;
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
  GGS_string var_s_18569 = GGS_string::makeEmptyString () ;
  const GGS_templateLiteralStringExpressionAST temp_0 = this ;
  UpEnumerator__5B_string_5D_ enumerator_18596 (temp_0.readProperty_mLiteralStringList ()) ;
  while (enumerator_18596.hasCurrentObject ()) {
    var_s_18569.plusAssignOperation(enumerator_18596.current (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 444)) ;
    enumerator_18596.gotoNextObject () ;
  }
  const GGS_templateLiteralStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalStringExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_18569, inCompiler COMMA_HERE) ;
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
  GGS_semanticExpressionForGeneration var_expression_21100 ;
  const GGS_templateNotOperatorAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_21100, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 505)) ;
  GGS_unifiedTypeMapEntry var_type_21176 = var_expression_21100.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_21176, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 514)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("templateAnalysis.galgas4", 514)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 514)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 514)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateNotOperatorAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_21176, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 516)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 516)).add_operation (GGS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 516)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 515)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateNotOperatorAST temp_4 = this ;
    outArgument_outExpression = GGS_notExpressionForGeneration::init_21__21__21_ (var_type_21176, temp_4.readProperty_mOperatorLocation (), var_expression_21100, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLogicalNegateAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLogicalNegateAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_22181 ;
  const GGS_templateLogicalNegateAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_22181, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 538)) ;
  GGS_unifiedTypeMapEntry var_type_22257 = var_expression_22181.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_22257, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 547)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("templateAnalysis.galgas4", 547)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 547)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 547)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateLogicalNegateAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_22257, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 549)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 549)).add_operation (GGS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 549)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 548)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateLogicalNegateAST temp_4 = this ;
    outArgument_outExpression = GGS_tildeExpressionForGeneration::init_21__21__21_ (var_type_22257, temp_4.readProperty_mOperatorLocation (), var_expression_22181, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateTestDynamicClassAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateTestDynamicClassAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_23309 ;
  const GGS_templateTestDynamicClassAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_23309, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 570)) ;
  const GGS_templateTestDynamicClassAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_castType_23358 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 578)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_23309.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 580)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas4", 580)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_23604 = var_castType_23358 ;
      GGS_bool var_found_23631 = GGS_bool (ComparisonKind::equal, var_t_23604.objectCompare (var_expression_23309.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 584)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 584)).isValid ()) {
        uint32_t variant_23671 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 584)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 584)).uintValue () ;
        bool loop_23671 = true ;
        while (loop_23671) {
          loop_23671 = var_found_23631.operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 585)).operator_and (extensionGetter_definition (var_t_23604, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 585)).readProperty_superType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas4", 585)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 585)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 585)).isValid () ;
          if (loop_23671) {
            loop_23671 = var_found_23631.operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 585)).operator_and (extensionGetter_definition (var_t_23604, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 585)).readProperty_superType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas4", 585)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 585)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 585)).boolValue () ;
          }
          if (loop_23671 && (0 == variant_23671)) {
            loop_23671 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("templateAnalysis.galgas4", 584)) ;
          }
          if (loop_23671) {
            variant_23671 -= 1 ;
            var_t_23604 = extensionGetter_definition (var_t_23604, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 586)).readProperty_superType () ;
            var_found_23631 = GGS_bool (ComparisonKind::equal, var_t_23604.objectCompare (var_expression_23309.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_23631.operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 589)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_templateTestDynamicClassAST temp_4 = this ;
          const GGS_templateTestDynamicClassAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 591)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 591)).add_operation (extensionGetter_definition (var_expression_23309.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 591)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 591)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 591)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 590)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GenericArray <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_23309.readProperty_mLocation (), GGS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_23309.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 595)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 594)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 595)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 594)) ;
  }
  const GGS_templateTestDynamicClassAST temp_8 = this ;
  outArgument_outExpression = GGS_testDynamicClassInExpressionForGeneration::init_21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_23309, var_castType_23358, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateFunctionCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFunctionCallAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFunctionCallAST temp_0 = this ;
  GGS_lstring var_usefulnessName_28338 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 699)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_28338 COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 700)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_functionSignature_28659 ;
  GGS_unifiedTypeMapEntry var_resultType_28708 ;
  GGS_bool var_isInternal_28735 ;
  const GGS_templateFunctionCallAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_28659, var_resultType_28708, var_isInternal_28735, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 702)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isInternal_28735.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateFunctionCallAST temp_3 = this ;
      GGS_location var_procDeclarationLocation_28800 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 710)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_templateFunctionCallAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 711)).objectCompare (var_procDeclarationLocation_28800.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 711)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_templateFunctionCallAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_28800.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 712)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 712)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 712)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 712)) ;
        }
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_templateFunctionCallAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::notEqual, var_functionSignature_28659.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 716)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 716)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_templateFunctionCallAST temp_10 = this ;
      const GGS_templateFunctionCallAST temp_11 = this ;
      const GGS_templateFunctionCallAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GGS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 718)).add_operation (GGS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 718)).add_operation (var_functionSignature_28659.getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 718)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 718)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 718)).add_operation (GGS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 718)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas4", 719)).getter_string (SOURCE_FILE ("templateAnalysis.galgas4", 719)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 719)).add_operation (GGS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 719)), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 717)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    GGS__5B_semanticExpressionForGeneration_5D_ var_semanticExpressionListForGeneration_29509 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
    const GGS_templateFunctionCallAST temp_14 = this ;
    UpEnumerator__5B_functionSignatureElement_5D_ enumerator_29603 (var_functionSignature_28659) ;
    UpEnumerator__5B_templateExpressionElementAST_5D_ enumerator_29637 (temp_14.readProperty_mExpressionList ()) ;
    while (enumerator_29603.hasCurrentObject () && enumerator_29637.hasCurrentObject ()) {
      GGS_semanticExpressionForGeneration var_expression_29870 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_29637.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_29870, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 725)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_29603.current (HERE).readProperty_mFormalArgumentType (), var_expression_29870.readProperty_mResultType (), enumerator_29637.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_29870, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 732)) ;
      }
      var_semanticExpressionListForGeneration_29509.plusPlusAssignOperation (var_expression_29870  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 733)) ;
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_29603.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_29637.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_string temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_29603.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = enumerator_29603.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 735)) ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_30191 = GGS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 735)) ;
          GenericArray <FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, EnumFixItKind::fixItReplace, var_s_30191) ;
          inCompiler->emitSemanticError (enumerator_29637.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_30191, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 736)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 736)), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 736)) ;
        }
      }
      enumerator_29603.gotoNextObject () ;
      enumerator_29637.gotoNextObject () ;
    }
    const GGS_templateFunctionCallAST temp_19 = this ;
    const GGS_templateFunctionCallAST temp_20 = this ;
    outArgument_outExpression = GGS_functionCallExpressionForGeneration::init_21__21__21__21_ (var_resultType_28708, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_29509, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateExtensionTemplateCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateExtensionTemplateCallAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                               GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateExtensionTemplateCallAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mTemplateName ().readProperty_location (), GGS_string ("INTERNAL ERROR: @templateExtensionTemplateCallAST templateExpressionAnalysis not implemented yet"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 758)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateVarInExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateVarInExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_templateVarInExpressionAST temp_1 = this ;
    const GGS_globalConstantMap_2E_element var_globalConstant_31929 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGlobalConstantMap ().readSubcript__3F_ (temp_1.readProperty_mVarName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGlobalConstantMap ().readSubcript__3F_ (temp_1.readProperty_mVarName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_templateVarInExpressionAST temp_2 = this ;
      const GGS_templateVarInExpressionAST temp_3 = this ;
      outArgument_outExpression = GGS_globalConstantInExpressionForGeneration::init_21__21__21_ (var_globalConstant_31929.readProperty_mType (), temp_2.readProperty_mVarName ().readProperty_location (), temp_3.readProperty_mVarName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapEntry var_type_32267 ;
    GGS_string var_sourceVariableCppName_32278 ;
    const GGS_templateVarInExpressionAST temp_4 = this ;
    constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap ().method_searchKey (temp_4.readProperty_mVarName (), var_type_32267, var_sourceVariableCppName_32278, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 780)) ;
    const GGS_templateVarInExpressionAST temp_5 = this ;
    outArgument_outExpression = GGS_varInExpressionForGeneration::init_21__21__21__21_ (var_type_32267, temp_5.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_32278, var_sourceVariableCppName_32278, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateAddOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateAddOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_33234 ;
  const GGS_templateAddOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_33234, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 802)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_33478 ;
  const GGS_templateAddOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_33478, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 810)) ;
  {
  const GGS_templateAddOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_33234.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 819)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("templateAnalysis.galgas4", 819)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 819)), GGS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_33234, var_rightExpression_33478, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 818)) ;
  }
  const GGS_templateAddOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_33234.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_33234, GGS_binaryOperator::class_func_add (SOURCE_FILE ("templateAnalysis.galgas4", 830)), var_rightExpression_33478, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateSubOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateSubOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_34720 ;
  const GGS_templateSubOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_34720, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 847)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_34964 ;
  const GGS_templateSubOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_34964, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 855)) ;
  {
  const GGS_templateSubOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_34720.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 864)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("templateAnalysis.galgas4", 864)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 864)), GGS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_34720, var_rightExpression_34964, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 863)) ;
  }
  const GGS_templateSubOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_34720.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_34720, GGS_binaryOperator::class_func_sub (SOURCE_FILE ("templateAnalysis.galgas4", 875)), var_rightExpression_34964, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateMultiplyOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateMultiplyOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_36215 ;
  const GGS_templateMultiplyOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_36215, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 892)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_36459 ;
  const GGS_templateMultiplyOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_36459, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 900)) ;
  {
  const GGS_templateMultiplyOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_36215.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 909)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("templateAnalysis.galgas4", 909)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 909)), GGS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_36215, var_rightExpression_36459, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 908)) ;
  }
  const GGS_templateMultiplyOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_36215.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_36215, GGS_binaryOperator::class_func_multiply_5F_operation (SOURCE_FILE ("templateAnalysis.galgas4", 920)), var_rightExpression_36459, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateDivideOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateDivideOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_37711 ;
  const GGS_templateDivideOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_37711, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 937)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_37955 ;
  const GGS_templateDivideOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_37955, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 945)) ;
  {
  const GGS_templateDivideOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_37711.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 954)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("templateAnalysis.galgas4", 954)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 954)), GGS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_37711, var_rightExpression_37955, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 953)) ;
  }
  const GGS_templateDivideOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_37711.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_37711, GGS_binaryOperator::class_func_divide_5F_operation (SOURCE_FILE ("templateAnalysis.galgas4", 965)), var_rightExpression_37955, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateModuloOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateModuloOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_39201 ;
  const GGS_templateModuloOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_39201, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 982)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_39445 ;
  const GGS_templateModuloOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_39445, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 990)) ;
  {
  const GGS_templateModuloOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_39201.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 999)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("templateAnalysis.galgas4", 999)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 999)), GGS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_39201, var_rightExpression_39445, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 998)) ;
  }
  const GGS_templateModuloOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_39201.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_39201, GGS_binaryOperator::class_func_modulo_5F_operation (SOURCE_FILE ("templateAnalysis.galgas4", 1010)), var_rightExpression_39445, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateUnaryMinusOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateUnaryMinusOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_40657 ;
  const GGS_templateUnaryMinusOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_40657, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1027)) ;
  GGS_unifiedTypeMapEntry var_type_40733 = var_expression_40657.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_40733, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1036)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("templateAnalysis.galgas4", 1036)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1036)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 1036)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateUnaryMinusOperationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_40733, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1038)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1038)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1038)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1037)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateUnaryMinusOperationAST temp_4 = this ;
    outArgument_outExpression = GGS_unaryMinusExpressionForGeneration::init_21__21__21_ (var_type_40733, temp_4.readProperty_mOperatorLocation (), var_expression_40657, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structFieldAccessTemplateExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_structFieldAccessTemplateExpressionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_41963 ;
  const GGS_structFieldAccessTemplateExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_41963, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1061)) ;
  GGS_unifiedTypeMapEntry var_type_42043 = var_expression_41963.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_bool test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_type_42043, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1070)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("templateAnalysis.galgas4", 1070)))) ;
    if (GalgasBool::boolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_type_42043, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1070)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas4", 1070)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 1070)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_structFieldAccessTemplateExpressionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructFieldName ().readProperty_location (), GGS_string ("the '.' operator requires the receiver to be a struct ou a class"), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1071)) ;
    }
  }
  GGS_propertyMap var_propertyMap_42280 = extensionGetter_definition (var_type_42043, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1073)).readProperty_propertyMap () ;
  GGS_AccessControl var_accessControl_42375 ;
  const GGS_structFieldAccessTemplateExpressionAST temp_5 = this ;
  GGS_bool joker_42390 ; // Joker input parameter
  var_propertyMap_42280.method_searchKey (temp_5.readProperty_mStructFieldName (), var_accessControl_42375, joker_42390, var_type_42043, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1074)) ;
  const GGS_structFieldAccessTemplateExpressionAST temp_6 = this ;
  extensionMethod_checkSetAccess (var_accessControl_42375, GGS_selfAvailability::class_func_none (SOURCE_FILE ("templateAnalysis.galgas4", 1075)), temp_6.readProperty_mStructFieldName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1075)) ;
  const GGS_structFieldAccessTemplateExpressionAST temp_7 = this ;
  const GGS_structFieldAccessTemplateExpressionAST temp_8 = this ;
  outArgument_outExpression = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_type_42043, temp_7.readProperty_mOperatorLocation (), var_expression_41963, temp_8.readProperty_mStructFieldName ().readProperty_string (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_43392 ;
  const GGS_templateEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_43392, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1097)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_43640 ;
  const GGS_templateEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_43640, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1105)) ;
  {
  const GGS_templateEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_43392.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1114)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("templateAnalysis.galgas4", 1114)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1114)).operator_or (extensionGetter_definition (var_leftExpression_43392.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1114)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1114)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1114)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1114)), GGS_string ("=="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_43392, var_rightExpression_43640, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1113)) ;
  }
  const GGS_templateEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_43392, GGS_comparison::class_func_equal (SOURCE_FILE ("templateAnalysis.galgas4", 1125)), var_rightExpression_43640, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateNonEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateNonEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_44813 ;
  const GGS_templateNonEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_44813, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1140)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_45061 ;
  const GGS_templateNonEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_45061, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1148)) ;
  {
  const GGS_templateNonEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_44813.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1157)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("templateAnalysis.galgas4", 1157)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1157)).operator_or (extensionGetter_definition (var_leftExpression_44813.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1157)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1157)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1157)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1157)), GGS_string ("!="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_44813, var_rightExpression_45061, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1156)) ;
  }
  const GGS_templateNonEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_44813, GGS_comparison::class_func_notEqual (SOURCE_FILE ("templateAnalysis.galgas4", 1168)), var_rightExpression_45061, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateStrictInfTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictInfTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_46238 ;
  const GGS_templateStrictInfTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_46238, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1183)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_46486 ;
  const GGS_templateStrictInfTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_46486, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1191)) ;
  {
  const GGS_templateStrictInfTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_46238.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1200)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1200)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1200)), GGS_string ("<"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_46238, var_rightExpression_46486, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1199)) ;
  }
  const GGS_templateStrictInfTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_46238, GGS_comparison::class_func_lowerThan (SOURCE_FILE ("templateAnalysis.galgas4", 1211)), var_rightExpression_46486, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInfOrEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInfOrEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_47593 ;
  const GGS_templateInfOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_47593, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1226)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_47841 ;
  const GGS_templateInfOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_47841, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1234)) ;
  {
  const GGS_templateInfOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_47593.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1243)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1243)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1243)), GGS_string ("<="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_47593, var_rightExpression_47841, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1242)) ;
  }
  const GGS_templateInfOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_47593, GGS_comparison::class_func_lowerOrEqual (SOURCE_FILE ("templateAnalysis.galgas4", 1254)), var_rightExpression_47841, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateStrictSupTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictSupTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_48951 ;
  const GGS_templateStrictSupTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_48951, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1269)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_49199 ;
  const GGS_templateStrictSupTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_49199, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1277)) ;
  {
  const GGS_templateStrictSupTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_48951.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1286)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1286)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1286)), GGS_string (">"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_48951, var_rightExpression_49199, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1285)) ;
  }
  const GGS_templateStrictSupTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_48951, GGS_comparison::class_func_greaterThan (SOURCE_FILE ("templateAnalysis.galgas4", 1297)), var_rightExpression_49199, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateSupOrEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateSupOrEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_50308 ;
  const GGS_templateSupOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_50308, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1312)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_50556 ;
  const GGS_templateSupOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_50556, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1320)) ;
  {
  const GGS_templateSupOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_50308.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1329)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1329)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1329)), GGS_string (">="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_50308, var_rightExpression_50556, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1328)) ;
  }
  const GGS_templateSupOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_50308, GGS_comparison::class_func_greaterOrEqual (SOURCE_FILE ("templateAnalysis.galgas4", 1340)), var_rightExpression_50556, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLeftShiftOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLeftShiftOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_51673 ;
  const GGS_templateLeftShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_51673, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1355)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_51921 ;
  const GGS_templateLeftShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_51921, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1363)) ;
  GGS_unifiedTypeMapEntry var_leftType_52003 = var_leftExpression_51673.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightType_52068 = var_rightExpression_51921.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_52003, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1373)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas4", 1373)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1373)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 1373)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateLeftShiftOperationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_52003, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1375)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1375)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1375)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1374)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_52068, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1377)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_templateLeftShiftOperationAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_52068, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1379)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1379)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1379)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1378)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_templateLeftShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_52003, temp_8.readProperty_mOperatorLocation (), var_leftExpression_51673, GGS_binaryOperator::class_func_leftShift (SOURCE_FILE ("templateAnalysis.galgas4", 1387)), var_rightExpression_51921, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateRightShiftOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateRightShiftOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_53442 ;
  const GGS_templateRightShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_53442, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1403)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_53690 ;
  const GGS_templateRightShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_53690, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1411)) ;
  GGS_unifiedTypeMapEntry var_leftType_53772 = var_leftExpression_53442.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightType_53837 = var_rightExpression_53690.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_53772, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1421)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas4", 1421)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1421)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 1421)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateRightShiftOperationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_53772, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1423)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1423)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1423)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1422)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_53837, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1425)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_templateRightShiftOperationAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_53837, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1427)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1427)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1427)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1426)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_templateRightShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_53772, temp_8.readProperty_mOperatorLocation (), var_leftExpression_53442, GGS_binaryOperator::class_func_rightShift (SOURCE_FILE ("templateAnalysis.galgas4", 1435)), var_rightExpression_53690, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis?&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      const GGS__5B_templateInstructionAST_5D_ constinArgument_inInstructionList,
                                                                      GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_templateInstructionAST_5D_ enumerator_55166 (constinArgument_inInstructionList) ;
  while (enumerator_55166.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((cPtr_templateInstructionAST *) enumerator_55166.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1456)) ;
    enumerator_55166.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionStringAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                            GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                            const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                            GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                            GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionStringAST temp_0 = this ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionStringForGeneration::init_21_ (temp_0.readProperty_mTemplateString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1475)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionExpressionAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_56464 ;
  const GGS_templateInstructionExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_56464, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1487)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_56464.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1494)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateInstructionExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GGS_string ("expression type should be '@string' (it is '@").add_operation (extensionGetter_definition (var_expression_56464.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1495)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1495)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1495)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1495)) ;
    }
  }
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionExpressionForGeneration::init_21_ (var_expression_56464, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1497)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateBlockInstructionAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_57342 ;
  const GGS_templateBlockInstructionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_57342, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1509)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expression_57342.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1516)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bigint"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_getterCallExpressionForGeneration var_conversionExpression_57437 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_expression_57342.readProperty_mResultType (), var_expression_57342.readProperty_mLocation (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas4", 1520)), var_expression_57342, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), GGS_string ("uint"), GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE) ;
      var_expression_57342 = var_conversionExpression_57437 ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_57342.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1528)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_templateBlockInstructionAST temp_3 = this ;
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mLocation (), GGS_string ("expression type should be '@uint' (it is '@").add_operation (extensionGetter_definition (var_expression_57342.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1529)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1529)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1529)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1529)) ;
      }
    }
  }
  GGS__5B_templateInstructionForGeneration_5D_ var_blockInstructionList_57903 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateBlockInstructionAST temp_5 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mBlockInstructionList (), var_blockInstructionList_57903, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1532)) ;
  }
  const GGS_templateBlockInstructionAST temp_6 = this ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateBlockInstructionForGeneration::init_21__21__21_ (var_expression_57342, temp_6.readProperty_mLocation (), var_blockInstructionList_57903, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1540)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                       GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                       const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                       GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                       GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionGetColumnLocationForGeneration::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1552)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                        const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                        GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionGotoColumnLocationForGeneration::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1564)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionIfAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_templateInstructionIfBranchForGeneration_5D_ var_templateInstructionIfBranchList_59714 = GGS__5B_templateInstructionIfBranchForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_templateInstructionIfAST temp_0 = this ;
  UpEnumerator__5B_templateInstructionIfBranchAST_5D_ enumerator_59837 (temp_0.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_59837.hasCurrentObject ()) {
    GGS_semanticExpressionForGeneration var_expression_60068 ;
    callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_59837.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_60068, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1579)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_60068.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1586)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_expression_60068.readProperty_mLocation (), GGS_string ("'if' expression type should be '@bool' (it is '@").add_operation (extensionGetter_definition (var_expression_60068.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1587)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1587)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1587)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1587)) ;
      }
    }
    GGS__5B_templateInstructionForGeneration_5D_ var_instructionList_60318 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
    {
    routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_59837.current (HERE).readProperty_mInstructionList (), var_instructionList_60318, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1590)) ;
    }
    var_templateInstructionIfBranchList_59714.plusPlusAssignOperation (GGS_templateInstructionIfBranchForGeneration::init_21__21_ (var_expression_60068, var_instructionList_60318, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1598)) ;
    enumerator_59837.gotoNextObject () ;
  }
  GGS__5B_templateInstructionForGeneration_5D_ var_elseInstructionList_60695 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionIfAST temp_3 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mElseInstructionList (), var_elseInstructionList_60695, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1602)) ;
  }
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionIfForGeneration::init_21__21_ (var_templateInstructionIfBranchList_59714, var_elseInstructionList_60695, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1611)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionSwitchAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_switchExpression_5442 ;
  const GGS_templateInstructionSwitchAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_switchExpression_5442, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 134)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_typeKindEnum_2E_enumType var_enumType_5472 = extensionGetter_definition (var_switchExpression_5442.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 141)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("template-switch-instruction.galgas4", 141)).unwrappedValue () ;
    if (!extensionGetter_definition (var_switchExpression_5442.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 141)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("template-switch-instruction.galgas4", 141)).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GGS_stringset var_constantsNamedInSwitchInstruction_5568 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ var_templateInstructionSwitchBranchList_5689 = GGS__5B_templateInstructionSwitchBranchForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_templateInstructionSwitchAST temp_2 = this ;
      UpEnumerator__5B_templateInstructionSwitchBranchAST_5D_ enumerator_5779 (temp_2.readProperty_templateInstructionSwitchBranchList ()) ;
      while (enumerator_5779.hasCurrentObject ()) {
        GGS__5B_extractedAssociatedValueForGeneration_5D_ var_extractedAssociatedValuesForGeneration_5869 = GGS__5B_extractedAssociatedValueForGeneration_5D_::init (inCompiler COMMA_HERE) ;
        GGS_templateAnalysisContext var_analysisContext_5924 = constinArgument_inAnalysisContext ;
        UpEnumerator__5B_lstring_5D_ enumerator_6018 (enumerator_5779.current (HERE).readProperty_constantList ()) ;
        while (enumerator_6018.hasCurrentObject ()) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_enumType_5472.readProperty_constantMap ().getter_contains (enumerator_6018.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 149)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = var_constantsNamedInSwitchInstruction_5568.getter_contains (enumerator_6018.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 150)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GenericArray <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (enumerator_6018.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6018.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 152)).add_operation (GGS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 152)), fixItArray5  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 151)) ;
                }
              }
              var_constantsNamedInSwitchInstruction_5568.plusPlusAssignOperation (enumerator_6018.current (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 154)) ;
              GGS__5B_associatedValueDescriptor_5D_ var_associatedTypeList_6487 ;
              GGS_uint joker_6449 ; // Joker input parameter
              var_enumType_5472.readProperty_constantMap ().method_searchKey (enumerator_6018.current (HERE), joker_6449, var_associatedTypeList_6487, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 155)) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_6487.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 156)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, enumerator_5779.current (HERE).readProperty_associatedValuesExtraction ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 156)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 156)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GenericArray <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_6018.current (HERE).readProperty_location (), GGS_string ("the associated values of '").add_operation (enumerator_6018.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 158)).add_operation (GGS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 158)), fixItArray7  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 157)) ;
                }
              }
              if (GalgasBool::boolFalse == test_6) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, var_associatedTypeList_6487.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 159)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_5779.current (HERE).readProperty_associatedValuesExtraction ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 159)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 159)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    GenericArray <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (enumerator_6018.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6018.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 161)).add_operation (GGS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 161)), fixItArray9  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 160)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_8) {
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::notEqual, var_associatedTypeList_6487.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 162)).objectCompare (enumerator_5779.current (HERE).readProperty_associatedValuesExtraction ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 162)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      GGS_string temp_11 ;
                      const GalgasBool test_12 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_6487.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 165)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_12) {
                        temp_11 = GGS_string ("s") ;
                      }else if (GalgasBool::boolFalse == test_12) {
                        temp_11 = GGS_string::makeEmptyString () ;
                      }
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (enumerator_6018.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6018.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)).add_operation (GGS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)).add_operation (var_associatedTypeList_6487.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 164)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas4", 164)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)).add_operation (GGS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)), fixItArray13  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 163)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_10) {
                    UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_7361 (var_associatedTypeList_6487) ;
                    UpEnumerator__5B_switchExtractedValuesAST_5D_ enumerator_7432 (enumerator_5779.current (HERE).readProperty_associatedValuesExtraction ()) ;
                    GGS_uint index_7343 (uint32_t (0)) ;
                    while (enumerator_7361.hasCurrentObject () && enumerator_7432.hasCurrentObject ()) {
                      GalgasBool test_14 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_14) {
                        test_14 = GGS_bool (ComparisonKind::notEqual, enumerator_7432.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_14) {
                          GalgasBool test_15 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_15) {
                            test_15 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_7361.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 169)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_7432.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_string ())).boolEnum () ;
                            if (GalgasBool::boolTrue == test_15) {
                              GenericArray <FixItDescription> fixItArray16 ;
                              inCompiler->emitSemanticError (enumerator_7432.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_location (), GGS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_7361.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 170)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 170)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 170)), fixItArray16  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 170)) ;
                            }
                          }
                        }
                      }
                      GGS_string var_cppName_7878 = GGS_string ("extractedValue_").add_operation (enumerator_7432.current (HERE).readProperty_mExtractedValueName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 173)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas4", 173)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 173)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 173)).add_operation (enumerator_7432.current (HERE).readProperty_mExtractedValueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 174)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 174)).add_operation (index_7343.getter_string (SOURCE_FILE ("template-switch-instruction.galgas4", 174)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 174)) ;
                      var_extractedAssociatedValuesForGeneration_5869.plusPlusAssignOperation (GGS_extractedAssociatedValueForGeneration::init_21__21__21_ (enumerator_7361.current (HERE).readProperty_type (), var_cppName_7878, enumerator_7361.current (HERE).readProperty_name (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 175)) ;
                      GalgasBool test_17 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_17) {
                        test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_7432.current (HERE).readProperty_mExtractedValueName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_17) {
                          {
                          var_analysisContext_5924.mProperty_mTemplateVariableMap.setter_insertKey (enumerator_7432.current (HERE).readProperty_mExtractedValueName (), enumerator_7361.current (HERE).readProperty_type (), var_cppName_7878, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 180)) ;
                          }
                        }
                      }
                      enumerator_7361.gotoNextObject () ;
                      enumerator_7432.gotoNextObject () ;
                      index_7343.plusAssignOperation (GGS_uint (1), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 167)) ;
                    }
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (enumerator_6018.current (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_6018.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 190)).add_operation (GGS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 190)).add_operation (extensionGetter_definition (var_switchExpression_5442.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 191)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 190)).add_operation (GGS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 191)), fixItArray18  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 189)) ;
          }
          enumerator_6018.gotoNextObject () ;
        }
        GGS__5B_templateInstructionForGeneration_5D_ var_templateInstructionList_8776 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
        {
        routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_5924, ioArgument_ioTypeMap, enumerator_5779.current (HERE).readProperty_instructionList (), var_templateInstructionList_8776, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 195)) ;
        }
        var_templateInstructionSwitchBranchList_5689.plusPlusAssignOperation (GGS_templateInstructionSwitchBranchForGeneration::init_21__21__21__21_ (enumerator_5779.current (HERE).readProperty_constantList (), var_extractedAssociatedValuesForGeneration_5869, enumerator_5779.current (HERE).readProperty_endOfBranch ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 206)), var_templateInstructionList_8776, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 203)) ;
        enumerator_5779.gotoNextObject () ;
      }
      GGS_stringset var_forgottenConstants_9385 = var_enumType_5472.readProperty_constantMap ().getter_keySet (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 211)).subtract_operation (var_constantsNamedInSwitchInstruction_5568, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 211)) ;
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::greaterThan, var_forgottenConstants_9385.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 212)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          GGS_string var_s_9529 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_9547 (var_forgottenConstants_9385) ;
          while (enumerator_9547.hasCurrentObject ()) {
            var_s_9529.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_9547.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 215)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 215)) ;
            enumerator_9547.gotoNextObject () ;
          }
          const GGS_templateInstructionSwitchAST temp_20 = this ;
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (temp_20.readProperty_switchExpressionEndLocation (), GGS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_9529, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 218)), fixItArray21  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 217)) ;
        }
      }
      ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionSwitchForGeneration::init_21__21__21_ (var_switchExpression_5442.readProperty_mResultType (), var_switchExpression_5442, var_templateInstructionSwitchBranchList_5689, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 221)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GenericArray <FixItDescription> fixItArray22 ;
    inCompiler->emitSemanticError (var_switchExpression_5442.readProperty_mLocation (), GGS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_string (extensionGetter_definition (var_switchExpression_5442.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 228)).readProperty_typeKind (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 227)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 227)).add_operation (GGS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 228)), fixItArray22  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 227)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionSwitchForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                                 GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_switchVarCppName_11590 ;
  const GGS_templateInstructionSwitchForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_switchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName_11590, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 261)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_switchVarCppName_11590, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 269)).add_operation (GGS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 269)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 269)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 270)) ;
  const GGS_templateInstructionSwitchForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_1.readProperty_switchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 271)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 271)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::invalid :\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 272)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 273)) ;
  const GGS_templateInstructionSwitchForGeneration temp_2 = this ;
  UpEnumerator__5B_templateInstructionSwitchBranchForGeneration_5D_ enumerator_11916 (temp_2.readProperty_templateInstructionSwitchBranchList ()) ;
  while (enumerator_11916.hasCurrentObject ()) {
    UpEnumerator__5B_lstring_5D_ enumerator_11986 (enumerator_11916.current (HERE).readProperty_mConstantList ()) ;
    while (enumerator_11986.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 277)) ;
      const GGS_templateInstructionSwitchForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_3.readProperty_switchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 278)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 278)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::enum_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 279)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_11986.current (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas4", 280)).add_operation (GGS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 280)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 280)) ;
      enumerator_11986.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 282)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 283)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_11916.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 284)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ enumerator_12434 (enumerator_11916.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
        while (enumerator_12434.hasCurrentObject ()) {
          extensionMethod_addHeaderFileName (enumerator_12434.current (HERE).readProperty_mType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 286)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_12434.current (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 287)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 287)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 287)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_12434.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 288)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 288)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 288)) ;
          enumerator_12434.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_switchVarCppName_11590, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 290)).add_operation (GGS_string (".getAssociatedValuesFor_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 290)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 290)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_11916.current (HERE).readProperty_mConstantList ().readSubcript__3F_ (GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas4", 291)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 291)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 291)) ;
        UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ enumerator_12909 (enumerator_11916.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
        while (enumerator_12909.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_12909.current (HERE).readProperty_mCppName (), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 293)) ;
          enumerator_12909.gotoNextObject () ;
          if (enumerator_12909.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 294)) ;
          }
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 296)) ;
      }
    }
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_11916.current (HERE).readProperty_mInstructionList ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 298)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 299)) ;
        }
        {
        routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_11916.current (HERE).readProperty_mInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 300)) ;
        }
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 308)) ;
        }
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 310)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 311)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 312)) ;
    }
    enumerator_11916.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 315)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@procDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_4533 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_procDeclarationAST temp_0 = this ;
  UpEnumerator__5B_formalParameterAST_5D_ enumerator_4615 (temp_0.readProperty_mFormalArgumentListAST ()) ;
  while (enumerator_4615.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterTypeIndex_4709 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_4615.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_4709, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 112)) ;
    }
    var_routineSignature_4533.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_4615.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_4709, enumerator_4615.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_4615.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 113)) ;
    enumerator_4615.gotoNextObject () ;
  }
  const GGS_procDeclarationAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mRoutineInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 120)) ;
  {
  const GGS_procDeclarationAST temp_2 = this ;
  const GGS_procDeclarationAST temp_3 = this ;
  extensionSetter_insertKey (ioArgument_ioSemanticContext.mProperty_routineMap, temp_2.readProperty_mRoutineName (), var_routineSignature_4533, temp_3.readProperty_isFilePrivate (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 122)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@procDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_5893 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_procDeclarationAST temp_0 = this ;
  UpEnumerator__5B_formalParameterAST_5D_ enumerator_5975 (temp_0.readProperty_mFormalArgumentListAST ()) ;
  while (enumerator_5975.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_6011 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_5975.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 141)) ;
    var_routineSignature_5893.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_5975.current (HERE).readProperty_mFormalSelector (), var_parameterType_6011, enumerator_5975.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_5975.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 142)) ;
    enumerator_5975.gotoNextObject () ;
  }
  const GGS_procDeclarationAST temp_1 = this ;
  GGS_lstring var_mangledName_6285 = function_routineMangledName (temp_1.readProperty_mRoutineName (), var_routineSignature_5893, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 148)) ;
  GGS_lstring var_nameForUsefulness_6394 = function_procedureNameForUsefulEntitiesGraph (var_mangledName_6285, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 150)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6394, var_nameForUsefulness_6394, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 151)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_procDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_usefullProcedure ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_6394  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 153)) ;
    }
  }
  GGS_analysisContext var_analysisContext_6667 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("procedure-declaration.galgas4", 160)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_instructionList_7119 ;
  GGS__5B_formalParameterForGeneration_5D_ var_formalArgumentList_7147 ;
  {
  const GGS_procDeclarationAST temp_4 = this ;
  const GGS_procDeclarationAST temp_5 = this ;
  const GGS_procDeclarationAST temp_6 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_6394, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6667, ioArgument_ioTypeMap, temp_4.readProperty_mFormalArgumentListAST (), temp_5.readProperty_mRoutineInstructionList (), temp_6.readProperty_mEndOfRoutineInstructionList (), var_instructionList_7119, var_formalArgumentList_7147, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 163)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_routineImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_string ("proc ").add_operation (var_mangledName_6285.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 175)), GGS_bool (true), GGS_string ("proc-").add_operation (var_mangledName_6285.readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas4", 177)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 177)), var_mangledName_6285.readProperty_string (), var_formalArgumentList_7147, GGS_bool (false), var_instructionList_7119, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 174)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@routineImplementationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
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
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (temp_2.readProperty_routineMangledName ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas4", 207)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 207))  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 207)) ;
    }
  }
  GGS_string var_code_8957 ;
  {
  const GGS_routineImplementationForGeneration temp_3 = this ;
  const GGS_routineImplementationForGeneration temp_4 = this ;
  const GGS_routineImplementationForGeneration temp_5 = this ;
  const GGS_routineImplementationForGeneration temp_6 = this ;
  routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (temp_3.readProperty_mGenerateStatic (), GGS_string ("routine_").add_operation (temp_4.readProperty_routineMangledName ().getter_identifierRepresentation (SOURCE_FILE ("procedure-declaration.galgas4", 211)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 211)), ioArgument_ioInclusionSet, temp_5.readProperty_mFormalArgumentList (), temp_6.readProperty_mRoutineInstructionList (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_8957, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 209)) ;
  }
  const GGS_routineImplementationForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_semanticComponentGenerationTemplate::class_func_routineImplementation (temp_7.readProperty_routineMangledName (), var_code_8957, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 222)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classFuncExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_classFuncExpressionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_typeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_classFuncExpressionAST temp_2 = this ;
      GGS_unifiedTypeMapEntry joker_3578 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_typeName (), joker_3578, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 85)) ;
      }
    }
  }
  const GGS_classFuncExpressionAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_expressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 87)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classFuncExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedType_4588 ;
  GGS_unifiedTypeMapEntry var_classFuncType_4634 ;
  GGS__5B_semanticExpressionForGeneration_5D_ var_constructorEffectiveParameterList_4695 ;
  GGS_bool var_hasCompilerArgument_4747 ;
  GGS__5B_unifiedTypeMapEntry_5D_ var_requiredTypes_4802 ;
  {
  const GGS_classFuncExpressionAST temp_0 = this ;
  const GGS_classFuncExpressionAST temp_1 = this ;
  const GGS_classFuncExpressionAST temp_2 = this ;
  routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_typeName (), temp_1.readProperty_classFuncName (), temp_2.readProperty_expressions (), var_returnedType_4588, var_classFuncType_4634, var_constructorEffectiveParameterList_4695, var_hasCompilerArgument_4747, var_requiredTypes_4802, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 100)) ;
  }
  const GGS_classFuncExpressionAST temp_3 = this ;
  GGS_lstring var_typeUsefulnessName_4838 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (extensionGetter_definition (var_classFuncType_4634, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 117)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 117)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_4838 COMMA_SOURCE_FILE ("expression-class-func.galgas4", 118)) ;
  }
  const GGS_classFuncExpressionAST temp_4 = this ;
  GGS_lstring var_returnedTypeUsefulnessName_5058 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (extensionGetter_definition (var_returnedType_4588, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 119)).readProperty_typeName ().readProperty_string (), temp_4.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 119)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_5058 COMMA_SOURCE_FILE ("expression-class-func.galgas4", 120)) ;
  }
  const GGS_classFuncExpressionAST temp_5 = this ;
  const GGS_classFuncExpressionAST temp_6 = this ;
  outArgument_outExpression = GGS_classFuncExpressionForGeneration::init_21__21__21__21__21__21__21_ (var_returnedType_4588, temp_5.readProperty_classFuncName ().readProperty_location (), var_classFuncType_4634, temp_6.readProperty_classFuncName ().readProperty_string (), var_constructorEffectiveParameterList_4695, var_hasCompilerArgument_4747, var_requiredTypes_4802, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeConstructorInvocation?&??&&???!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                   const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                   const GGS_lstring constinArgument_inTypeName,
                                                                                                   const GGS_lstring constinArgument_inConstructorName,
                                                                                                   const GGS__5B_actualOutputArgumentAST_5D_ constinArgument_inInitializerEffectiveParameterExpressions,
                                                                                                   GGS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                                                                                   GGS_unifiedTypeMapEntry & outArgument_outConstructorType,
                                                                                                   GGS__5B_semanticExpressionForGeneration_5D_ & outArgument_outConstructorEffectiveParameterList,
                                                                                                   GGS_bool & outArgument_outHasCompilerArgument,
                                                                                                   GGS__5B_unifiedTypeMapEntry_5D_ & outArgument_outRequiredTypes,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outConstructorType.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outHasCompilerArgument.drop () ; // Release 'out' argument
  outArgument_outRequiredTypes.drop () ; // Release 'out' argument
  outArgument_outConstructorType = constinArgument_inType ;
  outArgument_outRequiredTypes = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outConstructorType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 156)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("expression-class-func.galgas4", 158)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 159)) ;
      outArgument_outReturnedType.drop () ; // Release error dropped variable
      outArgument_outConstructorType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_classFunctionMap var_classFunctionMap_7110 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 164)).readProperty_classFunctionMap () ;
    GGS__5B_functionSignatureElement_5D_ var_constructorFormalArgumentTypeList_7238 ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_classFunctionMap_2E_element var_entry_7283 = var_classFunctionMap_7110.readSubcript__3F_ (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!var_classFunctionMap_7110.readSubcript__3F_ (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        var_constructorFormalArgumentTypeList_7238 = var_entry_7283.readProperty_argumentTypeList () ;
        outArgument_outHasCompilerArgument = var_entry_7283.readProperty_hasCompilerArgument () ;
        outArgument_outReturnedType = var_entry_7283.readProperty_returnedType () ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_classFunctionMap_7110.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 172)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 174)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 174)).add_operation (GGS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 174)), fixItArray5  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 173)) ;
          var_constructorFormalArgumentTypeList_7238.drop () ; // Release error dropped variable
          outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
          outArgument_outReturnedType.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GenericArray <FixItDescription> fixItArray6 ;
        appendFixItActions (fixItArray6, EnumFixItKind::fixItReplace, var_classFunctionMap_7110.getter_keyList (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 182))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 179)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 179)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 179)).add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 180)).add_operation (GGS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 180)), fixItArray6  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 178)) ;
        var_constructorFormalArgumentTypeList_7238.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::notEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 186)).objectCompare (var_constructorFormalArgumentTypeList_7238.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 186)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("calling the '").add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 188)).add_operation (GGS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 188)).add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 189)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 188)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 189)).add_operation (var_constructorFormalArgumentTypeList_7238.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 190)).getter_string (SOURCE_FILE ("expression-class-func.galgas4", 190)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 189)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 190)).add_operation (constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 191)).getter_string (SOURCE_FILE ("expression-class-func.galgas4", 191)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 190)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 191)), fixItArray8  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 187)) ;
      }
    }
    outArgument_outConstructorEffectiveParameterList = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_8700 (constinArgument_inInitializerEffectiveParameterExpressions) ;
    UpEnumerator__5B_functionSignatureElement_5D_ enumerator_8765 (var_constructorFormalArgumentTypeList_7238) ;
    while (enumerator_8700.hasCurrentObject () && enumerator_8765.hasCurrentObject ()) {
      outArgument_outRequiredTypes.plusPlusAssignOperation (enumerator_8765.current (HERE).readProperty_mFormalArgumentType ()  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 196)) ;
      GGS_semanticExpressionForGeneration var_exp_9194 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_8700.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_8765.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_9194, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 197)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8765.current (HERE).readProperty_mFormalArgumentType (), var_exp_9194.readProperty_mResultType (), enumerator_8700.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_9194, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 206)) ;
      }
      outArgument_outConstructorEffectiveParameterList.plusPlusAssignOperation (var_exp_9194  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 212)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = GGS_bool (ComparisonKind::notEqual, enumerator_8765.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_8700.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          GGS_string temp_10 ;
          const GalgasBool test_11 = GGS_bool (ComparisonKind::notEqual, enumerator_8765.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            temp_10 = enumerator_8765.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 215)) ;
          }else if (GalgasBool::boolFalse == test_11) {
            temp_10 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_9558 = GGS_string ("!").add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 214)) ;
          GenericArray <FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, EnumFixItKind::fixItReplace, var_s_9558) ;
          inCompiler->emitSemanticError (enumerator_8700.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_9558, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 219)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 219)), fixItArray12  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 218)) ;
        }
      }
      enumerator_8700.gotoNextObject () ;
      enumerator_8765.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classFuncExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       GGS_string & outArgument_outCppExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classFuncExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 243)) ;
  const GGS_classFuncExpressionForGeneration temp_1 = this ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_10914 (temp_1.readProperty_requiredTypes ()) ;
  while (enumerator_10914.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10914.current (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 245)) ;
    enumerator_10914.gotoNextObject () ;
  }
  GGS__5B_string_5D_ var_parameterList_11005 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_classFuncExpressionForGeneration temp_2 = this ;
  UpEnumerator__5B_semanticExpressionForGeneration_5D_ enumerator_11052 (temp_2.readProperty_mEffectiveParameterList ()) ;
  while (enumerator_11052.hasCurrentObject ()) {
    GGS_string var_parameter_11265 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_11052.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_11265, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 249)) ;
    var_parameterList_11005.plusPlusAssignOperation (var_parameter_11265  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 256)) ;
    enumerator_11052.gotoNextObject () ;
  }
  const GGS_classFuncExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_classFuncType (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 258)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 258)) ;
  const GGS_classFuncExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string ("::class_func_").add_operation (temp_4.readProperty_classFuncName ().getter_identifierRepresentation (SOURCE_FILE ("expression-class-func.galgas4", 259)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 259)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 259)) ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 260)) ;
  UpEnumerator__5B_string_5D_ enumerator_11535 (var_parameterList_11005) ;
  while (enumerator_11535.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_11535.current (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 262)) ;
    enumerator_11535.gotoNextObject () ;
    if (enumerator_11535.hasCurrentObject ()) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 263)) ;
    }
  }
  GGS_bool var_needsComma_11645 = GGS_bool (ComparisonKind::greaterThan, var_parameterList_11005.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 265)).objectCompare (GGS_uint (uint32_t (0U)))) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_classFuncExpressionForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = var_needsComma_11645.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          outArgument_outCppExpression.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 268)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-class-func.galgas4", 270)) ;
      }
      outArgument_outCppExpression.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 271)) ;
      var_needsComma_11645 = GGS_bool (true) ;
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = var_needsComma_11645.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_classFuncExpressionForGeneration temp_9 = this ;
      outArgument_outCppExpression.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_9.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 275)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 275)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 275)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 275)) ;
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    const GGS_classFuncExpressionForGeneration temp_10 = this ;
    outArgument_outCppExpression.plusAssignOperation(extensionGetter_sourceFile (temp_10.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 277)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 277)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 277)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@collectionValueAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_collectionValueAST temp_0 = this ;
  UpEnumerator__5B_collectionValueElementAST_5D_ enumerator_3388 (temp_0.readProperty_mExpressionList ()) ;
  while (enumerator_3388.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_3388.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 84)) ;
    enumerator_3388.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@collectionValueAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_targetType_4262 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_collectionValueAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_targetType_4262 = constinArgument_inType ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_collectionValueAST temp_2 = this ;
    var_targetType_4262 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 102)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, var_targetType_4262.objectCompare (GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-primary-collection-value.galgas4", 105)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_collectionValueAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("Cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 106)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 107)).readProperty_supportArrayLiteral ().operator_not (SOURCE_FILE ("expression-primary-collection-value.galgas4", 107)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_collectionValueAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mEndOfCollectionValue (), GGS_string ("the @").add_operation (extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 109)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 109)).add_operation (GGS_string (" type does not array literal value"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 109)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 108)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GGS_initializerMap var_initializerMap_4771 = extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 112)).readProperty_initializerMap () ;
      GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_4863 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = var_initializerMap_4771.getter_contains (extensionGetter_initializerSignature (var_emptyArgumentList_4863, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 114)) COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 114)).operator_not (SOURCE_FILE ("expression-primary-collection-value.galgas4", 114)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_collectionValueAST temp_10 = this ;
          const GGS_collectionValueAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mTypeName ().readProperty_location (), GGS_string ("the @").add_operation (temp_11.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 115)).add_operation (GGS_string (" has no @() initializer"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 115)), fixItArray12  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 115)) ;
        }
      }
      GGS_lstring var_nameForUsefulness_5105 = function_initializerNameForUsefulEntitiesGraph (extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 119)).readProperty_typeName (), extensionGetter_initializerSignature (var_emptyArgumentList_4863, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 120)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 118)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_nameForUsefulness_5105 COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 122)) ;
      }
      GGS_unifiedTypeMapEntry var_elementType_5380 = extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 124)).readProperty_typeForEnumeratedElement () ;
      GGS__5B_collectionValueElementForGeneration_5D_ var_expressionListForGeneration_5490 = GGS__5B_collectionValueElementForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_collectionValueAST temp_13 = this ;
      UpEnumerator__5B_collectionValueElementAST_5D_ enumerator_5546 (temp_13.readProperty_mExpressionList ()) ;
      while (enumerator_5546.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expressionForGeneration_5854 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5546.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_elementType_5380, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionForGeneration_5854, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 127)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_elementType_5380, var_expressionForGeneration_5854.readProperty_mResultType (), enumerator_5546.current (HERE).readProperty_location (), var_expressionForGeneration_5854, inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 137)) ;
        }
        var_expressionListForGeneration_5490.plusPlusAssignOperation (GGS_collectionValueElementForGeneration::init_21__21_ (var_expressionForGeneration_5854, enumerator_5546.current (HERE).readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 143)) ;
        enumerator_5546.gotoNextObject () ;
      }
      const GGS_collectionValueAST temp_14 = this ;
      outArgument_outExpression = GGS_expressionCollectionForGeneration::init_21__21__21_ (var_targetType_4262, temp_14.readProperty_mEndOfCollectionValue (), var_expressionListForGeneration_5490, inCompiler COMMA_HERE) ;
      GGS_lstring var_typeUsefulnessName_6419 = function_typeNameForUsefulEntitiesGraph (extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 151)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 151)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_6419 COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 152)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@expressionCollectionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_expressionCollectionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 180)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-collection-value.galgas4", 182)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 182)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 183)) ;
  const GGS_expressionCollectionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 185)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 185)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 185)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 185)) ;
  const GGS_expressionCollectionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" = GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 186)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 186)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 186)) ;
  const GGS_expressionCollectionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::init (").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 187)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 187)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 187)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 187)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 188)) ;
  }
  const GGS_expressionCollectionForGeneration temp_4 = this ;
  UpEnumerator__5B_collectionValueElementForGeneration_5D_ enumerator_8306 (temp_4.readProperty_expressionList ()) ;
  while (enumerator_8306.hasCurrentObject ()) {
    GGS_string var_argumentCppName_8505 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_8306.current (HERE).readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_8505, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 191)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outCppExpression.add_operation (GGS_string (".plusPlusAssignOperation ("), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 198)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 198)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(var_argumentCppName_8505.add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 199)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 199)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_commaSourceFile (enumerator_8306.current (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 200)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 200)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 200)) ;
    enumerator_8306.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_type_2766 ;
  GGS_string var_sourceVariableCppName_2791 ;
  GGS_string var_nameForCheckingFormalParameterUsing_2833 ;
  {
  const GGS_varInExpressionAST temp_0 = this ;
  extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, temp_0.readProperty_mVarName (), var_type_2766, var_sourceVariableCppName_2791, var_nameForCheckingFormalParameterUsing_2833, inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 56)) ;
  }
  const GGS_varInExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_varInExpressionForGeneration::init_21__21__21__21_ (var_type_2766, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_2791, var_nameForCheckingFormalParameterUsing_2833, inCompiler COMMA_HERE) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, var_nameForCheckingFormalParameterUsing_2833.objectCompare (function_gCompilerCppName (inCompiler COMMA_HERE))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_varInExpressionAST temp_3 = this ;
      GGS_lstring var_usefulnessName_3186 = function_functionNameForUsefulEntitiesGraph (temp_3.readProperty_mVarName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 70)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3186 COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 71)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_varInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 94)) ;
  {
  const GGS_varInExpressionForGeneration temp_1 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_1.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 95)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_varInExpressionForGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mNameForCheckingFormalParameterUsing ().objectCompare (function_gCompilerCppName (inCompiler COMMA_HERE))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_varInExpressionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_4.readProperty_mCppVarName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-var.galgas4", 98)), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 98))  COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 98)) ;
      const GGS_varInExpressionForGeneration temp_5 = this ;
      outArgument_outCppExpression = GGS_string ("function_").add_operation (temp_5.readProperty_mCppVarName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 99)).add_operation (GGS_string (" (inCompiler COMMA_HERE)"), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 99)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_varInExpressionForGeneration temp_6 = this ;
    outArgument_outCppExpression = temp_6.readProperty_mCppVarName () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@globalConstantInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_globalConstantInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                              GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GGS_string & outArgument_outCppExpression,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_globalConstantInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 122)) ;
  const GGS_globalConstantInExpressionForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_1.readProperty_mGlobalConstantName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-var.galgas4", 124)), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 124))  COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 124)) ;
  const GGS_globalConstantInExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = GGS_string ("function_").add_operation (temp_2.readProperty_mGlobalConstantName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 126)).add_operation (GGS_string (" (inCompiler COMMA_HERE)"), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 126)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 127)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalCharExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalCharExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                      GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                      GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalCharExpressionAST temp_0 = this ;
  const GGS_literalCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalCharExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mCharacter ().readProperty_location (), temp_1.readProperty_mCharacter ().readProperty_char (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalCharExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalCharExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_char (utf32 (").add_operation (temp_0.readProperty_mCharacter ().getter_uint (SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)).getter_string (SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalBigIntExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalBigIntExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBigIntExpressionAST temp_0 = this ;
  const GGS_literalBigIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_bigint (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalUIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalUIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalUIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_uint (uint32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 103)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 103)).add_operation (GGS_string ("U))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 103)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalUInt64ExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                 GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalUInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_u_36__34_ (uint64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 116)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 116)).add_operation (GGS_string ("ULL))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 116)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalU8ExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalU_38_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                          GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                          GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                          GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                          GGS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalU_38_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_u_38_ (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 130)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 130)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 130)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalSIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalSIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_sint (int32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 148)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 148)).add_operation (GGS_string ("L))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 148)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalSInt64ExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                 GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalSInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_s_36__34_ (int64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 165)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 165)).add_operation (GGS_string ("LL))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 165)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalBigIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                           GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBigIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_bigint (\"").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 182)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 182)).add_operation (GGS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 182)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 183)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 184)) ;
  const GGS_literalBigIntExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 185)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 185)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 185)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_3157 = GGS_string::makeEmptyString () ;
  const GGS_literalStringExpressionAST temp_0 = this ;
  UpEnumerator__5B_string_5D_ enumerator_3184 (temp_0.readProperty_mStringSequence ()) ;
  while (enumerator_3184.hasCurrentObject ()) {
    var_s_3157.plusAssignOperation(enumerator_3184.current (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 72)) ;
    enumerator_3184.gotoNextObject () ;
  }
  const GGS_literalStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalStringExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_3157, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                           GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_literalStringExpressionForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mString ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCppExpression = GGS_string ("GGS_string::makeEmptyString ()") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_literalStringExpressionForGeneration temp_2 = this ;
    outArgument_outCppExpression = GGS_string ("GGS_string (").add_operation (temp_2.readProperty_mString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("expression-primary-literal-string.galgas4", 96)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 96)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 96)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryMinusExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 54)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryMinusExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_3429 ;
  const GGS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-minus.galgas4", 72)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3429, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 69)) ;
  GGS_unifiedTypeMapEntry var_type_3505 = var_expression_3429.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_literalBigIntExpressionForGeneration var_exp_3544 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_3429.ptr ())) ;
    if (nullptr == var_exp_3544.ptr ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (var_exp_3544.readProperty_mResultType (), var_exp_3544.readProperty_mLocation (), var_exp_3544.readProperty_mValue ().operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 83)), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_3505, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 86)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("expression-unary-minus.galgas4", 86)) COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 86)).operator_not (SOURCE_FILE ("expression-unary-minus.galgas4", 86)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_unaryMinusExpressionAST temp_3 = this ;
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3505, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 88)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 88)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 88)), fixItArray4  COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 87)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      const GGS_unaryMinusExpressionAST temp_5 = this ;
      outArgument_outExpression = GGS_unaryMinusExpressionForGeneration::init_21__21__21_ (var_type_3505, temp_5.readProperty_mOperatorLocation (), var_expression_3429, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryMinusExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 115)) ;
  GGS_string var_operand_5367 ;
  const GGS_unaryMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5367, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 117)) ;
  const GGS_unaryMinusExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5367.add_operation (GGS_string (".operator_unary_minus ("), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 125)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 125)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 125)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 125)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 125)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 126)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@notExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_notExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@notExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4090 ;
  const GGS_notExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-not.galgas4", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4090, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4166 = var_expression_4090.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (nullptr != dynamic_cast <const cPtr_trueExpressionForGeneration *> (var_expression_4090.ptr ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_notExpressionAST temp_2 = this ;
      outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_2.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_falseExpressionForGeneration *> (var_expression_4090.ptr ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_notExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = extensionGetter_definition (var_type_4166, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 101)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("expression-not.galgas4", 101)) COMMA_SOURCE_FILE ("expression-not.galgas4", 101)).operator_not (SOURCE_FILE ("expression-not.galgas4", 101)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_notExpressionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4166, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 103)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 103)).add_operation (GGS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 103)), fixItArray7  COMMA_SOURCE_FILE ("expression-not.galgas4", 102)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        const GGS_notExpressionAST temp_8 = this ;
        outArgument_outExpression = GGS_notExpressionForGeneration::init_21__21__21_ (var_type_4166, temp_8.readProperty_mOperatorLocation (), var_expression_4090, inCompiler COMMA_HERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@notExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                 GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                 GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                 GGS_string & outArgument_outCppExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_notExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 131)) ;
  GGS_string var_operand_5856 ;
  const GGS_notExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5856, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 133)) ;
  const GGS_notExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5856.add_operation (GGS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryWrappingMinusExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryWrappingMinusExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4163 ;
  const GGS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4163, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4239 = var_expression_4163.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4239, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)) COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)).operator_not (SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unaryWrappingMinusExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4239, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 99)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_unaryWrappingMinusExpressionAST temp_4 = this ;
    outArgument_outExpression = GGS_unaryWrappingMinusExpressionForGeneration::init_21__21__21_ (var_type_4239, temp_4.readProperty_mOperatorLocation (), var_expression_4163, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryWrappingMinusExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryWrappingMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 126)) ;
  GGS_string var_operand_5664 ;
  const GGS_unaryWrappingMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5664, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 128)) ;
  outArgument_outCppExpression = var_operand_5664.add_operation (GGS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 136)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_string_5D_ var_directoryList_3363 ;
  GGS_string var_fileName_3391 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_filewrapperInExpressionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mFilewrapperPath ().readProperty_string ().getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 75)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_filewrapperInExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("path is empty"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 76)) ;
      var_directoryList_3363.drop () ; // Release error dropped variable
      var_fileName_3391.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_filewrapperInExpressionAST temp_5 = this ;
      test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 77)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_filewrapperInExpressionAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the path should not begin with '/'"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 78)) ;
        var_directoryList_3363.drop () ; // Release error dropped variable
        var_fileName_3391.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      const GGS_filewrapperInExpressionAST temp_8 = this ;
      var_directoryList_3363 = temp_8.readProperty_mFilewrapperPath ().readProperty_string ().getter_componentsSeparatedByString (GGS_string ("/") COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 80)) ;
      {
      var_directoryList_3363.setter_removeLast (var_fileName_3391, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 81)) ;
      }
    }
  }
  GGS_wrapperFileMap var_filewrapperFileMap_3989 ;
  GGS_wrapperDirectoryMap var_filewrapperDirectoryMap_4039 ;
  GGS_bool var_isInternal_4079 ;
  const GGS_filewrapperInExpressionAST temp_9 = this ;
  GGS_lstring joker_3952 ; // Joker input parameter
  GGS__5B_lstring_5D_ joker_3960 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_9.readProperty_mFilewrapperName (), joker_3952, joker_3960, var_filewrapperFileMap_3989, var_filewrapperDirectoryMap_4039, var_isInternal_4079, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 84)) ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = var_isInternal_4079.boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_filewrapperInExpressionAST temp_11 = this ;
      GGS_location var_filewrapperDeclarationLocation_4144 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_11.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 94)) ;
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_filewrapperInExpressionAST temp_13 = this ;
        test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 95)).objectCompare (var_filewrapperDeclarationLocation_4144.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 95)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          const GGS_filewrapperInExpressionAST temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mFilewrapperName ().readProperty_location (), GGS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_4144.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 96)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 96)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 96)), fixItArray15  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 96)) ;
        }
      }
    }
  }
  GGS_string var_builtPath_4531 = GGS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_4039.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 101)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 101)).isValid ()) {
    uint32_t variant_4548 = var_filewrapperDirectoryMap_4039.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 101)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 101)).uintValue () ;
    bool loop_4548 = true ;
    while (loop_4548) {
      loop_4548 = GGS_bool (ComparisonKind::greaterThan, var_directoryList_3363.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 102)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_4548) {
        loop_4548 = GGS_bool (ComparisonKind::greaterThan, var_directoryList_3363.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 102)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_4548 && (0 == variant_4548)) {
        loop_4548 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 101)) ;
      }
      if (loop_4548) {
        variant_4548 -= 1 ;
        GGS_string var_directoryName_4662 ;
        {
        var_directoryList_3363.setter_removeFirst (var_directoryName_4662, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 103)) ;
        }
        var_builtPath_4531.plusAssignOperation(var_directoryName_4662.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 104)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 104)) ;
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = var_filewrapperDirectoryMap_4039.getter_contains (var_directoryName_4662 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 105)).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            GGS_uint joker_4937 ; // Joker input parameter
            var_filewrapperDirectoryMap_4039.method_searchKey (GGS_lstring::init_21__21_ (var_directoryName_4662, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 107)), inCompiler COMMA_HERE), var_filewrapperFileMap_3989, var_filewrapperDirectoryMap_4039, joker_4937, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 106)) ;
          }
        }
        if (GalgasBool::boolFalse == test_16) {
          const GGS_filewrapperInExpressionAST temp_17 = this ;
          const GGS_filewrapperInExpressionAST temp_18 = this ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the '").add_operation (var_builtPath_4531, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 113)).add_operation (GGS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 113)).add_operation (temp_18.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 113)).add_operation (GGS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 113)), fixItArray19  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 113)) ;
          var_filewrapperFileMap_3989.drop () ; // Release error dropped variable
          var_directoryList_3363 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
        }
      }
    }
  }
  GGS_uint var_fileIndex_5198 ;
  GGS_bool var_isTextFile_5220 ;
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = var_filewrapperFileMap_3989.getter_contains (var_fileName_3391 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 119)).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      GGS_string joker_5351 ; // Joker input parameter
      GGS_uint joker_5368 ; // Joker input parameter
      var_filewrapperFileMap_3989.method_searchKey (GGS_lstring::init_21__21_ (var_fileName_3391, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 120)), inCompiler COMMA_HERE), joker_5351, var_isTextFile_5220, joker_5368, var_fileIndex_5198, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 120)) ;
    }
  }
  if (GalgasBool::boolFalse == test_20) {
    const GGS_filewrapperInExpressionAST temp_21 = this ;
    const GGS_filewrapperInExpressionAST temp_22 = this ;
    GenericArray <FixItDescription> fixItArray23 ;
    inCompiler->emitSemanticError (temp_21.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the '").add_operation (var_fileName_3391, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 123)).add_operation (GGS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 123)).add_operation (var_builtPath_4531, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 123)).add_operation (GGS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 123)).add_operation (temp_22.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 123)).add_operation (GGS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 123)), fixItArray23  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 122)) ;
    var_fileIndex_5198.drop () ; // Release error dropped variable
    var_isTextFile_5220.drop () ; // Release error dropped variable
  }
  const GGS_filewrapperInExpressionAST temp_24 = this ;
  GGS_unifiedTypeMapEntry var_fileWrapperType_5641 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_24.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 127)) ;
  GGS_unifiedTypeMapEntry temp_25 ;
  const GalgasBool test_26 = var_isTextFile_5220.boolEnum () ;
  if (GalgasBool::boolTrue == test_26) {
    temp_25 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  }else if (GalgasBool::boolFalse == test_26) {
    temp_25 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("data"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 132)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 132)) ;
  }
  const GGS_filewrapperInExpressionAST temp_27 = this ;
  const GGS_filewrapperInExpressionAST temp_28 = this ;
  outArgument_outExpression = GGS_filewrapperStaticPathInExpressionForGeneration::init_21__21__21__21__21__21_ (temp_25, temp_27.readProperty_mFilewrapperName ().readProperty_location (), var_fileWrapperType_5641, temp_28.readProperty_mFilewrapperName ().readProperty_string (), var_fileIndex_5198, var_isTextFile_5220, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperStaticPathInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                     GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                     GGS_string & outArgument_outCppExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_filewrapperType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 162)) ;
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_1 = this ;
  GGS_string temp_2 ;
  const GalgasBool test_3 = temp_1.readProperty_mIsTextFile ().boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = GGS_string ("GGS_string") ;
  }else if (GalgasBool::boolFalse == test_3) {
    temp_2 = GGS_string ("GGS_data") ;
  }
  outArgument_outCppExpression = temp_2 ;
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_4 = this ;
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" (gWrapperFileContent_").add_operation (temp_4.readProperty_mFilewrapperFileIndex ().getter_string (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 165)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 165)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 165)).add_operation (temp_5.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 165)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 165)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 165)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 165)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerCallAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_initializerCallAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_initializerCallAST temp_2 = this ;
      GGS_unifiedTypeMapEntry joker_5829 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), joker_5829, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 140)) ;
      }
    }
  }
  const GGS_initializerCallAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 142)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerCallAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_instanciedType_6748 ;
  GGS_lstring var_initializerName_6784 ;
  GGS__5B_semanticExpressionForGeneration_5D_ var_constructorEffectiveParameterList_6847 ;
  {
  const GGS_initializerCallAST temp_0 = this ;
  const GGS_initializerCallAST temp_1 = this ;
  const GGS_initializerCallAST temp_2 = this ;
  routine_analyzeInitializerInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_mTypeName (), temp_1.readProperty_mExpressions (), temp_2.readProperty_mEndOfExpressions (), var_instanciedType_6748, var_initializerName_6784, var_constructorEffectiveParameterList_6847, inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 155)) ;
  }
  GGS_lstring var_typeUsefulnessName_6924 = function_typeNameForUsefulEntitiesGraph (extensionGetter_definition (var_instanciedType_6748, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 170)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 170)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_6924 COMMA_SOURCE_FILE ("expression-initializer.galgas4", 171)) ;
  }
  const GGS_initializerCallAST temp_3 = this ;
  outArgument_outExpression = GGS_initializerCallForGeneration::init_21__21__21__21_ (var_instanciedType_6748, temp_3.readProperty_mEndOfExpressions (), var_initializerName_6784.readProperty_string (), var_constructorEffectiveParameterList_6847, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInitializerInvocation?&??&&???!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInitializerInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                           const GGS_lstring constinArgument_inTypeName,
                                                                                           const GGS__5B_actualOutputArgumentAST_5D_ constinArgument_inInvocationArguments,
                                                                                           const GGS_location constinArgument_inEndOfExpressions,
                                                                                           GGS_unifiedTypeMapEntry & outArgument_outInstanciedType,
                                                                                           GGS_lstring & outArgument_outInitializerName,
                                                                                           GGS__5B_semanticExpressionForGeneration_5D_ & outArgument_outConstructorEffectiveParameterList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanciedType.drop () ; // Release 'out' argument
  outArgument_outInitializerName.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outInstanciedType = constinArgument_inType ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outInstanciedType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 201)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outInstanciedType.getter_isNull (SOURCE_FILE ("expression-initializer.galgas4", 203)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 204)) ;
      outArgument_outInstanciedType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outInitializerName.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_unifiedTypeDefinition var_instanciedTypeDefinition_8602 = extensionGetter_definition (outArgument_outInstanciedType, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 208)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = var_instanciedTypeDefinition_8602.readProperty_isConcrete ().operator_not (SOURCE_FILE ("expression-initializer.galgas4", 209)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot instanciate an abstract class"), fixItArray4  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 210)) ;
        outArgument_outInstanciedType.drop () ; // Release error dropped variable
        outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
        outArgument_outInitializerName.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_lstring var_nameForUsefulness_8918 = function_initializerNameForUsefulEntitiesGraph (var_instanciedTypeDefinition_8602.readProperty_typeName (), extensionGetter_initializerSignature (constinArgument_inInvocationArguments, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 217)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 215)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_nameForUsefulness_8918 COMMA_SOURCE_FILE ("expression-initializer.galgas4", 219)) ;
      }
      outArgument_outInitializerName = GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (constinArgument_inInvocationArguments, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 221)), constinArgument_inEndOfExpressions, inCompiler COMMA_HERE) ;
      GGS_initializerMap var_initializerMap_9312 = var_instanciedTypeDefinition_8602.readProperty_initializerMap () ;
      GGS__5B_functionSignatureElement_5D_ var_formalSignature_9407 ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_initializerMap_9312.getter_contains (outArgument_outInitializerName.readProperty_string () COMMA_SOURCE_FILE ("expression-initializer.galgas4", 224)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          var_initializerMap_9312.method_searchKey (outArgument_outInitializerName, var_formalSignature_9407, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 225)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        GGS_string var_s_9577 = GGS_string ("@").add_operation (var_instanciedTypeDefinition_8602.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 227)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 227)) ;
        UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_9653 (constinArgument_inInvocationArguments) ;
        while (enumerator_9653.hasCurrentObject ()) {
          var_s_9577.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 230)) ;
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_9653.current (HERE).readProperty_mActualSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              var_s_9577.plusAssignOperation(enumerator_9653.current (HERE).readProperty_mActualSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 232)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 232)) ;
            }
          }
          enumerator_9653.gotoNextObject () ;
          if (enumerator_9653.hasCurrentObject ()) {
            var_s_9577.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 235)) ;
          }
        }
        var_s_9577.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 237)) ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (outArgument_outInitializerName.readProperty_location (), GGS_string ("the ").add_operation (var_s_9577, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 239)).add_operation (GGS_string (" initializer is not declared"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 239)), fixItArray7  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 238)) ;
        var_formalSignature_9407.drop () ; // Release error dropped variable
      }
      outArgument_outConstructorEffectiveParameterList = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_10133 (constinArgument_inInvocationArguments) ;
      UpEnumerator__5B_functionSignatureElement_5D_ enumerator_10179 (var_formalSignature_9407) ;
      while (enumerator_10133.hasCurrentObject () && enumerator_10179.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_exp_10549 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10133.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10179.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_10549, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 246)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_10179.current (HERE).readProperty_mFormalArgumentType (), var_exp_10549.readProperty_mResultType (), enumerator_10133.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_10549, inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 255)) ;
        }
        outArgument_outConstructorEffectiveParameterList.plusPlusAssignOperation (var_exp_10549  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 261)) ;
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_10179.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_10133.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_string temp_9 ;
            const GalgasBool test_10 = GGS_bool (ComparisonKind::notEqual, enumerator_10179.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              temp_9 = enumerator_10179.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 264)) ;
            }else if (GalgasBool::boolFalse == test_10) {
              temp_9 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_10933 = GGS_string ("!").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 263)) ;
            GenericArray <FixItDescription> fixItArray11 ;
            appendFixItActions (fixItArray11, EnumFixItKind::fixItReplace, var_s_10933) ;
            inCompiler->emitSemanticError (enumerator_10133.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_10933, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 268)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 268)), fixItArray11  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 267)) ;
          }
        }
        enumerator_10133.gotoNextObject () ;
        enumerator_10179.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerCallForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_initializerCallForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 290)) ;
  GGS__5B_string_5D_ var_parameterList_12167 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_initializerCallForGeneration temp_1 = this ;
  UpEnumerator__5B_semanticExpressionForGeneration_5D_ enumerator_12214 (temp_1.readProperty_mEffectiveParameterList ()) ;
  while (enumerator_12214.hasCurrentObject ()) {
    GGS_string var_parameter_12426 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_12214.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_12426, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 293)) ;
    var_parameterList_12167.plusPlusAssignOperation (var_parameter_12426  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 300)) ;
    enumerator_12214.gotoNextObject () ;
  }
  const GGS_initializerCallForGeneration temp_2 = this ;
  const GGS_initializerCallForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 302)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 302)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 302)).add_operation (temp_3.readProperty_initializerName ().getter_identifierRepresentation (SOURCE_FILE ("expression-initializer.galgas4", 303)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 303)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 303)) ;
  UpEnumerator__5B_string_5D_ enumerator_12682 (var_parameterList_12167) ;
  while (enumerator_12682.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_12682.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 306)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 306)) ;
    enumerator_12682.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-initializer.galgas4", 308)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 309)) ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" COMMA_HERE)"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 310)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@multiplicationExpressionNoOverflowAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 163)) ;
  const GGS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 164)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@multiplicationExpressionNoOverflowAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_8068 ;
  const GGS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8068, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 178)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_8409 ;
  const GGS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8068.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8409, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 188)) ;
  {
  const GGS_multiplicationExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_8068.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 199)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas4", 199)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 199)), GGS_string ("&*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_8068, var_rightExpression_8409, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 198)) ;
  }
  const GGS_multiplicationExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_8068.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_8068, GGS_binaryOperator::class_func_wrappingMul (SOURCE_FILE ("expression-multiplicative.galgas4", 210)), var_rightExpression_8409, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@multiplicationExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 221)) ;
  const GGS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 222)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@multiplicationExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                         const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_localVarManager & ioArgument_ioVariableMap,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_10106 ;
  const GGS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_10106, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 236)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_10447 ;
  const GGS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_10106.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10447, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 246)) ;
  {
  const GGS_multiplicationExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_10106.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 257)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("expression-multiplicative.galgas4", 257)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 257)), GGS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_10106, var_rightExpression_10447, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 256)) ;
  }
  const GGS_multiplicationExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_10106.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_10106, GGS_binaryOperator::class_func_multiply_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas4", 268)), var_rightExpression_10447, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@divisionExpressionNoOverflowAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 278)) ;
  const GGS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 279)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@divisionExpressionNoOverflowAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_12151 ;
  const GGS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_12151, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 293)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_12492 ;
  const GGS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_12151.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12492, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 303)) ;
  {
  const GGS_divisionExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_12151.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 314)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas4", 314)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 314)), GGS_string ("&/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_12151, var_rightExpression_12492, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 313)) ;
  }
  const GGS_divisionExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_12151.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_12151, GGS_binaryOperator::class_func_wrappingDiv (SOURCE_FILE ("expression-multiplicative.galgas4", 325)), var_rightExpression_12492, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@divisionExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 335)) ;
  const GGS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 336)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@divisionExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_14175 ;
  const GGS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14175, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 350)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14516 ;
  const GGS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14175.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14516, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 360)) ;
  {
  const GGS_divisionExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14175.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 371)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("expression-multiplicative.galgas4", 371)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 371)), GGS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14175, var_rightExpression_14516, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 370)) ;
  }
  const GGS_divisionExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14175.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_14175, GGS_binaryOperator::class_func_divide_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas4", 382)), var_rightExpression_14516, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@moduloExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 392)) ;
  const GGS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 393)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@moduloExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_16194 ;
  const GGS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16194, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 407)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_16535 ;
  const GGS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_16194.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16535, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 417)) ;
  {
  const GGS_moduloExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16194.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 428)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("expression-multiplicative.galgas4", 428)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 428)), GGS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16194, var_rightExpression_16535, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 427)) ;
  }
  const GGS_moduloExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_16194.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_16194, GGS_binaryOperator::class_func_modulo_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas4", 439)), var_rightExpression_16535, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                 const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                 GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_3510 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("expression-primary-self.galgas4", 80)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("expression-primary-self.galgas4", 80)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_selfCppName_3595 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
      const GGS_selfInExpressionAST temp_1 = this ;
      outArgument_outExpression = GGS_selfInExpressionForGeneration::init_21__21__21_ (var_selfAvailable_3510.readProperty_type (), temp_1.readProperty_mSelfLocation (), var_selfCppName_3595, inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfInExpressionAST temp_2 = this ;
    GenericArray <FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (temp_2.readProperty_mSelfLocation (), GGS_string ("'self' not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 84)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                    GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                    GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GGS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-self.galgas4", 104)), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 104)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 105)) ;
  const GGS_selfInExpressionForGeneration temp_0 = this ;
  const GGS_selfInExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (temp_0.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (temp_1.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)) ;
  {
  const GGS_selfInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 107)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@trueExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@trueExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                               const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                               GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                               GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_trueExpressionAST temp_0 = this ;
  outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@falseExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@falseExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_falseExpressionAST temp_0 = this ;
  outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@trueExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                  GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                  GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                  GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                  GGS_string & outArgument_outCppExpression,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("GGS_bool (true)") ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@falseExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                   GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                   GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                   GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("GGS_bool (false)") ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@trueExpressionForGeneration isTrueExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_trueExpressionForGeneration::getter_isTrueExpression (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (true) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryPlusExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryPlusExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-plus.galgas4", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outExpression, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4142 = outArgument_outExpression.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4142, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("expression-unary-plus.galgas4", 97)) COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 97)).operator_not (SOURCE_FILE ("expression-unary-plus.galgas4", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unaryPlusExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4142, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 99)).add_operation (GGS_string ("' and does not support the prefix '+' operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bangExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 73)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bangExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4141 ;
  const GGS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-primary-bang.galgas4", 91)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4141, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 88)) ;
  GGS_unifiedTypeMapEntry var_type_4217 = var_expression_4141.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_typeKindEnum_2E_weakReferenceType var_weakRef_4256 = extensionGetter_definition (var_type_4217, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 99)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("expression-primary-bang.galgas4", 99)).unwrappedValue () ;
    if (!extensionGetter_definition (var_type_4217, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 99)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("expression-primary-bang.galgas4", 99)).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      const GGS_bangExpressionAST temp_2 = this ;
      outArgument_outExpression = GGS_bangExpressionForGeneration::init_21__21__21__21_ (var_weakRef_4256.readProperty_referenceType (), temp_2.readProperty_mOperatorLocation (), var_expression_4141, extensionGetter_definition (var_type_4217, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 104)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_bangExpressionAST temp_3 = this ;
    GenericArray <FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4217, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 108)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 108)).add_operation (GGS_string ("' and does not support the 'bang' operator"), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 108)), fixItArray4  COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 107)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bangExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                  GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                  GGS_string & outArgument_outCppExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_bangExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 129)) ;
  GGS_string var_operand_5892 ;
  const GGS_bangExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5892, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 131)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 139)) ;
  }
  const GGS_bangExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5892.add_operation (GGS_string (".bang_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 140)).add_operation (temp_2.readProperty_mReceiverTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-bang.galgas4", 140)), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 140)) ;
  const GGS_bangExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" (").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 141)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 141)), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 141)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 141)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 141)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@testDynamicClassInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 115)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@testDynamicClassInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_5289 ;
  const GGS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas4", 133)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5289, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 130)) ;
  const GGS_testDynamicClassInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_castType_5338 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 140)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_5289.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 142)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas4", 142)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_5584 = var_castType_5338 ;
      GGS_bool var_found_5611 = GGS_bool (ComparisonKind::equal, var_t_5584.objectCompare (var_expression_5289.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas4", 146)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 146)).isValid ()) {
        uint32_t variant_5651 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas4", 146)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 146)).uintValue () ;
        bool loop_5651 = true ;
        while (loop_5651) {
          loop_5651 = var_found_5611.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 147)).operator_and (extensionGetter_definition (var_t_5584, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 147)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas4", 147)).operator_not (SOURCE_FILE ("expression-is-as.galgas4", 147)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 147)).isValid () ;
          if (loop_5651) {
            loop_5651 = var_found_5611.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 147)).operator_and (extensionGetter_definition (var_t_5584, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 147)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas4", 147)).operator_not (SOURCE_FILE ("expression-is-as.galgas4", 147)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 147)).boolValue () ;
          }
          if (loop_5651 && (0 == variant_5651)) {
            loop_5651 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas4", 146)) ;
          }
          if (loop_5651) {
            variant_5651 -= 1 ;
            var_t_5584 = extensionGetter_definition (var_t_5584, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 148)).readProperty_superType () ;
            var_found_5611 = GGS_bool (ComparisonKind::equal, var_t_5584.objectCompare (var_expression_5289.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_5611.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 151)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_testDynamicClassInExpressionAST temp_4 = this ;
          const GGS_testDynamicClassInExpressionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)).add_operation (extensionGetter_definition (var_expression_5289.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 152)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GenericArray <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_5289.readProperty_mLocation (), GGS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_5289.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 157)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 156)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 157)), fixItArray7  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 156)) ;
  }
  const GGS_testDynamicClassInExpressionAST temp_8 = this ;
  outArgument_outExpression = GGS_testDynamicClassInExpressionForGeneration::init_21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_5289, var_castType_5338, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@castInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 173)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@castInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_7547 ;
  const GGS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas4", 191)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_7547, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 188)) ;
  const GGS_castInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_type_7597 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 198)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_7547.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 200)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas4", 200)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_7837 = var_type_7597 ;
      GGS_bool var_found_7860 = GGS_bool (ComparisonKind::equal, var_t_7837.objectCompare (var_expression_7547.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas4", 204)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 204)).isValid ()) {
        uint32_t variant_7900 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas4", 204)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 204)).uintValue () ;
        bool loop_7900 = true ;
        while (loop_7900) {
          loop_7900 = var_found_7860.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 205)).operator_and (extensionGetter_definition (var_t_7837, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 205)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas4", 205)).operator_not (SOURCE_FILE ("expression-is-as.galgas4", 205)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 205)).isValid () ;
          if (loop_7900) {
            loop_7900 = var_found_7860.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 205)).operator_and (extensionGetter_definition (var_t_7837, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 205)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas4", 205)).operator_not (SOURCE_FILE ("expression-is-as.galgas4", 205)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 205)).boolValue () ;
          }
          if (loop_7900 && (0 == variant_7900)) {
            loop_7900 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas4", 204)) ;
          }
          if (loop_7900) {
            variant_7900 -= 1 ;
            var_t_7837 = extensionGetter_definition (var_t_7837, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 206)).readProperty_superType () ;
            var_found_7860 = GGS_bool (ComparisonKind::equal, var_t_7837.objectCompare (var_expression_7547.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_7860.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 209)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_castInExpressionAST temp_4 = this ;
          const GGS_castInExpressionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 211)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 211)).add_operation (extensionGetter_definition (var_expression_7547.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 212)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 211)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 212)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 210)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GenericArray <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_7547.readProperty_mLocation (), GGS_string ("cast expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_7547.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 217)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 216)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 217)), fixItArray7  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 215)) ;
  }
  const GGS_castInExpressionAST temp_8 = this ;
  const GGS_castInExpressionAST temp_9 = this ;
  outArgument_outExpression = GGS_castInExpressionForGeneration::init_21__21__21__21__21_ (var_type_7597, temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_7547, temp_9.readProperty_mTypeName ().readProperty_string (), var_type_7597, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@testDynamicClassInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testDynamicClassInExpressionForGeneration temp_0 = this ;
  GGS_string var_typeNameRepresentation_9427 = extensionGetter_definition (temp_0.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 246)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 246)) ;
  GGS_string var_receiverExpression_9720 ;
  const GGS_testDynamicClassInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_9720, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 248)) ;
  const GGS_testDynamicClassInExpressionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 256)) ;
  outArgument_outCppExpression = GGS_string ("GGS_bool (nullptr != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation_9427, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 257)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 258)).add_operation (var_receiverExpression_9720, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 259)).add_operation (GGS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 259)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@castInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                    GGS_stringset & ioArgument_ioInclusionSet,
                                                                    GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GGS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_castInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 271)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas4", 272)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 272)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 273)) ;
  GGS_string var_receiverExpression_10653 ;
  const GGS_castInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_10653, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 275)) ;
  const GGS_castInExpressionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (temp_2.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 283)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 283)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 283)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 284)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 284)).add_operation (GGS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 284)).add_operation (var_receiverExpression_10653, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 285)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 285)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 283)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 286)) ;
  }
  const GGS_castInExpressionForGeneration temp_3 = this ;
  const GGS_castInExpressionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nullptr != dynamic_cast <const cPtr_").add_operation (temp_3.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 290)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 289)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 290)).add_operation (var_receiverExpression_10653, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 291)).add_operation (GGS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 291)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 291)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (GGS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (temp_4.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 292)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (var_receiverExpression_10653, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (GGS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 293)).add_operation (GGS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 293)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 288)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 295)) ;
  }
  const GGS_castInExpressionForGeneration temp_5 = this ;
  const GGS_castInExpressionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 297)).add_operation (temp_5.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 298)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 297)).add_operation (GGS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 298)).add_operation (var_receiverExpression_10653, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 299)).add_operation (GGS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 299)).add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 300)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 299)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 300)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 296)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 301)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 302)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 303)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 304)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 305)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@rightShiftExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 130)) ;
  const GGS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 131)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@rightShiftExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_6551 ;
  const GGS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_6551, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 146)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_6915 ;
  const GGS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_6915, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 156)) ;
  GGS_unifiedTypeMapEntry var_leftType_6996 = var_leftExpression_6551.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_left_7043 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_6551.ptr ())) ;
    if (nullptr == var_left_7043.ptr ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GGS_literalUIntExpressionForGeneration var_right_7116 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_6915.ptr ())) ;
      if (nullptr == var_right_7116.ptr ()) {
        test_2 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_2) {
        const GGS_rightShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_7043.readProperty_mValue ().right_shift_operation (var_right_7116.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 172)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      GGS_literalBigIntExpressionForGeneration var_left_7384 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_6551.ptr ())) ;
      if (nullptr == var_left_7384.ptr ()) {
        test_4 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_4) {
        GGS_literalBigIntExpressionForGeneration var_right_7457 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_6915.ptr ())) ;
        if (nullptr == var_right_7457.ptr ()) {
          test_4 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_4) {
          const GGS_rightShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_7384.readProperty_mValue ().right_shift_operation (var_right_7457.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 179)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 179)), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_6996, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 181)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas4", 181)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 181)).operator_not (SOURCE_FILE ("expression-additive.galgas4", 181)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_rightShiftExpressionAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_6996, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 183)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 183)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 183)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas4", 182)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        const GGS_rightShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_6996, temp_9.readProperty_mOperatorLocation (), var_leftExpression_6551, GGS_binaryOperator::class_func_rightShift (SOURCE_FILE ("expression-additive.galgas4", 191)), var_rightExpression_6915, inCompiler COMMA_HERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@leftShiftExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 202)) ;
  const GGS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 203)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@leftShiftExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_9393 ;
  const GGS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_9393, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 218)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_9757 ;
  const GGS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_9757, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 228)) ;
  GGS_unifiedTypeMapEntry var_leftType_9838 = var_leftExpression_9393.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_left_9885 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_9393.ptr ())) ;
    if (nullptr == var_left_9885.ptr ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GGS_literalUIntExpressionForGeneration var_right_9958 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_9757.ptr ())) ;
      if (nullptr == var_right_9958.ptr ()) {
        test_2 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_2) {
        const GGS_leftShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_9885.readProperty_mValue ().left_shift_operation (var_right_9958.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 244)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      GGS_literalBigIntExpressionForGeneration var_left_10226 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_9393.ptr ())) ;
      if (nullptr == var_left_10226.ptr ()) {
        test_4 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_4) {
        GGS_literalBigIntExpressionForGeneration var_right_10299 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_9757.ptr ())) ;
        if (nullptr == var_right_10299.ptr ()) {
          test_4 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_4) {
          const GGS_leftShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_10226.readProperty_mValue ().left_shift_operation (var_right_10299.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 251)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 251)), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_9838, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 253)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas4", 253)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 253)).operator_not (SOURCE_FILE ("expression-additive.galgas4", 253)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_leftShiftExpressionAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_9838, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 255)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 255)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 255)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas4", 254)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        const GGS_leftShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_9838, temp_9.readProperty_mOperatorLocation (), var_leftExpression_9393, GGS_binaryOperator::class_func_leftShift (SOURCE_FILE ("expression-additive.galgas4", 263)), var_rightExpression_9757, inCompiler COMMA_HERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addExpressionNoOverflowAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 274)) ;
  const GGS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 275)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addExpressionNoOverflowAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_12242 ;
  const GGS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_12242, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 290)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_12583 ;
  const GGS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_12242.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12583, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 300)) ;
  {
  const GGS_addExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_12242.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 311)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas4", 311)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 311)), GGS_string ("&+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_12242, var_rightExpression_12583, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 310)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_12888 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_12242.ptr ())) ;
    if (nullptr == var_leftBigint_12888.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_12968 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_12583.ptr ())) ;
      if (nullptr == var_rightBigint_12968.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_addExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_12888.readProperty_mValue ().add_operation (var_rightBigint_12968.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 323)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_addExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_12242.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_12242, GGS_binaryOperator::class_func_wrappingAdd (SOURCE_FILE ("expression-additive.galgas4", 330)), var_rightExpression_12583, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 341)) ;
  const GGS_addExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 342)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_14642 ;
  const GGS_addExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14642, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 356)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14983 ;
  const GGS_addExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14642.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14983, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 366)) ;
  {
  const GGS_addExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14642.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 377)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("expression-additive.galgas4", 377)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 377)), GGS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14642, var_rightExpression_14983, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 376)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_15282 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_14642.ptr ())) ;
    if (nullptr == var_leftBigint_15282.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_15362 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_14983.ptr ())) ;
      if (nullptr == var_rightBigint_15362.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_addExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_15282.readProperty_mValue ().add_operation (var_rightBigint_15362.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 389)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_addExpressionAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14642.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_14642, GGS_binaryOperator::class_func_add (SOURCE_FILE ("expression-additive.galgas4", 396)), var_rightExpression_14983, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subExpressionNoOverflowAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 407)) ;
  const GGS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 408)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subExpressionNoOverflowAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_17048 ;
  const GGS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_17048, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 423)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_17389 ;
  const GGS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_17048.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_17389, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 433)) ;
  {
  const GGS_subExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_17048.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 444)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas4", 444)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 444)), GGS_string ("&-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_17048, var_rightExpression_17389, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 443)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_17694 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_17048.ptr ())) ;
    if (nullptr == var_leftBigint_17694.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_17774 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_17389.ptr ())) ;
      if (nullptr == var_rightBigint_17774.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_subExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_17694.readProperty_mValue ().subtract_operation (var_rightBigint_17774.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 456)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_subExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_17048.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_17048, GGS_binaryOperator::class_func_wrappingSub (SOURCE_FILE ("expression-additive.galgas4", 463)), var_rightExpression_17389, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 474)) ;
  const GGS_subExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 475)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_19448 ;
  const GGS_subExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_19448, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 489)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_19789 ;
  const GGS_subExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_19448.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_19789, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 499)) ;
  {
  const GGS_subExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_19448.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 510)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("expression-additive.galgas4", 510)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 510)), GGS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_19448, var_rightExpression_19789, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 509)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_20088 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_19448.ptr ())) ;
    if (nullptr == var_leftBigint_20088.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_20168 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_19789.ptr ())) ;
      if (nullptr == var_rightBigint_20168.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_subExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_20088.readProperty_mValue ().subtract_operation (var_rightBigint_20168.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 522)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_subExpressionAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_19448.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_19448, GGS_binaryOperator::class_func_sub (SOURCE_FILE ("expression-additive.galgas4", 529)), var_rightExpression_19789, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@binaryOperatorExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperatorExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                            GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GGS_string & outArgument_outCppExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_binaryOperatorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 572)) ;
  GGS_string var_leftTemporaryOperand_22089 ;
  const GGS_binaryOperatorExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_22089, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 574)) ;
  GGS_string var_rightTemporaryOperand_22275 ;
  const GGS_binaryOperatorExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_22275, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 576)) ;
  GGS_string var_operatorString_22338 ;
  GGS_bool var_hasCompilerOption_22365 ;
  const GGS_binaryOperatorExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mOperator ().enumValue ()) {
  case GGS_binaryOperator::Enumeration::invalid:
    break ;
  case GGS_binaryOperator::Enumeration::enum_rightShift:
    {
      var_operatorString_22338 = GGS_string ("right_shift_operation") ;
      var_hasCompilerOption_22365 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_leftShift:
    {
      var_operatorString_22338 = GGS_string ("left_shift_operation") ;
      var_hasCompilerOption_22365 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_add:
    {
      var_operatorString_22338 = GGS_string ("add_operation") ;
      var_hasCompilerOption_22365 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_wrappingAdd:
    {
      var_operatorString_22338 = GGS_string ("wrapping_add_operation") ;
      var_hasCompilerOption_22365 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_sub:
    {
      var_operatorString_22338 = GGS_string ("subtract_operation") ;
      var_hasCompilerOption_22365 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_wrappingSub:
    {
      var_operatorString_22338 = GGS_string ("wrapping_subtract_operation") ;
      var_hasCompilerOption_22365 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_and:
    {
      var_operatorString_22338 = GGS_string ("operator_and") ;
      var_hasCompilerOption_22365 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_or:
    {
      var_operatorString_22338 = GGS_string ("operator_or") ;
      var_hasCompilerOption_22365 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_xor:
    {
      var_operatorString_22338 = GGS_string ("operator_xor") ;
      var_hasCompilerOption_22365 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_wrappingMul:
    {
      var_operatorString_22338 = GGS_string ("wrapping_multiply_operation") ;
      var_hasCompilerOption_22365 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_multiply_5F_operation:
    {
      var_operatorString_22338 = GGS_string ("multiply_operation") ;
      var_hasCompilerOption_22365 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_divide_5F_operation:
    {
      var_operatorString_22338 = GGS_string ("divide_operation") ;
      var_hasCompilerOption_22365 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_wrappingDiv:
    {
      var_operatorString_22338 = GGS_string ("wrapping_divide_operation") ;
      var_hasCompilerOption_22365 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_modulo_5F_operation:
    {
      var_operatorString_22338 = GGS_string ("modulo_operation") ;
      var_hasCompilerOption_22365 = GGS_bool (true) ;
    }
    break ;
  }
  outArgument_outCppExpression = var_leftTemporaryOperand_22089.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 624)).add_operation (var_operatorString_22338, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 624)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 624)) ;
  outArgument_outCppExpression.plusAssignOperation(var_rightTemporaryOperand_22275, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 625)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_hasCompilerOption_22365.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (", ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 627)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 627)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-additive.galgas4", 628)) ;
      }
    }
  }
  const GGS_binaryOperatorExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssignOperation(extensionGetter_commaSourceFile (temp_5.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 630)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 630)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 630)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 116)) ;
  const GGS_orExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 117)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_6013 ;
  const GGS_orExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_6013, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 131)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_6355 ;
  const GGS_orExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_6013.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_6355, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 141)) ;
  {
  const GGS_orExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_6013.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 152)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("expression-or.galgas4", 152)) COMMA_SOURCE_FILE ("expression-or.galgas4", 152)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_6013, var_rightExpression_6355, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 151)) ;
  }
  const GGS_orExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_6013.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_6013, GGS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("expression-or.galgas4", 162)), var_rightExpression_6355, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orShortExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 172)) ;
  const GGS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 173)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orShortExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                  GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_8004 ;
  const GGS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8004, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 187)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_8346 ;
  const GGS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8004.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8346, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 197)) ;
  {
  const GGS_orShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_8004.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 208)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("expression-or.galgas4", 208)) COMMA_SOURCE_FILE ("expression-or.galgas4", 208)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_8004, var_rightExpression_8346, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 207)) ;
  }
  const GGS_orShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_orShortExpressionForGeneration::init_21__21__21__21_ (var_leftExpression_8004.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_8004, var_rightExpression_8346, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@xorExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 227)) ;
  const GGS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 228)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@xorExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_9985 ;
  const GGS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_9985, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 242)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_10327 ;
  const GGS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_9985.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10327, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 252)) ;
  {
  const GGS_xorExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_9985.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 263)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("expression-or.galgas4", 263)) COMMA_SOURCE_FILE ("expression-or.galgas4", 263)), GGS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_9985, var_rightExpression_10327, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 262)) ;
  }
  const GGS_xorExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_9985.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_9985, GGS_binaryOperator::class_func_operator_5F_xor (SOURCE_FILE ("expression-or.galgas4", 274)), var_rightExpression_10327, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@closedSliceExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 284)) ;
  const GGS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 285)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@closedSliceExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument__5F_inInferenceType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_12041 ;
  const GGS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_12041, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 300)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_12405 ;
  const GGS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12405, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 310)) ;
  GGS_unifiedTypeMapEntry var_leftType_12486 = var_leftExpression_12041.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_leftType_12486, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 321)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_leftExpression_12041.readProperty_mLocation (), GGS_string ("the left expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("expression-or.galgas4", 322)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_rightType_12706 = var_rightExpression_12405.readProperty_mResultType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_12706, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 325)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_rightExpression_12405.readProperty_mLocation (), GGS_string ("the right expression or '...' operator should an @uint"), fixItArray5  COMMA_SOURCE_FILE ("expression-or.galgas4", 326)) ;
    }
  }
  const GGS_closedSliceExpressionAST temp_6 = this ;
  outArgument_outExpression = GGS_closedSliceExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("range"), var_leftExpression_12041.readProperty_mLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 330)), temp_6.readProperty_mOperatorLocation (), var_leftExpression_12041, var_rightExpression_12405, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@openedSliceExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 342)) ;
  const GGS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 343)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@openedSliceExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument__5F_inInferenceType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_14638 ;
  const GGS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14638, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 357)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_15001 ;
  const GGS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_15001, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 367)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_leftExpression_14638.readProperty_mResultType (), var_leftExpression_14638.readProperty_mLocation (), var_leftExpression_14638, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 377)) ;
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_rightExpression_15001.readProperty_mResultType (), var_rightExpression_15001.readProperty_mLocation (), var_rightExpression_15001, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 383)) ;
  }
  const GGS_openedSliceExpressionAST temp_2 = this ;
  outArgument_outExpression = GGS_openedSliceExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("range"), var_leftExpression_14638.readProperty_mLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 391)), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14638, var_rightExpression_15001, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orShortExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                     GGS_string & outArgument_outCppExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 429)) ;
  GGS_string var_leftTemporaryOperand_17316 ;
  const GGS_orShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_17316, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 431)) ;
  GGS_string var_testVar_17373 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-or.galgas4", 439)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 439)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 440)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_bool ").add_operation (var_testVar_17373, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 441)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 441)).add_operation (var_leftTemporaryOperand_17316, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 441)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 441)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 441)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue != ").add_operation (var_testVar_17373, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 442)).add_operation (GGS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 442)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 442)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 444)) ;
  }
  GGS_string var_rightTemporaryOperand_17855 ;
  const GGS_orShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_17855, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 445)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_testVar_17373.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 452)).add_operation (var_rightTemporaryOperand_17855, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 452)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 452)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 452)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 453)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 454)) ;
  outArgument_outCppExpression = var_testVar_17373 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@closedSliceExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                         GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_closedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 466)) ;
  GGS_string var_leftTemporaryOperand_18644 ;
  const GGS_closedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_18644, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 468)) ;
  GGS_string var_rightTemporaryOperand_18853 ;
  const GGS_closedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_18853, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 476)) ;
  const GGS_closedSliceExpressionForGeneration temp_3 = this ;
  const GGS_closedSliceExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_range (").add_operation (var_leftTemporaryOperand_18644, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 485)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 485)).add_operation (var_rightTemporaryOperand_18853, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 485)).add_operation (GGS_string (".subtract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (var_leftTemporaryOperand_18644, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (GGS_string (").add_operation (GGS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@openedSliceExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                         GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_openedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 498)) ;
  GGS_string var_leftTemporaryOperand_19802 ;
  const GGS_openedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_19802, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 500)) ;
  GGS_string var_rightTemporaryOperand_20011 ;
  const GGS_openedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_20011, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 508)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-or.galgas4", 516)) ;
  }
  const GGS_openedSliceExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_range (").add_operation (var_leftTemporaryOperand_19802, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 518)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 518)).add_operation (var_rightTemporaryOperand_20011, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 518)).add_operation (GGS_string (".subtract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 519)).add_operation (var_leftTemporaryOperand_19802, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 519)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 519)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 519)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 520)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 519)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 520)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structPropertyAccessExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structPropertyAccessExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpressionGeneration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_exprGeneration_4285 ;
  const GGS_structPropertyAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 100)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exprGeneration_4285, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 97)) ;
  GGS_unifiedTypeMapEntry var_expressionType_4375 = var_exprGeneration_4285.readProperty_mResultType () ;
  GGS_propertyMap var_propertyMap_4427 = extensionGetter_definition (var_expressionType_4375, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 108)).readProperty_propertyMap () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_structPropertyAccessExpressionAST temp_2 = this ;
    const GGS_propertyMap_2E_element var_prop_4490 = var_propertyMap_4427.readSubcript__3F_ (temp_2.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_propertyMap_4427.readSubcript__3F_ (temp_2.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionForGeneration *> (var_exprGeneration_4285.ptr ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          {
          const GGS_structPropertyAccessExpressionAST temp_4 = this ;
          const GGS_structPropertyAccessExpressionAST temp_5 = this ;
          GGS_unifiedTypeMapEntry joker_4713_3 ; // Joker input parameter
          GGS_string joker_4713_2 ; // Joker input parameter
          GGS_string joker_4713_1 ; // Joker input parameter
          extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (temp_4.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 112)), temp_5.readProperty_propertyName ().readProperty_location (), inCompiler COMMA_HERE), joker_4713_3, joker_4713_2, joker_4713_1, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 111)) ;
          }
        }
      }
      const GGS_structPropertyAccessExpressionAST temp_6 = this ;
      extensionMethod_checkGetAccess (var_prop_4490.readProperty_mAccessControl (), constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_6.readProperty_propertyName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 116)) ;
      const GGS_structPropertyAccessExpressionAST temp_7 = this ;
      const GGS_structPropertyAccessExpressionAST temp_8 = this ;
      outArgument_outExpressionGeneration = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_4490.readProperty_mPropertyType (), temp_7.readProperty_operatorLocation (), var_exprGeneration_4285, temp_8.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_getterMap var_getterMap_5080 = extensionGetter_definition (var_expressionType_4375, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 125)).readProperty_getterMap () ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_structPropertyAccessExpressionAST temp_10 = this ;
      const GGS_getterMap_2E_element var_theGetter_5141 = var_getterMap_5080.readSubcript__3F_ (temp_10.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!var_getterMap_5080.readSubcript__3F_ (temp_10.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_9 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_9) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, var_theGetter_5141.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 127)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_structPropertyAccessExpressionAST temp_12 = this ;
            GenericArray <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (temp_12.readProperty_propertyName ().readProperty_location (), GGS_string ("for being called as a property read, the func should have no formal argument (has ").add_operation (var_theGetter_5141.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 130)).getter_string (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 129)), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 129)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 130)), fixItArray13  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 128)) ;
            outArgument_outExpressionGeneration.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_11) {
          const GGS_structPropertyAccessExpressionAST temp_14 = this ;
          GGS_string temp_15 ;
          const GalgasBool test_16 = GGS_bool (ComparisonKind::equal, var_theGetter_5141.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            const GGS_structPropertyAccessExpressionAST temp_17 = this ;
            temp_15 = temp_17.readProperty_propertyName ().readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_16) {
            temp_15 = var_theGetter_5141.readProperty_mGetterNameThatObsoletesInvokationName () ;
          }
          outArgument_outExpressionGeneration = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_theGetter_5141.readProperty_mReturnedType (), temp_14.readProperty_propertyName ().readProperty_location (), var_theGetter_5141.readProperty_mKind (), var_exprGeneration_4285, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), temp_15, GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE), var_theGetter_5141.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      GGS_string var_s_6012 = GGS_string ("undefined property, undefined func") ;
      UpEnumerator_propertyMap enumerator_6077 (var_propertyMap_4427) ;
      while (enumerator_6077.hasCurrentObject ()) {
        var_s_6012.plusAssignOperation(GGS_string ("\n  -- property: ").add_operation (enumerator_6077.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 150)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 150)) ;
        enumerator_6077.gotoNextObject () ;
      }
      UpEnumerator_getterMap enumerator_6178 (var_getterMap_5080) ;
      while (enumerator_6178.hasCurrentObject ()) {
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::equal, enumerator_6178.current (HERE).readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 153)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            var_s_6012.plusAssignOperation(GGS_string ("\n  -- func: ").add_operation (enumerator_6178.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 154)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 154)) ;
          }
        }
        enumerator_6178.gotoNextObject () ;
      }
      const GGS_structPropertyAccessExpressionAST temp_19 = this ;
      GenericArray <FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (temp_19.readProperty_propertyName ().readProperty_location (), var_s_6012, fixItArray20  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 157)) ;
      outArgument_outExpressionGeneration.drop () ; // Release error dropped variable
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@propertyAccessExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_propertyAccessExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                            GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GGS_string & outArgument_outCppExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_propertyAccessExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 179)) ;
  GGS_string var_operand_7501 ;
  const GGS_propertyAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_7501, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 181)) ;
  outArgument_outCppExpression = var_operand_7501.add_operation (GGS_string (".readProperty_"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 189)) ;
  const GGS_propertyAccessExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression.plusAssignOperation(temp_2.readProperty_structFieldName ().getter_identifierRepresentation (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 190)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 190)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 190)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subcriptReadAccessExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_subcriptReadAccessExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subcriptReadAccessExpressionAST temp_0 = this ;
  UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_8435 (temp_0.readProperty_actualArgumentList ()) ;
  while (enumerator_8435.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_8435.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 210)) ;
    enumerator_8435.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subcriptReadAccessExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_subcriptReadAccessExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_9562 ;
  const GGS_subcriptReadAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 228)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_9562, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 225)) ;
  GGS_unifiedTypeMapEntry var_expressionType_9608 = var_expression_9562.readProperty_mResultType () ;
  const GGS_subcriptReadAccessExpressionAST temp_1 = this ;
  GGS_string var_invocationSignature_9694 = extensionGetter_subcriptSignature (temp_1.readProperty_actualArgumentList (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 236)) ;
  GGS_readSubcriptMap var_subcriptMap_9802 = extensionGetter_definition (var_expressionType_9608, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 238)).readProperty_readSubscriptMap () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_readSubcriptMap_2E_element var_aSubscript_9870 = var_subcriptMap_9802.readSubcript__3F_ (var_invocationSignature_9694, inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_subcriptMap_9802.readSubcript__3F_ (var_invocationSignature_9694, inCompiler COMMA_HERE).isValuated ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GGS__5B_semanticExpressionForGeneration_5D_ var_semanticExpressionListForGeneration_9972 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_subcriptReadAccessExpressionAST temp_3 = this ;
      UpEnumerator__5B_functionSignatureElement_5D_ enumerator_10082 (var_aSubscript_9870.readProperty_argumentTypeList ()) ;
      UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_10118 (temp_3.readProperty_actualArgumentList ()) ;
      while (enumerator_10082.hasCurrentObject () && enumerator_10118.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expression_10481 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10118.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10082.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_10481, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 243)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_10082.current (HERE).readProperty_mFormalArgumentType (), var_expression_10481.readProperty_mResultType (), enumerator_10118.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_10481, inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 252)) ;
        }
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, enumerator_10082.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_10118.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GGS_string temp_5 ;
            const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_10082.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              temp_5 = enumerator_10082.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 260)) ;
            }else if (GalgasBool::boolFalse == test_6) {
              temp_5 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_10815 = GGS_string ("!").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 259)) ;
            GenericArray <FixItDescription> fixItArray7 ;
            appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, var_s_10815) ;
            inCompiler->emitSemanticError (enumerator_10118.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_10815, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 263)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 263)), fixItArray7  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 263)) ;
          }
        }
        var_semanticExpressionListForGeneration_9972.plusPlusAssignOperation (var_expression_10481  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 266)) ;
        enumerator_10082.gotoNextObject () ;
        enumerator_10118.gotoNextObject () ;
      }
      const GGS_subcriptReadAccessExpressionAST temp_8 = this ;
      outArgument_outExpression = GGS_subcriptReadAccessExpressionForGeneration::init_21__21__21__21__21_ (var_aSubscript_9870.readProperty_valueType (), temp_8.readProperty_endOfArgsLocation (), var_expression_9562, var_invocationSignature_9694, var_semanticExpressionListForGeneration_9972, inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_subcriptReadAccessExpressionAST temp_9 = this ;
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_endOfArgsLocation (), GGS_string ("unknown subcript signature"), fixItArray10  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 277)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subcriptReadAccessExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_subcriptReadAccessExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subcriptReadAccessExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 299)) ;
  GGS_string var_operand_12722 ;
  const GGS_subcriptReadAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_12722, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 301)) ;
  GGS__5B_string_5D_ var_subcriptArgumentList_12779 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_subcriptReadAccessExpressionForGeneration temp_2 = this ;
  UpEnumerator__5B_semanticExpressionForGeneration_5D_ enumerator_12832 (temp_2.readProperty_actualExpressionList ()) ;
  while (enumerator_12832.hasCurrentObject ()) {
    GGS_string var_actualArgOperand_13041 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_12832.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_actualArgOperand_13041, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 311)) ;
    {
    var_subcriptArgumentList_12779.setter_append (var_actualArgOperand_13041, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 318)) ;
    }
    enumerator_12832.gotoNextObject () ;
  }
  outArgument_outCppExpression = var_operand_12722.add_operation (GGS_string (".readSubcript_"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 321)) ;
  const GGS_subcriptReadAccessExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression.plusAssignOperation(temp_3.readProperty_subcriptInvocationName ().getter_identifierRepresentation (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 322)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 322)) ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 323)) ;
  UpEnumerator__5B_string_5D_ enumerator_13321 (var_subcriptArgumentList_12779) ;
  while (enumerator_13321.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_13321.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 325)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 325)) ;
    enumerator_13321.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 327)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string (" COMMA_HERE)"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 328)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 328)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@tildeExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 47)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@tildeExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_3190 ;
  const GGS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3190, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 62)) ;
  GGS_unifiedTypeMapEntry var_type_3272 = var_expression_3190.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_literalBigIntExpressionForGeneration var_exp_3313 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_3190.ptr ())) ;
    if (nullptr == var_exp_3313.ptr ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (var_exp_3313.readProperty_mResultType (), var_exp_3313.readProperty_mLocation (), var_exp_3313.readProperty_mValue ().operator_tilde (SOURCE_FILE ("expression-tilde.galgas4", 76)), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_3272, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 79)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("expression-tilde.galgas4", 79)) COMMA_SOURCE_FILE ("expression-tilde.galgas4", 79)).operator_not (SOURCE_FILE ("expression-tilde.galgas4", 79)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_tildeExpressionAST temp_3 = this ;
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3272, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 81)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 81)).add_operation (GGS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 81)), fixItArray4  COMMA_SOURCE_FILE ("expression-tilde.galgas4", 80)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      const GGS_tildeExpressionAST temp_5 = this ;
      outArgument_outExpression = GGS_tildeExpressionForGeneration::init_21__21__21_ (var_type_3272, temp_5.readProperty_mOperatorLocation (), var_expression_3190, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@tildeExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_tildeExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 114)) ;
  GGS_string var_operand_4969 ;
  const GGS_tildeExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4969, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 116)) ;
  const GGS_tildeExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_4969.add_operation (GGS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 118)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 118)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 118)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 118)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@comparisonExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 181)) ;
  const GGS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 182)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@comparisonExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_8997 ;
  const GGS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8997, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 197)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_9342 ;
  const GGS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8997.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_9342, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 207)) ;
  GGS_bool var_isEquatable_9388 = extensionGetter_definition (var_leftExpression_8997.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 217)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("expression-comparison.galgas4", 217)) COMMA_SOURCE_FILE ("expression-comparison.galgas4", 217)) ;
  GGS_bool var_isComparable_9477 = extensionGetter_definition (var_leftExpression_8997.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 218)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("expression-comparison.galgas4", 218)) COMMA_SOURCE_FILE ("expression-comparison.galgas4", 218)) ;
  GGS_bool var_isReferenceEquatable_9568 = extensionGetter_definition (var_leftExpression_8997.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 219)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("expression-comparison.galgas4", 219)) COMMA_SOURCE_FILE ("expression-comparison.galgas4", 219)) ;
  GGS_bool var_operatorIsAvailable_9681 ;
  GGS_string var_operatorName_9715 ;
  const GGS_comparisonExpressionAST temp_2 = this ;
  switch (temp_2.readProperty_mComparison ().enumValue ()) {
  case GGS_comparison::Enumeration::invalid:
    break ;
  case GGS_comparison::Enumeration::enum_equal:
    {
      var_operatorName_9715 = GGS_string ("==") ;
      var_operatorIsAvailable_9681 = var_isEquatable_9388 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_notEqual:
    {
      var_operatorName_9715 = GGS_string ("!=") ;
      var_operatorIsAvailable_9681 = var_isEquatable_9388 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerOrEqual:
    {
      var_operatorName_9715 = GGS_string ("<=") ;
      var_operatorIsAvailable_9681 = var_isComparable_9477 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerThan:
    {
      var_operatorName_9715 = GGS_string ("<") ;
      var_operatorIsAvailable_9681 = var_isComparable_9477 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterOrEqual:
    {
      var_operatorName_9715 = GGS_string (">=") ;
      var_operatorIsAvailable_9681 = var_isComparable_9477 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterThan:
    {
      var_operatorName_9715 = GGS_string (">") ;
      var_operatorIsAvailable_9681 = var_isComparable_9477 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_sameInstance:
    {
      var_operatorName_9715 = GGS_string ("===") ;
      var_operatorIsAvailable_9681 = var_isReferenceEquatable_9568 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_differentInstances:
    {
      var_operatorName_9715 = GGS_string ("!==") ;
      var_operatorIsAvailable_9681 = var_isReferenceEquatable_9568 ;
    }
    break ;
  }
  {
  const GGS_comparisonExpressionAST temp_3 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (var_operatorIsAvailable_9681, var_operatorName_9715, temp_3.readProperty_mOperatorLocation (), var_leftExpression_8997, var_rightExpression_9342, inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 249)) ;
  }
  const GGS_comparisonExpressionAST temp_4 = this ;
  const GGS_comparisonExpressionAST temp_5 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), var_leftExpression_8997, temp_5.readProperty_mComparison (), var_rightExpression_9342, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@comparisonExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_comparisonExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 285)) ;
  GGS_string var_leftTemporaryOperand_11942 ;
  const GGS_comparisonExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_11942, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 287)) ;
  GGS_string var_rightTemporaryOperand_12152 ;
  const GGS_comparisonExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_12152, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 295)) ;
  GGS_string var_operatorName_12212 ;
  const GGS_comparisonExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mComparison ().enumValue ()) {
  case GGS_comparison::Enumeration::invalid:
    break ;
  case GGS_comparison::Enumeration::enum_equal:
  case GGS_comparison::Enumeration::enum_sameInstance:
    {
      var_operatorName_12212 = GGS_string ("ComparisonKind::equal") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_notEqual:
  case GGS_comparison::Enumeration::enum_differentInstances:
    {
      var_operatorName_12212 = GGS_string ("ComparisonKind::notEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerOrEqual:
    {
      var_operatorName_12212 = GGS_string ("ComparisonKind::lowerOrEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerThan:
    {
      var_operatorName_12212 = GGS_string ("ComparisonKind::lowerThan") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterOrEqual:
    {
      var_operatorName_12212 = GGS_string ("ComparisonKind::greaterOrEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterThan:
    {
      var_operatorName_12212 = GGS_string ("ComparisonKind::greaterThan") ;
    }
    break ;
  }
  outArgument_outCppExpression = GGS_string ("GGS_bool (").add_operation (var_operatorName_12212, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (var_leftTemporaryOperand_11942, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (GGS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (var_rightTemporaryOperand_12152, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalDoubleExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalDoubleExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalDoubleExpressionAST temp_0 = this ;
  const GGS_literalDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalDoubleExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_f_36__34_ (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalDoubleExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                           GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalDoubleExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_f_36__34_ (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-double.galgas4", 89)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas4", 89)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas4", 89)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionCallExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionAST temp_0 = this ;
  UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_2546 (temp_0.readProperty_mExpressionList ()) ;
  while (enumerator_2546.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_2546.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 53)) ;
    enumerator_2546.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionCallExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_3190 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 68)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3190 COMMA_SOURCE_FILE ("expression-function-call.galgas4", 69)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_functionSignature_3520 ;
  GGS_unifiedTypeMapEntry var_resultType_3571 ;
  GGS_bool var_isInternal_3600 ;
  const GGS_functionCallExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_3520, var_resultType_3571, var_isInternal_3600, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 71)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isInternal_3600.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_functionCallExpressionAST temp_3 = this ;
      GGS_location var_procDeclarationLocation_3673 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 79)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_functionCallExpressionAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 80)).objectCompare (var_procDeclarationLocation_3673.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 80)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_functionCallExpressionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_3673.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 81)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 81)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 81)), fixItArray7  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 81)) ;
        }
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_functionCallExpressionAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::notEqual, var_functionSignature_3520.getter_count (SOURCE_FILE ("expression-function-call.galgas4", 85)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas4", 85)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_functionCallExpressionAST temp_10 = this ;
      const GGS_functionCallExpressionAST temp_11 = this ;
      const GGS_functionCallExpressionAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GGS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 87)).add_operation (GGS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 87)).add_operation (var_functionSignature_3520.getter_count (SOURCE_FILE ("expression-function-call.galgas4", 87)).getter_string (SOURCE_FILE ("expression-function-call.galgas4", 87)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 87)).add_operation (GGS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 87)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas4", 88)).getter_string (SOURCE_FILE ("expression-function-call.galgas4", 88)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 88)).add_operation (GGS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 88)), fixItArray13  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 86)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    GGS__5B_semanticExpressionForGeneration_5D_ var_semanticExpressionListForGeneration_4407 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
    const GGS_functionCallExpressionAST temp_14 = this ;
    UpEnumerator__5B_functionSignatureElement_5D_ enumerator_4506 (var_functionSignature_3520) ;
    UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_4543 (temp_14.readProperty_mExpressionList ()) ;
    while (enumerator_4506.hasCurrentObject () && enumerator_4543.hasCurrentObject ()) {
      GGS_semanticExpressionForGeneration var_expression_4903 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_4543.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_4506.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4903, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 94)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_4506.current (HERE).readProperty_mFormalArgumentType (), var_expression_4903.readProperty_mResultType (), enumerator_4543.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_4903, inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 103)) ;
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_4506.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_4543.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_string temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_4506.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = enumerator_4506.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 111)) ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_5237 = GGS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 110)) ;
          GenericArray <FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, EnumFixItKind::fixItReplace, var_s_5237) ;
          inCompiler->emitSemanticError (enumerator_4543.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_5237, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 114)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 114)), fixItArray18  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 114)) ;
        }
      }
      var_semanticExpressionListForGeneration_4407.plusPlusAssignOperation (var_expression_4903  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 117)) ;
      enumerator_4506.gotoNextObject () ;
      enumerator_4543.gotoNextObject () ;
    }
    const GGS_functionCallExpressionAST temp_19 = this ;
    const GGS_functionCallExpressionAST temp_20 = this ;
    outArgument_outExpression = GGS_functionCallExpressionForGeneration::init_21__21__21__21_ (var_resultType_3571, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_4407, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionCallExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GGS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 148)) ;
  const GGS_functionCallExpressionForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_1.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-function-call.galgas4", 150)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 150))  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 150)) ;
  GGS__5B_string_5D_ var_parameterList_6960 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_functionCallExpressionForGeneration temp_2 = this ;
  UpEnumerator__5B_semanticExpressionForGeneration_5D_ enumerator_7009 (temp_2.readProperty_mExpressions ()) ;
  while (enumerator_7009.hasCurrentObject ()) {
    GGS_string var_parameter_7155 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_7009.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_7155, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 154)) ;
    var_parameterList_6960.plusPlusAssignOperation (var_parameter_7155  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 155)) ;
    enumerator_7009.gotoNextObject () ;
  }
  const GGS_functionCallExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("function_").add_operation (temp_3.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("expression-function-call.galgas4", 157)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 157)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 157)) ;
  UpEnumerator__5B_string_5D_ enumerator_7313 (var_parameterList_6960) ;
  while (enumerator_7313.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_7313.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 159)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 159)) ;
    enumerator_7313.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-function-call.galgas4", 161)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 162)) ;
  const GGS_functionCallExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssignOperation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 163)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 163)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 163)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 103)) ;
  const GGS_andExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 104)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_5550 ;
  const GGS_andExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_5550, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 118)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_5891 ;
  const GGS_andExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_5550.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_5891, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 128)) ;
  {
  const GGS_andExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_5550.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 139)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("expression-and.galgas4", 139)) COMMA_SOURCE_FILE ("expression-and.galgas4", 139)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_5550, var_rightExpression_5891, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 138)) ;
  }
  const GGS_andExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_5550.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_5550, GGS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("expression-and.galgas4", 150)), var_rightExpression_5891, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andShortExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 160)) ;
  const GGS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 161)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andShortExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_7569 ;
  const GGS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7569, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 175)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_7910 ;
  const GGS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7569.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_7910, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 185)) ;
  {
  const GGS_andShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7569.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 196)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("expression-and.galgas4", 196)) COMMA_SOURCE_FILE ("expression-and.galgas4", 196)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7569, var_rightExpression_7910, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 195)) ;
  }
  const GGS_andShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_andShortExpressionForGeneration::init_21__21__21__21_ (var_leftExpression_7569.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7569, var_rightExpression_7910, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andShortExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      GGS_string & outArgument_outCppExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 227)) ;
  GGS_string var_leftTemporaryOperand_9390 ;
  const GGS_andShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_9390, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 229)) ;
  GGS_string var_testVar_9447 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-and.galgas4", 237)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 237)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 237)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_bool ").add_operation (var_testVar_9447, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 238)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 238)).add_operation (var_leftTemporaryOperand_9390, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 238)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 238)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 238)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue == ").add_operation (var_testVar_9447, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 239)).add_operation (GGS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 239)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 239)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 241)) ;
  }
  GGS_string var_rightTemporaryOperand_9929 ;
  const GGS_andShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_9929, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 242)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_testVar_9447.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 249)).add_operation (var_rightTemporaryOperand_9929, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 249)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 249)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 249)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 250)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 251)) ;
  outArgument_outCppExpression = var_testVar_9447 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 115)) ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 116)) ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 117)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_if_5F_expression_5384 ;
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_if_5F_expression_5384, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 132)) ;
  GGS_semanticExpressionForGeneration var_then_5F_expression_5675 ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_then_5F_expression_5675, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 142)) ;
  GGS_semanticExpressionForGeneration var_else_5F_expression_5968 ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_else_5F_expression_5968, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 152)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_if_5F_expression_5384.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 162)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_ifExpressionAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mOperatorLocation (), GGS_string ("the test expression type is '@").add_operation (extensionGetter_definition (var_if_5F_expression_5384.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 164)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 164)).add_operation (GGS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 164)), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 163)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::notEqual, var_then_5F_expression_5675.readProperty_mResultType ().objectCompare (var_else_5F_expression_5968.readProperty_mResultType ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_ifExpressionAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("operand expression types are '@").add_operation (extensionGetter_definition (var_then_5F_expression_5675.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).add_operation (GGS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).add_operation (extensionGetter_definition (var_else_5F_expression_5968.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).add_operation (GGS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 167)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      const GGS_ifExpressionAST temp_9 = this ;
      outArgument_outExpression = GGS_ifExpressionForGeneration::init_21__21__21__21__21_ (var_then_5F_expression_5675.readProperty_mResultType (), temp_9.readProperty_mOperatorLocation (), var_if_5F_expression_5384, var_then_5F_expression_5675, var_else_5F_expression_5968, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                GGS_string & outArgument_outCppExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_ifExpression_7835 ;
  const GGS_ifExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifExpression_7835, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 202)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-if.galgas4", 210)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 210)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 211)) ;
  const GGS_ifExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mThenExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)) ;
  GGS_string var_testVar_8097 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-if.galgas4", 213)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 213)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 214)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GalgasBool ").add_operation (var_testVar_8097, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)).add_operation (var_ifExpression_7835, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)).add_operation (GGS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue == ").add_operation (var_testVar_8097, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 216)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 216)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 218)) ;
  }
  GGS_string var_thenExpression_8574 ;
  const GGS_ifExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mThenExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_thenExpression_8574, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 219)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outCppExpression.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 226)).add_operation (var_thenExpression_8574, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 226)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 226)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 226)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 227)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}else if (GalgasBool::boolFalse == ").add_operation (var_testVar_8097, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 229)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 229)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 229)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 230)) ;
  }
  GGS_string var_elseExpression_9009 ;
  const GGS_ifExpressionForGeneration temp_3 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_3.readProperty_mElseExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_elseExpression_9009, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 231)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outCppExpression.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 238)).add_operation (var_elseExpression_9009, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 238)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 238)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 238)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 239)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 240)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nilExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nilExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                              GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                              const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                              GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                              GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inType.getter_isNull (SOURCE_FILE ("expression-primary-nil.galgas4", 72)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nilExpressionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 73)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapEntry var_unwrappedType_3413 = extensionGetter_definition (constinArgument_inType, inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 75)).readProperty_unwrappedType () ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = var_unwrappedType_3413.getter_isNull (SOURCE_FILE ("expression-primary-nil.galgas4", 76)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_nilExpressionAST temp_4 = this ;
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mLocation (), GGS_string ("the inferred type @").add_operation (extensionGetter_typeName (var_unwrappedType_3413, inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 77)), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 77)).add_operation (GGS_string (" is not an optional type"), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 77)), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 77)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      const GGS_nilExpressionAST temp_6 = this ;
      outArgument_outExpression = GGS_nilExpressionForGeneration::init_21__21_ (constinArgument_inType, temp_6.readProperty_mLocation (), inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nilExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                 GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                 GGS_uint & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                 GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                 GGS_string & outArgument_outCppExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_nilExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_0.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 102)), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 102)).add_operation (GGS_string ("::init_nil ()"), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 102)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@getterCallExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_getterCallExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 30)) ;
  const GGS_getterCallExpressionAST temp_1 = this ;
  extensionMethod_enterInSemanticContext (temp_1.readProperty_mActualArgumentList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 31)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@getterCallExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_getterCallExpressionAST temp_1 = this ;
    test_0 = GGS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionAST *> (temp_1.readProperty_mReceiver ().ptr ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_getterCallExpressionAST temp_2 = this ;
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_2.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 46)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_receiverExpression_2972 ;
  const GGS_getterCallExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mReceiver ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas4", 52)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_2972, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 49)) ;
  GGS_unifiedTypeMapEntry var_receiverType_3026 = var_receiverExpression_2972.readProperty_mResultType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_getterCallExpressionAST temp_5 = this ;
    const GGS_getterMap_2E_element var_aGetter_3138 = extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 60)).readProperty_getterMap ().readSubcript__3F_ (temp_5.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 60)).readProperty_getterMap ().readSubcript__3F_ (temp_5.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_4 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, var_aGetter_3138.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_getterCallExpressionAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_aGetter_3138.readProperty_mGetterNameThatObsoletesInvokationName ()) ;
          inCompiler->emitSemanticError (temp_7.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete func"), fixItArray8  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 62)) ;
        }
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_getterCallExpressionAST temp_10 = this ;
        GGS_bool test_11 = extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 66)).readProperty_propertyMap ().getter_contains (temp_10.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 66)) ;
        if (GalgasBool::boolTrue == test_11.boolEnum ()) {
          const GGS_getterCallExpressionAST temp_12 = this ;
          test_11 = GGS_bool (ComparisonKind::equal, temp_12.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 67)).objectCompare (GGS_uint (uint32_t (0U)))) ;
        }
        test_9 = test_11.boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_getterCallExpressionAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mExpressionLocation (), GGS_string ("use dot notation, instead of func call"), fixItArray14  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 68)) ;
        }
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        const GGS_getterCallExpressionAST temp_16 = this ;
        test_15 = GGS_bool (ComparisonKind::notEqual, temp_16.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 71)).objectCompare (var_aGetter_3138.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 71)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_getterCallExpressionAST temp_17 = this ;
          const GGS_getterCallExpressionAST temp_18 = this ;
          const GGS_getterCallExpressionAST temp_19 = this ;
          GenericArray <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_18.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (GGS_string ("' func of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (var_aGetter_3138.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 74)).getter_string (SOURCE_FILE ("expression-getter-call.galgas4", 73)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 74)).add_operation (temp_19.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 75)).getter_string (SOURCE_FILE ("expression-getter-call.galgas4", 74)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 74)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 75)), fixItArray20  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 72)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_15) {
        GGS__5B_semanticExpressionForGeneration_5D_ var_constructorEffectiveParameterList_4120 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
        const GGS_getterCallExpressionAST temp_21 = this ;
        UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_4187 (temp_21.readProperty_mActualArgumentList ()) ;
        UpEnumerator__5B_functionSignatureElement_5D_ enumerator_4226 (var_aGetter_3138.readProperty_mArgumentTypeList ()) ;
        while (enumerator_4187.hasCurrentObject () && enumerator_4226.hasCurrentObject ()) {
          GGS_semanticExpressionForGeneration var_exp_4599 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_4187.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_4226.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_4599, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 79)) ;
          GalgasBool test_22 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_22) {
            test_22 = GGS_bool (ComparisonKind::notEqual, enumerator_4226.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_4187.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_22) {
              GGS_string temp_23 ;
              const GalgasBool test_24 = GGS_bool (ComparisonKind::notEqual, enumerator_4226.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_24) {
                temp_23 = enumerator_4226.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 89)) ;
              }else if (GalgasBool::boolFalse == test_24) {
                temp_23 = GGS_string::makeEmptyString () ;
              }
              GGS_string var_s_4720 = GGS_string ("!").add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 89)) ;
              GenericArray <FixItDescription> fixItArray25 ;
              appendFixItActions (fixItArray25, EnumFixItKind::fixItReplace, var_s_4720) ;
              inCompiler->emitSemanticError (enumerator_4187.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_4720, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 90)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 90)), fixItArray25  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 90)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_4226.current (HERE).readProperty_mFormalArgumentType (), var_exp_4599.readProperty_mResultType (), enumerator_4187.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_4599, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 92)) ;
          }
          var_constructorEffectiveParameterList_4120.plusPlusAssignOperation (var_exp_4599  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 93)) ;
          enumerator_4187.gotoNextObject () ;
          enumerator_4226.gotoNextObject () ;
        }
        const GGS_getterCallExpressionAST temp_26 = this ;
        GGS_string temp_27 ;
        const GalgasBool test_28 = GGS_bool (ComparisonKind::equal, var_aGetter_3138.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          const GGS_getterCallExpressionAST temp_29 = this ;
          temp_27 = temp_29.readProperty_mGetterName ().readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_28) {
          temp_27 = var_aGetter_3138.readProperty_mGetterNameThatObsoletesInvokationName () ;
        }
        outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_aGetter_3138.readProperty_mReturnedType (), temp_26.readProperty_mGetterName ().readProperty_location (), var_aGetter_3138.readProperty_mKind (), var_receiverExpression_2972, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), temp_27, var_constructorEffectiveParameterList_4120, var_aGetter_3138.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
        GalgasBool test_30 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_30) {
          const GGS_getterCallExpressionAST temp_31 = this ;
          test_30 = GGS_bool (ComparisonKind::equal, temp_31.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 105)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_30) {
            const GGS_getterCallExpressionAST temp_32 = this ;
            GenericArray <FixItDescription> fixItArray33 ;
            fixItArray33.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
            inCompiler->emitSemanticError (temp_32.readProperty_mExpressionLocation (), GGS_string ("func with no argument, remove parenthesis"), fixItArray33  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 106)) ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    GalgasBool test_34 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_34) {
      const GGS_getterCallExpressionAST temp_35 = this ;
      test_34 = GGS_bool (ComparisonKind::equal, temp_35.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 110)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_34) {
        const GGS_getterCallExpressionAST temp_36 = this ;
        test_34 = extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 110)).readProperty_propertyMap ().getter_contains (temp_36.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 110)).boolEnum () ;
        if (GalgasBool::boolTrue == test_34) {
          const GGS_getterCallExpressionAST temp_37 = this ;
          GenericArray <FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (temp_37.readProperty_mExpressionLocation (), GGS_string ("use dot notation, instead of func call"), fixItArray38  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 111)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
    if (GalgasBool::boolFalse == test_34) {
      GGS_uint var_matchingReaderCount_6158 = GGS_uint (uint32_t (0U)) ;
      GalgasBool test_39 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_39) {
        test_39 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 115)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("expression-getter-call.galgas4", 115)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_39) {
          GGS__5B_functionSignatureElement_5D_ var_getterFormalArgumentTypeList_6284 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
          GGS_bool var_hasCompilerArgument_6331 = GGS_bool (true) ;
          GGS_unifiedTypeMapEntry var_returnedType_6370 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas4", 118)) ;
          GGS_methodKind var_kind_6423 = GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("expression-getter-call.galgas4", 119)) ;
          GGS__5B_string_5D_ var_fieldList_6483 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
          GGS_string var_obsoletedByGetter_6511 = GGS_string::makeEmptyString () ;
          UpEnumerator__5B_typedProperty_5D_ enumerator_6582 (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 122)).readProperty_currentTypedPropertyList ()) ;
          while (enumerator_6582.hasCurrentObject ()) {
            GGS_unifiedTypeMapEntry var_propertyType_6624 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (extensionGetter_definition (enumerator_6582.current (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 123)).readProperty_typeName ().readProperty_string (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 123)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 123)) ;
            GGS_getterMap var_aMap_6741 = extensionGetter_definition (var_propertyType_6624, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 124)).readProperty_getterMap () ;
            GalgasBool test_40 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_40) {
              const GGS_getterCallExpressionAST temp_41 = this ;
              const GGS_getterMap_2E_element var_entry_6799 = var_aMap_6741.readSubcript__3F_ (temp_41.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
              if (!var_aMap_6741.readSubcript__3F_ (temp_41.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
                test_40 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_40) {
                GalgasBool test_42 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_42) {
                  test_42 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (enumerator_6582.current (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 126)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_6582.current (HERE).readProperty_name ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_42) {
                    var_matchingReaderCount_6158.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 127)) ;
                    var_getterFormalArgumentTypeList_6284 = var_entry_6799.readProperty_mArgumentTypeList () ;
                    var_hasCompilerArgument_6331 = var_entry_6799.readProperty_mHasCompilerArgument () ;
                    var_returnedType_6370 = var_entry_6799.readProperty_mReturnedType () ;
                    const GGS_getterCallExpressionAST temp_43 = this ;
                    var_receiverExpression_2972 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_returnedType_6370, temp_43.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_2972, enumerator_6582.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE) ;
                    var_kind_6423 = var_entry_6799.readProperty_mKind () ;
                    var_obsoletedByGetter_6511 = var_entry_6799.readProperty_mGetterNameThatObsoletesInvokationName () ;
                  }
                }
              }
            }
            enumerator_6582.gotoNextObject () ;
          }
          GalgasBool test_44 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_44) {
            test_44 = GGS_bool (ComparisonKind::equal, var_matchingReaderCount_6158.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_44) {
              const GGS_getterCallExpressionAST temp_45 = this ;
              const GGS_getterCallExpressionAST temp_46 = this ;
              GenericArray <FixItDescription> fixItArray47 ;
              inCompiler->emitSemanticError (temp_45.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)).add_operation (temp_46.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)).add_operation (GGS_string ("' func, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)), fixItArray47  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 143)) ;
              var_getterFormalArgumentTypeList_6284.drop () ; // Release error dropped variable
              var_hasCompilerArgument_6331.drop () ; // Release error dropped variable
              var_returnedType_6370.drop () ; // Release error dropped variable
              var_kind_6423.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_44) {
            GalgasBool test_48 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_48) {
              test_48 = GGS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_6158.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_48) {
                GGS_string var_s_7954 = GGS_string::makeEmptyString () ;
                UpEnumerator__5B_string_5D_ enumerator_7984 (var_fieldList_6483) ;
                while (enumerator_7984.hasCurrentObject ()) {
                  var_s_7954.plusAssignOperation(enumerator_7984.current (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 150)) ;
                  enumerator_7984.gotoNextObject () ;
                  if (enumerator_7984.hasCurrentObject ()) {
                    var_s_7954.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 151)) ;
                  }
                }
                const GGS_getterCallExpressionAST temp_49 = this ;
                const GGS_getterCallExpressionAST temp_50 = this ;
                GenericArray <FixItDescription> fixItArray51 ;
                inCompiler->emitSemanticError (temp_49.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).add_operation (temp_50.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).add_operation (GGS_string ("' func, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).add_operation (var_s_7954, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 155)).add_operation (GGS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 155)), fixItArray51  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 153)) ;
                var_getterFormalArgumentTypeList_6284.drop () ; // Release error dropped variable
                var_hasCompilerArgument_6331.drop () ; // Release error dropped variable
                var_returnedType_6370.drop () ; // Release error dropped variable
                var_kind_6423.drop () ; // Release error dropped variable
              }
            }
          }
          GalgasBool test_52 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_52) {
            const GGS_getterCallExpressionAST temp_53 = this ;
            test_52 = GGS_bool (ComparisonKind::notEqual, temp_53.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 159)).objectCompare (var_getterFormalArgumentTypeList_6284.getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 159)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_52) {
              const GGS_getterCallExpressionAST temp_54 = this ;
              const GGS_getterCallExpressionAST temp_55 = this ;
              const GGS_getterCallExpressionAST temp_56 = this ;
              GenericArray <FixItDescription> fixItArray57 ;
              inCompiler->emitSemanticError (temp_54.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_55.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (GGS_string ("' func of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (var_getterFormalArgumentTypeList_6284.getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 162)).getter_string (SOURCE_FILE ("expression-getter-call.galgas4", 162)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 162)).add_operation (temp_56.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 163)).getter_string (SOURCE_FILE ("expression-getter-call.galgas4", 163)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 162)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 163)), fixItArray57  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 160)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_52) {
            GGS__5B_semanticExpressionForGeneration_5D_ var_constructorEffectiveParameterList_8944 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
            const GGS_getterCallExpressionAST temp_58 = this ;
            UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_9013 (temp_58.readProperty_mActualArgumentList ()) ;
            UpEnumerator__5B_functionSignatureElement_5D_ enumerator_9044 (var_getterFormalArgumentTypeList_6284) ;
            while (enumerator_9013.hasCurrentObject () && enumerator_9044.hasCurrentObject ()) {
              GGS_semanticExpressionForGeneration var_exp_9444 ;
              callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_9013.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_9044.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_9444, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 167)) ;
              GalgasBool test_59 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_59) {
                test_59 = GGS_bool (ComparisonKind::notEqual, enumerator_9044.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_9013.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_59) {
                  GGS_string temp_60 ;
                  const GalgasBool test_61 = GGS_bool (ComparisonKind::notEqual, enumerator_9044.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_61) {
                    temp_60 = enumerator_9044.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 177)) ;
                  }else if (GalgasBool::boolFalse == test_61) {
                    temp_60 = GGS_string::makeEmptyString () ;
                  }
                  GGS_string var_s_9571 = GGS_string ("!").add_operation (temp_60, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 177)) ;
                  GenericArray <FixItDescription> fixItArray62 ;
                  appendFixItActions (fixItArray62, EnumFixItKind::fixItReplace, var_s_9571) ;
                  inCompiler->emitSemanticError (enumerator_9013.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_9571, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 178)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 178)), fixItArray62  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 178)) ;
                }
              }
              {
              routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_9044.current (HERE).readProperty_mFormalArgumentType (), var_exp_9444.readProperty_mResultType (), enumerator_9013.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_9444, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 180)) ;
              }
              var_constructorEffectiveParameterList_8944.plusPlusAssignOperation (var_exp_9444  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 181)) ;
              enumerator_9013.gotoNextObject () ;
              enumerator_9044.gotoNextObject () ;
            }
            GalgasBool test_63 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_63) {
              test_63 = GGS_bool (ComparisonKind::notEqual, var_obsoletedByGetter_6511.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_63) {
                const GGS_getterCallExpressionAST temp_64 = this ;
                GenericArray <FixItDescription> fixItArray65 ;
                appendFixItActions (fixItArray65, EnumFixItKind::fixItReplace, var_obsoletedByGetter_6511) ;
                inCompiler->emitSemanticError (temp_64.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete func"), fixItArray65  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 184)) ;
              }
            }
            const GGS_getterCallExpressionAST temp_66 = this ;
            GGS_string temp_67 ;
            const GalgasBool test_68 = GGS_bool (ComparisonKind::equal, var_obsoletedByGetter_6511.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_68) {
              const GGS_getterCallExpressionAST temp_69 = this ;
              temp_67 = temp_69.readProperty_mGetterName ().readProperty_string () ;
            }else if (GalgasBool::boolFalse == test_68) {
              temp_67 = var_obsoletedByGetter_6511 ;
            }
            outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_6370, temp_66.readProperty_mGetterName ().readProperty_location (), var_kind_6423, var_receiverExpression_2972, var_fieldList_6483, temp_67, var_constructorEffectiveParameterList_8944, var_hasCompilerArgument_6331, inCompiler COMMA_HERE) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_39) {
        GalgasBool test_70 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_70) {
          test_70 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 197)).readProperty_getterMap ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 197)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_70) {
            const GGS_getterCallExpressionAST temp_71 = this ;
            GenericArray <FixItDescription> fixItArray72 ;
            inCompiler->emitSemanticError (temp_71.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 199)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 199)).add_operation (GGS_string ("' type does not define any func"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 199)), fixItArray72  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 198)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_70) {
          const GGS_getterCallExpressionAST temp_73 = this ;
          const GGS_getterCallExpressionAST temp_74 = this ;
          GenericArray <FixItDescription> fixItArray75 ;
          appendFixItActions (fixItArray75, EnumFixItKind::fixItReplace, extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 205)).readProperty_getterMap ().getter_keyList (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 205))) ;
          inCompiler->emitSemanticError (temp_73.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)).add_operation (temp_74.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)).add_operation (GGS_string ("' func "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)), fixItArray75  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 202)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}

