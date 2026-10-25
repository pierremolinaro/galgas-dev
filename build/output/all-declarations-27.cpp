#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-27.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'updateLIBPMatPath?'
//
//--------------------------------------------------------------------------------------------------

void routine_updateLIBPMatPath_3F_ (const GGS_string constinArgument_inLIBPMPath,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapper var_fw_1498 = GGS_filewrapper (gWrapperDirectory_0_libpmFileWrapper) ;
  UpEnumerator_stringlist enumerator_1566 (var_fw_1498.getter_allDirectoryPaths (SOURCE_FILE ("libpmHandling.galgas3", 32))) ;
  while (enumerator_1566.hasCurrentObject ()) {
    GGS_string var_actualDirectory_1615 = constinArgument_inLIBPMPath.add_operation (enumerator_1566.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas3", 33)) ;
    var_actualDirectory_1615.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas3", 34)) ;
    enumerator_1566.gotoNextObject () ;
  }
  GGS_stringset var_allNeededFileSet_1736 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_1766 (var_fw_1498.getter_allTextFilePaths (SOURCE_FILE ("libpmHandling.galgas3", 38))) ;
  while (enumerator_1766.hasCurrentObject ()) {
    GGS_string var_contents_1806 = var_fw_1498.getter_textFileContentsAtPath (enumerator_1766.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas3", 39)) ;
    GGS_string var_actualFilePath_1859 = constinArgument_inLIBPMPath.add_operation (enumerator_1766.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas3", 40)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_actualFilePath_1859.getter_pathExtension (SOURCE_FILE ("libpmHandling.galgas3", 41)).objectCompare (GGS_string ("py"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_bool joker_2020 ; // Joker input parameter
        var_contents_1806.method_writeToExecutableFileWhenDifferentContents (var_actualFilePath_1859, joker_2020, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas3", 42)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_bool joker_2099 ; // Joker input parameter
      var_contents_1806.method_writeToFileWhenDifferentContents (var_actualFilePath_1859, joker_2099, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas3", 44)) ;
    }
    var_allNeededFileSet_1736.plusPlusAssignOperation (enumerator_1766.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas3", 46)) ;
    enumerator_1766.gotoNextObject () ;
  }
  UpEnumerator_stringlist enumerator_2180 (var_fw_1498.getter_allBinaryFilePaths (SOURCE_FILE ("libpmHandling.galgas3", 49))) ;
  while (enumerator_2180.hasCurrentObject ()) {
    GGS_data var_contents_2223 = var_fw_1498.getter_binaryFileContentsAtPath (enumerator_2180.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas3", 50)) ;
    GGS_string var_actualFilePath_2279 = constinArgument_inLIBPMPath.add_operation (enumerator_2180.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas3", 51)) ;
    GGS_bool joker_2380 ; // Joker input parameter
    var_contents_2223.method_writeToFileWhenDifferentContents (var_actualFilePath_2279, joker_2380, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas3", 52)) ;
    var_allNeededFileSet_1736.plusPlusAssignOperation (enumerator_2180.current_mValue (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas3", 53)) ;
    enumerator_2180.gotoNextObject () ;
  }
  GGS_stringset var_allActualFileSet_2465 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_2495 (constinArgument_inLIBPMPath.getter_regularFiles (GGS_bool (true) COMMA_SOURCE_FILE ("libpmHandling.galgas3", 57))) ;
  while (enumerator_2495.hasCurrentObject ()) {
    var_allActualFileSet_2465.plusPlusAssignOperation (GGS_string ("/").add_operation (enumerator_2495.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas3", 58))  COMMA_SOURCE_FILE ("libpmHandling.galgas3", 58)) ;
    enumerator_2495.gotoNextObject () ;
  }
  GGS_stringset var_uselessFileSet_2590 = var_allActualFileSet_2465.substract_operation (var_allNeededFileSet_1736, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas3", 60)) ;
  UpEnumerator_stringset enumerator_2650 (var_uselessFileSet_2590) ;
  while (enumerator_2650.hasCurrentObject ()) {
    {
    GGS_string::class_method_deleteFile (constinArgument_inLIBPMPath.add_operation (enumerator_2650.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas3", 62)), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas3", 62)) ;
    }
    enumerator_2650.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@templateLexiqueComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_templateLexiqueComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  result_result = GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 224)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLexiqueComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                       GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                       GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  const GGS_templateLexiqueComponentAST temp_1 = this ;
  GGS_lstring var_key_8359 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 237)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_templateLexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_8359, temp_2, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 238)) ;
  }
  const GGS_templateLexiqueComponentAST temp_3 = this ;
  const GGS_templateLexiqueComponentAST temp_4 = this ;
  GGS_lstring var_superKey_8516 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueSuperComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 239)), temp_4.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_8359, var_superKey_8516 COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 240)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLexiqueComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                 const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                 const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_superLexiqueIsTemplate_9577 ;
  GGS_terminalMap var_terminalMap_9611 ;
  GGS_indexingListAST var_indexingListAST_9634 ;
  GGS_terminalDeclarationListAST var_terminalListAST_9661 ;
  GGS_lexicalAttributeListAST var_lexicalAttributeListAST_9688 ;
  GGS_lexicalStyleListAST var_lexicalStyleListAST_9723 ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationListAST_9754 ;
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  ioArgument_ioSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_0.readProperty_mLexiqueSuperComponentName (), var_superLexiqueIsTemplate_9577, var_terminalMap_9611, var_indexingListAST_9634, var_terminalListAST_9661, var_lexicalAttributeListAST_9688, var_lexicalStyleListAST_9723, var_lexicalListDeclarationListAST_9754, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 254)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_superLexiqueIsTemplate_9577.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateLexiqueComponentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLexiqueSuperComponentName ().readProperty_location (), GGS_string ("cannot inherit from a template lexique"), fixItArray3  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 265)) ;
    }
  }
  {
  const GGS_templateLexiqueComponentAST temp_4 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_4.readProperty_mLexiqueComponentName (), GGS_bool (true), var_terminalMap_9611, var_indexingListAST_9634, var_terminalListAST_9661, var_lexicalAttributeListAST_9688, var_lexicalStyleListAST_9723, var_lexicalListDeclarationListAST_9754, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 268)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLexiqueComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_string /* constinArgument_inProductDirectory */,
                                                                const GGS_semanticContext constinArgument_inSemanticContext,
                                                                GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_11017 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 291)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11017, var_nameForUsefulness_11017, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 292)) ;
  }
  GGS_terminalDeclarationListAST var_terminalListAST_11462 ;
  GGS_lexicalAttributeListAST var_lexicalAttributeListAST_11489 ;
  GGS_lexicalStyleListAST var_lexicalStyleListAST_11524 ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationListAST_11555 ;
  const GGS_templateLexiqueComponentAST temp_1 = this ;
  GGS_bool joker_11359 ; // Joker input parameter
  GGS_terminalMap joker_11397 ; // Joker input parameter
  GGS_indexingListAST joker_11424 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueSuperComponentName (), joker_11359, joker_11397, joker_11424, var_terminalListAST_11462, var_lexicalAttributeListAST_11489, var_lexicalStyleListAST_11524, var_lexicalListDeclarationListAST_11555, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 294)) ;
  GGS_lexicalTypeMap var_lexicalTypeMap_11684 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 305)) ;
  GGS_lexicalRoutineMap var_lexicalRoutineMap_11822 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_11822, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 307)) ;
  }
  GGS_lexicalFunctionMap var_lexicalFunctionMap_11941 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_11941, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 309)) ;
  }
  GGS_stringset var_unicodeTestFunctions_12068 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis_21_ (var_unicodeTestFunctions_12068, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 311)) ;
  }
  const GGS_templateLexiqueComponentAST temp_2 = this ;
  GGS_lexiqueAnalysisContext var_lexiqueAnalysisContext_12161 = GGS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21__21_ (temp_2.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_11822, var_lexicalFunctionMap_11941, GGS_lexicalMessageMap::init (inCompiler COMMA_HERE), GGS_terminalMap::init (inCompiler COMMA_HERE), GGS_terminalList::init (inCompiler COMMA_HERE), GGS_lexicalAttributeMap::init (inCompiler COMMA_HERE), GGS_lexicalExplicitTokenListMapMap::init (inCompiler COMMA_HERE), GGS_stringset::init (inCompiler COMMA_HERE), GGS_templateDelimitorList::init (inCompiler COMMA_HERE), GGS_styleMap::init (inCompiler COMMA_HERE), var_unicodeTestFunctions_12068, inCompiler COMMA_HERE) ;
  GGS_bigint var_styleIndex_12565 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 328)) ;
  UpEnumerator_lexicalStyleListAST enumerator_12593 (var_lexicalStyleListAST_11524) ;
  while (enumerator_12593.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_12161.mProperty_mStyleMap.setter_insertKey (enumerator_12593.current_mName (HERE), enumerator_12593.current_mComment (HERE), var_styleIndex_12565.getter_uint (inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 330)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 330)) ;
    }
    var_styleIndex_12565.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 331)), inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 331)) ;
    enumerator_12593.gotoNextObject () ;
  }
  {
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_11684, var_lexicalAttributeListAST_11489, var_lexiqueAnalysisContext_12161.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 334)) ;
  }
  GGS_terminalList var_terminalList_13017 = GGS_terminalList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_terminalDeclarationListAST enumerator_13114 (var_terminalListAST_11462) ;
  while (enumerator_13114.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_13171 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_13114.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas3", 343)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_lstring joker_13289 ; // Joker input parameter
        var_lexiqueAnalysisContext_12161.readProperty_mStyleMap ().method_searchKey (enumerator_13114.current_mStyle (HERE), joker_13289, var_terminalStyleIndex_13171, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 344)) ;
      }
    }
    GGS_lexicalSentValueList var_argumentTypeList_13330 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_13399 (enumerator_13114.current_mSentAttributeList (HERE)) ;
    while (enumerator_13399.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_13523 ;
      var_lexiqueAnalysisContext_12161.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_13399.current_mAttributeName (HERE), var_attributeLexicalType_13523, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 348)) ;
      var_argumentTypeList_13330.addAssignOperation (enumerator_13399.current_mFormalSelector (HERE), enumerator_13399.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_13523  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 349)) ;
      enumerator_13399.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_12161.mProperty_mTerminalMap.setter_insertKey (enumerator_13114.current_mName (HERE), var_argumentTypeList_13330, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 351)) ;
    }
    var_terminalList_13017.addAssignOperation (enumerator_13114.current_mName (HERE), var_argumentTypeList_13330, enumerator_13114.current_mSyntaxErrorMessage (HERE).readProperty_string (), enumerator_13114.current_isEndOfTemplateMark (HERE), enumerator_13114.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("template-lexique-component.galgas3", 357)), var_terminalStyleIndex_13171  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 352)) ;
    enumerator_13114.gotoNextObject () ;
  }
  UpEnumerator_lexicalListDeclarationListAST enumerator_13994 (var_lexicalListDeclarationListAST_11555) ;
  while (enumerator_13994.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_14056 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_13994.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas3", 362)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_lstring joker_14174 ; // Joker input parameter
        var_lexiqueAnalysisContext_12161.readProperty_mStyleMap ().method_searchKey (enumerator_13994.current_mStyle (HERE), joker_14174, var_terminalStyleIndex_14056, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 363)) ;
      }
    }
    GGS_lexicalSentValueList var_argumentTypeList_14215 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_14284 (enumerator_13994.current_mSentAttributeList (HERE)) ;
    while (enumerator_14284.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_14408 ;
      var_lexiqueAnalysisContext_12161.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_14284.current_mAttributeName (HERE), var_attributeLexicalType_14408, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 367)) ;
      var_argumentTypeList_14215.addAssignOperation (enumerator_14284.current_mFormalSelector (HERE), enumerator_14284.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_14408  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 368)) ;
      enumerator_14284.gotoNextObject () ;
    }
    UpEnumerator_lexicalListEntryListAST enumerator_14574 (enumerator_13994.current_mEntryList (HERE)) ;
    while (enumerator_14574.hasCurrentObject ()) {
      GGS_string var_syntaxErrorMessage_14620 = enumerator_13994.current_mSyntaxErrorMessage (HERE).readProperty_string ().getter_replacing (GGS_string ("%K"), enumerator_14574.current_mTerminalSpelling (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 371)) ;
      var_terminalList_13017.addAssignOperation (enumerator_14574.current_mTerminalSpelling (HERE), var_argumentTypeList_14215, var_syntaxErrorMessage_14620, enumerator_14574.current_isEndOfTemplateMark (HERE), enumerator_14574.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("template-lexique-component.galgas3", 377)), var_terminalStyleIndex_14056  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 372)) ;
      enumerator_14574.gotoNextObject () ;
    }
    enumerator_13994.gotoNextObject () ;
  }
  GGS_stringset var_unicodeStringToGenerate_15037 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_templateDelimitorList var_templateDelimitorList_15096 = GGS_templateDelimitorList::init (inCompiler COMMA_HERE) ;
  const GGS_templateLexiqueComponentAST temp_5 = this ;
  UpEnumerator_templateDelimitorListAST enumerator_15172 (temp_5.readProperty_mTemplateDelimitorList ()) ;
  while (enumerator_15172.hasCurrentObject ()) {
    var_unicodeStringToGenerate_15037.plusPlusAssignOperation (enumerator_15172.current_mStartString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 385)) ;
    var_unicodeStringToGenerate_15037.plusPlusAssignOperation (enumerator_15172.current_mEndString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 386)) ;
    var_templateDelimitorList_15096.addAssignOperation (enumerator_15172.current_mStartString (HERE), enumerator_15172.current_mEndString (HERE), enumerator_15172.current_mPreserved (HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 387)) ;
    enumerator_15172.gotoNextObject () ;
  }
  const GGS_templateLexiqueComponentAST temp_6 = this ;
  UpEnumerator_templateReplacementListAST enumerator_15505 (temp_6.readProperty_mTemplateReplacementList ()) ;
  while (enumerator_15505.hasCurrentObject ()) {
    var_unicodeStringToGenerate_15037.plusPlusAssignOperation (enumerator_15505.current_mMatchString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 391)) ;
    var_unicodeStringToGenerate_15037.plusPlusAssignOperation (enumerator_15505.current_mReplacementString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 392)) ;
    enumerator_15505.gotoNextObject () ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("template-lexique-component.galgas3", 396)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_templateLexiqueComponentAST temp_8 = this ;
      const GGS_templateLexiqueComponentAST temp_9 = this ;
      GGS_string var_headerContents_15826 = GGS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_cppHeader (inCompiler, temp_8.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas3", 399)), temp_9.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas3", 400)) COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 398))) ;
      const GGS_templateLexiqueComponentAST temp_10 = this ;
      const GGS_templateLexiqueComponentAST temp_11 = this ;
      const GGS_templateLexiqueComponentAST temp_12 = this ;
      const GGS_templateLexiqueComponentAST temp_13 = this ;
      GGS_string var_cppContents_16066 = GGS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_cppImplementation (inCompiler, temp_10.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas3", 404)), temp_11.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas3", 405)), var_lexiqueAnalysisContext_12161.readProperty_mLexicalTokenListMap (), var_unicodeStringToGenerate_15037, var_templateDelimitorList_15096, var_terminalList_13017, temp_12.readProperty_mLexiqueComponentName ().readProperty_string (), temp_13.readProperty_mTemplateReplacementList () COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 403))) ;
      const GGS_templateLexiqueComponentAST temp_14 = this ;
      const GGS_templateLexiqueComponentAST temp_15 = this ;
      const GGS_templateLexiqueComponentAST temp_16 = this ;
      const GGS_templateLexiqueComponentAST temp_17 = this ;
      GGS_string var_swiftuiImplementation_16538 = GGS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_swiftuiImplementationZone (inCompiler, GGS_string ("lexique-").add_operation (temp_14.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas3", 415)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 415)).add_operation (GGS_string ("-swiftui"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 415)), temp_15.readProperty_mLexiqueComponentName ().readProperty_string (), temp_16.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_terminalList_13017, var_templateDelimitorList_15096, temp_17.readProperty_mTemplateReplacementList (), var_lexicalStyleListAST_11524 COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 414))) ;
      const GGS_templateLexiqueComponentAST temp_18 = this ;
      const GGS_templateLexiqueComponentAST temp_19 = this ;
      const GGS_templateLexiqueComponentAST temp_20 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string::makeEmptyString (), GGS_lexiqueDeclarationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_bool (true), GGS_string ("lexique-").add_operation (temp_18.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas3", 428)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 428)), temp_19.readProperty_mLexiqueComponentName ().readProperty_string (), temp_20.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_headerContents_15826, var_cppContents_16066, var_swiftuiImplementation_16538, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas3", 424)) ;
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

GGS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppHeader (Compiler * inCompiler,
                                                                             const GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                             const GGS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("LEXIQUE ").add_operation (in_LEXIQUE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("template_lexique_header_template_zone_2.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"Lexique.h\"\n\n//--------------------------------------------------------------------------------------------------\n//                       T O K E N    C L A S S\n//--------------------------------------------------------------------------------------------------\n\ntypedef cTokenFor_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n//                     S C A N N E R    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public Lexique_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" {\n//--- Constructors\n  public: Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceFileName\n                       COMMA_LOCATION_ARGS) ;\n\n  public: Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceString,\n                       const String & inStringForError\n                       COMMA_LOCATION_ARGS) ;\n\n//--- Instrospection\n  public: static GGS_stringlist symbols (LOCATION_ARGS) ;\n\n//--- Declaring a protected virtual destructor enables the compiler to raise\n//    an error if a direct delete is performed; only the static proc\n//    SharedObject::detachPointer may invoke delete.\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    protected: virtual ~ Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) { }\n  #endif\n//--- Scanner mode for template scanner\n  private: int32_t mMatchedTemplateDelimiterIndex ;\n\n//--- Parse lexical token\n  protected: virtual bool parseLexicalToken (void) override ;\n} ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates cppImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppImplementation (Compiler * inCompiler,
                                                                                     const GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                     const GGS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER,
                                                                                     const GGS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                     const GGS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                     const GGS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                     const GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                     const GGS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                     const GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//     L E X I Q U E\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"utf32.h\"\n#include \"scanner_actions.h\"\n#include \"LexiqueIntrospection.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nLexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCallerCompiler,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inSourceFileName\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\nLexique_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inCallerCompiler, inSourceFileName COMMA_THERE),\nmMatchedTemplateDelimiterIndex (-1) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nLexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCallerCompiler,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inSourceString,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inStringForError\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\nLexique_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inCallerCompiler, inSourceString, inStringForError COMMA_THERE),\nmMatchedTemplateDelimiterIndex (-1) {\n}\n\n//--------------------------------------------------------------------------------------------------\n//                      U N I C O D E    S T R I N G S\n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_1518_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    UpEnumerator_stringset enumerator_1518 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES) ;
    while (enumerator_1518.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_1518.current_key (HERE).getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 35)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("\n//--- Unicode string for '$") ;
        result.appendString (enumerator_1518.current_key (HERE).getter_utf_38_RepresentationWithoutDelimiters (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString ("$'\nstatic const std::initializer_list <utf32> kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_1518.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (" = ") ;
        result.appendString (enumerator_1518.current_key (HERE).getter_utf_33__32_Representation (GGS_bool (false) COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (" ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1518.gotoNextObject () ;
      index_1518_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_2311_ (0) ;
  if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
    UpEnumerator_templateDelimitorList enumerator_2311 (in_TEMPLATE_5F_DELIMITOR_5F_LIST) ;
    const bool nonEmpty_enumerator_2311 = enumerator_2311.hasCurrentObject () ;
    if (nonEmpty_enumerator_2311) {
      result.appendString ("static const TemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateDefinitionArray [") ;
      result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 46)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 46)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_2311.hasCurrentObject ()) {
      result.appendString ("  TemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2311.current_mStartString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 47)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_2311.current_mStartString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 47)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 47)).stringValue ()) ;
      result.appendString (", ") ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_2311.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 48)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("{}, 0,") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_2311.current_mEndString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).stringValue ()) ;
        result.appendString (", ") ;
        result.appendString (enumerator_2311.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).stringValue ()) ;
        result.appendString (",") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (" nullptr, ") ;
      result.appendString (enumerator_2311.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 54)).getter_cString (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 54)).stringValue ()) ;
      result.appendString (")") ;
      enumerator_2311.gotoNextObject () ;
      if (enumerator_2311.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_2311_.increment () ;
    }
    if (nonEmpty_enumerator_2311) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_3265_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    UpEnumerator_templateReplacementListAST enumerator_3265 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
    const bool nonEmpty_enumerator_3265 = enumerator_3265.hasCurrentObject () ;
    if (nonEmpty_enumerator_3265) {
      result.appendString ("static const TemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateReplacementArray [") ;
      result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 65)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 65)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_3265.hasCurrentObject ()) {
      result.appendString ("  TemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3265.current_mMatchString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 67)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_3265.current_mMatchString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 67)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 67)).stringValue ()) ;
      result.appendString (", kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3265.current_mReplacementString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 68)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_3265.current_mReplacementString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 68)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 68)).stringValue ()) ;
      result.appendString (", ") ;
      const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_3265.current_mReplacementFunction (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 69)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("nullptr") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("scanner_routine_") ;
        result.appendString (enumerator_3265.current_mReplacementFunction (HERE).readProperty_string ().stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", true)") ;
      enumerator_3265.gotoNextObject () ;
      if (enumerator_3265.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_3265_.increment () ;
    }
    if (nonEmpty_enumerator_3265) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_4216_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_terminalList enumerator_4216 (in_TERMINAL_5F_LIST) ;
    const bool nonEmpty_enumerator_4216 = enumerator_4216.hasCurrentObject () ;
    if (nonEmpty_enumerator_4216) {
      result.appendString ("static const bool ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kEndOfScriptInTemplateArray [") ;
      result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 84)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 84)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_4216.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4216.current_isEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 85)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_4216.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" */") ;
      enumerator_4216.gotoNextObject () ;
      if (enumerator_4216.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_4216_.increment () ;
    }
    if (nonEmpty_enumerator_4216) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//               P A R S E    L E X I C A L    T O K E N\n//--------------------------------------------------------------------------------------------------\n\nbool Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::parseLexicalToken (void) {\n  cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" token ;\n  token.mTokenCode = -1 ;\n  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\\0')) {\n    if ((mMatchedTemplateDelimiterIndex >= 0)\n        && (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)\n        && (mCurrentChar.u32 () != '\\0')) {\n      const bool foundEndDelimitor = testForInputUTF32String (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,\n                                                               true) ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar.u32 () != '\\0')) {\n      int32_t replacementIndex = 0 ;\n      while (replacementIndex >= 0) {\n        replacementIndex = findTemplateDelimiterIndex (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateReplacementArray, ") ;
  result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 110)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 110)).stringValue ()) ;
  result.appendString (") ;\n        if (replacementIndex >= 0) {\n          if (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction == nullptr) {\n            token.mTemplateStringBeforeToken.appendString (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateReplacementArray [replacementIndex].mEndString) ;\n          }else{\n            String s ;\n            while (notTestForInputUTF32String (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateReplacementArray [replacementIndex].mEndString,\n                                               kEndOfSourceLexicalErrorMessage\n                                               COMMA_HERE)) {\n              s.appendChar (previousChar ()) ;\n            }\n            ") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;\n          }\n        }\n      }\n      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateDefinitionArray, ") ;
  result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 125)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 125)).stringValue ()) ;
  result.appendString (") ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        token.mTemplateStringBeforeToken.appendChar (mCurrentChar) ;\n        advance () ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mCurrentChar.u32 () != '\\0')) {\n      internalParseLexicalToken (token) ;\n    }\n    if ((token.mTokenCode > 0) && ") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  }\n  if (mCurrentChar.u32 () == '\\0') {\n    token.mTokenCode = 0 ;\n    enterToken (token) ;\n  }\n  return token.mTokenCode > 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                         I N T R O S P E C T I O N\n//--------------------------------------------------------------------------------------------------\n\nGGS_stringlist Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::symbols (LOCATION_ARGS) {\n  GGS_stringlist result = GGS_stringlist::init (nullptr COMMA_THERE) ;\n") ;
  GGS_uint index_7647_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_terminalList enumerator_7647 (in_TERMINAL_5F_LIST) ;
    while (enumerator_7647.hasCurrentObject ()) {
      result.appendString ("  result.addAssignOperation (GGS_string (") ;
      result.appendString (enumerator_7647.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 152)).stringValue ()) ;
      result.appendString (") COMMA_HERE) ;\n") ;
      enumerator_7647.gotoNextObject () ;
      index_7647_.increment () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (GenericUniqueArray <String> & ") ;
  const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 160)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("ioList") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") {\n") ;
  GGS_uint index_8160_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_8160 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_8160.hasCurrentObject ()) {
      result.appendString ("  ioList.appendObject (") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 164)).add_operation (enumerator_8160.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 164)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 164)).stringValue ()) ;
      result.appendString (") ;\n") ;
      enumerator_8160.gotoNextObject () ;
      index_8160_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const String & ") ;
  const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 170)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* inIdentifier */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("inIdentifier") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("bool & ") ;
  const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 171)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ioFound */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("ioFound") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("GenericUniqueArray <String> & ") ;
  const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 172)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("ioList") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") {\n") ;
  GGS_uint index_8873_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_8873 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_8873.hasCurrentObject ()) {
      result.appendString ("  if (inIdentifier == ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 176)).add_operation (enumerator_8873.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 176)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue ()) ;
      result.appendString (") {\n    ioFound = true ;\n") ;
      GGS_uint index_9070_ (0) ;
      if (enumerator_8873.current_mTokenSortedList (HERE).isValid ()) {
        UpEnumerator_tokenSortedlist enumerator_9070 (enumerator_8873.current_mTokenSortedList (HERE)) ;
        while (enumerator_9070.hasCurrentObject ()) {
          result.appendString ("    ioList.appendObject (") ;
          result.appendString (enumerator_9070.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 179)).stringValue ()) ;
          result.appendString (") ;\n") ;
          enumerator_9070.gotoNextObject () ;
          index_9070_.increment () ;
        }
      }
      result.appendString ("    ioList.sortArrayUsingCompareMethod() ;\n  }\n") ;
      enumerator_8873.gotoNextObject () ;
      index_8873_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic LexiqueIntrospection lexiqueIntrospection_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n__attribute__ ((used))\n__attribute__ ((unused)) (getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (", getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates swiftuiImplementationZone'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_templateLexiqueGenerationTemplates_swiftuiImplementationZone (Compiler * /* inCompiler */,
                                                                                             const GGS_string & /* in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                             const GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                             const GGS_string & in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                             const GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                             const GGS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                             const GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                             const GGS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nimport SwiftUI\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 8)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("fileprivate let kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 9)).stringValue ()) ;
    result.appendString (" : [String] = [\n") ;
    GGS_uint index_517_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      UpEnumerator_templateReplacementListAST enumerator_517 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
      while (enumerator_517.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_517.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 12)).stringValue ()) ;
        enumerator_517.gotoNextObject () ;
        if (enumerator_517.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_517_.increment () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 21)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("fileprivate let kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 22)).stringValue ()) ;
    result.appendString (" : [TemplateDelimiter] = [\n") ;
    GGS_uint index_1108_ (0) ;
    if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
      UpEnumerator_templateDelimitorList enumerator_1108 (in_TEMPLATE_5F_DELIMITOR_5F_LIST) ;
      while (enumerator_1108.hasCurrentObject ()) {
        result.appendString ("  TemplateDelimiter (startString: ") ;
        result.appendString (enumerator_1108.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 25)).stringValue ()) ;
        result.appendString (", endString: ") ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_1108.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 26)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_2) {
        case GalgasBool::boolTrue : {
          result.appendString ("nil") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString (enumerator_1108.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 29)).stringValue ()) ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString (", discardStartString: ") ;
        result.appendString (enumerator_1108.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 32)).getter_cString (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 32)).stringValue ()) ;
        result.appendString (")") ;
        enumerator_1108.gotoNextObject () ;
        if (enumerator_1108.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_1108_.increment () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_1927_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_terminalList enumerator_1927 (in_TERMINAL_5F_LIST) ;
    const bool nonEmpty_enumerator_1927 = enumerator_1927.hasCurrentObject () ;
    if (nonEmpty_enumerator_1927) {
      result.appendString ("fileprivate let kEndOfScriptInTemplateArray_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 43)).stringValue ()) ;
      result.appendString (" : [Bool] = [\n") ;
    }
    while (enumerator_1927.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1927.current_isEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1927.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" */") ;
      enumerator_1927.gotoNextObject () ;
      if (enumerator_1927.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_1927_.increment () ;
    }
    if (nonEmpty_enumerator_1927) {
      result.appendString ("\n]\n") ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\n/* func ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier () -> String {\n  return \"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n} */\n\n//--------------------------------------------------------------------------------------------------\n\nstruct SettingViewFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : View {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @AppStorage(\"FontFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\")\n  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))\n\n  @AppStorage(\"LineHeightFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\")\n  private var mLineHeight : Int = 12\n\n  @AppStorage(\"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\")\n  private var mDefaultColor : Color = .black\n\n") ;
  GGS_uint index_2884_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_2884 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_2884.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(\"ColorFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_2884.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n  private var mColorFor_") ;
      result.appendString (enumerator_2884.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Color = .black\n\n  @AppStorage(\"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_2884.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n  private var mBoldFor_") ;
      result.appendString (enumerator_2884.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Bool = false\n\n  @AppStorage(\"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_2884.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n  private var mItalicFor_") ;
      result.appendString (enumerator_2884.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : Bool = false\n\n") ;
      enumerator_2884.gotoNextObject () ;
      index_2884_.increment () ;
    }
  }
  result.appendString ("\n  @AppStorage(\"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\")\n  private var mColorFor_lexical_error : Color = .red\n\n  @AppStorage(\"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\")\n  private var mBoldFor_lexical_error : Bool = false\n\n  @AppStorage(\"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\")\n  private var mItalicFor_lexical_error : Bool = false\n\n  @AppStorage(\"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n  private var mColorFor_template : Color = .gray\n\n  @AppStorage(\"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n  private var mBoldFor_template : Bool = false\n\n  @AppStorage(\"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n  private var mItalicFor_template : Bool = false\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var body : some View {\n    Form {\n      LabeledContent (\"Font\") { CustomFontPicker (fontBinding: self.$mFont) }\n      Picker(\"Line Height\", selection: self.$mLineHeight) {\n        Text(\"1.0\").tag(10)\n        Text(\"1.1\").tag(11)\n        Text(\"1.2\").tag(12)\n        Text(\"1.5\").tag(15)\n        Text(\"1.7\").tag(17)\n        Text(\"2.0\").tag(20)\n      }.pickerStyle(.automatic)\n      ColorPicker (\"Default Color\", selection: self.$mDefaultColor)\n") ;
  GGS_uint index_4545_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_4545 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_4545.hasCurrentObject ()) {
      result.appendString ("      LabeledContent (") ;
      result.appendString (enumerator_4545.current_mComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_swiftui_implementation.swift.galgasTemplate", 115)).stringValue ()) ;
      result.appendString (") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mColorFor_") ;
      result.appendString (enumerator_4545.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (").labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mBoldFor_") ;
      result.appendString (enumerator_4545.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (")\n          Toggle (\"Italic\", isOn: self.$mItalicFor_") ;
      result.appendString (enumerator_4545.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (")\n        }\n      }\n") ;
      enumerator_4545.gotoNextObject () ;
      index_4545_.increment () ;
    }
  }
  result.appendString ("      LabeledContent (\"Lexical Error\") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mColorFor_lexical_error).labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mBoldFor_lexical_error)\n          Toggle (\"Italic\", isOn: self.$mItalicFor_lexical_error)\n        }\n      }\n      LabeledContent (\"Template\") {\n        HStack {\n          ColorPicker (\"\", selection: self.$mColorFor_template).labelsHidden ()\n          Toggle (\"Bold\", isOn: self.$mBoldFor_template)\n          Toggle (\"Italic\", isOn: self.$mItalicFor_template)\n        }\n      }\n    }.padding (20)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n//   Template Scanner Class\n//--------------------------------------------------------------------------------------------------\n\nclass ScannerFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : ScannerFor_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func isTemplateLexique () -> Bool { true }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func updateTokenStyleArrays (_ ioStyleDidChange : inout Bool) {\n    ioStyleDidChange = false\n    let ud = UserDefaults.standard\n    if let s = ud.string (forKey: \"FontFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"), let v = CustomFont (rawValue: s) {\n      if self.mFont != v {\n        self.mFont = v\n        ioStyleDidChange = true\n      }\n    }\n    if let s = ud.string (forKey: \"LineHeightFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"), let v = Int (s) {\n      if self.mLineHeight != v {\n        self.mLineHeight = v\n        ioStyleDidChange = true\n      }\n    }\n    if let s = ud.string (forKey: \"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"), let v = Color (rawValue: s) {\n      if self.mDefaultColor != v {\n        self.mDefaultColor = v\n        ioStyleDidChange = true\n      }\n    }\n") ;
  GGS_uint index_6958_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_6958 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_6958.hasCurrentObject ()) {
      result.appendString ("    if let s = ud.string (forKey: \"ColorFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_6958.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\"), let v = Color (rawValue: s) {\n      if self.mColorFor_") ;
      result.appendString (enumerator_6958.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != v {\n        self.mColorFor_") ;
      result.appendString (enumerator_6958.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_6958.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") != nil {\n      let v = ud.bool (forKey: \"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_6958.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n      if self.mBoldFor_") ;
      result.appendString (enumerator_6958.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != v {\n        self.mBoldFor_") ;
      result.appendString (enumerator_6958.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_6958.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") != nil {\n      let v = ud.bool (forKey: \"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_6958.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\")\n      if self.mItalicFor_") ;
      result.appendString (enumerator_6958.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != v {\n        self.mItalicFor_") ;
      result.appendString (enumerator_6958.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = v\n        ioStyleDidChange = true\n      }\n    }\n") ;
      enumerator_6958.gotoNextObject () ;
      index_6958_.increment () ;
    }
  }
  result.appendString ("    if let s = ud.string (forKey: \"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\"), let v = Color (rawValue: s) {\n      if self.mColorFor_lexical_error != v {\n        self.mColorFor_lexical_error = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\") != nil {\n      let v = ud.bool (forKey: \"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\")\n      if self.mBoldFor_lexical_error != v {\n        self.mBoldFor_lexical_error = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\") != nil {\n      let v = ud.bool (forKey: \"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\")\n      if self.mItalicFor_lexical_error != v {\n        self.mItalicFor_lexical_error = v\n        ioStyleDidChange = true\n      }\n    }\n    if let s = ud.string (forKey: \"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\"), let v = Color (rawValue: s) {\n      if self.mColorFor_template != v {\n        self.mColorFor_template = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\") != nil {\n      let v = ud.bool (forKey: \"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n      if self.mBoldFor_template != v {\n        self.mBoldFor_template = v\n        ioStyleDidChange = true\n      }\n    }\n    if ud.string (forKey: \"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\") != nil {\n      let v = ud.bool (forKey: \"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n      if self.mItalicFor_template != v {\n        self.mItalicFor_template = v\n        ioStyleDidChange = true\n      }\n    }\n  //--- Build token attribute array\n    if ioStyleDidChange {\n      let fontManager = NSFontManager.shared\n      let boldFont = fontManager.convert (self.mFont.nsFont, toHaveTrait: .boldFontMask)\n      let italicFont = fontManager.convert (self.mFont.nsFont, toHaveTrait: .italicFontMask)\n      let boldItalicFont = fontManager.convert (boldFont, toHaveTrait: .italicFontMask)\n      self.mTokenAttributeArray.removeAll (keepingCapacity: true)\n      var attributes = [NSAttributedString.Key : Any] ()\n") ;
  GGS_uint index_10031_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_10031 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_10031.hasCurrentObject ()) {
      result.appendString ("    //--- Attributes for ") ;
      result.appendString (enumerator_10031.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\n      if self.mColorFor_") ;
      result.appendString (enumerator_10031.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" != self.mDefaultColor {\n        attributes [.foregroundColor] = NSColor (self.mColorFor_") ;
      result.appendString (enumerator_10031.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (")\n      }\n      if self.mBoldFor_") ;
      result.appendString (enumerator_10031.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" && self.mItalicFor_") ;
      result.appendString (enumerator_10031.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" {\n        attributes [.font] = boldItalicFont\n      }else if self.mBoldFor_") ;
      result.appendString (enumerator_10031.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" {\n        attributes [.font] = boldFont\n      }else if self.mItalicFor_") ;
      result.appendString (enumerator_10031.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" {\n        attributes [.font] = italicFont\n      }\n      self.mTokenAttributeArray.append (attributes.isEmpty \? nil : attributes)\n      attributes.removeAll (keepingCapacity: true)\n") ;
      enumerator_10031.gotoNextObject () ;
      index_10031_.increment () ;
    }
  }
  result.appendString ("    //--- Lexical error\n      if self.mColorFor_lexical_error != self.mDefaultColor {\n        attributes [.foregroundColor] = NSColor (self.mColorFor_lexical_error)\n      }\n      if self.mBoldFor_lexical_error && self.mItalicFor_lexical_error {\n        attributes [.font] = boldItalicFont\n      }else if self.mBoldFor_lexical_error {\n        attributes [.font] = boldFont\n      }else if self.mItalicFor_lexical_error {\n        attributes [.font] = italicFont\n      }\n      self.mTokenAttributeArray.append (attributes.isEmpty \? nil : attributes)\n      attributes.removeAll (keepingCapacity: true)\n    //--- Template\n      if self.mColorFor_template != self.mDefaultColor {\n        attributes [.foregroundColor] = NSColor (self.mColorFor_template)\n      }\n      if self.mBoldFor_template && self.mItalicFor_template {\n        attributes [.font] = boldItalicFont\n      }else if self.mBoldFor_template {\n        attributes [.font] = boldFont\n      }else if self.mItalicFor_template {\n        attributes [.font] = italicFont\n      }\n      self.mTokenAttributeArray.append (attributes.isEmpty \? nil : attributes)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Lexical analysis\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func parseLexicalTokenForLexicalColoring () -> LexicalToken {\n    let startLocation = self.currentLocation\n    if let idx = self.mEndTemplateDelimiterIndex,\n       self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].endString, advance: true) {\n      self.mEndTemplateDelimiterIndex = nil\n    }\n    if self.mEndTemplateDelimiterIndex != nil {\n      return super.parseLexicalTokenForLexicalColoring ()\n    }else{ // In template string, find code start string\n      while self.mEndTemplateDelimiterIndex == nil, self.currentChar != 0 {\n        var idx = 0\n        while self.mEndTemplateDelimiterIndex == nil, idx < kTemplateDefinitionArray_galgasTemplateScanner.count {\n          if self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].startString, advance: true) {\n            self.mEndTemplateDelimiterIndex = idx\n          }\n          idx += 1\n        }\n        if self.mEndTemplateDelimiterIndex == nil {\n          self.advance ()\n        }\n      }\n      return LexicalToken (\n        range: NSRange (location: startLocation, length: self.currentLocation - startLocation),\n        tokenCode: ") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE,\n        templateDelimiterIndex: self.mEndTemplateDelimiterIndex\n      )\n    }\n  }\n  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInstructionList&?&&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInstructionList_26__3F__26__26__3F__26_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                              const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                              GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                              const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                              GGS_string & ioArgument_ioGeneratedCode,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas3", 35)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_1856 (constinArgument_inInstructionList) ;
  while (enumerator_1856.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_1856.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas3", 37)) ;
    enumerator_1856.gotoNextObject () ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas3", 45)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticTypeForGeneration::getter_getImplementationCppFileName (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  result_result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas3", 263)).readProperty_headerFileName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticTypeForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticTypeForGeneration::getter_isPredefined (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  result_result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas3", 275)).readProperty_isPredefined () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_semanticTypeForGeneration::getter_headerKind (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  result_result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas3", 281)).readProperty_headerKind () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticDeclarationWithHeaderForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticDeclarationWithHeaderForGeneration::getter_getImplementationCppFileName (Compiler */* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_semanticDeclarationWithHeaderForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_implementationCppFileName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticDeclarationWithHeaderForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticDeclarationWithHeaderForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_semanticDeclarationWithHeaderForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_generateHeader () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticDeclarationWithHeaderForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_semanticDeclarationWithHeaderForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("semanticsDecoratedTypes.galgas3", 310)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticDeclarationWithHeaderForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticDeclarationWithHeaderForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkextensionSetterDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inClassNameForErrorSignaling,
                                                                             const GGS_string constinArgument_inClassName,
                                                                             const GGS_lstring constinArgument_inAbstractExtensionSetterName,
                                                                             const GGS_descendantClassListMap constinArgument_inDescendantClassListMap,
                                                                             const GGS_genericExtensionMethodListMap constinArgument_inOverridingExtensionMethodListMap,
                                                                             const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList var_descendantClasses_7503 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 181)) ;
  UpEnumerator_unifiedTypeMapEntryList enumerator_7581 (var_descendantClasses_7503) ;
  while (enumerator_7581.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_7629 = extensionGetter_definition (enumerator_7581.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 183)).readProperty_typeName () ;
    GGS_lstringlist var_overridingMethods_7698 = extensionGetter_listForKey (constinArgument_inOverridingExtensionMethodListMap, var_descendantClassName_7629.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 184)) ;
    GGS_bool var_found_7808 = GGS_bool (false) ;
    UpEnumerator_lstringlist enumerator_7831 (var_overridingMethods_7698) ;
    bool bool_0 = var_found_7808.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas3", 186)).isValidAndTrue () ;
    if (enumerator_7831.hasCurrentObject () && bool_0) {
      while (enumerator_7831.hasCurrentObject () && bool_0) {
        var_found_7808 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionSetterName.readProperty_string ().objectCompare (enumerator_7831.current_mValue (HERE).readProperty_string ())) ;
        enumerator_7831.gotoNextObject () ;
        if (enumerator_7831.hasCurrentObject ()) {
          bool_0 = var_found_7808.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas3", 186)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_7808.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas3", 189)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_7581.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 190)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas3", 190)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_7629.readProperty_string (), constinArgument_inAbstractExtensionSetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 191)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionSetterName.readProperty_location (), GGS_string ("an abstract extension proc '").add_operation (constinArgument_inAbstractExtensionSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 200)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 200)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 200)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 201)).add_operation (var_descendantClassName_7629.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 202)).add_operation (GGS_string ("' does not implement this proc"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 202)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 200)) ;
        }
      }
    }
    enumerator_7581.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExtensionMethodDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inClassNameForErrorSignaling,
                                                                             const GGS_string constinArgument_inClassName,
                                                                             const GGS_lstring constinArgument_inAbstractExtensionMethodName,
                                                                             const GGS_descendantClassListMap constinArgument_inDescendantClassListMap,
                                                                             const GGS_genericExtensionMethodListMap constinArgument_inOverridingExtensionMethodListMap,
                                                                             const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList var_descendantClasses_9120 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 218)) ;
  UpEnumerator_unifiedTypeMapEntryList enumerator_9198 (var_descendantClasses_9120) ;
  while (enumerator_9198.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_9246 = extensionGetter_definition (enumerator_9198.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 220)).readProperty_typeName () ;
    GGS_lstringlist var_overridingMethods_9315 = extensionGetter_listForKey (constinArgument_inOverridingExtensionMethodListMap, var_descendantClassName_9246.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 221)) ;
    GGS_bool var_found_9425 = GGS_bool (false) ;
    UpEnumerator_lstringlist enumerator_9448 (var_overridingMethods_9315) ;
    bool bool_0 = var_found_9425.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas3", 223)).isValidAndTrue () ;
    if (enumerator_9448.hasCurrentObject () && bool_0) {
      while (enumerator_9448.hasCurrentObject () && bool_0) {
        var_found_9425 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionMethodName.readProperty_string ().objectCompare (enumerator_9448.current_mValue (HERE).readProperty_string ())) ;
        enumerator_9448.gotoNextObject () ;
        if (enumerator_9448.hasCurrentObject ()) {
          bool_0 = var_found_9425.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas3", 223)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_9425.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas3", 226)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_9198.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 227)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas3", 227)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_9246.readProperty_string (), constinArgument_inAbstractExtensionMethodName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 228)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionMethodName.readProperty_location (), GGS_string ("an abstract extension proc '").add_operation (constinArgument_inAbstractExtensionMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 237)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 237)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 237)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 238)).add_operation (var_descendantClassName_9246.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 239)).add_operation (GGS_string ("' does not implement this proc"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 239)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 237)) ;
        }
      }
    }
    enumerator_9198.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExtensionGetterDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inClassNameForErrorSignaling,
                                                                             const GGS_string constinArgument_inClassName,
                                                                             const GGS_lstring constinArgument_inAbstractExtensionGetterName,
                                                                             const GGS_descendantClassListMap constinArgument_inDescendantClassListMap,
                                                                             const GGS_genericExtensionMethodListMap constinArgument_inOverridingExtensionGetterListMap,
                                                                             const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList var_descendantClasses_10737 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 255)) ;
  UpEnumerator_unifiedTypeMapEntryList enumerator_10815 (var_descendantClasses_10737) ;
  while (enumerator_10815.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_10863 = extensionGetter_definition (enumerator_10815.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 257)).readProperty_typeName () ;
    GGS_lstringlist var_overridingReaders_10932 = extensionGetter_listForKey (constinArgument_inOverridingExtensionGetterListMap, var_descendantClassName_10863.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 258)) ;
    GGS_bool var_found_11042 = GGS_bool (false) ;
    UpEnumerator_lstringlist enumerator_11065 (var_overridingReaders_10932) ;
    bool bool_0 = var_found_11042.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas3", 260)).isValidAndTrue () ;
    if (enumerator_11065.hasCurrentObject () && bool_0) {
      while (enumerator_11065.hasCurrentObject () && bool_0) {
        var_found_11042 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionGetterName.readProperty_string ().objectCompare (enumerator_11065.current_mValue (HERE).readProperty_string ())) ;
        enumerator_11065.gotoNextObject () ;
        if (enumerator_11065.hasCurrentObject ()) {
          bool_0 = var_found_11042.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas3", 260)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_11042.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas3", 263)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_10815.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 264)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas3", 264)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_10863.readProperty_string (), constinArgument_inAbstractExtensionGetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionGetterListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 265)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionGetterName.readProperty_location (), GGS_string ("an abstract extension func '").add_operation (constinArgument_inAbstractExtensionGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 274)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 274)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 274)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 275)).add_operation (var_descendantClassName_10863.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 276)).add_operation (GGS_string ("' does not implement this func"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 276)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 274)) ;
        }
      }
    }
    enumerator_10815.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'performGalgas3ProjectGlobalCheckings&?'
//
//--------------------------------------------------------------------------------------------------

void routine_performGalgas_33_ProjectGlobalCheckings_26__3F_ (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GGS_semanticDeclarationListAST constinArgument_inSemanticDeclarationList,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("projectGlobalCheckings.galgas3", 288)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_println_3F_ (GGS_string ("*** Perform global checkings"), inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 289)) ;
      }
    }
  }
  GGS_descendantClassListMap var_descendantClassListMap_12348 = GGS_descendantClassListMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_unifiedTypeMap enumerator_12389 (ioArgument_ioTypeMap) ;
  while (enumerator_12389.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_superType_12423 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_12389.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 295)).readProperty_superType () ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_superType_12423.getter_isNull (SOURCE_FILE ("projectGlobalCheckings.galgas3", 296)).operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas3", 296)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        extensionSetter_insertKey (var_descendantClassListMap_12348, extensionGetter_definition (var_superType_12423, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 298)).readProperty_typeName ().readProperty_string (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_12389.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 299)), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 297)) ;
        }
      }
    }
    enumerator_12389.gotoNextObject () ;
  }
  GGS_genericExtensionMethodListMap var_abstractExtensionMethodListMap_12734 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionMethodListMap_12808 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionMethodListMap_12874 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionMethodListMap_12950 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_abstractExtensionGetterListMap_13034 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionReaderListMap_13108 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionGetterListMap_13174 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionGetterListMap_13250 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_abstractExtensionSetterListMap_13334 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionSetterListMap_13408 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionSetterListMap_13474 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionSetterListMap_13550 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticDeclarationListAST enumerator_13604 (constinArgument_inSemanticDeclarationList) ;
  while (enumerator_13604.hasCurrentObject ()) {
    callExtensionMethod_buildExtensionListMaps ((cPtr_semanticDeclarationAST *) enumerator_13604.current_mSemanticDeclaration (HERE).ptr (), var_abstractExtensionSetterListMap_13334, var_extensionSetterListMap_13408, var_overridingExtensionSetterListMap_13474, var_overridingAbstractExtensionSetterListMap_13550, var_abstractExtensionMethodListMap_12734, var_extensionMethodListMap_12808, var_overridingExtensionMethodListMap_12874, var_overridingAbstractExtensionMethodListMap_12950, var_abstractExtensionGetterListMap_13034, var_extensionReaderListMap_13108, var_overridingExtensionGetterListMap_13174, var_overridingAbstractExtensionGetterListMap_13250, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 317)) ;
    enumerator_13604.gotoNextObject () ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("projectGlobalCheckings.galgas3", 333)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_14359 (var_abstractExtensionSetterListMap_13334.readProperty_dictionary ()) ;
      while (enumerator_14359.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14462 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_14498 (enumerator_14359.current_mList (HERE)) ;
        while (enumerator_14498.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14462.setter_insertKey (enumerator_14498.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 338)) ;
          }
          enumerator_14498.gotoNextObject () ;
        }
        enumerator_14359.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_14674 (var_extensionSetterListMap_13408.readProperty_dictionary ()) ;
      while (enumerator_14674.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14769 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_14805 (enumerator_14674.current_mList (HERE)) ;
        while (enumerator_14805.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14769.setter_insertKey (enumerator_14805.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 345)) ;
          }
          enumerator_14805.gotoNextObject () ;
        }
        enumerator_14674.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_14987 (var_overridingExtensionSetterListMap_13474.readProperty_dictionary ()) ;
      while (enumerator_14987.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_15092 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_15128 (enumerator_14987.current_mList (HERE)) ;
        while (enumerator_15128.hasCurrentObject ()) {
          {
          var_extensionSetterMap_15092.setter_insertKey (enumerator_15128.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 352)) ;
          }
          enumerator_15128.gotoNextObject () ;
        }
        enumerator_14987.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_15319 (var_overridingAbstractExtensionMethodListMap_12950.readProperty_dictionary ()) ;
      while (enumerator_15319.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_15432 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_15468 (enumerator_15319.current_mList (HERE)) ;
        while (enumerator_15468.hasCurrentObject ()) {
          {
          var_extensionSetterMap_15432.setter_insertKey (enumerator_15468.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 359)) ;
          }
          enumerator_15468.gotoNextObject () ;
        }
        enumerator_15319.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_15703 (var_abstractExtensionSetterListMap_13334.readProperty_dictionary ()) ;
      while (enumerator_15703.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_15769 (enumerator_15703.current_mList (HERE)) ;
        while (enumerator_15769.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_15703.current_key (HERE), enumerator_15703.current_key (HERE), enumerator_15769.current_mValue (HERE), var_descendantClassListMap_12348, var_overridingExtensionSetterListMap_13474, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 365)) ;
          }
          enumerator_15769.gotoNextObject () ;
        }
        enumerator_15703.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_16177 (var_overridingAbstractExtensionSetterListMap_13550.readProperty_dictionary ()) ;
      while (enumerator_16177.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_16253 (enumerator_16177.current_mList (HERE)) ;
        while (enumerator_16253.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_16177.current_key (HERE), enumerator_16177.current_key (HERE), enumerator_16253.current_mValue (HERE), var_descendantClassListMap_12348, var_overridingExtensionSetterListMap_13474, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 378)) ;
          }
          enumerator_16253.gotoNextObject () ;
        }
        enumerator_16177.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_16586 (var_abstractExtensionMethodListMap_12734.readProperty_dictionary ()) ;
      while (enumerator_16586.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16689 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_16725 (enumerator_16586.current_mList (HERE)) ;
        while (enumerator_16725.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16689.setter_insertKey (enumerator_16725.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 392)) ;
          }
          enumerator_16725.gotoNextObject () ;
        }
        enumerator_16586.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_16892 (var_extensionMethodListMap_12808.readProperty_dictionary ()) ;
      while (enumerator_16892.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16987 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_17023 (enumerator_16892.current_mList (HERE)) ;
        while (enumerator_17023.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16987.setter_insertKey (enumerator_17023.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 399)) ;
          }
          enumerator_17023.gotoNextObject () ;
        }
        enumerator_16892.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_17196 (var_overridingExtensionMethodListMap_12874.readProperty_dictionary ()) ;
      while (enumerator_17196.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_17301 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_17337 (enumerator_17196.current_mList (HERE)) ;
        while (enumerator_17337.hasCurrentObject ()) {
          {
          var_extensionMethodMap_17301.setter_insertKey (enumerator_17337.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 406)) ;
          }
          enumerator_17337.gotoNextObject () ;
        }
        enumerator_17196.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_17519 (var_overridingAbstractExtensionMethodListMap_12950.readProperty_dictionary ()) ;
      while (enumerator_17519.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_17632 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_17668 (enumerator_17519.current_mList (HERE)) ;
        while (enumerator_17668.hasCurrentObject ()) {
          {
          var_extensionMethodMap_17632.setter_insertKey (enumerator_17668.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 413)) ;
          }
          enumerator_17668.gotoNextObject () ;
        }
        enumerator_17519.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_17885 (var_abstractExtensionMethodListMap_12734.readProperty_dictionary ()) ;
      while (enumerator_17885.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_17951 (enumerator_17885.current_mList (HERE)) ;
        while (enumerator_17951.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_17885.current_key (HERE), enumerator_17885.current_key (HERE), enumerator_17951.current_mValue (HERE), var_descendantClassListMap_12348, var_overridingExtensionMethodListMap_12874, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 419)) ;
          }
          enumerator_17951.gotoNextObject () ;
        }
        enumerator_17885.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_18330 (var_overridingAbstractExtensionMethodListMap_12950.readProperty_dictionary ()) ;
      while (enumerator_18330.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_18406 (enumerator_18330.current_mList (HERE)) ;
        while (enumerator_18406.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_18330.current_key (HERE), enumerator_18330.current_key (HERE), enumerator_18406.current_mValue (HERE), var_descendantClassListMap_12348, var_overridingExtensionMethodListMap_12874, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 432)) ;
          }
          enumerator_18406.gotoNextObject () ;
        }
        enumerator_18330.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_18888 (var_abstractExtensionGetterListMap_13034.readProperty_dictionary ()) ;
      while (enumerator_18888.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_18991 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_19027 (enumerator_18888.current_mList (HERE)) ;
        while (enumerator_19027.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_18991.setter_insertKey (enumerator_19027.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 448)) ;
          }
          enumerator_19027.gotoNextObject () ;
        }
        enumerator_18888.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_19194 (var_extensionReaderListMap_13108.readProperty_dictionary ()) ;
      while (enumerator_19194.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_19289 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_19325 (enumerator_19194.current_mList (HERE)) ;
        while (enumerator_19325.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_19289.setter_insertKey (enumerator_19325.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 455)) ;
          }
          enumerator_19325.gotoNextObject () ;
        }
        enumerator_19194.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_19498 (var_overridingExtensionGetterListMap_13174.readProperty_dictionary ()) ;
      while (enumerator_19498.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_19603 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator_lstringlist enumerator_19639 (enumerator_19498.current_mList (HERE)) ;
        while (enumerator_19639.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_19603.setter_insertKey (enumerator_19639.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 462)) ;
          }
          enumerator_19639.gotoNextObject () ;
        }
        enumerator_19498.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_19831 (var_abstractExtensionGetterListMap_13034.readProperty_dictionary ()) ;
      while (enumerator_19831.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_19897 (enumerator_19831.current_mList (HERE)) ;
        while (enumerator_19897.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_19831.current_key (HERE), enumerator_19831.current_key (HERE), enumerator_19897.current_mValue (HERE), var_descendantClassListMap_12348, var_overridingExtensionGetterListMap_13174, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 468)) ;
          }
          enumerator_19897.gotoNextObject () ;
        }
        enumerator_19831.gotoNextObject () ;
      }
      UpEnumerator_genericExtensionMethodListMapDictionary enumerator_20251 (var_overridingAbstractExtensionGetterListMap_13250.readProperty_dictionary ()) ;
      while (enumerator_20251.hasCurrentObject ()) {
        UpEnumerator_lstringlist enumerator_20327 (enumerator_20251.current_mList (HERE)) ;
        while (enumerator_20327.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_20251.current_key (HERE), enumerator_20251.current_key (HERE), enumerator_20327.current_mValue (HERE), var_descendantClassListMap_12348, var_overridingExtensionGetterListMap_13174, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 481)) ;
          }
          enumerator_20327.gotoNextObject () ;
        }
        enumerator_20251.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkMethodSignatures????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkMethodSignatures_3F__3F__3F__3F_ (const GGS_formalParameterListForGeneration constinArgument_inTestedSignature,
                                                    const GGS_location constinArgument_inErrorLocation,
                                                    const GGS_formalParameterSignature constinArgument_inReferenceSignature,
                                                    const GGS_location constinArgument_inReferenceLocation,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas3", 33)).objectCompare (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas3", 33)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this proc declares ").add_operation (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas3", 34)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas3", 34)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 34)).add_operation (GGS_string (" formal parameter(s), but overriden proc declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 34)).add_operation (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas3", 35)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas3", 35)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 35)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 34)) ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden proc is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 36)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    UpEnumerator_formalParameterSignature enumerator_2118 (constinArgument_inReferenceSignature) ;
    UpEnumerator_formalParameterListForGeneration enumerator_2230 (constinArgument_inTestedSignature) ;
    while (enumerator_2118.hasCurrentObject () && enumerator_2230.hasCurrentObject ()) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_2118.current_mFormalArgumentPassingMode (HERE).objectCompare (enumerator_2230.current_mFormalArgumentPassingMode (HERE))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_2230.current_mFormalArgumentName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_2230.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 40)).add_operation (GGS_string ("' formal parameter is declared as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 40)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2230.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 41)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 40)).add_operation (GGS_string (", but overriden proc declares it as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 41)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2118.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 42)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 41)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 40)) ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden proc is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 44)) ;
        }
      }
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_2230.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_2118.current_mFormalSelector (HERE).readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_string var_s_2778 ;
          switch (enumerator_2118.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
          case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
            {
              var_s_2778 = GGS_string ("\?") ;
            }
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
            {
              var_s_2778 = GGS_string ("\?!") ;
            }
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
            {
              var_s_2778 = GGS_string ("!") ;
            }
            break ;
          }
          GGS_string temp_7 ;
          const GalgasBool test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_2118.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            temp_7 = enumerator_2118.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 56)) ;
          }else if (GalgasBool::boolFalse == test_8) {
            temp_7 = GGS_string::makeEmptyString () ;
          }
          var_s_2778.plusAssignOperation(temp_7, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 56)) ;
          GenericArray <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, EnumFixItKind::fixItReplace, var_s_2778) ;
          inCompiler->emitSemanticError (enumerator_2230.current_mFormalSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_2778, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 57)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 57)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 57)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_2230.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 59)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (enumerator_2118.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 59)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_2230.current_mFormalArgumentName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_2230.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 60)).add_operation (GGS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 60)).add_operation (extensionGetter_definition (enumerator_2230.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 61)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 60)).add_operation (GGS_string ("' type, but overriden proc declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 61)).add_operation (extensionGetter_definition (enumerator_2118.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 62)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 61)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 62)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 60)) ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden proc is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 63)) ;
        }
      }
      enumerator_2118.gotoNextObject () ;
      enumerator_2230.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkGetterSignatures??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (const GGS_formalInputParameterListForGeneration constinArgument_inTestedSignature,
                                                            const GGS_unifiedTypeMapEntry constinArgument_inReturnType,
                                                            const GGS_location constinArgument_inErrorLocation,
                                                            const GGS_functionSignature constinArgument_inReferenceSignature,
                                                            const GGS_unifiedTypeMapEntry constinArgument_inInheritedReturnType,
                                                            const GGS_location constinArgument_inReferenceLocation,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 82)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (constinArgument_inInheritedReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 82)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the return type is '@").add_operation (extensionGetter_definition (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 84)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 83)).add_operation (GGS_string ("', but overriden func names '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 84)).add_operation (extensionGetter_definition (constinArgument_inInheritedReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 85)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 84)).add_operation (GGS_string ("' as return type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 85)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 83)) ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden func is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 86)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas3", 88)).objectCompare (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas3", 88)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this func declares ").add_operation (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas3", 89)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas3", 89)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 89)).add_operation (GGS_string (" formal parameter(s), but overriden func declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 89)).add_operation (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas3", 90)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas3", 90)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 90)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 89)) ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden func is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 91)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    UpEnumerator_functionSignature enumerator_5013 (constinArgument_inReferenceSignature) ;
    UpEnumerator_formalInputParameterListForGeneration enumerator_5100 (constinArgument_inTestedSignature) ;
    while (enumerator_5013.hasCurrentObject () && enumerator_5100.hasCurrentObject ()) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_5100.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_5013.current_mFormalSelector (HERE).readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_string temp_7 ;
          const GalgasBool test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_5013.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            temp_7 = enumerator_5013.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 95)) ;
          }else if (GalgasBool::boolFalse == test_8) {
            temp_7 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_5214 = GGS_string ("\?").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 95)) ;
          GenericArray <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, EnumFixItKind::fixItReplace, var_s_5214) ;
          inCompiler->emitSemanticError (enumerator_5100.current_mFormalSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_5214, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 96)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 96)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 96)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_5100.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 98)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (enumerator_5013.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 98)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_5100.current_mFormalArgumentName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5100.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 99)).add_operation (GGS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 99)).add_operation (extensionGetter_definition (enumerator_5100.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 100)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 99)).add_operation (GGS_string ("' type, but overriden func declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 100)).add_operation (extensionGetter_definition (enumerator_5013.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 101)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 100)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 101)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 99)) ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden func is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 102)) ;
        }
      }
      enumerator_5013.gotoNextObject () ;
      enumerator_5100.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLocalVariableMapAndSignature?&?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    const GGS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature = GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_formalParameterListAST enumerator_6951 (constinArgument_inRoutineSignatureAST) ;
  while (enumerator_6951.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_type_6984 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_6951.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 127)) ;
    GGS_string var_formalArgumentCppName_7079 ;
    switch (enumerator_6951.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        var_formalArgumentCppName_7079 = GGS_string ("inArgument_").add_operation (enumerator_6951.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 132)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 131)) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = enumerator_6951.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            {
            extensionSetter_insertInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_6951.current (HERE).readProperty_mFormalArgumentName (), var_type_6984, var_formalArgumentCppName_7079, var_formalArgumentCppName_7079, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 134)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          {
          extensionSetter_insertInputFormalArgument (ioArgument_ioVariableMap, enumerator_6951.current (HERE).readProperty_mFormalArgumentName (), var_type_6984, var_formalArgumentCppName_7079, var_formalArgumentCppName_7079, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 141)) ;
          }
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        var_formalArgumentCppName_7079 = GGS_string ("outArgument_").add_operation (enumerator_6951.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 150)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 149)) ;
        {
        extensionSetter_insertOutputFormalArgument (ioArgument_ioVariableMap, enumerator_6951.current (HERE).readProperty_mFormalArgumentName (), var_type_6984, var_formalArgumentCppName_7079, var_formalArgumentCppName_7079, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 151)) ;
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        var_formalArgumentCppName_7079 = GGS_string ("ioArgument_").add_operation (enumerator_6951.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 159)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 158)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = enumerator_6951.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_6951.current (HERE).readProperty_mFormalArgumentName (), var_type_6984, var_formalArgumentCppName_7079, var_formalArgumentCppName_7079, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 161)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          {
          extensionSetter_insertInputOutputFormalArgument (ioArgument_ioVariableMap, enumerator_6951.current (HERE).readProperty_mFormalArgumentName (), var_type_6984, var_formalArgumentCppName_7079, var_formalArgumentCppName_7079, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 168)) ;
          }
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
      {
        var_formalArgumentCppName_7079 = GGS_string ("constinArgument_").add_operation (enumerator_6951.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 177)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 176)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = enumerator_6951.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_6951.current (HERE).readProperty_mFormalArgumentName (), var_type_6984, var_formalArgumentCppName_7079, var_formalArgumentCppName_7079, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 179)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          {
          extensionSetter_insertConstantInputFormalArgument (ioArgument_ioVariableMap, enumerator_6951.current (HERE).readProperty_mFormalArgumentName (), var_type_6984, var_formalArgumentCppName_7079, var_formalArgumentCppName_7079, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 186)) ;
          }
        }
      }
      break ;
    }
    outArgument_outRoutineSignature.addAssignOperation (enumerator_6951.current (HERE).readProperty_mFormalSelector (), enumerator_6951.current (HERE).readProperty_mFormalArgumentPassingMode (), var_type_6984, enumerator_6951.current (HERE).readProperty_mFormalArgumentName (), var_formalArgumentCppName_7079  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 194)) ;
    enumerator_6951.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRoutineBody?&?&???!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     const GGS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                                                     const GGS_semanticInstructionListAST constinArgument_inInstructionList,
                                                                     const GGS_location constinArgument_inEndOfMethodLocation,
                                                                     GGS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                                                     GGS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_10288 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_10392 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas3", 211)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas3", 211)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator_typedPropertyList enumerator_10511 (extensionGetter_definition (var_selfAvailable_10392.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 212)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_10511.hasCurrentObject ()) {
        GGS_bool temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, var_selfAvailable_10392.readProperty_selfMutability ().objectCompare (GGS_selfMutability::class_func_initializer (SOURCE_FILE ("semanticAnalysis.galgas3", 213)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = GGS_bool (ComparisonKind::notEqual, enumerator_10511.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas3", 214)))) ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_bool (true) ;
        }
        GGS_bool var_initialized_10545 = temp_1 ;
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_10288, enumerator_10511.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfMethodLocation, enumerator_10511.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_10511.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 222)), var_initialized_10545, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 217)) ;
        }
        enumerator_10511.gotoNextObject () ;
      }
    }
  }
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inRoutineSignatureAST, var_variableMap_10288, outArgument_outRoutineSignature, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 228)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticInstructionListAST enumerator_11263 (constinArgument_inInstructionList) ;
  while (enumerator_11263.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_11263.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_10288, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 238)) ;
    enumerator_11263.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_10288, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 248)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externFunctionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument_inProductDirectory */,
                                                                 const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_12187 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 263)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12187, var_nameForUsefulness_12187, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 264)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_externFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_12187  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 266)) ;
    }
  }
  GGS_formalInputParameterListForGeneration var_formalArgumentList_12435 = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_externFunctionDeclarationAST temp_3 = this ;
  UpEnumerator_formalInputParameterListAST enumerator_12567 (temp_3.readProperty_mFormalArgumentList ()) ;
  while (enumerator_12567.hasCurrentObject ()) {
    var_formalArgumentList_12435.addAssignOperation (enumerator_12567.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_12567.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 273)), enumerator_12567.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_12567.current_mFormalArgumentName (HERE), enumerator_12567.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 271)) ;
    enumerator_12567.gotoNextObject () ;
  }
  const GGS_externFunctionDeclarationAST temp_4 = this ;
  const GGS_externFunctionDeclarationAST temp_5 = this ;
  const GGS_externFunctionDeclarationAST temp_6 = this ;
  const GGS_externFunctionDeclarationAST temp_7 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("extern func ").add_operation (temp_4.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 279)), GGS_functionPrototypeDeclarationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21_ (GGS_bool (true), GGS_string ("func-").add_operation (temp_5.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 282)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 282)), temp_6.readProperty_mFunctionName ().readProperty_string (), var_formalArgumentList_12435, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_7.readProperty_mResultTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 285)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 278)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeFunctionBody?&?&?????!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__21__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      const GGS_formalInputParameterListAST constinArgument_inFunctionSignature,
                                                                                      const GGS_semanticInstructionListAST constinArgument_inInstructionList,
                                                                                      const GGS_lstring constinArgument_inReturnVariableName,
                                                                                      const GGS_lstring constinArgument_inResultTypeName,
                                                                                      const GGS_location constinArgument_inEndOfFunctionLocation,
                                                                                      GGS_formalInputParameterListForGeneration & outArgument_outSignatureForGeneration,
                                                                                      GGS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                                                                      GGS_string & outArgument_outResultVariableCppName,
                                                                                      GGS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outResultVariableCppName.drop () ; // Release 'out' argument
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_13967 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  outArgument_outSignatureForGeneration = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_formalInputParameterListAST enumerator_14122 (constinArgument_inFunctionSignature) ;
  while (enumerator_14122.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_14153 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_14122.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 310)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_14122.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_cppName_14288 = GGS_string ("constinArgument_").add_operation (enumerator_14122.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 312)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 312)) ;
        outArgument_outSignatureForGeneration.addAssignOperation (enumerator_14122.current (HERE).readProperty_mFormalSelector (), var_parameterType_14153, var_cppName_14288, enumerator_14122.current (HERE).readProperty_mFormalArgumentName (), enumerator_14122.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 313)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = enumerator_14122.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_13967, enumerator_14122.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14153, var_cppName_14288, var_cppName_14288, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 320)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_13967, enumerator_14122.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14153, var_cppName_14288, var_cppName_14288, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 322)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_cppName_14909 = GGS_string ("inArgument_").add_operation (enumerator_14122.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 325)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 325)) ;
      outArgument_outSignatureForGeneration.addAssignOperation (enumerator_14122.current (HERE).readProperty_mFormalSelector (), var_parameterType_14153, var_cppName_14909, enumerator_14122.current (HERE).readProperty_mFormalArgumentName (), enumerator_14122.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 326)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = enumerator_14122.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_13967, enumerator_14122.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14153, var_cppName_14909, var_cppName_14909, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 333)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_13967, enumerator_14122.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14153, var_cppName_14909, var_cppName_14909, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 335)) ;
        }
      }
    }
    enumerator_14122.gotoNextObject () ;
  }
  outArgument_outReturnedType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inResultTypeName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 340)) ;
  outArgument_outResultVariableCppName = GGS_string ("result_").add_operation (constinArgument_inReturnVariableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 341)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 341)) ;
  {
  extensionSetter_insertOutputFormalArgument (var_variableMap_13967, constinArgument_inReturnVariableName, outArgument_outReturnedType, outArgument_outResultVariableCppName, outArgument_outResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 342)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_selfAvailability_2E_available var_selfAvailable_15897 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas3", 344)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas3", 344)).isValuated ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      UpEnumerator_typedPropertyList enumerator_16016 (extensionGetter_definition (var_selfAvailable_15897.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 345)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_16016.hasCurrentObject ()) {
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_13967, enumerator_16016.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfFunctionLocation, enumerator_16016.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_16016.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 351)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 346)) ;
        }
        enumerator_16016.gotoNextObject () ;
      }
    }
  }
  outArgument_outSemanticInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticInstructionListAST enumerator_16417 (constinArgument_inInstructionList) ;
  while (enumerator_16417.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_16417.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_13967, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 359)) ;
    enumerator_16417.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_13967, constinArgument_inEndOfFunctionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 369)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                           const GGS_string /* constinArgument_inProductDirectory */,
                                                           const GGS_semanticContext constinArgument_inSemanticContext,
                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                           const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                           GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_17323 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 384)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17323, var_nameForUsefulness_17323, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 385)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_functionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_17323  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 387)) ;
    }
  }
  GGS_analysisContext var_analysisContext_17593 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas3", 394)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_formalInputParameterListForGeneration var_formalInputParameterList_18079 ;
  GGS_unifiedTypeMapEntry var_returnType_18114 ;
  GGS_string var_resultVariableCppName_18135 ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_18167 ;
  {
  const GGS_functionDeclarationAST temp_3 = this ;
  const GGS_functionDeclarationAST temp_4 = this ;
  const GGS_functionDeclarationAST temp_5 = this ;
  const GGS_functionDeclarationAST temp_6 = this ;
  const GGS_functionDeclarationAST temp_7 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_17323, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_17593, ioArgument_ioTypeMap, temp_3.readProperty_mFormalArgumentList (), temp_4.readProperty_mFunctionInstructionList (), temp_5.readProperty_mResultVariableName (), temp_6.readProperty_mResultTypeName (), temp_7.readProperty_mEndOfFunctionInstructionList (), var_formalInputParameterList_18079, var_returnType_18114, var_resultVariableCppName_18135, var_semanticInstructionListForGeneration_18167, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 397)) ;
  }
  const GGS_functionDeclarationAST temp_8 = this ;
  const GGS_functionDeclarationAST temp_9 = this ;
  const GGS_functionDeclarationAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("function ").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 414)), GGS_functionImplementationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_bool (true), GGS_string ("func-").add_operation (temp_9.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 417)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 417)), temp_10.readProperty_mFunctionName ().readProperty_string (), var_formalInputParameterList_18079, var_returnType_18114, var_resultVariableCppName_18135, var_semanticInstructionListForGeneration_18167, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 413)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@onceFunctionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GGS_string /* constinArgument_inProductDirectory */,
                                                               const GGS_semanticContext constinArgument_inSemanticContext,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                               GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_19196 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 437)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_19196, var_nameForUsefulness_19196, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 438)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_onceFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_mIsUsefull ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_19196  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 440)) ;
    }
  }
  GGS_analysisContext var_analysisContext_19465 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas3", 447)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_returnType_19966 ;
  GGS_string var_resultVariableCppName_19987 ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_20019 ;
  {
  const GGS_onceFunctionDeclarationAST temp_3 = this ;
  const GGS_onceFunctionDeclarationAST temp_4 = this ;
  const GGS_onceFunctionDeclarationAST temp_5 = this ;
  const GGS_onceFunctionDeclarationAST temp_6 = this ;
  GGS_formalInputParameterListForGeneration joker_19953 ; // Joker input parameter
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_19196, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_19465, ioArgument_ioTypeMap, GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), temp_3.readProperty_mFunctionInstructionList (), temp_4.readProperty_mResultVariableName (), temp_5.readProperty_mResultTypeName (), temp_6.readProperty_mEndOfFunctionInstructionList (), joker_19953, var_returnType_19966, var_resultVariableCppName_19987, var_semanticInstructionListForGeneration_20019, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 450)) ;
  }
  const GGS_onceFunctionDeclarationAST temp_7 = this ;
  const GGS_onceFunctionDeclarationAST temp_8 = this ;
  const GGS_onceFunctionDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("once function ").add_operation (temp_7.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 467)), GGS_onceFunctionDeclarationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (GGS_bool (true), GGS_string ("func-").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 470)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 470)), temp_9.readProperty_mFunctionName ().readProperty_string (), var_returnType_19966, var_resultVariableCppName_19987, var_semanticInstructionListForGeneration_20019, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 466)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_string /* constinArgument_inProductDirectory */,
                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                              GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  GGS_lstring var_filewrapperNameForUsefulness_21183 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 493)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperNameForUsefulness_21183, var_filewrapperNameForUsefulness_21183, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 494)) ;
  }
  GGS_wrapperFileMap var_wrapperFileMap_21521 ;
  GGS_wrapperDirectoryMap var_wrapperDirectoryMap_21567 ;
  const GGS_filewrapperDeclarationAST temp_1 = this ;
  GGS_lstring joker_21484 ; // Joker input parameter
  GGS_lstringlist joker_21492 ; // Joker input parameter
  GGS_filewrapperTemplateMap joker_21592_2 ; // Joker input parameter
  GGS_bool joker_21592_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), joker_21484, joker_21492, var_wrapperFileMap_21521, var_wrapperDirectoryMap_21567, joker_21592_2, joker_21592_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 496)) ;
  GGS_string var_absoluteSourcePath_21640 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_filewrapperDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas3", 506)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_filewrapperDeclarationAST temp_4 = this ;
      var_absoluteSourcePath_21640 = temp_4.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_filewrapperDeclarationAST temp_5 = this ;
    const GGS_filewrapperDeclarationAST temp_6 = this ;
    var_absoluteSourcePath_21640 = temp_5.readProperty_mSourceFileAbsolutePath ().getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas3", 509)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 509)).add_operation (temp_6.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 509)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_absoluteSourcePath_21640.getter_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas3", 511)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas3", 511)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_filewrapperDeclarationAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_21640, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 512)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 512)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 512)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    GGS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration_22144 = GGS_filewrapperTemplateListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_filewrapperDeclarationAST temp_10 = this ;
    UpEnumerator_filewrapperTemplateListAST enumerator_22223 (temp_10.readProperty_mFilewrapperTemplateList ()) ;
    while (enumerator_22223.hasCurrentObject ()) {
      const GGS_filewrapperDeclarationAST temp_11 = this ;
      GGS_lstring var_filewrapperTemplateNameForUsefulness_22261 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_11.readProperty_mFilewrapperName (), enumerator_22223.current (HERE).readProperty_mFilewrapperTemplateName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 517)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperTemplateNameForUsefulness_22261, var_filewrapperTemplateNameForUsefulness_22261, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 521)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_filewrapperTemplateNameForUsefulness_22261, var_filewrapperNameForUsefulness_21183 COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 522)) ;
      }
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::equal, enumerator_22223.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas3", 523)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_22223.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), GGS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_21640, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 525)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 525)), fixItArray13  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 524)) ;
        }
      }
      GGS_string var_absoluteTemplatePath_22967 = var_absoluteSourcePath_21640.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 527)).add_operation (enumerator_22223.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 527)) ;
      GGS_templateInstructionListAST var_resultingInstructionList_23151 ;
      var_resultingInstructionList_23151.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GGS_lstring::init_21__21_ (var_absoluteTemplatePath_22967, enumerator_22223.current (HERE).readProperty_mFilewrapperTemplatePath ().readProperty_location (), inCompiler COMMA_HERE), var_resultingInstructionList_23151  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 529)) ;
      GGS_templateVariableMap var_templateVariableMap_23346 = GGS_templateVariableMap::init (inCompiler COMMA_HERE) ;
      GGS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters_23421 = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
      UpEnumerator_formalTemplateInputParameterListAST enumerator_23547 (enumerator_22223.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
      while (enumerator_23547.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_23630 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_23547.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 535)) ;
        GGS_string var_cppVarName_23714 = GGS_string ("in_").add_operation (enumerator_23547.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 536)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 536)) ;
        {
        var_templateVariableMap_23346.setter_insertKey (enumerator_23547.current_mFormalArgumentName (HERE), var_type_23630, var_cppVarName_23714, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 537)) ;
        }
        var_filewrapperTemplateFormalInputParameters_23421.addAssignOperation (enumerator_23547.current_mFormalTemplateSelector (HERE), var_type_23630, var_cppVarName_23714, enumerator_23547.current_mFormalArgumentName (HERE), GGS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 538)) ;
        enumerator_23547.gotoNextObject () ;
      }
      GGS_templateInstructionListForGeneration var_templateInstructionListForGeneration_24039 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
      GGS_templateAnalysisContext var_templateAnalysisContext_24129 = GGS_templateAnalysisContext::init_21__21__21_ (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_23346, inCompiler COMMA_HERE) ;
      {
      routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (var_filewrapperNameForUsefulness_21183, ioArgument_ioUsefulEntitiesGraph, var_templateAnalysisContext_24129, ioArgument_ioTypeMap, var_resultingInstructionList_23151, var_templateInstructionListForGeneration_24039, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 547)) ;
      }
      var_filewrapperTemplateListForGeneration_22144.addAssignOperation (enumerator_22223.current (HERE).readProperty_mFilewrapperTemplateName ().readProperty_string (), var_filewrapperTemplateFormalInputParameters_23421, var_templateInstructionListForGeneration_24039  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 556)) ;
      enumerator_22223.gotoNextObject () ;
    }
    const GGS_filewrapperDeclarationAST temp_14 = this ;
    const GGS_filewrapperDeclarationAST temp_15 = this ;
    const GGS_filewrapperDeclarationAST temp_16 = this ;
    const GGS_filewrapperDeclarationAST temp_17 = this ;
    ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("filewrapper ").add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 563)), GGS_filewrapperDeclarationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_bool (true), GGS_string ("filewrapper-").add_operation (temp_15.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 566)), temp_16.readProperty_mFilewrapperName ().readProperty_string (), temp_17.readProperty_mFilewrapperPath ().readProperty_string (), var_wrapperFileMap_21521, var_wrapperDirectoryMap_21567, var_filewrapperTemplateListForGeneration_22144, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 562)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3SyntaxComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument_inProductDirectory */,
                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_25835 = function_syntaxNameForUsefulEntitiesGraph (temp_0.readProperty_mSyntaxComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 588)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_25835, var_nameForUsefulness_25835, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 589)) ;
  }
  GGS_terminalMap var_terminalMap_26177 ;
  GGS_indexingListAST var_indexingListAST_26216 ;
  const GGS_galgas_33_SyntaxComponentAST temp_1 = this ;
  GGS_bool joker_26151 ; // Joker input parameter
  GGS_terminalDeclarationListAST joker_26237_4 ; // Joker input parameter
  GGS_lexicalAttributeListAST joker_26237_3 ; // Joker input parameter
  GGS_lexicalStyleListAST joker_26237_2 ; // Joker input parameter
  GGS_lexicalListDeclarationListAST joker_26237_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueName (), joker_26151, var_terminalMap_26177, var_indexingListAST_26216, joker_26237_4, joker_26237_3, joker_26237_2, joker_26237_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 591)) ;
  GGS_stringset var_indexNameSet_26324 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_indexingListAST enumerator_26361 (var_indexingListAST_26216) ;
  while (enumerator_26361.hasCurrentObject ()) {
    var_indexNameSet_26324.plusPlusAssignOperation (enumerator_26361.current_mIndexName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 601)) ;
    enumerator_26361.gotoNextObject () ;
  }
  GGS_bool var_hasIndexing_26443 = GGS_bool (true) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("semanticAnalysis.galgas3", 605)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
      GGS_string var_lexiqueName_26616 = temp_3.readProperty_mLexiqueName ().readProperty_string () ;
      GGS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration_27086 ;
      {
      const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_5 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_6 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_7 = this ;
      routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (var_nameForUsefulness_25835, ioArgument_ioUsefulEntitiesGraph, temp_4.readProperty_mNonterminalDeclarationList (), temp_5.readProperty_mRuleList (), temp_6.readProperty_mSyntaxComponentName ().readProperty_string (), var_lexiqueName_26616, constinArgument_inSemanticContext, ioArgument_ioTypeMap, constinArgument_inPredefinedTypes, var_terminalMap_26177, var_indexNameSet_26324, var_hasIndexing_26443, temp_7.readProperty_mHasTranslateFeature (), var_syntaxDeclarationForGeneration_27086, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 607)) ;
      }
      ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string::makeEmptyString (), var_syntaxDeclarationForGeneration_27086  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 623)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3GrammarComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_string constinArgument_inProductDirectory,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("semanticAnalysis.galgas3", 639)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
      routine_println_3F_ (GGS_string ("*** Analyzing '").add_operation (temp_1.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 640)).add_operation (GGS_string ("' grammar"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 640)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 640)) ;
      }
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  GGS_lstring var_grammarNameForUsefulness_28106 = function_grammarNameForUsefulEntitiesGraph (temp_2.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 643)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_grammarNameForUsefulness_28106, var_grammarNameForUsefulness_28106, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 644)) ;
  }
  GGS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_28414 = GGS_terminalSymbolsMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_28496 = GGS_nonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_lstring var_lexiqueComponentName_28550 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas3", 648)) ;
  GGS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis_28660 = GGS_syntaxComponentListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_nonTerminalToAddList var_nonTerminalToAddList_28732 = GGS_nonTerminalToAddList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_addedNonTerminalCount_28771 = GGS_uint (uint32_t (0U)) ;
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  UpEnumerator_lstringlist enumerator_28804 (temp_3.readProperty_mSyntaxComponents ()) ;
  while (enumerator_28804.hasCurrentObject ()) {
    GGS_lstring var_syntaxNameForUsefulness_28862 = function_syntaxNameForUsefulEntitiesGraph (enumerator_28804.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 653)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_28106, var_syntaxNameForUsefulness_28862 COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 654)) ;
    }
    GGS_uint var_addedNonTerminalCountRef_29058 = var_addedNonTerminalCount_28771 ;
    GGS_lstring var_lexiqueName_29227 ;
    GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_29282 ;
    GGS_syntaxRuleListAST var_ruleList_29340 ;
    GGS_bool var_hasTranslateFeature_29367 ;
    constinArgument_inSemanticContext.readProperty_mSyntaxComponentMapForSemanticAnalysis ().method_searchKey (enumerator_28804.current_mValue (HERE), var_lexiqueName_29227, var_nonterminalDeclarationList_29282, var_ruleList_29340, var_hasTranslateFeature_29367, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 656)) ;
    GGS_lstring var_lexiqueNameForUsefulness_29401 = function_lexiqueNameForUsefulEntitiesGraph (var_lexiqueName_29227, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 663)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_28106, var_lexiqueNameForUsefulness_29401 COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 664)) ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_galgas_33_GrammarComponentAST temp_5 = this ;
      test_4 = temp_5.readProperty_mHasTranslateFeature ().operator_and (var_hasTranslateFeature_29367.operator_not (SOURCE_FILE ("semanticAnalysis.galgas3", 666)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 666)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_galgas_33_GrammarComponentAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_28804.current_mValue (HERE).readProperty_location (), GGS_string ("as '").add_operation (temp_6.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 667)).add_operation (GGS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 667)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 667)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_galgas_33_GrammarComponentAST temp_9 = this ;
        test_8 = var_hasTranslateFeature_29367.operator_and (temp_9.readProperty_mHasTranslateFeature ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas3", 668)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 668)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_galgas_33_GrammarComponentAST temp_10 = this ;
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mGrammarComponentName ().readProperty_location (), GGS_string ("as '").add_operation (enumerator_28804.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 669)).add_operation (GGS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 669)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 669)) ;
        }
      }
    }
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = GGS_bool (ComparisonKind::equal, var_lexiqueComponentName_28550.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        var_lexiqueComponentName_28550 = var_lexiqueName_29227 ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, var_lexiqueName_29227.readProperty_string ().objectCompare (var_lexiqueComponentName_28550.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_28804.current_mValue (HERE).readProperty_location (), GGS_string ("this syntax component uses '").add_operation (var_lexiqueName_29227.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 675)).add_operation (GGS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 676)).add_operation (var_lexiqueComponentName_28550.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 676)).add_operation (GGS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 677)), fixItArray14  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 675)) ;
        }
      }
    }
    {
    routine_handleNonTerminalDeclarations_26__3F_ (var_nonTerminalMapForGrammarAnalysis_28496, var_nonterminalDeclarationList_29282, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 680)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (var_nonTerminalMapForGrammarAnalysis_28496, var_ruleList_29340, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 685)) ;
    }
    {
    routine_buildRuleList_3F__3F__3F__26__26__26_ (var_nonTerminalMapForGrammarAnalysis_28496, enumerator_28804.current_mValue (HERE), var_ruleList_29340, var_actuallyUsedTerminalSymbolMap_28414, var_syntaxComponentListForGrammarAnalysis_28660, var_addedNonTerminalCount_28771, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 690)) ;
    }
    GGS_uint var_i_31075 = GGS_uint (uint32_t (0U)) ;
    if (var_addedNonTerminalCount_28771.isValid ()) {
      uint32_t variant_31085 = var_addedNonTerminalCount_28771.uintValue () ;
      bool loop_31085 = true ;
      while (loop_31085) {
        loop_31085 = GGS_bool (ComparisonKind::lowerThan, var_i_31075.objectCompare (var_addedNonTerminalCount_28771.substract_operation (var_addedNonTerminalCountRef_29058, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 699)))).isValid () ;
        if (loop_31085) {
          loop_31085 = GGS_bool (ComparisonKind::lowerThan, var_i_31075.objectCompare (var_addedNonTerminalCount_28771.substract_operation (var_addedNonTerminalCountRef_29058, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 699)))).boolValue () ;
        }
        if (loop_31085 && (0 == variant_31085)) {
          loop_31085 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas3", 699)) ;
        }
        if (loop_31085) {
          variant_31085 -= 1 ;
          var_nonTerminalToAddList_28732.addAssignOperation (enumerator_28804.current_mValue (HERE).readProperty_string (), var_i_31075  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 700)) ;
          var_i_31075.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 701)) ;
        }
      }
    }
    enumerator_28804.gotoNextObject () ;
  }
  GGS_uint var_startSymbolIndex_31467 ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_31539 ;
  const GGS_galgas_33_GrammarComponentAST temp_15 = this ;
  var_nonTerminalMapForGrammarAnalysis_28496.method_searchKey (temp_15.readProperty_mStartSymbolName (), var_startSymbolIndex_31467, var_startSymbolAltMap_31539, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 706)) ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_16 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_17 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_18 = this ;
  routine_checkLabelMap_3F__3F__3F__3F_ (temp_16.readProperty_mStartSymbolName ().readProperty_location (), temp_17.readProperty_mStartSymbolLabelList (), var_nonTerminalMapForGrammarAnalysis_28496.getter_locationForKey (temp_18.readProperty_mStartSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 715)), var_startSymbolAltMap_31539, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 712)) ;
  }
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_31925 = GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_19 = this ;
  UpEnumerator_lstringlist enumerator_31973 (temp_19.readProperty_mUnusedNonterminalList ()) ;
  while (enumerator_31973.hasCurrentObject ()) {
    GGS_uint var_nonterminalIndex_32083 ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_32101 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_28496.method_searchKey (enumerator_31973.current_mValue (HERE), var_nonterminalIndex_32083, joker_32101, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 721)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_31925.setter_insertKey (enumerator_31973.current_mValue (HERE), var_nonterminalIndex_32083, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 722)) ;
    }
    enumerator_31973.gotoNextObject () ;
  }
  GGS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_32342 = GGS_nonTerminalSymbolSortedListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_32424 (var_nonTerminalMapForGrammarAnalysis_28496) ;
  while (enumerator_32424.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_32342.addAssignOperation (enumerator_32424.current_lkey (HERE), enumerator_32424.current_mNonTerminalIndex (HERE), enumerator_32424.current_mNonterminalSymbolParametersMap (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 727)) ;
    enumerator_32424.gotoNextObject () ;
  }
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = GGS_bool (gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      {
      const GGS_galgas_33_GrammarComponentAST temp_21 = this ;
      const GGS_galgas_33_GrammarComponentAST temp_22 = this ;
      routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (constinArgument_inProductDirectory, temp_21.readProperty_mGrammarComponentName ().readProperty_string (), var_nonTerminalMapForGrammarAnalysis_28496, var_syntaxComponentListForGrammarAnalysis_28660, temp_22.readProperty_mStartSymbolName (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 731)) ;
      }
    }
  }
  GGS_string var_dotDocumentFilePath_33084 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../graph-class/graph-class.dot"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 740)) ;
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    test_23 = GGS_bool (gOption_galgas_5F_cli_5F_options_emitClassGraph.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      {
      routine_emitClassGraphFile_3F__3F_ (var_dotDocumentFilePath_33084, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 742)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_23) {
    {
    GGS_string::class_method_deleteFileIfExists (var_dotDocumentFilePath_33084, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 747)) ;
    }
  }
  GGS_stringset var_implementationFileHeader_33659 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_33711 (var_nonTerminalMapForGrammarAnalysis_28496) ;
  while (enumerator_33711.hasCurrentObject ()) {
    UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_33758 (enumerator_33711.current (HERE).readProperty_mNonterminalSymbolParametersMap ()) ;
    while (enumerator_33758.hasCurrentObject ()) {
      UpEnumerator_signatureForGrammarAnalysis enumerator_33887 (enumerator_33758.current_mFormalParametersList (HERE)) ;
      while (enumerator_33887.hasCurrentObject ()) {
        switch (enumerator_33887.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          {
            GGS_unifiedTypeMapEntry var_t_34073 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_33887.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 758)) ;
            extensionMethod_addHeaderFileName (var_t_34073, var_implementationFileHeader_33659, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 759)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          break ;
        }
        enumerator_33887.gotoNextObject () ;
      }
      enumerator_33758.gotoNextObject () ;
    }
    enumerator_33711.gotoNextObject () ;
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = GGS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      var_implementationFileHeader_33659 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_25 = this ;
  GGS_string var_HTMLFilePath_34466 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 769)).add_operation (temp_25.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 769)).add_operation (GGS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 769)) ;
  GGS_string var_grammarCppFile_35007 ;
  GGS_string var_grammarHTMLHelperContents_35040 ;
  GGS_string var_swiftGrammarDescription_35084 ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_26 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_27 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_28 = this ;
  GGS_string temp_29 ;
  const GalgasBool test_30 = temp_28.readProperty_mHasTranslateFeature ().boolEnum () ;
  if (GalgasBool::boolTrue == test_30) {
    temp_29 = function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 780)) ;
  }else if (GalgasBool::boolFalse == test_30) {
    temp_29 = GGS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21_ (temp_26.readProperty_mGrammarComponentName (), temp_27.readProperty_mGrammarClass (), var_startSymbolIndex_31467, var_lexiqueComponentName_28550.readProperty_string (), var_actuallyUsedTerminalSymbolMap_28414, var_syntaxComponentListForGrammarAnalysis_28660, var_unusedNonTerminalSymbolsForGrammar_31925, var_HTMLFilePath_34466, var_nonTerminalSymbolSortedListForGrammarAnalysis_32342, temp_29, var_grammarCppFile_35007, var_grammarHTMLHelperContents_35040, var_swiftGrammarDescription_35084, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 770)) ;
  }
  GalgasBool test_31 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_31) {
    test_31 = GGS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_31) {
      var_HTMLFilePath_34466.getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas3", 788)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 788)) ;
      GGS_bool joker_35412 ; // Joker input parameter
      var_grammarHTMLHelperContents_35040.method_writeToFileWhenDifferentContents (var_HTMLFilePath_34466, joker_35412, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 789)) ;
    }
  }
  if (GalgasBool::boolFalse == test_31) {
    {
    GGS_string::class_method_deleteFileIfExists (var_HTMLFilePath_34466, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 791)) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_32 = this ;
  GGS_string var_swiftFilePath_35574 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 794)).add_operation (temp_32.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 794)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 794)) ;
  GalgasBool test_33 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_33) {
    test_33 = GGS_bool (gOption_galgas_5F_cli_5F_options_outputGrammarSwiftDescriptionFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_33) {
      var_swiftFilePath_35574.getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas3", 796)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 796)) ;
      GGS_bool joker_35883 ; // Joker input parameter
      var_swiftGrammarDescription_35084.method_writeToFileWhenDifferentContents (var_swiftFilePath_35574, joker_35883, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 797)) ;
    }
  }
  if (GalgasBool::boolFalse == test_33) {
    {
    GGS_string::class_method_deleteFileIfExists (var_swiftFilePath_35574, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 799)) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_34 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_35 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_36 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_37 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_38 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string::makeEmptyString (), GGS_grammarForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_bool (true), GGS_string ("grammar-").add_operation (temp_34.readProperty_mGrammarComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 807)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 807)), temp_35.readProperty_mGrammarComponentName ().readProperty_string (), var_lexiqueComponentName_28550.readProperty_string (), var_nonTerminalMapForGrammarAnalysis_28496, var_nonTerminalToAddList_28732, temp_36.readProperty_mSyntaxComponents (), temp_37.readProperty_mStartSymbolName ().readProperty_string (), temp_38.readProperty_mHasTranslateFeature (), var_grammarCppFile_35007, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 803)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'buildPredefinedTypes'
