#include "galgas2/Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-22.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@templateLexiqueComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_templateLexiqueComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_templateLexiqueComponentAST temp_0 = this ;
  result_result = GALGAS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 217)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLexiqueComponentAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLexiqueComponentAST temp_0 = this ;
  const GALGAS_templateLexiqueComponentAST temp_1 = this ;
  GALGAS_lstring var_key_8252 = GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 228)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 228)) ;
  {
  const GALGAS_templateLexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_8252, temp_2, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 229)) ;
  }
  const GALGAS_templateLexiqueComponentAST temp_3 = this ;
  const GALGAS_templateLexiqueComponentAST temp_4 = this ;
  GALGAS_lstring var_superKey_8412 = GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueSuperComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 230)), temp_4.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 230)) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_8252, var_superKey_8412 COMMA_SOURCE_FILE ("template-lexique-component.galgas", 231)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLexiqueComponentAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_superLexiqueIsTemplate_9458 ;
  GALGAS_terminalMap var_terminalMap_9491 ;
  GALGAS_indexingListAST var_indexingListAST_9513 ;
  GALGAS_terminalDeclarationListAST var_terminalListAST_9568 ;
  GALGAS_lexicalAttributeListAST var_lexicalAttributeListAST_9594 ;
  GALGAS_lexicalStyleListAST var_lexicalStyleListAST_9628 ;
  GALGAS_lexicalListDeclarationListAST var_lexicalListDeclarationListAST_9658 ;
  const GALGAS_templateLexiqueComponentAST temp_0 = this ;
  ioArgument_ioSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_0.readProperty_mLexiqueSuperComponentName (), var_superLexiqueIsTemplate_9458, var_terminalMap_9491, var_indexingListAST_9513, var_terminalListAST_9568, var_lexicalAttributeListAST_9594, var_lexicalStyleListAST_9628, var_lexicalListDeclarationListAST_9658, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 243)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_superLexiqueIsTemplate_9458.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateLexiqueComponentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLexiqueSuperComponentName ().readProperty_location (), GALGAS_string ("cannot inherit from a template lexique"), fixItArray3  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 255)) ;
    }
  }
  {
  const GALGAS_templateLexiqueComponentAST temp_4 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_4.readProperty_mLexiqueComponentName (), GALGAS_bool (true), var_terminalMap_9491, var_indexingListAST_9513, var_terminalListAST_9568, var_lexicalAttributeListAST_9594, var_lexicalStyleListAST_9628, var_lexicalListDeclarationListAST_9658, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 258)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLexiqueComponentAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLexiqueComponentAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_10946 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 282)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10946, var_nameForUsefulness_10946, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 283)) ;
  }
  GALGAS_terminalDeclarationListAST var_terminalListAST_11383 ;
  GALGAS_lexicalAttributeListAST var_lexicalAttributeListAST_11409 ;
  GALGAS_lexicalStyleListAST var_lexicalStyleListAST_11443 ;
  GALGAS_lexicalListDeclarationListAST var_lexicalListDeclarationListAST_11473 ;
  const GALGAS_templateLexiqueComponentAST temp_1 = this ;
  GALGAS_bool joker_11286 ; // Joker input parameter
  GALGAS_terminalMap joker_11322 ; // Joker input parameter
  GALGAS_indexingListAST joker_11347 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueSuperComponentName (), joker_11286, joker_11322, joker_11347, var_terminalListAST_11383, var_lexicalAttributeListAST_11409, var_lexicalStyleListAST_11443, var_lexicalListDeclarationListAST_11473, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 285)) ;
  GALGAS_lexicalTypeMap var_lexicalTypeMap_11602 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 296)) ;
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_11740 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_11740, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 298)) ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_11859 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_11859, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 300)) ;
  }
  GALGAS_stringset var_unicodeTestFunctions_11986 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis_21_ (var_unicodeTestFunctions_11986, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 302)) ;
  }
  const GALGAS_templateLexiqueComponentAST temp_2 = this ;
  GALGAS_lexiqueAnalysisContext var_lexiqueAnalysisContext_12079 = GALGAS_lexiqueAnalysisContext::constructor_new (temp_2.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_11740, var_lexicalFunctionMap_11859, GALGAS_lexicalMessageMap::constructor_emptyMap (SOURCE_FILE ("template-lexique-component.galgas", 308)), GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("template-lexique-component.galgas", 309)), GALGAS_terminalList::constructor_emptyList (SOURCE_FILE ("template-lexique-component.galgas", 310)), GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("template-lexique-component.galgas", 311)), GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (SOURCE_FILE ("template-lexique-component.galgas", 312)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("template-lexique-component.galgas", 313)), GALGAS_templateDelimitorList::constructor_emptyList (SOURCE_FILE ("template-lexique-component.galgas", 314)), GALGAS_styleMap::constructor_emptyMap (SOURCE_FILE ("template-lexique-component.galgas", 315)), var_unicodeTestFunctions_11986, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 304)) ;
  GALGAS_bigint var_styleIndex_12486 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 319)) ;
  cEnumerator_lexicalStyleListAST enumerator_12514 (var_lexicalStyleListAST_11443, kENUMERATION_UP) ;
  while (enumerator_12514.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_12079.mProperty_mStyleMap.setter_insertKey (enumerator_12514.current_mName (HERE), enumerator_12514.current_mComment (HERE), var_styleIndex_12486.getter_uint (inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 321)) ;
    }
    var_styleIndex_12486.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 322)) ;
    enumerator_12514.gotoNextObject () ;
  }
  {
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_11602, var_lexicalAttributeListAST_11409, var_lexiqueAnalysisContext_12079.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 325)) ;
  }
  GALGAS_terminalList var_terminalList_12930 = GALGAS_terminalList::constructor_emptyList (SOURCE_FILE ("template-lexique-component.galgas", 331)) ;
  cEnumerator_terminalDeclarationListAST enumerator_13026 (var_terminalListAST_11383, kENUMERATION_UP) ;
  while (enumerator_13026.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_13083 = GALGAS_uint (uint32_t (0U)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsStrictSup, enumerator_13026.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas", 334)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_lstring joker_13202 ; // Joker input parameter
        var_lexiqueAnalysisContext_12079.readProperty_mStyleMap ().method_searchKey (enumerator_13026.current_mStyle (HERE), joker_13202, var_terminalStyleIndex_13083, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 335)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_13242 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("template-lexique-component.galgas", 337)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_13311 (enumerator_13026.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13311.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_13434 ;
      var_lexiqueAnalysisContext_12079.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_13311.current_mAttributeName (HERE), var_attributeLexicalType_13434, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 339)) ;
      var_argumentTypeList_13242.addAssign_operation (enumerator_13311.current_mFormalSelector (HERE), enumerator_13311.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_13434  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 340)) ;
      enumerator_13311.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_12079.mProperty_mTerminalMap.setter_insertKey (enumerator_13026.current_mName (HERE), var_argumentTypeList_13242, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 342)) ;
    }
    var_terminalList_12930.addAssign_operation (enumerator_13026.current_mName (HERE), var_argumentTypeList_13242, enumerator_13026.current_mSyntaxErrorMessage (HERE).readProperty_string (), enumerator_13026.current_isEndOfTemplateMark (HERE), enumerator_13026.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("template-lexique-component.galgas", 348)), var_terminalStyleIndex_13083  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 343)) ;
    enumerator_13026.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_13904 (var_lexicalListDeclarationListAST_11473, kENUMERATION_UP) ;
  while (enumerator_13904.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_13966 = GALGAS_uint (uint32_t (0U)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_13904.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas", 353)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_lstring joker_14085 ; // Joker input parameter
        var_lexiqueAnalysisContext_12079.readProperty_mStyleMap ().method_searchKey (enumerator_13904.current_mStyle (HERE), joker_14085, var_terminalStyleIndex_13966, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 354)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_14125 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("template-lexique-component.galgas", 356)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_14194 (enumerator_13904.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_14194.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_14317 ;
      var_lexiqueAnalysisContext_12079.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_14194.current_mAttributeName (HERE), var_attributeLexicalType_14317, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 358)) ;
      var_argumentTypeList_14125.addAssign_operation (enumerator_14194.current_mFormalSelector (HERE), enumerator_14194.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_14317  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 359)) ;
      enumerator_14194.gotoNextObject () ;
    }
    cEnumerator_lexicalListEntryListAST enumerator_14483 (enumerator_13904.current_mEntryList (HERE), kENUMERATION_UP) ;
    while (enumerator_14483.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage_14529 = enumerator_13904.current_mSyntaxErrorMessage (HERE).readProperty_string ().getter_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_14483.current_mTerminalSpelling (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 362)) ;
      var_terminalList_12930.addAssign_operation (enumerator_14483.current_mTerminalSpelling (HERE), var_argumentTypeList_14125, var_syntaxErrorMessage_14529, enumerator_14483.current_isEndOfTemplateMark (HERE), enumerator_14483.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("template-lexique-component.galgas", 368)), var_terminalStyleIndex_13966  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 363)) ;
      enumerator_14483.gotoNextObject () ;
    }
    enumerator_13904.gotoNextObject () ;
  }
  GALGAS_stringset var_unicodeStringToGenerate_14963 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("template-lexique-component.galgas", 373)) ;
  GALGAS_templateDelimitorList var_templateDelimitorList_15021 = GALGAS_templateDelimitorList::constructor_emptyList (SOURCE_FILE ("template-lexique-component.galgas", 374)) ;
  const GALGAS_templateLexiqueComponentAST temp_5 = this ;
  cEnumerator_templateDelimitorListAST enumerator_15096 (temp_5.readProperty_mTemplateDelimitorList (), kENUMERATION_UP) ;
  while (enumerator_15096.hasCurrentObject ()) {
    var_unicodeStringToGenerate_14963.addAssign_operation (enumerator_15096.current_mStartString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 376)) ;
    var_unicodeStringToGenerate_14963.addAssign_operation (enumerator_15096.current_mEndString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 377)) ;
    var_templateDelimitorList_15021.addAssign_operation (enumerator_15096.current_mStartString (HERE), enumerator_15096.current_mEndString (HERE), enumerator_15096.current_mPreserved (HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 378)) ;
    enumerator_15096.gotoNextObject () ;
  }
  const GALGAS_templateLexiqueComponentAST temp_6 = this ;
  cEnumerator_templateReplacementListAST enumerator_15429 (temp_6.readProperty_mTemplateReplacementList (), kENUMERATION_UP) ;
  while (enumerator_15429.hasCurrentObject ()) {
    var_unicodeStringToGenerate_14963.addAssign_operation (enumerator_15429.current_mMatchString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 382)) ;
    var_unicodeStringToGenerate_14963.addAssign_operation (enumerator_15429.current_mReplacementString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 383)) ;
    enumerator_15429.gotoNextObject () ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("template-lexique-component.galgas", 387)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_templateLexiqueComponentAST temp_8 = this ;
      const GALGAS_templateLexiqueComponentAST temp_9 = this ;
      GALGAS_string var_headerContents_15748 = GALGAS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_cppHeader (inCompiler, temp_8.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 390)), temp_9.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 391)) COMMA_SOURCE_FILE ("template-lexique-component.galgas", 389))) ;
      const GALGAS_templateLexiqueComponentAST temp_10 = this ;
      const GALGAS_templateLexiqueComponentAST temp_11 = this ;
      const GALGAS_templateLexiqueComponentAST temp_12 = this ;
      const GALGAS_templateLexiqueComponentAST temp_13 = this ;
      GALGAS_string var_cppContents_15991 = GALGAS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_cppImplementation (inCompiler, temp_10.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 395)), temp_11.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 396)), var_lexiqueAnalysisContext_12079.readProperty_mLexicalTokenListMap (), var_unicodeStringToGenerate_14963, var_templateDelimitorList_15021, var_terminalList_12930, temp_12.readProperty_mLexiqueComponentName ().readProperty_string (), temp_13.readProperty_mTemplateReplacementList () COMMA_SOURCE_FILE ("template-lexique-component.galgas", 394))) ;
      const GALGAS_templateLexiqueComponentAST temp_14 = this ;
      const GALGAS_templateLexiqueComponentAST temp_15 = this ;
      const GALGAS_templateLexiqueComponentAST temp_16 = this ;
      GALGAS_string var_objcCocoaHeader_16461 = GALGAS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaHeaderZone (inCompiler, temp_14.readProperty_mLexiqueComponentName ().readProperty_string (), temp_15.readProperty_mLexiqueSuperComponentName ().readProperty_string (), GALGAS_string ("lexique-").add_operation (temp_16.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 408)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 408)) COMMA_SOURCE_FILE ("template-lexique-component.galgas", 405))) ;
      const GALGAS_templateLexiqueComponentAST temp_17 = this ;
      const GALGAS_templateLexiqueComponentAST temp_18 = this ;
      const GALGAS_templateLexiqueComponentAST temp_19 = this ;
      GALGAS_string var_objcCocoaImplementation_16776 = GALGAS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaImplementationZone (inCompiler, GALGAS_string ("lexique-").add_operation (temp_17.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 412)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 412)), temp_18.readProperty_mLexiqueComponentName ().readProperty_string (), var_terminalList_12930, var_templateDelimitorList_15021, temp_19.readProperty_mTemplateReplacementList () COMMA_SOURCE_FILE ("template-lexique-component.galgas", 411))) ;
      const GALGAS_templateLexiqueComponentAST temp_20 = this ;
      const GALGAS_templateLexiqueComponentAST temp_21 = this ;
      const GALGAS_templateLexiqueComponentAST temp_22 = this ;
      const GALGAS_templateLexiqueComponentAST temp_23 = this ;
      GALGAS_string var_swiftCocoaImplementation_17143 = GALGAS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_swiftCocoaImplementationZone (inCompiler, GALGAS_string ("lexique-").add_operation (temp_20.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 420)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 420)), temp_21.readProperty_mLexiqueComponentName ().readProperty_string (), temp_22.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_terminalList_12930, var_templateDelimitorList_15021, temp_23.readProperty_mTemplateReplacementList () COMMA_SOURCE_FILE ("template-lexique-component.galgas", 419))) ;
      const GALGAS_templateLexiqueComponentAST temp_24 = this ;
      const GALGAS_templateLexiqueComponentAST temp_25 = this ;
      const GALGAS_templateLexiqueComponentAST temp_26 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_lexiqueDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("lexique-").add_operation (temp_24.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 432)), temp_25.readProperty_mLexiqueComponentName ().readProperty_string (), temp_26.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_headerContents_15748, var_cppContents_15991, var_objcCocoaHeader_16461, var_objcCocoaImplementation_16776, var_swiftCocoaImplementation_17143  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 430))  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 428)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'templateLexiqueGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_templateLexiqueGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_templateLexiqueGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_templateLexiqueGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_templateLexiqueGenerationTemplates_0,
  0,
  gWrapperAllDirectories_templateLexiqueGenerationTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates cppHeader'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppHeader (Compiler * inCompiler,
                                                                                const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const GALGAS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string ("LEXIQUE ").add_operation (in_LEXIQUE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("template_lexique_header_template_zone_2.h.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"galgas2/C_Lexique.h\"\n\n//--------------------------------------------------------------------------------------------------\n//                       T O K E N    C L A S S\n//--------------------------------------------------------------------------------------------------\n\ntypedef cTokenFor_") ;
  result.addString (in_SUPER_5F_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" cTokenFor_") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" ;\n\n//--------------------------------------------------------------------------------------------------\n//                     S C A N N E R    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass C_Lexique_") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public C_Lexique_") ;
  result.addString (in_SUPER_5F_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" {\n//--- Constructors\n  public: C_Lexique_") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (Compiler * inCallerCompiler,\n                       const String & inSourceFileName\n                       COMMA_LOCATION_ARGS) ;\n\n  public: C_Lexique_") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (Compiler * inCallerCompiler,\n                       const String & inSourceString,\n                       const String & inStringForError\n                       COMMA_LOCATION_ARGS) ;\n\n//--- Instrospection\n  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;\n\n//--- Declaring a protected virtual destructor enables the compiler to raise\n//    an error if a direct delete is performed; only the static method\n//    SharedObject::detachPointer may invoke delete.\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    protected: virtual ~ C_Lexique_") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) {}\n  #endif\n//--- Scanner mode for template scanner\n  private: int32_t mMatchedTemplateDelimiterIndex ;\n\n//--- Parse lexical token\n  protected: virtual bool parseLexicalToken (void) override ;\n} ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates cppImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppImplementation (Compiler * inCompiler,
                                                                                        const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                        const GALGAS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER,
                                                                                        const GALGAS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                        const GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                        const GALGAS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                        const GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                        const GALGAS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                        const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//     L E X I Q U E\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"strings/unicode_character_cpp.h\"\n#include \"galgas2/scanner_actions.h\"\n#include \"galgas2/cLexiqueIntrospection.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nC_Lexique_") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::C_Lexique_") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("Compiler * inCallerCompiler,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("const String & inSourceFileName\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) :\nC_Lexique_") ;
  result.addString (in_SUPER_5F_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (inCallerCompiler, inSourceFileName COMMA_THERE),\nmMatchedTemplateDelimiterIndex (-1) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nC_Lexique_") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::C_Lexique_") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("Compiler * inCallerCompiler,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("const String & inSourceString,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("const String & inStringForError\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_LOCATION_ARGS) :\nC_Lexique_") ;
  result.addString (in_SUPER_5F_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (inCallerCompiler, inSourceString, inStringForError COMMA_THERE),\nmMatchedTemplateDelimiterIndex (-1) {\n}\n\n//--------------------------------------------------------------------------------------------------\n//                      U N I C O D E    S T R I N G S\n//--------------------------------------------------------------------------------------------------\n") ;
  GALGAS_uint index_1571_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    cEnumerator_stringset enumerator_1571 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES, kENUMERATION_UP) ;
    while (enumerator_1571.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_1571.current_key (HERE).getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 35)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.addString ("\n//--- Unicode string for '$") ;
        result.addString (enumerator_1571.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.addString ("$'\nstatic const utf32 kUnicodeString_") ;
        result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.addString ("_") ;
        result.addString (enumerator_1571.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.addString (" [] = ") ;
        result.addString (enumerator_1571.current_key (HERE).getter_utf_33__32_Representation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.addString (" ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_1571_.increment () ;
      enumerator_1571.gotoNextObject () ;
    }
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_2306_ (0) ;
  if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
    cEnumerator_templateDelimitorList enumerator_2306 (in_TEMPLATE_5F_DELIMITOR_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_2306 = enumerator_2306.hasCurrentObject () ;
    if (nonEmpty_enumerator_2306) {
      result.addString ("static const cTemplateDelimiter ") ;
      result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("_kTemplateDefinitionArray [") ;
      result.addString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 46)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 46)).stringValue ()) ;
      result.addString ("] = {\n") ;
    }
    while (enumerator_2306.hasCurrentObject ()) {
      result.addString ("  cTemplateDelimiter (kUnicodeString_") ;
      result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_2306.current_mStartString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 47)).stringValue ()) ;
      result.addString (", ") ;
      result.addString (enumerator_2306.current_mStartString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 47)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 47)).stringValue ()) ;
      result.addString (", ") ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_2306.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 48)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.addString ("nullptr, 0,") ;
        } break ;
      case kBoolFalse : {
        result.addString ("kUnicodeString_") ;
        result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.addString ("_") ;
        result.addString (enumerator_2306.current_mEndString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).stringValue ()) ;
        result.addString (", ") ;
        result.addString (enumerator_2306.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).stringValue ()) ;
        result.addString (",") ;
        } break ;
      default :
        break ;
      }
      result.addString (" nullptr, ") ;
      result.addString (enumerator_2306.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 54)).getter_cString (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 54)).stringValue ()) ;
      result.addString (")") ;
      if (enumerator_2306.hasNextObject ()) {
        result.addString (",\n") ;
      }
      index_2306_.increment () ;
      enumerator_2306.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_2306) {
      result.addString ("\n} ;\n") ;
    }
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_3267_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    cEnumerator_templateReplacementListAST enumerator_3267 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_3267 = enumerator_3267.hasCurrentObject () ;
    if (nonEmpty_enumerator_3267) {
      result.addString ("static const cTemplateDelimiter ") ;
      result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("_kTemplateReplacementArray [") ;
      result.addString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 65)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 65)).stringValue ()) ;
      result.addString ("] = {\n") ;
    }
    while (enumerator_3267.hasCurrentObject ()) {
      result.addString ("  cTemplateDelimiter (kUnicodeString_") ;
      result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_3267.current_mMatchString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 67)).stringValue ()) ;
      result.addString (", ") ;
      result.addString (enumerator_3267.current_mMatchString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 67)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 67)).stringValue ()) ;
      result.addString (", kUnicodeString_") ;
      result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_3267.current_mReplacementString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 68)).stringValue ()) ;
      result.addString (", ") ;
      result.addString (enumerator_3267.current_mReplacementString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 68)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 68)).stringValue ()) ;
      result.addString (", ") ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_3267.current_mReplacementFunction (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 69)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.addString ("nullptr") ;
        } break ;
      case kBoolFalse : {
        result.addString ("scanner_routine_") ;
        result.addString (enumerator_3267.current_mReplacementFunction (HERE).readProperty_string ().stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.addString (", true)") ;
      if (enumerator_3267.hasNextObject ()) {
        result.addString (",\n") ;
      }
      index_3267_.increment () ;
      enumerator_3267.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_3267) {
      result.addString ("\n} ;\n") ;
    }
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_4219_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_4219 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_4219 = enumerator_4219.hasCurrentObject () ;
    if (nonEmpty_enumerator_4219) {
      result.addString ("static const bool ") ;
      result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("_kEndOfScriptInTemplateArray [") ;
      result.addString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 84)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 84)).stringValue ()) ;
      result.addString ("] = {\n") ;
    }
    while (enumerator_4219.hasCurrentObject ()) {
      result.addString ("  ") ;
      result.addString (enumerator_4219.current_isEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 85)).stringValue ()) ;
      result.addString (" /* ") ;
      result.addString (enumerator_4219.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
      result.addString (" */") ;
      if (enumerator_4219.hasNextObject ()) {
        result.addString (",\n") ;
      }
      index_4219_.increment () ;
      enumerator_4219.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_4219) {
      result.addString ("\n} ;\n") ;
    }
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n//               P A R S E    L E X I C A L    T O K E N\n//--------------------------------------------------------------------------------------------------\n\nbool C_Lexique_") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::parseLexicalToken (void) {\n  cTokenFor_") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" token ;\n  token.mTokenCode = -1 ;\n  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n    if ((mMatchedTemplateDelimiterIndex >= 0)\n        && (") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)\n        && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      const bool foundEndDelimitor = testForInputUTF32String (") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,\n                                                              ") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength,\n                                                              true) ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      int32_t replacementIndex = 0 ;\n      while (replacementIndex >= 0) {\n        replacementIndex = findTemplateDelimiterIndex (") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_kTemplateReplacementArray, ") ;
  result.addString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 111)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 111)).stringValue ()) ;
  result.addString (") ;\n        if (replacementIndex >= 0) {\n          if (") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction == nullptr) {\n            token.mTemplateStringBeforeToken.addString (String (") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_kTemplateReplacementArray [replacementIndex].mEndString)) ;\n          }else{\n            String s ;\n            while (notTestForInputUTF32String (") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_kTemplateReplacementArray [replacementIndex].mEndString,\n                                               ") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_kTemplateReplacementArray [replacementIndex].mEndStringLength,\n                                               kEndOfSourceLexicalErrorMessage\n                                               COMMA_HERE)) {\n              s.addUnicodeChar (previousChar () COMMA_HERE) ;\n            }\n            ") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;\n          }\n        }\n      }\n      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_kTemplateDefinitionArray, ") ;
  result.addString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 127)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 127)).stringValue ()) ;
  result.addString (") ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        token.mTemplateStringBeforeToken.addUnicodeChar (mCurrentChar COMMA_HERE) ;\n        advance () ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      internalParseLexicalToken (token) ;\n    }\n    if ((token.mTokenCode > 0) && ") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  }\n  if (UNICODE_VALUE (mCurrentChar) == '\\0') {\n    token.mTokenCode = 0 ;\n    enterToken (token) ;\n  }\n  return token.mTokenCode > 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                         I N T R O S P E C T I O N\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_stringlist C_Lexique_") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::symbols (LOCATION_ARGS) {\n  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;\n") ;
  GALGAS_uint index_8038_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_8038 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8038.hasCurrentObject ()) {
      result.addString ("  result.addAssign_operation (GALGAS_string (") ;
      result.addString (enumerator_8038.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 154)).stringValue ()) ;
      result.addString (") COMMA_HERE) ;\n") ;
      index_8038_.increment () ;
      enumerator_8038.gotoNextObject () ;
    }
  }
  result.addString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordLists_") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (TC_UniqueArray <String> & ") ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 162)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.addString ("/* ioList */") ;
    } break ;
  case kBoolFalse : {
    result.addString ("ioList") ;
    } break ;
  default :
    break ;
  }
  result.addString (") {\n") ;
  GALGAS_uint index_8551_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_8551 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_8551.hasCurrentObject ()) {
      result.addString ("  ioList.appendObject (") ;
      result.addString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 166)).add_operation (enumerator_8551.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 166)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 166)).stringValue ()) ;
      result.addString (") ;\n") ;
      index_8551_.increment () ;
      enumerator_8551.gotoNextObject () ;
    }
  }
  result.addString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordsForIdentifier_") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const String & ") ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 172)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_4) {
  case kBoolTrue : {
    result.addString ("/* inIdentifier */") ;
    } break ;
  case kBoolFalse : {
    result.addString ("inIdentifier") ;
    } break ;
  default :
    break ;
  }
  result.addString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("bool & ") ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 173)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    result.addString ("/* ioFound */") ;
    } break ;
  case kBoolFalse : {
    result.addString ("ioFound") ;
    } break ;
  default :
    break ;
  }
  result.addString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("TC_UniqueArray <String> & ") ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 174)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    result.addString ("/* ioList */") ;
    } break ;
  case kBoolFalse : {
    result.addString ("ioList") ;
    } break ;
  default :
    break ;
  }
  result.addString (") {\n") ;
  GALGAS_uint index_9260_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_9260 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_9260.hasCurrentObject ()) {
      result.addString ("  if (inIdentifier == ") ;
      result.addString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 178)).add_operation (enumerator_9260.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 178)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 178)).stringValue ()) ;
      result.addString (") {\n    ioFound = true ;\n") ;
      GALGAS_uint index_9457_ (0) ;
      if (enumerator_9260.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_9457 (enumerator_9260.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_9457.hasCurrentObject ()) {
          result.addString ("    ioList.appendObject (") ;
          result.addString (enumerator_9457.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 181)).stringValue ()) ;
          result.addString (") ;\n") ;
          index_9457_.increment () ;
          enumerator_9457.gotoNextObject () ;
        }
      }
      result.addString ("    ioList.sortArrayUsingCompareMethod() ;\n  }\n") ;
      index_9260_.increment () ;
      enumerator_9260.gotoNextObject () ;
    }
  }
  result.addString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic cLexiqueIntrospection lexiqueIntrospection_") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("\n__attribute__ ((used))\n__attribute__ ((unused)) (getKeywordLists_") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (", getKeywordsForIdentifier_") ;
  result.addString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (") ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates objcCocoaHeaderZone'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaHeaderZone (Compiler * /* inCompiler */,
                                                                                          const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const GALGAS_string & in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const GALGAS_string & in_SUPER_5F_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("\n#import \"") ;
  result.addString (in_SUPER_5F_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME.stringValue ()) ;
  result.addString (".h\"\n\n//--------------------------------------------------------------------------------------------------\n//\n//                     S C A N N E R    C L A S S\n//\n//--------------------------------------------------------------------------------------------------\n\n@interface OC_Lexique_") ;
  result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.addString (" : OC_Lexique_") ;
  result.addString (in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.addString (" {\n}\n- (void) parseLexicalTokenForLexicalColoring ;\n\n- (BOOL) isTemplateLexique ;\n\n@end\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates objcCocoaImplementationZone'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaImplementationZone (Compiler * /* inCompiler */,
                                                                                                  const GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                                  const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                  const GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                  const GALGAS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                  const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("\n#import \"") ;
  result.addString (in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME.stringValue ()) ;
  result.addString (".h\"\n#import \"PMDebug.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n@implementation OC_Lexique_") ;
  result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.addString ("\n\n//--------------------------------------------------------------------------------------------------\n//\n//                           Template Replacements\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 15)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.addString ("static NSArray * kTemplateReplacementArray_") ;
    result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 16)).stringValue ()) ;
    result.addString (" ; // Of NSString \n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n//\n//                           Template Delimiters\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 25)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.addString ("static NSArray * kTemplateDefinitionArray_") ;
    result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 26)).stringValue ()) ;
    result.addString (" ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n//\n//                           init\n//\n//--------------------------------------------------------------------------------------------------\n\n- (instancetype) init {\n  self = [super init] ;\n  if (self) {\n    noteObjectAllocation (self) ;\n  }\n") ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 39)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.addString ("  if (nil == kTemplateDefinitionArray_") ;
    result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 40)).stringValue ()) ;
    result.addString (") {\n    kTemplateDefinitionArray_") ;
    result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 41)).stringValue ()) ;
    result.addString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_1724_ (0) ;
    if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
      cEnumerator_templateDelimitorList enumerator_1724 (in_TEMPLATE_5F_DELIMITOR_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1724.hasCurrentObject ()) {
        result.addString ("      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@") ;
        result.addString (enumerator_1724.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 43)).stringValue ()) ;
        result.addString (" endString:") ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_1724.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 44)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_3) {
        case kBoolTrue : {
          result.addString ("nil") ;
          } break ;
        case kBoolFalse : {
          result.addString ("@") ;
          result.addString (enumerator_1724.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 47)).stringValue ()) ;
          } break ;
        default :
          break ;
        }
        result.addString (" discardStartString:") ;
        result.addString (enumerator_1724.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 50)).getter_ocString (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 50)).stringValue ()) ;
        result.addString ("],\n") ;
        index_1724_.increment () ;
        enumerator_1724.gotoNextObject () ;
      }
    }
    result.addString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 57)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_4) {
  case kBoolTrue : {
    result.addString ("  if (nil == kTemplateReplacementArray_") ;
    result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 58)).stringValue ()) ;
    result.addString (") {\n    kTemplateReplacementArray_") ;
    result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 59)).stringValue ()) ;
    result.addString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_2487_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_2487 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2487.hasCurrentObject ()) {
        result.addString ("      @") ;
        result.addString (enumerator_2487.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 61)).stringValue ()) ;
        result.addString (",\n") ;
        index_2487_.increment () ;
        enumerator_2487.gotoNextObject () ;
      }
    }
    result.addString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.addString ("  return self ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (void) dealloc {\n  noteObjectDeallocation (self) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//            Terminal Symbols as end of script in template mark\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_3349_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_3349 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_3349 = enumerator_3349.hasCurrentObject () ;
    if (nonEmpty_enumerator_3349) {
      result.addString ("static const BOOL kEndOfScriptInTemplateArray_") ;
      result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 83)).stringValue ()) ;
      result.addString (" [") ;
      result.addString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 83)).getter_string (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 83)).stringValue ()) ;
      result.addString ("] = {\n") ;
    }
    while (enumerator_3349.hasCurrentObject ()) {
      result.addString ("  ") ;
      result.addString (enumerator_3349.current_isEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 84)).stringValue ()) ;
      result.addString (" /* ") ;
      result.addString (enumerator_3349.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
      result.addString (" */") ;
      if (enumerator_3349.hasNextObject ()) {
        result.addString (",\n") ;
      }
      index_3349_.increment () ;
      enumerator_3349.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_3349) {
      result.addString ("\n} ;\n") ;
    }
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n//\n//               P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n- (void) parseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n  mTokenCode = 0 ;\n  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n    mTokenStartLocation = mCurrentLocation ;\n    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_") ;
  result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 100)).stringValue ()) ;
  result.addString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_") ;
  result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 101)).stringValue ()) ;
  result.addString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n      [self searchForReplacementPattern:kTemplateReplacementArray_") ;
  result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 107)).stringValue ()) ;
  result.addString ("] ;\n      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_") ;
  result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 108)).stringValue ()) ;
  result.addString ("] ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        [self advance] ;\n        mTokenCode = -2 ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;\n    }\n    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_") ;
  result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 117)).stringValue ()) ;
  result.addString (" [mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  //--- Error \?\n    if (! scanningOk) {\n      mTokenCode = -1 ;\n      [self advance] ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                I S    T E M P L A T E    L E X I Q U E\n//\n//--------------------------------------------------------------------------------------------------\n\n- (BOOL) isTemplateLexique {\n  return YES ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//         L E X I Q U E   I D E N T I F I E R\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) lexiqueIdentifier {\n  return @\"") ;
  result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.addString ("\" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n@end\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates swiftCocoaImplementationZone'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_swiftCocoaImplementationZone (Compiler * /* inCompiler */,
                                                                                                   const GALGAS_string & /* in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                                   const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                   const GALGAS_string & in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                   const GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                   const GALGAS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                   const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 8)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.addString ("fileprivate let kTemplateReplacementArray_") ;
    result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 9)).stringValue ()) ;
    result.addString (" : [String] = [\n") ;
    GALGAS_uint index_516_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_516 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_516.hasCurrentObject ()) {
        result.addString ("  ") ;
        result.addString (enumerator_516.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 12)).stringValue ()) ;
        if (enumerator_516.hasNextObject ()) {
          result.addString (",\n") ;
        }
        index_516_.increment () ;
        enumerator_516.gotoNextObject () ;
      }
    }
    result.addString ("\n]\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 21)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.addString ("fileprivate let kTemplateDefinitionArray_") ;
    result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 22)).stringValue ()) ;
    result.addString (" : [SWIFT_TemplateDelimiter] = [\n") ;
    GALGAS_uint index_1113_ (0) ;
    if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
      cEnumerator_templateDelimitorList enumerator_1113 (in_TEMPLATE_5F_DELIMITOR_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1113.hasCurrentObject ()) {
        result.addString ("  SWIFT_TemplateDelimiter (startString: ") ;
        result.addString (enumerator_1113.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 25)).stringValue ()) ;
        result.addString (", endString: ") ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1113.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 26)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_2) {
        case kBoolTrue : {
          result.addString ("nil") ;
          } break ;
        case kBoolFalse : {
          result.addString (enumerator_1113.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 29)).stringValue ()) ;
          } break ;
        default :
          break ;
        }
        result.addString (", discardStartString: ") ;
        result.addString (enumerator_1113.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 32)).getter_cString (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 32)).stringValue ()) ;
        result.addString (")") ;
        if (enumerator_1113.hasNextObject ()) {
          result.addString (",\n") ;
        }
        index_1113_.increment () ;
        enumerator_1113.gotoNextObject () ;
      }
    }
    result.addString ("\n]\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_1938_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_1938 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_1938 = enumerator_1938.hasCurrentObject () ;
    if (nonEmpty_enumerator_1938) {
      result.addString ("fileprivate let kEndOfScriptInTemplateArray_") ;
      result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 43)).stringValue ()) ;
      result.addString (" : [Bool] = [\n") ;
    }
    while (enumerator_1938.hasCurrentObject ()) {
      result.addString ("  ") ;
      result.addString (enumerator_1938.current_isEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 44)).stringValue ()) ;
      result.addString (" /* ") ;
      result.addString (enumerator_1938.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
      result.addString (" */") ;
      if (enumerator_1938.hasNextObject ()) {
        result.addString (",\n") ;
      }
      index_1938_.increment () ;
      enumerator_1938.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_1938) {
      result.addString ("\n]\n") ;
    }
  }
  result.addString ("\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.addString ("_lexiqueIdentifier () -> String {\n  return \"") ;
  result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.addString ("\"\n}\n\n//--------------------------------------------------------------------------------------------------\n//                     S C A N N E R    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass SWIFT_Lexique_") ;
  result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.addString (" : SWIFT_Lexique_") ;
  result.addString (in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.addString (" {\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func isTemplateLexique () -> Bool {\n    return true\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Lexical analysis\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func parseLexicalTokenForLexicalColoring () -> SWIFT_Token {\n    let startLocation = self.currentLocation\n    if let idx = self.mEndTemplateDelimiterIndex, self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].endString, advance: true) {\n      self.mEndTemplateDelimiterIndex = nil\n    }\n    if self.mEndTemplateDelimiterIndex != nil {\n      return super.parseLexicalTokenForLexicalColoring ()\n    }else{ // In template string, find code start string\n      while self.mEndTemplateDelimiterIndex == nil, self.currentChar != 0 {\n        var idx = 0\n        while self.mEndTemplateDelimiterIndex == nil, idx < kTemplateDefinitionArray_galgasTemplateScanner.count {\n          if self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].startString, advance: true) {\n            self.mEndTemplateDelimiterIndex = idx\n          }\n          idx += 1\n        }\n        if self.mEndTemplateDelimiterIndex == nil {\n          self.advance ()\n        }\n      }\n      return SWIFT_Token (\n        range: NSRange (location: startLocation, length: self.currentLocation - startLocation),\n        tokenCode: galgasScanner_2_TEMPLATE,\n        templateDelimiterIndex: self.mEndTemplateDelimiterIndex\n      )\n    }\n  }\n//    var styleIndex : UInt8 = 0\n//    var tokenCode : UInt16 = 0\n//    let startLocation = self.currentLocation\n//    while styleIndex == 0, self.currentChar != 0 {\n//      let tokenStartLocation = self.currentLocation\n//      if let idx = matchedTemplateDelimiterIndex, !kTemplateDefinitionArray_galgasTemplateScanner [idx].startString.isEmpty {\n//        let foundEndDelimitor = self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].endString, advance: true)\n//        if foundEndDelimitor {\n//          matchedTemplateDelimiterIndex = nil\n//        }\n//      }\n//      while matchedTemplateDelimiterIndex != nil, self.currentChar != 0 {\n//        self.searchForReplacementPattern (kTemplateReplacementArray_galgasTemplateScanner)\n//        matchedTemplateDelimiterIndex = self.findTemplateDelimiterIndex (kTemplateDefinitionArray_galgasTemplateScanner)\n//        if matchedTemplateDelimiterIndex == nil {\n//          self.advance ()\n//          styleIndex = -2\n//        }\n//      }\n//      if matchedTemplateDelimiterIndex != nil, styleIndex == 0, self.currentChar != 0 {\n//        let s = super.parseLexicalTokenForLexicalColoring ()\n//        styleIndex = s.styleIndex\n//        tokenCode = s.token\n//      }\n//      if styleIndex > 0, kEndOfScriptInTemplateArray_galgasTemplateScanner [Int (styleIndex) - 1] {\n//        matchedTemplateDelimiterIndex = nil\n//      }\n//    //--- Error \?\n////      if !scanningOk {\n////        styleIndex = Int8 (self.styleCount ())\n////        self.advance ()\n////      }\n//    }\n//  }\n  \n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                           init\n//\n//--------------------------------------------------------------------------------------------------\n\n/* - (instancetype) init {\n  self = [super init] ;\n  if (self) {\n    noteObjectAllocation (self) ;\n  }\n") ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 149)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.addString ("  if (nil == kTemplateDefinitionArray_") ;
    result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 150)).stringValue ()) ;
    result.addString (") {\n    kTemplateDefinitionArray_") ;
    result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 151)).stringValue ()) ;
    result.addString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_6661_ (0) ;
    if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
      cEnumerator_templateDelimitorList enumerator_6661 (in_TEMPLATE_5F_DELIMITOR_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_6661.hasCurrentObject ()) {
        result.addString ("      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@") ;
        result.addString (enumerator_6661.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 153)).stringValue ()) ;
        result.addString (" endString:") ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_6661.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 154)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_4) {
        case kBoolTrue : {
          result.addString ("nil") ;
          } break ;
        case kBoolFalse : {
          result.addString ("@") ;
          result.addString (enumerator_6661.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 157)).stringValue ()) ;
          } break ;
        default :
          break ;
        }
        result.addString (" discardStartString:") ;
        result.addString (enumerator_6661.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 160)).getter_ocString (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 160)).stringValue ()) ;
        result.addString ("],\n") ;
        index_6661_.increment () ;
        enumerator_6661.gotoNextObject () ;
      }
    }
    result.addString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 167)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    result.addString ("  if (nil == kTemplateReplacementArray_") ;
    result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 168)).stringValue ()) ;
    result.addString (") {\n    kTemplateReplacementArray_") ;
    result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 169)).stringValue ()) ;
    result.addString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_7424_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_7424 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_7424.hasCurrentObject ()) {
        result.addString ("      @") ;
        result.addString (enumerator_7424.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 171)).stringValue ()) ;
        result.addString (",\n") ;
        index_7424_.increment () ;
        enumerator_7424.gotoNextObject () ;
      }
    }
    result.addString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.addString ("  return self ;\n}\n*/\n\n//--------------------------------------------------------------------------------------------------\n\n/* - (void) dealloc {\n  noteObjectDeallocation (self) ;\n} */\n\n//--------------------------------------------------------------------------------------------------\n//\n//            Terminal Symbols as end of script in template mark\n//\n//--------------------------------------------------------------------------------------------------\n\n/*\n") ;
  GALGAS_uint index_8298_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_8298 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8298 = enumerator_8298.hasCurrentObject () ;
    if (nonEmpty_enumerator_8298) {
      result.addString ("static const BOOL kEndOfScriptInTemplateArray_") ;
      result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 195)).stringValue ()) ;
      result.addString (" [") ;
      result.addString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 195)).getter_string (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 195)).stringValue ()) ;
      result.addString ("] = {\n") ;
    }
    while (enumerator_8298.hasCurrentObject ()) {
      result.addString ("  ") ;
      result.addString (enumerator_8298.current_isEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 196)).stringValue ()) ;
      result.addString (" /* ") ;
      result.addString (enumerator_8298.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
      result.addString (" */") ;
      if (enumerator_8298.hasNextObject ()) {
        result.addString (",\n") ;
      }
      index_8298_.increment () ;
      enumerator_8298.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8298) {
      result.addString ("\n} ;\n") ;
    }
  }
  result.addString (" */\n\n//--------------------------------------------------------------------------------------------------\n//\n//               P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n/* - (void) parseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n  mTokenCode = 0 ;\n  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n    mTokenStartLocation = mCurrentLocation ;\n    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_") ;
  result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 213)).stringValue ()) ;
  result.addString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_") ;
  result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 214)).stringValue ()) ;
  result.addString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n      [self searchForReplacementPattern:kTemplateReplacementArray_") ;
  result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 220)).stringValue ()) ;
  result.addString ("] ;\n      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_") ;
  result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 221)).stringValue ()) ;
  result.addString ("] ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        [self advance] ;\n        mTokenCode = -2 ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;\n    }\n    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_") ;
  result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 230)).stringValue ()) ;
  result.addString (" [mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  //--- Error \?\n    if (! scanningOk) {\n      mTokenCode = -1 ;\n      [self advance] ;\n    }\n  }\n}\n*/ \n//--------------------------------------------------------------------------------------------------\n//\n//                I S    T E M P L A T E    L E X I Q U E\n//\n//--------------------------------------------------------------------------------------------------\n\n/* - (BOOL) isTemplateLexique {\n  return YES ;\n} */\n\n//--------------------------------------------------------------------------------------------------\n//\n//         L E X I Q U E   I D E N T I F I E R\n//\n//--------------------------------------------------------------------------------------------------\n\n/* - (NSString *) lexiqueIdentifier {\n  return @\"") ;
  result.addString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.addString ("\" ;\n} */\n\n//--------------------------------------------------------------------------------------------------\n\n// @end\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'buildLexicalTypeMap'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_lexicalTypeMap onceFunction_buildLexicalTypeMap (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result_outLexicalTypeMap ; // Returned variable
  result_outLexicalTypeMap = GALGAS_lexicalTypeMap::constructor_emptyMap (SOURCE_FILE ("lexiqueTypesForAST.galgas", 386)) ;
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 387)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 387)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("char"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 388)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueTypesForAST.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 388)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 389)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 389)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("uint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 390)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 390)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 391)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 391)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 392)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 392)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("double"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 393)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (SOURCE_FILE ("lexiqueTypesForAST.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 393)) ;
  }
  {
  result_outLexicalTypeMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("bigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 394)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 394)) ;
  }
//---
  return result_outLexicalTypeMap ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_buildLexicalTypeMap = false ;
static GALGAS_lexicalTypeMap gOnceFunctionResult_buildLexicalTypeMap ;

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap function_buildLexicalTypeMap (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_buildLexicalTypeMap) {
    gOnceFunctionResult_buildLexicalTypeMap = onceFunction_buildLexicalTypeMap (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_buildLexicalTypeMap = true ;
  }
  return gOnceFunctionResult_buildLexicalTypeMap ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_buildLexicalTypeMap (void) {
  gOnceFunctionResult_buildLexicalTypeMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_buildLexicalTypeMap (nullptr,
                                                                 releaseOnceFunctionResult_buildLexicalTypeMap) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_buildLexicalTypeMap [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_buildLexicalTypeMap (Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_buildLexicalTypeMap (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_buildLexicalTypeMap ("buildLexicalTypeMap",
                                                                     functionWithGenericHeader_buildLexicalTypeMap,
                                                                     & kTypeDescriptor_GALGAS_lexicalTypeMap,
                                                                     0,
                                                                     functionArgs_buildLexicalTypeMap) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalAttributeMap??&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalAttributeMap_3F__3F__26_ (const GALGAS_lexicalTypeMap constinArgument_inLexicalTypeMap,
                                                   const GALGAS_lexicalAttributeListAST constinArgument_inLexicalAttributeList,
                                                   GALGAS_lexicalAttributeMap & ioArgument_ioLexicalAttributeMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lexicalAttributeListAST enumerator_16253 (constinArgument_inLexicalAttributeList, kENUMERATION_UP) ;
  while (enumerator_16253.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inLexicalTypeMap.getter_hasKey (enumerator_16253.current_mTypeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 414)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_lexicalTypeEnum var_lexicalType_16412 ;
        constinArgument_inLexicalTypeMap.method_searchKey (enumerator_16253.current_mTypeName (HERE), var_lexicalType_16412, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 415)) ;
        {
        ioArgument_ioLexicalAttributeMap.setter_insertKey (enumerator_16253.current_mName (HERE), var_lexicalType_16412, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 416)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_string var_m_16514 = GALGAS_string::makeEmptyString () ;
      var_m_16514.plusAssign_operation(GALGAS_string ("the @").add_operation (enumerator_16253.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 419)).add_operation (GALGAS_string (" type is not a valid lexical attribute type; are allowed:"), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 419)) ;
      cEnumerator_lexicalTypeMap enumerator_16630 (constinArgument_inLexicalTypeMap, kENUMERATION_UP) ;
      while (enumerator_16630.hasCurrentObject ()) {
        var_m_16514.plusAssign_operation(GALGAS_string (" @").add_operation (enumerator_16630.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 421)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 421)) ;
        if (enumerator_16630.hasNextObject ()) {
          var_m_16514.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 423)) ;
        }
        enumerator_16630.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_16253.current_mTypeName (HERE).readProperty_location (), var_m_16514, fixItArray1  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 425)) ;
    }
    enumerator_16253.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'lexicalUnicodeTestFunctionAnalysis!'
//
//--------------------------------------------------------------------------------------------------

void routine_lexicalUnicodeTestFunctionAnalysis_21_ (GALGAS_stringset & outArgument_outUnicodeTestFunctions,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnicodeTestFunctions.drop () ; // Release 'out' argument
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 188)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 180)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeMark")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 181)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeNumber")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 182)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeDecimalDigit")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 183)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeASCIIHexDigit")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 184)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSeparator")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 185)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeCommand")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 186)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodePunctuation")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 187)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSymbol")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 188)) ;
  outArgument_outUnicodeTestFunctions = temp_0 ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalRoutineMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalRoutineMap_21_ (GALGAS_lexicalRoutineMap & outArgument_outLexicalRoutineMap,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalRoutineMap.drop () ; // Release 'out' argument
  outArgument_outLexicalRoutineMap = GALGAS_lexicalRoutineMap::constructor_emptyMap (SOURCE_FILE ("predefinedLexicalActions.galgas", 36)) ;
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 38)) ;
  GALGAS_stringlist var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 39)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 40)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 40)), GALGAS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 40)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 41)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 41)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 41)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 42)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inErrorNotHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 43)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoASCIIcharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 45)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 44)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 51)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 52)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 53)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 53)), GALGAS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 53)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 54)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 54)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 54)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 55)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inErrorNotDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 56)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoASCIIcharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 58)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 57)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 64)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 65)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 65)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 65)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 66)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 66)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 66)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterCharacterIntoString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 68)), var_lexicalRoutineFormalArgumentList_2008, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 70)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 67)) ;
  }
  {
  GALGAS_lexicalRoutineFormalArgumentList temp_0 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)) ;
  temp_0.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 76)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 76)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("resetString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75)), temp_0, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 77)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 74)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 81)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 82)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 83)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 84)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (SOURCE_FILE ("predefinedLexicalActions.galgas", 84)), GALGAS_string ("ioDouble")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 84)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inConversionError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 85)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertStringToDouble"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 87)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 86)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 93)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 94)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 95)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 95)), GALGAS_string ("ioCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 95)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 96)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 96)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 96)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterCharacterIntoCharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 98)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 97)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 104)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 105)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 106)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 106)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 106)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 107)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 109)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 108)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 115)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 116)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 117)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 117)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 117)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 118)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 120)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 119)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 126)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 127)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 128)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 128)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 128)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 129)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 129)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 129)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 130)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUIntToSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 132)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 132)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 131)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 138)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 139)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 140)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 140)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 140)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 141)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 141)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 141)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 142)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUInt64ToSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 144)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 143)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 150)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 151)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 152)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 152)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 152)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 153)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 153)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 153)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 154)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 155)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 157)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 156)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 163)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 164)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 165)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 165)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 165)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 166)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 166)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 166)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 167)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 168)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 170)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 169)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 176)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 177)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 177)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 177)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 178)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 178)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 178)) ;
  {
  GALGAS_stringlist temp_1 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 182)) ;
  temp_1.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 182)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterDecimalDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 180)), var_lexicalRoutineFormalArgumentList_2008, temp_1, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 179)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 186)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 187)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 187)), GALGAS_string ("inBinaryDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 187)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 188)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 188)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 188)) ;
  {
  GALGAS_stringlist temp_2 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 192)) ;
  temp_2.addAssign_operation (GALGAS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 192)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinaryDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 190)), var_lexicalRoutineFormalArgumentList_2008, temp_2, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 189)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 196)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 197)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 197)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 197)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 198)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 198)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 198)) ;
  {
  GALGAS_stringlist temp_3 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 202)) ;
  temp_3.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 202)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 200)), var_lexicalRoutineFormalArgumentList_2008, temp_3, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 199)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 206)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 207)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 207)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 207)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 208)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 208)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 208)) ;
  {
  GALGAS_stringlist temp_4 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 212)) ;
  temp_4.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 212)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 210)), var_lexicalRoutineFormalArgumentList_2008, temp_4, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 209)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 216)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 217)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 217)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 217)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("negateBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 219)), var_lexicalRoutineFormalArgumentList_2008, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 221)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 218)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 225)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 226)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 226)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 226)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 227)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 227)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 227)) ;
  {
  GALGAS_stringlist temp_5 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 231)) ;
  temp_5.addAssign_operation (GALGAS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 231)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertBinaryStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 229)), var_lexicalRoutineFormalArgumentList_2008, temp_5, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 228)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 235)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 236)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 236)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 236)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 237)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 237)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 237)) ;
  {
  GALGAS_stringlist temp_6 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 241)) ;
  temp_6.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 241)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoBigInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 239)), var_lexicalRoutineFormalArgumentList_2008, temp_6, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 238)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 245)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 246)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 247)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 247)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 247)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 248)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 248)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 248)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 249)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 250)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 252)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 251)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 258)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 259)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 260)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 260)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 260)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 261)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 261)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 261)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 262)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 263)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterHexDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 265)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 264)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 271)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 272)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 273)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 273)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 273)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 274)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 274)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 274)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 275)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 276)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 278)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 277)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 284)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 285)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 286)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 286)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 286)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 287)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 287)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 287)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 288)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 289)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 291)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 290)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 297)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 298)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 298)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 298)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 299)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 299)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 299)) ;
  {
  GALGAS_stringlist temp_7 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 303)) ;
  temp_7.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 303)) ;
  temp_7.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 303)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 301)), var_lexicalRoutineFormalArgumentList_2008, temp_7, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 300)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 307)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 308)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 309)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 309)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 309)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 310)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 310)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 310)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 311)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 312)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertDecimalStringIntoSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 314)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 313)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 320)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 321)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 322)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 322)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 322)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 323)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 323)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 323)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 324)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 325)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 327)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 326)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 333)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 334)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 335)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 335)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 335)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 336)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 336)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 336)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 337)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 338)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterBinDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 340)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 339)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 346)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 347)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 348)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 348)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 348)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 349)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 349)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 349)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 350)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 351)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterOctDigitIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 353)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 352)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 359)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 360)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 361)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 361)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 361)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 362)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 362)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 362)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 363)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 364)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("enterOctDigitIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 366)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 365)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 372)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 373)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 374)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 374)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 374)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 375)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 375)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 375)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 376)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("multiplyUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 378)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 377)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 384)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 385)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 386)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 386)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 386)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 387)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 387)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 387)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 388)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("multiplyUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 390)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 389)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 396)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 397)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 398)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 398)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 398)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 399)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 399)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 399)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 400)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 401)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoUInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 403)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 402)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 409)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 410)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 411)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 411)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 411)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 412)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 412)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 412)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 413)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 414)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoUInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 416)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 416)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 415)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 422)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 423)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 424)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 424)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 424)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 425)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 425)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 425)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 426)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 427)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoSInt"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 429)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 428)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 435)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 436)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 437)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 437)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 437)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 438)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 438)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 438)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 439)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 440)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHexStringIntoSInt64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 442)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 442)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 441)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 448)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 449)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 450)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 450)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 450)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 451)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 451)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 451)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inUnassignedUnicodeValueError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 452)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertUnsignedNumberToUnicodeChar"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 454)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 454)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 453)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 460)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 461)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 462)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 462)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 462)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 463)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 463)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 463)) ;
  var_errorMessageList_2064.addAssign_operation (GALGAS_string ("inUnassignedHTMLSequenceError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 464)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("convertHTMLSequenceToUnicodeCharacter"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 466)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 465)) ;
  }
  var_lexicalRoutineFormalArgumentList_2008 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 472)) ;
  var_errorMessageList_2064 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 473)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 474)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 474)), GALGAS_string ("inCodePointString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 474)) ;
  var_lexicalRoutineFormalArgumentList_2008.addAssign_operation (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 475)), GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 475)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 475)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("codePointToUnicode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 477)), var_lexicalRoutineFormalArgumentList_2008, var_errorMessageList_2064, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 476)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalFunctionMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalFunctionMap_21_ (GALGAS_lexicalFunctionMap & outArgument_outLexicalFunctionMap,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalFunctionMap.drop () ; // Release 'out' argument
  outArgument_outLexicalFunctionMap = GALGAS_lexicalFunctionMap::constructor_emptyMap (SOURCE_FILE ("predefinedLexicalActions.galgas", 489)) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalTypeList_22007 = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 491)) ;
  var_lexicalTypeList_22007.addAssign_operation (GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 492)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 492)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("toLower"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 494)), var_lexicalTypeList_22007, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 496)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 493)) ;
  }
  var_lexicalTypeList_22007 = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("predefinedLexicalActions.galgas", 501)) ;
  var_lexicalTypeList_22007.addAssign_operation (GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 502)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 502)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("toUpper"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 504)), var_lexicalTypeList_22007, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 506)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 503)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'printPredefinedLexicalActions'