//
//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes function_buildPredefinedTypes (const GGS_unifiedTypeMap & constinArgument_inTypeMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_predefinedTypes result_result ; // Returned variable
  result_result = GGS_predefinedTypes::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("location"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 828)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 828)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("bool"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 829)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 829)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("char"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 830)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 830)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("string"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 831)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 831)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("uint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 832)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 832)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("sint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 833)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 833)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("uint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 834)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 834)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("sint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 835)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 835)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("double"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 836)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 836)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lbool"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 837)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 837)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lchar"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 838)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 838)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lstring"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 839)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 839)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("luint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 840)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 840)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lsint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 841)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 841)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("luint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 842)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 842)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lsint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 843)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 843)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("ldouble"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 844)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 844)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("stringlist"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 845)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 845)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lbigint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 846)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 846)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("bigint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 847)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 847)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("stringset"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 848)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 848)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_lstring::init_21__21_ (GGS_string ("lstringlist"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 849)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 849)), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_buildPredefinedTypes [2] = {
  & kTypeDescriptor_GALGAS_unifiedTypeMap,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_buildPredefinedTypes (Compiler * inCompiler,
                                                                  const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                  const GGS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_unifiedTypeMap operand0 = GGS_unifiedTypeMap::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_buildPredefinedTypes (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_buildPredefinedTypes ("buildPredefinedTypes",
                                                                      functionWithGenericHeader_buildPredefinedTypes,
                                                                      & kTypeDescriptor_GALGAS_predefinedTypes,
                                                                      1,
                                                                      functionArgs_buildPredefinedTypes) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'syntaxFileGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_syntaxFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_syntaxFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_syntaxFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_syntaxFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_syntaxFileGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementationGalgas3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (Compiler * /* inCompiler */,
                                                                                                const GGS_stringset & in_INCLUSION_5F_SET
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  GGS_uint index_29_ (0) ;
  if (in_INCLUSION_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_29 (in_INCLUSION_5F_SET) ;
    while (enumerator_29.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_29.current_key (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      enumerator_29.gotoNextObject () ;
      index_29_.increment () ;
    }
  }
  result.appendString ("\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'syntaxFileGenerationTemplate syntaxAnalyserClassDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (Compiler * inCompiler,
                                                                                            const GGS_string & in_COMPONENT_5F_NAME,
                                                                                            const GGS_string & in_LEXIQUE_5F_NAME,
                                                                                            const GGS_nonterminalMap & in_NONTERMINAL_5F_MAP,
                                                                                            const GGS_ruleDeclarationList & in_RULE_5F_DECLARATION_5F_LIST,
                                                                                            const GGS_uintlist & in_SELECT_5F_METHOD_5F_LIST,
                                                                                            const GGS_bool & in_HAS_5F_INDEXING,
                                                                                            const GGS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Parser class '").add_operation (in_COMPONENT_5F_NAME, inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).add_operation (GGS_string ("' declaration"), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cParser_") ;
  result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" {\n//--- Virtual destructor\n  public: virtual ~ cParser_") ;
  result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 9)).stringValue ()) ;
  result.appendString (" (void) { }\n\n//--- Non terminal declarations\n") ;
  GGS_uint index_510_ (0) ;
  if (in_NONTERMINAL_5F_MAP.isValid ()) {
    UpEnumerator_nonterminalMap enumerator_510 (in_NONTERMINAL_5F_MAP) ;
    while (enumerator_510.hasCurrentObject ()) {
      GGS_uint index_566_ (0) ;
      if (enumerator_510.current_mLabelMap (HERE).isValid ()) {
        UpEnumerator_nonterminalLabelMap enumerator_566 (enumerator_510.current_mLabelMap (HERE)) ;
        while (enumerator_566.hasCurrentObject ()) {
          result.appendString ("  protected: virtual void nt_") ;
          result.appendString (enumerator_510.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_566.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GGS_uint index_799_IDX (0) ;
          if (enumerator_566.current_mSignature (HERE).isValid ()) {
            UpEnumerator_formalParameterSignature enumerator_799 (enumerator_566.current_mSignature (HERE)) ;
            while (enumerator_799.hasCurrentObject ()) {
              const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_799.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 16)))).boolEnum () ;
              switch (test_0) {
              case GalgasBool::boolTrue : {
                result.appendString ("const class GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_799.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_799_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_799.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 18)))).boolEnum () ;
                switch (test_1) {
                case GalgasBool::boolTrue : {
                  result.appendString ("class GGS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_799.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_799_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_799.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 20)))).boolEnum () ;
                  switch (test_2) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_799.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_799_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    result.appendString ("class GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_799.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_799_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolNotValid :
                    break ;
                  }
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                } break ;
              case GalgasBool::boolNotValid :
                break ;
              }
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              enumerator_799.gotoNextObject () ;
              index_799_IDX.increment () ;
            }
          }
          const GalgasBool test_3 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          switch (test_3) {
          case GalgasBool::boolTrue : {
            result.appendString ("class String & ") ;
            result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 28)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case GalgasBool::boolFalse : {
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          result.appendString ("class Lexique_") ;
          result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
          result.appendString (" * inLexique) = 0 ;\n\n") ;
          enumerator_566.gotoNextObject () ;
          index_566_.increment () ;
        }
      }
      const GalgasBool test_4 = in_HAS_5F_INDEXING.boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("  protected: virtual void nt_") ;
        result.appendString (enumerator_510.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 34)).stringValue ()) ;
        result.appendString ("_indexing (class Lexique_") ;
        result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
        result.appendString (" * inLexique) = 0 ;\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_510.gotoNextObject () ;
      index_510_.increment () ;
    }
  }
  result.appendString ("\n//--- Rule declarations\n") ;
  GGS_uint index_2003_ (0) ;
  if (in_RULE_5F_DECLARATION_5F_LIST.isValid ()) {
    UpEnumerator_ruleDeclarationList enumerator_2003 (in_RULE_5F_DECLARATION_5F_LIST) ;
    while (enumerator_2003.hasCurrentObject ()) {
      GGS_uint index_2141_ (0) ;
      if (enumerator_2003.current_mLabelImplementationList (HERE).isValid ()) {
        UpEnumerator_ruleLabelImplementationList enumerator_2141 (enumerator_2003.current_mLabelImplementationList (HERE)) ;
        while (enumerator_2141.hasCurrentObject ()) {
          result.appendString ("  protected: void rule_") ;
          result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_2003.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue ()) ;
          result.appendString ("_i") ;
          result.appendString (enumerator_2003.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_2141.current_mLabelName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GGS_uint index_2445_IDX (0) ;
          if (enumerator_2141.current_mSignature (HERE).isValid ()) {
            UpEnumerator_formalParameterSignature enumerator_2445 (enumerator_2141.current_mSignature (HERE)) ;
            while (enumerator_2445.hasCurrentObject ()) {
              const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2445.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 42)))).boolEnum () ;
              switch (test_5) {
              case GalgasBool::boolTrue : {
                result.appendString ("const GGS_") ;
                result.appendString (extensionGetter_identifierRepresentation (enumerator_2445.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 43)).stringValue ()) ;
                result.appendString (" constinArgument") ;
                result.appendString (index_2445_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 43)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_2445.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 44)))).boolEnum () ;
                switch (test_6) {
                case GalgasBool::boolTrue : {
                  result.appendString ("GGS_") ;
                  result.appendString (extensionGetter_identifierRepresentation (enumerator_2445.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 45)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_2445_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 45)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_7 = GGS_bool (ComparisonKind::equal, enumerator_2445.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)))).boolEnum () ;
                  switch (test_7) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_2445.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 47)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_2445_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 47)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    result.appendString ("GGS_") ;
                    result.appendString (extensionGetter_identifierRepresentation (enumerator_2445.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_2445_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolNotValid :
                    break ;
                  }
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                } break ;
              case GalgasBool::boolNotValid :
                break ;
              }
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              enumerator_2445.gotoNextObject () ;
              index_2445_IDX.increment () ;
            }
          }
          const GalgasBool test_8 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          switch (test_8) {
          case GalgasBool::boolTrue : {
            result.appendString ("String & ") ;
            result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 54)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case GalgasBool::boolFalse : {
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          result.appendString ("Lexique_") ;
          result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
          result.appendString (" * inLexique) ;\n\n") ;
          enumerator_2141.gotoNextObject () ;
          index_2141_.increment () ;
        }
      }
      result.appendString ("/*  protected: void rule_") ;
      result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 58)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2003.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 58)).stringValue ()) ;
      result.appendString ("_i") ;
      result.appendString (enumerator_2003.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 58)).stringValue ()) ;
      result.appendString ("_parse (") ;
      columnMarker = result.currentColumn () ;
      const GalgasBool test_9 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      switch (test_9) {
      case GalgasBool::boolTrue : {
        result.appendString ("String & ") ;
        result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 60)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("Lexique_") ;
      result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
      result.appendString (" * inLexique) ; */\n\n") ;
      const GalgasBool test_10 = in_HAS_5F_INDEXING.boolEnum () ;
      switch (test_10) {
      case GalgasBool::boolTrue : {
        result.appendString ("  protected: void rule_") ;
        result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_2003.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue ()) ;
        result.appendString ("_i") ;
        result.appendString (enumerator_2003.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue ()) ;
        result.appendString ("_indexing (Lexique_") ;
        result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
        result.appendString (" * inLexique) ;\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2003.gotoNextObject () ;
      index_2003_.increment () ;
    }
  }
  result.appendString ("\n\n//--- Select methods\n") ;
  GGS_uint index_3930_ (0) ;
  if (in_SELECT_5F_METHOD_5F_LIST.isValid ()) {
    UpEnumerator_uintlist enumerator_3930 (in_SELECT_5F_METHOD_5F_LIST) ;
    while (enumerator_3930.hasCurrentObject ()) {
      result.appendString ("  protected: virtual int32_t select_") ;
      result.appendString (in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3930.current_mValue (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue ()) ;
      result.appendString (" (Lexique_") ;
      result.appendString (in_LEXIQUE_5F_NAME.stringValue ()) ;
      result.appendString (" *) = 0 ;\n\n") ;
      enumerator_3930.gotoNextObject () ;
      index_3930_.increment () ;
    }
  }
  result.appendString ("\n} ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterNonterminalNonTerminalInMapAndCheck??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (const GGS_lstring constinArgument_inNonTerminalName,
                                                                   const GGS_nonterminalLabelMap constinArgument_inNonterminalLabelMap,
                                                                   GGS_nonterminalMap & ioArgument_ioNonterminalDeclarationMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_nonterminalMap_2E_element var_entry_40986 = ioArgument_ioNonterminalDeclarationMap.readSubscript__3F_ (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioNonterminalDeclarationMap.readSubscript__3F_ (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GGS_stringset var_firstDeclarationLabelSet_41073 = var_entry_40986.readProperty_mLabelMap ().getter_keySet (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 926)) ;
      GGS_stringset var_reDeclarationLabelSet_41142 = constinArgument_inNonterminalLabelMap.getter_keySet (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 927)) ;
      GGS_stringset var_missingLabelSet_41214 = var_firstDeclarationLabelSet_41073.substract_operation (var_reDeclarationLabelSet_41142, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 928)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::greaterThan, var_missingLabelSet_41214.getter_count (SOURCE_FILE ("semanticAnalysis.galgas3", 929)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string var_s_41337 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_41355 (var_missingLabelSet_41214) ;
          while (enumerator_41355.hasCurrentObject ()) {
            var_s_41337.plusAssignOperation(GGS_string ("\n-  ").add_operation (enumerator_41355.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 932)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 932)) ;
            enumerator_41355.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 935)).add_operation (GGS_string ("' nonterminal is redeclared without the following label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 935)).add_operation (var_s_41337, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 935)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 934)) ;
        }
      }
      GGS_stringset var_newLabelSet_41582 = var_reDeclarationLabelSet_41142.substract_operation (var_firstDeclarationLabelSet_41073, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 937)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::greaterThan, var_newLabelSet_41582.getter_count (SOURCE_FILE ("semanticAnalysis.galgas3", 938)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GGS_string var_s_41689 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_41707 (var_newLabelSet_41582) ;
          while (enumerator_41707.hasCurrentObject ()) {
            var_s_41689.plusAssignOperation(GGS_string ("\n-  ").add_operation (enumerator_41707.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 941)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 941)) ;
            enumerator_41707.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 944)).add_operation (GGS_string ("' nonterminal is redeclared with the new label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 944)).add_operation (var_s_41689, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 944)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 943)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, var_missingLabelSet_41214.getter_count (SOURCE_FILE ("semanticAnalysis.galgas3", 946)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_newLabelSet_41582.getter_count (SOURCE_FILE ("semanticAnalysis.galgas3", 946)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 946)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          UpEnumerator_nonterminalLabelMap enumerator_41996 (var_entry_40986.readProperty_mLabelMap ()) ;
          UpEnumerator_nonterminalLabelMap enumerator_42027 (constinArgument_inNonterminalLabelMap) ;
          while (enumerator_41996.hasCurrentObject () && enumerator_42027.hasCurrentObject ()) {
            GGS_formalParameterSignature var_newSignature_42121 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
            UpEnumerator_formalParameterSignature enumerator_42216 (enumerator_42027.current_mSignature (HERE)) ;
            while (enumerator_42216.hasCurrentObject ()) {
              var_newSignature_42121.addAssignOperation (enumerator_42216.current_mFormalSelector (HERE), enumerator_42216.current_mFormalArgumentType (HERE), enumerator_42216.current_mFormalArgumentPassingMode (HERE), enumerator_42216.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 950)) ;
              enumerator_42216.gotoNextObject () ;
            }
            {
            routine_checkMethodSignatures_3F__3F__3F__3F_ (enumerator_41996.current (HERE).readProperty_mSignatureForGeneration (), enumerator_41996.current (HERE).readProperty_mEndOfArgumentLocation (), var_newSignature_42121, enumerator_42027.current_mEndOfArgumentLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 952)) ;
            }
            enumerator_41996.gotoNextObject () ;
            enumerator_42027.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    ioArgument_ioNonterminalDeclarationMap.setter_insertKey (constinArgument_inNonTerminalName, constinArgument_inNonterminalLabelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 961)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildNonterminalDeclarationsMap??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (const GGS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                              const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_nonterminalMap & outArgument_outNonterminalDeclarationMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNonterminalDeclarationMap.drop () ; // Release 'out' argument
  outArgument_outNonterminalDeclarationMap = GGS_nonterminalMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonterminalDeclarationListAST enumerator_43178 (constinArgument_inNonterminalDeclarationList) ;
  while (enumerator_43178.hasCurrentObject ()) {
    GGS_nonterminalLabelMap var_nonterminalLabelMap_43230 = GGS_nonterminalLabelMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_nonTerminalLabelListAST enumerator_43316 (enumerator_43178.current_mLabels (HERE)) ;
    while (enumerator_43316.hasCurrentObject ()) {
      GGS_formalParameterListForGeneration var_signatureForGeneration_43364 = GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
      GGS_formalParameterSignature var_signature_43436 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
      UpEnumerator_formalParameterListAST enumerator_43575 (enumerator_43316.current_mFormalArgumentList (HERE)) ;
      while (enumerator_43575.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_t_43616 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_43575.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 980)) ;
        var_signatureForGeneration_43364.addAssignOperation (enumerator_43575.current_mFormalSelector (HERE), enumerator_43575.current_mFormalArgumentPassingMode (HERE), var_t_43616, enumerator_43575.current_mFormalArgumentName (HERE), enumerator_43575.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 981)) ;
        var_signature_43436.addAssignOperation (enumerator_43575.current_mFormalSelector (HERE), var_t_43616, enumerator_43575.current_mFormalArgumentPassingMode (HERE), enumerator_43575.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 982)) ;
        enumerator_43575.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_43230.setter_insertKey (enumerator_43316.current_mLabelName (HERE), var_signatureForGeneration_43364, var_signature_43436, enumerator_43316.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 984)) ;
      }
      enumerator_43316.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_43178.current_mNonterminalName (HERE), var_nonterminalLabelMap_43230, outArgument_outNonterminalDeclarationMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 986)) ;
    }
    enumerator_43178.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@semanticInstructionAST analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticInstructionAST::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   const GGS_bool /* constinArgument_inHasTranslateFeature */,
                                                                   const GGS_terminalMap /* constinArgument_inTerminalMap */,
                                                                   const GGS_string /* constinArgument_inLexiqueName */,
                                                                   const GGS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                   const GGS_string /* constinArgument_inComponentName */,
                                                                   const GGS_stringset /* constinArgument_inIndexNameSet */,
                                                                   GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   GGS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_semanticInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1028)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputParameterAnonymousVariable analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterAnonymousVariable::method_analyzeInputParameter (const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                         GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                         const GGS_lexicalTypeEnum /* constinArgument_inRequiredLexicalType */,
                                                                         const GGS_string /* constinArgument_inLexicalAttributeName */,
                                                                         GGS_terminalCheckAssignementList & /* ioArgument_ioTerminalCheckAssignementList */,
                                                                         GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputParameterVariable analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterVariable::method_analyzeInputParameter (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                const GGS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                const GGS_string constinArgument_inLexicalAttributeName,
                                                                GGS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_type_47424 ;
  GGS_string var_cppName_47443 ;
  {
  const GGS_inputParameterVariable temp_0 = this ;
  GGS_string joker_47452 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mActualParameterName (), var_type_47424, var_cppName_47443, joker_47452, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1068)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_47483 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_47483 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_47483 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_47483 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_47483 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_47483 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_47483 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_47483 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_47483 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_expectedType_47483.objectCompare (var_type_47424)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_inputParameterVariable temp_2 = this ;
      const GGS_inputParameterVariable temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1082)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1082)).add_operation (extensionGetter_identifierRepresentation (var_type_47424, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1082)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1082)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1082)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_47483, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1083)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1083)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1083)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1081)) ;
    }
  }
  ioArgument_ioTerminalCheckAssignementList.addAssignOperation (GGS_string::makeEmptyString (), var_cppName_47443, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1085)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputParameterDeclaredVariable analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredVariable::method_analyzeInputParameter (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        const GGS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                        const GGS_string constinArgument_inLexicalAttributeName,
                                                                        GGS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_expectedType_49108 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_49108 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_49108 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_49108 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_49108 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_49108 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_49108 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_49108 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_49108 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputParameterDeclaredVariable temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputParameterDeclaredVariable temp_2 = this ;
      GGS_unifiedTypeMapEntry var_type_49971 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1114)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_expectedType_49108.objectCompare (var_type_49971)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_inputParameterDeclaredVariable temp_4 = this ;
          const GGS_inputParameterDeclaredVariable temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1117)).add_operation (GGS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1117)).add_operation (extensionGetter_definition (var_type_49971, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1117)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1117)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1117)).add_operation (extensionGetter_definition (var_expectedType_49108, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1118)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1118)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1118)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1116)) ;
        }
      }
    }
  }
  const GGS_inputParameterDeclaredVariable temp_7 = this ;
  const GGS_inputParameterDeclaredVariable temp_8 = this ;
  GGS_string var_cppName_50370 = GGS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 1122)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1122)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1122)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1122)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas3", 1122)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1122)) ;
  {
  const GGS_inputParameterDeclaredVariable temp_9 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), GGS_bool (true), var_expectedType_49108, var_cppName_50370, var_cppName_50370, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1123)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssignOperation (extensionGetter_definition (var_expectedType_49108, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1131)).readProperty_typeName ().readProperty_string (), var_cppName_50370, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1130)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputParameterDeclaredConstant analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredConstant::method_analyzeInputParameter (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        const GGS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                        const GGS_string constinArgument_inLexicalAttributeName,
                                                                        GGS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_expectedType_51309 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_51309 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_51309 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_51309 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_51309 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_51309 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_51309 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_51309 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_51309 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputParameterDeclaredConstant temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputParameterDeclaredConstant temp_2 = this ;
      GGS_unifiedTypeMapEntry var_type_52172 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1159)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_expectedType_51309.objectCompare (var_type_52172)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_inputParameterDeclaredConstant temp_4 = this ;
          const GGS_inputParameterDeclaredConstant temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1162)).add_operation (GGS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1162)).add_operation (extensionGetter_definition (var_type_52172, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1162)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1162)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1162)).add_operation (extensionGetter_definition (var_expectedType_51309, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1163)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1163)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1163)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1161)) ;
        }
      }
    }
  }
  const GGS_inputParameterDeclaredConstant temp_7 = this ;
  const GGS_inputParameterDeclaredConstant temp_8 = this ;
  GGS_string var_cppName_52571 = GGS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 1167)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1167)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1167)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1167)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas3", 1167)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1167)) ;
  {
  const GGS_inputParameterDeclaredConstant temp_9 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), var_expectedType_51309, var_cppName_52571, var_cppName_52571, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1168)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssignOperation (extensionGetter_definition (var_expectedType_51309, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1171)).readProperty_typeName ().readProperty_string (), var_cppName_52571, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1170)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_analyzeSDT (const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                    GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                    const GGS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                    GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_analyzeSDT (const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                    GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                    const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                    GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas3", 1200)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1201)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_analyzeSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                     const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas3", 1212)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1213)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_type_54873 ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GGS_string joker_54879 ; // Joker input parameter
  GGS_string joker_54883 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_54873, joker_54879, joker_54883, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1215)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_54893 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_expectedType_54893.objectCompare (var_type_54873)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1219)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1219)).add_operation (extensionGetter_identifierRepresentation (var_type_54873, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1219)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1219)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1219)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_54893, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1220)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1220)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1220)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1218)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_analyzeSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas3", 1231)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1232)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = this ;
  GGS_string var_cppName_55776 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 1234)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1234)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1234)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1234)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas3", 1234)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1234)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_55921 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1235)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GGS_bool (true), var_type_55921, var_cppName_55776, var_cppName_55776, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1236)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_56151 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_56151.objectCompare (var_type_55921)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1246)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1246)).add_operation (extensionGetter_identifierRepresentation (var_type_55921, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1246)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1246)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1246)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_56151, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1247)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1247)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1247)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1245)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_analyzeSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas3", 1258)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1259)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GGS_string var_cppName_57027 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 1261)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1261)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1261)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1261)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas3", 1261)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1261)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_57172 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1262)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_57172, var_cppName_57027, var_cppName_57027, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1263)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_57353 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_57353.objectCompare (var_type_57172)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1267)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1267)).add_operation (extensionGetter_identifierRepresentation (var_type_57172, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1267)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1267)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1267)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_57353, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1268)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1268)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1268)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1266)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultNone generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_generateCode (const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                      const GGS_string constinArgument_inAccessMethodName,
                                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssignOperation(function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1288)).add_operation (GGS_string (".appendString ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1288)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1288)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1288)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1288)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1289)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1289)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationDropResult generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_generateCode (const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                      const GGS_string /* constinArgument_inAccessMethodName */,
                                                                                      GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                      GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInVar generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_generateCode (const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                       const GGS_string constinArgument_inAccessMethodName,
                                                                                       GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                       GGS_string & ioArgument_ioGeneratedCode,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_0 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
  GGS_string var_cppName_59408 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 1309)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1309)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1309)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1309)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas3", 1309)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1309)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_cppName_59408.add_operation (GGS_string (" = GGS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1310)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1310)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1310)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1310)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_generateCode (const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                               const GGS_string constinArgument_inAccessMethodName,
                                                                                               GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                               GGS_string & ioArgument_ioGeneratedCode,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_0 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
  GGS_string var_cppName_60010 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 1320)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1320)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1320)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1320)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas3", 1320)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1320)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_string ").add_operation (var_cppName_60010, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1321)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1321)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1321)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1321)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1321)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_generateCode (const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                 const GGS_string constinArgument_inAccessMethodName,
                                                                                                 GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                 GGS_string & ioArgument_ioGeneratedCode,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_0 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
  GGS_string var_cppName_60617 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 1331)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1331)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1331)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1331)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas3", 1331)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1331)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GGS_string ").add_operation (var_cppName_60617, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1332)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1332)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1332)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1332)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1332)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSyntaxInstructionList?&?&????????&&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                       const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                       const GGS_terminalMap constinArgument_inTerminalMap,
                                                                                                       const GGS_string constinArgument_inLexiqueName,
                                                                                                       const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                                                                       const GGS_string constinArgument_inComponentName,
                                                                                                       const GGS_syntaxInstructionList constinArgument_inSyntaxInstructionListAST,
                                                                                                       const GGS_location constinArgument_inEndOfBranchLocation,
                                                                                                       const GGS_stringset constinArgument_inIndexNameSet,
                                                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       GGS_uint & ioArgument_ioSelectMethodCount,
                                                                                                       GGS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1355)) ;
  }
  UpEnumerator_syntaxInstructionList enumerator_61792 (constinArgument_inSyntaxInstructionListAST) ;
  while (enumerator_61792.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_61792.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1358)) ;
    enumerator_61792.gotoNextObject () ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1375)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfRuleLabel?&???&???????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                              const GGS_formalParameterListAST constinArgument_inFormalArguments,
                                                                                                              const GGS_syntaxInstructionList constinArgument_inSyntaxInstructionList,
                                                                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                              const GGS_terminalMap constinArgument_inTerminalMap,
                                                                                                              const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                              const GGS_string constinArgument_inLexiqueName,
                                                                                                              const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                                                                              const GGS_string constinArgument_inComponentName,
                                                                                                              const GGS_location constinArgument_inEndOfInstructionList,
                                                                                                              const GGS_stringset constinArgument_inIndexNameSet,
                                                                                                              GGS_uint & ioArgument_ioSelectMethodCount,
                                                                                                              GGS_formalParameterListForGeneration & outArgument_outSignatureForGeneration,
                                                                                                              GGS_formalParameterSignature & outArgument_outSignature,
                                                                                                              GGS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_63376 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inFormalArguments, var_variableMap_63376, outArgument_outSignatureForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1404)) ;
  }
  outArgument_outSignature = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  UpEnumerator_formalParameterListForGeneration enumerator_63725 (outArgument_outSignatureForGeneration) ;
  while (enumerator_63725.hasCurrentObject ()) {
    outArgument_outSignature.addAssignOperation (enumerator_63725.current_mFormalSelector (HERE), enumerator_63725.current_mFormalArgumentType (HERE), enumerator_63725.current_mFormalArgumentPassingMode (HERE), enumerator_63725.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1414)) ;
    enumerator_63725.gotoNextObject () ;
  }
  outArgument_outInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_syntaxInstructionList enumerator_64058 (constinArgument_inSyntaxInstructionList) ;
  while (enumerator_64058.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_64058.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, var_variableMap_63376, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1420)) ;
    enumerator_64058.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_63376, constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1437)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfSyntaxComponent?&?????&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (const GGS_lstring constinArgument_inSyntaxComponentUsefulnessName,
                                                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                        const GGS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                                                                        const GGS_syntaxRuleListAST constinArgument_inRuleList,
                                                                                                        const GGS_string constinArgument_inSyntaxComponentName,
                                                                                                        const GGS_string constinArgument_inLexiqueName,
                                                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                        const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                                                        const GGS_terminalMap constinArgument_inTerminalMap,
                                                                                                        const GGS_stringset constinArgument_inIndexNameSet,
                                                                                                        const GGS_bool constinArgument_inHasIndexing,
                                                                                                        const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                        GGS_syntaxDeclarationForGeneration & outArgument_outSyntaxDeclarationForGeneration,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSyntaxDeclarationForGeneration.drop () ; // Release 'out' argument
  GGS_nonterminalMap var_nonterminalMap_65678 ;
  {
  routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (constinArgument_inNonterminalDeclarationList, constinArgument_inSemanticContext, ioArgument_ioTypeMap, var_nonterminalMap_65678, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1463)) ;
  }
  UpEnumerator_syntaxRuleListAST enumerator_65775 (constinArgument_inRuleList) ;
  while (enumerator_65775.hasCurrentObject ()) {
    GGS_nonterminalLabelMap var_nonterminalLabelMap_65833 = GGS_nonterminalLabelMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator_syntaxRuleLabelListAST enumerator_65921 (enumerator_65775.current_mLabelList (HERE)) ;
    while (enumerator_65921.hasCurrentObject ()) {
      GGS_formalParameterListForGeneration var_signatureForGeneration_65985 = GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
      GGS_formalParameterSignature var_signature_66050 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
      UpEnumerator_formalParameterListAST enumerator_66164 (enumerator_65921.current_mFormalArguments (HERE)) ;
      while (enumerator_66164.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_66202 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_66164.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1476)) ;
        var_signatureForGeneration_65985.addAssignOperation (enumerator_66164.current_mFormalSelector (HERE), enumerator_66164.current_mFormalArgumentPassingMode (HERE), var_type_66202, enumerator_66164.current_mFormalArgumentName (HERE), GGS_string ("argument_").add_operation (enumerator_66164.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1482))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1477)) ;
        var_signature_66050.addAssignOperation (enumerator_66164.current_mFormalSelector (HERE), var_type_66202, enumerator_66164.current_mFormalArgumentPassingMode (HERE), enumerator_66164.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1483)) ;
        enumerator_66164.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_65833.setter_insertKey (enumerator_65921.current_mLabelName (HERE), var_signatureForGeneration_65985, var_signature_66050, enumerator_65921.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1485)) ;
      }
      enumerator_65921.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_65775.current_mNonterminalName (HERE), var_nonterminalLabelMap_65833, var_nonterminalMap_65678, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1487)) ;
    }
    enumerator_65775.gotoNextObject () ;
  }
  GGS_analysisContext var_analysisContext_66832 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas3", 1494)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_uint var_selectMethodCount_67055 = GGS_uint (uint32_t (0U)) ;
  GGS_ruleDeclarationList var_ruleDeclarationList_67104 = GGS_ruleDeclarationList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_newRuleIndex_67142 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_syntaxRuleListAST enumerator_67183 (constinArgument_inRuleList) ;
  while (enumerator_67183.hasCurrentObject ()) {
    GGS_ruleLabelImplementationList var_ruleLabelImplementationList_67257 = GGS_ruleLabelImplementationList::init (inCompiler COMMA_HERE) ;
    GGS_uint var_localSelectMethodCount_67305 = var_selectMethodCount_67055 ;
    GGS_nonterminalLabelMap joker_67397 ; // Joker input parameter
    var_nonterminalMap_65678.method_searchKey (enumerator_67183.current_mNonterminalName (HERE), joker_67397, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1505)) ;
    UpEnumerator_syntaxRuleLabelListAST enumerator_67484 (enumerator_67183.current_mLabelList (HERE)) ;
    while (enumerator_67484.hasCurrentObject ()) {
      var_localSelectMethodCount_67305 = var_selectMethodCount_67055 ;
      GGS_formalParameterListForGeneration var_signatureForGeneration_68057 ;
      GGS_formalParameterSignature var_signature_68094 ;
      GGS_semanticInstructionListForGeneration var_instructionListForGeneration_68118 ;
      {
      routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inSyntaxComponentUsefulnessName, ioArgument_ioUsefulEntitiesGraph, enumerator_67484.current_mFormalArguments (HERE), enumerator_67484.current_mSyntaxInstructionList (HERE), var_analysisContext_66832, ioArgument_ioTypeMap, constinArgument_inTerminalMap, constinArgument_inHasTranslateFeature, constinArgument_inLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas3", 1517)), var_nonterminalMap_65678, constinArgument_inSyntaxComponentName, enumerator_67484.current_mEndOfInstructionList (HERE), constinArgument_inIndexNameSet, var_localSelectMethodCount_67305, var_signatureForGeneration_68057, var_signature_68094, var_instructionListForGeneration_68118, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1508)) ;
      }
      var_ruleLabelImplementationList_67257.addAssignOperation (enumerator_67484.current_mLabelName (HERE), var_signatureForGeneration_68057, var_signature_68094, enumerator_67484.current_mEndOfArgumentLocation (HERE), var_instructionListForGeneration_68118  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1527)) ;
      enumerator_67484.gotoNextObject () ;
    }
    var_selectMethodCount_67055 = var_localSelectMethodCount_67305 ;
    GGS_nonterminalLabelMap joker_68437 ; // Joker input parameter
    var_nonterminalMap_65678.method_searchKey (enumerator_67183.current_mNonterminalName (HERE), joker_68437, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1535)) ;
    var_ruleDeclarationList_67104.addAssignOperation (enumerator_67183.current_mNonterminalName (HERE).readProperty_string (), var_newRuleIndex_67142, var_ruleLabelImplementationList_67257  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1536)) ;
    var_newRuleIndex_67142.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1540)) ;
    enumerator_67183.gotoNextObject () ;
  }
  outArgument_outSyntaxDeclarationForGeneration = GGS_syntaxDeclarationForGeneration::init_21__21__21__21__21__21__21_ (constinArgument_inSyntaxComponentName, constinArgument_inLexiqueName, var_nonterminalMap_65678, var_ruleDeclarationList_67104, var_selectMethodCount_67055, constinArgument_inHasIndexing, constinArgument_inHasTranslateFeature, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitClassGraphFile??'
//
//--------------------------------------------------------------------------------------------------

void routine_emitClassGraphFile_3F__3F_ (const GGS_string constinArgument_inDotDocumentFilePath,
                                         const GGS_unifiedTypeMap constinArgument_inTypeMap,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  constinArgument_inDotDocumentFilePath.getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas3", 1557)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1557)) ;
  GGS_string var_document_69135 = GGS_string ("digraph G {\n") ;
  var_document_69135.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1559)) ;
  var_document_69135.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1560)) ;
  UpEnumerator_unifiedTypeMap enumerator_69279 (constinArgument_inTypeMap) ;
  while (enumerator_69279.hasCurrentObject ()) {
    switch (enumerator_69279.current_mElement (HERE).readProperty_mDefinition ().enumValue ()) {
    case GGS_typeDefinition::Enumeration::invalid:
      break ;
    case GGS_typeDefinition::Enumeration::enum_unsolved:
      break ;
    case GGS_typeDefinition::Enumeration::enum_solved:
      {
        GGS_unifiedTypeDefinition extractedValue_69391_definition_0 ;
        enumerator_69279.current_mElement (HERE).readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_69391_definition_0) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = extractedValue_69391_definition_0.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("semanticAnalysis.galgas3", 1565)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            switch (extractedValue_69391_definition_0.readProperty_superType ().enumValue ()) {
            case GGS_unifiedTypeMapEntry::Enumeration::invalid:
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
              {
                var_document_69135.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_69391_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1568)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1568)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1568)) ;
              }
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
              {
                GGS_unifiedTypeMapElementClass_2E_weak extractedValue_69592_superType_0 ;
                extractedValue_69391_definition_0.readProperty_superType ().getAssociatedValuesFor_element (extractedValue_69592_superType_0) ;
                GalgasBool test_1 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_1) {
                  const GGS_unifiedTypeMapElementClass var_t_69622 = extractedValue_69592_superType_0.unwrappedValue () ;
                  if (!extractedValue_69592_superType_0.isValuated ()) {
                    test_1 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_1) {
                    const GGS_typeDefinition_2E_solved var_solvedType_69641 = var_t_69622.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("semanticAnalysis.galgas3", 1570)).unwrappedValue () ;
                    if (!var_t_69622.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("semanticAnalysis.galgas3", 1570)).isValuated ()) {
                      test_1 = GalgasBool::boolFalse ;
                    }
                    if (GalgasBool::boolTrue == test_1) {
                      var_document_69135.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_69391_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1571)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1571)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1571)) ;
                      var_document_69135.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_69391_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1572)).add_operation (GGS_string ("\" -> \"@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1572)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1572)) ;
                      var_document_69135.plusAssignOperation(var_solvedType_69641.readProperty_definition ().readProperty_typeName ().readProperty_string ().add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1573)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1573)) ;
                    }
                  }
                }
              }
              break ;
            }
          }
        }
      }
      break ;
    }
    enumerator_69279.gotoNextObject () ;
  }
  var_document_69135.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1579)) ;
  GGS_bool joker_70028 ; // Joker input parameter
  var_document_69135.method_writeToFileWhenDifferentContents (constinArgument_inDotDocumentFilePath, joker_70028, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas3", 1580)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@arrayTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  result_result = GGS_string ("array [@").add_operation (temp_0.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 68)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 68)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                   GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                   GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                   GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                   GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                   GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                   GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  const GGS_arrayTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_key_3713 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 81)), temp_1.readProperty_arrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_arrayTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3713, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 82)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_3 = this ;
  const GGS_arrayTypeDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_elementTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 83)), temp_4.readProperty_elementTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 83)) ;
  }
}

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
  GGS_unifiedTypeMapEntry var_uintType_4672 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("uint"), var_uintType_4672, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 97)) ;
  }
  GGS_unifiedTypeMapEntry var_elementType_4764 ;
  {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_elementTypeName (), var_elementType_4764, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 99)) ;
  }
  GGS_formalParameterSignature temp_1 = GGS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 102)) ;
  temp_1.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas3", 102)), var_elementType_4764, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas3", 102)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 102)) ;
  GGS_formalParameterSignature var_setterInputFormalArgumentList_4840 = temp_1 ;
  GGS_formalParameterSignature temp_2 = GGS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 105)) ;
  temp_2.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas3", 105)), var_elementType_4764, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-array.galgas3", 105)), GGS_string ("outElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 105)) ;
  GGS_formalParameterSignature var_setterOutputFormalArgumentList_4982 = temp_2 ;
  GGS_getterMap var_getterMap_5162 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_5162, inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 108)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5162, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 109)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_6480 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_instanceMethodMap_6480.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("first"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 152)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas3", 153)), var_setterOutputFormalArgumentList_4982, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 155)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas3", 157)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 151)) ;
  }
  {
  var_instanceMethodMap_6480.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("last"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 161)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas3", 162)), var_setterOutputFormalArgumentList_4982, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 164)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas3", 166)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 160)) ;
  }
  GGS_setterMap var_setterMap_7053 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  GGS_formalParameterSignature temp_3 = GGS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 174)) ;
  temp_3.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas3", 174)), var_elementType_4764, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas3", 174)), GGS_string ("inElement"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 174)) ;
  var_setterMap_7053.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("append"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 172)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas3", 173)), temp_3, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas3", 176)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 171)) ;
  }
  {
  var_setterMap_7053.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("popFirst"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 180)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas3", 181)), var_setterOutputFormalArgumentList_4982, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas3", 184)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 179)) ;
  }
  {
  var_setterMap_7053.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("popLast"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 188)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas3", 189)), var_setterOutputFormalArgumentList_4982, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas3", 192)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 187)) ;
  }
  var_setterOutputFormalArgumentList_4982.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas3", 195)), var_uintType_4672, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas3", 195)), GGS_string ("inIndex")  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 195)) ;
  {
  var_setterMap_7053.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeAtIndex"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 197)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas3", 198)), var_setterOutputFormalArgumentList_4982, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas3", 201)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 196)) ;
  }
  var_setterInputFormalArgumentList_4840.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas3", 205)), var_uintType_4672, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas3", 205)), GGS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 205)) ;
  {
  var_setterMap_7053.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("insertAtIndex"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 207)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas3", 208)), var_setterInputFormalArgumentList_4840, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas3", 211)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 206)) ;
  }
  GGS_initializerMap var_initializerMap_8458 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_8506 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_arrayTypeDeclarationAST temp_4 = this ;
  var_initializerMap_8458.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_8506, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 218)), temp_4.readProperty_arrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_8506, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 217)) ;
  }
  GGS_subscriptMap var_readSubscriptMap_8710 = GGS_subscriptMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature temp_5 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 223)) ;
  temp_5.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas3", 223)), var_uintType_4672, GGS_string ("inIndex"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 223)) ;
  GGS_functionSignature var_argumentTypeList_8760 = temp_5 ;
  {
  var_readSubscriptMap_8710.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_argumentTypeList_8760, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 225)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-array.galgas3", 225)), inCompiler COMMA_HERE), var_argumentTypeList_8760, var_elementType_4764, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 224)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_6 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_6.readProperty_arrayTypeName (), GGS_bool (false), var_initializerMap_8458, var_getterMap_5162, var_setterMap_7053, var_instanceMethodMap_6480, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 230)) ;
  }
  GGS_typeFeatures var_features_9442 = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-array.galgas3", 246)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-array.galgas3", 246)) COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 246)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_arrayTypeDeclarationAST temp_8 = this ;
    test_7 = temp_8.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      var_features_9442.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-array.galgas3", 248)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 248)) ;
    }
  }
  {
  const GGS_arrayTypeDeclarationAST temp_9 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_9.readProperty_arrayTypeName (), var_features_9442, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 250)) ;
  }
  const GGS_arrayTypeDeclarationAST temp_10 = this ;
  const GGS_arrayTypeDeclarationAST temp_11 = this ;
  const GGS_arrayTypeDeclarationAST temp_12 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_9804 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_10.readProperty_arrayTypeName (), temp_11.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas3", 263)), GGS_typeKindEnum::class_func_listType (SOURCE_FILE ("declaration-type-array.galgas3", 264)), GGS_bool (true), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_8458, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_5162, var_setterMap_7053, var_instanceMethodMap_6480, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas3", 275)), var_readSubscriptMap_8710, GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_9442, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_elementType_4764, GGS_string ("array-").add_operation (temp_12.readProperty_arrayTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-array.galgas3", 282)), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 282)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-array.galgas3", 283)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_9804.readProperty_typeName (), var_typeDefinition_9804, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 285)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                            const GGS_string /* constinArgument_inProductDirectory */,
                                                            const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                            const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                            GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_11585 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 305)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11585, var_nameForUsefulness_11585, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 306)) ;
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
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_11585  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 308)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_5 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_11852 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 310)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_11585, var_elementTypeNameForUsefulness_11852 COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 311)) ;
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
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_elementTypeNameForUsefulness_11852  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 313)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_10 = this ;
  GGS_lstring var_initializerNameForUsefulness_12231 = function_initializerNameForUsefulEntitiesGraph (temp_10.readProperty_arrayTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 318)), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 316)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_12231, var_initializerNameForUsefulness_12231, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 320)) ;
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
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_12231  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 322)) ;
    }
  }
  const GGS_arrayTypeDeclarationAST temp_15 = this ;
  GGS_unifiedTypeMapEntry var_selfType_12630 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_15.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 325)) ;
  const GGS_arrayTypeDeclarationAST temp_16 = this ;
  const GGS_arrayTypeDeclarationAST temp_17 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("array type ").add_operation (temp_16.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 327)), GGS_arrayTypeForGeneration::init_21__21_ (var_selfType_12630, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_17.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 330)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 326)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                GGS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_13607 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 349)) ;
  const GGS_arrayTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, var_selfTypeDefinition_13607.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 352)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_13607.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 353)) COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 350))) ;
  const GGS_arrayTypeForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_13607.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 357)), var_selfTypeDefinition_13607.readProperty_isConcrete (), var_selfTypeDefinition_13607.readProperty_initializerMap (), var_selfTypeDefinition_13607.readProperty_classFunctionMap (), var_selfTypeDefinition_13607.readProperty_getterMap (), var_selfTypeDefinition_13607.readProperty_setterMap (), var_selfTypeDefinition_13607.readProperty_instanceMethodMap (), var_selfTypeDefinition_13607.readProperty_classMethodMap (), var_selfTypeDefinition_13607.readProperty_readSubscriptMap (), var_selfTypeDefinition_13607.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_13607.readProperty_features (), var_selfTypeDefinition_13607.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_13607.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_13607.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 355))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 355)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_string & outArgument_outImplementation,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_elementType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 379)) ;
  const GGS_arrayTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 380)) ;
  const GGS_arrayTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_15111 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 381)) ;
  const GGS_arrayTypeForGeneration temp_3 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_15111.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 384)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_15111.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 385)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_15111.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 386)) COMMA_SOURCE_FILE ("declaration-type-array.galgas3", 382))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'arrayTypeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_arrayTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_arrayTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_arrayTypeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_arrayTypeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_arrayTypeGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayTypeGenerationTemplate arrayTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeHeader_31_ (Compiler * inCompiler,
                                                                                const GGS_string & in_TYPE_5F_NAME,
                                                                                const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: ").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 2)).add_operation (GGS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n//--- Constructor\n  public: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) ;\n\n//--- No copy\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n\n//--- \n  public: inline bool hasCurrentObject (void) const {\n    return mCurrent >= 0 ;\n  }\n\n//--- \n  public: inline void gotoNextObject (void) {\n    mCurrent -= 1 ;\n  }\n\n//--- Current element access\n  public: class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" current (LOCATION_ARGS) const ;\n\n//---- Properties\n  private: const GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mSharedArray ;\n  private: int32_t mCurrent ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n//--- Constructor\n  public: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) ;\n\n//--- No copy\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n\n//--- \n  public: inline bool hasCurrentObject (void) const {\n    return mCurrent < mSharedArray.count () ;\n  }\n  \n//--- \n  public: inline void gotoNextObject (void) {\n    mCurrent += 1 ;\n  }\n\n//--- Current element access\n  public: class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" current (LOCATION_ARGS) const ;\n\n//---- Properties\n  private: const GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mSharedArray ;\n  private: int32_t mCurrent ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Private property\n  private: GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mSharedArray ;\n\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Handle copy\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--- Methods that every type should implement\n  public: virtual bool isValid (void) const override ;\n  \n  public: virtual void drop (void) override ;\n\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n//--------------------------------- Friend\n  friend class UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n  friend class DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayTypeGenerationTemplate arrayTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeSpecificImplementation (Compiler * inCompiler,
                                                                                            const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                            const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                            const GGS_bool & /* in_GENERATE_5F_COMPARISON */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 2)).add_operation (GGS_string ("' array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmSharedArray () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\nAC_GALGAS_root (),\nmSharedArray (inSource.mSharedArray) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource)  {\n  mSharedArray = inSource.mSharedArray ;\n  return *this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.mSharedArray.setCapacity (16) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mSharedArray.isAllocated () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n  mSharedArray.removeAll () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusPlusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  mSharedArray.appendObject (inValue) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_uint GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GGS_uint result ;\n  if (isValid ()) {\n    result = GGS_uint (uint32_t (mSharedArray.count ())) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::add_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = *this ;\n    result.mSharedArray.appendDataFromPointer (\n      inOperand.mSharedArray.unsafeArrayPointer (),\n      inOperand.mSharedArray.count ()\n    ) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"<array @\") ;\n  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;\n  ioString.appendCString (\", \") ;\n  ioString.appendSigned (mSharedArray.count()) ;\n  ioString.appendCString (\" object\") ;\n  ioString.appendString ((mSharedArray.count() > 1) \? \"s\" : \"\") ;\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mSharedArray.appendDataFromPointer (\n      inOperand.mSharedArray.unsafeArrayPointer (),\n      inOperand.mSharedArray.count ()\n    ) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_append (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid ()) {\n    mSharedArray.appendObject (inValue) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insertAtIndex (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_uint inInsertionIndex,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inInsertionIndex.isValid ()) {\n    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;\n    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeAtIndex (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_uint inRemoveIndex,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inRemoveIndex.isValid ()) {\n    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;\n    outValue = mSharedArray (idx COMMA_THERE) ;\n    mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;\n  }else{\n    outValue.drop () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popFirst (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    outValue = mSharedArray (0 COMMA_THERE) ;\n    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;\n  }else{\n    outValue.drop () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popLast (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    outValue = mSharedArray.lastObject (THERE) ;\n    mSharedArray.removeLastObject (THERE) ;\n  }else{\n    outValue.drop () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_first (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  if (isValid ()) {\n    outValue = mSharedArray (0 COMMA_THERE) ;\n  }else{\n    outValue.drop () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_last (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  if (isValid ()) {\n    outValue = mSharedArray.lastObject (THERE) ;\n  }else{\n    outValue.drop () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::readSubscript__3F_ (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_uint & inIndex,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inIndex.isValid ()) {\n    const uint32_t idx = inIndex.uintValue () ;\n    if (idx < uint32_t (mSharedArray.count ())) {\n      result = mSharedArray (int32_t (idx) COMMA_HERE) ;\n    }else{\n      String errorMessage ;\n      errorMessage.appendCString (\"subscript value (\") ;\n      errorMessage.appendUnsigned (idx) ;\n      errorMessage.appendCString (\") too large (array size is\") ;\n      errorMessage.appendSigned (mSharedArray.count ()) ;\n      errorMessage.appendCString (\")\") ;\n      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n// Down Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nDownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) :\nmSharedArray (inOperand.mSharedArray),\nmCurrent (inOperand.mSharedArray.count () - 1) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mSharedArray (mCurrent COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n// Up Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nUpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) :\nmSharedArray (inOperand.mSharedArray),\nmCurrent (0) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mSharedArray (mCurrent COMMA_THERE) ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@binarysetPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_ cPtr_binarysetPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterListAST_5D_ result_result ; // Returned variable
  GGS__5B_formalInputParameterListAST_5D_ temp_0 = GGS__5B_formalInputParameterListAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 30)) ;
  temp_0.plusPlusAssignOperation (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 30)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@binarysetPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_binarysetPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 37)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 37)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 38)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@binarysetPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_binarysetPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 44))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@binarysetPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithBit"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("emptyBinarySet"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 61)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fullBinarySet"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 68)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithPredicateString"), GGS_string ("string"), GGS_string ("inPredicateString"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 75)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithNotEqualComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 84)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithEqualComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 97)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictLowerComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 110)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictGreaterComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 123)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithLowerOrEqualComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 136)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithGreaterOrEqualComparison"), GGS_string ("uint"), GGS_string ("inLeftFirstIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 149)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithEqualToConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 162)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithNotEqualToConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 175)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictLowerThanConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 188)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictGreaterThanConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 201)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithLowerOrEqualToConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 214)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithGreaterOrEqualToConstant"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 227)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@binarysetPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 246)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isFull"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 247)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nodeCount"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 255)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isEmpty"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 263)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("significantVariableCount"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 271)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("ITE"), GGS_string ("binaryset"), GGS_string ("inTHENoperand"), GGS_string ("binaryset"), GGS_string ("inELSEoperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 279)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("print"), GGS_string ("stringlist"), GGS_string ("inVariableList"), GGS_string ("uintlist"), GGS_string ("inBDDCount"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 288)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("graphvizDump"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 297)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("graphviz"), GGS_string ("stringlist"), GGS_string ("inBitNameList"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 305)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("transformedBy"), GGS_string ("uintlist"), GGS_string ("inTransformationArray"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 313)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("forAllOnBitIndex"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 321)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("forAllOnBitIndexAndBeyond"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 329)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("existOnBitIndex"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 336)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("existOnBitIndexAndBeyond"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 343)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("valueCount"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 350)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigValueCount"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("bigint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 359)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("compressedValueCount"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 368)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64ValueList"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint64list"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 376)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringValueList"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 383)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringValueListWithNameList"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("stringlist"), GGS_string ("inNameList"), GGS_string ("stringlist"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 390)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("predicateStringValue"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 397)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("compressedStringValueList"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("stringlist"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 405)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap10"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 412)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap021"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 419)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap102"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 426)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap120"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 433)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap201"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 440)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap210"), GGS_string ("uint"), GGS_string ("inBitCount1"), GGS_string ("uint"), GGS_string ("inBitCount2"), GGS_string ("uint"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 447)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("transposedBy"), GGS_string ("uintlist"), GGS_string ("inTransposeVector"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 454)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("transitiveClosure"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 461)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("accessibleStates"), GGS_string ("binaryset"), GGS_string ("inInitialStateSet"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 468)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("implies"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 475)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("equalTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 482)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("notEqualTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 489)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lowerOrEqualTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 496)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("greaterOrEqualTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 503)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("strictGreaterThan"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 510)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("strictLowerThan"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 517)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetByTranslatingFromIndex"), GGS_string ("uint"), GGS_string ("inFirstIndexToTranslate"), GGS_string ("uint"), GGS_string ("inTranslation"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 524)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("containsValue"), GGS_string ("uint64"), GGS_string ("inValue"), GGS_string ("uint"), GGS_string ("inFirstBit"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 531)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("existsOnBitRange"), GGS_string ("uint"), GGS_string ("inFirstBit"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 538)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@binarysetPredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GGS_classMethodMap & outArgument_outClassMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setNodeTableSize"), GGS_string ("uint"), GGS_string ("inTableSize"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 552)) ;
  }
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setAndTableSize"), GGS_string ("uint"), GGS_string ("inTableSize"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas3", 560)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@timerPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterListAST_5D_ cPtr_timerPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterListAST_5D_ result_result ; // Returned variable
  GGS__5B_formalInputParameterListAST_5D_ temp_0 = GGS__5B_formalInputParameterListAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas3", 30)) ;
  temp_0.plusPlusAssignOperation (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas3", 30)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@timerPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_timerPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-timer.galgas3", 36)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@timerPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                       GGS_setterMap & outArgument_outSetterMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GGS_string ("stop"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas3", 44)) ;
  }
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GGS_string ("resume"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas3", 49)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@timerPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                       GGS_getterMap & outArgument_outMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas3", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("msFromStart"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas3", 61)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas3", 69)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isRunning"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas3", 77)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@timerPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GGS_classFunctionMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("start"), GGS_string ("timer"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas3", 92)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@timerPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_timerPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas3", 104))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@typePredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_typePredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("typeList"), GGS_string ("typelist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas3", 32)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@typePredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_typePredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas3", 45)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("name"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas3", 46)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hasSuperclass"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas3", 54)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("superclass"), GGS_string::makeEmptyString (), GGS_string ("type"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas3", 62)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@typePredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_typePredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-type.galgas3", 75)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-type.galgas3", 75)) COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas3", 75)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@typePredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_typePredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas3", 81))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForStruct'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_forbiddenKeysForStruct (Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_result ; // Returned variable
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 105)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("description")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 105)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("object")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 105)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("dynamicType")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 105)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForStruct = false ;
static GGS_stringset gOnceFunctionResult_forbiddenKeysForStruct ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_forbiddenKeysForStruct (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForStruct) {
    gOnceFunctionResult_forbiddenKeysForStruct = onceFunction_forbiddenKeysForStruct (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForStruct = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForStruct ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_forbiddenKeysForStruct (void) {
  gOnceFunctionResult_forbiddenKeysForStruct.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForStruct (nullptr,
                                                                  releaseOnceFunctionResult_forbiddenKeysForStruct) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_forbiddenKeysForStruct [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_forbiddenKeysForStruct (Compiler * inCompiler,
                                                                    const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForStruct (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForStruct ("forbiddenKeysForStruct",
                                                                        functionWithGenericHeader_forbiddenKeysForStruct,
                                                                        & kTypeDescriptor_GALGAS_stringset,
                                                                        0,
                                                                        functionArgs_forbiddenKeysForStruct) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structDeclarationAST temp_0 = this ;
  const GGS_structDeclarationAST temp_1 = this ;
  GGS_lstring var_key_5058 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 136)), temp_1.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_structDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5058, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 137)) ;
  }
  const GGS_structDeclarationAST temp_3 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_5215 (temp_3.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_5215.hasCurrentObject ()) {
    GGS_lstring var_propertyKey_5254 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_5215.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 139)), enumerator_5215.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5058, var_propertyKey_5254 COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 140)) ;
    }
    enumerator_5215.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@structDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_structDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_structDeclarationAST temp_0 = this ;
  result_result = GGS_string ("struct @").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 147)) ;
//---
  return result_result ;
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
  GGS_unifiedTypeMapEntry var_structTypeIndex_6352 ;
  {
  const GGS_structDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_structTypeName (), var_structTypeIndex_6352, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 161)) ;
  }
  GGS_propertyMap var_propertyMap_6431 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_constructorPropertyTypeList_6476 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_typedPropertyList_6537 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_6594 = GGS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
  const GGS_structDeclarationAST temp_1 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_6659 (temp_1.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_6659.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_propertyTypeEntry_6742 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6659.current (HERE).readProperty_typeName (), var_propertyTypeEntry_6742, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 168)) ;
    }
    GGS_string temp_2 ;
    const GalgasBool test_3 = enumerator_6659.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      temp_2 = enumerator_6659.current (HERE).readProperty_name ().readProperty_string () ;
    }else if (GalgasBool::boolFalse == test_3) {
      temp_2 = GGS_string::makeEmptyString () ;
    }
    GGS_lstring var_selector_6771 = temp_2.getter_nowhere (SOURCE_FILE ("declaration-type-struct.galgas3", 169)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = enumerator_6659.current (HERE).readProperty_initialization ().getter_isNone (SOURCE_FILE ("declaration-type-struct.galgas3", 170)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_constructorPropertyTypeList_6476.addAssignOperation (var_selector_6771, var_propertyTypeEntry_6742, enumerator_6659.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 171)) ;
      }
    }
    var_typesToIncludeInHeaderCompilation_6594.addAssignOperation (var_propertyTypeEntry_6742  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 173)) ;
    var_typedPropertyList_6537.addAssignOperation (var_propertyTypeEntry_6742, enumerator_6659.current (HERE).readProperty_name (), enumerator_6659.current (HERE).readProperty_initialization (), enumerator_6659.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas3", 178)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas3", 178)), enumerator_6659.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 174)) ;
    {
    var_propertyMap_6431.setter_insertKey (enumerator_6659.current (HERE).readProperty_name (), extensionGetter_accessControl (enumerator_6659.current (HERE).readProperty_accessControl (), var_structTypeIndex_6352, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 182)), enumerator_6659.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas3", 183)), var_propertyTypeEntry_6742, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 180)) ;
    }
    enumerator_6659.gotoNextObject () ;
  }
  GGS_getterMap var_getterMap_7591 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_7591, inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 188)) ;
  }
  GGS_setterMap var_setterMap_7644 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_7684 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_7732 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_structDeclarationAST temp_5 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_structTypeName (), GGS_bool (false), var_initializerMap_7684, var_getterMap_7591, var_setterMap_7644, var_instanceMethodMap_7732, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 193)) ;
  }
  GGS_typeFeatures var_features_8196 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-struct.galgas3", 208)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, var_initializerMap_7684.getter_count (SOURCE_FILE ("declaration-type-struct.galgas3", 210)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_features_8196.orAssignOperation(GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas3", 211)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 211)) ;
      {
      const GGS_structDeclarationAST temp_7 = this ;
      var_initializerMap_7684.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_6476, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 213)), temp_7.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_6476, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 212)) ;
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
      var_features_8196.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas3", 221)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 221)) ;
    }
    break ;
  case GGS_structComparison::Enumeration::enum_comparable:
    {
      var_features_8196.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas3", 223)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas3", 223)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 223)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 223)) ;
    }
    break ;
  }
  {
  const GGS_structDeclarationAST temp_9 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_9.readProperty_structTypeName (), var_features_8196, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 225)) ;
  }
  GGS_unifiedTypeMapEntry var_enumeratedType_9025 ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_structDeclarationAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_enumeratedElementTypeName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      var_enumeratedType_9025 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas3", 235)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    {
    const GGS_structDeclarationAST temp_12 = this ;
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_12.readProperty_enumeratedElementTypeName (), var_enumeratedType_9025, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 237)) ;
    }
  }
  const GGS_structDeclarationAST temp_13 = this ;
  const GGS_structDeclarationAST temp_14 = this ;
  const GGS_structDeclarationAST temp_15 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_9257 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_13.readProperty_structTypeName (), temp_14.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas3", 245)), GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("declaration-type-struct.galgas3", 246)), GGS_bool (false), var_typedPropertyList_6537, var_propertyMap_6431, var_typedPropertyList_6537, var_initializerMap_7684, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_7591, var_setterMap_7644, var_instanceMethodMap_7732, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas3", 257)), GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_8196, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_enumeratedType_9025, GGS_string ("struct-").add_operation (temp_15.readProperty_structTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-struct.galgas3", 264)), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 264)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-struct.galgas3", 265)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_9257.readProperty_typeName (), var_typeDefinition_9257, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 267)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                         const GGS_string /* constinArgument_inProductDirectory */,
                                                         const GGS_semanticContext constinArgument_inSemanticContext,
                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                         const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                         GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structDeclarationAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_structType_10869 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 280)) ;
  const GGS_structDeclarationAST temp_1 = this ;
  GGS_lstring var_structNameForUsefulness_10943 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 281)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_structDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mStructurePropertyListAST ().getter_count (SOURCE_FILE ("declaration-type-struct.galgas3", 283)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_structDeclarationAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_structTypeName ().readProperty_location (), GGS_string ("a structure cannot be empty: it must have at least one property"), fixItArray5  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 284)) ;
    }
  }
  GGS_typedPropertyList var_typedPropertyList_11221 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_constructorArgumentList_11272 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_propertyMap_11328 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_structDeclarationAST temp_6 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_11371 (temp_6.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_11371.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_11410 = function_typeNameForUsefulEntitiesGraph (enumerator_11371.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 290)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_10943, var_propertyTypeNameForUsefulness_11410 COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 291)) ;
    }
    GGS_unifiedTypeMapEntry var_t_11611 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11371.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 292)) ;
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 293)).getter_hasKey (enumerator_11371.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 293)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GGS_string var_m_11757 = GGS_string ("an property cannot be named:") ;
        UpEnumerator_stringset enumerator_11833 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 295))) ;
        while (enumerator_11833.hasCurrentObject ()) {
          var_m_11757.plusAssignOperation(GGS_string (" ").add_operation (enumerator_11833.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 296)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 296)) ;
          enumerator_11833.gotoNextObject () ;
        }
        var_m_11757.plusAssignOperation(GGS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 298)) ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_11371.current (HERE).readProperty_name ().readProperty_location (), var_m_11757, fixItArray8  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 299)) ;
      }
    }
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = enumerator_11371.current (HERE).readProperty_mutability ().getter_isWeakProperty (SOURCE_FILE ("declaration-type-struct.galgas3", 301)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        switch (extensionGetter_definition (var_t_11611, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 302)).readProperty_unwrappedType ().enumValue ()) {
        case GGS_unifiedTypeMapEntry::Enumeration::invalid:
          break ;
        case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
          {
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_11371.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the weak property type should be an optional class"), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 304)) ;
          }
          break ;
        case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
          {
            GGS_unifiedTypeMapElementClass_2E_weak extractedValue_12180_aWeakType_0 ;
            extensionGetter_definition (var_t_11611, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 302)).readProperty_unwrappedType ().getAssociatedValuesFor_element (extractedValue_12180_aWeakType_0) ;
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              const GGS_unifiedTypeMapElementClass var_aType_12210 = extractedValue_12180_aWeakType_0.unwrappedValue () ;
              if (!extractedValue_12180_aWeakType_0.isValuated ()) {
                test_11 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_11) {
                test_11 = GGS_bool (ComparisonKind::equal, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) var_aType_12210.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 306)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_classType (SOURCE_FILE ("declaration-type-struct.galgas3", 306)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_11) {
                }
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              GenericArray <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_11371.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the weak property type should be an optional class"), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 308)) ;
            }
          }
          break ;
        }
      }
    }
    {
    var_propertyMap_11328.setter_insertKey (enumerator_11371.current (HERE).readProperty_name (), var_t_11611, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 312)) ;
    }
    switch (enumerator_11371.current (HERE).readProperty_initialization ().enumValue ()) {
    case GGS_propertyInCollectionInitializationAST::Enumeration::invalid:
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_none:
      {
        var_constructorArgumentList_11272.addAssignOperation (var_t_11611, enumerator_11371.current (HERE).readProperty_name (), enumerator_11371.current (HERE).readProperty_initialization (), enumerator_11371.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas3", 319)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas3", 319)), enumerator_11371.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 315)) ;
      }
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_some:
      break ;
    }
    var_typedPropertyList_11221.addAssignOperation (var_t_11611, enumerator_11371.current (HERE).readProperty_name (), enumerator_11371.current (HERE).readProperty_initialization (), enumerator_11371.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas3", 327)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas3", 327)), enumerator_11371.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 323)) ;
    const GGS_structDeclarationAST temp_13 = this ;
    switch (temp_13.readProperty_comparison ().enumValue ()) {
    case GGS_structComparison::Enumeration::invalid:
      break ;
    case GGS_structComparison::Enumeration::enum_none:
      break ;
    case GGS_structComparison::Enumeration::enum_equatable:
      {
        GGS_typeFeatures var_propertyFeatures_13079 = extensionGetter_definition (var_t_11611, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 333)).readProperty_features () ;
        GalgasBool test_14 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_14) {
          test_14 = var_propertyFeatures_13079.getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas3", 334)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 334)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas3", 334)).operator_and (var_propertyFeatures_13079.getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas3", 335)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 335)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas3", 335)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 334)).operator_and (var_propertyFeatures_13079.getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-struct.galgas3", 336)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 336)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas3", 336)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 335)).boolEnum () ;
          if (GalgasBool::boolTrue == test_14) {
            GenericArray <FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (enumerator_11371.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not equatable, because '").add_operation (enumerator_11371.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 338)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 338)), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 337)) ;
          }
        }
      }
      break ;
    case GGS_structComparison::Enumeration::enum_comparable:
      {
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = extensionGetter_definition (var_t_11611, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 341)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas3", 341)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 341)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas3", 341)).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            GenericArray <FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_11371.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not comparable, because '").add_operation (enumerator_11371.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 343)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 343)), fixItArray17  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 342)) ;
          }
        }
      }
      break ;
    }
    enumerator_11371.gotoNextObject () ;
  }
  GGS_stringset var_unusedVariableCppNameSet_13929 ;
  GGS_string var_initializationCode_13966 ;
  const GGS_structDeclarationAST temp_18 = this ;
  extensionMethod_buildPropertyInitializationCode (temp_18.readProperty_mStructurePropertyListAST (), var_structNameForUsefulness_10943, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, ioArgument_ioUsefulEntitiesGraph, ioArgument_ioTypeMap, var_unusedVariableCppNameSet_13929, var_initializationCode_13966, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 348)) ;
  GGS_bool var_constructorNeedsCompilerVar_14007 = var_unusedVariableCppNameSet_13929.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 358)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 358)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas3", 358)) ;
  const GGS_structDeclarationAST temp_19 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("struct ").add_operation (temp_19.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 360)), GGS_structTypeForGeneration::init_21__21__21__21__21__21_ (var_structType_10869, var_typedPropertyList_11221, var_constructorArgumentList_11272, var_initializationCode_13966, var_constructorNeedsCompilerVar_14007, extensionGetter_definition (var_structType_10869, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 367)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas3", 367)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 367)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 359)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_10943, var_structNameForUsefulness_10943, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 370)) ;
  }
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    const GGS_structDeclarationAST temp_21 = this ;
    GGS_bool test_22 = temp_21.readProperty_isUsefullStruct () ;
    if (GalgasBool::boolTrue != test_22.boolEnum ()) {
      const GGS_structDeclarationAST temp_23 = this ;
      test_22 = temp_23.readProperty_isPredefined () ;
    }
    test_20 = test_22.boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_structNameForUsefulness_10943  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 372)) ;
    }
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = extensionGetter_definition (var_structType_10869, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 375)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas3", 375)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 375)).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      const GGS_structDeclarationAST temp_25 = this ;
      GGS_lstring var_initializerForUsefulness_14839 = function_initializerNameForUsefulEntitiesGraph (temp_25.readProperty_structTypeName (), extensionGetter_initializerSignature (var_constructorArgumentList_11272, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 378)), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 376)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerForUsefulness_14839, var_initializerForUsefulness_14839, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 380)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerForUsefulness_14839, var_structNameForUsefulness_10943 COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 381)) ;
      }
      GalgasBool test_26 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_26) {
        const GGS_structDeclarationAST temp_27 = this ;
        GGS_bool test_28 = temp_27.readProperty_isUsefullStruct () ;
        if (GalgasBool::boolTrue != test_28.boolEnum ()) {
          const GGS_structDeclarationAST temp_29 = this ;
          test_28 = temp_29.readProperty_isPredefined () ;
        }
        test_26 = test_28.boolEnum () ;
        if (GalgasBool::boolTrue == test_26) {
          ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerForUsefulness_14839  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 383)) ;
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
  UpEnumerator_typedPropertyList enumerator_16203 (temp_0.readProperty_mTypedPropertyList ()) ;
  while (enumerator_16203.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_16203.current (HERE).readProperty_typeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 407)) ;
    enumerator_16203.gotoNextObject () ;
  }
  const GGS_structTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_16304 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 409)) ;
  const GGS_structTypeForGeneration temp_2 = this ;
  const GGS_structTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_structureGenerationTemplate_structTypeHeader_31_ (inCompiler, var_selfTypeDefinition_16304.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 412)), temp_3.readProperty_mTypedPropertyList () COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 410))) ;
  const GGS_structTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_16304.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 417)), var_selfTypeDefinition_16304.readProperty_isConcrete (), var_selfTypeDefinition_16304.readProperty_initializerMap (), var_selfTypeDefinition_16304.readProperty_classFunctionMap (), var_selfTypeDefinition_16304.readProperty_getterMap (), var_selfTypeDefinition_16304.readProperty_setterMap (), var_selfTypeDefinition_16304.readProperty_instanceMethodMap (), var_selfTypeDefinition_16304.readProperty_classMethodMap (), var_selfTypeDefinition_16304.readProperty_readSubscriptMap (), var_selfTypeDefinition_16304.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_16304.readProperty_features (), var_selfTypeDefinition_16304.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_16304.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_16304.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 415))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 415)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_structTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_string & outArgument_outImplementation,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 441)) ;
  const GGS_structTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_17635 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 442)) ;
  const GGS_structTypeForGeneration temp_2 = this ;
  const GGS_structTypeForGeneration temp_3 = this ;
  const GGS_structTypeForGeneration temp_4 = this ;
  const GGS_structTypeForGeneration temp_5 = this ;
  const GGS_structTypeForGeneration temp_6 = this ;
  const GGS_structTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_structureGenerationTemplate_structTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_17635.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 445)), temp_3.readProperty_mTypedPropertyList (), temp_4.readProperty_mConstructorArgumentList (), temp_5.readProperty_mConstructorInitializationCode (), temp_6.readProperty_mConstructorNeedsCompilerVar (), temp_7.readProperty_synthetizeAnInitializer (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_17635.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 451)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas3", 443))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'structureGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_structureGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_structureGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_structureGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_structureGenerationTemplate_0,
  0,
  gWrapperAllDirectories_structureGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structureGenerationTemplate structTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_structureGenerationTemplate_structTypeHeader_31_ (Compiler * inCompiler,
                                                                                 const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                 const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                 const GGS_typedPropertyList & in_PROPERTY_5F_LIST
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 2)).add_operation (GGS_string (" struct"), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Properties\n") ;
  GGS_uint index_438_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_438 (in_PROPERTY_5F_LIST) ;
    while (enumerator_438.hasCurrentObject ()) {
      result.appendString ("  public: GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_438.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" mProperty_") ;
      result.appendString (enumerator_438.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" ;\n  public: inline GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_438.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (" readProperty_") ;
      result.appendString (enumerator_438.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (" (void) const {\n    return mProperty_") ;
      result.appendString (enumerator_438.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" ;\n  }\n\n") ;
      enumerator_438.gotoNextObject () ;
      index_438_.increment () ;
    }
  }
  result.appendString ("//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Property setters\n") ;
  GGS_uint index_1183_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_1183 (in_PROPERTY_5F_LIST) ;
    while (enumerator_1183.hasCurrentObject ()) {
      result.appendString ("  public: inline void setter_set") ;
      result.appendString (enumerator_1183.current_name (HERE).readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 24)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (" (const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1183.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (" & inValue COMMA_UNUSED_LOCATION_ARGS) {\n    mProperty_") ;
      result.appendString (enumerator_1183.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (" = inValue ;\n  }\n\n") ;
      enumerator_1183.gotoNextObject () ;
      index_1183_.increment () ;
    }
  }
  result.appendString ("//--------------------------------- Set initialized properties\n  private: void setInitializedProperties (Compiler * inCompiler) ;\n\n//--------------------------------- Native constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_1775_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_1775 (in_PROPERTY_5F_LIST) ;
    while (enumerator_1775.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1775.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 33)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_1775.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 33)).stringValue ()) ;
      enumerator_1775.gotoNextObject () ;
      if (enumerator_1775.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1775_.increment () ;
    }
  }
  result.appendString (") ;\n\n//--------------------------------- Copy constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--------------------------------- Assignment operator\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structureGenerationTemplate structTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_structureGenerationTemplate_structTypeSpecificImplementation (Compiler * inCompiler,
                                                                                             const GGS_string & in_TYPE_5F_NAME,
                                                                                             const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                             const GGS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                                             const GGS_typedPropertyList & in_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                             const GGS_string & in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE,
                                                                                             const GGS_bool & in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR,
                                                                                             const GGS_bool & in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER,
                                                                                             const GGS_bool & in_GENERATE_5F_COMPARISON
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  GGS_uint index_244_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_244 (in_PROPERTY_5F_LIST) ;
    while (enumerator_244.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_244.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 6)).stringValue ()) ;
      result.appendString (" ()") ;
      enumerator_244.gotoNextObject () ;
      if (enumerator_244.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_244_.increment () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\n") ;
  GGS_uint index_611_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_611 (in_PROPERTY_5F_LIST) ;
    while (enumerator_611.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_611.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 16)).stringValue ()) ;
      result.appendString (" (inSource.mProperty_") ;
      result.appendString (enumerator_611.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 16)).stringValue ()) ;
      result.appendString (")") ;
      enumerator_611.gotoNextObject () ;
      if (enumerator_611.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_611_.increment () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n") ;
  GGS_uint index_1054_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_1054 (in_PROPERTY_5F_LIST) ;
    while (enumerator_1054.hasCurrentObject ()) {
      result.appendString ("  mProperty_") ;
      result.appendString (enumerator_1054.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (" = inSource.mProperty_") ;
      result.appendString (enumerator_1054.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_1054.gotoNextObject () ;
      index_1054_.increment () ;
    }
  }
  result.appendString ("  return *this ;\n}\n\n") ;
  const GalgasBool test_0 = in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//---Synthetized initializer -----------------------------------------------------------------------\n\nGGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::") ;
    result.appendString (extensionGetter_initializerSignature (in_INITIALIZER_5F_ARGUMENT_5F_LIST, inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    GGS_uint index_1541_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_1541 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_1541.hasCurrentObject ()) {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_1541.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 38)).stringValue ()) ;
        result.appendString (" & in_") ;
        result.appendString (enumerator_1541.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 38)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        enumerator_1541.gotoNextObject () ;
        index_1541_.increment () ;
      }
    }
    result.appendString ("Compiler * inCompiler\n          ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  result.setInitializedProperties (inCompiler) ;\n") ;
    GGS_uint index_1860_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_1860 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_1860.hasCurrentObject ()) {
        result.appendString ("  result.mProperty_") ;
        result.appendString (enumerator_1860.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 46)).stringValue ()) ;
        result.appendString (" = in_") ;
        result.appendString (enumerator_1860.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 46)).stringValue ()) ;
        result.appendString (" ;\n") ;
        enumerator_1860.gotoNextObject () ;
        index_1860_.increment () ;
      }
    }
    result.appendString ("  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setInitializedProperties (") ;
  const GalgasBool test_1 = in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("Compiler * inCompiler") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("Compiler * /* inCompiler */") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") {\n") ;
  result.appendString (in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE.stringValue ()) ;
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_2549_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_2549 (in_PROPERTY_5F_LIST) ;
    while (enumerator_2549.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_2549.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 67)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_2549_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 67)).stringValue ()) ;
      enumerator_2549.gotoNextObject () ;
      if (enumerator_2549.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_2549_IDX.increment () ;
    }
  }
  result.appendString (") :\n") ;
  GGS_uint index_2755_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_2755 (in_PROPERTY_5F_LIST) ;
    while (enumerator_2755.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_2755.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 71)).stringValue ()) ;
      result.appendString (" (inOperand") ;
      result.appendString (index_2755_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 71)).stringValue ()) ;
      result.appendString (")") ;
      enumerator_2755.gotoNextObject () ;
      if (enumerator_2755.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_2755_IDX.increment () ;
    }
  }
  result.appendString (" {\n}\n\n") ;
  const GalgasBool test_2 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n   ComparisonResult result = ComparisonResult::operandEqual ;\n") ;
    GGS_uint index_3254_ (0) ;
    if (in_PROPERTY_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_3254 (in_PROPERTY_5F_LIST) ;
      while (enumerator_3254.hasCurrentObject ()) {
        result.appendString ("  if (result == ComparisonResult::operandEqual) {\n    result = mProperty_") ;
        result.appendString (enumerator_3254.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 83)).stringValue ()) ;
        result.appendString (".objectCompare (inOperand.mProperty_") ;
        result.appendString (enumerator_3254.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 83)).stringValue ()) ;
        result.appendString (") ;\n  }\n") ;
        enumerator_3254.gotoNextObject () ;
        index_3254_.increment () ;
      }
    }
    result.appendString ("  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nbool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return ") ;
  GGS_uint index_3766_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3766 (in_PROPERTY_5F_LIST) ;
    while (enumerator_3766.hasCurrentObject ()) {
      result.appendString ("mProperty_") ;
      result.appendString (enumerator_3766.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 94)).stringValue ()) ;
      result.appendString (".isValid ()") ;
      enumerator_3766.gotoNextObject () ;
      if (enumerator_3766.hasCurrentObject ()) {
        result.appendString (" && ") ;
      }
      index_3766_.increment () ;
    }
  }
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n") ;
  GGS_uint index_4106_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4106 (in_PROPERTY_5F_LIST) ;
    while (enumerator_4106.hasCurrentObject ()) {
      result.appendString ("  mProperty_") ;
      result.appendString (enumerator_4106.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 104)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_4106.gotoNextObject () ;
      index_4106_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n                              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"<struct @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (":\") ;\n  if (! isValid ()) {\n    ioString.appendCString (\" not built\") ;\n  }else{\n") ;
  GGS_uint index_4646_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4646 (in_PROPERTY_5F_LIST) ;
    while (enumerator_4646.hasCurrentObject ()) {
      result.appendString ("    mProperty_") ;
      result.appendString (enumerator_4646.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 118)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation+1) ;\n") ;
      enumerator_4646.gotoNextObject () ;
      if (enumerator_4646.hasCurrentObject ()) {
        result.appendString ("    ioString.appendCString (\", \") ;\n") ;
      }
      index_4646_IDX.increment () ;
    }
  }
  result.appendString ("  }\n  ioString.appendCString (\">\") ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  GGS_lstring joker_1661 ; // Joker input parameter
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_1661, GGS_lstring::init_21__21_ (GGS_string ("bigint"), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 30)), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 30)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GGS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("homeDirectory"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 38)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("newWithStdIn"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("retrieveAndResetTemplateString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("separatorString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 59)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithSymbolicLinkContents"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 66)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithSourceFilePath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 75)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithCurrentDirectory"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 82)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithContentsOfFile"), GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 89)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithCurrentDateTime"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 98)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithEnvironmentVariable"), GGS_string ("string"), GGS_string ("inVariableName"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 105)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithEnvironmentVariableOrEmpty"), GGS_string ("string"), GGS_string ("inVariableName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 114)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppLineComment"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 123)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppSpaceComment"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 130)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppTitleComment"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 137)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppString"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 146)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppChar"), GGS_string ("char"), GGS_string ("inChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 155)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("componentsJoinedByString"), GGS_string ("stringlist"), GGS_string ("inComponents"), GGS_string ("string"), GGS_string ("inSeparator"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 164)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringByRepeatingString"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("uint"), GGS_string ("inCount"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 175)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithSequenceOfCharacters"), GGS_string ("char"), GGS_string ("inChar"), GGS_string ("uint"), GGS_string ("inCount"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 186)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classMethodMap & outArgument_outClassMethodMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deleteFile"), GGS_string ("inFilePath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 204)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deleteFileIfExists"), GGS_string ("inFilePath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 211)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removeEmptyDirectory"), GGS_string ("inDirectoryPath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 218)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removeDirectoryRecursively"), GGS_string ("inDirectoryPath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 225)) ;
  }
  GGS_unifiedTypeMapEntry var_stringType_7376 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringType_7376, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 232)) ;
  }
  GGS_unifiedTypeMapEntry var_boolType_7467 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), var_boolType_7467, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 233)) ;
  }
  GGS_formalParameterSignature var_argList_7533 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_7533.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 236)), var_stringType_7376, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 236)), GGS_string ("inStartPath")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 236)) ;
  var_argList_7533.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 237)), var_stringType_7376, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 237)), GGS_string ("inFileName")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 237)) ;
  var_argList_7533.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 238)), var_stringType_7376, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 238)), GGS_string ("inContents")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 238)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("generateFile"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 240)), inCompiler COMMA_HERE), var_argList_7533, GGS_bool (true) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 239)) ;
  }
  var_argList_7533 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_7533.addAssignOperation (GGS_string ("startPath").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 246)), var_stringType_7376, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 246)), GGS_string ("inStartPath")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 246)) ;
  var_argList_7533.addAssignOperation (GGS_string ("fileName").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 247)), var_stringType_7376, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 247)), GGS_string ("inFileName")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 247)) ;
  var_argList_7533.addAssignOperation (GGS_string ("lineComment").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 248)), var_stringType_7376, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 248)), GGS_string ("inLineCommentPrefix")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 248)) ;
  var_argList_7533.addAssignOperation (GGS_string ("header").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 249)), var_stringType_7376, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 249)), GGS_string ("inHeader")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 249)) ;
  var_argList_7533.addAssignOperation (GGS_string ("defaultUserZone1").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 250)), var_stringType_7376, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 250)), GGS_string ("inDefaultUserZone1")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 250)) ;
  var_argList_7533.addAssignOperation (GGS_string ("generatedZone2").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 251)), var_stringType_7376, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 251)), GGS_string ("inGeneratedZone2")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 251)) ;
  var_argList_7533.addAssignOperation (GGS_string ("defaultUserZone2").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 252)), var_stringType_7376, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 252)), GGS_string ("inDefaultUserZone2")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 252)) ;
  var_argList_7533.addAssignOperation (GGS_string ("generatedZone3").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 253)), var_stringType_7376, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 253)), GGS_string ("inGeneratedZone3")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 253)) ;
  var_argList_7533.addAssignOperation (GGS_string ("makeExecutable").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 254)), var_boolType_7467, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 254)), GGS_string ("inMakeExecutable")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 254)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("generateFileWithPattern"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 256)), inCompiler COMMA_HERE), var_argList_7533, GGS_bool (true) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 255)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST getInstanceMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getInstanceMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GGS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 267)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToExecutableFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 275)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("makeDirectoryAndWriteToFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 283)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("makeDirectoryAndWriteToExecutableFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 291)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("makeSymbolicLinkWithPath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 299)) ;
  }
  {
  routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (outArgument_outInstanceMethodMap, GGS_string ("makeDirectory"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 307)) ;
  }
  GGS_formalParameterSignature var_argList_10667 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_10758 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_t_10758, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 314)) ;
  }
  var_argList_10667.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 315)), var_t_10758, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 315)), GGS_string ("inFilePath")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 315)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), var_t_10758, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 316)) ;
  }
  var_argList_10667.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 317)), var_t_10758, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 317)), GGS_string ("outFileModified")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 317)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("writeToFileWhenDifferentContents"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 319)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 320)), var_argList_10667, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 322)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 324)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 318)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("writeToExecutableFileWhenDifferentContents"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 328)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 329)), var_argList_10667, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 331)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 333)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 327)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_setterMap & outArgument_outSetterMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inCapacity"), GGS_string ("setCapacity"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 343)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inAmount"), GGS_string ("incIndentation"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 351)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inAmount"), GGS_string ("decIndentation"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 359)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inColumnIndex"), GGS_string ("appendSpacesUntilColumn"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 367)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("char"), GGS_string ("inChar"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("setCharacterAtIndex"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 375)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("char"), GGS_string ("inChar"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("insertCharacterAtIndex"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 385)) ;
  }
  {
  routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("char"), GGS_string ("outChar"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("removeCharacterAtIndex"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 395)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 411)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lastCharacter"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 412)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removingFirst"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 420)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nowhere"), GGS_string::makeEmptyString (), GGS_string ("lstring"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 428)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("here"), GGS_string::makeEmptyString (), GGS_string ("lstring"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 436)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("doesEnvironmentVariableExist"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 444)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 452)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("range"), GGS_string::makeEmptyString (), GGS_string ("range"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 460)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationWithUnicodeEscaping"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 468)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("assemblerRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 476)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fileNameRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 484)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nameRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 492)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cStringRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 500)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("identifierRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 508)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decodedStringFromRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 516)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("HTMLRepresentation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 524)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationEscapingQuestionMark"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 532)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8Representation"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 540)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationWithoutDelimiters"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 548)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8Length"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 556)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf32Representation"), GGS_string ("withZeroTerminator"), GGS_string ("bool"), GGS_string ("inAppendZeroTerminator"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 564)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("trimmingSpaces"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 574)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hasPrefix"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inPrefix"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 582)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hasSuffix"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inSuffix"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 591)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("md5"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 600)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sha256"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 608)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalUnsignedNumber"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 616)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalUnsignedNumber"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 624)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalUnsigned64Number"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 632)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalUnsigned64Number"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 640)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalSignedNumber"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 648)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalSignedNumber"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 656)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalSigned64Number"), GGS_string::makeEmptyString (), GGS_string ("sint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 664)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalSigned64Number"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 672)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalSignedBigInt"), GGS_string::makeEmptyString (), GGS_string ("bigint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 680)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string::makeEmptyString (), GGS_string ("bigint\?"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 688)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalSignedBigInt"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 696)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDoubleNumber"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 704)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("doubleNumber"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 712)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("capacity"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 720)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isSymbolicLink"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 728)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fileExists"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 736)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoryExists"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 744)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("pathExtension"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 752)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nativePathWithUnixPath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 760)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unixPathWithNativePath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 768)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lastPathComponent"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 776)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deletingPathExtension"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 784)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("capitalizingFirstCharacter"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 792)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("firstCharacterOrNul"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 800)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deletingLastPathComponent"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 808)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("standardizedPath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 816)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lowercased"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 824)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uppercased"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 832)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("reversed"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 840)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("currentColumn"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 848)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("system"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 856)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("popen"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 864)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationEnclosedWithin"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inCharacter"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 872)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("commandWithArguments"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_string ("inArguments"), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 881)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hiddenCommandWithArguments"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_string ("inArguments"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 890)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("characterAtIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("char"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 899)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("containsCharacter"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inCharacter"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 908)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("containsCharacterInRange"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inFirstCharacter"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inLastCharacter"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 917)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removingCharacterAtIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 930)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("subStringFromIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 939)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("rightSubString"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inLength"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 948)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("leftSubString"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inLength"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 957)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("subString"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inStart"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inLength"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 966)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("absolutePathFromPath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 975)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("relativePathFromPath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 984)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("componentsSeparatedByString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inSeparator"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 992)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("leftPadding"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inPaddedStringLength"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inPaddingChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1000)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("rightPadding"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inPaddedStringLength"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inPaddingChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1009)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("leftAndRightPadding"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inPaddedStringLength"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inPaddingChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1018)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("replacing"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inSearchedString"), GGS_string ("by"), GGS_string ("string"), GGS_string ("inReplacementString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1027)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("regularFiles"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1036)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hiddenFiles"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1046)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directories"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1055)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoriesWithExtensions"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_string ("inExtensionList"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1064)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("regularFilesWithExtensions"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_string ("inExtensionList"), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1073)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_stringPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1087)).operator_or (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1087)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1087)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1088)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1087)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1088)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1088)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1088)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1088)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_stringPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas3", 1094))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@bigintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_bigintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 30))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bigintPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GGS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("zero"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 39)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bigintPredefinedTypeAST getInstanceMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getInstanceMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GGS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_bigIntType_2430 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), var_bigIntType_2430, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 55)) ;
  }
  GGS_formalParameterSignature var_argList_2476 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_2476.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 57)), var_bigIntType_2430, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 57)), GGS_string ("inDivisor")  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 57)) ;
  var_argList_2476.addAssignOperation (GGS_string ("quotient").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 58)), var_bigIntType_2430, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 58)), GGS_string ("outQuotient")  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 58)) ;
  var_argList_2476.addAssignOperation (GGS_string ("remainder").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 59)), var_bigIntType_2430, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 59)), GGS_string ("outRemainder")  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 59)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("divideBy"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 61)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 62)), var_argList_2476, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 64)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 66)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 60)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bigintPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_setterMap & outArgument_outSetterMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), GGS_string ("inBit"), GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("setBitAtIndex"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 78)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string ("inIndex"), GGS_string ("complementBitAtIndex"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 88)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bigintPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInUInt"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 104)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInSInt"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInUInt64"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 120)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInSInt64"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 128)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 136)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("spacedString"), GGS_string ("uint"), GGS_string ("inSeparation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 144)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 152)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("uint"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 160)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 171)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bitCountForSignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 179)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bitCountForUnsignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 187)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 195)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 203)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64"), GGS_string::makeEmptyString (), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 211)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint64"), GGS_string::makeEmptyString (), GGS_string ("sint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 219)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("abs"), GGS_string::makeEmptyString (), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 227)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bitAtIndex"), GGS_string ("uint"), GGS_string ("inBitIndex"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 235)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isZero"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 243)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sign"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 251)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract8ForUnsignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uintlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 259)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract8ForSignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uintlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 267)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract32ForUnsignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uintlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 275)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract32ForSignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uintlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 283)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract64ForUnsignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uint64list"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 291)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract64ForSignedRepresentation"), GGS_string::makeEmptyString (), GGS_string ("uint64list"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 299)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@bigintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_bigintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 312)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 312)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 312)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 312)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 312)).operator_or (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 313)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 312)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 313)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 313)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 313)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 313)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 313)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 313)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 314)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 313)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 314)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 314)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 315)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 314)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 315)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 315)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 315)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 315)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 315)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 315)).operator_or (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 316)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 315)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 316)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 316)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 316)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 316)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 317)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 316)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 317)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 317)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 318)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 317)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 318)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas3", 318)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@locationPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_locationPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-location.galgas3", 30)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-location.galgas3", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@locationPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_locationPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GGS_classFunctionMap & outArgument_outMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nowhere"), GGS_string ("location"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 38)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("here"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("next"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("separator"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 59)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@locationPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_locationPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                          GGS_getterMap & outArgument_outMap,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 72)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startLocationString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 73)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endLocationString"), GGS_string ("locationString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 81)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startLocationIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 89)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endLocationIndex"), GGS_string ("locationIndex"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 97)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("file"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 105)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startLine"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 113)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endLine"), GGS_string ("line"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 121)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startColumn"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 129)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endColumn"), GGS_string ("column"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 137)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isNowhere"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 145)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("union"), GGS_string::makeEmptyString (), GGS_string ("location"), GGS_string ("inOtherLocation"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 153)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@locationPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_locationPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas3", 166))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@listDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_listDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_listDeclarationAST temp_0 = this ;
  result_result = GGS_string ("list @").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 134)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@listDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_listDeclarationAST temp_0 = this ;
  const GGS_listDeclarationAST temp_1 = this ;
  GGS_lstring var_key_5516 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 147)), temp_1.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_listDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5516, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 148)) ;
  }
  const GGS_listDeclarationAST temp_3 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_5671 (temp_3.readProperty_mPropertyList ()) ;
  while (enumerator_5671.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_5671.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 150)), enumerator_5671.current_typeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 150)) ;
    }
    enumerator_5671.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@listDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                        const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                        const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typedPropertyList var_typedAttributeList_6635 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  const GGS_listDeclarationAST temp_0 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_6733 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_6733.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = enumerator_6733.current_initialization (HERE).getter_isSome (SOURCE_FILE ("declaration-type-list.galgas3", 170)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_6733.current_name (HERE).readProperty_location (), GGS_string ("property initialization is not handled for a list"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 171)) ;
      }
    }
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_6949 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6733.current_typeName (HERE), var_attributeTypeIndex_6949, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 173)) ;
    }
    var_typedAttributeList_6635.addAssignOperation (var_attributeTypeIndex_6949, enumerator_6733.current_name (HERE), enumerator_6733.current_initialization (HERE), GGS_bool (true), enumerator_6733.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 174)) ;
    enumerator_6733.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_uintType_7166 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("uint"), var_uintType_7166, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 177)) ;
  }
  GGS_unifiedTypeMapEntry var_listTypeIndex_7249 ;
  {
  const GGS_listDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mListTypeName (), var_listTypeIndex_7249, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 179)) ;
  }
  GGS_unifiedTypeMapEntry var_listElementType_7401 ;
  {
  const GGS_listDeclarationAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_4.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 182)), var_listElementType_7401, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 181)) ;
  }
  GGS_enumerationDescriptorList var_enumerationDescriptor_7481 = GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_constructorAttributeTypeList_7534 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_setterOutputFormalArgumentList_7601 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_setterInputFormalArgumentList_7670 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  UpEnumerator_typedPropertyList enumerator_7750 (var_typedAttributeList_6635) ;
  while (enumerator_7750.hasCurrentObject ()) {
    GGS_string temp_5 ;
    const GalgasBool test_6 = enumerator_7750.current_hasSelector (HERE).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      temp_5 = enumerator_7750.current_name (HERE).readProperty_string () ;
    }else if (GalgasBool::boolFalse == test_6) {
      temp_5 = GGS_string::makeEmptyString () ;
    }
    GGS_string var_selector_7797 = temp_5 ;
    var_enumerationDescriptor_7481.addAssignOperation (enumerator_7750.current_typeEntry (HERE), enumerator_7750.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 192)) ;
    var_constructorAttributeTypeList_7534.addAssignOperation (var_selector_7797.getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas3", 194)), enumerator_7750.current_typeEntry (HERE), enumerator_7750.current_name (HERE).readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 193)) ;
    var_setterOutputFormalArgumentList_7601.addAssignOperation (var_selector_7797.getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas3", 199)), enumerator_7750.current_typeEntry (HERE), GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-list.galgas3", 201)), enumerator_7750.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 198)) ;
    var_setterInputFormalArgumentList_7670.addAssignOperation (var_selector_7797.getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas3", 204)), enumerator_7750.current_typeEntry (HERE), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas3", 206)), enumerator_7750.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 203)) ;
    enumerator_7750.gotoNextObject () ;
  }
  GGS_classFunctionMap var_classFunctionMap_8389 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  var_classFunctionMap_8389.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("listWithValue"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 212)), inCompiler COMMA_HERE), var_constructorAttributeTypeList_7534, GGS_bool (false), var_listTypeIndex_7249, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 211)) ;
  }
  GGS_getterMap var_getterMap_8637 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_8637, inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 218)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8637, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 219)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8637, ioArgument_ioTypeMap, GGS_string ("range"), GGS_string::makeEmptyString (), GGS_string ("range"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 227)) ;
  }
  {
  const GGS_listDeclarationAST temp_7 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8637, ioArgument_ioTypeMap, GGS_string ("subListFromIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), temp_7.readProperty_mListTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 235)) ;
  }
  {
  const GGS_listDeclarationAST temp_8 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8637, ioArgument_ioTypeMap, GGS_string ("subListToIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), temp_8.readProperty_mListTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 243)) ;
  }
  {
  const GGS_listDeclarationAST temp_9 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8637, ioArgument_ioTypeMap, GGS_string ("subListWithRange"), GGS_string::makeEmptyString (), GGS_string ("range"), GGS_string ("inRange"), temp_9.readProperty_mListTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 251)) ;
  }
  UpEnumerator_typedPropertyList enumerator_9795 (var_typedAttributeList_6635) ;
  while (enumerator_9795.hasCurrentObject ()) {
    {
    GGS_functionSignature temp_10 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 263)) ;
    temp_10.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas3", 263)), var_uintType_7166, GGS_string ("inIndex"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 263)) ;
    var_getterMap_8637.setter_insertOrReplace (GGS_lstring::init_21__21_ (enumerator_9795.current_name (HERE).readProperty_string ().add_operation (GGS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 261)), enumerator_9795.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas3", 262)), temp_10, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 264)), GGS_bool (true), enumerator_9795.current_typeEntry (HERE), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas3", 267)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 260)) ;
    }
    enumerator_9795.gotoNextObject () ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_10277 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_instanceMethodMap_10277.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("first"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 274)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas3", 275)), var_setterOutputFormalArgumentList_7601, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 277)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas3", 279)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 273)) ;
  }
  {
  var_instanceMethodMap_10277.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("last"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 283)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas3", 284)), var_setterOutputFormalArgumentList_7601, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 286)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas3", 288)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 282)) ;
  }
  GGS_setterMap var_setterMap_10812 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  var_setterMap_10812.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("append"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 294)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas3", 295)), var_setterInputFormalArgumentList_7670, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas3", 298)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 293)) ;
  }
  {
  var_setterMap_10812.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("popFirst"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 302)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas3", 303)), var_setterOutputFormalArgumentList_7601, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas3", 306)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 301)) ;
  }
  {
  var_setterMap_10812.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("popLast"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 310)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas3", 311)), var_setterOutputFormalArgumentList_7601, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas3", 314)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 309)) ;
  }
  var_setterOutputFormalArgumentList_7601.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas3", 317)), var_uintType_7166, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas3", 317)), GGS_string ("inIndex")  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 317)) ;
  {
  var_setterMap_10812.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("removeAtIndex"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 319)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas3", 320)), var_setterOutputFormalArgumentList_7601, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas3", 323)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 318)) ;
  }
  UpEnumerator_typedPropertyList enumerator_11776 (var_typedAttributeList_6635) ;
  while (enumerator_11776.hasCurrentObject ()) {
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = enumerator_11776.current_hasSetter (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        GGS_formalParameterSignature var_setterFormalArgumentList_11837 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        var_setterFormalArgumentList_11837.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas3", 329)), enumerator_11776.current_typeEntry (HERE), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas3", 329)), enumerator_11776.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 329)) ;
        var_setterFormalArgumentList_11837.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas3", 330)), var_uintType_7166, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas3", 330)), enumerator_11776.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 330)) ;
        {
        var_setterMap_10812.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("set").add_operation (enumerator_11776.current_name (HERE).readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-list.galgas3", 332)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 332)).add_operation (GGS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 332)), enumerator_11776.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas3", 333)), var_setterFormalArgumentList_11837, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas3", 336)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 331)) ;
        }
      }
    }
    enumerator_11776.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_7670.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas3", 342)), var_uintType_7166, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas3", 342)), GGS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 342)) ;
  {
  var_setterMap_10812.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("insertAtIndex"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 344)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas3", 345)), var_setterInputFormalArgumentList_7670, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas3", 348)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 343)) ;
  }
  GGS_initializerMap var_initializerMap_12876 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_12922 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_listDeclarationAST temp_12 = this ;
  var_initializerMap_12876.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_12922, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 355)), temp_12.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_12922, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 354)) ;
  }
  {
  const GGS_listDeclarationAST temp_13 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_13.readProperty_mListTypeName (), GGS_bool (false), var_initializerMap_12876, var_getterMap_8637, var_setterMap_10812, var_instanceMethodMap_10277, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 359)) ;
  }
  GGS_typeFeatures var_features_13515 = GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-list.galgas3", 375)).operator_or (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-list.galgas3", 375)) COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 375)) ;
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    const GGS_listDeclarationAST temp_15 = this ;
    test_14 = temp_15.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      var_features_13515.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-list.galgas3", 377)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 377)) ;
    }
  }
  {
  const GGS_listDeclarationAST temp_16 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_16.readProperty_mListTypeName (), var_features_13515, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 379)) ;
  }
  const GGS_listDeclarationAST temp_17 = this ;
  const GGS_listDeclarationAST temp_18 = this ;
  const GGS_listDeclarationAST temp_19 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_13853 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_17.readProperty_mListTypeName (), temp_18.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-list.galgas3", 392)), GGS_typeKindEnum::class_func_listType (SOURCE_FILE ("declaration-type-list.galgas3", 393)), GGS_bool (true), var_typedAttributeList_6635, GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_12876, var_classFunctionMap_8389, var_getterMap_8637, var_setterMap_10812, var_instanceMethodMap_10277, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-list.galgas3", 404)), GGS_subscriptMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_7481, var_features_13515, var_constructorAttributeTypeList_7534, GGS_bool (false), var_listElementType_7401, GGS_string ("list-").add_operation (temp_19.readProperty_mListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-list.galgas3", 411)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 411)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-list.galgas3", 412)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_13853.readProperty_typeName (), var_typeDefinition_13853, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 414)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@listDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_structAttributeList_15113 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  const GGS_listDeclarationAST temp_0 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_15202 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_15202.hasCurrentObject ()) {
    var_structAttributeList_15113.addAssignOperation (enumerator_15202.current_mutability (HERE), enumerator_15202.current_typeName (HERE), enumerator_15202.current_name (HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-list.galgas3", 427)), enumerator_15202.current_hasSelector (HERE), enumerator_15202.current_initialization (HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 423)) ;
    enumerator_15202.gotoNextObject () ;
  }
  const GGS_listDeclarationAST temp_1 = this ;
  const GGS_listDeclarationAST temp_2 = this ;
  const GGS_listDeclarationAST temp_3 = this ;
  GGS_structComparison temp_4 ;
  const GalgasBool test_5 = temp_3.readProperty_equatable ().boolEnum () ;
  if (GalgasBool::boolTrue == test_5) {
    temp_4 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-list.galgas3", 436)) ;
  }else if (GalgasBool::boolFalse == test_5) {
    temp_4 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-list.galgas3", 436)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (temp_1.readProperty_isPredefined (), function_makeEmbeddedElementTypeLName (temp_2.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 433)), var_structAttributeList_15113, GGS_string::makeEmptyString (), temp_4, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 431)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@listDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument_inProductDirectory */,
                                                       const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_listDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_16486 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 456)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16486, var_nameForUsefulness_16486, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 457)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_listDeclarationAST temp_2 = this ;
    GGS_bool test_3 = temp_2.readProperty_usefullList () ;
    if (GalgasBool::boolTrue != test_3.boolEnum ()) {
      const GGS_listDeclarationAST temp_4 = this ;
      test_3 = temp_4.readProperty_isPredefined () ;
    }
    test_1 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_16486  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 459)) ;
    }
  }
  const GGS_listDeclarationAST temp_5 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_16746 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_5.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 462)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 461)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16486, var_elementTypeNameForUsefulness_16746 COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 464)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_listDeclarationAST temp_7 = this ;
    GGS_bool test_8 = temp_7.readProperty_usefullList () ;
    if (GalgasBool::boolTrue != test_8.boolEnum ()) {
      const GGS_listDeclarationAST temp_9 = this ;
      test_8 = temp_9.readProperty_isPredefined () ;
    }
    test_6 = test_8.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_elementTypeNameForUsefulness_16746  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 466)) ;
    }
  }
  const GGS_listDeclarationAST temp_10 = this ;
  GGS_lstring var_initializerNameForUsefulness_17154 = function_initializerNameForUsefulEntitiesGraph (temp_10.readProperty_mListTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 471)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 469)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_17154, var_initializerNameForUsefulness_17154, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 473)) ;
  }
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_17154, var_nameForUsefulness_16486 COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 474)) ;
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_listDeclarationAST temp_12 = this ;
    GGS_bool test_13 = temp_12.readProperty_usefullList () ;
    if (GalgasBool::boolTrue != test_13.boolEnum ()) {
      const GGS_listDeclarationAST temp_14 = this ;
      test_13 = temp_14.readProperty_isPredefined () ;
    }
    test_11 = test_13.boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_17154  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 476)) ;
    }
  }
  GGS_typedPropertyList var_typedAttributeList_17652 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_17701 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_listDeclarationAST temp_15 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_17792 (temp_15.readProperty_mPropertyList ()) ;
  while (enumerator_17792.hasCurrentObject ()) {
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = enumerator_17792.current_initialization (HERE).getter_isSome (SOURCE_FILE ("declaration-type-list.galgas3", 482)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_17792.current_name (HERE).readProperty_location (), GGS_string ("property initialization is not handled for a list"), fixItArray17  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 483)) ;
      }
    }
    GGS_lstring var_propertyTypeNameForUsefulness_17964 = function_typeNameForUsefulEntitiesGraph (enumerator_17792.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 485)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16486, var_propertyTypeNameForUsefulness_17964 COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 486)) ;
    }
    GGS_unifiedTypeMapEntry var_t_18154 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_17792.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 487)) ;
    var_typedAttributeList_17652.addAssignOperation (var_t_18154, enumerator_17792.current_name (HERE), enumerator_17792.current_initialization (HERE), GGS_bool (true), enumerator_17792.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 488)) ;
    {
    var_attributeMap_17701.setter_insertKey (enumerator_17792.current_name (HERE), var_t_18154, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 494)) ;
    }
    enumerator_17792.gotoNextObject () ;
  }
  const GGS_listDeclarationAST temp_18 = this ;
  GGS_unifiedTypeMapEntry var_selfType_18425 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_18.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 497)) ;
  const GGS_listDeclarationAST temp_19 = this ;
  const GGS_listDeclarationAST temp_20 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("list type ").add_operation (temp_19.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 499)), GGS_listTypeForGeneration::init_21__21__21_ (var_selfType_18425, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_20.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 502)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 502)), var_typedAttributeList_17652, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 498)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@listTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GGS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_listTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_19387 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 522)) ;
  const GGS_listTypeForGeneration temp_1 = this ;
  const GGS_listTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, var_selfTypeDefinition_19387.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 525)), temp_2.readProperty_mTypedAttributeList (), var_selfTypeDefinition_19387.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_19387.readProperty_typeForEnumeratedElement (), extensionGetter_identifierRepresentation (var_selfTypeDefinition_19387.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 529)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_19387.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 530)) COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 523))) ;
  const GGS_listTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_19387.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 534)), var_selfTypeDefinition_19387.readProperty_isConcrete (), var_selfTypeDefinition_19387.readProperty_initializerMap (), var_selfTypeDefinition_19387.readProperty_classFunctionMap (), var_selfTypeDefinition_19387.readProperty_getterMap (), var_selfTypeDefinition_19387.readProperty_setterMap (), var_selfTypeDefinition_19387.readProperty_instanceMethodMap (), var_selfTypeDefinition_19387.readProperty_classMethodMap (), var_selfTypeDefinition_19387.readProperty_readSubscriptMap (), var_selfTypeDefinition_19387.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_19387.readProperty_features (), var_selfTypeDefinition_19387.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_19387.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_19387.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 532))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 532)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@listTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_listTypeForGeneration temp_0 = this ;
  UpEnumerator_typedPropertyList enumerator_20968 (temp_0.readProperty_mTypedAttributeList ()) ;
  while (enumerator_20968.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_20968.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 558)) ;
    enumerator_20968.gotoNextObject () ;
  }
  const GGS_listTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 560)) ;
  const GGS_listTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 561)) ;
  const GGS_listTypeForGeneration temp_3 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_21182 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 562)) ;
  const GGS_listTypeForGeneration temp_4 = this ;
  const GGS_listTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_21182.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 565)), temp_5.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (var_selfTypeDefinition_21182.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 567)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_21182.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 568)) COMMA_SOURCE_FILE ("declaration-type-list.galgas3", 563))) ;
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