//
//--------------------------------------------------------------------------------------------------

void routine_printPredefinedLexicalActions (Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_23008 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_23008, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 518)) ;
  }
  GALGAS_string var_s_23107 = GALGAS_string::makeEmptyString () ;
  var_s_23107.plusAssign_operation(GALGAS_string ("**************** Prefined lexical routines  ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 521)) ;
  cEnumerator_lexicalRoutineMap enumerator_23250 (var_lexicalRoutineMap_23008, kENUMERATION_UP) ;
  while (enumerator_23250.hasCurrentObject ()) {
    var_s_23107.plusAssign_operation(enumerator_23250.current_lkey (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 523)) ;
    cEnumerator_lexicalRoutineFormalArgumentList enumerator_23361 (enumerator_23250.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_23361.hasCurrentObject ()) {
      var_s_23107.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_lexicalFormalModeName (enumerator_23361.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)).add_operation (extensionGetter_lexicalTypeBaseName (enumerator_23361.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)).add_operation (enumerator_23361.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)) ;
      enumerator_23361.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_23600 (enumerator_23250.current_mErrorMessageList (HERE), kENUMERATION_UP) ;
    const bool bool_0 = true ;
    if (enumerator_23600.hasCurrentObject () && bool_0) {
      var_s_23107.plusAssign_operation(GALGAS_string (" error"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 528)) ;
      while (enumerator_23600.hasCurrentObject () && bool_0) {
        var_s_23107.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_23600.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 529)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 529)) ;
        enumerator_23600.gotoNextObject () ;
        if (enumerator_23600.hasCurrentObject () && bool_0) {
          var_s_23107.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 530)) ;
        }
      }
    }
    var_s_23107.plusAssign_operation(GALGAS_string (" ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)) ;
    enumerator_23250.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_23832 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_23832, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 535)) ;
  }
  var_s_23107.plusAssign_operation(GALGAS_string ("**************** Prefined lexical functions ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 537)) ;
  cEnumerator_lexicalFunctionMap enumerator_24067 (var_lexicalFunctionMap_23832, kENUMERATION_UP) ;
  while (enumerator_24067.hasCurrentObject ()) {
    var_s_23107.plusAssign_operation(enumerator_24067.current_lkey (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 539)) ;
    cEnumerator_lexicalFunctionFormalArgumentList enumerator_24138 (enumerator_24067.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_24138.hasCurrentObject ()) {
      var_s_23107.plusAssign_operation(GALGAS_string (" \?@").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24138.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)).add_operation (enumerator_24138.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)) ;
      enumerator_24138.gotoNextObject () ;
    }
    var_s_23107.plusAssign_operation(GALGAS_string (" -> @").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24067.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_24067.current_mReplacementFunctionName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_s_23107.plusAssign_operation(GALGAS_string ("Note: the '").add_operation (enumerator_24067.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)).add_operation (GALGAS_string ("' function is obsolete: use '"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)).add_operation (enumerator_24067.current_mReplacementFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)).add_operation (GALGAS_string ("' function.\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 545)) ;
      }
    }
    var_s_23107.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 547)) ;
    enumerator_24067.gotoNextObject () ;
  }
  var_s_23107.plusAssign_operation(GALGAS_string ("************************************************************"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 550)) ;
  {
  routine_println_3F_ (var_s_23107, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 551)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalOrExpressionAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 29)) ;
  result_result.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 30)) ;
  const GALGAS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 31)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  result_result = GALGAS_string ("testForInputUTF32CharRange (") ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_result.plusAssign_operation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 41)) ;
  result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 42)) ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_result.plusAssign_operation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 43)) ;
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 44)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringMatchAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalStringMatchAST temp_0 = this ;
  result_result = GALGAS_string ("testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)).add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)) ;
  result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 53)) ;
  const GALGAS_lexicalStringMatchAST temp_1 = this ;
  result_result.plusAssign_operation(temp_1.readProperty_mString ().readProperty_string ().getter_count (SOURCE_FILE ("lexiqueGeneration.galgas", 54)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 54)) ;
  result_result.plusAssign_operation(GALGAS_string (", true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 55)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringNotMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringNotMatchAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("notTestForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 63)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 63)) ;
  const GALGAS_lexicalStringNotMatchAST temp_0 = this ;
  result_result.plusAssign_operation(temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 64)) ;
  result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 65)) ;
  const GALGAS_lexicalStringNotMatchAST temp_1 = this ;
  result_result.plusAssign_operation(temp_1.readProperty_mString ().readProperty_string ().getter_count (SOURCE_FILE ("lexiqueGeneration.galgas", 66)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 66)) ;
  result_result.plusAssign_operation(GALGAS_string (", gLexicalMessage_"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 67)) ;
  result_result.plusAssign_operation(constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 68)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 68)) ;
  const GALGAS_lexicalStringNotMatchAST temp_2 = this ;
  result_result.plusAssign_operation(temp_2.readProperty_mErrorMessage ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 69)) ;
  result_result.plusAssign_operation(GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 70)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterMatchAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("testForInputUTF32Char (") ;
  const GALGAS_lexicalCharacterMatchAST temp_0 = this ;
  result_result.plusAssign_operation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 79)) ;
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 80)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterSetMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterSetMatchAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("testForCharWithFunction (") ;
  const GALGAS_lexicalCharacterSetMatchAST temp_0 = this ;
  result_result.plusAssign_operation(temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 89)) ;
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 90)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result_result = GALGAS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 104)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result_result = temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 111)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalUnsignedInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result_result = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 117)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("previousChar ()") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result_result = GALGAS_string ("::scanner_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 131)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 131)) ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_1 = this ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_6262 (temp_1.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_6262.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_6262.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 133)) ;
    enumerator_6262.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 135)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSendTerminalByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateDefaultSendCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result_result = GALGAS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 152)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 152)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorByDefaultAST::getter_generateDefaultSendCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalErrorByDefaultAST temp_0 = this ;
  result_result = GALGAS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 160)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 160)).add_operation (temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 160)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 160)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalImplicitRuleAST::getter_generateLexicalRuleCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                           const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  GALGAS_tokenSortedlist var_tokenSortedList_9453 ;
  const GALGAS_lexicalImplicitRuleAST temp_0 = this ;
  GALGAS_lexicalExplicitTokenListMap joker_9445 ; // Joker input parameter
  GALGAS_bool joker_9469 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_9445, var_tokenSortedList_9453, joker_9469, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 195)) ;
  result_result = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_9504 (var_tokenSortedList_9453, kENUMERATION_DOWN) ;
  while (enumerator_9504.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if (testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 198)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 198)) ;
    result_result.plusAssign_operation(enumerator_9504.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 199)) ;
    result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 200)) ;
    result_result.plusAssign_operation(enumerator_9504.current_mName (HERE).getter_count (SOURCE_FILE ("lexiqueGeneration.galgas", 201)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 201)) ;
    result_result.plusAssign_operation(GALGAS_string (", true)) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)) ;
    result_result.plusAssign_operation(GALGAS_string ("  token.mTokenCode = kToken_").add_operation (enumerator_9504.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)) ;
    result_result.plusAssign_operation(GALGAS_string ("  enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 204)) ;
    result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 205)) ;
    enumerator_9504.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalImplicitRuleAST::getter_lexicalRuleUsesLoopLocalVar (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalExplicitRuleAST::getter_generateLexicalRuleCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                           const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("if (") ;
  const GALGAS_lexicalExplicitRuleAST temp_0 = this ;
  result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 222)) ;
  result_result.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 223)) ;
  {
  result_result.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 224)) ;
  }
  const GALGAS_lexicalExplicitRuleAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_10741 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_10741.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_10741.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 226)) ;
    enumerator_10741.gotoNextObject () ;
  }
  {
  result_result.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 228)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 229)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalExplicitRuleAST::getter_lexicalRuleUsesLoopLocalVar (Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
  const GALGAS_lexicalExplicitRuleAST temp_0 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_11169 (temp_0.readProperty_mInstructionList (), kENUMERATION_UP) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas", 236)).isValidAndTrue () ;
  if (enumerator_11169.hasCurrentObject () && bool_1) {
    while (enumerator_11169.hasCurrentObject () && bool_1) {
      result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_11169.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 237)) ;
      enumerator_11169.gotoNextObject () ;
      if (enumerator_11169.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas", 236)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalOrExpressionAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 29)) ;
  result_result.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 30)) ;
  const GALGAS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssign_operation(callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 31)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputFromChar:") ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 42)) ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 44)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringMatchAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalStringMatchAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputString:@").add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 52)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" advance:YES]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 53)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringNotMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringNotMatchAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("[self notTestForInputString:@") ;
  const GALGAS_lexicalStringNotMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 62)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" error:& scanningOk]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 63)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterMatchAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("[self testForInputChar:") ;
  const GALGAS_lexicalCharacterMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 73)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterSetMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterSetMatchAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("[self testForCharWithFunction: ") ;
  const GALGAS_lexicalCharacterSetMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 81)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 82)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalOrExpressionAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 98)) ;
  result_result.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 99)) ;
  const GALGAS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssign_operation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 100)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 100)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  result_outGeneratedCode = GALGAS_string ("self.testForInputFromChar (") ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 110)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 110)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 111)) ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 112)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 112)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 113)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringMatchAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalStringMatchAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("self.testForInputString (").add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 121)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", advance: true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 122)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringNotMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringNotMatchAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("self.notTestForInputString (") ;
  const GALGAS_lexicalStringNotMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 131)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", error: &scanningOk)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 132)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterMatchAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("self.testForInputChar (") ;
  const GALGAS_lexicalCharacterMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 141)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 141)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 142)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterSetMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterSetMatchAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("self.testForCharWithFunction (") ;
  const GALGAS_lexicalCharacterSetMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 150)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 151)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 165)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 172)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 172)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalUnsignedInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 178)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("mPreviousChar") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 192)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 192)) ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_1 = this ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_9460 (temp_1.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_9460.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_9460.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 194)) ;
    if (enumerator_9460.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 195)) ;
    }
    enumerator_9460.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 197)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 209)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 216)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 216)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalUnsignedInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 222)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("self.previousChar") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 236)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 236)) ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_1 = this ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_11466 (temp_1.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_11466.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_11466.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 238)) ;
    if (enumerator_11466.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 239)) ;
    }
    enumerator_11466.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 241)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSendTerminalByDefaultAST generateObjcCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateObjcCocoaDefaultSendCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 257)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 257)).add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 257)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 257)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorByDefaultAST generateObjcCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorByDefaultAST::getter_generateObjcCocoaDefaultSendCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                      Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = NO ;\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSendTerminalByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 279)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 279)).add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 279)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 279)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                       Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = false\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST generateObjcCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalImplicitRuleAST::getter_generateObjcCocoaCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                         const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  GALGAS_tokenSortedlist var_tokenSortedList_15542 ;
  const GALGAS_lexicalImplicitRuleAST temp_0 = this ;
  GALGAS_lexicalExplicitTokenListMap joker_15534 ; // Joker input parameter
  GALGAS_bool joker_15558 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_15534, var_tokenSortedList_15542, joker_15558, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 321)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_15603 (var_tokenSortedList_15542, kENUMERATION_DOWN) ;
  while (enumerator_15603.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && [self testForInputString:@"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 324)) ;
    result_outGeneratedCode.plusAssign_operation(enumerator_15603.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 325)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (" advance:YES]) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 326)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 327)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 327)).add_operation (enumerator_15603.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 327)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 327)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 328)) ;
    enumerator_15603.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST generateObjcCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalExplicitRuleAST::getter_generateObjcCocoaCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                         const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("if (scanningOk && (") ;
  const GALGAS_lexicalExplicitRuleAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 339)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 340)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 341)) ;
  }
  const GALGAS_lexicalExplicitRuleAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_16525 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_16525.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_16525.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 343)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 343)) ;
    enumerator_16525.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 345)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalImplicitRuleAST::getter_generateSwiftCocoaCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  GALGAS_tokenSortedlist var_tokenSortedList_17637 ;
  const GALGAS_lexicalImplicitRuleAST temp_0 = this ;
  GALGAS_lexicalExplicitTokenListMap joker_17629 ; // Joker input parameter
  GALGAS_bool joker_17653 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_17629, var_tokenSortedList_17637, joker_17653, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 364)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_17698 (var_tokenSortedList_17637, kENUMERATION_DOWN) ;
  while (enumerator_17698.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if scanningOk && self.testForInputString ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 367)) ;
    result_outGeneratedCode.plusAssign_operation(enumerator_17698.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 368)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", advance: true) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 369)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 370)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 370)).add_operation (enumerator_17698.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 370)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 370)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 371)) ;
    enumerator_17698.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalExplicitRuleAST::getter_generateSwiftCocoaCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("if scanningOk && (") ;
  const GALGAS_lexicalExplicitRuleAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 382)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 383)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 384)) ;
  }
  const GALGAS_lexicalExplicitRuleAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_18617 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_18617.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_18617.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 386)) ;
    enumerator_18617.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 388)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 389)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalSendTerminalByDefaultAST checkLexicalDefaultAction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSendTerminalByDefaultAST::method_checkLexicalDefaultAction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  GALGAS_lexicalSentValueList joker_8138 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mDefaultSentTerminal (), joker_8138, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 192)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalErrorByDefaultAST checkLexicalDefaultAction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorByDefaultAST::method_checkLexicalDefaultAction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_lexicalErrorByDefaultAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 200)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalOrExpressionAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalOrExpressionAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalOrExpressionAST temp_0 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 214)) ;
  const GALGAS_lexicalOrExpressionAST temp_1 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 215)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterMatchAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterMatchAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterSetMatchAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterSetMatchAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_lexicalCharacterSetMatchAST temp_1 = this ;
    test_0 = ioArgument_ioLexiqueAnalysisContext.readProperty_mUnicodeTestFunctions ().getter_hasKey (temp_1.readProperty_mCharacterSetName ().readProperty_string () COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 229)).operator_not (SOURCE_FILE ("lexiqueCompilation.galgas", 229)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCharacterSetMatchAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      appendFixItActions (fixItArray3, kFixItReplace, ioArgument_ioLexiqueAnalysisContext.readProperty_mUnicodeTestFunctions ()) ;
      inCompiler->emitSemanticError (temp_2.readProperty_mCharacterSetName ().readProperty_location (), GALGAS_string ("undefined test function"), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 230)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterIntervalMatchAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterIntervalMatchAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalStringMatchAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringMatchAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalStringMatchAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.addAssign_operation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 244)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalStringNotMatchAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringNotMatchAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalStringNotMatchAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.addAssign_operation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 251)) ;
  {
  const GALGAS_lexicalStringNotMatchAST temp_1 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_1.readProperty_mErrorMessage ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 252)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::method_checkLexicalFunctionCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                     GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum var_attributeLexicalType_11967 ;
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_11967, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 269)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_11967.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputArgumentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_11967, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 275)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 276)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 277)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 278)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 275)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::method_checkLexicalFunctionCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                     GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 289)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCharacterInputArgumentAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 290)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 291)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 292)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 290)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::method_checkLexicalFunctionCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 303)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalUnsignedInputArgumentAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GALGAS_string ("type error, a literal character has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 304)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 305)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 306)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 304)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::method_checkLexicalFunctionCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                            GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 317)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCurrentCharacterInputArgumentAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 318)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 319)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 320)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 318)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::method_checkLexicalFunctionCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_14685 ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType_14716 ;
  GALGAS_string var_replacementFunctionName_14751 ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = this ;
  GALGAS_bool joker_14779 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_14685, var_returnedLexicalFormalType_14716, var_replacementFunctionName_14751, joker_14779, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 331)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName_14751.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_14751, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 340)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 340)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 340)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType_14716.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_14716, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 344)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 345)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 346)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 347)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 344)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalFunctionInputArgumentAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList_14685.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 351)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 351)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_9 = this ;
      const GALGAS_lexicalFunctionInputArgumentAST temp_10 = this ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 353)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 352)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 353)).add_operation (var_lexicalFormalTypeList_14685.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 355)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 354)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 355)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 352)) ;
    }
  }
  const GALGAS_lexicalFunctionInputArgumentAST temp_12 = this ;
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_15768 (var_lexicalFormalTypeList_14685, kENUMERATION_UP) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_15798 (temp_12.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_15768.hasCurrentObject () && enumerator_15798.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_15798.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_15768.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 359)) ;
    enumerator_15768.gotoNextObject () ;
    enumerator_15798.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum var_attributeLexicalType_16946 ;
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_16946, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 380)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_16946.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputArgumentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_16946, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 386)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 387)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 388)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 389)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 386)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 400)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCharacterInputArgumentAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 401)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 402)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 403)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 401)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                   GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 414)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalUnsignedInputArgumentAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GALGAS_string ("type error, a literal unsigned value has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 415)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 416)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 417)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 415)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                           GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 428)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCurrentCharacterInputArgumentAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 429)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 430)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 431)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 429)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                   GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_19667 ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType_19698 ;
  GALGAS_string var_replacementFunctionName_19733 ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = this ;
  GALGAS_bool joker_19761 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_19667, var_returnedLexicalFormalType_19698, var_replacementFunctionName_19733, joker_19761, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 442)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName_19733.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_19733, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 451)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 451)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 451)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType_19698.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_19698, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 455)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 456)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 457)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 458)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 455)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalFunctionInputArgumentAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList_19667.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 462)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 462)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_9 = this ;
      const GALGAS_lexicalFunctionInputArgumentAST temp_10 = this ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 464)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 463)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 464)).add_operation (var_lexicalFormalTypeList_19667.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 466)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 465)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 466)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 463)) ;
    }
  }
  const GALGAS_lexicalFunctionInputArgumentAST temp_12 = this ;
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_20750 (var_lexicalFormalTypeList_19667, kENUMERATION_UP) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_20780 (temp_12.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_20750.hasCurrentObject () && enumerator_20780.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_20780.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_20750.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 470)) ;
    enumerator_20750.gotoNextObject () ;
    enumerator_20780.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalImplicitRuleAST checkLexicalRule'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalImplicitRuleAST::method_checkLexicalRule (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalImplicitRuleAST temp_0 = this ;
  GALGAS_lexicalExplicitTokenListMap joker_22127 ; // Joker input parameter
  GALGAS_tokenSortedlist joker_22130 ; // Joker input parameter
  GALGAS_bool joker_22133 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_22127, joker_22130, joker_22133, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 496)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalExplicitRuleAST checkLexicalRule'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalExplicitRuleAST::method_checkLexicalRule (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalExplicitRuleAST temp_0 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 503)) ;
  GALGAS_lexicalTagMap var_tagMap_22473 = GALGAS_lexicalTagMap::constructor_emptyMap (SOURCE_FILE ("lexiqueCompilation.galgas", 504)) ;
  const GALGAS_lexicalExplicitRuleAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_22492 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_22492.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_22492.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_22473, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 506)) ;
    enumerator_22492.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalStructuredSendInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStructuredSendInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalStructuredSendInstructionAST temp_0 = this ;
  cEnumerator_lexicalSendSearchListAST enumerator_3660 (temp_0.readProperty_mLexicalSendSearchList (), kENUMERATION_UP) ;
  while (enumerator_3660.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalTokenListMap.setter_setMShouldBeGeneratedForKey (GALGAS_bool (true), enumerator_3660.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 94)) ;
    }
    GALGAS_lexicalTypeEnum joker_3900 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_3660.current_mAttributeName (HERE), joker_3900, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 95)) ;
    enumerator_3660.gotoNextObject () ;
  }
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = this ;
  callExtensionMethod_checkLexicalDefaultAction ((cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 97)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                                 const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_0 = this ;
  cEnumerator_lexicalSendSearchListAST enumerator_4517 (temp_0.readProperty_mLexicalSendSearchList (), kENUMERATION_UP) ;
  while (enumerator_4517.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (mTokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 110)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  mTokenCode = search_into_").add_operation (constinArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 111)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("_").add_operation (enumerator_4517.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 112)).add_operation (GALGAS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 112)).add_operation (enumerator_4517.current_mAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 112)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 112)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 113)) ;
    enumerator_4517.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (mTokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 115)) ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateObjcCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 116)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 117)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                                  const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_0 = this ;
  cEnumerator_lexicalSendSearchListAST enumerator_5431 (temp_0.readProperty_mLexicalSendSearchList (), kENUMERATION_UP) ;
  while (enumerator_5431.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (tokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 128)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  tokenCode = search_into_").add_operation (constinArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 129)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("_").add_operation (enumerator_5431.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 130)).add_operation (GALGAS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 130)).add_operation (enumerator_5431.current_mAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 130)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 130)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 131)) ;
    enumerator_5431.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if tokenCode == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 133)) ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateSwiftCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 134)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 135)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalStructuredSendInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                               const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_0 = this ;
  cEnumerator_lexicalSendSearchListAST enumerator_6692 (temp_0.readProperty_mLexicalSendSearchList (), kENUMERATION_UP) ;
  while (enumerator_6692.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 154)) ;
    result_result.plusAssign_operation(GALGAS_string ("  token.mTokenCode = search_into_").add_operation (enumerator_6692.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 155)).add_operation (GALGAS_string (" (token.mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 155)).add_operation (enumerator_6692.current_mAttributeName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 155)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 155)) ;
    result_result.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 156)) ;
    enumerator_6692.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 158)) ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 159)) ;
  result_result.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 160)) ;
  result_result.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 161)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalDropInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalDropInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalDropInstructionAST temp_0 = this ;
  GALGAS_lexicalSentValueList joker_2187 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mTerminalName (), joker_2187, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 50)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalDropInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalDropInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 61)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 61)).add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-drop.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 61)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 61)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalDropInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                        const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalDropInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 70)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 70)).add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-drop.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 70)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 70)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalDropInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalDropInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                     const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalDropInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("enterDroppedTerminal (kToken_").add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-drop.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 88)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 88)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalErrorInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_lexicalErrorInstructionAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 51)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                        const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = NO ;\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                         const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                         Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = false\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalErrorInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                      const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalErrorInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 88)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 88)).add_operation (temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 88)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 88)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalLogInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalLogInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                    GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalLogInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                      const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                      Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("/* lexicalLog (LINE_AND_SOURCE_FILE) ; */\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalLogInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("/* lexicalLog (LINE_AND_SOURCE_FILE) */\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalLogInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalLogInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                    const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("lexicalLog (LINE_AND_SOURCE_FILE) ;\n") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRepeatInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRepeatInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalRepeatInstructionAST temp_0 = this ;
  cEnumerator_lexicalWhileBranchListAST enumerator_3008 (temp_0.readProperty_mLexicalWhileBranchList (), kENUMERATION_UP) ;
  while (enumerator_3008.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) enumerator_3008.current_mWhileExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 83)) ;
    GALGAS_lexicalTagMap var_tagMap_3147 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 84)) ;
    cEnumerator_lexicalInstructionListAST enumerator_3212 (enumerator_3008.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_3212.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_3212.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_3147, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 86)) ;
      enumerator_3212.gotoNextObject () ;
    }
    enumerator_3008.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_3355 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 89)) ;
  const GALGAS_lexicalRepeatInstructionAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_3418 (temp_1.readProperty_mRepeatedInstructionList (), kENUMERATION_UP) ;
  while (enumerator_3418.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_3418.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_3355, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 91)) ;
    enumerator_3418.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRepeatInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                         const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalRepeatInstructionAST temp_0 = this ;
  GALGAS_string var_loopVarName_4125 = GALGAS_string ("loop").add_operation (temp_0.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 103)).getter_string (SOURCE_FILE ("lexique-instruction-repeat.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 103)) ;
  result_outGeneratedCode = GALGAS_string ("BOOL ").add_operation (var_loopVarName_4125, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 104)).add_operation (GALGAS_string (" = YES ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 104)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("do {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 105)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 106)) ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_4342 (temp_1.readProperty_mRepeatedInstructionList (), kENUMERATION_UP) ;
  while (enumerator_4342.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_4342.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 109)) ;
    enumerator_4342.gotoNextObject () ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_2 = this ;
  cEnumerator_lexicalWhileBranchListAST enumerator_4545 (temp_2.readProperty_mLexicalWhileBranchList (), kENUMERATION_UP) ;
  while (enumerator_4545.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 114)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_4545.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 115)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 116)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 117)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_4836 (enumerator_4545.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_4836.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_4836.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 119)) ;
      enumerator_4836.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 121)) ;
    }
    if (enumerator_4545.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 123)) ;
    }
    enumerator_4545.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n  ").add_operation (var_loopVarName_4125, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 126)).add_operation (GALGAS_string (" = NO ;\n}\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 125)) ;
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 128)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}while (").add_operation (var_loopVarName_4125, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 129)).add_operation (GALGAS_string (" && scanningOk) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 129)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRepeatInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("while (loop && scanningOk) {\n") ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 140)) ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_0 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_5817 (temp_0.readProperty_mRepeatedInstructionList (), kENUMERATION_UP) ;
  while (enumerator_5817.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_5817.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 143)) ;
    enumerator_5817.gotoNextObject () ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_1 = this ;
  cEnumerator_lexicalWhileBranchListAST enumerator_6021 (temp_1.readProperty_mLexicalWhileBranchList (), kENUMERATION_UP) ;
  while (enumerator_6021.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 148)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_6021.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 149)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 150)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 151)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_6311 (enumerator_6021.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_6311.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6311.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 153)) ;
      enumerator_6311.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 155)) ;
    }
    if (enumerator_6021.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 157)) ;
    }
    enumerator_6021.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n  loop = false\n}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 159)) ;
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 162)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\nloop = true\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 163)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalRepeatInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRepeatInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                       const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("do {\n") ;
  {
  result_result.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 182)) ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_0 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_7545 (temp_0.readProperty_mRepeatedInstructionList (), kENUMERATION_UP) ;
  while (enumerator_7545.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7545.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 185)) ;
    enumerator_7545.gotoNextObject () ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_1 = this ;
  cEnumerator_lexicalWhileBranchListAST enumerator_7736 (temp_1.readProperty_mLexicalWhileBranchList (), kENUMERATION_UP) ;
  while (enumerator_7736.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 190)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_7736.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 191)) ;
    result_result.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 192)) ;
    {
    result_result.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 193)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_7970 (enumerator_7736.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_7970.hasCurrentObject ()) {
      result_result.plusAssign_operation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7970.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 195)) ;
      enumerator_7970.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 197)) ;
    }
    if (enumerator_7736.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 199)) ;
    }
    enumerator_7736.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string ("}else{\n  loop = false ;\n}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 201)) ;
  {
  result_result.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 204)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("}while (loop) ;\nloop = true ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 205)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRewindInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRewindInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalRewindInstructionAST temp_0 = this ;
  ioArgument_ioTagMap.method_searchKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 55)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = this ;
  GALGAS_lexicalSentValueList joker_2375 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_1.readProperty_mTerminalName (), joker_2375, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 56)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRewindInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                         const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalRewindInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("[self restoreScanningPoint: & locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 67)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 67)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 68)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 68)).add_operation (temp_1.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 68)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 68)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRewindInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                          const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalRewindInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("self.restoreScanningPoint (locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 77)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 77)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 78)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 78)).add_operation (temp_1.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 78)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 78)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalRewindInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRewindInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalRewindInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("mCurrentLocation = currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 95)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 95)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("mTokenEndLocation = endLocationForTag_").add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 96)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 96)) ;
  const GALGAS_lexicalRewindInstructionAST temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("mCurrentChar = currentCharForTag_").add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 97)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 97)) ;
  const GALGAS_lexicalRewindInstructionAST temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("token.mTokenCode = kToken_").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 98)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 98)) ;
  result_result.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 99)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateObjcCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateObjcCocoaRoutineArgument (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  GALGAS_lexicalTypeEnum var_lexicalType_6011 ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_lexicalType_6011, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 153)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_needsReferenceInInputOutputInCocoa (var_lexicalType_6011, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 155)).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 156)) ;
    }
  }
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_2 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("mLexicalAttribute_").add_operation (temp_2.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 158)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 158)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFormalInputArgumentAST generateObjcCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFormalInputArgumentAST::getter_generateObjcCocoaRoutineArgument (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalFormalInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = callExtensionGetter_generateObjcCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 166)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateSwiftCocoaRoutineArgument (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("&self.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 186)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFormalInputArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFormalInputArgumentAST::getter_generateSwiftCocoaRoutineArgument (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalFormalInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 194)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalAttributeInputOutputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputOutputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                          GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                          GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum var_attributeLexicalType_8801 ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_8801, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 211)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_8801.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputOutputArgumentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_8801, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 217)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 218)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 219)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 220)), fixItArray3  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 217)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 224)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalAttributeInputOutputArgumentAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualPassingModeLocation (), GALGAS_string ("the output mode (!) is required here, not an output/input mode"), fixItArray6  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 225)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFormalInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFormalInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                 GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalFormalInputArgumentAST temp_0 = this ;
  callExtensionMethod_checkLexicalRoutineCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), ioArgument_ioLexiqueAnalysisContext, inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 236)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 241)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFormalInputArgumentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualPassingModeLocation (), GALGAS_string ("the output/input mode (!\?) is required here, not an input mode"), fixItArray3  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 242)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRoutineCallInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRoutineCallInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                            GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_10560 ;
  GALGAS_stringlist var_routineErrorMessageList_10602 ;
  const GALGAS_lexicalRoutineCallInstructionAST temp_0 = this ;
  GALGAS_bool joker_10630 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalRoutineMessageMap ().method_searchKey (temp_0.readProperty_mRoutineName (), var_lexicalRoutineFormalArgumentList_10560, var_routineErrorMessageList_10602, joker_10630, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 251)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalRoutineCallInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, var_lexicalRoutineFormalArgumentList_10560.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 258)).objectCompare (temp_2.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 258)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalRoutineCallInstructionAST temp_3 = this ;
      const GALGAS_lexicalRoutineCallInstructionAST temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this lexical routine call names ").add_operation (temp_4.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 260)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 259)).add_operation (GALGAS_string (" actual argument(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 260)).add_operation (var_lexicalRoutineFormalArgumentList_10560.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 262)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 261)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 262)), fixItArray5  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 259)) ;
    }
  }
  const GALGAS_lexicalRoutineCallInstructionAST temp_6 = this ;
  cEnumerator_lexicalRoutineFormalArgumentList enumerator_11134 (var_lexicalRoutineFormalArgumentList_10560, kENUMERATION_UP) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_11175 (temp_6.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_11134.hasCurrentObject () && enumerator_11175.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRoutineCallArgument ((cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_11175.current_mLexicalRoutineActualArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_11134.current_mLexicalFormalArgumentMode (HERE), enumerator_11134.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 266)) ;
    enumerator_11134.gotoNextObject () ;
    enumerator_11175.gotoNextObject () ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalRoutineCallInstructionAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsNotEqual, var_routineErrorMessageList_10602.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 273)).objectCompare (temp_8.readProperty_mErrorMessageList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 273)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalRoutineCallInstructionAST temp_9 = this ;
      const GALGAS_lexicalRoutineCallInstructionAST temp_10 = this ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this lexical routine call names ").add_operation (temp_10.readProperty_mErrorMessageList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 275)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 274)).add_operation (GALGAS_string (" error message(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 275)).add_operation (var_routineErrorMessageList_10602.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 277)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 276)).add_operation (GALGAS_string (" error message(s)"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 277)), fixItArray11  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 274)) ;
    }
  }
  const GALGAS_lexicalRoutineCallInstructionAST temp_12 = this ;
  cEnumerator_lstringlist enumerator_11834 (temp_12.readProperty_mErrorMessageList (), kENUMERATION_UP) ;
  while (enumerator_11834.hasCurrentObject ()) {
    cMapElement_lexicalMessageMap * objectArray_11875 = (cMapElement_lexicalMessageMap *) ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, enumerator_11834.current_mValue (HERE), kSearchErrorMessage_lexicalMessageMap_searchKey  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 281)) ;
    if (nullptr != objectArray_11875) {
      macroValidSharedObject (objectArray_11875, cMapElement_lexicalMessageMap) ;
      objectArray_11875->mProperty_mMessageIsUsed = GALGAS_bool (true) ;
    }
    enumerator_11834.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRoutineCallInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                              const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalRoutineCallInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 295)).add_operation (GALGAS_string (" (& scanningOk"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 295)) ;
  const GALGAS_lexicalRoutineCallInstructionAST temp_1 = this ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_12568 (temp_1.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_12568.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateObjcCocoaRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_12568.current_mLexicalRoutineActualArgument (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 297)) ;
    enumerator_12568.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 299)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRoutineCallInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                               const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalRoutineCallInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 308)).add_operation (GALGAS_string (" (&scanningOk"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 308)) ;
  const GALGAS_lexicalRoutineCallInstructionAST temp_1 = this ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_13213 (temp_1.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_13213.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateSwiftCocoaRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_13213.current_mLexicalRoutineActualArgument (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 310)) ;
    enumerator_13213.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 312)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateRoutineArgument (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  result_result = GALGAS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 326)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFormalInputArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFormalInputArgumentAST::getter_generateRoutineArgument (Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalFormalInputArgumentAST temp_0 = this ;
  result_result = callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 333)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalRoutineCallInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRoutineCallInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                            const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalRoutineCallInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("::scanner_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 348)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 348)) ;
  const GALGAS_lexicalRoutineCallInstructionAST temp_1 = this ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_15021 (temp_1.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_15021.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_15021.current_mLexicalRoutineActualArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 350)) ;
    enumerator_15021.gotoNextObject () ;
  }
  const GALGAS_lexicalRoutineCallInstructionAST temp_2 = this ;
  cEnumerator_lstringlist enumerator_15173 (temp_2.readProperty_mErrorMessageList (), kENUMERATION_UP) ;
  while (enumerator_15173.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string (", gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 353)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 353)).add_operation (enumerator_15173.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 353)) ;
    enumerator_15173.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 355)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalSelectInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSelectInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalSelectInstructionAST temp_0 = this ;
  cEnumerator_lexicalSelectBranchListAST enumerator_3435 (temp_0.readProperty_mLexicalSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_3435.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) enumerator_3435.current_mSelectExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 96)) ;
    GALGAS_lexicalTagMap var_tagMap_3577 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 97)) ;
    cEnumerator_lexicalInstructionListAST enumerator_3642 (enumerator_3435.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_3642.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_3642.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_3577, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 99)) ;
      enumerator_3642.gotoNextObject () ;
    }
    enumerator_3435.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_3786 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 102)) ;
  const GALGAS_lexicalSelectInstructionAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_3849 (temp_1.readProperty_mDefaultInstructionList (), kENUMERATION_UP) ;
  while (enumerator_3849.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_3849.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_3786, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 104)) ;
    enumerator_3849.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSelectInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                         const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalSelectInstructionAST temp_0 = this ;
  cEnumerator_lexicalSelectBranchListAST enumerator_4495 (temp_0.readProperty_mLexicalSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_4495.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 120)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_4495.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 121)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 122)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 123)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_4789 (enumerator_4495.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_4789.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_4789.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 125)) ;
      enumerator_4789.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 127)) ;
    }
    if (enumerator_4495.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 129)) ;
    }
    enumerator_4495.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsStrictSup, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas", 132)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 133)) ;
      {
      result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 134)) ;
      }
      const GALGAS_lexicalSelectInstructionAST temp_3 = this ;
      cEnumerator_lexicalInstructionListAST enumerator_5210 (temp_3.readProperty_mDefaultInstructionList (), kENUMERATION_UP) ;
      while (enumerator_5210.hasCurrentObject ()) {
        result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_5210.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 136)) ;
        enumerator_5210.gotoNextObject () ;
      }
      {
      result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 138)) ;
      }
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 140)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSelectInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalSelectInstructionAST temp_0 = this ;
  cEnumerator_lexicalSelectBranchListAST enumerator_5840 (temp_0.readProperty_mLexicalSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_5840.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 153)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_5840.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 154)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 155)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 156)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_6133 (enumerator_5840.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_6133.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6133.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 158)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 158)) ;
      enumerator_6133.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 160)) ;
    }
    if (enumerator_5840.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 162)) ;
    }
    enumerator_5840.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsStrictSup, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas", 165)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 166)) ;
      {
      result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 167)) ;
      }
      const GALGAS_lexicalSelectInstructionAST temp_3 = this ;
      cEnumerator_lexicalInstructionListAST enumerator_6555 (temp_3.readProperty_mDefaultInstructionList (), kENUMERATION_UP) ;
      while (enumerator_6555.hasCurrentObject ()) {
        result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6555.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 169)) ;
        enumerator_6555.gotoNextObject () ;
      }
      {
      result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 171)) ;
      }
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 173)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalSelectInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
  const GALGAS_lexicalSelectInstructionAST temp_0 = this ;
  cEnumerator_lexicalSelectBranchListAST enumerator_7193 (temp_0.readProperty_mLexicalSelectBranchList (), kENUMERATION_UP) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 182)).isValidAndTrue () ;
  if (enumerator_7193.hasCurrentObject () && bool_1) {
    while (enumerator_7193.hasCurrentObject () && bool_1) {
      cEnumerator_lexicalInstructionListAST enumerator_7278 (enumerator_7193.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
      bool bool_2 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 183)).isValidAndTrue () ;
      if (enumerator_7278.hasCurrentObject () && bool_2) {
        while (enumerator_7278.hasCurrentObject () && bool_2) {
          result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_7278.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 184)) ;
          enumerator_7278.gotoNextObject () ;
          if (enumerator_7278.hasCurrentObject ()) {
            bool_2 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 183)).isValidAndTrue () ;
          }
        }
      }
      enumerator_7193.gotoNextObject () ;
      if (enumerator_7193.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 182)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_lexicalSelectInstructionAST temp_3 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_7426 (temp_3.readProperty_mDefaultInstructionList (), kENUMERATION_UP) ;
  bool bool_4 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 187)).isValidAndTrue () ;
  if (enumerator_7426.hasCurrentObject () && bool_4) {
    while (enumerator_7426.hasCurrentObject () && bool_4) {
      result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_7426.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 188)) ;
      enumerator_7426.gotoNextObject () ;
      if (enumerator_7426.hasCurrentObject ()) {
        bool_4 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 187)).isValidAndTrue () ;
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

GALGAS_string cPtr_lexicalSelectInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                       const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalSelectInstructionAST temp_0 = this ;
  cEnumerator_lexicalSelectBranchListAST enumerator_7913 (temp_0.readProperty_mLexicalSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_7913.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 202)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_7913.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 203)) ;
    result_result.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 204)) ;
    {
    result_result.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 205)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_8150 (enumerator_7913.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_8150.hasCurrentObject ()) {
      result_result.plusAssign_operation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8150.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 207)) ;
      enumerator_8150.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 209)) ;
    }
    if (enumerator_7913.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 211)) ;
    }
    enumerator_7913.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsStrictSup, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas", 214)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 215)) ;
      {
      result_result.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 216)) ;
      }
      const GALGAS_lexicalSelectInstructionAST temp_3 = this ;
      cEnumerator_lexicalInstructionListAST enumerator_8519 (temp_3.readProperty_mDefaultInstructionList (), kENUMERATION_UP) ;
      while (enumerator_8519.hasCurrentObject ()) {
        result_result.plusAssign_operation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8519.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 218)) ;
        enumerator_8519.gotoNextObject () ;
      }
      {
      result_result.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 220)) ;
      }
    }
  }
  result_result.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 222)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalSimpleSendInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSimpleSendInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                           GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalSimpleSendInstructionAST temp_0 = this ;
  GALGAS_lexicalSentValueList joker_2190 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mSentTerminal (), joker_2190, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 48)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSimpleSendInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                             const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 59)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 59)).add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 59)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 59)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSimpleSendInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                              const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 68)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 68)).add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 68)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 68)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalSimpleSendInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSimpleSendInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                           const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)) ;
  result_result.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 87)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalTagInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalTagInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                    GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_lexicalTagInstructionAST temp_0 = this ;
  ioArgument_ioTagMap.setter_insertKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 50)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalTagInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                      const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalTagInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("scanningPointStructForCocoa locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 61)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 61)) ;
  const GALGAS_lexicalTagInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("[self saveScanningPoint: & locationForTag_").add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 62)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 62)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalTagInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalTagInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("let locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 71)).add_operation (GALGAS_string (" = self.savedScanningPoint ()\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 71)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalTagInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalTagInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                    const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTagInstructionAST temp_0 = this ;
  const GALGAS_lexicalTagInstructionAST temp_1 = this ;
  const GALGAS_lexicalTagInstructionAST temp_2 = this ;
  result_result = GALGAS_string ("const LocationInSource currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 88)).add_operation (GALGAS_string (" = mCurrentLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 88)).add_operation (GALGAS_string ("const LocationInSource endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 88)).add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 89)).add_operation (GALGAS_string (" = mTokenEndLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 89)).add_operation (GALGAS_string ("const utf32 currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 89)).add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 90)).add_operation (GALGAS_string (" = mCurrentChar ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 90)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalWarningInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalWarningInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                        GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_lexicalWarningInstructionAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 50)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalWarningInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                          const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                          Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalWarningInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                           const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                           Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalWarningInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalWarningInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                        const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalWarningInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("lexicalWarning (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 87)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 87)).add_operation (temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 87)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 87)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_optionComponentDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("optionCompilation.galgas", 168)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                   const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                   const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                   GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_commandLineOptionMap var_boolOptionMap_6974 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 182)) ;
  GALGAS_commandLineOptionMap var_uintOptionMap_7021 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 183)) ;
  GALGAS_commandLineOptionMap var_stringOptionMap_7068 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 184)) ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_7117 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 185)) ;
  GALGAS_stringset var_optionNameSet_7148 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("optionCompilation.galgas", 186)) ;
  const GALGAS_optionComponentDeclarationAST temp_0 = this ;
  cEnumerator_commandLineOptionListAST enumerator_7310 (temp_0.readProperty_mOptions (), kENUMERATION_UP) ;
  while (enumerator_7310.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_optionNameSet_7148.getter_hasKey (enumerator_7310.current_mOptionInternalName (HERE).readProperty_string () COMMA_SOURCE_FILE ("optionCompilation.galgas", 188)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_7310.current_mOptionInternalName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_7310.current_mOptionInternalName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 189)).add_operation (GALGAS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 189)), fixItArray2  COMMA_SOURCE_FILE ("optionCompilation.galgas", 189)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, enumerator_7310.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("bool"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          var_boolOptionMap_6974.setter_insertKey (enumerator_7310.current_mOptionInternalName (HERE), enumerator_7310.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_7310.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_7310.current_mOptionComment (HERE).readProperty_string (), GALGAS_string ("false"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 191)) ;
          }
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsNotEqual, enumerator_7310.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 198)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_7310.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @bool option cannot have a default value (default value is always false)"), fixItArray5  COMMA_SOURCE_FILE ("optionCompilation.galgas", 199)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, enumerator_7310.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            {
            GALGAS_string temp_7 ;
            const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_7310.current_mOptionDefaultValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_8) {
              temp_7 = GALGAS_string ("0") ;
            }else if (kBoolFalse == test_8) {
              temp_7 = enumerator_7310.current_mOptionDefaultValue (HERE).readProperty_string () ;
            }
            var_uintOptionMap_7021.setter_insertKey (enumerator_7310.current_mOptionInternalName (HERE), enumerator_7310.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_7310.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_7310.current_mOptionComment (HERE).readProperty_string (), temp_7, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 202)) ;
            }
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsEqual, enumerator_7310.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 209)))).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_7310.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @uint option default value cannot be an @string value"), fixItArray10  COMMA_SOURCE_FILE ("optionCompilation.galgas", 210)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = GALGAS_bool (kIsEqual, enumerator_7310.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_11) {
              {
              var_stringOptionMap_7068.setter_insertKey (enumerator_7310.current_mOptionInternalName (HERE), enumerator_7310.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_7310.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_7310.current_mOptionComment (HERE).readProperty_string (), enumerator_7310.current_mOptionDefaultValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 213)) ;
              }
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsEqual, enumerator_7310.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 220)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (enumerator_7310.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @string option default value cannot be an @uint value"), fixItArray13  COMMA_SOURCE_FILE ("optionCompilation.galgas", 221)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_11) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (kIsEqual, enumerator_7310.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("stringlist"))).boolEnum () ;
              if (kBoolTrue == test_14) {
                {
                var_stringListOptionMap_7117.setter_insertKey (enumerator_7310.current_mOptionInternalName (HERE), enumerator_7310.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_7310.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_7310.current_mOptionComment (HERE).readProperty_string (), enumerator_7310.current_mOptionDefaultValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 224)) ;
                }
                enumGalgasBool test_15 = kBoolTrue ;
                if (kBoolTrue == test_15) {
                  test_15 = GALGAS_bool (kIsNotEqual, enumerator_7310.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 231)))).boolEnum () ;
                  if (kBoolTrue == test_15) {
                    TC_Array <C_FixItDescription> fixItArray16 ;
                    inCompiler->emitSemanticError (enumerator_7310.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @stringlist option cannot accept default value"), fixItArray16  COMMA_SOURCE_FILE ("optionCompilation.galgas", 232)) ;
                  }
                }
              }
            }
            if (kBoolFalse == test_14) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_7310.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("only the @bool, @uint or @string types are allowed here"), fixItArray17  COMMA_SOURCE_FILE ("optionCompilation.galgas", 235)) ;
            }
          }
        }
      }
    }
    var_optionNameSet_7148.addAssign_operation (enumerator_7310.current_mOptionInternalName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 237)) ;
    enumerator_7310.gotoNextObject () ;
  }
  {
  const GALGAS_optionComponentDeclarationAST temp_18 = this ;
  const GALGAS_optionComponentDeclarationAST temp_19 = this ;
  ioArgument_ioSemanticContext.mProperty_mOptionComponentMapForSemanticAnalysis.setter_insertKey (temp_18.readProperty_mOptionComponentName (), temp_19.readProperty_isPredefined (), var_boolOptionMap_6974, var_uintOptionMap_7021, var_stringOptionMap_7068, var_stringListOptionMap_7117, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 240)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_optionComponentDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_10537 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 264)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10537, var_nameForUsefulness_10537, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 265)) ;
  }
  GALGAS_bool var_optionIsPredefined_10814 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_10864 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_10909 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_10954 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_11001 ;
  const GALGAS_optionComponentDeclarationAST temp_1 = this ;
  constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionIsPredefined_10814, var_boolOptionMap_10864, var_uintOptionMap_10909, var_stringOptionMap_10954, var_stringListOptionMap_11001, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 267)) ;
  const GALGAS_optionComponentDeclarationAST temp_2 = this ;
  const GALGAS_optionComponentDeclarationAST temp_3 = this ;
  const GALGAS_optionComponentDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (temp_2.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 277)), GALGAS_optionComponentForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 280)), var_optionIsPredefined_10814, temp_4.readProperty_mOptionComponentName ().readProperty_string (), var_boolOptionMap_10864, var_uintOptionMap_10909, var_stringOptionMap_10954, var_stringListOptionMap_11001  COMMA_SOURCE_FILE ("optionCompilation.galgas", 278))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 276)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_optionComponentForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_optionComponentForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_mIsPredefined () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_optionComponentForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  const GALGAS_optionComponentForGeneration temp_0 = this ;
  GALGAS_headerKind temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mIsPredefined ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("optionCompilation.galgas", 312)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("optionCompilation.galgas", 312)) ;
  }
  result_result = temp_1 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GALGAS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionComponentForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mIsPredefined ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outHeader = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_optionComponentForGeneration temp_2 = this ;
    const GALGAS_optionComponentForGeneration temp_3 = this ;
    const GALGAS_optionComponentForGeneration temp_4 = this ;
    const GALGAS_optionComponentForGeneration temp_5 = this ;
    const GALGAS_optionComponentForGeneration temp_6 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, temp_2.readProperty_mOptionComponentName (), temp_3.readProperty_mBoolOptionMap (), temp_4.readProperty_mUIntOptionMap (), temp_5.readProperty_mStringOptionMap (), temp_6.readProperty_mStringListOptionMap () COMMA_SOURCE_FILE ("optionCompilation.galgas", 324))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionComponentForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mIsPredefined ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outImplementation = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_optionComponentForGeneration temp_2 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 344))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 344)) ;
    const GALGAS_optionComponentForGeneration temp_3 = this ;
    const GALGAS_optionComponentForGeneration temp_4 = this ;
    const GALGAS_optionComponentForGeneration temp_5 = this ;
    const GALGAS_optionComponentForGeneration temp_6 = this ;
    const GALGAS_optionComponentForGeneration temp_7 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, temp_3.readProperty_mOptionComponentName (), temp_4.readProperty_mBoolOptionMap (), temp_5.readProperty_mUIntOptionMap (), temp_6.readProperty_mStringOptionMap (), temp_7.readProperty_mStringListOptionMap () COMMA_SOURCE_FILE ("optionCompilation.galgas", 345))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendSpecificFiles'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendSpecificFiles (const GALGAS_string constinArgument_inProductDirectory,
                                                                    GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                    GALGAS_stringlist & ioArgument_ioCocoaProductFileList,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("optionCompilation.galgas", 363)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      const GALGAS_optionComponentForGeneration temp_2 = this ;
      test_1 = temp_2.readProperty_mIsPredefined ().operator_not (SOURCE_FILE ("optionCompilation.galgas", 363)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionComponentForGeneration temp_3 = this ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 364)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 364))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 364)) ;
      {
      const GALGAS_optionComponentForGeneration temp_4 = this ;
      const GALGAS_optionComponentForGeneration temp_5 = this ;
      const GALGAS_optionComponentForGeneration temp_6 = this ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_4.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 367)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 367)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (inCompiler, temp_5.readProperty_mOptionComponentName () COMMA_SOURCE_FILE ("optionCompilation.galgas", 371))), GALGAS_string ("\n\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (inCompiler, temp_6.readProperty_mOptionComponentName () COMMA_SOURCE_FILE ("optionCompilation.galgas", 375))), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 365)) ;
      }
      const GALGAS_optionComponentForGeneration temp_7 = this ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_7.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 381)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 381))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 381)) ;
      const GALGAS_optionComponentForGeneration temp_8 = this ;
      ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("option-").add_operation (temp_8.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 382)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 382))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 382)) ;
      {
      const GALGAS_optionComponentForGeneration temp_9 = this ;
      const GALGAS_optionComponentForGeneration temp_10 = this ;
      const GALGAS_optionComponentForGeneration temp_11 = this ;
      const GALGAS_optionComponentForGeneration temp_12 = this ;
      const GALGAS_optionComponentForGeneration temp_13 = this ;
      const GALGAS_optionComponentForGeneration temp_14 = this ;
      const GALGAS_optionComponentForGeneration temp_15 = this ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_9.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 385)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 385)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (inCompiler, GALGAS_string ("option-").add_operation (temp_10.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 390)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 390)), temp_11.readProperty_mOptionComponentName (), temp_12.readProperty_mBoolOptionMap (), temp_13.readProperty_mUIntOptionMap (), temp_14.readProperty_mStringOptionMap (), temp_15.readProperty_mStringListOptionMap () COMMA_SOURCE_FILE ("optionCompilation.galgas", 389))), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 383)) ;
      }
      const GALGAS_optionComponentForGeneration temp_16 = this ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_16.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 402)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 402))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 402)) ;
      const GALGAS_optionComponentForGeneration temp_17 = this ;
      ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("option-").add_operation (temp_17.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 403)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 403))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 403)) ;
      {
      const GALGAS_optionComponentForGeneration temp_18 = this ;
      const GALGAS_optionComponentForGeneration temp_19 = this ;
      const GALGAS_optionComponentForGeneration temp_20 = this ;
      const GALGAS_optionComponentForGeneration temp_21 = this ;
      const GALGAS_optionComponentForGeneration temp_22 = this ;
      const GALGAS_optionComponentForGeneration temp_23 = this ;
      const GALGAS_optionComponentForGeneration temp_24 = this ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_18.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 406)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 406)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftCocoa (inCompiler, GALGAS_string ("option-").add_operation (temp_19.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 411)).add_operation (GALGAS_string ("-swift-cocoa"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 411)), temp_20.readProperty_mOptionComponentName (), temp_21.readProperty_mBoolOptionMap (), temp_22.readProperty_mUIntOptionMap (), temp_23.readProperty_mStringOptionMap (), temp_24.readProperty_mStringListOptionMap () COMMA_SOURCE_FILE ("optionCompilation.galgas", 410))), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 404)) ;
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

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (Compiler * /* inCompiler */,
                                                                                  const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                  const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n//\n//                               Bool options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_388_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_388 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_388.hasCurrentObject ()) {
      result.addString ("extern C_BoolCommandLineOption gOption_") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_388.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue ()) ;
      result.addString (" ;\n\n") ;
      index_388_.increment () ;
      enumerator_388.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//                               UInt options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_919_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_919 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_919.hasCurrentObject ()) {
      result.addString ("extern C_UIntCommandLineOption gOption_") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_919.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue ()) ;
      result.addString (" ;\n\n") ;
      index_919_.increment () ;
      enumerator_919.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String options                                                   \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_1452_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1452 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1452.hasCurrentObject ()) {
      result.addString ("extern C_StringCommandLineOption gOption_") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_1452.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue ()) ;
      result.addString (" ;\n\n") ;
      index_1452_.increment () ;
      enumerator_1452.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String List options                                              \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_1992_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1992 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1992.hasCurrentObject ()) {
      result.addString ("extern C_StringListCommandLineOption gOption_") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_1992.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue ()) ;
      result.addString (" ;\n\n") ;
      index_1992_.increment () ;
      enumerator_1992.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (Compiler * /* inCompiler */,
                                                                                            const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//                               Bool options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_387_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_387 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_387.hasCurrentObject ()) {
      result.addString ("C_BoolCommandLineOption gOption_") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_387.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue ()) ;
      result.addString (" (\"") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.addString ("\",\n                                         ") ;
      result.addString (enumerator_387.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 9)).stringValue ()) ;
      result.addString (",\n                                         ") ;
      result.addString (enumerator_387.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).stringValue ()) ;
      result.addString (",\n                                         ") ;
      result.addString (enumerator_387.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 11)).stringValue ()) ;
      result.addString (",\n                                         ") ;
      result.addString (enumerator_387.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 12)).stringValue ()) ;
      result.addString (") ;\n\n") ;
      index_387_.increment () ;
      enumerator_387.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//                               UInt options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_1323_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1323 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1323.hasCurrentObject ()) {
      result.addString ("C_UIntCommandLineOption gOption_") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_1323.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue ()) ;
      result.addString (" (\"") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.addString ("\",\n                                         ") ;
      result.addString (enumerator_1323.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.addString (",\n                                         ") ;
      result.addString (enumerator_1323.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).stringValue ()) ;
      result.addString (",\n                                         ") ;
      result.addString (enumerator_1323.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 24)).stringValue ()) ;
      result.addString (",\n                                         ") ;
      result.addString (enumerator_1323.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 25)).stringValue ()) ;
      result.addString (",\n                                         ") ;
      result.addString (enumerator_1323.current_mDefaultValue (HERE).stringValue ()) ;
      result.addString (") ;\n\n") ;
      index_1323_.increment () ;
      enumerator_1323.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String options                                                   \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_2326_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2326 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2326.hasCurrentObject ()) {
      result.addString ("C_StringCommandLineOption gOption_") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_2326.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue ()) ;
      result.addString (" (\"") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.addString ("\",\n                                         ") ;
      result.addString (enumerator_2326.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 36)).stringValue ()) ;
      result.addString (",\n                                         ") ;
      result.addString (enumerator_2326.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).stringValue ()) ;
      result.addString (",\n                                         ") ;
      result.addString (enumerator_2326.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 38)).stringValue ()) ;
      result.addString (",\n                                         ") ;
      result.addString (enumerator_2326.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 39)).stringValue ()) ;
      result.addString (",\n                                         ") ;
      result.addString (enumerator_2326.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 40)).stringValue ()) ;
      result.addString (") ;\n\n") ;
      index_2326_.increment () ;
      enumerator_2326.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String List options                                              \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_3377_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_3377 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3377.hasCurrentObject ()) {
      result.addString ("C_StringListCommandLineOption gOption_") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_3377.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue ()) ;
      result.addString (" (\"") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.addString ("\",\n                                         ") ;
      result.addString (enumerator_3377.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 50)).stringValue ()) ;
      result.addString (",\n                                         ") ;
      result.addString (enumerator_3377.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).stringValue ()) ;
      result.addString (",\n                                         ") ;
      result.addString (enumerator_3377.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 52)).stringValue ()) ;
      result.addString (",\n                                         ") ;
      result.addString (enumerator_3377.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 53)).stringValue ()) ;
      result.addString (") ;\n\n") ;
      index_3377_.increment () ;
      enumerator_3377.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("#ifndef ") ;
  result.addString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
  result.addString ("_FOR_COCOA_DEFINED\n#define ") ;
  result.addString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
  result.addString ("_FOR_COCOA_DEFINED\n\n//--------------------------------------------------------------------------------------------------\n\n#import <Cocoa/Cocoa.h>\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n\nvoid enterOptionsFor_") ;
  result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-cocoa-zone3.galgasTemplate", 4)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("NSMutableArray * ioBoolOptionArray,\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("NSMutableArray * ioUIntOptionArray,\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("NSMutableArray * ioStringOptionArray,\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("NSMutableArray * ioStringListOptionArray) ;\n\n//--------------------------------------------------------------------------------------------------\n\n#endif\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationCocoa'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (Compiler * inCompiler,
                                                                                       const GALGAS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                       const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n\n#import \"") ;
  result.addString (in_OPTION_5F_HEADER_5F_FILE_5F_NAME.stringValue ()) ;
  result.addString (".h\"\n#import \"OC_GGS_CommandLineOption.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterOptionsFor_") ;
  result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 8)).stringValue ()) ;
  result.addString (" (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("NSMutableArray * ioBoolOptionArray,\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("NSMutableArray * ioUIntOptionArray,\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("NSMutableArray * ioStringOptionArray,\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("NSMutableArray * ioStringListOptionArray) {\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_BOOL_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_UINT_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_LIST_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.addString ("  OC_GGS_CommandLineOption * option ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_811_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_811 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_811.hasCurrentObject ()) {
      result.addString ("  option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 17)).stringValue ()) ;
      result.addString ("\n    identifier:@") ;
      result.addString (enumerator_811.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 18)).stringValue ()) ;
      result.addString ("\n    commandChar:") ;
      result.addString (enumerator_811.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).stringValue ()) ;
      result.addString ("\n    commandString:@") ;
      result.addString (enumerator_811.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 20)).stringValue ()) ;
      result.addString ("\n    comment:@") ;
      result.addString (enumerator_811.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 21)).stringValue ()) ;
      result.addString ("\n    defaultValue:@\"\"\n  ] ;\n  [ioBoolOptionArray addObject:option] ;\n") ;
      index_811_.increment () ;
      enumerator_811.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1409_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1409 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1409.hasCurrentObject ()) {
      result.addString ("  option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 28)).stringValue ()) ;
      result.addString ("\n    identifier:@") ;
      result.addString (enumerator_1409.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 29)).stringValue ()) ;
      result.addString ("\n    commandChar:") ;
      result.addString (enumerator_1409.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).stringValue ()) ;
      result.addString ("\n    commandString:@") ;
      result.addString (enumerator_1409.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 31)).stringValue ()) ;
      result.addString ("\n    comment:@") ;
      result.addString (enumerator_1409.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 32)).stringValue ()) ;
      result.addString ("\n    defaultValue:@") ;
      result.addString (enumerator_1409.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 33)).stringValue ()) ;
      result.addString ("\n  ] ;\n  [ioUIntOptionArray addObject:option] ;\n") ;
      index_1409_.increment () ;
      enumerator_1409.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2064_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2064 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2064.hasCurrentObject ()) {
      result.addString ("  option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 39)).stringValue ()) ;
      result.addString ("\n    identifier:@") ;
      result.addString (enumerator_2064.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 40)).stringValue ()) ;
      result.addString ("\n    commandChar:") ;
      result.addString (enumerator_2064.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).stringValue ()) ;
      result.addString ("\n    commandString:@") ;
      result.addString (enumerator_2064.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 42)).stringValue ()) ;
      result.addString ("\n    comment:@") ;
      result.addString (enumerator_2064.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 43)).stringValue ()) ;
      result.addString ("\n    defaultValue:@") ;
      result.addString (enumerator_2064.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 44)).stringValue ()) ;
      result.addString ("\n  ] ;\n  [ioStringOptionArray addObject:option] ;\n") ;
      index_2064_.increment () ;
      enumerator_2064.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2726_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2726 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2726.hasCurrentObject ()) {
      result.addString ("  option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 50)).stringValue ()) ;
      result.addString ("\n    identifier:@") ;
      result.addString (enumerator_2726.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 51)).stringValue ()) ;
      result.addString ("\n    commandChar:") ;
      result.addString (enumerator_2726.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).stringValue ()) ;
      result.addString ("\n    commandString:@") ;
      result.addString (enumerator_2726.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 53)).stringValue ()) ;
      result.addString ("\n    comment:@") ;
      result.addString (enumerator_2726.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 54)).stringValue ()) ;
      result.addString ("\n    defaultValue:@") ;
      result.addString (enumerator_2726.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 55)).stringValue ()) ;
      result.addString ("\n  ] ;\n  [ioStringListOptionArray addObject:option] ;\n") ;
      index_2726_.increment () ;
      enumerator_2726.gotoNextObject () ;
    }
  }
  result.addString ("}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationSwiftCocoa'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftCocoa (Compiler * inCompiler,
                                                                                            const GALGAS_string & /* in_OPTION_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                            const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n\nfunc enterOptions (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("_ ioBoolOptionArray : inout [SWIFT_CommandLineOption],\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("_ ioUIntOptionArray : inout [SWIFT_CommandLineOption],\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("_ ioStringOptionArray : inout [SWIFT_CommandLineOption],\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("_ ioStringListOptionArray : inout [SWIFT_CommandLineOption]) {\n") ;
  GALGAS_uint index_481_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_481 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_481.hasCurrentObject ()) {
      result.addString ("  ioBoolOptionArray.append (SWIFT_CommandLineOption (\n    domainName: ") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 10)).stringValue ()) ;
      result.addString (",\n    identifier: ") ;
      result.addString (enumerator_481.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 11)).stringValue ()) ;
      result.addString (",\n    commandChar: ") ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_481.current_mOptionChar (HERE).objectCompare (GALGAS_char (TO_UNICODE (0)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.addString (GALGAS_string ("\"\"").stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.addString (GALGAS_string ("\"").add_operation (enumerator_481.current_mOptionChar (HERE).getter_string (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 12)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 12)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.addString (",\n    commandString: ") ;
      result.addString (enumerator_481.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 13)).stringValue ()) ;
      result.addString (",\n    comment: ") ;
      result.addString (enumerator_481.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 14)).stringValue ()) ;
      result.addString (",\n    defaultValue: \"\"\n  ))\n") ;
      index_481_.increment () ;
      enumerator_481.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1090_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1090 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1090.hasCurrentObject ()) {
      result.addString ("  ioUIntOptionArray.append (SWIFT_CommandLineOption (\n    domainName: ") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 20)).stringValue ()) ;
      result.addString (",\n    identifier: ") ;
      result.addString (enumerator_1090.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 21)).stringValue ()) ;
      result.addString (",\n    commandChar: ") ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1090.current_mOptionChar (HERE).objectCompare (GALGAS_char (TO_UNICODE (0)))).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.addString (GALGAS_string ("\"\"").stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.addString (GALGAS_string ("\"").add_operation (enumerator_1090.current_mOptionChar (HERE).getter_string (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 22)), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 22)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 22)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.addString (",\n    commandString: ") ;
      result.addString (enumerator_1090.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 23)).stringValue ()) ;
      result.addString (",\n    comment: ") ;
      result.addString (enumerator_1090.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 24)).stringValue ()) ;
      result.addString (",\n    defaultValue: ") ;
      result.addString (enumerator_1090.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 25)).stringValue ()) ;
      result.addString ("\n  ))\n") ;
      index_1090_.increment () ;
      enumerator_1090.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1756_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1756 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1756.hasCurrentObject ()) {
      result.addString ("  ioStringOptionArray.append (SWIFT_CommandLineOption (\n    domainName: ") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 30)).stringValue ()) ;
      result.addString (",\n    identifier: ") ;
      result.addString (enumerator_1756.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 31)).stringValue ()) ;
      result.addString (",\n    commandChar: ") ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1756.current_mOptionChar (HERE).objectCompare (GALGAS_char (TO_UNICODE (0)))).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.addString (GALGAS_string ("\"\"").stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.addString (GALGAS_string ("\"").add_operation (enumerator_1756.current_mOptionChar (HERE).getter_string (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 32)), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 32)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 32)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.addString (",\n    commandString: ") ;
      result.addString (enumerator_1756.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 33)).stringValue ()) ;
      result.addString (",\n    comment: ") ;
      result.addString (enumerator_1756.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 34)).stringValue ()) ;
      result.addString (",\n    defaultValue: ") ;
      result.addString (enumerator_1756.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 35)).stringValue ()) ;
      result.addString ("\n  ))\n") ;
      index_1756_.increment () ;
      enumerator_1756.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2429_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2429 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2429.hasCurrentObject ()) {
      result.addString ("  ioStringListOptionArray.append (SWIFT_CommandLineOption (\n    domainName: ") ;
      result.addString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 40)).stringValue ()) ;
      result.addString (",\n    identifier: ") ;
      result.addString (enumerator_2429.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 41)).stringValue ()) ;
      result.addString (",\n    commandChar: ") ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2429.current_mOptionChar (HERE).objectCompare (GALGAS_char (TO_UNICODE (0)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.addString (GALGAS_string ("\"\"").stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.addString (GALGAS_string ("\"").add_operation (enumerator_2429.current_mOptionChar (HERE).getter_string (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 42)), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 42)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 42)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.addString (",\n    commandString: ") ;
      result.addString (enumerator_2429.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 43)).stringValue ()) ;
      result.addString (",\n    comment: ") ;
      result.addString (enumerator_2429.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 44)).stringValue ()) ;
      result.addString (",\n    defaultValue: ") ;
      result.addString (enumerator_2429.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 45)).stringValue ()) ;
      result.addString ("\n  ))\n") ;
      index_2429_.increment () ;
      enumerator_2429.gotoNextObject () ;
    }
  }
  result.addString ("  ioBoolOptionArray.append (SWIFT_CommandLineOption (\n    domainName: \"galgas_cli_options\",\n    identifier: \"quiet_output\",\n    commandChar: \"q\",\n    commandString: \"quiet\",\n    comment: \"Quiet output\",\n    defaultValue: \"\"\n  ))\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAllGuiComponentFromASTGalgas3??!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33__3F__3F__21_ (const GALGAS_galgasGUIComponentListAST constinArgument_inGuiComponentListAST,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  GALGAS_optionComponentMapForGeneration & outArgument_outOptionComponentMapForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionComponentMapForGeneration.drop () ; // Release 'out' argument
  outArgument_outOptionComponentMapForGeneration = GALGAS_optionComponentMapForGeneration::constructor_emptyMap (SOURCE_FILE ("guiCompilation.galgas", 398)) ;
  cEnumerator_galgasGUIComponentListAST enumerator_13349 (constinArgument_inGuiComponentListAST, kENUMERATION_UP) ;
  while (enumerator_13349.hasCurrentObject ()) {
    {
    routine_guiComponentSemanticAnalysis_3F__3F__26_ (enumerator_13349.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 400)) ;
    }
    enumerator_13349.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'guiComponentSemanticAnalysis??&'
//
//--------------------------------------------------------------------------------------------------

void routine_guiComponentSemanticAnalysis_3F__3F__26_ (const GALGAS_galgasGUIComponentListAST_2D_element constinArgument_inGUIComponentAST,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       GALGAS_optionComponentMapForGeneration & ioArgument_ioOptionComponentMapForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_string ().objectCompare (GALGAS_string ("cocoa"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_location (), GALGAS_string ("the gui name should be 'cocoa'"), fixItArray1  COMMA_SOURCE_FILE ("guiCompilation.galgas", 414)) ;
    }
  }
  GALGAS_guiAnalysisContext var_context_14102 = GALGAS_guiAnalysisContext::constructor_new (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 417)) ;
  var_context_14102.setter_setMProjectIndexingDescriptorList (constinArgument_inGUIComponentAST.readProperty_mProjectIndexingDescriptorList () COMMA_SOURCE_FILE ("guiCompilation.galgas", 418)) ;
  cEnumerator_lstringlist enumerator_14258 (constinArgument_inGUIComponentAST.readProperty_mImportedOptionList (), kENUMERATION_UP) ;
  while (enumerator_14258.hasCurrentObject ()) {
    GALGAS_bool joker_14402_5 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_14402_4 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_14402_3 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_14402_2 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_14402_1 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (enumerator_14258.current_mValue (HERE), joker_14402_5, joker_14402_4, joker_14402_3, joker_14402_2, joker_14402_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 421)) ;
    var_context_14102.mProperty_mImportedOptionComponentList.addAssign_operation (enumerator_14258.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 425)) ;
    enumerator_14258.gotoNextObject () ;
  }
  GALGAS_bool var_runOptionDefined_14509 = GALGAS_bool (false) ;
  cEnumerator_guiSimpleAttributeListAST enumerator_14546 (constinArgument_inGUIComponentAST.readProperty_mGlobalSimpleAttributeList (), kENUMERATION_UP) ;
  while (enumerator_14546.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_14546.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("run"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_runOptionDefined_14509.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_14546.current_mKey (HERE).readProperty_location (), GALGAS_string ("option already defined"), fixItArray4  COMMA_SOURCE_FILE ("guiCompilation.galgas", 432)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsEqual, enumerator_14546.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_14546.current_mValue (HERE).readProperty_location (), GALGAS_string ("run option string should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("guiCompilation.galgas", 434)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_context_14102.setter_setMBuildRunOption (enumerator_14546.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("guiCompilation.galgas", 436)) ;
            var_runOptionDefined_14509 = GALGAS_bool (true) ;
          }
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsEqual, enumerator_14546.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("nibAndMainClass"))).boolEnum () ;
        if (kBoolTrue == test_7) {
          cEnumerator_stringlist enumerator_15034 (enumerator_14546.current_mValue (HERE).readProperty_string ().getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas", 440)), kENUMERATION_UP) ;
          while (enumerator_15034.hasCurrentObject ()) {
            var_context_14102.mProperty_mNibAndClassList.addAssign_operation (enumerator_15034.current (HERE).readProperty_mValue ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 441)) ;
            enumerator_15034.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticWarning (enumerator_14546.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_14546.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 444)).add_operation (GALGAS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 444)), fixItArray8  COMMA_SOURCE_FILE ("guiCompilation.galgas", 444)) ;
      }
    }
    enumerator_14546.gotoNextObject () ;
  }
  cEnumerator_withLexiqueListAST enumerator_15285 (constinArgument_inGUIComponentAST.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
  GALGAS_uint index_15240 ((uint32_t) 0) ;
  while (enumerator_15285.hasCurrentObject ()) {
    GALGAS_terminalMap var_terminalMap_15502 ;
    GALGAS_lexicalStyleListAST var_lexicalStyleListAST_15535 ;
    GALGAS_bool joker_15475 ; // Joker input parameter
    GALGAS_indexingListAST joker_15520_3 ; // Joker input parameter
    GALGAS_terminalDeclarationListAST joker_15520_2 ; // Joker input parameter
    GALGAS_lexicalAttributeListAST joker_15520_1 ; // Joker input parameter
    GALGAS_lexicalListDeclarationListAST joker_15561 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (enumerator_15285.current_mLexiqueFileName (HERE), joker_15475, var_terminalMap_15502, joker_15520_3, joker_15520_2, joker_15520_1, var_lexicalStyleListAST_15535, joker_15561, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 450)) ;
    GALGAS_stringset var_terminalSymbolSet_15611 = var_terminalMap_15502.getter_keySet (SOURCE_FILE ("guiCompilation.galgas", 459)) ;
    cEnumerator_guiLabelListAST enumerator_15697 (enumerator_15285.current_mLabels (HERE), kENUMERATION_UP) ;
    while (enumerator_15697.hasCurrentObject ()) {
      cEnumerator_terminalLabelListAST enumerator_15734 (enumerator_15697.current_mTerminalList (HERE), kENUMERATION_UP) ;
      while (enumerator_15734.hasCurrentObject ()) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_terminalSymbolSet_15611.getter_hasKey (enumerator_15734.current_mTerminal (HERE).readProperty_string () COMMA_SOURCE_FILE ("guiCompilation.galgas", 463)).operator_not (SOURCE_FILE ("guiCompilation.galgas", 463)).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_15734.current_mTerminal (HERE).readProperty_location (), GALGAS_string ("the '$").add_operation (enumerator_15734.current_mTerminal (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 464)).add_operation (GALGAS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 465)).add_operation (enumerator_15285.current_mLexiqueFileName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 466)).add_operation (GALGAS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 467)), fixItArray10  COMMA_SOURCE_FILE ("guiCompilation.galgas", 464)) ;
          }
        }
        enumerator_15734.gotoNextObject () ;
      }
      enumerator_15697.gotoNextObject () ;
    }
    GALGAS_textMacroList var_textMacroList_16078 = GALGAS_textMacroList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 473)) ;
    cEnumerator_guiCompoundAttributeListAST enumerator_16126 (enumerator_15285.current_mCompoundAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_16126.hasCurrentObject ()) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, enumerator_16126.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("textMacro"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_16126.current_mKey (HERE).readProperty_location (), GALGAS_string ("for a compound attribute, only the 'textMacro' key is valid"), fixItArray12  COMMA_SOURCE_FILE ("guiCompilation.galgas", 476)) ;
        }
      }
      if (kBoolFalse == test_11) {
        var_textMacroList_16078.addAssign_operation (enumerator_16126.current_mAttributeName (HERE).readProperty_string (), enumerator_16126.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 478)) ;
      }
      enumerator_16126.gotoNextObject () ;
    }
    GALGAS_bool var_hasAssociatedExtension_16413 = GALGAS_bool (false) ;
    GALGAS_bool var_hasTabViewTitle_16458 = GALGAS_bool (false) ;
    GALGAS_bool var_hasBlockComment_16496 = GALGAS_bool (false) ;
    GALGAS_string var_tabViewTitle_16536 = GALGAS_string::makeEmptyString () ;
    GALGAS_string var_blockComment_16570 = GALGAS_string::makeEmptyString () ;
    cEnumerator_guiSimpleAttributeListAST enumerator_16602 (enumerator_15285.current_mSimpleAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_16602.hasCurrentObject ()) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsEqual, enumerator_16602.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("fileExtension"))).boolEnum () ;
        if (kBoolTrue == test_13) {
          {
          var_context_14102.mProperty_mExtensionMap.setter_insertKey (enumerator_16602.current_mValue (HERE), enumerator_15285.current_mLexiqueFileName (HERE).readProperty_string (), index_15240, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 489)) ;
          }
          var_hasAssociatedExtension_16413 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_13) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = GALGAS_bool (kIsEqual, enumerator_16602.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("title"))).boolEnum () ;
          if (kBoolTrue == test_14) {
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              test_15 = var_hasTabViewTitle_16458.boolEnum () ;
              if (kBoolTrue == test_15) {
                TC_Array <C_FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (enumerator_16602.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_16602.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 493)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 493)), fixItArray16  COMMA_SOURCE_FILE ("guiCompilation.galgas", 493)) ;
              }
            }
            var_hasTabViewTitle_16458 = GALGAS_bool (true) ;
            var_tabViewTitle_16536 = enumerator_16602.current_mValue (HERE).readProperty_string () ;
          }
        }
        if (kBoolFalse == test_14) {
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsEqual, enumerator_16602.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("blockComment"))).boolEnum () ;
            if (kBoolTrue == test_17) {
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = var_hasBlockComment_16496.boolEnum () ;
                if (kBoolTrue == test_18) {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (enumerator_16602.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_16602.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 499)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 499)), fixItArray19  COMMA_SOURCE_FILE ("guiCompilation.galgas", 499)) ;
                }
              }
              var_hasBlockComment_16496 = GALGAS_bool (true) ;
              var_blockComment_16570 = enumerator_16602.current_mValue (HERE).readProperty_string () ;
            }
          }
          if (kBoolFalse == test_17) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_16602.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_16602.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 504)).add_operation (GALGAS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 504)), fixItArray20  COMMA_SOURCE_FILE ("guiCompilation.galgas", 504)) ;
          }
        }
      }
      enumerator_16602.gotoNextObject () ;
    }
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = var_hasAssociatedExtension_16413.operator_not (SOURCE_FILE ("guiCompilation.galgas", 508)).boolEnum () ;
      if (kBoolTrue == test_21) {
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_15285.current_mLexiqueFileName (HERE).readProperty_location (), GALGAS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")"), fixItArray22  COMMA_SOURCE_FILE ("guiCompilation.galgas", 509)) ;
      }
    }
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      test_23 = var_hasTabViewTitle_16458.operator_not (SOURCE_FILE ("guiCompilation.galgas", 512)).boolEnum () ;
      if (kBoolTrue == test_23) {
        TC_Array <C_FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_15285.current_mLexiqueFileName (HERE).readProperty_location (), GALGAS_string ("the 'title' key should be defined once (it is not defined)"), fixItArray24  COMMA_SOURCE_FILE ("guiCompilation.galgas", 513)) ;
      }
    }
    var_context_14102.mProperty_mWithLexiqueList.addAssign_operation (enumerator_15285.current_mLexiqueFileName (HERE).readProperty_string (), index_15240, var_blockComment_16570, var_tabViewTitle_16536, var_textMacroList_16078, enumerator_15285.current_mLabels (HERE), var_lexicalStyleListAST_15535  COMMA_SOURCE_FILE ("guiCompilation.galgas", 516)) ;
    enumerator_15285.gotoNextObject () ;
    index_15240.increment_operation (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 448)) ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName (), var_context_14102, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 526)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateAllGuiComponentsGalgas3???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33__3F__3F__3F__26__26_ (const GALGAS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                                                     const GALGAS_string constinArgument_inOutputDirectory,
                                                                     const GALGAS_bool constinArgument_inQuietOutputByDefault,
                                                                     GALGAS_stringlist & ioArgument_ioApplicationSourceSet,
                                                                     GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_optionComponentMapForGeneration enumerator_18710 (constinArgument_inOptionComponentMapForGeneration, kENUMERATION_UP) ;
  while (enumerator_18710.hasCurrentObject ()) {
    GALGAS_string var_swiftFileName_18779 = GALGAS_string ("gui-").add_operation (enumerator_18710.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 542)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 542)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_swiftFileName_18779  COMMA_SOURCE_FILE ("guiCompilation.galgas", 543)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_swiftFileName_18779  COMMA_SOURCE_FILE ("guiCompilation.galgas", 544)) ;
    GALGAS_string var_swift_5F_string_18923 = GALGAS_string (filewrapperTemplate_guiGenerationTemplates_swift_5F_gui_5F_implementation (inCompiler, enumerator_18710.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault COMMA_SOURCE_FILE ("guiCompilation.galgas", 545))) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_swiftFileName_18779, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_swift_5F_string_18923, GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 549)) ;
    }
    GALGAS_string var_objcFileName_19433 = GALGAS_string ("gui-").add_operation (enumerator_18710.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 560)).add_operation (GALGAS_string (".m"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 560)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_objcFileName_19433  COMMA_SOURCE_FILE ("guiCompilation.galgas", 561)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_objcFileName_19433  COMMA_SOURCE_FILE ("guiCompilation.galgas", 562)) ;
    GALGAS_string var_objc_5F_string_19570 = GALGAS_string (filewrapperTemplate_guiGenerationTemplates_objc_5F_gui_5F_implementation (inCompiler, enumerator_18710.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault COMMA_SOURCE_FILE ("guiCompilation.galgas", 563))) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_objcFileName_19433, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_objc_5F_string_19570, GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 567)) ;
    }
    enumerator_18710.gotoNextObject () ;
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
//Filewrapper template 'guiGenerationTemplates objc_gui_implementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_guiGenerationTemplates_objc_5F_gui_5F_implementation (Compiler * inCompiler,
                                                                                        const GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                        const GALGAS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("\n#import \"OC_Token.h\"\n#import \"F_CocoaWrapperForGalgas.h\"\n#import \"OC_GGS_CommandLineOption.h\"\n") ;
  GALGAS_uint index_220_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    cEnumerator_importedLexiqueList enumerator_220 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
    while (enumerator_220.hasCurrentObject ()) {
      result.addString ("#import \"lexique-") ;
      result.addString (enumerator_220.current_mLexiqueClassName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 6)).stringValue ()) ;
      result.addString ("-cocoa.h\"\n") ;
      index_220_.increment () ;
      enumerator_220.gotoNextObject () ;
    }
  }
  GALGAS_uint index_350_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().isValid ()) {
    cEnumerator_stringlist enumerator_350 (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList (), kENUMERATION_UP) ;
    while (enumerator_350.hasCurrentObject ()) {
      result.addString ("#import \"") ;
      result.addString (enumerator_350.current_mValue (HERE).stringValue ()) ;
      result.addString (".h\"\n") ;
      index_350_.increment () ;
      enumerator_350.gotoNextObject () ;
    }
  }
  result.addString ("\n#ifdef USER_DEFAULT_COLORS_DEFINED\n  #import \"user_default_colors.h\"\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\n#pragma mark Nibs\n\n//--------------------------------------------------------------------------------------------------\n//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                \n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 24)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.addString ("NSArray * nibsAndClasses (void) {\n  return [NSArray array] ;\n}\n") ;
    } break ;
  case kBoolFalse : {
    result.addString ("NSArray * nibsAndClasses (void) {\n  return [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_1125_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().isValid ()) {
      cEnumerator_stringlist enumerator_1125 (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList (), kENUMERATION_UP) ;
      while (enumerator_1125.hasCurrentObject ()) {
        result.addString ("    [NSArray arrayWithObjects:@\"") ;
        result.addString (enumerator_1125.current_mValue (HERE).stringValue ()) ;
        result.addString ("\", [") ;
        result.addString (enumerator_1125.current_mValue (HERE).stringValue ()) ;
        result.addString (" class], nil],\n") ;
        index_1125_.increment () ;
        enumerator_1125.gotoNextObject () ;
      }
    }
    result.addString ("    nil\n  ] ;\n}\n") ;
    } break ;
  default :
    break ;
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n//    Project file extensions\n//--------------------------------------------------------------------------------------------------\n\nNSDictionary * indexingDescriptorDictionary (void) {\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ().getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 45)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.addString (" return [NSDictionary dictionary] ;\n") ;
    } break ;
  case kBoolFalse : {
    result.addString ("  return [NSDictionary dictionaryWithObjectsAndKeys: ") ;
    GALGAS_uint index_1774_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ().isValid ()) {
      cEnumerator_projectIndexingDescriptorList enumerator_1774 (in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList (), kENUMERATION_UP) ;
      while (enumerator_1774.hasCurrentObject ()) {
        result.addString ("@\"") ;
        result.addString (enumerator_1774.current_indexingPathSuffix (HERE).readProperty_string ().stringValue ()) ;
        result.addString ("\", @\"") ;
        result.addString (enumerator_1774.current_mProjectFileExtension (HERE).readProperty_string ().stringValue ()) ;
        result.addString ("\", ") ;
        index_1774_.increment () ;
        enumerator_1774.gotoNextObject () ;
      }
    }
    result.addString ("nil] ;\n") ;
    } break ;
  default :
    break ;
  }
  result.addString ("}\n\n//--------------------------------------------------------------------------------------------------\n\n#pragma mark Command Line Options\n\n//--------------------------------------------------------------------------------------------------\n//                       Command Line Options                                                    \n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_2371_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ().isValid ()) {
    cEnumerator_stringlist enumerator_2371 (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList (), kENUMERATION_UP) ;
    while (enumerator_2371.hasCurrentObject ()) {
      result.addString ("#import \"option-") ;
      result.addString (enumerator_2371.current_mValue (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 68)).stringValue ()) ;
      result.addString ("-cocoa.h\"\n") ;
      index_2371_.increment () ;
      enumerator_2371.gotoNextObject () ;
    }
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n\nvoid enterOptions (NSMutableArray * ioBoolOptionArray,\n                   NSMutableArray * ioUIntOptionArray,\n                   NSMutableArray * ioStringOptionArray,\n                   NSMutableArray * ioStringListOptionArray) {\n") ;
  GALGAS_uint index_2837_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ().isValid ()) {
    cEnumerator_stringlist enumerator_2837 (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList (), kENUMERATION_UP) ;
    while (enumerator_2837.hasCurrentObject ()) {
      result.addString ("  enterOptionsFor_") ;
      result.addString (enumerator_2837.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 79)).stringValue ()) ;
      result.addString (" (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;\n") ;
      index_2837_.increment () ;
      enumerator_2837.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_2 = in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT.boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.addString ("  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@\"galgas_cli_options\"\n    identifier:@\"verbose_output\"\n    commandChar:'v'\n    commandString:@\"verbose\"\n    comment:@\"Verbose output\"\n    defaultValue:@\"\"\n  ] ;\n") ;
    } break ;
  case kBoolFalse : {
    result.addString ("  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@\"galgas_cli_options\"\n    identifier:@\"quiet_output\"\n    commandChar:'q'\n    commandString:@\"quiet\"\n    comment:@\"Quiet output\"\n    defaultValue:@\"\"\n  ] ;\n") ;
    } break ;
  default :
    break ;
  }
  result.addString ("  [ioBoolOptionArray addObject:option] ;\n}\n\n") ;
  GALGAS_uint index_3759_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    cEnumerator_importedLexiqueList enumerator_3759 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
    while (enumerator_3759.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\n#pragma mark Lexique ") ;
      result.addString (enumerator_3759.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.addString ("\n\n//--------------------------------------------------------------------------------------------------\n//                     P O P    U P    L I S T    D A T A\n//--------------------------------------------------------------------------------------------------\n\n") ;
      GALGAS_uint index_4275_ (0) ;
      if (enumerator_3759.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_4275 (enumerator_3759.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_4275.hasCurrentObject ()) {
          result.addString ("static const UInt16 gPopUpData_") ;
          result.addString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).stringValue ()) ;
          result.addString ("_") ;
          result.addString (enumerator_3759.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).stringValue ()) ;
          result.addString ("_") ;
          result.addString (enumerator_4275.current_mLocation (HERE).getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).stringValue ()) ;
          result.addString (" [") ;
          result.addString (GALGAS_uint (uint32_t (2U)).multiply_operation (enumerator_4275.current_mTerminalList (HERE).getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).stringValue ()) ;
          result.addString ("] = {\n  ") ;
          result.addString (enumerator_4275.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 112)).stringValue ()) ;
          result.addString (", // Leading character count to strip\n") ;
          GALGAS_uint index_4619_ (0) ;
          if (enumerator_4275.current_mTerminalList (HERE).isValid ()) {
            cEnumerator_terminalLabelListAST enumerator_4619 (enumerator_4275.current_mTerminalList (HERE), kENUMERATION_UP) ;
            while (enumerator_4619.hasCurrentObject ()) {
              result.addString ("  ") ;
              result.addString (enumerator_3759.current_mLexiqueClassName (HERE).stringValue ()) ;
              result.addString ("_1_") ;
              result.addString (enumerator_4619.current_mTerminal (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 114)).stringValue ()) ;
              result.addString (", ") ;
              result.addString (enumerator_4619.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 114)).stringValue ()) ;
              result.addString (",\n") ;
              index_4619_.increment () ;
              enumerator_4619.gotoNextObject () ;
            }
          }
          result.addString ("  0\n} ;\n\n") ;
          index_4275_.increment () ;
          enumerator_4275.gotoNextObject () ;
        }
      }
      result.addString ("static const UInt16 * gPopUpData_") ;
      result.addString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_3759.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).stringValue ()) ;
      result.addString (" [") ;
      result.addString (enumerator_3759.current_mLabels (HERE).getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).stringValue ()) ;
      result.addString ("] = {\n") ;
      GALGAS_uint index_4991_ (0) ;
      if (enumerator_3759.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_4991 (enumerator_3759.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_4991.hasCurrentObject ()) {
          result.addString ("  gPopUpData_") ;
          result.addString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 121)).stringValue ()) ;
          result.addString ("_") ;
          result.addString (enumerator_3759.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 121)).stringValue ()) ;
          result.addString ("_") ;
          result.addString (enumerator_4991.current_mLocation (HERE).getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 121)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 121)).stringValue ()) ;
          result.addString (",\n") ;
          index_4991_.increment () ;
          enumerator_4991.gotoNextObject () ;
        }
      }
      result.addString ("  NULL\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//                            Lexique interface\n//--------------------------------------------------------------------------------------------------\n\n@interface OC_Tokenizer_") ;
      result.addString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 128)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_3759.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.addString (" : OC_Lexique_") ;
      result.addString (enumerator_3759.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.addString (" {\n\n}\n\n- (NSString *) blockComment ;\n\n- (const UInt16 * *) popupListData ;\n\n- (NSUInteger) textMacroCount ;\n\n- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;\n\n- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;\n\n- (NSString *) tabItemTitle ;\n\n@end\n\n//--------------------------------------------------------------------------------------------------\n\n@implementation OC_Tokenizer_") ;
      result.addString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 138)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_3759.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.addString ("\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) blockComment {\n  return @") ;
      result.addString (enumerator_3759.current_mBlockComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 141)).stringValue ()) ;
      result.addString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (const UInt16 * *) popupListData {\n  return gPopUpData_") ;
      result.addString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 145)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_3759.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 145)).stringValue ()) ;
      result.addString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) textMacroCount {\n  return ") ;
      result.addString (enumerator_3759.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 149)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 149)).stringValue ()) ;
      result.addString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) tabItemTitle {\n  return @") ;
      result.addString (enumerator_3759.current_mTitle (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 153)).stringValue ()) ;
      result.addString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {\n  static NSString * kTextMacroTitle [") ;
      result.addString (enumerator_3759.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 157)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 157)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 157)).stringValue ()) ;
      result.addString ("] = {\n") ;
      GALGAS_uint index_7280_ (0) ;
      if (enumerator_3759.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7280 (enumerator_3759.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_7280.hasCurrentObject ()) {
          result.addString ("    @") ;
          result.addString (enumerator_7280.current_mKey (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 159)).stringValue ()) ;
          result.addString (",\n") ;
          index_7280_.increment () ;
          enumerator_7280.gotoNextObject () ;
        }
      }
      result.addString ("    NULL\n  } ;\n  return kTextMacroTitle [inIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {\n  static NSString * kTextMacroContent [") ;
      result.addString (enumerator_3759.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 167)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 167)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 167)).stringValue ()) ;
      result.addString ("] = {\n") ;
      GALGAS_uint index_7742_ (0) ;
      if (enumerator_3759.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7742 (enumerator_3759.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_7742.hasCurrentObject ()) {
          result.addString ("    @") ;
          result.addString (enumerator_7742.current_mContents (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 169)).stringValue ()) ;
          result.addString (",\n") ;
          index_7742_.increment () ;
          enumerator_7742.gotoNextObject () ;
        }
      }
      result.addString ("    NULL\n  } ;\n  return kTextMacroContent [inIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n@end\n\n") ;
      index_3759_.increment () ;
      enumerator_3759.gotoNextObject () ;
    }
  }
  result.addString ("\n\n//--------------------------------------------------------------------------------------------------\n\nOC_Lexique * tokenizerForExtension (const NSString * inExtension) {\n  OC_Lexique * result = nil ;\n") ;
  GALGAS_uint index_8311_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    cEnumerator_extensionMap enumerator_8311 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap (), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8311 = enumerator_8311.hasCurrentObject () ;
    if (nonEmpty_enumerator_8311) {
      result.addString ("  if") ;
    }
    while (enumerator_8311.hasCurrentObject ()) {
      result.addString (" ([inExtension isEqualToString:@") ;
      result.addString (enumerator_8311.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 186)).stringValue ()) ;
      result.addString ("]) {\n    result = [OC_Tokenizer_") ;
      result.addString (enumerator_8311.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 187)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_8311.current_mLexiqueName (HERE).stringValue ()) ;
      result.addString (" new] ;\n") ;
      if (enumerator_8311.hasNextObject ()) {
        result.addString ("  }else if") ;
      }
      index_8311_.increment () ;
      enumerator_8311.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8311) {
      result.addString ("  }\n") ;
    }
  }
  result.addString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nNSArray * tokenizers (void) {") ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 197)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.addString ("\n  return [NSArray array] ;\n") ;
    } break ;
  case kBoolFalse : {
    result.addString ("\n  return [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_8867_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
      cEnumerator_importedLexiqueList enumerator_8867 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
      while (enumerator_8867.hasCurrentObject ()) {
        result.addString ("    [OC_Tokenizer_") ;
        result.addString (enumerator_8867.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 202)).stringValue ()) ;
        result.addString ("_") ;
        result.addString (enumerator_8867.current_mLexiqueClassName (HERE).stringValue ()) ;
        result.addString (" new],\n") ;
        index_8867_.increment () ;
        enumerator_8867.gotoNextObject () ;
      }
    }
    result.addString ("    nil\n  ] ;\n") ;
    } break ;
  default :
    break ;
  }
  result.addString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nNSString * buildRunOption (void) {\n  return @\"") ;
  result.addString (in_GUI_5F_CONTEXT.readProperty_mBuildRunOption ().stringValue ()) ;
  result.addString ("\" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates swift_gui_implementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_guiGenerationTemplates_swift_5F_gui_5F_implementation (Compiler * inCompiler,
                                                                                         const GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                         const GALGAS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.addString ("\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                \n//--------------------------------------------------------------------------------------------------\n\n/*\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 10)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.addString ("NSArray * nibsAndClasses (void) {\n  return [NSArray array] ;\n}\n") ;
    } break ;
  case kBoolFalse : {
    result.addString ("NSArray * nibsAndClasses (void) {\n  return [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_560_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().isValid ()) {
      cEnumerator_stringlist enumerator_560 (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList (), kENUMERATION_UP) ;
      while (enumerator_560.hasCurrentObject ()) {
        result.addString ("    [NSArray arrayWithObjects:@\"") ;
        result.addString (enumerator_560.current_mValue (HERE).stringValue ()) ;
        result.addString ("\", [") ;
        result.addString (enumerator_560.current_mValue (HERE).stringValue ()) ;
        result.addString (" class], nil],\n") ;
        index_560_.increment () ;
        enumerator_560.gotoNextObject () ;
      }
    }
    result.addString ("    nil\n  ] ;\n}\n") ;
    } break ;
  default :
    break ;
  }
  result.addString ("\n\n*/\n//--------------------------------------------------------------------------------------------------\n//    Project file extensions\n//--------------------------------------------------------------------------------------------------\n\nNSDictionary * indexingDescriptorDictionary (void) {\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ().getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 33)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.addString (" return [NSDictionary dictionary] ;\n") ;
    } break ;
  case kBoolFalse : {
    result.addString ("  return [NSDictionary dictionaryWithObjectsAndKeys: ") ;
    GALGAS_uint index_1213_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ().isValid ()) {
      cEnumerator_projectIndexingDescriptorList enumerator_1213 (in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList (), kENUMERATION_UP) ;
      while (enumerator_1213.hasCurrentObject ()) {
        result.addString ("@\"") ;
        result.addString (enumerator_1213.current_indexingPathSuffix (HERE).readProperty_string ().stringValue ()) ;
        result.addString ("\", @\"") ;
        result.addString (enumerator_1213.current_mProjectFileExtension (HERE).readProperty_string ().stringValue ()) ;
        result.addString ("\", ") ;
        index_1213_.increment () ;
        enumerator_1213.gotoNextObject () ;
      }
    }
    result.addString ("nil] ;\n") ;
    } break ;
  default :
    break ;
  }
  result.addString ("}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                       Command Line Options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_1679_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ().isValid ()) {
    cEnumerator_stringlist enumerator_1679 (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList (), kENUMERATION_UP) ;
    while (enumerator_1679.hasCurrentObject ()) {
      result.addString ("// #import \"option-") ;
      result.addString (enumerator_1679.current_mValue (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 54)).stringValue ()) ;
      result.addString ("-cocoa.h\"\n") ;
      index_1679_.increment () ;
      enumerator_1679.gotoNextObject () ;
    }
  }
  result.addString ("\n//--------------------------------------------------------------------------------------------------\n\n/*\nvoid enterOptions (NSMutableArray * ioBoolOptionArray,\n                   NSMutableArray * ioUIntOptionArray,\n                   NSMutableArray * ioStringOptionArray,\n                   NSMutableArray * ioStringListOptionArray) {\n") ;
  GALGAS_uint index_2151_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ().isValid ()) {
    cEnumerator_stringlist enumerator_2151 (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList (), kENUMERATION_UP) ;
    while (enumerator_2151.hasCurrentObject ()) {
      result.addString ("  enterOptionsFor_") ;
      result.addString (enumerator_2151.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 66)).stringValue ()) ;
      result.addString (" (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;\n") ;
      index_2151_.increment () ;
      enumerator_2151.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_2 = in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT.boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.addString ("  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@\"galgas_cli_options\"\n    identifier:@\"verbose_output\"\n    commandChar:'v'\n    commandString:@\"verbose\"\n    comment:@\"Verbose output\"\n    defaultValue:@\"\"\n  ] ;\n") ;
    } break ;
  case kBoolFalse : {
    result.addString ("  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@\"galgas_cli_options\"\n    identifier:@\"quiet_output\"\n    commandChar:'q'\n    commandString:@\"quiet\"\n    comment:@\"Quiet output\"\n    defaultValue:@\"\"\n  ] ;\n") ;
    } break ;
  default :
    break ;
  }
  result.addString ("  [ioBoolOptionArray addObject:option] ;\n}\n\n*/\n\n") ;
  GALGAS_uint index_3093_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    cEnumerator_importedLexiqueList enumerator_3093 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
    while (enumerator_3093.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n//                     P O P    U P    L I S T    D A T A\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gPopUpData_") ;
      result.addString (enumerator_3093.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 98)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_3093.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 98)).stringValue ()) ;
      result.addString (" : [[UInt16]] = [\n") ;
      GALGAS_uint index_3548_ (0) ;
      if (enumerator_3093.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_3548 (enumerator_3093.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_3548.hasCurrentObject ()) {
          result.addString ("  [") ;
          result.addString (enumerator_3548.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 100)).stringValue ()) ;
          result.addString (", // Leading character count to strip\n") ;
          GALGAS_uint index_3697_ (0) ;
          if (enumerator_3548.current_mTerminalList (HERE).isValid ()) {
            cEnumerator_terminalLabelListAST enumerator_3697 (enumerator_3548.current_mTerminalList (HERE), kENUMERATION_UP) ;
            while (enumerator_3697.hasCurrentObject ()) {
              result.addString ("    ") ;
              result.addString (enumerator_3093.current_mLexiqueClassName (HERE).stringValue ()) ;
              result.addString ("_1_") ;
              result.addString (enumerator_3697.current_mTerminal (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 102)).stringValue ()) ;
              result.addString (", ") ;
              result.addString (enumerator_3697.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 102)).stringValue ()) ;
              if (enumerator_3697.hasNextObject ()) {
                result.addString (",\n") ;
              }
              index_3697_.increment () ;
              enumerator_3697.gotoNextObject () ;
            }
          }
          result.addString ("\n  ]") ;
          if (enumerator_3548.hasNextObject ()) {
            result.addString (",\n") ;
          }
          index_3548_.increment () ;
          enumerator_3548.gotoNextObject () ;
        }
      }
      result.addString ("\n]\n\n//--------------------------------------------------------------------------------------------------\n//                            Lexique interface\n//--------------------------------------------------------------------------------------------------\n  \nclass SWIFT_Tokenizer_") ;
      result.addString (enumerator_3093.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 115)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_3093.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.addString (" : SWIFT_Lexique_") ;
      result.addString (enumerator_3093.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.addString (", SWIFT_Tokenizer_Protocol {\n\n//- (NSUInteger) textMacroCount ;\n\n//- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;\n\n//- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func popupListData () -> [[UInt16]] {\n    return gPopUpData_") ;
      result.addString (enumerator_3093.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 126)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_3093.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 126)).stringValue ()) ;
      result.addString ("\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func tabItemTitle () -> String {\n    return ") ;
      result.addString (enumerator_3093.current_mTitle (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 132)).stringValue ()) ;
      result.addString ("\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  \n  func blockComment () -> String {\n    return ") ;
      result.addString (enumerator_3093.current_mBlockComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 138)).stringValue ()) ;
      result.addString ("\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func attributes (fromStyleIndex inStyleIndex : UInt8) -> [NSAttributedString.Key : Any] {\n    let fontManager = NSFontManager.shared\n    var font = fontManager.convert (\n      self.font.propval,\n      toHaveTrait: self.bold (forStyle: inStyleIndex).propval \? .boldFontMask : .unboldFontMask\n    )\n    font = fontManager.convert (\n      font,\n      toHaveTrait: self.italic (forStyle: inStyleIndex).propval \? .italicFontMask : .unitalicFontMask\n    )\n    let result : [NSAttributedString.Key : Any] = [\n      .foregroundColor : self.color (forStyle: inStyleIndex).propval,\n      .font : font\n    ]\n    return result\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n/* @implementation OC_Tokenizer_") ;
      result.addString (enumerator_3093.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 165)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_3093.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.addString ("\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) textMacroCount {\n  return ") ;
      result.addString (enumerator_3093.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 168)).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 168)).stringValue ()) ;
      result.addString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {\n  static NSString * kTextMacroTitle [") ;
      result.addString (enumerator_3093.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 173)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 173)).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 173)).stringValue ()) ;
      result.addString ("] = {\n") ;
      GALGAS_uint index_6812_ (0) ;
      if (enumerator_3093.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_6812 (enumerator_3093.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_6812.hasCurrentObject ()) {
          result.addString ("    @") ;
          result.addString (enumerator_6812.current_mKey (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 175)).stringValue ()) ;
          result.addString (",\n") ;
          index_6812_.increment () ;
          enumerator_6812.gotoNextObject () ;
        }
      }
      result.addString ("    nullptr\n  } ;\n  return kTextMacroTitle [inIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {\n  static NSString * kTextMacroContent [") ;
      result.addString (enumerator_3093.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 183)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 183)).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 183)).stringValue ()) ;
      result.addString ("] = {\n") ;
      GALGAS_uint index_7275_ (0) ;
      if (enumerator_3093.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7275 (enumerator_3093.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_7275.hasCurrentObject ()) {
          result.addString ("    @") ;
          result.addString (enumerator_7275.current_mContents (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 185)).stringValue ()) ;
          result.addString (",\n") ;
          index_7275_.increment () ;
          enumerator_7275.gotoNextObject () ;
        }
      }
      result.addString ("    nullptr\n  } ;\n  return kTextMacroContent [inIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n@end */\n\n") ;
      index_3093_.increment () ;
      enumerator_3093.gotoNextObject () ;
    }
  }
  result.addString ("\n\n//--------------------------------------------------------------------------------------------------\n//   Global functions\n//--------------------------------------------------------------------------------------------------\n\nfunc tokenizerFor (extension inExtension : String) -> SWIFT_Tokenizer_Protocol\? {\n  var result : SWIFT_Tokenizer_Protocol\? = nil\n") ;
  GALGAS_uint index_8004_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    cEnumerator_extensionMap enumerator_8004 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap (), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8004 = enumerator_8004.hasCurrentObject () ;
    if (nonEmpty_enumerator_8004) {
      result.addString ("  if") ;
    }
    while (enumerator_8004.hasCurrentObject ()) {
      result.addString (" inExtension == ") ;
      result.addString (enumerator_8004.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 204)).stringValue ()) ;
      result.addString (" {\n    result = SWIFT_Tokenizer_") ;
      result.addString (enumerator_8004.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 205)).stringValue ()) ;
      result.addString ("_") ;
      result.addString (enumerator_8004.current_mLexiqueName (HERE).stringValue ()) ;
      result.addString (" ()\n") ;
      if (enumerator_8004.hasNextObject ()) {
        result.addString ("  }else if") ;
      }
      index_8004_.increment () ;
      enumerator_8004.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8004) {
      result.addString ("  }\n") ;
    }
  }
  result.addString ("  return result\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc tokenizers () -> [SWIFT_Tokenizer_Protocol] {") ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 215)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.addString ("\n  return []\n") ;
    } break ;
  case kBoolFalse : {
    result.addString ("\n  return [\n") ;
    GALGAS_uint index_8521_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
      cEnumerator_importedLexiqueList enumerator_8521 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
      while (enumerator_8521.hasCurrentObject ()) {
        result.addString ("    SWIFT_Tokenizer_") ;
        result.addString (enumerator_8521.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 220)).stringValue ()) ;
        result.addString ("_") ;
        result.addString (enumerator_8521.current_mLexiqueClassName (HERE).stringValue ()) ;
        result.addString (" ()") ;
        if (enumerator_8521.hasNextObject ()) {
          result.addString (",\n") ;
        }
        index_8521_.increment () ;
        enumerator_8521.gotoNextObject () ;
      }
    }
    result.addString ("\n  ]\n") ;
    } break ;
  default :
    break ;
  }
  result.addString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc buildRunOption () -> String {\n  return \"") ;
  result.addString (in_GUI_5F_CONTEXT.readProperty_mBuildRunOption ().stringValue ()) ;
  result.addString ("\"\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                 GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                 GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                 GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  const GALGAS_boolsetDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3137 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 82)), temp_1.readProperty_mBoolsetTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 82)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3137, temp_2, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 83)) ;
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
  result_result = GALGAS_string ("boolset @").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 91)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForBoolset'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForBoolset (Compiler *
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



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForBoolset = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForBoolset ;