GGS_string filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (Compiler * inCompiler,
                                                                          const GGS_string & in_TYPE_5F_NAME,
                                                                          const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                          const GGS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                          const GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                          const GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                          const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                          const GGS_bool & /* in_GENERATE_5F_COMPARISON */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 2)).add_operation (GGS_string (" list enumerator"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inList) ;\n\n  public: ~ DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) = default ;\n\n  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }\n\n  public: inline void gotoNextObject (void) { mIndex -= 1 ; }\n\n  public: inline void rewind (void) { mIndex = 0 ; }\n\n  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }\n\n") ;
  GGS_uint index_808_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_808 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_808.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_808.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_808.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n") ;
      enumerator_808.gotoNextObject () ;
      index_808_.increment () ;
    }
  }
  const GalgasBool test_0 = in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_isNull (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 22)).operator_not (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 22)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--- Current element access\n  public: class GGS_") ;
    result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 24)).stringValue ()) ;
    result.appendString (" current (LOCATION_ARGS) const ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  private: GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mArray ;\n  private: int32_t mIndex ;\n\n  private: DownEnumerator_") ;
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
  result.appendString (" & inList)  ;\n\n  public: ~ UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) = default ;\n\n  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }\n\n  public: inline void gotoNextObject (void) { mIndex += 1 ; }\n\n  public: inline void rewind (void) { mIndex = 0 ; }\n\n  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }\n\n") ;
  GGS_uint index_2132_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_2132 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_2132.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_2132.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 51)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_2132.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 51)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n") ;
      enumerator_2132.gotoNextObject () ;
      index_2132_.increment () ;
    }
  }
  const GalgasBool test_1 = in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_isNull (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 53)).operator_not (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 53)).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--- Current element access\n  public: class GGS_") ;
    result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 55)).stringValue ()) ;
    result.appendString (" current (LOCATION_ARGS) const ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  private: GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mArray ;\n  private: int32_t mIndex ;\n\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 66)).add_operation (GGS_string (" list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 66)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--- Private property\n  private: GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mArray ;\n\n//--- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- Destructor\n  public: virtual ~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) = default ;\n\n//--- Copy\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = default ;\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = default ;\n\n//--- Is valid\n  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }\n\n//--- Drop\n  public: inline virtual void drop (void) override { mArray.removeAll () ; }\n\n//--- Description\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n//--- Count\n  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }\n \n//--- sortedElementArray\n  public : inline GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> sortedElementArray (void) const {\n    return mArray ;\n  }\n\n//--- subList\n  private: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" subList (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inStart,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t inLength,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n\n//--- List constructor for graph\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const CollectionElementArray & inSharedArray) ;\n\n//--- Element constructor\n  public: static void makeAttributesFromObjects (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("CollectionElement & outAttributes") ;
  GGS_uint index_4612_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4612 (in_PROPERTY_5F_LIST) ;
    while (enumerator_4612.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4612.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 114)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_4612.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 114)).stringValue ()) ;
      enumerator_4612.gotoNextObject () ;
      index_4612_.increment () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'listGenerationTemplate listTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (Compiler * inCompiler,
                                                                                      const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                      const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const GGS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                                      const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                      const GGS_bool & in_GENERATE_5F_COMPARISON
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 2)).add_operation (GGS_string ("' list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass CollectionElementPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public CollectionElementPtr {\n  public: GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" mObject ;\n\n//--- Class functions\n  public: CollectionElementPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_533_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_533 (in_PROPERTY_5F_LIST) ;
    while (enumerator_533.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_533.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_533.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 11)).stringValue ()) ;
      enumerator_533.gotoNextObject () ;
      if (enumerator_533.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_533_.increment () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n  public: CollectionElementPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement COMMA_LOCATION_ARGS) ;\n\n//--- Virtual proc that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual proc that returns a copy of current object\n  public: virtual CollectionElementPtr * copy (void) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nCollectionElementPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::CollectionElementPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_1299_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_1299 (in_PROPERTY_5F_LIST) ;
    while (enumerator_1299.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1299.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 29)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_1299.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 29)).stringValue ()) ;
      enumerator_1299.gotoNextObject () ;
      if (enumerator_1299.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1299_.increment () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\nCollectionElementPtr (THERE),\nmObject (") ;
  GGS_uint index_1549_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_1549 (in_PROPERTY_5F_LIST) ;
    while (enumerator_1549.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1549.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue ()) ;
      enumerator_1549.gotoNextObject () ;
      if (enumerator_1549.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_1549_.increment () ;
    }
  }
  result.appendString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nCollectionElementPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::CollectionElementPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement COMMA_LOCATION_ARGS) :\nCollectionElementPtr (THERE),\nmObject (") ;
  GGS_uint index_1965_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_1965 (in_PROPERTY_5F_LIST) ;
    while (enumerator_1965.hasCurrentObject ()) {
      result.appendString ("inElement.mProperty_") ;
      result.appendString (enumerator_1965.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 49)).stringValue ()) ;
      enumerator_1965.gotoNextObject () ;
      if (enumerator_1965.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_1965_.increment () ;
    }
  }
  result.appendString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool CollectionElementPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return true ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nCollectionElementPtr * CollectionElementPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copy (void) {\n  CollectionElementPtr * result = nullptr ;\n  macroMyNew (result, CollectionElementPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_2604_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_2604 (in_PROPERTY_5F_LIST) ;
    while (enumerator_2604.hasCurrentObject ()) {
      result.appendString ("mObject.mProperty_") ;
      result.appendString (enumerator_2604.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 67)).stringValue ()) ;
      enumerator_2604.gotoNextObject () ;
      if (enumerator_2604.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_2604_.increment () ;
    }
  }
  result.appendString (" COMMA_HERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n// List type @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nmArray () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const CollectionElementArray & inArray) :\nmArray () {\n  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;\n  for (uint32_t i = 0 ; i < inArray.count () ; i++) {\n    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;\n    CollectionElementPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (CollectionElementPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) v.ptr () ;\n    macroValidSharedObject (p, CollectionElementPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n    const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" element (") ;
  GGS_uint index_3719_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3719 (in_PROPERTY_5F_LIST) ;
    while (enumerator_3719.hasCurrentObject ()) {
      result.appendString ("p->mObject.mProperty_") ;
      result.appendString (enumerator_3719.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 93)).stringValue ()) ;
      enumerator_3719.gotoNextObject () ;
      if (enumerator_3719.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_3719_.increment () ;
    }
  }
  result.appendString (") ;\n    mArray.appendObject (element) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::makeAttributesFromObjects (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("CollectionElement & outAttributes") ;
  GGS_uint index_4122_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4122 (in_PROPERTY_5F_LIST) ;
    while (enumerator_4122.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4122.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 105)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_4122.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 105)).stringValue ()) ;
      enumerator_4122.gotoNextObject () ;
      index_4122_.increment () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  CollectionElementPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n  macroMyNew (p, CollectionElementPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_4441_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4441 (in_PROPERTY_5F_LIST) ;
    while (enumerator_4441.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_4441.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 112)).stringValue ()) ;
      enumerator_4441.gotoNextObject () ;
      if (enumerator_4441.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_4441_.increment () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n  outAttributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_uint GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GGS_uint result ;\n  if (isValid ()) {\n    result = GGS_uint (count ()) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_range GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_range (UNUSED_LOCATION_ARGS) const {\n  GGS_range result ;\n  if (isValid ()) {\n    result = GGS_range (0, count ()) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"<list @\") ;\n  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;\n  ioString.appendCString (\" (\") ;\n  ioString.appendUnsigned (count()) ;\n  ioString.appendCString (\" object\") ;\n  ioString.appendString ((count() > 1) \? \"s\" : \"\") ;\n  ioString.appendCString (\"):\") ;\n  if (isValid ()) {\n    for (uint32_t i = 0 ; i < count () ; i++) {\n      ioString.appendNewLine () ;\n      ioString.appendStringMultiple (\"| \", inIndentation) ;\n      ioString.appendString (\"|-at \") ;\n      ioString.appendUnsigned (i) ;\n") ;
  GGS_uint index_5964_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_5964 (in_PROPERTY_5F_LIST) ;
    while (enumerator_5964.hasCurrentObject ()) {
      result.appendString ("      ioString.appendNewLine () ;\n      ioString.appendStringMultiple (\"| \", inIndentation + 1) ;\n      ioString.appendString (\"") ;
      result.appendString (enumerator_5964.current_name (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (":\") ;\n      mArray (int32_t (i) COMMA_HERE).mProperty_") ;
      result.appendString (enumerator_5964.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 162)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation + 1) ;\n") ;
      enumerator_5964.gotoNextObject () ;
      index_5964_.increment () ;
    }
  }
  result.appendString ("    }\n  }else{\n    ioString.appendCString (\" not built\") ;\n  }\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.mArray.setCapacity (16) ; // Build\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusPlusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inValue.isValid ()) {\n    mArray.appendObject (inValue) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_listWithValue (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_7237_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7237 (in_PROPERTY_5F_LIST) ;
    while (enumerator_7237.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7237.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 192)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_7237_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 192)).stringValue ()) ;
      enumerator_7237.gotoNextObject () ;
      if (enumerator_7237.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7237_IDX.increment () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" element (") ;
  GGS_uint index_7471_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7471 (in_PROPERTY_5F_LIST) ;
    while (enumerator_7471.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_7471_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 198)).stringValue ()) ;
      enumerator_7471.gotoNextObject () ;
      if (enumerator_7471.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_7471_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (element.isValid ()) {\n    result.mArray.setCapacity (16) ; // Build\n    result.plusPlusAssignOperation (element COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_7931_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7931 (in_PROPERTY_5F_LIST) ;
    while (enumerator_7931.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7931.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 214)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_7931_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 214)).stringValue ()) ;
      enumerator_7931.gotoNextObject () ;
      if (enumerator_7931.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7931_IDX.increment () ;
    }
  }
  result.appendString ("\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (") ;
  GGS_uint index_8166_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8166 (in_PROPERTY_5F_LIST) ;
    while (enumerator_8166.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_8166_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 221)).stringValue ()) ;
      enumerator_8166.gotoNextObject () ;
      if (enumerator_8166.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_8166_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  plusPlusAssignOperation (newElement COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_append (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_8495_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8495 (in_PROPERTY_5F_LIST) ;
    while (enumerator_8495.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_8495.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 232)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_8495_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 232)).stringValue ()) ;
      result.appendString (",") ;
      enumerator_8495.gotoNextObject () ;
      if (enumerator_8495.hasCurrentObject ()) {
        result.appendString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_8495_IDX.increment () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (") ;
  GGS_uint index_8766_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8766 (in_PROPERTY_5F_LIST) ;
    while (enumerator_8766.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_8766_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 239)).stringValue ()) ;
      enumerator_8766.gotoNextObject () ;
      if (enumerator_8766.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_8766_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  if (isValid () && newElement.isValid ()) {\n    plusPlusAssignOperation (newElement COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insertAtIndex (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_9151_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_9151 (in_PROPERTY_5F_LIST) ;
    while (enumerator_9151.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_9151.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 252)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_9151_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 252)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_9151.gotoNextObject () ;
      index_9151_IDX.increment () ;
    }
  }
  result.appendString ("const GGS_uint inInsertionIndex,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (") ;
  GGS_uint index_9443_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_9443 (in_PROPERTY_5F_LIST) ;
    while (enumerator_9443.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_9443_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 259)).stringValue ()) ;
      enumerator_9443.gotoNextObject () ;
      if (enumerator_9443.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_9443_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {\n    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;\n    if (idx <= mArray.count ()) {\n      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;\n    }else{\n      String message = \"cannot insert at index \" ;\n      message.appendSigned (idx) ;\n      message.appendCString (\", list count is \") ;\n      message.appendSigned (mArray.count ()) ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeAtIndex (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_10234_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_10234 (in_PROPERTY_5F_LIST) ;
    while (enumerator_10234.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_10234.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 281)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_10234_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 281)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_10234.gotoNextObject () ;
      index_10234_IDX.increment () ;
    }
  }
  result.appendString ("const GGS_uint inRemoveIndex,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  bool removed = false ;\n  if (isValid () && inRemoveIndex.isValid ()) {\n    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;\n    if (idx < mArray.count ()) {\n      removed = true ;\n") ;
  GGS_uint index_10689_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_10689 (in_PROPERTY_5F_LIST) ;
    while (enumerator_10689.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_10689_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 293)).stringValue ()) ;
      result.appendString (" = mArray (idx COMMA_HERE).mProperty_") ;
      result.appendString (enumerator_10689.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 293)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_10689.gotoNextObject () ;
      index_10689_IDX.increment () ;
    }
  }
  result.appendString ("      mArray.removeObjectAtIndex (idx COMMA_HERE) ;\n    }else{\n      String message = \"cannot remove at index \" ;\n      message.appendSigned (idx) ;\n      message.appendCString (\", list count is \") ;\n      message.appendSigned (mArray.count ()) ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (!removed) {\n") ;
  GGS_uint index_11224_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_11224 (in_PROPERTY_5F_LIST) ;
    while (enumerator_11224.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_11224_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 306)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_11224.gotoNextObject () ;
      index_11224_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popFirst (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_11506_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_11506 (in_PROPERTY_5F_LIST) ;
    while (enumerator_11506.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_11506.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 314)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_11506_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 314)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_11506.gotoNextObject () ;
      index_11506_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  bool removed = false ;\n  if (isValid ()) {\n    if (mArray.count () > 0) {\n      removed = true ;\n") ;
  GGS_uint index_11822_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_11822 (in_PROPERTY_5F_LIST) ;
    while (enumerator_11822.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_11822_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 324)).stringValue ()) ;
      result.appendString (" = mArray (0 COMMA_THERE).mProperty_") ;
      result.appendString (enumerator_11822.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 324)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_11822.gotoNextObject () ;
      index_11822_IDX.increment () ;
    }
  }
  result.appendString ("      mArray.removeObjectAtIndex (0 COMMA_HERE) ;\n    }else{\n      const String message = \"cannot remove first element, list is empty\" ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (!removed) {\n") ;
  GGS_uint index_12246_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_12246 (in_PROPERTY_5F_LIST) ;
    while (enumerator_12246.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12246_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 334)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_12246.gotoNextObject () ;
      index_12246_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popLast (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_12527_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_12527 (in_PROPERTY_5F_LIST) ;
    while (enumerator_12527.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_12527.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 342)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_12527_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 342)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_12527.gotoNextObject () ;
      index_12527_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  bool removed = false ;\n  if (isValid ()) {\n    if (mArray.count () > 0) {\n      removed = true ;\n") ;
  GGS_uint index_12843_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_12843 (in_PROPERTY_5F_LIST) ;
    while (enumerator_12843.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_12843_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 352)).stringValue ()) ;
      result.appendString (" = mArray.lastObject (HERE).mProperty_") ;
      result.appendString (enumerator_12843.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 352)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_12843.gotoNextObject () ;
      index_12843_IDX.increment () ;
    }
  }
  result.appendString ("      mArray.removeLastObject (HERE) ;\n    }else{\n      const String message = \"cannot remove last element, list is empty\" ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (!removed) {\n") ;
  GGS_uint index_13257_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_13257 (in_PROPERTY_5F_LIST) ;
    while (enumerator_13257.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_13257_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 362)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_13257.gotoNextObject () ;
      index_13257_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_first (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_13536_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_13536 (in_PROPERTY_5F_LIST) ;
    while (enumerator_13536.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_13536.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_13536_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_13536.gotoNextObject () ;
      index_13536_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  bool found = false ;\n  if (isValid ()) {\n    if (mArray.count () > 0) {\n      found = true ;\n") ;
  GGS_uint index_13854_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_13854 (in_PROPERTY_5F_LIST) ;
    while (enumerator_13854.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_13854_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 380)).stringValue ()) ;
      result.appendString (" = mArray (0 COMMA_THERE).mProperty_") ;
      result.appendString (enumerator_13854.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 380)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_13854.gotoNextObject () ;
      index_13854_IDX.increment () ;
    }
  }
  result.appendString ("    }else{\n      const String message = \"cannot get first element, list is empty\" ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (!found) {\n") ;
  GGS_uint index_14223_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_14223 (in_PROPERTY_5F_LIST) ;
    while (enumerator_14223.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_14223_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 389)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_14223.gotoNextObject () ;
      index_14223_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_last (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_14501_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_14501 (in_PROPERTY_5F_LIST) ;
    while (enumerator_14501.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_14501.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 397)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_14501_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 397)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_14501.gotoNextObject () ;
      index_14501_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  bool found = false ;\n  if (isValid ()) {\n    if (mArray.count () > 0) {\n      found = true ;\n") ;
  GGS_uint index_14819_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_14819 (in_PROPERTY_5F_LIST) ;
    while (enumerator_14819.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_14819_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 407)).stringValue ()) ;
      result.appendString (" = mArray.lastObject (HERE).mProperty_") ;
      result.appendString (enumerator_14819.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 407)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_14819.gotoNextObject () ;
      index_14819_IDX.increment () ;
    }
  }
  result.appendString ("    }else{\n      const String message = \"cannot get last element, list is empty\" ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (!found) {\n") ;
  GGS_uint index_15189_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_15189 (in_PROPERTY_5F_LIST) ;
    while (enumerator_15189.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_15189_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 416)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_15189.gotoNextObject () ;
      index_15189_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::add_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n                                            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                                            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = *this ;\n    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;\n    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {\n      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::subList (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inStart,\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t inLength,\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;\n  if (ok) {\n    result.mArray.setCapacity (std::max (16, inLength)) ;\n    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {\n      result.mArray.appendObject (mArray (i COMMA_HERE)) ;\n    }\n  }else{\n    String message = \"cannot get sublist [start: \" ;\n    message.appendSigned (inStart) ;\n    message.appendCString (\", length: \") ;\n    message.appendSigned (inLength) ;\n    message.appendCString (\"], list count is \") ;\n    message.appendSigned (mArray.count ()) ;\n    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subListWithRange (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_range & inRange,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inRange.isValid ()) {\n    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;\n    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;\n    result = subList (start, length, inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subListFromIndex (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_uint & inIndex,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inIndex.isValid ()) {\n    const int32_t start  = int32_t (inIndex.uintValue ()) ;\n    const int32_t length = int32_t (count ()) - start ;\n    result = subList (start, length, inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subListToIndex (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_uint & inIndex,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inIndex.isValid ()) {\n    const int32_t start  = 0 ;\n    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;\n    result = subList (start, length, inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inList,\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inList.isValid ()) {\n    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;\n    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {\n      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;\n    }\n  }\n}\n\n") ;
  GGS_uint index_19291_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_19291 (in_PROPERTY_5F_LIST) ;
    while (enumerator_19291.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_19291.current_hasSetter (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setter_set") ;
        result.appendString (enumerator_19291.current_name (HERE).readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 520)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 520)).stringValue ()) ;
        result.appendString ("AtIndex (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_19291.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 520)).stringValue ()) ;
        result.appendString (" inOperand,\n    ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("GGS_uint inIndex,\n    ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("Compiler * inCompiler\n    ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {\n    const uint32_t idx = inIndex.uintValue () ;\n    if (idx < count ()) {\n      mArray (int32_t (idx) COMMA_HERE).mProperty_") ;
        result.appendString (enumerator_19291.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 527)).stringValue ()) ;
        result.appendString (" = inOperand ;\n    }else{\n      String message = \"cannot access at index \" ;\n      message.appendUnsigned (idx) ;\n      message.appendCString (\", list count is \") ;\n      message.appendSigned (mArray.count ()) ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n}\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_19291.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 541)).stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_19291.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 541)).stringValue ()) ;
      result.appendString ("AtIndex (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("const GGS_uint & inIndex,\n    ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n    ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_19291.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 544)).stringValue ()) ;
      result.appendString (" result ;\n  if (isValid () && inIndex.isValid ()) {\n    const uint32_t idx = inIndex.uintValue () ;\n    if (idx < count ()) {\n      result = mArray (int32_t (idx) COMMA_HERE).mProperty_") ;
      result.appendString (enumerator_19291.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 548)).stringValue ()) ;
      result.appendString (" ;\n    }else{\n      String message = \"cannot access at index \" ;\n      message.appendUnsigned (idx) ;\n      message.appendCString (\", list count is \") ;\n      message.appendSigned (mArray.count ()) ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  return result ;\n}\n") ;
      enumerator_19291.gotoNextObject () ;
      index_19291_IDX.increment () ;
    }
  }
  const GalgasBool test_1 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (count () < inOperand.count ()) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (count () > inOperand.count ()) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n      for (uint32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {\n        const GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" left = mArray (int32_t (i) COMMA_HERE) ;\n        const GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" right = inOperand.mArray (int32_t (i) COMMA_HERE) ;\n        result = left.objectCompare (right) ;\n      }\n    }\n  }\n  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n// Down Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nDownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject) :\nmArray (inEnumeratedObject.sortedElementArray ()),\nmIndex (0) {\n  mIndex = mArray.count () - 1 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mArray (mIndex COMMA_THERE) ;\n}\n\n") ;
  GGS_uint index_22903_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_22903 (in_PROPERTY_5F_LIST) ;
    while (enumerator_22903.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_22903.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 601)).stringValue ()) ;
      result.appendString (" DownEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_22903.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 601)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  return mArray (mIndex COMMA_THERE).mProperty_") ;
      result.appendString (enumerator_22903.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 602)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_22903.gotoNextObject () ;
      index_22903_IDX.increment () ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n// Up Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nUpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject) :\nmArray (inEnumeratedObject.sortedElementArray ()),\nmIndex (0) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mArray (mIndex COMMA_THERE) ;\n}\n\n") ;
  GGS_uint index_24041_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_24041 (in_PROPERTY_5F_LIST) ;
    while (enumerator_24041.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_24041.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 624)).stringValue ()) ;
      result.appendString (" UpEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_24041.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 624)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  return mArray (mIndex COMMA_THERE).mProperty_") ;
      result.appendString (enumerator_24041.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 625)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_24041.gotoNextObject () ;
      index_24041_IDX.increment () ;
    }
  }
  result.appendString ("\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@weakReferenceDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_weakReferenceDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_weakReferenceDeclarationAST temp_0 = this ;
  result_result = GGS_string ("weak reference @").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 34)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@weakReferenceDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                       GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                       GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_weakReferenceDeclarationAST temp_0 = this ;
  const GGS_weakReferenceDeclarationAST temp_1 = this ;
  GGS_lstring var_key_2674 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 48)), temp_1.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_weakReferenceDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2674, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 49)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_weakReferenceDeclarationAST temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      const GGS_weakReferenceDeclarationAST temp_5 = this ;
      const GGS_weakReferenceDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2674, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 53)), temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 51)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@weakReferenceDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                                 const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                                 const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                 const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                 const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_superClassIndex_3935 ;
  GGS_bool var_generateHeaderInSeparateFile_3963 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_weakReferenceDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_superClassIndex_3935 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas3", 74)) ;
      const GGS_weakReferenceDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_3963 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_weakReferenceDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperWeakReferenceTypeName (), var_superClassIndex_3935, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 77)) ;
    }
    const GGS_weakReferenceDeclarationAST temp_4 = this ;
    GGS_unifiedTypeDefinition var_superTypeDefinition_4255 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_4.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 78)) ;
    var_generateHeaderInSeparateFile_3963 = var_superTypeDefinition_4255.readProperty_generateHeaderInSeparateFile () ;
  }
  GGS_unifiedTypeMapEntry var_weakReferenceIndex_4545 ;
  {
  const GGS_weakReferenceDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_5.readProperty_mWeakReferenceTypeName (), var_weakReferenceIndex_4545, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 82)) ;
  }
  GGS_classFunctionMap var_classFunctionMap_4614 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_weakReferenceDeclarationAST temp_6 = this ;
  var_classFunctionMap_4614.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("nil"), temp_6.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_weakReferenceIndex_4545, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 88)) ;
  }
  GGS_getterMap var_getterMap_4819 = GGS_getterMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_4852 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_4893 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_4939 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_weakReferenceDeclarationAST temp_7 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_7.readProperty_mWeakReferenceTypeName (), GGS_bool (false), var_initializerMap_4939, var_getterMap_4819, var_setterMap_4852, var_instanceMethodMap_4893, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 99)) ;
  }
  UpEnumerator_getterMap enumerator_5387 (var_getterMap_4819) ;
  while (enumerator_5387.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (enumerator_5387.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 115)) ;
    enumerator_5387.gotoNextObject () ;
  }
  UpEnumerator_setterMap enumerator_5496 (var_setterMap_4852) ;
  while (enumerator_5496.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (enumerator_5496.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray9  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 118)) ;
    enumerator_5496.gotoNextObject () ;
  }
  UpEnumerator_instanceMethodMap enumerator_5605 (var_instanceMethodMap_4893) ;
  while (enumerator_5605.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (enumerator_5605.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 121)) ;
    enumerator_5605.gotoNextObject () ;
  }
  GGS_typeFeatures var_features_5711 = GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-weak-reference.galgas3", 123)) ;
  {
  const GGS_weakReferenceDeclarationAST temp_11 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_11.readProperty_mWeakReferenceTypeName (), var_features_5711, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 124)) ;
  }
  GGS_unifiedTypeMapEntry var_classIndex_6013 ;
  {
  const GGS_weakReferenceDeclarationAST temp_12 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_12.readProperty_mClassTypeName (), var_classIndex_6013, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 132)) ;
  }
  const GGS_weakReferenceDeclarationAST temp_13 = this ;
  const GGS_weakReferenceDeclarationAST temp_14 = this ;
  const GGS_weakReferenceDeclarationAST temp_15 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_6031 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_13.readProperty_mWeakReferenceTypeName (), temp_14.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), var_superClassIndex_3935, GGS_typeKindEnum::class_func_weakReferenceType (var_classIndex_6013  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 139)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_4939, var_classFunctionMap_4614, GGS_getterMap::init (inCompiler COMMA_HERE), GGS_setterMap::init (inCompiler COMMA_HERE), GGS_instanceMethodMap::init (inCompiler COMMA_HERE), GGS_classMethodMap::init (inCompiler COMMA_HERE), var_classIndex_6013, GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_5711, GGS_functionSignature::init (inCompiler COMMA_HERE), var_generateHeaderInSeparateFile_3963, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas3", 156)), GGS_string ("weak-reference-").add_operation (temp_15.readProperty_mWeakReferenceTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas3", 157)), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 157)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-weak-reference.galgas3", 158)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_6031.readProperty_typeName (), var_typeDefinition_6031, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 160)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@weakReferenceDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_string /* constinArgument_inProductDirectory */,
                                                                const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_weakReferenceDeclarationAST temp_0 = this ;
  GGS_lstring var_weakRefTypeNameForUsefulness_7771 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 177)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_weakRefTypeNameForUsefulness_7771, var_weakRefTypeNameForUsefulness_7771, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 178)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_weakReferenceDeclarationAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_weakReferenceDeclarationAST temp_3 = this ;
      GGS_lstring var_superWeakRefNameForUsefulness_8025 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 180)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_weakRefTypeNameForUsefulness_7771, var_superWeakRefNameForUsefulness_8025 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 181)) ;
      }
    }
  }
  const GGS_weakReferenceDeclarationAST temp_4 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8285 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 184)) ;
  const GGS_weakReferenceDeclarationAST temp_5 = this ;
  GGS_unifiedTypeMapEntry temp_6 ;
  const GalgasBool test_7 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_7) {
    temp_6 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas3", 187)) ;
  }else if (GalgasBool::boolFalse == test_7) {
    const GGS_weakReferenceDeclarationAST temp_8 = this ;
    temp_6 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_8.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 188)) ;
  }
  GGS_unifiedTypeMapEntry var_superClassEntry_8407 = temp_6 ;
  const GGS_weakReferenceDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_referenceClassType_8634 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 191)) ;
  const GGS_weakReferenceDeclarationAST temp_10 = this ;
  GGS_unifiedTypeMapEntry var_optionalClassTypeOrNull_8769 = extensionGetter_typeMapEntryOrNullForLKey (ioArgument_ioTypeMap, function_makeOptionalTypeLName (temp_10.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 196)), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 195)) ;
  const GGS_weakReferenceDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("weak reference ").add_operation (temp_11.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 199)), GGS_weakReferenceTypeForGeneration::init_21__21__21__21__21_ (var_selfType_8285, var_referenceClassType_8634, var_superClassEntry_8407, extensionGetter_definition (var_selfType_8285, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 204)).readProperty_generateHeaderInSeparateFile (), var_optionalClassTypeOrNull_8769, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 198)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@weakReferenceTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_string & outArgument_outHeader,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_weakReferenceTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-weak-reference.galgas3", 224)).operator_not (SOURCE_FILE ("declaration-type-weak-reference.galgas3", 224)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_weakReferenceTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 225)) ;
    }
  }
  const GGS_weakReferenceTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReferenceClassType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 227)) ;
  const GGS_weakReferenceTypeForGeneration temp_4 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_10240 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 228)) ;
  GGS_string var_optionalClassTypeNameRepresentation_10302 ;
  const GGS_weakReferenceTypeForGeneration temp_5 = this ;
  switch (temp_5.readProperty_optionalClassTypeOrNull ().enumValue ()) {
  case GGS_unifiedTypeMapEntry::Enumeration::invalid:
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
    {
      var_optionalClassTypeNameRepresentation_10302 = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_2E_weak extractedValue_10451__0 ;
      temp_5.readProperty_optionalClassTypeOrNull ().getAssociatedValuesFor_element (extractedValue_10451__0) ;
      const GGS_weakReferenceTypeForGeneration temp_6 = this ;
      var_optionalClassTypeNameRepresentation_10302 = extensionGetter_identifierRepresentation (temp_6.readProperty_optionalClassTypeOrNull (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 234)) ;
    }
    break ;
  }
  const GGS_weakReferenceTypeForGeneration temp_7 = this ;
  const GGS_weakReferenceTypeForGeneration temp_8 = this ;
  const GGS_weakReferenceTypeForGeneration temp_9 = this ;
  GGS_string temp_10 ;
  const GalgasBool test_11 = temp_9.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-weak-reference.galgas3", 239)).boolEnum () ;
  if (GalgasBool::boolTrue == test_11) {
    temp_10 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_11) {
    const GGS_weakReferenceTypeForGeneration temp_12 = this ;
    temp_10 = extensionGetter_identifierRepresentation (temp_12.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 239)) ;
  }
  outArgument_outHeader = GGS_string (filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeHeader_31_ (inCompiler, extensionGetter_identifierRepresentation (temp_7.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 237)), extensionGetter_identifierRepresentation (temp_8.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 238)), temp_10, var_optionalClassTypeNameRepresentation_10302 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 236))) ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typeDefinition_10240.readProperty_typeName ().readProperty_string (), var_typeDefinition_10240.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas3", 244)), var_typeDefinition_10240.readProperty_isConcrete (), var_typeDefinition_10240.readProperty_initializerMap (), var_typeDefinition_10240.readProperty_classFunctionMap (), var_typeDefinition_10240.readProperty_getterMap (), var_typeDefinition_10240.readProperty_setterMap (), var_typeDefinition_10240.readProperty_instanceMethodMap (), var_typeDefinition_10240.readProperty_classMethodMap (), var_typeDefinition_10240.readProperty_readSubscriptMap (), var_typeDefinition_10240.readProperty_enumerationDescriptorList (), var_typeDefinition_10240.readProperty_features (), var_typeDefinition_10240.readProperty_addAssignOperatorArguments (), var_typeDefinition_10240.readProperty_typeForEnumeratedElement (), var_typeDefinition_10240.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 242))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 242)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@weakReferenceTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_string & outArgument_outImplementation,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_weakReferenceTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 268)) ;
  const GGS_weakReferenceTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_11895 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 269)) ;
  GGS_string var_optionalClassTypeNameRepresentation_11957 ;
  const GGS_weakReferenceTypeForGeneration temp_2 = this ;
  switch (temp_2.readProperty_optionalClassTypeOrNull ().enumValue ()) {
  case GGS_unifiedTypeMapEntry::Enumeration::invalid:
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
    {
      var_optionalClassTypeNameRepresentation_11957 = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_2E_weak extractedValue_12106__0 ;
      temp_2.readProperty_optionalClassTypeOrNull ().getAssociatedValuesFor_element (extractedValue_12106__0) ;
      const GGS_weakReferenceTypeForGeneration temp_3 = this ;
      var_optionalClassTypeNameRepresentation_11957 = extensionGetter_identifierRepresentation (temp_3.readProperty_optionalClassTypeOrNull (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 275)) ;
      const GGS_weakReferenceTypeForGeneration temp_4 = this ;
      extensionMethod_addHeaderFileName (temp_4.readProperty_optionalClassTypeOrNull (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 276)) ;
    }
    break ;
  }
  const GGS_weakReferenceTypeForGeneration temp_5 = this ;
  const GGS_weakReferenceTypeForGeneration temp_6 = this ;
  GGS_string temp_7 ;
  const GalgasBool test_8 = temp_6.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-weak-reference.galgas3", 281)).boolEnum () ;
  if (GalgasBool::boolTrue == test_8) {
    temp_7 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_8) {
    const GGS_weakReferenceTypeForGeneration temp_9 = this ;
    temp_7 = extensionGetter_identifierRepresentation (temp_9.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 281)) ;
  }
  outArgument_outImplementation = GGS_string (filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_5.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 279)), var_typeDefinition_11895.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas3", 280)), temp_7, var_optionalClassTypeNameRepresentation_11957 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas3", 278))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'weakClassGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_weakClassGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_weakClassGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_weakClassGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_weakClassGenerationTemplate_0,
  0,
  gWrapperAllDirectories_weakClassGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'weakClassGenerationTemplate weakReferenceClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeHeader_31_ (Compiler * inCompiler,
                                                                                             const GGS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                             const GGS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                             const GGS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                             const GGS_string & in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 2)).add_operation (GGS_string (" weak reference class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public ") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("AC_GALGAS_weak_reference") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("GGS_") ;
    result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Constructor and assignment from strong reference\n  public: GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n  public: GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const class GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--------------------------------- Constructor and assignment from optional reference\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::notEqual, in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("  public: GGS_") ;
    result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (const class GGS_") ;
    result.appendString (in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------- nil initializer\n  public: inline static GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" init_nil (void) {\n    GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;\n    return result ;\n  }\n\n//--------------------------------- Bang operator\n  public: GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" bang_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;\n\n//--------------------------------- isValuated\n  public: inline bool isValuated (void) const {\n    return isValid () && (ptr () != nullptr) ;\n  }\n\n//--------------------------------- Unwrapped value\n  public: GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" unwrappedValue (void) const ;\n\n//--------------------------------- GALGAS read only properties\n  public: inline GGS_bool readProperty_isNil (void) const {\n    return GGS_bool (isValid (), ptr () == nullptr) ;\n  }\n\n  public: inline GGS_bool readProperty_isSome (void) const {\n    return GGS_bool (isValid (), ptr () != nullptr) ;\n  }\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'weakClassGenerationTemplate weakReferenceClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeSpecificImplementation (Compiler * /* inCompiler */,
                                                                                                         const GGS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                                         const GGS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                         const GGS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                         const GGS_string & in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    PtrWeakReferenceProxy * myPtr = mProxyPtr ;\n    const size_t myObjectPtr = size_t (myPtr) ;\n    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;\n    const size_t operandObjectPtr = size_t (operandPtr) ;\n    if (myObjectPtr < operandObjectPtr) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (myObjectPtr > operandObjectPtr) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("AC_GALGAS_weak_reference") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("GGS_") ;
    result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n  PtrWeakReferenceProxy * proxyPtr = nullptr ;\n  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;\n  if (p != nullptr) {\n    proxyPtr = p->getProxy () ;\n  }\n  macroAssignSharedObject (mProxyPtr, proxyPtr) ;\n  return *this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("AC_GALGAS_weak_reference") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("GGS_") ;
    result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" (inSource) {\n}\n\n") ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
    result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::GGS_") ;
    result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (const class GGS_") ;
    result.appendString (in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) :\n") ;
    const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    switch (test_3) {
    case GalgasBool::boolTrue : {
      result.appendString ("AC_GALGAS_weak_reference") ;
      } break ;
    case GalgasBool::boolFalse : {
      result.appendString ("GGS_") ;
      result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString (" () {\n  if (inSource.isValid ()) {\n    if (inSource.isNil ()) {\n      macroMyNew (mProxyPtr, PtrWeakReferenceProxy (HERE)) ;\n    }else if (inSource.isValuated ()) {\n      const GGS_") ;
    result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" v = inSource.unwrappedValue () ;\n      AbstractStrongPtrClass * ptr = (AbstractStrongPtrClass *) v.ptr () ;\n      if (ptr != nullptr) {\n        PtrWeakReferenceProxy * proxy = ptr->getProxy () ;\n        macroAssignSharedObject (mProxyPtr, proxy) ;\n      }\n    }\n  }\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_nil (LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::unwrappedValue (void) const {\n  GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid ()) {\n    const cPtr_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cPtr_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) ptr () ;\n    if (nullptr != p) {\n      result = GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (p) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::bang_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCompiler COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mProxyPtr != nullptr) {\n    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;\n    if (strongPtr == nullptr) {\n      inCompiler->onTheFlySemanticError (\"weak reference is nil\" COMMA_THERE) ;\n    }else{\n      macroValidSharedObject (strongPtr, cPtr_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n      result = GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ((cPtr_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) strongPtr) ;\n    }\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@uint64PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_uint_36__34_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 28))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@uint64PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_uint_36__34_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 34)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 34)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 34)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 34)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 34)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 35)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 35)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 35)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 36)).operator_or (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 37)).operator_or (GGS_typeFeatures::class_func_incDecOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 37)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 37)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 37)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 37)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 38)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 38)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 38)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 38)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 39)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 39)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 40)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@uint64PredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_uint_36__34_PredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GGS_classFunctionMap & outArgument_outMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("uint64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 48)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64MaskWithCompressedBitString"), GGS_string ("string"), GGS_string ("inBitString"), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 55)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64BaseValueWithCompressedBitString"), GGS_string ("string"), GGS_string ("inBitString"), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 64)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64WithBitString"), GGS_string ("string"), GGS_string ("inBitString"), GGS_string ("uint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 73)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@uint64PredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_uint_36__34_PredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GGS_getterMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 88)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("double"), GGS_string::makeEmptyString (), GGS_string ("double"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 89)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string::makeEmptyString (), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 97)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint"), GGS_string::makeEmptyString (), GGS_string ("sint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 105)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sint64"), GGS_string::makeEmptyString (), GGS_string ("sint64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 120)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintSlice"), GGS_string ("uint"), GGS_string ("inStartBit"), GGS_string ("uint"), GGS_string ("inBitCount"), GGS_string ("uint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 128)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("alphaString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 137)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 145)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 153)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("uint"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 161)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 172)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("uint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 180)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("uint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 187)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("uint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 194)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("uint64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas3", 201)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@enumDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_enumDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_enumDeclarationAST temp_0 = this ;
  result_result = GGS_string ("enum @").add_operation (temp_0.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 203)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumDeclarationAST temp_0 = this ;
  UpEnumerator_enumConstantList enumerator_6994 (temp_0.readProperty_mConstantList ()) ;
  while (enumerator_6994.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_6994.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas3", 210)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_enumDeclarationAST temp_2 = this ;
        GGS_lstring var_associatedTypeName_7080 = GGS_lstring::init_21__21_ (function_makeEmbeddedTypeName (temp_2.readProperty_enumTypeName ().readProperty_string (), enumerator_6994.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 212)), enumerator_6994.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
        GGS_propertyInCollectionListAST var_propertyListAST_7270 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_associatedValue_5D_ enumerator_7332 (enumerator_6994.current (HERE).readProperty_associatedValueTypeList ()) ;
        while (enumerator_7332.hasCurrentObject ()) {
          GGS_lstring temp_3 ;
          const GalgasBool test_4 = enumerator_7332.current (HERE).readProperty_weakQualifier ().boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            temp_3 = function_makeWeakTypeLName (enumerator_7332.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 218)) ;
          }else if (GalgasBool::boolFalse == test_4) {
            temp_3 = enumerator_7332.current (HERE).readProperty_typeName () ;
          }
          GGS_lstring var_associatedValueTypeName_7373 = temp_3 ;
          var_propertyListAST_7270.addAssignOperation (GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-type-enum.galgas3", 222)), var_associatedValueTypeName_7373, enumerator_7332.current (HERE).readProperty_valueName (), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-enum.galgas3", 225)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-enum.galgas3", 227))  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 221)) ;
          enumerator_7332.gotoNextObject () ;
        }
        const GGS_enumDeclarationAST temp_5 = this ;
        GGS_structDeclarationAST var_s_7816 = GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (false), var_associatedTypeName_7080, var_propertyListAST_7270, GGS_string::makeEmptyString (), temp_5.readProperty_comparison (), GGS_bool (true), inCompiler COMMA_HERE) ;
        ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (var_s_7816  COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 237)) ;
        {
        GGS_lstring joker_8160 ; // Joker input parameter
        extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_8160, var_associatedTypeName_7080, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 238)) ;
        }
      }
    }
    enumerator_6994.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@enumDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumDeclarationAST temp_0 = this ;
  const GGS_enumDeclarationAST temp_1 = this ;
  GGS_lstring var_key_9026 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 257)), temp_1.readProperty_enumTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_enumDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_9026, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 258)) ;
  }
  GGS_bool var_circularReference_9257 = GGS_bool (true) ;
  const GGS_enumDeclarationAST temp_3 = this ;
  UpEnumerator_enumConstantList enumerator_9307 (temp_3.readProperty_mConstantList ()) ;
  bool bool_4 = var_circularReference_9257.isValidAndTrue () ;
  if (enumerator_9307.hasCurrentObject () && bool_4) {
    while (enumerator_9307.hasCurrentObject () && bool_4) {
      GGS_bool var_namesCurrentType_9358 = GGS_bool (false) ;
      UpEnumerator__5B_associatedValue_5D_ enumerator_9421 (enumerator_9307.current (HERE).readProperty_associatedValueTypeList ()) ;
      bool bool_5 = var_namesCurrentType_9358.operator_not (SOURCE_FILE ("declaration-type-enum.galgas3", 263)).isValidAndTrue () ;
      if (enumerator_9421.hasCurrentObject () && bool_5) {
        while (enumerator_9421.hasCurrentObject () && bool_5) {
          GGS_lstring var_propertyKey_9487 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_9421.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 264)), enumerator_9421.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::equal, var_propertyKey_9487.readProperty_string ().objectCompare (var_key_9026.readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              var_namesCurrentType_9358 = GGS_bool (true) ;
            }
          }
          enumerator_9421.gotoNextObject () ;
          if (enumerator_9421.hasCurrentObject ()) {
            bool_5 = var_namesCurrentType_9358.operator_not (SOURCE_FILE ("declaration-type-enum.galgas3", 263)).isValidAndTrue () ;
          }
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = var_namesCurrentType_9358.operator_not (SOURCE_FILE ("declaration-type-enum.galgas3", 269)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          var_circularReference_9257 = GGS_bool (false) ;
        }
      }
      enumerator_9307.gotoNextObject () ;
      if (enumerator_9307.hasCurrentObject ()) {
        bool_4 = var_circularReference_9257.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = var_circularReference_9257.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_enumDeclarationAST temp_9 = this ;
      UpEnumerator_enumConstantList enumerator_9888 (temp_9.readProperty_mConstantList ()) ;
      while (enumerator_9888.hasCurrentObject ()) {
        UpEnumerator__5B_associatedValue_5D_ enumerator_9945 (enumerator_9888.current (HERE).readProperty_associatedValueTypeList ()) ;
        while (enumerator_9945.hasCurrentObject ()) {
          GGS_lstring var_propertyKey_9986 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_9945.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 277)), enumerator_9945.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
          GalgasBool test_10 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_10) {
            test_10 = GGS_bool (ComparisonKind::notEqual, var_propertyKey_9986.readProperty_string ().objectCompare (var_key_9026.readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_9026, var_propertyKey_9986 COMMA_SOURCE_FILE ("declaration-type-enum.galgas3", 279)) ;
              }
            }
          }
          enumerator_9945.gotoNextObject () ;
        }
        enumerator_9888.gotoNextObject () ;
      }
    }
  }
}