//--------------------------------------------------------------------------------------------------

GALGAS_stringset function_forbiddenKeysForBoolset (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForBoolset) {
    gOnceFunctionResult_forbiddenKeysForBoolset = onceFunction_forbiddenKeysForBoolset (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForBoolset = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForBoolset ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_forbiddenKeysForBoolset (void) {
  gOnceFunctionResult_forbiddenKeysForBoolset.drop () ;
}

//--------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForBoolset (nullptr,
                                                                     releaseOnceFunctionResult_forbiddenKeysForBoolset) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForBoolset [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_forbiddenKeysForBoolset (Compiler * inCompiler,
                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForBoolset (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForBoolset ("forbiddenKeysForBoolset",
                                                                         functionWithGenericHeader_forbiddenKeysForBoolset,
                                                                         & kTypeDescriptor_GALGAS_stringset,
                                                                         0,
                                                                         functionArgs_forbiddenKeysForBoolset) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_slotNameSet_4746 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-boolset.galgas", 117)) ;
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_4770 (temp_0.readProperty_mFlagList (), kENUMERATION_UP) ;
  while (enumerator_4770.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 119)).getter_hasKey (enumerator_4770.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 119)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_m_4884 = GALGAS_string ("a slot cannot be named:") ;
        cEnumerator_stringset enumerator_4954 (function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 121)), kENUMERATION_UP) ;
        while (enumerator_4954.hasCurrentObject ()) {
          var_m_4884.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_4954.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 122)) ;
          enumerator_4954.gotoNextObject () ;
        }
        var_m_4884.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 124)) ;
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4770.current_mValue (HERE).readProperty_location (), var_m_4884, fixItArray2  COMMA_SOURCE_FILE ("type-boolset.galgas", 125)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_slotNameSet_4746.getter_hasKey (enumerator_4770.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 126)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_4770.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated slot name"), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 127)) ;
        }
      }
    }
    var_slotNameSet_4746.addAssign_operation (enumerator_4770.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 129)) ;
    enumerator_4770.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_boolsetTypeIndex_5269 ;
  {
  const GALGAS_boolsetDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_5.readProperty_mBoolsetTypeName (), var_boolsetTypeIndex_5269, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 132)) ;
  }
  GALGAS_getterMap var_getterMap_5377 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_5377, inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 134)) ;
  }
  GALGAS_constructorMap var_constructorMap_5410 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 135)) ;
  {
  var_constructorMap_5410.setter_insertKey (GALGAS_string ("none").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 136)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 136)), GALGAS_bool (false), var_boolsetTypeIndex_5269, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 136)) ;
  }
  {
  var_constructorMap_5410.setter_insertKey (GALGAS_string ("all").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 137)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 137)), GALGAS_bool (false), var_boolsetTypeIndex_5269, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 137)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5377, ioArgument_ioTypeMap, GALGAS_string ("none"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 138)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5377, ioArgument_ioTypeMap, GALGAS_string ("all"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 146)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = this ;
  cEnumerator_lstringlist enumerator_5957 (temp_6.readProperty_mFlagList (), kENUMERATION_UP) ;
  while (enumerator_5957.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_constructorMap_5410.getter_hasKey (enumerator_5957.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 155)).operator_not (SOURCE_FILE ("type-boolset.galgas", 155)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        var_constructorMap_5410.setter_insertKey (enumerator_5957.current_mValue (HERE), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 156)), GALGAS_bool (false), var_boolsetTypeIndex_5269, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 156)) ;
        }
        {
        routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5377, ioArgument_ioTypeMap, enumerator_5957.current_mValue (HERE).readProperty_string (), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 157)) ;
        }
      }
    }
    enumerator_5957.gotoNextObject () ;
  }
  GALGAS_setterMap var_setterMap_6380 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 168)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6442 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 170)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_mBoolsetTypeName (), GALGAS_bool (false), var_getterMap_5377, var_setterMap_6380, var_instanceMethodMap_6442, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 172)) ;
  }
  GALGAS_operators var_operators_6828 = GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("type-boolset.galgas", 186)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("type-boolset.galgas", 186)) COMMA_SOURCE_FILE ("type-boolset.galgas", 186)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("type-boolset.galgas", 186)) COMMA_SOURCE_FILE ("type-boolset.galgas", 186)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("type-boolset.galgas", 186)) COMMA_SOURCE_FILE ("type-boolset.galgas", 186)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-boolset.galgas", 187)) COMMA_SOURCE_FILE ("type-boolset.galgas", 186)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("type-boolset.galgas", 187)) COMMA_SOURCE_FILE ("type-boolset.galgas", 187)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-boolset.galgas", 187)) COMMA_SOURCE_FILE ("type-boolset.galgas", 187)) ;
  const GALGAS_boolsetDeclarationAST temp_9 = this ;
  const GALGAS_boolsetDeclarationAST temp_10 = this ;
  const GALGAS_boolsetDeclarationAST temp_11 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_7041 = GALGAS_unifiedTypeDefinition::constructor_new (temp_9.readProperty_mBoolsetTypeName (), temp_10.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-boolset.galgas", 193)), GALGAS_typeKindEnum::constructor_boolsetType (SOURCE_FILE ("type-boolset.galgas", 194)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 196)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 197)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 198)), var_constructorMap_5410, var_getterMap_5377, var_setterMap_6380, var_instanceMethodMap_6442, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 203)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 204)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 205)), var_operators_6828, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 207)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 208)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 209)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 210)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 211)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-boolset.galgas", 213)), GALGAS_string ("none"), GALGAS_string ("boolset-").add_operation (temp_11.readProperty_mBoolsetTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-boolset.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 215)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-boolset.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 189)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_7041.readProperty_mTypeName (), var_typeDefinition_7041, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 218)) ;
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
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mFlagList ().getter_count (SOURCE_FILE ("type-boolset.galgas", 236)).objectCompare (GALGAS_uint (uint32_t (64U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_boolsetDeclarationAST temp_2 = this ;
      GALGAS_location var_s_8568 = temp_2.readProperty_mFlagList ().getter_mValueAtIndex (GALGAS_uint (uint32_t (64U)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 237)).readProperty_location () ;
      const GALGAS_boolsetDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_8568, GALGAS_string ("max flags count is 64 (here: ").add_operation (temp_3.readProperty_mFlagList ().getter_count (SOURCE_FILE ("type-boolset.galgas", 238)).getter_string (SOURCE_FILE ("type-boolset.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 238)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 238)), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 238)) ;
    }
  }
  const GALGAS_boolsetDeclarationAST temp_5 = this ;
  GALGAS_lstring var_boolsetNameForUsefulness_8723 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 241)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_boolsetNameForUsefulness_8723, var_boolsetNameForUsefulness_8723, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 242)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = this ;
  const GALGAS_boolsetDeclarationAST temp_7 = this ;
  const GALGAS_boolsetDeclarationAST temp_8 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("boolset ").add_operation (temp_6.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 244)), GALGAS_boolsetTypeForGeneration::constructor_new (extensionGetter_searchKey (ioArgument_ioTypeMap, temp_7.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 246)), temp_8.readProperty_mFlagList ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 245))  COMMA_SOURCE_FILE ("type-boolset.galgas", 243)) ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" boolset"), inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public AC_GALGAS_root {\n//--------------------------------- Properties\n  private: uint64_t mFlags ;\n  private: bool mIsValid ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) ;\n\n//--------------------------------- Private constructor\n  private: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const uint64_t inFlags) ;\n\n") ;
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
                                                                                              const GALGAS_bigint & in_FULL_5F_SET
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) :\nAC_GALGAS_root (),\nmFlags (0),\nmIsValid (false) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (const uint64_t inFlags) :\nAC_GALGAS_root (),\nmFlags (inFlags),\nmIsValid (true) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::constructor_none (UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (0) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::constructor_all (UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (uint64_t (") ;
  result.addString (in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 26)).stringValue ()) ;
  result.addString (")) ;\n}\n\n") ;
  GALGAS_uint index_1002_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_1002 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1002.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::constructor_") ;
      result.addString (enumerator_1002.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 32)).stringValue ()) ;
      result.addString (" (UNUSED_LOCATION_ARGS) {\n  return GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" (uint64_t (1) << ") ;
      result.addString (index_1002_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 33)).stringValue ()) ;
      result.addString (") ;\n}\n\n") ;
      index_1002_idx.increment () ;
      enumerator_1002.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::objectCompare (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inOperand) const {\n   typeComparisonResult result = kOperandNotValid ;\n   if (mIsValid && inOperand.mIsValid) {\n     result = kOperandEqual ;\n     if (mFlags < inOperand.mFlags) {\n       result = kFirstOperandLowerThanSecond ;\n     }else if (mFlags > inOperand.mFlags) {\n       result = kFirstOperandGreaterThanSecond ;\n     }\n   }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::isValid (void) const {\n  return mIsValid ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::operator_or (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (mFlags | inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::operator_and (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (mFlags & inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::operator_xor (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inOperand\n                                      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (mFlags ^ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::substract_operation (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inOperand,\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("Compiler * /* inCompiler */\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  if (mIsValid && inOperand.mIsValid) {\n    result = GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (mFlags & ~ inOperand.mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::operator_tilde (UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" result ;\n  if (mIsValid) {\n    result = GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (((uint64_t) ") ;
  result.addString (in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 108)).stringValue ()) ;
  result.addString (") ^ mFlags) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("String & ioString,\n                              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("const int32_t /* inIndentation */) const {\n  ioString.addString (\"<boolset @") ;
  result.addString (in_TYPE_5F_NAME.stringValue ()) ;
  result.addString (":\") ;\n  if (! isValid ()) {\n    ioString.addString (\" not built\") ;\n  }else{\n") ;
  GALGAS_uint index_4721_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_4721 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4721.hasCurrentObject ()) {
      result.addString ("    if ((mFlags & ((uint64_t) 1) << ") ;
      result.addString (index_4721_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 123)).stringValue ()) ;
      result.addString (") != 0) {\n      ioString.addString (\" ") ;
      result.addString (enumerator_4721.current_mValue (HERE).readProperty_string ().stringValue ()) ;
      result.addString ("\") ;\n    }\n") ;
      index_4721_idx.increment () ;
      enumerator_4721.gotoNextObject () ;
    }
  }
  result.addString ("  }\n  ioString.addString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_none (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool (mFlags == 0) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::getter_all (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool (mFlags == uint64_t (") ;
  result.addString (in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 146)).stringValue ()) ;
  result.addString (")) ;\n  }\n  return result ;\n}\n\n") ;
  GALGAS_uint index_5549_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_5549 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5549.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::getter_") ;
      result.addString (enumerator_5549.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 153)).stringValue ()) ;
      result.addString (" (UNUSED_LOCATION_ARGS) const {\n  GALGAS_bool result ;\n  if (mIsValid) {\n    result = GALGAS_bool ((mFlags & (uint64_t (1) << ") ;
      result.addString (index_5549_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 156)).stringValue ()) ;
      result.addString (")) != 0) ;\n  }\n  return result ;\n}\n\n") ;
      index_5549_idx.increment () ;
      enumerator_5549.gotoNextObject () ;
    }
  }
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
  GALGAS_unifiedTypeDefinition var_typedefinition_10288 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 282)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (inCompiler, var_typedefinition_10288.readProperty_mTypeName ().readProperty_string (), var_typedefinition_10288.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-boolset.galgas", 285)), temp_1.readProperty_mFlagList () COMMA_SOURCE_FILE ("type-boolset.galgas", 283))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typedefinition_10288.readProperty_mTypeName ().readProperty_string (), var_typedefinition_10288.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-boolset.galgas", 290)), var_typedefinition_10288.readProperty_mIsConcrete (), var_typedefinition_10288.readProperty_mConstructorMap (), var_typedefinition_10288.readProperty_mGetterMap (), var_typedefinition_10288.readProperty_mSetterMap (), var_typedefinition_10288.readProperty_mInstanceMethodMap (), var_typedefinition_10288.readProperty_mClassMethodMap (), var_typedefinition_10288.readProperty_mOptionalMethodMap (), var_typedefinition_10288.readProperty_mEnumerationDescriptor (), var_typedefinition_10288.readProperty_mHandledOperatorFlags (), var_typedefinition_10288.readProperty_mAddAssignOperatorArguments (), var_typedefinition_10288.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-boolset.galgas", 288))), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 288)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 312)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  const GALGAS_boolsetTypeForGeneration temp_2 = this ;
  const GALGAS_boolsetTypeForGeneration temp_3 = this ;
  const GALGAS_boolsetTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (inCompiler, extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 314)).readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 315)), temp_3.readProperty_mFlagList (), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 317)).left_shift_operation (temp_4.readProperty_mFlagList ().getter_count (SOURCE_FILE ("type-boolset.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 317)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 317)) COMMA_SOURCE_FILE ("type-boolset.galgas", 313))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Function 'weakSuffix'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_weakSuffix (Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("-weak") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_weakSuffix [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_weakSuffix (Compiler * inCompiler,
                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                           const GALGAS_location & /* inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  return function_weakSuffix (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_weakSuffix ("weakSuffix",
                                                            functionWithGenericHeader_weakSuffix,
                                                            & kTypeDescriptor_GALGAS_string,
                                                            0,
                                                            functionArgs_weakSuffix) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@classDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_classDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_classDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("valueclass @").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 171)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classDeclarationAST temp_0 = this ;
  const GALGAS_classDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_6480 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 182)), temp_1.readProperty_mClassTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 182)) ;
  {
  const GALGAS_classDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6480, temp_2, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 183)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_classDeclarationAST temp_4 = this ;
    test_3 = GALGAS_bool (kIsNotEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_classDeclarationAST temp_5 = this ;
      const GALGAS_classDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6480, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 188)), temp_6.readProperty_mSuperClassName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 188)) COMMA_SOURCE_FILE ("type-class.galgas", 186)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_7 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_6910 (temp_7.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_6910.hasCurrentObject ()) {
    {
    const GALGAS_classDeclarationAST temp_8 = this ;
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6480, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_6910.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 195)), temp_8.readProperty_mSuperClassName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 195)) COMMA_SOURCE_FILE ("type-class.galgas", 193)) ;
    }
    enumerator_6910.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_getterMap var_getterMap_7794 ;
  GALGAS_setterMap var_setterMap_7823 ;
  GALGAS_instanceMethodMap var_instanceMethodMap_7860 ;
  GALGAS_typedPropertyList var_inheritedTypedPropertyList_7905 ;
  GALGAS_propertyMap var_attributeMap_7953 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 212)) ;
  GALGAS_unifiedTypeMapEntry var_superClassIndex_8026 ;
  GALGAS_bool var_generateHeaderInSeparateFile_8056 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_8026 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 217)) ;
      {
      routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_7794, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 218)) ;
      }
      var_setterMap_7823 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 219)) ;
      var_instanceMethodMap_7860 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 220)) ;
      var_inheritedTypedPropertyList_7905 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 221)) ;
      var_attributeMap_7953 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 222)) ;
      const GALGAS_classDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_8056 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_classDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperClassName (), var_superClassIndex_8026, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 230)) ;
    }
    GALGAS_unifiedTypeDefinition var_superTypeDefinition_8731 ;
    const GALGAS_classDeclarationAST temp_4 = this ;
    extensionMethod_searchType (ioArgument_ioTypeMap, temp_4.readProperty_mSuperClassName (), var_superTypeDefinition_8731, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 231)) ;
    var_inheritedTypedPropertyList_7905 = var_superTypeDefinition_8731.readProperty_mAllTypedPropertyList () ;
    var_attributeMap_7953 = var_superTypeDefinition_8731.readProperty_mPropertyMap () ;
    var_generateHeaderInSeparateFile_8056 = var_superTypeDefinition_8731.readProperty_mGenerateHeaderInSeparateFile () ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_superTypeDefinition_8731.readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("type-class.galgas", 236)).operator_not (SOURCE_FILE ("type-class.galgas", 236)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_classDeclarationAST temp_6 = this ;
        const GALGAS_classDeclarationAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mSuperClassName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_7.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 237)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 237)), fixItArray8  COMMA_SOURCE_FILE ("type-class.galgas", 237)) ;
      }
    }
    var_setterMap_7823 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 240)) ;
    cEnumerator_setterMap enumerator_9271 (var_superTypeDefinition_8731.readProperty_mSetterMap (), kENUMERATION_UP) ;
    while (enumerator_9271.hasCurrentObject ()) {
      {
      var_setterMap_7823.setter_insertKey (enumerator_9271.current_lkey (HERE), enumerator_9271.current_mKind (HERE), enumerator_9271.current_mParameterList (HERE), enumerator_9271.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 247)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 242)) ;
      }
      enumerator_9271.gotoNextObject () ;
    }
    var_getterMap_7794 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 252)) ;
    cEnumerator_getterMap enumerator_9669 (var_superTypeDefinition_8731.readProperty_mGetterMap (), kENUMERATION_UP) ;
    while (enumerator_9669.hasCurrentObject ()) {
      {
      var_getterMap_7794.setter_insertKey (enumerator_9669.current_lkey (HERE), enumerator_9669.current_mKind (HERE), enumerator_9669.current_mArgumentTypeList (HERE), enumerator_9669.current_mDeclarationLocation (HERE), enumerator_9669.current_mHasCompilerArgument (HERE), enumerator_9669.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 262)), enumerator_9669.current_mGetterNameThatObsoletesInvokationName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 255)) ;
      }
      enumerator_9669.gotoNextObject () ;
    }
    var_instanceMethodMap_7860 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 267)) ;
    cEnumerator_instanceMethodMap enumerator_10142 (var_superTypeDefinition_8731.readProperty_mInstanceMethodMap (), kENUMERATION_UP) ;
    while (enumerator_10142.hasCurrentObject ()) {
      {
      var_instanceMethodMap_7860.setter_insertKey (enumerator_10142.current_lkey (HERE), enumerator_10142.current_mKind (HERE), enumerator_10142.current_mParameterList (HERE), enumerator_10142.current_mDeclarationLocation (HERE), enumerator_10142.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 276)), enumerator_10142.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 270)) ;
      }
      enumerator_10142.gotoNextObject () ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_classIndex_10551 ;
  {
  const GALGAS_classDeclarationAST temp_9 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_9.readProperty_mClassTypeName (), var_classIndex_10551, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 282)) ;
  }
  GALGAS_functionSignature var_constructorPropertyTypeList_10647 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 284)) ;
  cEnumerator_typedPropertyList enumerator_10724 (var_inheritedTypedPropertyList_7905, kENUMERATION_UP) ;
  while (enumerator_10724.hasCurrentObject ()) {
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = enumerator_10724.current_hasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_10724.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 287)) ;
    }
    var_constructorPropertyTypeList_10647.addAssign_operation (temp_10, enumerator_10724.current_mPropertyTypeEntry (HERE), enumerator_10724.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 286)) ;
    enumerator_10724.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_12 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_11020 (temp_12.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_11020.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = enumerator_11020.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-class.galgas", 292)).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (enumerator_11020.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a class"), fixItArray14  COMMA_SOURCE_FILE ("type-class.galgas", 293)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_11244 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11020.current_mPropertyTypeName (HERE), var_attributeTypeIndex_11244, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 295)) ;
    }
    GALGAS_lstring temp_15 ;
    const enumGalgasBool test_16 = enumerator_11020.current_selector (HERE).boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = enumerator_11020.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_16) {
      temp_15 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 297)) ;
    }
    var_constructorPropertyTypeList_10647.addAssign_operation (temp_15, var_attributeTypeIndex_11244, enumerator_11020.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 296)) ;
    {
    var_attributeMap_7953.setter_insertKey (enumerator_11020.current_mPropertyName (HERE), extensionGetter_accessControl (enumerator_11020.current_mAccessControl (HERE), var_classIndex_10551, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 302)), enumerator_11020.current_isConstant (HERE), var_attributeTypeIndex_11244, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 300)) ;
    }
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = var_getterMap_7794.getter_hasKey (enumerator_11020.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-class.galgas", 306)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_11020.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_11020.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 307)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 307)), fixItArray18  COMMA_SOURCE_FILE ("type-class.galgas", 307)) ;
      }
    }
    enumerator_11020.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_11833 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 311)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    const GALGAS_classDeclarationAST temp_20 = this ;
    test_19 = temp_20.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 312)).boolEnum () ;
    if (kBoolTrue == test_19) {
      {
      var_constructorMap_11833.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 314)), var_constructorPropertyTypeList_10647, GALGAS_bool (false), var_classIndex_10551, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 313)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedPropertyList_12110 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 321)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList_12172 = var_inheritedTypedPropertyList_7905 ;
  const GALGAS_classDeclarationAST temp_21 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_12307 (temp_21.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12307.hasCurrentObject ()) {
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = enumerator_12307.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-class.galgas", 324)).boolEnum () ;
      if (kBoolTrue == test_22) {
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (enumerator_12307.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a class"), fixItArray23  COMMA_SOURCE_FILE ("type-class.galgas", 325)) ;
      }
    }
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_12531 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12307.current_mPropertyTypeName (HERE), var_attributeTypeIndex_12531, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 327)) ;
    }
    var_currentClassTypedPropertyList_12110.addAssign_operation (var_attributeTypeIndex_12531, enumerator_12307.current_mPropertyName (HERE), enumerator_12307.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 328)), enumerator_12307.current_selector (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 328)) ;
    var_allTypedAttributeList_12172.addAssign_operation (var_attributeTypeIndex_12531, enumerator_12307.current_mPropertyName (HERE), enumerator_12307.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 329)), enumerator_12307.current_selector (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 329)) ;
    enumerator_12307.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_12888 (var_currentClassTypedPropertyList_12110, kENUMERATION_UP) ;
  while (enumerator_12888.hasCurrentObject ()) {
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      test_24 = enumerator_12888.current_hasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_24) {
        {
        GALGAS_formalParameterSignature temp_25 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 337)) ;
        temp_25.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 337)), enumerator_12888.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-class.galgas", 337)), enumerator_12888.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 337)) ;
        var_setterMap_7823.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_12888.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-class.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 335)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 335)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 335)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 336)), temp_25, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-class.galgas", 339)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 334)) ;
        }
      }
    }
    enumerator_12888.gotoNextObject () ;
  }
  {
  const GALGAS_classDeclarationAST temp_26 = this ;
  const GALGAS_classDeclarationAST temp_27 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_26.readProperty_mClassTypeName (), GALGAS_bool (true), var_getterMap_7794, var_setterMap_7823, var_instanceMethodMap_7860, temp_27.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 345)) ;
  }
  const GALGAS_classDeclarationAST temp_28 = this ;
  GALGAS_string temp_29 ;
  const enumGalgasBool test_30 = temp_28.readProperty_mIsAbstract ().boolEnum () ;
  if (kBoolTrue == test_30) {
    temp_29 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_30) {
    temp_29 = GALGAS_string ("default") ;
  }
  GALGAS_string var_defaultConstructorName_13822 = temp_29 ;
  cEnumerator_typedPropertyList enumerator_13922 (var_allTypedAttributeList_12172, kENUMERATION_UP) ;
  bool bool_31 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_13822.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_13922.hasCurrentObject () && bool_31) {
    while (enumerator_13922.hasCurrentObject () && bool_31) {
      enumGalgasBool test_32 = kBoolTrue ;
      if (kBoolTrue == test_32) {
        test_32 = GALGAS_bool (kIsEqual, extensionGetter_definition (enumerator_13922.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 361)).readProperty_defaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_32) {
          var_defaultConstructorName_13822 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_13922.gotoNextObject () ;
      if (enumerator_13922.hasCurrentObject ()) {
        bool_31 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_13822.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
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
  GALGAS_unifiedTypeDefinition var_typeDefinition_14150 = GALGAS_unifiedTypeDefinition::constructor_new (temp_33.readProperty_mClassTypeName (), temp_34.readProperty_isPredefined (), temp_35.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 369)), var_superClassIndex_8026, GALGAS_typeKindEnum::constructor_classType (temp_36.readProperty_mIsReference ()  COMMA_SOURCE_FILE ("type-class.galgas", 371)), GALGAS_bool (false), var_allTypedAttributeList_12172, var_attributeMap_7953, var_currentClassTypedPropertyList_12110, var_constructorMap_11833, var_getterMap_7794, var_setterMap_7823, var_instanceMethodMap_7860, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 380)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 381)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 382)), temp_38, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 384)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 385)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 386)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 387)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 388)), var_generateHeaderInSeparateFile_8056, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 390)), var_defaultConstructorName_13822, GALGAS_string ("class-").add_operation (temp_40.readProperty_mClassTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-class.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 392)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-class.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 366)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14150.readProperty_mTypeName (), var_typeDefinition_14150, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 395)) ;
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
                                                        const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                        const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classDeclarationAST temp_0 = this ;
  GALGAS_lstring var_classTypeNameForUsefulness_15891 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 408)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_15891, var_classTypeNameForUsefulness_15891, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 409)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_classDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_classDeclarationAST temp_3 = this ;
      GALGAS_lstring var_superClassNameForUsefulness_16124 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 411)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_15891, var_superClassNameForUsefulness_16124 COMMA_SOURCE_FILE ("type-class.galgas", 412)) ;
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
      GALGAS_lstring var_weakRefTypeNameForUsefulness_16354 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_6.readProperty_mClassTypeName ().readProperty_string ().add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 415)), temp_7.readProperty_mClassTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 415)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_15891, var_weakRefTypeNameForUsefulness_16354 COMMA_SOURCE_FILE ("type-class.galgas", 416)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_16646 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_8.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 419)) ;
  const GALGAS_classDeclarationAST temp_9 = this ;
  GALGAS_unifiedTypeMapEntry temp_10 ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, temp_9.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 422)) ;
  }else if (kBoolFalse == test_11) {
    const GALGAS_classDeclarationAST temp_12 = this ;
    temp_10 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_12.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 423)) ;
  }
  GALGAS_unifiedTypeMapEntry var_superClassEntry_16753 = temp_10 ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (kIsNotEqual, var_superClassEntry_16753.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 428)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_bool var_superClassIsReference_17182 ;
      extensionGetter_definition (var_superClassEntry_16753, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 429)).readProperty_mTypeKindEnum ().method_classType (var_superClassIsReference_17182, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 429)) ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_classDeclarationAST temp_15 = this ;
        test_14 = var_superClassIsReference_17182.operator_and (temp_15.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 430)) COMMA_SOURCE_FILE ("type-class.galgas", 430)).boolEnum () ;
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
          test_18 = var_superClassIsReference_17182.operator_not (SOURCE_FILE ("type-class.galgas", 432)).operator_and (temp_19.readProperty_mIsReference () COMMA_SOURCE_FILE ("type-class.galgas", 432)).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GALGAS_classDeclarationAST temp_20 = this ;
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'valueclass', as its super class"), fixItArray21  COMMA_SOURCE_FILE ("type-class.galgas", 433)) ;
          }
        }
      }
    }
  }
  GALGAS_typedPropertyList var_allAttributeList_17753 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsEqual, var_superClassEntry_16753.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 440)))).boolEnum () ;
    if (kBoolTrue == test_22) {
      var_allAttributeList_17753 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 441)) ;
    }
  }
  if (kBoolFalse == test_22) {
    var_allAttributeList_17753 = extensionGetter_definition (var_superClassEntry_16753, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 456)).readProperty_mAllTypedPropertyList () ;
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
  GALGAS_typedPropertyList var_typedAttributeList_18781 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 464)) ;
  GALGAS_propertyIndexMap var_attributeMap_18831 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 465)) ;
  const GALGAS_classDeclarationAST temp_27 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_18933 (temp_27.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_18933.hasCurrentObject ()) {
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      test_28 = enumerator_18933.current_mInitialization (HERE).getter_isSome (SOURCE_FILE ("type-class.galgas", 467)).boolEnum () ;
      if (kBoolTrue == test_28) {
        TC_Array <C_FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (enumerator_18933.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("property initialization is not handled for a class"), fixItArray29  COMMA_SOURCE_FILE ("type-class.galgas", 468)) ;
      }
    }
    GALGAS_lstring var_propertyTypeNameForUsefulness_19115 = function_typeNameForUsefulEntitiesGraph (enumerator_18933.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 470)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_15891, var_propertyTypeNameForUsefulness_19115 COMMA_SOURCE_FILE ("type-class.galgas", 471)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_19307 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_18933.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 472)) ;
    var_typedAttributeList_18781.addAssign_operation (var_t_19307, enumerator_18933.current_mPropertyName (HERE), enumerator_18933.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 476)), enumerator_18933.current_selector (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 473)) ;
    var_allAttributeList_17753.addAssign_operation (var_t_19307, enumerator_18933.current_mPropertyName (HERE), enumerator_18933.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 481)), enumerator_18933.current_selector (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 478)) ;
    {
    var_attributeMap_18831.setter_insertKey (enumerator_18933.current_mPropertyName (HERE), var_t_19307, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 483)) ;
    }
    enumerator_18933.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_30 = this ;
  const GALGAS_classDeclarationAST temp_31 = this ;
  const GALGAS_classDeclarationAST temp_32 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (temp_30.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 487)), GALGAS_classTypeForGeneration::constructor_new (var_selfType_16646, temp_31.readProperty_mIsAbstract (), temp_32.readProperty_mIsReference (), var_superClassEntry_16753, var_allAttributeList_17753, var_typedAttributeList_18781, extensionGetter_definition (var_selfType_16646, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 495)).readProperty_mGenerateHeaderInSeparateFile ()  COMMA_SOURCE_FILE ("type-class.galgas", 488))  COMMA_SOURCE_FILE ("type-class.galgas", 486)) ;
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
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 520)).operator_not (SOURCE_FILE ("type-class.galgas", 520)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_classTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 521)) ;
    }
  }
  const GALGAS_classTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_21278 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 523)) ;
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
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21278.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 527)), temp_8, temp_11.readProperty_mIsAbstract (), temp_12.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 525))) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_classTypeForGeneration temp_13 = this ;
    const GALGAS_classTypeForGeneration temp_14 = this ;
    GALGAS_string temp_15 ;
    const enumGalgasBool test_16 = temp_14.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 536)).boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_16) {
      const GALGAS_classTypeForGeneration temp_17 = this ;
      temp_15 = extensionGetter_identifierRepresentation (temp_17.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 536)) ;
    }
    const GALGAS_classTypeForGeneration temp_18 = this ;
    const GALGAS_classTypeForGeneration temp_19 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21278.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_13.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 535)), temp_15, temp_18.readProperty_mIsAbstract (), temp_19.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 533))) ;
  }
  const GALGAS_classTypeForGeneration temp_20 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_21278.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_20.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 543)), var_selfTypeDefinition_21278.readProperty_mIsConcrete (), var_selfTypeDefinition_21278.readProperty_mConstructorMap (), var_selfTypeDefinition_21278.readProperty_mGetterMap (), var_selfTypeDefinition_21278.readProperty_mSetterMap (), var_selfTypeDefinition_21278.readProperty_mInstanceMethodMap (), var_selfTypeDefinition_21278.readProperty_mClassMethodMap (), var_selfTypeDefinition_21278.readProperty_mOptionalMethodMap (), var_selfTypeDefinition_21278.readProperty_mEnumerationDescriptor (), var_selfTypeDefinition_21278.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_21278.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_21278.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-class.galgas", 541))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 541)) ;
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
  cEnumerator_typedPropertyList enumerator_23080 (temp_0.readProperty_mCurrentTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_23080.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_23080.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 564)) ;
    enumerator_23080.gotoNextObject () ;
  }
  const GALGAS_classTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_23176 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 566)) ;
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
          const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 572)).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_9) {
            const GALGAS_classTypeForGeneration temp_10 = this ;
            temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 572)) ;
          }
          const GALGAS_classTypeForGeneration temp_11 = this ;
          const GALGAS_classTypeForGeneration temp_12 = this ;
          const GALGAS_classTypeForGeneration temp_13 = this ;
          const GALGAS_classTypeForGeneration temp_14 = this ;
          const GALGAS_classTypeForGeneration temp_15 = this ;
          GALGAS_string var_part_31__23319 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23176.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 571)), temp_8, temp_11.readProperty_mCurrentTypedAttributeList (), temp_12.readProperty_mAllTypedAttributeList (), temp_13.readProperty_mIsAbstract (), extensionGetter_definition (temp_14.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 576)).readProperty_mGetterMap (), extensionGetter_definition (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 577)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 569))) ;
          const GALGAS_classTypeForGeneration temp_16 = this ;
          const GALGAS_classTypeForGeneration temp_17 = this ;
          GALGAS_string temp_18 ;
          const enumGalgasBool test_19 = temp_17.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 582)).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_19) {
            const GALGAS_classTypeForGeneration temp_20 = this ;
            temp_18 = extensionGetter_identifierRepresentation (temp_20.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 582)) ;
          }
          const GALGAS_classTypeForGeneration temp_21 = this ;
          const GALGAS_classTypeForGeneration temp_22 = this ;
          const GALGAS_classTypeForGeneration temp_23 = this ;
          GALGAS_string var_part_32__23834 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23176.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_16.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 581)), temp_18, temp_21.readProperty_mCurrentTypedAttributeList (), temp_22.readProperty_mAllTypedAttributeList (), temp_23.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 579))) ;
          const GALGAS_classTypeForGeneration temp_24 = this ;
          GALGAS_string var_headerFileName_24235 = GALGAS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_24.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 587)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 587)) ;
          {
          GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 589)), var_headerFileName_24235, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_part_31__23319, GALGAS_string ("\n\n"), var_part_32__23834, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 588)) ;
          }
          outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_24235, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 599)).add_operation (GALGAS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 599)) ;
        }
      }
      if (kBoolFalse == test_4) {
        const GALGAS_classTypeForGeneration temp_25 = this ;
        const GALGAS_classTypeForGeneration temp_26 = this ;
        GALGAS_string temp_27 ;
        const enumGalgasBool test_28 = temp_26.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 604)).boolEnum () ;
        if (kBoolTrue == test_28) {
          temp_27 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_28) {
          const GALGAS_classTypeForGeneration temp_29 = this ;
          temp_27 = extensionGetter_identifierRepresentation (temp_29.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 604)) ;
        }
        const GALGAS_classTypeForGeneration temp_30 = this ;
        const GALGAS_classTypeForGeneration temp_31 = this ;
        const GALGAS_classTypeForGeneration temp_32 = this ;
        const GALGAS_classTypeForGeneration temp_33 = this ;
        const GALGAS_classTypeForGeneration temp_34 = this ;
        outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23176.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_25.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 603)), temp_27, temp_30.readProperty_mCurrentTypedAttributeList (), temp_31.readProperty_mAllTypedAttributeList (), temp_32.readProperty_mIsAbstract (), extensionGetter_definition (temp_33.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 608)).readProperty_mGetterMap (), extensionGetter_definition (temp_34.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 609)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 601))) ;
        const GALGAS_classTypeForGeneration temp_35 = this ;
        const GALGAS_classTypeForGeneration temp_36 = this ;
        GALGAS_string temp_37 ;
        const enumGalgasBool test_38 = temp_36.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 614)).boolEnum () ;
        if (kBoolTrue == test_38) {
          temp_37 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_38) {
          const GALGAS_classTypeForGeneration temp_39 = this ;
          temp_37 = extensionGetter_identifierRepresentation (temp_39.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 614)) ;
        }
        const GALGAS_classTypeForGeneration temp_40 = this ;
        const GALGAS_classTypeForGeneration temp_41 = this ;
        const GALGAS_classTypeForGeneration temp_42 = this ;
        outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23176.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_35.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 613)), temp_37, temp_40.readProperty_mCurrentTypedAttributeList (), temp_41.readProperty_mAllTypedAttributeList (), temp_42.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 611))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 611)) ;
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
        const enumGalgasBool test_48 = temp_46.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 625)).boolEnum () ;
        if (kBoolTrue == test_48) {
          temp_47 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_48) {
          const GALGAS_classTypeForGeneration temp_49 = this ;
          temp_47 = extensionGetter_identifierRepresentation (temp_49.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 625)) ;
        }
        const GALGAS_classTypeForGeneration temp_50 = this ;
        const GALGAS_classTypeForGeneration temp_51 = this ;
        const GALGAS_classTypeForGeneration temp_52 = this ;
        const GALGAS_classTypeForGeneration temp_53 = this ;
        const GALGAS_classTypeForGeneration temp_54 = this ;
        GALGAS_string var_part_31__25767 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23176.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_45.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 624)), temp_47, temp_50.readProperty_mCurrentTypedAttributeList (), temp_51.readProperty_mAllTypedAttributeList (), temp_52.readProperty_mIsAbstract (), extensionGetter_definition (temp_53.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 629)).readProperty_mGetterMap (), extensionGetter_definition (temp_54.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 630)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 622))) ;
        const GALGAS_classTypeForGeneration temp_55 = this ;
        const GALGAS_classTypeForGeneration temp_56 = this ;
        GALGAS_string temp_57 ;
        const enumGalgasBool test_58 = temp_56.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 635)).boolEnum () ;
        if (kBoolTrue == test_58) {
          temp_57 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_58) {
          const GALGAS_classTypeForGeneration temp_59 = this ;
          temp_57 = extensionGetter_identifierRepresentation (temp_59.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 635)) ;
        }
        const GALGAS_classTypeForGeneration temp_60 = this ;
        const GALGAS_classTypeForGeneration temp_61 = this ;
        const GALGAS_classTypeForGeneration temp_62 = this ;
        GALGAS_string var_part_32__26278 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23176.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_55.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 634)), temp_57, temp_60.readProperty_mCurrentTypedAttributeList (), temp_61.readProperty_mAllTypedAttributeList (), temp_62.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 632))) ;
        const GALGAS_classTypeForGeneration temp_63 = this ;
        GALGAS_string var_headerFileName_26675 = GALGAS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_63.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 640)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 640)) ;
        {
        GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 642)), var_headerFileName_26675, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_part_31__25767, GALGAS_string ("\n\n"), var_part_32__26278, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 641)) ;
        }
        outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_26675, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 652)).add_operation (GALGAS_string ("\"\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 652)) ;
      }
    }
    if (kBoolFalse == test_43) {
      const GALGAS_classTypeForGeneration temp_64 = this ;
      const GALGAS_classTypeForGeneration temp_65 = this ;
      GALGAS_string temp_66 ;
      const enumGalgasBool test_67 = temp_65.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 657)).boolEnum () ;
      if (kBoolTrue == test_67) {
        temp_66 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_67) {
        const GALGAS_classTypeForGeneration temp_68 = this ;
        temp_66 = extensionGetter_identifierRepresentation (temp_68.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 657)) ;
      }
      const GALGAS_classTypeForGeneration temp_69 = this ;
      const GALGAS_classTypeForGeneration temp_70 = this ;
      const GALGAS_classTypeForGeneration temp_71 = this ;
      const GALGAS_classTypeForGeneration temp_72 = this ;
      const GALGAS_classTypeForGeneration temp_73 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23176.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_64.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 656)), temp_66, temp_69.readProperty_mCurrentTypedAttributeList (), temp_70.readProperty_mAllTypedAttributeList (), temp_71.readProperty_mIsAbstract (), extensionGetter_definition (temp_72.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 661)).readProperty_mGetterMap (), extensionGetter_definition (temp_73.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 662)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 654))) ;
      const GALGAS_classTypeForGeneration temp_74 = this ;
      const GALGAS_classTypeForGeneration temp_75 = this ;
      GALGAS_string temp_76 ;
      const enumGalgasBool test_77 = temp_75.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 667)).boolEnum () ;
      if (kBoolTrue == test_77) {
        temp_76 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_77) {
        const GALGAS_classTypeForGeneration temp_78 = this ;
        temp_76 = extensionGetter_identifierRepresentation (temp_78.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 667)) ;
      }
      const GALGAS_classTypeForGeneration temp_79 = this ;
      const GALGAS_classTypeForGeneration temp_80 = this ;
      const GALGAS_classTypeForGeneration temp_81 = this ;
      outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23176.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_74.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 666)), temp_76, temp_79.readProperty_mCurrentTypedAttributeList (), temp_80.readProperty_mAllTypedAttributeList (), temp_81.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 664))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 664)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 681)) ;
  const GALGAS_classTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_28622 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 682)) ;
  const GALGAS_classTypeForGeneration temp_2 = this ;
  const GALGAS_classTypeForGeneration temp_3 = this ;
  const GALGAS_classTypeForGeneration temp_4 = this ;
  GALGAS_typedPropertyList var_at_28678 = temp_2.readProperty_mAllTypedAttributeList ().getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint (uint32_t (0U)), temp_3.readProperty_mAllTypedAttributeList ().getter_count (SOURCE_FILE ("type-class.galgas", 684)).substract_operation (temp_4.readProperty_mCurrentTypedAttributeList ().getter_count (SOURCE_FILE ("type-class.galgas", 684)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 684)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 684)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 683)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_classTypeForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_classTypeForGeneration temp_7 = this ;
      const GALGAS_classTypeForGeneration temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = temp_8.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 690)).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_10) {
        const GALGAS_classTypeForGeneration temp_11 = this ;
        temp_9 = extensionGetter_identifierRepresentation (temp_11.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 690)) ;
      }
      const GALGAS_classTypeForGeneration temp_12 = this ;
      const GALGAS_classTypeForGeneration temp_13 = this ;
      const GALGAS_classTypeForGeneration temp_14 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeSpecificImplementation (inCompiler, var_typedefinition_28622.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_7.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 689)), temp_9, temp_12.readProperty_mCurrentTypedAttributeList (), temp_13.readProperty_mAllTypedAttributeList (), var_at_28678, temp_14.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 687))) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_classTypeForGeneration temp_15 = this ;
    const GALGAS_classTypeForGeneration temp_16 = this ;
    GALGAS_string temp_17 ;
    const enumGalgasBool test_18 = temp_16.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 700)).boolEnum () ;
    if (kBoolTrue == test_18) {
      temp_17 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_18) {
      const GALGAS_classTypeForGeneration temp_19 = this ;
      temp_17 = extensionGetter_identifierRepresentation (temp_19.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 700)) ;
    }
    const GALGAS_classTypeForGeneration temp_20 = this ;
    const GALGAS_classTypeForGeneration temp_21 = this ;
    const GALGAS_classTypeForGeneration temp_22 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeSpecificImplementation (inCompiler, var_typedefinition_28622.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 699)), temp_17, temp_20.readProperty_mCurrentTypedAttributeList (), temp_21.readProperty_mAllTypedAttributeList (), var_at_28678, temp_22.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 697))) ;
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
  GALGAS_bool var_generateMethodDeclaration_30233 = GALGAS_bool (true) ;
  GALGAS_string var_suffix_30272 = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GALGAS_methodQualifier::kNotBuilt:
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualAbstract:
    {
      var_suffix_30272 = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtual:
    {
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isBasic:
  case GALGAS_methodQualifier::kEnum_isBasicFinal:
    {
      var_generateMethodDeclaration_30233 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isInherited:
    {
      var_generateMethodDeclaration_30233 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverriding:
    {
      var_suffix_30272 = GALGAS_string (" override") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverridingAbstract:
    {
      var_suffix_30272 = GALGAS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_30233.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("//--- Extension getter ").add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 735)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 735)) ;
      result_result.plusAssign_operation(GALGAS_string ("  public: virtual class GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inReturnedType, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 736)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 736)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 736)) ;
      result_result.plusAssign_operation(GALGAS_string (" getter_").add_operation (constinArgument_inGetterName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-class.galgas", 737)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 737)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 737)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 737)) ;
      GALGAS_bool var_first_30920 = GALGAS_bool (true) ;
      cEnumerator_functionSignature enumerator_30959 (constinArgument_inArgumentTypeList, kENUMERATION_UP) ;
      while (enumerator_30959.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_first_30920.boolEnum () ;
          if (kBoolTrue == test_1) {
            var_first_30920 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 744)) ;
        }
        result_result.plusAssign_operation(GALGAS_string ("const class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_30959.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 746)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 746)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 746)) ;
        result_result.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_30959.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 747)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 747)) ;
        enumerator_30959.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_first_30920.operator_not (SOURCE_FILE ("type-class.galgas", 750)).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 751)) ;
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("Compiler *"), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 753)) ;
          var_first_30920 = GALGAS_bool (false) ;
        }
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = var_first_30920.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("LOCATION_ARGS") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssign_operation(temp_4.add_operation (GALGAS_string (") const"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 756)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 756)) ;
      result_result.plusAssign_operation(var_suffix_30272.add_operation (GALGAS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 757)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 757)) ;
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
  GALGAS_bool var_generateMethodDeclaration_31998 = GALGAS_bool (true) ;
  GALGAS_string var_suffix_32037 = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GALGAS_methodQualifier::kNotBuilt:
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualAbstract:
    {
      var_suffix_32037 = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtual:
    {
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isBasic:
  case GALGAS_methodQualifier::kEnum_isBasicFinal:
    {
      var_generateMethodDeclaration_31998 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isInherited:
    {
      var_generateMethodDeclaration_31998 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverriding:
    {
      var_suffix_32037 = GALGAS_string (" override") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverridingAbstract:
    {
      var_suffix_32037 = GALGAS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_31998.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("//--- Extension method ").add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 786)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 786)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 786)) ;
      result_result.plusAssign_operation(GALGAS_string ("  public: virtual void method_").add_operation (constinArgument_inMethodName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-class.galgas", 787)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 787)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 787)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 787)) ;
      GALGAS_bool var_first_32616 = GALGAS_bool (true) ;
      cEnumerator_formalParameterSignature enumerator_32655 (constinArgument_inArgumentTypeList, kENUMERATION_UP) ;
      while (enumerator_32655.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_first_32616.boolEnum () ;
          if (kBoolTrue == test_1) {
            var_first_32616 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 794)) ;
        }
        switch (enumerator_32655.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            result_result.plusAssign_operation(GALGAS_string ("const class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_32655.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 798)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 798)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 798)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_32655.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 800)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 800)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 800)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 800)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_32655.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 802)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 802)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 802)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 802)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_32655.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 804)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 804)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 804)) ;
          }
          break ;
        }
        result_result.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_32655.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 806)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 806)) ;
        enumerator_32655.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_first_32616.operator_not (SOURCE_FILE ("type-class.galgas", 809)).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 810)) ;
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("Compiler *"), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 812)) ;
          var_first_32616 = GALGAS_bool (false) ;
        }
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = var_first_32616.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("LOCATION_ARGS") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssign_operation(temp_4.add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 815)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 815)) ;
      result_result.plusAssign_operation(var_suffix_32037.add_operation (GALGAS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 816)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 816)) ;
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
//Overriding extension getter '@weakReferenceDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_weakReferenceDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("weak reference @").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 18)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_1625 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 30)), temp_1.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 30)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_1625, temp_2, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 31)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
    test_3 = GALGAS_bool (kIsNotEqual, temp_4.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
      const GALGAS_weakReferenceDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_1625, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 35)), temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 35)) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 33)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_superClassIndex_2906 ;
  GALGAS_bool var_generateHeaderInSeparateFile_2934 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_2906 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 59)) ;
      const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_2934 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_weakReferenceDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperWeakReferenceTypeName (), var_superClassIndex_2906, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 67)) ;
    }
    GALGAS_unifiedTypeDefinition var_superTypeDefinition_3452 ;
    const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
    extensionMethod_searchType (ioArgument_ioTypeMap, temp_4.readProperty_mSuperWeakReferenceTypeName (), var_superTypeDefinition_3452, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 68)) ;
    var_generateHeaderInSeparateFile_2934 = var_superTypeDefinition_3452.readProperty_mGenerateHeaderInSeparateFile () ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_superTypeDefinition_3452.readProperty_mTypeKindEnum ().getter_isWeakReferenceType (SOURCE_FILE ("type-weak-reference.galgas", 79)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 79)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_weakReferenceDeclarationAST temp_6 = this ;
        const GALGAS_weakReferenceDeclarationAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_7.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 80)).add_operation (GALGAS_string (" should be a weak reference type"), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 80)), fixItArray8  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 80)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_weakReferenceIndex_4063 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_9 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_9.readProperty_mWeakReferenceTypeName (), var_weakReferenceIndex_4063, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 84)) ;
  }
  GALGAS_constructorMap var_constructorMap_4126 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 89)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_10 = this ;
  var_constructorMap_4126.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nil"), temp_10.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 91)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 92)), GALGAS_bool (false), var_weakReferenceIndex_4063, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 90)) ;
  }
  GALGAS_getterMap var_getterMap_4325 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 97)) ;
  GALGAS_setterMap var_setterMap_4357 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 98)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4397 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 99)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_11 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_11.readProperty_mWeakReferenceTypeName (), GALGAS_bool (false), var_getterMap_4325, var_setterMap_4357, var_instanceMethodMap_4397, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 100)) ;
  }
  cEnumerator_getterMap enumerator_4761 (var_getterMap_4325, kENUMERATION_UP) ;
  while (enumerator_4761.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (enumerator_4761.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray12  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 114)) ;
    enumerator_4761.gotoNextObject () ;
  }
  cEnumerator_setterMap enumerator_4862 (var_setterMap_4357, kENUMERATION_UP) ;
  while (enumerator_4862.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray13 ;
    inCompiler->emitSemanticError (enumerator_4862.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray13  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 117)) ;
    enumerator_4862.gotoNextObject () ;
  }
  cEnumerator_instanceMethodMap enumerator_4963 (var_instanceMethodMap_4397, kENUMERATION_UP) ;
  while (enumerator_4963.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (enumerator_4963.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray14  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 120)) ;
    enumerator_4963.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_classIndex_5134 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_15 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_15.readProperty_mClassTypeName (), var_classIndex_5134, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 123)) ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_16 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_17 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_18 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_5152 = GALGAS_unifiedTypeDefinition::constructor_new (temp_16.readProperty_mWeakReferenceTypeName (), temp_17.readProperty_isPredefined (), GALGAS_bool (true), var_superClassIndex_2906, GALGAS_typeKindEnum::constructor_weakReferenceType (var_classIndex_5134  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 129)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 131)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 132)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 133)), var_constructorMap_4126, GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 135)), GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 136)), GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 137)), GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 138)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 139)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 140)), GALGAS_operators::constructor_isReferenceEquatable (SOURCE_FILE ("type-weak-reference.galgas", 141)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 142)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 143)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 144)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 145)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 146)), var_generateHeaderInSeparateFile_2934, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 148)), GALGAS_string ("nil"), GALGAS_string ("weak-reference-").add_operation (temp_18.readProperty_mWeakReferenceTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 150)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-weak-reference.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 124)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_5152.readProperty_mTypeName (), var_typeDefinition_5152, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 153)) ;
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
  GALGAS_lstring var_weakRefTypeNameForUsefulness_6815 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 170)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_weakRefTypeNameForUsefulness_6815, var_weakRefTypeNameForUsefulness_6815, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 171)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_weakReferenceDeclarationAST temp_3 = this ;
      GALGAS_lstring var_superWeakRefNameForUsefulness_7068 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 173)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_weakRefTypeNameForUsefulness_6815, var_superWeakRefNameForUsefulness_7068 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 174)) ;
      }
    }
  }
  const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_7317 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_4.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 177)) ;
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
  GALGAS_typedPropertyList var_allAttributeList_7794 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, var_superClassEntry_7428.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 187)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_allAttributeList_7794 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 188)) ;
    }
  }
  if (kBoolFalse == test_9) {
    var_allAttributeList_7794 = extensionGetter_definition (var_superClassEntry_7428, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 203)).readProperty_mAllTypedPropertyList () ;
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
  GALGAS_typedPropertyList var_typedAttributeList_8708 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 209)) ;
  GALGAS_propertyIndexMap var_attributeMap_8756 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 210)) ;
  const GALGAS_weakReferenceDeclarationAST temp_14 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_8856 (temp_14.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_8856.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_t_8892 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_8856.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 212)) ;
    var_typedAttributeList_8708.addAssign_operation (var_t_8892, enumerator_8856.current_mPropertyName (HERE), enumerator_8856.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 216)), enumerator_8856.current_selector (HERE)  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 213)) ;
    var_allAttributeList_7794.addAssign_operation (var_t_8892, enumerator_8856.current_mPropertyName (HERE), enumerator_8856.current_isConstant (HERE).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 221)), enumerator_8856.current_selector (HERE)  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 218)) ;
    {
    var_attributeMap_8756.setter_insertKey (enumerator_8856.current_mPropertyName (HERE), var_t_8892, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 223)) ;
    }
    enumerator_8856.gotoNextObject () ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_15 = this ;
  GALGAS_unifiedTypeMapEntry var_referenceClassType_9266 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_15.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 226)) ;
  const GALGAS_weakReferenceDeclarationAST temp_16 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("weak reference ").add_operation (temp_16.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 230)), GALGAS_weakReferenceTypeForGeneration::constructor_new (var_selfType_7317, var_referenceClassType_9266, var_superClassEntry_7428, var_allAttributeList_7794, var_typedAttributeList_8708, extensionGetter_definition (var_selfType_7317, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 237)).readProperty_mGenerateHeaderInSeparateFile ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 231))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 229)) ;
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
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 257)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 257)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_weakReferenceTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 258)) ;
    }
  }
  const GALGAS_weakReferenceTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReferenceClassType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 260)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_4 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_10862 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 261)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeHeader_31_ (inCompiler, extensionGetter_identifierRepresentation (temp_5.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 263)), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 264)), temp_8 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 262))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typedefinition_10862.readProperty_mTypeName ().readProperty_string (), var_typedefinition_10862.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 269)), var_typedefinition_10862.readProperty_mIsConcrete (), var_typedefinition_10862.readProperty_mConstructorMap (), var_typedefinition_10862.readProperty_mGetterMap (), var_typedefinition_10862.readProperty_mSetterMap (), var_typedefinition_10862.readProperty_mInstanceMethodMap (), var_typedefinition_10862.readProperty_mClassMethodMap (), var_typedefinition_10862.readProperty_mOptionalMethodMap (), var_typedefinition_10862.readProperty_mEnumerationDescriptor (), var_typedefinition_10862.readProperty_mHandledOperatorFlags (), var_typedefinition_10862.readProperty_mAddAssignOperatorArguments (), var_typedefinition_10862.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-weak-reference.galgas", 267))), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 267)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 291)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_12168 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 292)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_2 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_3 = this ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = temp_3.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 296)).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_5) {
    const GALGAS_weakReferenceTypeForGeneration temp_6 = this ;
    temp_4 = extensionGetter_identifierRepresentation (temp_6.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 296)) ;
  }
  const GALGAS_weakReferenceTypeForGeneration temp_7 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_8 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_9 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_10 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_11 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 294)), var_typedefinition_12168.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 295)), temp_4, temp_7.readProperty_mTypedAttributeList (), temp_8.readProperty_mAllTypedPropertyList (), temp_9.readProperty_mAllTypedPropertyList ().getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint (uint32_t (0U)), temp_10.readProperty_mAllTypedPropertyList ().getter_count (SOURCE_FILE ("type-weak-reference.galgas", 299)).substract_operation (temp_11.readProperty_mTypedAttributeList ().getter_count (SOURCE_FILE ("type-weak-reference.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 299)) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 293))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4297 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 120)), temp_1.readProperty_mEnumTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 120)) ;
  {
  const GALGAS_enumDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4297, temp_2, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 121)) ;
  }
  GALGAS_bool var_circularReference_4525 = GALGAS_bool (true) ;
  const GALGAS_enumDeclarationAST temp_3 = this ;
  cEnumerator_enumConstantList enumerator_4559 (temp_3.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_4 = var_circularReference_4525.isValidAndTrue () ;
  if (enumerator_4559.hasCurrentObject () && bool_4) {
    while (enumerator_4559.hasCurrentObject () && bool_4) {
      GALGAS_bool var_namesCurrentType_4648 = GALGAS_bool (false) ;
      cEnumerator__32_lstringlist enumerator_4690 (enumerator_4559.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
      bool bool_5 = var_namesCurrentType_4648.operator_not (SOURCE_FILE ("type-enum.galgas", 126)).isValidAndTrue () ;
      if (enumerator_4690.hasCurrentObject () && bool_5) {
        while (enumerator_4690.hasCurrentObject () && bool_5) {
          GALGAS_lstring var_propertyKey_4767 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_4690.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 127)), enumerator_4690.current_mValue_30_ (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 127)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, var_propertyKey_4767.readProperty_string ().objectCompare (var_key_4297.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_namesCurrentType_4648 = GALGAS_bool (true) ;
            }
          }
          enumerator_4690.gotoNextObject () ;
          if (enumerator_4690.hasCurrentObject ()) {
            bool_5 = var_namesCurrentType_4648.operator_not (SOURCE_FILE ("type-enum.galgas", 126)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_namesCurrentType_4648.operator_not (SOURCE_FILE ("type-enum.galgas", 132)).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_circularReference_4525 = GALGAS_bool (false) ;
        }
      }
      enumerator_4559.gotoNextObject () ;
      if (enumerator_4559.hasCurrentObject ()) {
        bool_4 = var_circularReference_4525.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_circularReference_4525.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumDeclarationAST temp_9 = this ;
      cEnumerator_enumConstantList enumerator_5110 (temp_9.readProperty_mConstantList (), kENUMERATION_UP) ;
      while (enumerator_5110.hasCurrentObject ()) {
        cEnumerator__32_lstringlist enumerator_5186 (enumerator_5110.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_5186.hasCurrentObject ()) {
          GALGAS_lstring var_propertyKey_5238 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5186.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 140)), enumerator_5186.current_mValue_30_ (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 140)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, var_propertyKey_5238.readProperty_string ().objectCompare (var_key_4297.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4297, var_propertyKey_5238 COMMA_SOURCE_FILE ("type-enum.galgas", 142)) ;
              }
            }
          }
          enumerator_5186.gotoNextObject () ;
        }
        enumerator_5110.gotoNextObject () ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorMap var_constructorMap_6188 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 160)) ;
  GALGAS_setterMap var_setterMap_6225 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 161)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6265 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 162)) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_6356 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 164)) ;
  GALGAS_unifiedTypeMapEntry var_enumTypeEntry_6458 ;
  {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mEnumTypeName (), var_enumTypeEntry_6458, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 166)) ;
  }
  GALGAS_constantIndexMap var_constantMap_6515 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 168)) ;
  GALGAS_bool var_hasAssociatedValues_6544 = GALGAS_bool (false) ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  cEnumerator_enumConstantList enumerator_6593 (temp_1.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_6593.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_6683 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 171)) ;
    GALGAS_functionSignature var_argumentTypeList_6734 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 172)) ;
    cEnumerator__32_lstringlist enumerator_6774 (enumerator_6593.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_6774.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_6870 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6774.current_mValue_30_ (HERE), var_associatedTypeEntry_6870, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 174)) ;
      }
      var_argumentTypeList_6734.addAssign_operation (enumerator_6774.current_mValue_31_ (HERE), var_associatedTypeEntry_6870, enumerator_6774.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 175)) ;
      var_associatedTypeList_6683.addAssign_operation (var_associatedTypeEntry_6870  COMMA_SOURCE_FILE ("type-enum.galgas", 176)) ;
      var_hasAssociatedValues_6544 = GALGAS_bool (true) ;
      enumerator_6774.gotoNextObject () ;
    }
    {
    var_constantMap_6515.setter_insertKey (enumerator_6593.current_mConstantName (HERE), var_constantMap_6515.getter_count (SOURCE_FILE ("type-enum.galgas", 179)), var_associatedTypeList_6683, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 179)) ;
    }
    {
    var_constructorMap_6188.setter_insertOrReplace (enumerator_6593.current_mConstantName (HERE), var_argumentTypeList_6734, GALGAS_bool (false), var_enumTypeEntry_6458 COMMA_SOURCE_FILE ("type-enum.galgas", 180)) ;
    }
    enumerator_6593.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_2 = this ;
  cEnumerator_enumConstantList enumerator_7308 (temp_2.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_7308.hasCurrentObject ()) {
    GALGAS_optionalMethodSignature var_argumentTypeList_7398 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 189)) ;
    cEnumerator__32_lstringlist enumerator_7438 (enumerator_7308.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_7438.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_7534 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_7438.current_mValue_30_ (HERE), var_associatedTypeEntry_7534, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 191)) ;
      }
      var_argumentTypeList_7398.addAssign_operation (GALGAS_bool (false), enumerator_7438.current_mValue_31_ (HERE), var_associatedTypeEntry_7534, enumerator_7438.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 192)) ;
      enumerator_7438.gotoNextObject () ;
    }
    {
    var_optionalMethodMap_6356.setter_insertKey (enumerator_7308.current_mConstantName (HERE), var_argumentTypeList_7398, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 194)) ;
    }
    enumerator_7308.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_3 = this ;
  cEnumerator_enumConstantList enumerator_7783 (temp_3.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_7783.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_7783.current_mAssociatedValueDefinitionList (HERE).getter_count (SOURCE_FILE ("type-enum.galgas", 201)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_unifiedTypeMapEntryList var_associatedTypeList_7930 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 202)) ;
        GALGAS_formalParameterSignature var_argumentTypeList_7990 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 203)) ;
        cEnumerator__32_lstringlist enumerator_8032 (enumerator_7783.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_8032.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_8130 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8032.current_mValue_30_ (HERE), var_associatedTypeEntry_8130, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 205)) ;
          }
          var_argumentTypeList_7990.addAssign_operation (enumerator_8032.current_mValue_31_ (HERE), var_associatedTypeEntry_8130, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-enum.galgas", 206)), enumerator_8032.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 206)) ;
          var_associatedTypeList_7930.addAssign_operation (var_associatedTypeEntry_8130  COMMA_SOURCE_FILE ("type-enum.galgas", 207)) ;
          var_hasAssociatedValues_6544 = GALGAS_bool (true) ;
          enumerator_8032.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_6265.setter_insertKey (enumerator_7783.current_mConstantName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-enum.galgas", 212)), var_argumentTypeList_7990, enumerator_7783.current_mConstantName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-enum.galgas", 216)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 210)) ;
        }
      }
    }
    enumerator_7783.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap_8627 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_8627, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 222)) ;
  }
  const GALGAS_enumDeclarationAST temp_5 = this ;
  cEnumerator_enumConstantList enumerator_8659 (temp_5.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_8659.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8627, ioArgument_ioTypeMap, GALGAS_string ("is").add_operation (enumerator_8659.current_mConstantName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-enum.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 227)), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 224)) ;
    }
    enumerator_8659.gotoNextObject () ;
  }
  {
  const GALGAS_enumDeclarationAST temp_6 = this ;
  routine_addExtensions_3F__3F__3F__26__26__3F__3F_isClass_26__26__26__3F_acceptSetters (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_6.readProperty_mEnumTypeName (), GALGAS_bool (false), var_getterMap_8627, var_setterMap_6225, var_instanceMethodMap_6265, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 234)) ;
  }
  const GALGAS_enumDeclarationAST temp_7 = this ;
  const GALGAS_enumDeclarationAST temp_8 = this ;
  const GALGAS_enumDeclarationAST temp_9 = this ;
  const GALGAS_enumDeclarationAST temp_10 = this ;
  GALGAS_headerKind temp_11 ;
  const enumGalgasBool test_12 = var_hasAssociatedValues_6544.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-enum.galgas", 275)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-enum.galgas", 275)) ;
  }
  GALGAS_unifiedTypeDefinition var_typeDefinition_9310 = GALGAS_unifiedTypeDefinition::constructor_new (temp_7.readProperty_mEnumTypeName (), temp_8.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-enum.galgas", 252)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("type-enum.galgas", 253)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 255)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 256)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 257)), var_constructorMap_6188, var_getterMap_8627, var_setterMap_6225, var_instanceMethodMap_6265, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 262)), var_optionalMethodMap_6356, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 264)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-enum.galgas", 265)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-enum.galgas", 265)) COMMA_SOURCE_FILE ("type-enum.galgas", 265)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 266)), var_constantMap_6515, temp_9.readProperty_mConstantList (), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 269)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 270)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-enum.galgas", 272)), GALGAS_string::makeEmptyString (), GALGAS_string ("enum-").add_operation (temp_10.readProperty_mEnumTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-enum.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 274)), temp_11, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 248)) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_9310.readProperty_mTypeName (), var_typeDefinition_9310, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 277)) ;
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
  GALGAS_lstring var_nameForUsefulness_10932 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mEnumTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 294)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10932, var_nameForUsefulness_10932, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 295)) ;
  }
  GALGAS_stringlist var_constantList_11104 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 297)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration_11171 = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 298)) ;
  GALGAS_constantIndexMap var_constantMap_11212 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 299)) ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  cEnumerator_enumConstantList enumerator_11268 (temp_1.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_11268.hasCurrentObject ()) {
    var_constantList_11104.addAssign_operation (enumerator_11268.current_mConstantName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 301)) ;
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_11400 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 302)) ;
    GALGAS_stringset var_associatedValueNameSet_11443 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-enum.galgas", 303)) ;
    cEnumerator__32_lstringlist enumerator_11488 (enumerator_11268.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_11488.hasCurrentObject ()) {
      GALGAS_lstring var_propertyTypeNameForUsefulness_11544 = function_typeNameForUsefulEntitiesGraph (enumerator_11488.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 305)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10932, var_propertyTypeNameForUsefulness_11544 COMMA_SOURCE_FILE ("type-enum.galgas", 306)) ;
      }
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_11718 = extensionGetter_searchKey (ioArgument_ioTypeMap, enumerator_11488.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 307)) ;
      var_associatedTypeList_11400.addAssign_operation (var_associatedTypeEntry_11718  COMMA_SOURCE_FILE ("type-enum.galgas", 308)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_associatedValueNameSet_11443.getter_hasKey (enumerator_11488.current_mValue_31_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-enum.galgas", 309)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_11488.current_mValue_31_ (HERE).readProperty_location (), GALGAS_string ("duplicated name"), fixItArray3  COMMA_SOURCE_FILE ("type-enum.galgas", 310)) ;
        }
      }
      var_associatedValueNameSet_11443.addAssign_operation (enumerator_11488.current_mValue_31_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 312)) ;
      enumerator_11488.gotoNextObject () ;
    }
    {
    var_constantMap_11212.setter_insertKey (enumerator_11268.current_mConstantName (HERE), var_constantMap_11212.getter_count (SOURCE_FILE ("type-enum.galgas", 314)), var_associatedTypeList_11400, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 314)) ;
    }
    var_enumConstantListForGeneration_11171.addAssign_operation (enumerator_11268.current_mConstantName (HERE).readProperty_string (), var_associatedTypeList_11400  COMMA_SOURCE_FILE ("type-enum.galgas", 315)) ;
    enumerator_11268.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_12172 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_4.readProperty_mEnumTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 318)) ;
  const GALGAS_enumDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (temp_5.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 320)), GALGAS_enumTypeForGeneration::constructor_new (var_selfType_12172, var_enumConstantListForGeneration_11171  COMMA_SOURCE_FILE ("type-enum.galgas", 321))  COMMA_SOURCE_FILE ("type-enum.galgas", 319)) ;
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
  result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.addString (GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" enum"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).stringValue ()) ;
  result.addString ("*\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) ;\n\n//--------------------------------- Enumeration\n  public: typedef enum {\n    kNotBuilt") ;
  GALGAS_uint index_611_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_611 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_611.hasCurrentObject ()) {
      result.addString (",\n    kEnum_") ;
      result.addString (enumerator_611.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 15)).stringValue ()) ;
      index_611_.increment () ;
      enumerator_611.gotoNextObject () ;
    }
  }
  result.addString ("\n  } enumeration ;\n  \n//--------------------------------- Private data member\n") ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.addString ("  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;\n  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {\n    return mAssociatedValues.unsafePointer () ;\n  }\n\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.addString ("  private: enumeration mEnum ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }\n  public: inline enumeration enumValue (void) const { return mEnum ; }\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.addString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
    result.addString (GALGAS_string (" Phase 2: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).add_operation (GALGAS_string (" enum, associated values"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).stringValue ()) ;
    result.addString ("\n//\n") ;
    GALGAS_uint index_269_ (0) ;
    if (in_CONSTANT_5F_LIST.isValid ()) {
      cEnumerator_enumConstantListForGeneration enumerator_269 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_269.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_269.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 8)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.addString ("//--------------------------------------------------------------------------------------------------\n\nclass cEnumAssociatedValues_") ;
          result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
          result.addString ("_") ;
          result.addString (enumerator_269.current_mConstantName (HERE).stringValue ()) ;
          result.addString (" : public cEnumAssociatedValues {\n") ;
          GALGAS_uint index_583_idx (0) ;
          if (enumerator_269.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_583 (enumerator_269.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_583.hasCurrentObject ()) {
              result.addString ("  public: const GALGAS_") ;
              result.addString (extensionGetter_identifierRepresentation (enumerator_583.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue ()) ;
              result.addString (" mAssociatedValue") ;
              result.addString (index_583_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue ()) ;
              result.addString (" ;\n") ;
              index_583_idx.increment () ;
              enumerator_583.gotoNextObject () ;
            }
          }
          result.addString ("\n//--- Constructor\n  public: cEnumAssociatedValues_") ;
          result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
          result.addString ("_") ;
          result.addString (enumerator_269.current_mConstantName (HERE).stringValue ()) ;
          result.addString (" (") ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_864_idx (0) ;
          if (enumerator_269.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_864 (enumerator_269.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_864.hasCurrentObject ()) {
              result.addString ("const GALGAS_") ;
              result.addString (extensionGetter_identifierRepresentation (enumerator_864.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue ()) ;
              result.addString (" inAssociatedValue") ;
              result.addString (index_864_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue ()) ;
              if (enumerator_864.hasNextObject ()) {
                result.addString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_864_idx.increment () ;
              enumerator_864.gotoNextObject () ;
            }
          }
          result.addString ("\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.addString ("COMMA_LOCATION_ARGS) ;\n\n  public: virtual void description (") ;
          columnMarker = result.currentColumn () ;
          result.addString ("String & ioString,\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.addString ("const int32_t inIndentation) const ;\n  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;\n\n  public: virtual ~ cEnumAssociatedValues_") ;
          result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
          result.addString ("_") ;
          result.addString (enumerator_269.current_mConstantName (HERE).stringValue ()) ;
          result.addString (" (void) {}\n} ;\n\n") ;
          } break ;
        case kBoolFalse : {
          } break ;
        default :
          break ;
        }
        index_269_.increment () ;
        enumerator_269.gotoNextObject () ;
      }
    }
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
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
                                                                                         const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  GALGAS_uint index_64_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_64 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_64.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_64.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 3)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.addString ("//--------------------------------------------------------------------------------------------------\n\ncEnumAssociatedValues_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString ("_") ;
        result.addString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.addString ("::cEnumAssociatedValues_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString ("_") ;
        result.addString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.addString (" (") ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_404_idx (0) ;
        if (enumerator_64.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_404 (enumerator_64.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_404.hasCurrentObject ()) {
            result.addString ("const GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_404.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue ()) ;
            result.addString (" inAssociatedValue") ;
            result.addString (index_404_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue ()) ;
            if (enumerator_404.hasNextObject ()) {
              result.addString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_404_idx.increment () ;
            enumerator_404.gotoNextObject () ;
          }
        }
        result.addString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.addString ("COMMA_LOCATION_ARGS) :\ncEnumAssociatedValues (THERE)") ;
        GALGAS_uint index_640_idx (0) ;
        if (enumerator_64.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_640 (enumerator_64.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_640.hasCurrentObject ()) {
            result.addString (",\nmAssociatedValue") ;
            result.addString (index_640_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue ()) ;
            result.addString (" (inAssociatedValue") ;
            result.addString (index_640_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue ()) ;
            result.addString (")") ;
            index_640_idx.increment () ;
            enumerator_640.gotoNextObject () ;
          }
        }
        result.addString (" {\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cEnumAssociatedValues_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString ("_") ;
        result.addString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.addString ("::description (") ;
        columnMarker = result.currentColumn () ;
        result.addString ("String & ioString,\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.addString ("const int32_t inIndentation) const {\n  ioString.addString (\"(\\n\") ;\n") ;
        GALGAS_uint index_1130_idx (0) ;
        if (enumerator_64.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1130 (enumerator_64.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1130.hasCurrentObject ()) {
            result.addString ("  mAssociatedValue") ;
            result.addString (index_1130_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue ()) ;
            result.addString (".description (ioString, inIndentation) ;\n") ;
            index_1130_idx.increment () ;
            enumerator_1130.gotoNextObject () ;
          }
        }
        result.addString ("  ioString.addString (\")\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult cEnumAssociatedValues_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString ("_") ;
        result.addString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.addString ("::compare (const cEnumAssociatedValues * inOperand) const {\n  const cEnumAssociatedValues_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString ("_") ;
        result.addString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.addString (" * ptr = dynamic_cast<const cEnumAssociatedValues_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString ("_") ;
        result.addString (enumerator_64.current_mConstantName (HERE).stringValue ()) ;
        result.addString (" *> (inOperand) ;\n  macroValidPointer (ptr) ;\n  typeComparisonResult result = kOperandEqual ;\n") ;
        GALGAS_uint index_1849_idx (0) ;
        if (enumerator_64.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1849 (enumerator_64.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1849.hasCurrentObject ()) {
            result.addString ("  if (result == kOperandEqual) {\n    result = mAssociatedValue") ;
            result.addString (index_1849_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue ()) ;
            result.addString (".objectCompare (ptr->mAssociatedValue") ;
            result.addString (index_1849_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue ()) ;
            result.addString (") ;\n  }\n") ;
            index_1849_idx.increment () ;
            enumerator_1849.gotoNextObject () ;
          }
        }
        result.addString ("  return result ;\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_64_.increment () ;
      enumerator_64.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" (void) :\n") ;
  const enumGalgasBool test_1 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.addString ("mAssociatedValues (),\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.addString ("mEnum (kNotBuilt) {\n}\n\n") ;
  GALGAS_uint index_2395_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_2395 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2395.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::constructor_") ;
      result.addString (enumerator_2395.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 54)).stringValue ()) ;
      result.addString (" (") ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2395.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 55)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.addString ("UNUSED_LOCATION_ARGS") ;
        } break ;
      case kBoolFalse : {
        GALGAS_uint index_2758_idx (0) ;
        if (enumerator_2395.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_2758 (enumerator_2395.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_2758.hasCurrentObject ()) {
            result.addString ("const GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_2758.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue ()) ;
            result.addString (" & inAssociatedValue") ;
            result.addString (index_2758_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue ()) ;
            if (enumerator_2758.hasNextObject ()) {
              result.addString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_2758_idx.increment () ;
            enumerator_2758.gotoNextObject () ;
          }
        }
        result.addString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.addString ("COMMA_LOCATION_ARGS") ;
        } break ;
      default :
        break ;
      }
      result.addString (") {\n  GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString (" result ;\n") ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2395.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.addString ("  result.mEnum = kEnum_") ;
        result.addString (enumerator_2395.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 67)).stringValue ()) ;
        result.addString (" ;\n") ;
        } break ;
      case kBoolFalse : {
        result.addString ("  if (") ;
        GALGAS_uint index_3163_idx (0) ;
        if (enumerator_2395.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3163 (enumerator_2395.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3163.hasCurrentObject ()) {
            result.addString ("inAssociatedValue") ;
            result.addString (index_3163_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 71)).stringValue ()) ;
            result.addString (".isValid ()") ;
            if (enumerator_3163.hasNextObject ()) {
              result.addString (" && ") ;
            }
            index_3163_idx.increment () ;
            enumerator_3163.gotoNextObject () ;
          }
        }
        result.addString (") {\n    result.mEnum = kEnum_") ;
        result.addString (enumerator_2395.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 75)).stringValue ()) ;
        result.addString (" ;\n    cEnumAssociatedValues * ptr = nullptr ;\n    macroMyNew (ptr, cEnumAssociatedValues_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString ("_") ;
        result.addString (enumerator_2395.current_mConstantName (HERE).stringValue ()) ;
        result.addString (" (") ;
        GALGAS_uint index_3523_idx (0) ;
        if (enumerator_2395.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3523 (enumerator_2395.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3523.hasCurrentObject ()) {
            result.addString ("inAssociatedValue") ;
            result.addString (index_3523_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).stringValue ()) ;
            if (enumerator_3523.hasNextObject ()) {
              result.addString (", ") ;
            }
            index_3523_idx.increment () ;
            enumerator_3523.gotoNextObject () ;
          }
        }
        result.addString (" COMMA_THERE)) ;\n    result.mAssociatedValues.setPointer (ptr) ;\n    macroDetachSharedObject (ptr) ;\n  }\n") ;
        } break ;
      default :
        break ;
      }
      result.addString ("  return result ;\n}\n\n") ;
      index_2395_.increment () ;
      enumerator_2395.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3830_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_3830 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3830.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, enumerator_3830.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 92)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_4) {
      case kBoolTrue : {
        result.addString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString ("::method_") ;
        result.addString (enumerator_3830.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 94)).stringValue ()) ;
        result.addString (" (") ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_4132_idx (0) ;
        if (enumerator_3830.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4132 (enumerator_3830.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4132.hasCurrentObject ()) {
            result.addString ("GALGAS_") ;
            result.addString (extensionGetter_identifierRepresentation (enumerator_4132.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue ()) ;
            result.addString (" & outAssociatedValue") ;
            result.addString (index_4132_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue ()) ;
            result.addString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            index_4132_idx.increment () ;
            enumerator_4132.gotoNextObject () ;
          }
        }
        result.appendSpacesUntilColumn (columnMarker) ;
        result.addString ("Compiler * inCompiler\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.addString ("COMMA_LOCATION_ARGS) const {\n  if (mEnum != kEnum_") ;
        result.addString (enumerator_3830.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 100)).stringValue ()) ;
        result.addString (") {\n") ;
        GALGAS_uint index_4432_idx (0) ;
        if (enumerator_3830.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4432 (enumerator_3830.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4432.hasCurrentObject ()) {
            result.addString ("    outAssociatedValue") ;
            result.addString (index_4432_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 102)).stringValue ()) ;
            result.addString (".drop () ;\n") ;
            index_4432_idx.increment () ;
            enumerator_4432.gotoNextObject () ;
          }
        }
        result.addString ("    String s ;\n    s.addString (\"method @") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString (" ") ;
        result.addString (enumerator_3830.current_mConstantName (HERE).stringValue ()) ;
        result.addString (" invoked with an invalid enum value\") ;\n    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n  }else{\n    const cEnumAssociatedValues_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString ("_") ;
        result.addString (enumerator_3830.current_mConstantName (HERE).stringValue ()) ;
        result.addString (" * ptr = (const cEnumAssociatedValues_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString ("_") ;
        result.addString (enumerator_3830.current_mConstantName (HERE).stringValue ()) ;
        result.addString (" *) unsafePointer () ;\n") ;
        GALGAS_uint index_4938_idx (0) ;
        if (enumerator_3830.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4938 (enumerator_3830.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4938.hasCurrentObject ()) {
            result.addString ("    outAssociatedValue") ;
            result.addString (index_4938_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue ()) ;
            result.addString (" = ptr->mAssociatedValue") ;
            result.addString (index_4938_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue ()) ;
            result.addString (" ;\n") ;
            index_4938_idx.increment () ;
            enumerator_4938.gotoNextObject () ;
          }
        }
        result.addString ("  }\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_3830_.increment () ;
      enumerator_3830.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5138_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5138 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5138.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::optional_") ;
      result.addString (enumerator_5138.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 120)).stringValue ()) ;
      result.addString (" (") ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_5399_idx (0) ;
      if (enumerator_5138.current_mAssociatedValueTypeList (HERE).isValid ()) {
        cEnumerator_unifiedTypeMapEntryList enumerator_5399 (enumerator_5138.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
        while (enumerator_5399.hasCurrentObject ()) {
          result.addString ("GALGAS_") ;
          result.addString (extensionGetter_identifierRepresentation (enumerator_5399.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue ()) ;
          result.addString (" & outAssociatedValue") ;
          result.addString (index_5399_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue ()) ;
          if (enumerator_5399.hasNextObject ()) {
            result.addString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_5399_idx.increment () ;
          enumerator_5399.gotoNextObject () ;
        }
      }
      result.addString (") const {\n  const bool ok = mEnum == kEnum_") ;
      result.addString (enumerator_5138.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 128)).stringValue ()) ;
      result.addString (" ;\n") ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, enumerator_5138.current_mAssociatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 129)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_5) {
      case kBoolTrue : {
        result.addString ("  if (ok) {\n    const auto * ptr = (const cEnumAssociatedValues_") ;
        result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.addString ("_") ;
        result.addString (enumerator_5138.current_mConstantName (HERE).stringValue ()) ;
        result.addString (" *) unsafePointer () ;\n") ;
        GALGAS_uint index_5873_idx (0) ;
        if (enumerator_5138.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_5873 (enumerator_5138.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_5873.hasCurrentObject ()) {
            result.addString ("    outAssociatedValue") ;
            result.addString (index_5873_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 133)).stringValue ()) ;
            result.addString (" = ptr->mAssociatedValue") ;
            result.addString (index_5873_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 133)).stringValue ()) ;
            result.addString (" ;\n") ;
            index_5873_idx.increment () ;
            enumerator_5873.gotoNextObject () ;
          }
        }
        result.addString ("  }\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.addString ("  return ok ;\n}\n\n") ;
      index_5138_.increment () ;
      enumerator_5138.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n\nstatic const char * gEnumNameArrayFor_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" [") ;
  result.addString (in_CONSTANT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 143)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 143)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 143)).stringValue ()) ;
  result.addString ("] = {\n  \"(not built)\"") ;
  GALGAS_uint index_6332_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6332 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6332.hasCurrentObject ()) {
      result.addString (",\n  ") ;
      result.addString (enumerator_6332.current_mConstantName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 146)).stringValue ()) ;
      index_6332_.increment () ;
      enumerator_6332.gotoNextObject () ;
    }
  }
  result.addString ("\n} ;\n\n") ;
  GALGAS_uint index_6472_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6472 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6472.hasCurrentObject ()) {
      result.addString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_bool GALGAS_") ;
      result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.addString ("::getter_is") ;
      result.addString (enumerator_6472.current_mConstantName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).stringValue ()) ;
      result.addString (" (UNUSED_LOCATION_ARGS) const {\n  return GALGAS_bool (kNotBuilt != mEnum, kEnum_") ;
      result.addString (enumerator_6472.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).stringValue ()) ;
      result.addString (" == mEnum) ;\n}\n\n") ;
      index_6472_.increment () ;
      enumerator_6472.gotoNextObject () ;
    }
  }
  result.addString ("//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.addString ("String & ioString,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.addString ("const int32_t ") ;
  const enumGalgasBool test_6 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    result.addString ("inIndentation") ;
    } break ;
  case kBoolFalse : {
    result.addString ("/* inIndentation */") ;
    } break ;
  default :
    break ;
  }
  result.addString (") const {\n  ioString.addString (\"<enum @") ;
  result.addString (in_TYPE_5F_NAME.stringValue ()) ;
  result.addString (": \") ;\n  ioString.addString (gEnumNameArrayFor_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" [mEnum]) ;\n") ;
  const enumGalgasBool test_7 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_7) {
  case kBoolTrue : {
    result.addString ("  mAssociatedValues.description (ioString, inIndentation) ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.addString ("  ioString.addString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ntypeComparisonResult GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString ("::objectCompare (const GALGAS_") ;
  result.addString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.addString (" & inOperand) const {\n  typeComparisonResult result = kOperandNotValid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (mEnum < inOperand.mEnum) {\n      result = kFirstOperandLowerThanSecond ;\n    }else if (mEnum > inOperand.mEnum) {\n      result = kFirstOperandGreaterThanSecond ;\n    }else{\n") ;
  const enumGalgasBool test_8 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_8) {
  case kBoolTrue : {
    result.addString ("      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;\n") ;
    } break ;
  case kBoolFalse : {
    result.addString ("      result = kOperandEqual ;\n") ;
    } break ;
  default :
    break ;
  }
  result.addString ("    }\n  }\n  return result ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

